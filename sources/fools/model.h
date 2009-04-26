#ifndef MODEL_H
#define MODEL_H

#include <gc.h>
#include <stdlib.h>
#include <instruction.h>

#define header_size sizeof(object)

#define PINC(p) (((pointer) p) + 1) 
#define PDEC(p) (((pointer) p) - 1)

#define NEW(layout) NEW_ARRAYED(layout*, layout, 1)

#define NEW_ARRAYED(type, layout, size) \
            (type)(\
               PINC(FOOLS_ALLOC(header_size + sizeof(layout[size]))))

#define header(o) (*(object*)PDEC(o))

struct env;
struct variable_object;
struct native_class;
struct string;
struct number;
struct array;
struct dict;
struct nil;
struct native;
struct context;

typedef struct env*             env_object;
typedef struct variable_object* variable_object;
typedef struct native_class*    native_class_object;
typedef struct string*          string_object;
typedef struct number*          number_object;
typedef struct array*           array_object;
typedef struct dict*            dict_object;
typedef struct nil*             nil_object;
typedef struct native*          native_object;
typedef struct context*         context_object;
typedef array_object            message_object;
typedef int**                   pointer;

typedef void (*transfer_target)(context_object);

struct fools;
typedef struct fools*       fools_object;

typedef union {
    variable_object     object;
    native_class_object native_class;
    string_object       string;
    number_object       number;
    array_object        array;
    dict_object         dict;
    fools_object        fools;
    nil_object          nil;
    native_object       native;
    context_object      context;
    env_object          env;
    instruction         instruction;
    pointer             pointer;
} object;

struct variable_object {
    object fields[0]; // 0 to tell CC that it can be empty.
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

struct env {
    object              scope;
    object              parent;
    array_object        values;
};

struct nil { };

struct native {
    transfer_target target;
};

struct context {
    array_object        arguments;
    object              return_context;
};

struct fools {
    nil_object          nil;
    array_object        empty;
    object              native;
    object              native_metaclass;
    object              class_lookup;
    object              icapture;
    native_class_object ilist_class;
    native_class_object icall_class;
    native_class_object iconst_class;
    native_class_object ivar_class;
    native_class_object iassign_class;
    native_class_object icapture_class;
    native_class_object env_class;
    native_class_object dict_class;
    array_object        symbols_known_to_the_vm;
};

extern variable_object          make_object(int size, object interpreter);
extern native_class_object      make_native_class(int size);
extern string_object            make_string(const char* value);
extern number_object            make_number(int value);
extern array_object             make_array(int size);
extern dict_object              make_dict(int init_size);
extern env_object               make_env(object scope, object parent, int size);
extern nil_object               make_nil();
extern context_object           inline make_meta_context(context_object context);
extern context_object           make_context(object interpreter, int size);
extern native_object            make_native(transfer_target native);

extern int              inline number_value(number_object number);
extern object           inline array_at(array_object array, int index);
extern void             inline array_at_put(array_object array,
                                            int index, object new_value);
extern void             inline raw_array_at_put(array_object array,
                                                int index, object new_value);
extern transfer_target  inline native_target(native_object native);
extern object           inline dict_at(dict_object dict, object key);
extern void             inline dict_at_put(dict_object dict, object key, object value);
extern int              inline string_equals(string_object string1,
                                             string_object string2);
extern object           inline symbol_known_to_the_vm(const char* string);
extern object           inline object_at(variable_object object, int index);
extern void             inline object_at_put(variable_object o,
                                             int index, object value);
extern object           inline env_at(env_object env, int index);
extern void             inline env_at_put(env_object env, int index, object value);
extern context_object   inline return_context(context_object context);
extern void             inline set_message(context_object context, const char* value);
extern void             inline set_argument(context_object context, int index, object value);
extern object           inline argument_at(context_object context, int index);
extern message_object   inline make_message(int size);
extern object           inline message(context_object context);

#endif // MODEL_H
