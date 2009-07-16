#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <thread.h>
#include <scheme/natives.h>

#define incomplete_class(type)\
    (object)make_native_class(woodstock->type##_##t_stub_class,\
                              type##_##stub_dispatch)

#define wrap_dispatcher(dispatch)\
    (object)make_native(dispatch)

#define setup_type(type)\
    woodstock->type##_##t_class =\
        wrap_dispatcher(type##_##class_dispatch);\
    woodstock->type##_##t_stub_class =\
        wrap_dispatcher(type##_##class_stub_dispatch);

// =============================================================================

// System global
woodstock_t woodstock;

woodstock_t bootstrap() {
    woodstock                    = NEW(struct woodstock);
    woodstock->nil               = make_object(0, (object)(pointer)NULL);

    /* Objects used for handling types; these should not be exposed to the
     * outside world as they are internal objects
     */
    setup_type(array);
    setup_type(ast_assign);
    setup_type(ast_call);
    setup_type(ast_capture);
    setup_type(ast_const);
    setup_type(ast_list);
    setup_type(ast_scoped);
    setup_type(ast_var);
    setup_type(chr);
    setup_type(dict);
    setup_type(fixed);
    setup_type(ifixed);
    setup_type(infile);
    setup_type(number);
    setup_type(outfile);
    setup_type(runtime_env);
    setup_type(string);
    setup_type(symbol);

    woodstock->array_class       = incomplete_class(array);
    woodstock->chr_class         = incomplete_class(chr);
    woodstock->dict_class        = incomplete_class(dict);
    woodstock->runtime_env_class = incomplete_class(runtime_env);
    woodstock->fixed_class       = incomplete_class(fixed);
    woodstock->ast_assign_class  = incomplete_class(ast_assign);
    woodstock->ast_call_class    = incomplete_class(ast_call);
    woodstock->ast_capture_class = incomplete_class(ast_capture);
    woodstock->ast_const_class   = incomplete_class(ast_const);
    woodstock->ast_list_class    = incomplete_class(ast_list);
    woodstock->ast_scoped_class  = incomplete_class(ast_scoped);
    woodstock->ast_var_class     = incomplete_class(ast_var);
    woodstock->infile_class      = incomplete_class(infile);
    woodstock->number_class      = incomplete_class(number);
    woodstock->outfile_class     = incomplete_class(outfile);
    woodstock->string_class      = incomplete_class(string);   
    woodstock->symbol_class      = incomplete_class(symbol);

    // Optimization classes
    woodstock->chartable_class   = incomplete_fixed_class(256);
    woodstock->chartable         = (object)make_object(256,
                                        woodstock->chartable_class);
    
    woodstock->nil_class = incomplete_fixed_class(0);

    // Build after building the array_class!
    woodstock->empty             = ((array_object)make_object(1, woodstock->array_class));
    woodstock->empty->size       = 0;
    // Set after building the nil_class
    header(woodstock->nil)       = woodstock->nil_class;

    woodstock->level_shifter     = wrap_dispatcher(shift_level);

    woodstock->ast_capture       = (object)make_object(0, woodstock->ast_capture_class);
    woodstock->ifixed            = (object)make_object(0, woodstock->fixed_class);

    init_thread();
    bootstrap_scheme();

    return woodstock;
}
