#ifndef MODEL_H
#define MODEL_H

#include <stdlib.h>

#define header_size sizeof(object)

#define PINC(p) (((pointer) p) + 1) 
#define PDEC(p) (((pointer) p) - 1)

#define NEW(layout) NEW_ARRAYED(layout, 1)

#define NEW_ARRAYED(layout, size) \
            (layout*)(\
               PINC(malloc(header_size + sizeof(layout[size]))))

#define header(o) (*(object*)PDEC(o))

struct classified_object;
struct native_class;
struct string;
struct number;
struct array;
struct dict;
struct nil;
struct native;
struct context;

typedef struct classified_object*   classified_object;
typedef struct native_class*        native_class_object;
typedef struct string*              string_object;
typedef struct number*              number_object;
typedef struct array*               array_object;
typedef struct dict*                dict_object;
typedef struct nil*                 nil_object;
typedef struct native*              native_object;
typedef struct context*             context_object;
typedef int**                       pointer;

typedef void (*transfer_target)(context_object);

struct fools;
typedef struct fools*       fools_object;

typedef union {
    classified_object   classified;
    native_class_object native_class;
    string_object       string;
    number_object       number;
    array_object        array;
    dict_object         dict;
    fools_object        fools;
    nil_object          nil;
    native_object       native;
    context_object      context;
    pointer             pointer;
} object;

struct classified_object {
    object class;
    object fields[];
};

struct native_class {
    dict_object         natives;
    object              class;
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
    transfer_target target;
};

struct context {
    object              self;
    array_object        arguments;
};

struct fools {
    nil_object          nil;
    object              behaviour_class;
    object              class_class;
    native_object       native;
};

extern native_class_object  make_native_class(int size, object class);
extern string_object        make_string(const char* value);
extern number_object        make_number(int value);
extern array_object         make_array(int size);
extern dict_object          make_dict(int init_size);
extern nil_object           make_nil();
extern context_object       make_context(object self, int size);
extern native_object        make_native(transfer_target native);

extern int inline number_value(number_object number);
extern object inline array_at(array_object array, int index);
extern void inline array_at_put(array_object array, int index, object new_value);
extern transfer_target native_target(native_object native);
extern object inline dict_at(dict_object dict, object key);
extern void inline dict_at_put(dict_object dict, int index, object key, object value);

#endif // MODEL_H
