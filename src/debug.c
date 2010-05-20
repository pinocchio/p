#include <stdarg.h>
#include <wchar.h>
#include <pinocchio.h>
#include <debug.h>

/* ========================================================================= */

void help() {
    fwprintf(stderr, L"    at              (Object, uns_int)      \n");
    fwprintf(stderr, L"    atn             (Object, wchar_t *)    \n");
    fwprintf(stderr, L"    atX             (Object, count, idx...)\n");
    fwprintf(stderr, L"    pclass          (Object)               \n");
    fwprintf(stderr, L"    i,inspect       (Object)               \n");
    fwprintf(stderr, L"    inspect_at      (Object, uns_int)      \n");
    fwprintf(stderr, L"    inspect_atn     (Object, wchar_t *)    \n");
    fwprintf(stderr, L"    methods         (Object)               \n");
    fwprintf(stderr, L"    exps                                   \n");
    fwprintf(stderr, L"    sends                                  \n");
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

void print_Class(Object obj)
{
    if (obj == NULL) {
        fwprintf(stderr, L"NULL\n");
        return;
    }
    if (obj == Nil) {
        fwprintf(stderr, L"Nil\n");
        return;
    }
    Type_Class class = HEADER(obj);
    assert0(class != NULL);
    assert0((Object)class != Nil);
    if (HEADER(class) == Metaclass) {
        fwprintf(stderr, L"Class class: %ls\n", ((Type_Class)obj)->name->value);
        return;
    }
    fwprintf(stderr, L"%p Class: %p %ls\n", obj, class, class->name->value);
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
            fwprintf(stderr, L"%"F_I"i\n", (uns_int)c);
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
        fwprintf(stderr, L"\"%ls\"\n", ((Type_Symbol)s)->value);
    } else {
        fwprintf(stderr, L"Not a symbol: %p\n", s);
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
        uns_int size = ((Collection_Array)tag)->size;
        for (i = 0; i < size; i++) {
            Slot_Slot v = (Slot_Slot)((Collection_Array)tag)->values[i];
            Type_Symbol sym = (Type_Symbol)v->name;
            if (wcsncmp(sym->value, s, sym->size)) { continue; }
            return ((Type_Object)o)->ivals[i];
        }
        assert(NULL, fwprintf(stderr, L"Var not found: %ls\n", s););
    }
    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = ((Collection_Array)tag)->size;
        int i;
        for (i = 0; i < size; i++) {
            Slot_Slot v = (Slot_Slot)((Collection_Array)tag)->values[i];
            Type_Symbol sym = (Type_Symbol)v->name;
            if (wcsncmp(sym->value, s, sym->size)) { continue; }
            return ((Collection_Array)o)->values[i];
        }
        assert(NULL, fwprintf(stderr, L"Var not found: %ls\n", s););
    }
    assert(NULL, fwprintf(stderr, L"Non-indexable object\n"););
    return NULL;
}

Object dict_at(Object o, uns_int at)
{
    Collection_Dictionary dict = (Collection_Dictionary)o;
    uns_int ds = dict->data->size;
    uns_int i;
    uns_int idx = 0;
    for (i = 0; i < ds; i++) {
        Collection_Array bucket = (Collection_Array)dict->data->values[i];
        if (bucket == (Collection_Array)Nil) { continue; }
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
        uns_int size = ((Collection_Array)tag)->size;
        assert0(i < size);
        return ((Type_Object)o)->ivals[i];
    }
    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = ((Collection_Array)tag)->size;
        uns_int isize = ((Collection_Array)o)->size;
        assert0(i < size + isize);
        return ((Collection_Array)o)->values[i];
    }
    assert(NULL, fwprintf(stderr, L"Non-indexable object\n"););
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
        fwprintf(stderr, L"NULL object\n");
        return;
    }
    if (o < (Object)100000) {
        fwprintf(stderr, L"Object probably uns_int: %"F_I"u\n", (uns_int)o);
        return;
    } 
    if (HEADER(o) == NULL) {
        fwprintf(stderr, L"Object with NULL class\n");
        return;
    }
    if (o == Nil) {
        fwprintf(stderr, L"nil\n");
        return;
    }
    if (o == (Object)True) {
        fwprintf(stderr, L"true\n");
        return;
    }
    if (o == (Object)False) {
        fwprintf(stderr, L"false\n");
        return;
    }
    Type_Class cls = HEADER(o);

    if (HEADER(cls) == Metaclass) {
        fwprintf(stderr, L"%ls", ((Type_Class)o)->name->value);
        fwprintf(stderr, L" (%"F_I"u)", (uns_int)o);
    } else {
        fwprintf(stderr, L"Instance of %ls", cls->name->value);
        fwprintf(stderr, L" (%"F_I"u)", (uns_int)o);
    }

    Object tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Words)) {
        fwprintf(stderr, L": '%ls'\n", ((Type_Symbol)o)->value);
        return;
    }
    if (TAG_IS_LAYOUT(tag, Int)) {
        fwprintf(stderr, L": %i\n", ((Number_SmallInt)o)->value);
        return;
    }
    fwprintf(stderr, L"\n");
}

void inspect_dict(Object o)
{
    Collection_Dictionary dict = (Collection_Dictionary)o;
    uns_int ds = dict->data->size;
    uns_int i;
    uns_int idx = 0;
    for (i = 0; i < ds; i++) {
        Collection_Array bucket = (Collection_Array)dict->data->values[i];
        if (bucket == (Collection_Array)Nil) { continue; }
        uns_int j;
        for (j = 0; j < bucket->size; j+=2) {
            Type_Symbol key = (Type_Symbol)bucket->values[j];
            if (key == (Type_Symbol)Nil) { break; }
            fwprintf(stderr, L"%"F_I"u %25ls -> ", idx++, key->value);
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
        uns_int size = ((Collection_Array)tag)->size;
        int i;
        for (i = 0; i < size; i++) {
            Slot_Slot v = (Slot_Slot)((Collection_Array)tag)->values[i];
            fwprintf(stderr, L"%i %15ls:\t", i, ((Type_Symbol)v->name)->value);
            shallow_inspect(((Type_Object)o)->ivals[i]);
        }
        return;
    }

    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = ((Collection_Array)tag)->size;
        uns_int isize = ((Collection_Array)o)->size;
        int i;
        for (i = 0; i < size; i++) {
            Slot_Slot v = (Slot_Slot)((Collection_Array)tag)->values[i];
            fwprintf(stderr, L"%i %15ls:\t", i, ((Type_Symbol)v->name)->value);
            shallow_inspect(((Collection_Array)o)->values[i]);
        }
        for (; i < size + isize; i++) {
            fwprintf(stderr, L"%i:\t", i);
            shallow_inspect(((Collection_Array)o)->values[i]);
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
