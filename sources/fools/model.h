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

#define new_instance(cls)\
    cls##_##object result = NEW(struct cls);\
    header(result)        = (object)fools_system->cls##_##class;

#define header(o) (*(object*)PDEC(o))
#define pheader(o) header(o).pointer
#define ntarget(o) native_target((o).native)

struct env;
struct object_object;
struct string;
struct number;
struct array;
struct dict;
struct nil;
struct native;
struct native_class;
struct context;

struct ilist;
struct iassign;
struct icall;
struct iconst;
struct ivar;
struct iscoped;
struct icapture;
struct ifixed;
struct fallback;

typedef struct ilist*            ilist_object;
typedef struct iassign*          iassign_object;
typedef struct icall*            icall_object;
typedef struct iconst*           iconst_object;
typedef struct ivar*             ivar_object;
typedef struct iscoped*          iscoped_object;
typedef struct icapture*         icapture_object;
typedef struct ifixed*           ifixed_object;
typedef struct fallback*         fallback_object;
typedef struct env*              env_object;
typedef struct object_object*    object_object;
typedef struct string*           string_object;
typedef struct number*           number_object;
typedef struct array*            array_object;
typedef struct dict*             dict_object;
typedef struct nil*              nil_object;
typedef struct native*           native_object;
typedef struct native_class*     native_class_object;
typedef struct context*          context_object;
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
    ifixed_object       ifixed;
    fallback_object     fallback;
    object_object       object;
    string_object       string;
    number_object       number;
    array_object        array;
    dict_object         dict;
    fools_object        fools;
    nil_object          nil;
    native_object       native;
    native_class_object native_class;
    context_object      context;
    env_object          env;
    transfer_target     target;
    pointer             pointer;
} object;

struct object_object {
    object fields[0]; // 0 to tell CC that it can be empty.
};

struct array {
    int                 size;
    object              values[];
};

struct dict {
    array_object        values;
};

struct env {
    object              scope;
    object              parent;
    array_object        values;
};

struct nil { };

struct native {
    object          target;
};

struct native_class {
    object          cdisp;
    object          dispatch;
    object          delegate;
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
    object              ifixed;
    object              array;
    object              dict;

    // Evaluation related classes
    object ilist_class;
    object icall_class;
    object iconst_class;
    object ivar_class;
    object iassign_class;
    object icapture_class;
    object iscoped_class;
    object fixed_class;
    object env_class;

    object ifixed_class;
    object ifixed_stub_class;

    object iarray_class;
    object iarray_stub_class;

    // Level shifting
    object level_shifter;

    // Minimal native classes
    object number_class;
    object string_class;
    object array_class;
    object dict_class;
    object dict_metaclass;
    object true_class;
    object false_class;
};

extern object_object            make_object(int size, object interpreter);
extern array_object             make_array(int size);
extern dict_object              make_dict(int size);
extern env_object               make_env(object scope, object parent, int size);
extern nil_object               make_nil();

extern native_object            make_native(transfer_target native);
extern native_class_object      make_native_class(object header, transfer_target cdisp);

extern int              inline array_size(array_object array);
extern object           inline array_at(array_object array, int index);
extern object           inline raw_array_at(array_object array, int index);
extern void             inline array_at_put(array_object array,
                                            int index, object new_value);
extern void             inline raw_array_at_put(array_object array,
                                                int index, object new_value);
extern transfer_target  inline native_target(native_object native);
extern object           inline symbol_known_to_the_vm(int index);
extern object           inline object_at(object_object object, int index);
extern void             inline object_at_put(object_object o,
                                             int index, object value);
extern object           inline env_at(env_object env, int index);
extern void             inline env_at_put(env_object env, int index, object value);
#define assert_argsize(context, size) assert(context_size(context) >= size)
#define empty_env make_env((object)fools_system->nil,\
                           (object)fools_system->nil, 0)

#define array_check_bounds(array, index)\
    assert(0 <= index);\
    assert(index < array_size(array));


#endif // MODEL_H
