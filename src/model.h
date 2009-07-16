#ifndef MODEL_H
#define MODEL_H

#include <gc.h>
#include <stdlib.h>

// ============================================================================

#define header_size sizeof(object)

#define POINTER_INC(p) (((pointer) p) + 1) 
#define POINTER_DEC(p) (((pointer) p) - 1)

#define NEW(layout) NEW_ARRAYED(layout*, layout, 1)

#define NEW_ARRAYED(type, layout, size) \
            (type)(\
               POINTER_INC(PALLOC(header_size + sizeof(layout[size]))))

#define new_instance(cls)\
    cls##_##object result = NEW(struct cls);\
    header(result)        = (object)woodstock->cls##_##class;

#define header(o) (*(object*)POINTER_DEC(o))

#define pheader(o) header(o).pointer

#define ntarget(o) native_target((o).native)

#define declare_metaclass(name)\
    object name##_##t_class;\
    object name##_##t_stub_class;

// ============================================================================

struct array;
struct chr;
struct context;
struct dict;
struct infile;
struct instream;
struct native;
struct native_class;
struct number;
struct object_object;
struct outfile;
struct outstream;
struct runtime_env;
struct symbol;

struct ast_list;
struct ast_assign;
struct ast_call;
struct ast_const;
struct ast_var;
struct ast_scoped;
struct ast_capture;
struct ifixed_t;
struct fallback;

// ============================================================================

typedef struct array*            array_object;
typedef struct ast_assign*       ast_assign_object;
typedef struct ast_call*         ast_call_object;
typedef struct ast_capture*      ast_capture_object;
typedef struct ast_const*        ast_const_object;
typedef struct ast_list*         ast_list_object;
typedef struct ast_scoped*       ast_scoped_object;
typedef struct ast_var*          ast_var_object;
typedef struct chr*              chr_object;
typedef struct context*          context_object;
typedef struct dict*             dict_object;
typedef struct fallback*         fallback_object;
typedef struct ifixed_t*         ifixed_t_object;
typedef struct instream*         infile_object;
typedef struct instream*         instream_object;
typedef struct native*           native_object;
typedef struct native_class*     native_class_object;
typedef struct number*           number_object;
typedef struct object_object*    object_object;
typedef struct outstream*        outfile_object;
typedef struct outstream*        outstream_object;
typedef struct runtime_env*      runtime_env_object;
typedef struct symbol*           string_object;
typedef struct symbol*           symbol_object;
typedef void**                   pointer;

typedef void (*transfer_target)();

// ============================================================================

struct woodstock;
typedef struct woodstock*       woodstock_t;

typedef union {
    array_object           array;
    ast_assign_object      iassign;
    ast_call_object        icall;
    ast_capture_object     icapture;
    ast_const_object       iconst;
    ast_list_object        ilist;
    ast_scoped_object      iscoped;
    ast_var_object         ivar;
    chr_object             chr;
    context_object         context;
    dict_object            dict;
    fallback_object        fallback;
    ifixed_t_object        ifixed;
    infile_object          infile;
    instream_object        instream;
    native_class_object    native_class;
    native_object          native;
    number_object          number;
    object_object          object;
    outfile_object         outfile;
    outstream_object       outstream;
    pointer                pointer;
    runtime_env_object     env;
    string_object          string;
    symbol_object          symbol;
    transfer_target        target;
} object;

// ============================================================================

// TODO push these structs directly into the system/*/*.h
struct object_object {
    object fields[0]; // 0 to tell CC that it can be empty.
};

struct native {
    object          target;
};

struct native_class {
    object          cdisp;
    object          dispatch;
    object          delegate;
};

struct woodstock {
    // Objects known to the system
    array_object        empty;
    object_object       nil;
    object              array;
    object              ast_capture;
    object              error;
    object              false;
    object              ifixed;
    object              true;

    // Evaluation related classes
    object ast_assign_class;
    object ast_call_class;
    object ast_capture_class;
    object ast_const_class;
    object ast_list_class;
    object ast_scoped_class;
    object ast_var_class;
    object fixed_class;
    object runtime_env_class;

    // Classes related to object formats
    declare_metaclass(array);
    declare_metaclass(ast_assign);
    declare_metaclass(ast_call);
    declare_metaclass(ast_capture);
    declare_metaclass(ast_const);
    declare_metaclass(ast_list);
    declare_metaclass(ast_scoped);
    declare_metaclass(ast_var);
    declare_metaclass(chr);
    declare_metaclass(dict);
    declare_metaclass(fixed);
    declare_metaclass(ifixed);
    declare_metaclass(infile);
    declare_metaclass(instream);
    declare_metaclass(number);
    declare_metaclass(outfile);
    declare_metaclass(outstream);
    declare_metaclass(runtime_env);
    declare_metaclass(string);
    declare_metaclass(symbol);

    // Level shifting
    object level_shifter;

    // Minimal native classes
    object array_class;
    object chr_class;
    object dict_class;
    object infile_class;
    object instream_class;
    object nil_class;
    object number_class;
    object outfile_class;
    object outstream_class;
    object string_class;
    object symbol_class;

    // Character table
    object chartable_class;
    object chartable;

    // Streams
    object stdinstream;
    object stdoutstream;
};

// ============================================================================

extern object_object            make_object(int size, object interpreter);
extern native_object            make_native(transfer_target native);
extern native_class_object      make_native_class(object header, transfer_target cdisp);


extern transfer_target  inline native_target(native_object native);
extern object           inline object_at(object_object object, int index);
extern void             inline object_at_put(object_object o,
                                             int index, object value);

#endif // MODEL_H
