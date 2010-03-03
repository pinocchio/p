#include <pinocchio.h>
#include <debug.h>


void help() {
    printf("    class           (Object)           \n");
    printf("    inspect         (Object)           \n");
    printf("    inspect_at      (Object, uns_int)  \n");
    printf("    inspect_atn     (Object, wchar_t *)\n");
    printf("    methods         (Object)           \n");
    printf("    at              (Object, uns_int)  \n");
    printf("    atn             (Object, wchar_t *)\n");
}

Object atn(Object o, wchar_t * s)
{
    Object tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Object)) {
        int i;
        uns_int size = ((Type_Array)tag)->size;
        for (i = 0; i < size; i++) {
            AST_InstVariable v = (AST_InstVariable)((Type_Array)tag)->values[i];
            Type_Symbol sym = (Type_Symbol)v->name;
            if (wcsncmp(sym->value, s, sym->size)) { continue; }
            return ((Type_Object)o)->ivals[i];
        }
        assert(NULL, printf("Var not found: %ls\n", s););
    }
    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = ((Type_Array)tag)->size;
        int i;
        for (i = 0; i < size; i++) {
            AST_InstVariable v = (AST_InstVariable)((Type_Array)tag)->values[i];
            Type_Symbol sym = (Type_Symbol)v->name;
            if (wcsncmp(sym->value, s, sym->size)) { continue; }
            return ((Type_Array)o)->values[i];
        }
        assert(NULL, printf("Var not found: %ls\n", s););
    }
    assert(NULL, printf("Non-indexable object\n"););
    return NULL;
}

Object at(Object o, uns_int i)
{
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
    assert(NULL, printf("Non-indexable object\n"););
    return NULL;
}

void shallow_inspect(Object o)
{
    if (o == NULL) {
        printf("NULL object\n");
        return;
    }
    if (o < (Object)100000) {
        printf("Object probably uns_int: %"F_I"u\n", (uns_int)o);
        return;
    } 
    if (HEADER(o) == NULL) {
        printf("Object with NULL class\n");
        return;
    }
    if (o == Nil) {
        printf("nil\n");
        return;
    }
    if (o == (Object)True) {
        printf("true\n");
        return;
    }
    if (o == (Object)False) {
        printf("false\n");
        return;
    }
    Type_Class cls = HEADER(o);

    if (HEADER(cls) == Metaclass) {
        printf("%ls", ((Type_Class)o)->name->value);
    } else {
        printf("Instance of %ls", cls->name->value);
    }

    Object tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Words)) {
        printf(": '%ls'\n", ((Type_Symbol)o)->value);
        return;
    }
    if (TAG_IS_LAYOUT(tag, Int)) {
        printf(": %i\n", ((Type_SmallInt)o)->value);
        return;
    }
    printf("\n");
}

void inspect_dict(Object o)
{
    Type_Dictionary dict = (Type_Dictionary)o;
    uns_int ds = dict->data->size;
    uns_int i;
    for (i = 0; i < ds; i++) {
        Type_Array bucket = (Type_Array)dict->data->values[i];
        if (bucket == (Type_Array)Nil) { continue; }
        uns_int j;
        for (j = 0; j < bucket->size; j+=2) {
            Type_Symbol key = (Type_Symbol)bucket->values[j];
            if (key == (Type_Symbol)Nil) { break; }
            printf("%25ls -> ", key->value);
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
    if (HEADER(o) == Type_Dictionary_Class) {
        inspect_dict(o);
        return;
    }
    Object tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Object)) {
        uns_int size = ((Type_Array)tag)->size;
        int i;
        for (i = 0; i < size; i++) {
            AST_InstVariable v = (AST_InstVariable)((Type_Array)tag)->values[i];
            printf("%15ls:\t", ((Type_Symbol)v->name)->value);
            shallow_inspect(((Type_Object)o)->ivals[i]);
        }
        return;
    }

    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = ((Type_Array)tag)->size;
        uns_int isize = ((Type_Array)o)->size;
        int i;
        for (i = 0; i < size; i++) {
            AST_InstVariable v = (AST_InstVariable)((Type_Array)tag)->values[i];
            printf("%15ls:\t", ((Type_Symbol)v->name)->value);
            shallow_inspect(((Type_Array)o)->values[i]);
        }
        for (; i < size + isize; i++) {
            printf("%"F_I"u:\t", i-size+1);
            shallow_inspect(((Type_Array)o)->values[i]);
        }
        return;
    }
}

void inspect_at(Object o, uns_int i)
{
    inspect(at(o, i));
}

void inspect_atn(Object o, wchar_t * s)
{
    inspect(atn(o, s));
}

Type_Class class(Object o)
{
    return HEADER(o);
}

void methods(Object o) {
    Type_Class class = HEADER(o);
    inspect(class->methods);
}