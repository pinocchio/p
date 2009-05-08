#ifndef MODEL_H
#define MODEL_H

#include <gc.h>
#include <stdlib.h>

#define header_size sizeof(object)

#define PINC(p) (((pointer) p) + 1) 
#define PDEC(p) (((pointer) p) - 1)

#define NEW(layout) NEW_ARRAYED(layout*, layout, 1)

#define NEW_ARRAYED(type, layout, size) \
            (type)(\
               PINC(FOOLS_ALLOC(header_size + sizeof(layout[size]))))

#define header(o) (*(object*)PDEC(o))
#define pheader(o) header(o).pointer
#define ntarget(o) native_target((o).native)

struct env;
struct variable_object;
struct string;
struct number;
struct array;
struct dict;
struct nil;
struct native;
struct context;
struct instruction_list;
struct assignment;
struct callable;
struct constant;
struct variable;
struct scoped;
struct capture;
struct appcall;
struct dircall;

typedef struct instruction_list* ilist_object;
typedef struct assignment*       iassign_object;
typedef struct callable*         icall_object;
typedef struct constant*         iconst_object;
typedef struct variable*         ivar_object;
typedef struct scoped*           iscoped_object;
typedef struct capture*          icapture_object;
typedef struct appcall*          appcall_object;
typedef struct dircall*          dircall_object;
typedef struct env*              env_object;
typedef struct variable_object*  variable_object;
typedef struct string*           string_object;
typedef struct number*           number_object;
typedef struct array*            array_object;
typedef struct dict*             dict_object;
typedef struct nil*              nil_object;
typedef struct native*           native_object;
typedef struct context*          context_object;
typedef array_object             message_object;
typedef void**                   pointer;

typedef void (*transfer_target)();

struct fools;
typedef struct fools*       fools_object;

typedef union {
    ilist_object        ilist;
    iassign_object      iassign;
    icall_object        icall;
    iconst_object       iconst;
    ivar_object         ivar;
    iscoped_object      iscoped;
    icapture_object     icapture;
    appcall_object      appcall;
    dircall_object      dircall;
    variable_object     object;
    string_object       string;
    number_object       number;
    array_object        array;
    dict_object         dict;
    fools_object        fools;
    nil_object          nil;
    native_object       native;
    context_object      context;
    env_object          env;
    pointer             pointer;
} object;

struct variable_object {
    object fields[0]; // 0 to tell CC that it can be empty.
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
    transfer_target     code;
};

struct fools {
    // Objects known to the system
    nil_object          nil;
    object              true;
    object              false;
    array_object        empty;
    object              native;
    object              class_lookup;
    object              icapture;
    object              iscope;
    array_object        symbols_known_to_the_vm;

    // Evaluation related classes
    object ilist_class;
    object icall_class;
    object iconst_class;
    object ivar_class;
    object iassign_class;
    object icapture_class;
    object iscope_metaclass;
    object iscope_class;
    object appcall_class;
    object dircall_class;
    object env_class;
    object dict_class;

    // Minimal native classes
    object number_class;
    object string_class;
    object array_class;
    object true_class;
    object false_class;
};

extern variable_object          make_object(int size, object interpreter);
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
extern number_object    inline array_size(array_object array);
extern object           inline array_at(array_object array, int index);
extern object           inline raw_array_at(array_object array, int index);
extern void             inline array_at_put(array_object array,
                                            int index, object new_value);
extern void             inline raw_array_at_put(array_object array,
                                                int index, object new_value);
extern transfer_target  inline native_target(native_object native);
extern object           inline dict_at(dict_object dict, object key);
extern void             inline dict_at_put(dict_object dict, object key, object value);
extern int              inline string_equals(string_object string1,
                                             string_object string2);
extern object           inline symbol_known_to_the_vm(int index);
extern object           inline object_at(variable_object object, int index);
extern void             inline object_at_put(variable_object o,
                                             int index, object value);
extern object           inline env_at(env_object env, int index);
extern void             inline env_at_put(env_object env, int index, object value);
extern context_object   inline return_context(context_object context);
extern void             inline set_message(context_object context, object msg);
extern void             inline set_new_message(context_object context, object msg);
extern void             inline set_argument(context_object context, int index, object value);
extern object           inline argument_at(context_object context, int index);
extern message_object   inline make_message(int size);
extern object           inline message(context_object context);
#define assert_argsize(context, size) assert(number_value(array_size(context->arguments)) >= size)
#define empty_env make_env((object)fools_system->nil,\
                           (object)fools_system->nil, 0)

#endif // MODEL_H
