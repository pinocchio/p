#ifndef MODEL_H
#define MODEL_H

#include <stdlib.h>

#define header_size sizeof(object)
#define NEW(layout) \
            (layout*)(\
                malloc(header_size + sizeof(layout))\
            + header_size)

struct behaviour;
struct class;
struct string;
struct number;
struct array;
struct dict;
struct nil;
struct fools;

typedef struct behaviour*   behaviour_object;
typedef struct class*       class_object;
typedef struct string*      string_object;
typedef struct number*      number_object;
typedef struct array*       array_object;
typedef struct dict*        dict_object;
typedef struct fools*       fools_object;
typedef struct nil*         nil_object;

typedef union {
    behaviour_object behaviour;
    class_object     class;
    string_object    string;
    number_object    number;
    array_object     array;
    dict_object      dict;
    fools_object     fools;
    nil_object       nil;
    void*            random;
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
    object*             values;
};

struct dict {
    array_object        keys;
    array_object        values;
};

struct nil { };

struct fools {
    nil_object          nil;
    class_object        behaviour_class;
    class_object        class_class;
};

extern behaviour_object make_behaviour(fools_object system, int size, object super);
extern class_object     make_class(fools_object system, int size, object super, const char* name);
extern string_object    make_string(fools_object system, const char* value);
extern number_object    make_number(fools_object system, int value);
extern array_object     make_array(fools_object system, int size);
extern dict_object      make_dict(fools_object system, int init_size);
extern nil_object       make_nil(fools_object system);

#endif // MODEL_H
