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
    fwprintf(stderr, L"    nexps           (int count)            \n");
    fwprintf(stderr, L"    sends                                  \n");
}

void h() {
    return help();
}

Class pclass(Optr o)
{
    return HEADER(o);
}

void _indent_(FILE* stream, uns_int i)
{
    uns_int todo = 0;
    while (todo++ != i) {
        if (todo % 4) {
            fwprintf(stream, L"  ");
        } else {
            fwprintf(stream, L"| ");
        }
    }
}

void print_Class(FILE* stream, Optr obj)
{
    if (obj == NULL) {
        fwprintf(stream, L"NULL\n");
        return;
    }
    if (obj == nil) {
        fwprintf(stream, L"Nil\n");
        return;
    }
    Class class = pclass(obj);
    if (class == NULL) {
        fwprintf(stream, L"Object with NULL class\n");
        return;
    }
    assert0((Optr)class != nil);
    if (pclass((Optr)class) == metaclass) {
        fwprintf(stream, L"Class class: %ls\n", ((Class)obj)->name->value);
        return;
    }
    fwprintf(stream, L"%p Class: %p %ls\n", obj, class, class->name->value);
}

void print_EXP(int count)
{
    long size = EXP_SIZE();
    uns_int cur = 0;
    if (size < 0) {
        fwprintf(stderr, L"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! Stack underflow!\n");
        return;
    }
    while (cur < size && (count == -1 || cur < count)) {
        Optr c = tget(Double_Stack)[cur++];
        if (c > (Optr)10000) {
            print_Class(stderr, c);
        } else {
            fwprintf(stderr, L"%li\n", (uns_int)c);
        }
    }
}

void exps() {
    print_EXP(15);
}

void nexps(int count) {
    print_EXP(count);
}



void print_Symbol(FILE* stream, Optr s)
{
    Optr tag = GETTAG(s);
    if (TAG_IS_LAYOUT(tag, Words)) {
        fwprintf(stream, L"\"%ls\"\n", ((Symbol)s)->value);
    } else {
        fwprintf(stream, L"Not a symbol: %p\n", s);
        print_Class(stream, s);
    }
}

uns_int nrsends()
{
    return 1;
    /*uns_int size = EXP_SIZE();
    uns_int cur = 0;
    uns_int nr = 0;
    while (cur < size) {
        Optr c = tget(Double_Stack)[cur++];
        if (c > (Optr)10000 && pclass(c) == Send_Class) {
            nr++;
        }
    }
    return nr;*/
}

void sends()
{
    uns_int size = EXP_SIZE();
    uns_int cur = 0;
    while (cur < size) {
        Optr c = tget(Double_Stack)[cur++];
        if (c > (Optr)10000 && pclass(c) == Send_Class) {
            Send send = (Send)c;
            print_Symbol(stderr, (Optr)send->message);
        }
    }
}


Optr atn(Optr o, const wchar_t * s)
{
    Optr tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Object)) {
        int i;
        uns_int size = GET_SIZE(tag);
        for (i = 0; i < size; i++) {
            Slot v = (Slot)((Array)tag)->values[i];
            Symbol sym = (Symbol)v->name;
            if (wcsncmp(sym->value, s, sym->size)) { continue; }
            return ((Object)o)->ivals[i];
        }
        assert(NULL, fwprintf(stderr, L"Var not found: %ls\n", s););
    }
    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size = GET_SIZE(tag);
        int i;
        for (i = 0; i < size; i++) {
            Slot v = (Slot)((Array)tag)->values[i];
            Symbol sym = (Symbol)v->name;
            if (wcsncmp(sym->value, s, sym->size)) { continue; }
            return ((Array)o)->values[i];
        }
        assert(NULL, fwprintf(stderr, L"Var not found: %ls\n", s););
    }
    assert(NULL, fwprintf(stderr, L"Non-indexable object\n"););
    return NULL;
}

Optr dict_at(Optr o, uns_int at)
{
    Dictionary dict = (Dictionary)o;
    uns_int ds = GET_SIZE(dict->data);
    uns_int i;
    uns_int idx = 0;
    for (i = 0; i < ds; i++) {
        Array bucket = (Array)dict->data->values[i];
        if (bucket == (Array)nil) { continue; }
        uns_int j;
        for (j = 0; j < GET_SIZE(bucket); j+=2) {
            if (bucket->values[j] == nil) { break; }
            if (idx == at) {
                return bucket->values[j+1];
            }
            idx++;
        }
    }
    return NULL;
}

