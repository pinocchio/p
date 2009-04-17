#ifndef MODEL_H
#define MODEL_H

#include <stdlib.h>

#define header_size sizeof(object)

#define PINC(pointer) ((char*) (pointer) + 1) 
#define PDEC(pointer) ((char*) (pointer) - 1) 

#define NEW(layout) NEW_ARRAYED(layout, 1)

#define NEW_ARRAYED(layout, size) \
            (layout*)(\
               PINC(malloc(header_size + sizeof(layout[size]))))

#define header(o) (*(object*)PDEC(o))

struct behaviour;
struct class;
struct string;
struct number;
struct array;
struct dict;
struct nil;
struct native;
struct context;

typedef struct behaviour*   behaviour_object;
typedef struct class*       class_object;
typedef struct string*      string_object;
typedef struct number*      number_object;
typedef struct array*       array_object;
typedef struct dict*        dict_object;
typedef struct nil*         nil_object;
typedef struct native*      native_object;
typedef struct context*     context_object;

struct fools;
typedef struct fools*       fools_object;

typedef union {
    behaviour_object behaviour;
    class_object     class;
    string_object    string;
    number_object    number;
    array_object     array;
    dict_object      dict;
    fools_object     fools;
    nil_object       nil;
    native_object    native;
    context_object   context;
    void*            pointer;
} object;

struct behaviour {
    dict_object         methods;
    object    super;
};

struct class {
    struct behaviour    behaviour;
    string_object       name;
};

struct string {
    number_object       size;
    char*               value;
};

struct number {
    int                 value;
};

struct array {
    number_object       size;
    object              values[];
};

struct dict {
    array_object        keys;
    array_object        values;
};

struct nil { };

struct native {
    void (*function)(context_object);
};

struct context {
    object              self;
    array_object        arguments;
};

struct fools {
    nil_object          nil;
    class_object        behaviour_class;
    class_object        class_class;
    native_object       native;
};

extern behaviour_object make_behaviour(int size, object super);
extern class_object     make_class(int size, object super, const char* name);
extern string_object    make_string(const char* value);
extern number_object    make_number(int value);
extern array_object     make_array(int size);
extern dict_object      make_dict(int init_size);
extern nil_object       make_nil();
extern context_object   make_context(object self, int size);

extern native_object    make_native(void (*native)(context_object));
extern void             native(context_object context);
extern void             transfer(context_object context);

#endif // MODEL_H
