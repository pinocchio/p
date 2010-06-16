#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <system/type/Symbol.h>
#include <system/type/String.h>

/* ========================================================================= */

DECLARE_CLASS(String);
String empty_String;

/* ========================================================================= */

String new_String(const wchar_t * str)
{
    String string  = (String)new_Symbol(str);
    HEADER(string) = String_Class;
    return string;
}

String new_String_sized(uns_int size)
{
    size += 1;
    String result  = NEW_ARRAYED(struct Symbol_t, wchar_t[size]);
    HEADER(result) = String_Class;
    result->size   = size;
    while(size--) {
        result->value[size] = '\0';
    }
    result->hash   = Symbol_hash((Symbol)result);
    return result;
}

/* ========================================================================= */

String new_String_from_charp(const char * input)
{
    long size          = strlen(input)+1;
    wchar_t cp[size];
    cp[size - 1]      = L'\0';
    wchar_t * copy    = &cp[0];
    swprintf(copy, size, L"%s", input);
    return new_String(copy);
}

String String_concat_(String str1, String str2)
{
    assert1(str1 && str1->value, "Invalid Argument for String concat:");
    assert1(str2 && str2->value, "Invalid Argument for String concat:");
    long len = str1->size + str2->size + 1;
    wchar_t conc[len];
    conc[len - 1] = L'\0';
    wchar_t * concatenated = &conc[0];
    concatenated = wcsncpy(concatenated, str1->value, str1->size);
    assert0(concatenated!=NULL);
    wchar_t * rc = wcsncpy(concatenated + str1->size, str2->value, str2->size);
    assert0(rc!=NULL);
    return new_String(concatenated);
}

long Words_compare(Symbol s1, Symbol s2)
{
    if (s1->size != s2->size) {
        return 0;
    }
    return !wcsncmp(s1->value, s2->value, s1->size);
}

THREADED(string_concat)
    String self   = (String)PEEK_EXP(1);
    String string = (String)PEEK_EXP(0);
    ZAP_EXP();
    POKE_EXP(0, String_concat_(self, (String)string));
    return t_return(pc);
}

THREADED(string_concat_asString)
    Optr obj = pop_EXP();
    Optr tag = GETTAG(obj);
    if (TAG_IS_LAYOUT(tag, Words)) {
        String self = (String)PEEK_EXP(0);
        POKE_EXP(0, String_concat_(self, (String)obj));
        return t_return(pc);
    } else {
        set_pc(pc + 1);
        return Class_direct_dispatch(obj, HEADER(obj), (Optr)SMB_asString, 0);
    }
}

NNATIVE(String_concat_, 2,
    t_string_concat_asString,
    t_string_concat)

NATIVE1(String_concat_)
    push_code(T_String_concat_);
}

NATIVE0(String_asSymbol)
    RETURN_FROM_NATIVE(new_Symbol_cached(((String)self)->value));
}

// TODO check types not classes!
NATIVE2(String_at_put_)
    Optr w_arg0 = NATIVE_ARG(0);
    Optr w_arg1 = NATIVE_ARG(1);
    ASSERT_INSTANCE_OF(w_arg0, SmallInt_Class);
    ASSERT_INSTANCE_OF(w_arg1, Character_Class);
    long index = unwrap_int(w_arg0) - 1;
    assert(0 <= index, printf("Index below 0: %li\n", index));
    assert(index < ((String)self)->size,
        printf("%li is out of Bounds[%lu] %p\n",
                    index,
                    ((String)self)->size,
                    self));
    ((String)self)->value[index] = ((Character)w_arg1)->value;
    ((String)self)->hash         = Symbol_hash((Symbol)self);
    RETURN_FROM_NATIVE(self);
}

NATIVE1(String_basicNew_)
    // TODO check type
    Optr w_size      = NATIVE_ARG(0);
    long size           = unwrap_int(w_size);
    String result = new_String_sized(size);
    RETURN_FROM_NATIVE(result);
}

long wchar_withbase_to_number(uns_int base, const wchar_t * string, uns_int size)
{
    // TODO handle overflows!
    long result = 0;
    long sign;

    if (*string == L'-') {
        sign = -1;
        string++;
    } else {
        sign = 1;
    }

    while (size--) {
        uns_int chr = *string++ - 48;
        // ensure it's within the 0-9 range
        if (chr < 10) {
            if (chr < base) {
                result = (result * base) + chr;
                continue;
            }
            break;
        }
        // shift from 0-9 to A-Z
        chr = chr + 48 - 65 + 10;
        if (chr < base) {
            result = (result * base) + chr;
            continue;
        }
        break;
    }

    return sign * result;
}

Optr wchar_to_number(const wchar_t * string, uns_int size)
{
    // TODO make it accept other types ... or just use Pharo's version.
    // TODO handle overflows!
    // TODO handle floats!

    long result = 0;
    long sign;

    if (*string == L'-') {
        sign = -1;
        string++;
    } else {
        sign = 1;
    }

    while (size--) {
        uns_int chr = *string++ - 48;
        if (chr < 10) {
            result = (result * 10) + chr;
            continue;
        }
        if (chr == L'r' - 48) {
            assert0(result <= 36);
            result = wchar_withbase_to_number(result, string, size);
        }
        break;
    }
    return (Optr)new_SmallInt(sign * result);
}

char * unicode_to_ascii(const wchar_t* str)
{
    long len       = wcslen(str);
    char* charname = (char*)PALLOC(sizeof(char[len]));
    int charLen    = wcstombs(charname, str, len);
    assert(charLen == len, 
           printf("String '%ls' -> '%s' not ASCII compatible.\n", str, charname));
    return charname;
}

wchar_t * ascii_to_unicode(const char* str)
{
    long len          = strlen(str);
    wchar_t* charname = (wchar_t*)PALLOC(sizeof(wchar_t[len]));
    assert(mbstowcs(charname, str, len) == len, 
                    printf("String '%s' -> '%ls' not UTF compatible.", str, charname));
    return charname;
}

NATIVE0(String_asNumber)
    Symbol symbol = (Symbol)self;
    RETURN_FROM_NATIVE(wchar_to_number(symbol->value, symbol->size));
}

/* ========================================================================= */

void post_init_String()
{
    String_Class->layout = create_layout(0, WORDS);
    empty_String = new_String(L"");
    Dictionary natives = add_plugin(L"Type.String");
    
    INIT_NATIVE(String_concat_);    

    store_native(natives, SMB__concat,   NM_String_concat_);
    store_native(natives, SMB_asSymbol,  NM_String_asSymbol);
    store_native(natives, SMB_at_put_,   NM_String_at_put_);
    store_native(natives, SMB_asNumber,  NM_String_asNumber);
    store_native(natives, SMB_basicNew_, NM_String_basicNew_);
}

