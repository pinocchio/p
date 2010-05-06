#include <stdarg.h>
#include <wchar.h>
#include <pinocchio.h>
#include <debug.h>


void help() {
    fwprintf(StandardError->file, L"    at              (Object, uns_int)      \n");
    fwprintf(StandardError->file, L"    atn             (Object, wchar_t *)    \n");
    fwprintf(StandardError->file, L"    atX             (Object, count, idx...)\n");
    fwprintf(StandardError->file, L"    class           (Object)               \n");
    fwprintf(StandardError->file, L"    i,inspect       (Object)               \n");
    fwprintf(StandardError->file, L"    inspect_at      (Object, uns_int)      \n");
    fwprintf(StandardError->file, L"    inspect_atn     (Object, wchar_t *)    \n");
    fwprintf(StandardError->file, L"    methods         (Object)               \n");
    fwprintf(StandardError->file, L"    exps                                   \n");
    fwprintf(StandardError->file, L"    sends                                  \n");
}

void h() {
    return help();
}


void _indent_(uns_int i)
{
    uns_int todo = 0;
    while (todo++ != i) {
        if (todo % 4) {
            printf("  ");
        } else {
            printf("| ");
        }
    }
}

void print_EXP()
{
    uns_int size = EXP_size();
    uns_int cur = 0;
    while (cur < size) {
        Object c = tget(Double_Stack)[cur++];
        if (c > (Object)10000) {
            print_Class(c);
        } else {
            fwprintf(StandardError->file, L"%"F_I"i\n", (uns_int)c);
        }
    }
}

void exps() {
    print_EXP();
}


void print_Symbol(Object s)
{
    Object tag = GETTAG(s);
    if (TAG_IS_LAYOUT(tag, Words)) {
        fwprintf(StandardError->file, L"\"%ls\"\n", ((Type_Symbol)s)->value);
    } else {
        fwprintf(StandardError->file, L"Not a symbol: %p\n", s);
        print_Class(s);
    }
}

uns_int nrsends()
{
    uns_int size = EXP_size();
    uns_int cur = 0;
    uns_int nr = 0;
    while (cur < size) {
        Object c = tget(Double_Stack)[cur++];
        if (c > (Object)10000 && HEADER(c) == AST_Send_Class) {
            nr++;
        }
    }
    return nr;
}

void sends()
{
    uns_int size = EXP_size();
    uns_int cur = 0;
    while (cur < size) {
        Object c = tget(Double_Stack)[cur++];
        if (c > (Object)10000 && HEADER(c) == AST_Send_Class) {
            AST_Send send = (AST_Send)c;
            print_AST_Info(send->info);
            print_Symbol(send->message);
        }
    }
}


Object atn(Object o, const wchar_t * s)
{
    Object tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Object)) {
        int i;
        uns_int size = ((Type_Array)tag)->size;
        for (i = 0; i < size; i++) {
            AST_Slot v = (AST_Slot)((Type_Array)tag)->values[i];
            Type_Symbol sym = (Type_Symbol)v->name;
            if (wcsncmp(sym->value, s, sym->size)) { continue; }
            return ((Type_Object)o)->ivals[i];
        }
        assert(NULL, fwprintf(StandardError->file, L"Var not found: %ls\n", s););
    }
    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = ((Type_Array)tag)->size;
        int i;
        for (i = 0; i < size; i++) {
            AST_Slot v = (AST_Slot)((Type_Array)tag)->values[i];
            Type_Symbol sym = (Type_Symbol)v->name;
            if (wcsncmp(sym->value, s, sym->size)) { continue; }
            return ((Type_Array)o)->values[i];
        }
        assert(NULL, fwprintf(StandardError->file, L"Var not found: %ls\n", s););
    }
    assert(NULL, fwprintf(StandardError->file, L"Non-indexable object\n"););
    return NULL;
}

Object dict_at(Object o, uns_int at)
{
    Collection_Dictionary dict = (Collection_Dictionary)o;
    uns_int ds = dict->data->size;
    uns_int i;
    uns_int idx = 0;
    for (i = 0; i < ds; i++) {
        Type_Array bucket = (Type_Array)dict->data->values[i];
        if (bucket == (Type_Array)Nil) { continue; }
        uns_int j;
        for (j = 0; j < bucket->size; j+=2) {
            if (bucket->values[j] == Nil) { break; }
            if (idx == at) {
                return bucket->values[j+1];
            }
            idx++;
        }
    }
    return NULL;
}

