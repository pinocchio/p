
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Character.h>

/* ======================================================================== */

Type_Class Character_Class;

/* ======================================================================== */

Type_Character * Character_cache;

Type_Character new_raw_Character(wchar_t value)
{
    Type_Character result = NEW_t(Type_Character);
    HEADER(result)        = (Object)Character_Class;
    result->value         = value;
    // TODO add character table here for caching
    return result;
}


Type_Character new_Character(wchar_t value)
{
    if (value < CHARACTER_CACHE_SIZE) {
        return Character_cache[value];
    }
    return new_raw_Character(value);
}
    

void pre_initialize_Character()
{
    Character_Class = new_Named_Class((Object)Object_Class, L"Character");
}

/* ======================================================================== */

NATIVE1(NM_Character_equals_)
}

NATIVE0(NM_Character_asString)
    // TODO add \0 at the end
    push_EXP(new_String(&((Type_Character)self)->value));
}

NATIVE0(NM_Character_asSymbol)
    // TODO add \0 at the end
    push_EXP(new_Symbol(&((Type_Character)self)->value));
}

NATIVE0(NM_Character_asSmallInt)
    // TODO add \0 at the end
    push_EXP(new_SmallInt(((Type_Character)self)->value));
}

/* ======================================================================== */


void initialize_Character_Cache()
{
    Character_cache = (Type_Character *)PALLOC(sizeof(struct Type_Character_t[CHARACTER_CACHE_SIZE]));
    int i;
    for (i = 0; i < CHARACTER_CACHE_SIZE; i++) {
        Character_cache[i] = new_raw_Character(i);
    }
}

void post_initialize_Character()
{ 
    initialize_Character_Cache();
    store_native_method(Character_Class,SMB_asString,   NM_Character_asString);
    store_native_method(Character_Class,SMB_asSymbol,   NM_Character_asSymbol);
    store_native_method(Character_Class,SMB_asSmallInt, NM_Character_asSmallInt);
}