Optr at(Optr o, uns_int i)
{
    if (pclass(o) == Dictionary_Class) {
        return dict_at(o, i);
    }
    Optr tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Object)) {
        uns_int size = GET_SIZE(tag);
        assert0(i < size);
        return ((Object)o)->ivals[i];
    }
    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size  = GET_SIZE(tag);
        uns_int isize = GET_SIZE(o);
        assert0(i < size + isize);
        return ((Array)o)->values[i];
    }
    assert(NULL, fwprintf(stderr, L"Non-indexable object\n"););
    return NULL;
}

Optr atx(Optr o, uns_int argc, ...)
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

void shallow_inspect(FILE* stream, Optr o)
{
    if (o == NULL) {
        fwprintf(stream, L"NULL object\n");
        return;
    }
    if (o < (Optr)100000) {
        fwprintf(stream, L"Object probably uns_int: %lu\n", (uns_int)o);
        return;
    } 
    if (pclass(o) == NULL) {
        fwprintf(stream, L"Object with NULL class\n");
        return;
    }
    if (o == nil) {
        fwprintf(stream, L"nil\n");
        return;
    }
    if (o == (Optr)true) {
        fwprintf(stream, L"true\n");
        return;
    }
    if (o == (Optr)false) {
        fwprintf(stream, L"false\n");
        return;
    }
    Class cls = pclass(o);

    if (pclass((Optr)cls) == metaclass) {
        fwprintf(stream, L"%ls", ((Class)o)->name->value);
        fwprintf(stream, L" (%lu)", (uns_int)o);
    } else {
        fwprintf(stream, L"Instance of %ls", cls->name->value);
        fwprintf(stream, L" (%p)", o);
    }

    Optr tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Words)) {
        fwprintf(stream, L": '%ls'\n", ((Symbol)o)->value);
        return;
    }
    if (TAG_IS_LAYOUT(tag, Int)) {
        fwprintf(stream, L": %i\n", ((SmallInt)o)->value);
        return;
    }
    fwprintf(stream, L"\n");
}

void inspect_dict(FILE* stream, Optr o)
{
    Dictionary dict = (Dictionary)o;
    uns_int ds      = GET_SIZE(dict->data);
    uns_int i;
    uns_int idx = 0;
    for (i = 0; i < ds; i++) {
        Array bucket = (Array)dict->data->values[i];
        if (bucket == (Array)nil) { continue; }
        uns_int j;
        for (j = 0; j < GET_SIZE(bucket); j+=2) {
            Optr key = bucket->values[j];
            if (key == nil) { break; }
            fwprintf(stream, L"%lu ", idx++);
            shallow_inspect(stream, key);
            fwprintf(stream, L" -> ");
            shallow_inspect(stream, bucket->values[j+1]);
        }
    }
}

void inspect(FILE* stream, Optr o)
{
    shallow_inspect(stream, o);
    if (o == NULL || pclass(o) == NULL) {
        return;
    }
    if (pclass(o) == Dictionary_Class) {
        inspect_dict(stream, o);
        return;
    }
    Optr tag = GETTAG(o);
    if (TAG_IS_LAYOUT(tag, Object)) {
        uns_int size = GET_SIZE(tag);
        int i;
        for (i = 0; i < size; i++) {
            Slot v = (Slot)((Array)tag)->values[i];
            fwprintf(stream, L"%i %15ls:\t", i, ((Symbol)v->name)->value);
            shallow_inspect(stream, ((Object)o)->ivals[i]);
        }
        return;
    }

    if (TAG_IS_LAYOUT(tag, Array)) {
        uns_int size  = GET_SIZE(tag);
        uns_int isize = GET_SIZE(o);
        int i;
        for (i = 0; i < size; i++) {
            Slot v = (Slot)((Array)tag)->values[i];
            fwprintf(stream, L"%i %15ls:\t", i, ((Symbol)v->name)->value);
            shallow_inspect(stream, ((Array)o)->values[i]);
        }
        for (; i < size + isize; i++) {
            fwprintf(stream, L"%i:\t", i);
            shallow_inspect(stream, ((Array)o)->values[i]);
        }
        return;
    }
}

void i(Optr o) 
{
    inspect(stderr, o);
}


void inspect_at(Optr o, uns_int i)
{
    inspect(stderr, at(o, i));
}

void i_at(Optr o, uns_int i) {
    return inspect_at(o, i);
}


void inspect_atn(Optr o, const wchar_t * s)
{
    inspect(stderr, atn(o, s));
}

void i_atn(Optr o, const wchar_t * s) {
    return inspect_atn(o, s);
}

void i_atx(Optr o, uns_int argc, ...) {
    return inspect(stderr, atx(o, argc));
}

Optr methods(Optr o) {
    Class class = pclass(o);
    return (Optr)class->methods;
}