Object at(Object o, uns_int i)
{
    if (HEADER(o) == Collection_Dictionary_Class) {
        return dict_at(o, i);
    }
    Object tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Object)) {
        uns_int size = ((Type_Array)tag)->size;
        assert0(i < size);
        return ((Type_Object)o)->ivals[i];
    }
    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = ((Type_Array)tag)->size;
        uns_int isize = ((Type_Array)o)->size;
        assert0(i < size + isize);
        return ((Type_Array)o)->values[i];
    }
    assert(NULL, fwprintf(StandardError->file, L"Non-indexable object\n"););
    return NULL;
}

Object atx(Object o, uns_int argc, ...)
{
    va_list args;
    va_start(args, argc);
    int index;
    for (index = 0; index < argc; index++) {
        o = at(o, va_arg(args, uns_int));
    }
    va_end(args);
    return o;
}

void shallow_inspect(Object o)
{
    if (o == NULL) {
        fwprintf(StandardError->file, L"NULL object\n");
        return;
    }
    if (o < (Object)100000) {
        fwprintf(StandardError->file, L"Object probably uns_int: %"F_I"u\n", (uns_int)o);
        return;
    } 
    if (HEADER(o) == NULL) {
        fwprintf(StandardError->file, L"Object with NULL class\n");
        return;
    }
    if (o == Nil) {
        fwprintf(StandardError->file, L"nil\n");
        return;
    }
    if (o == (Object)True) {
        fwprintf(StandardError->file, L"true\n");
        return;
    }
    if (o == (Object)False) {
        fwprintf(StandardError->file, L"false\n");
        return;
    }
    Type_Class cls = HEADER(o);

    if (HEADER(cls) == Metaclass) {
        fwprintf(StandardError->file, L"%ls", ((Type_Class)o)->name->value);
    } else {
        fwprintf(StandardError->file, L"Instance of %ls", cls->name->value);
    }

    Object tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Words)) {
        fwprintf(StandardError->file, L": '%ls'\n", ((Type_Symbol)o)->value);
        return;
    }
    if (TAG_IS_LAYOUT(tag, Int)) {
        fwprintf(StandardError->file, L": %i\n", ((Type_SmallInt)o)->value);
        return;
    }
    fwprintf(StandardError->file, L"\n");
}

void inspect_dict(Object o)
{
    Collection_Dictionary dict = (Collection_Dictionary)o;
    uns_int ds = dict->data->size;
    uns_int i;
    uns_int idx = 0;
    for (i = 0; i < ds; i++) {
        Type_Array bucket = (Type_Array)dict->data->values[i];
        if (bucket == (Type_Array)Nil) { continue; }
        uns_int j;
        for (j = 0; j < bucket->size; j+=2) {
            Type_Symbol key = (Type_Symbol)bucket->values[j];
            if (key == (Type_Symbol)Nil) { break; }
            fwprintf(StandardError->file, L"%"F_I"u %25ls -> ", idx++, key->value);
            shallow_inspect(bucket->values[j+1]);
        }
    }
}

void inspect(Object o)
{
    shallow_inspect(o);
    if (o == NULL || HEADER(o) == NULL) {
        return;
    }
    if (HEADER(o) == Collection_Dictionary_Class) {
        inspect_dict(o);
        return;
    }
    Object tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Object)) {
        uns_int size = ((Type_Array)tag)->size;
        int i;
        for (i = 0; i < size; i++) {
            AST_Slot v = (AST_Slot)((Type_Array)tag)->values[i];
            fwprintf(StandardError->file, L"%i %15ls:\t", i, ((Type_Symbol)v->name)->value);
            shallow_inspect(((Type_Object)o)->ivals[i]);
        }
        return;
    }

    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = ((Type_Array)tag)->size;
        uns_int isize = ((Type_Array)o)->size;
        int i;
        for (i = 0; i < size; i++) {
            AST_Slot v = (AST_Slot)((Type_Array)tag)->values[i];
            fwprintf(StandardError->file, L"%i %15ls:\t", i, ((Type_Symbol)v->name)->value);
            shallow_inspect(((Type_Array)o)->values[i]);
        }
        for (; i < size + isize; i++) {
            fwprintf(StandardError->file, L"%i:\t", i);
            shallow_inspect(((Type_Array)o)->values[i]);
        }
        return;
    }
}

void i(Object o) 
{
    inspect(o);
}


void inspect_at(Object o, uns_int i)
{
    inspect(at(o, i));
}

void i_at(Object o, uns_int i) {
    return inspect_at(o, i);
}


void inspect_atn(Object o, const wchar_t * s)
{
    inspect(atn(o, s));
}

void i_atn(Object o, const wchar_t * s) {
    return inspect_atn(o, s);
}

void i_atx(Object o, uns_int argc, ...) {
    return inspect(atx(o, argc));
}


Type_Class pclass(Object o)
{
    return HEADER(o);
}

Object methods(Object o) {
    Type_Class class = HEADER(o);
    return (Object)class->methods;
}
