#include <system.h>
#include <thread.h>
#include <print.h>

with_pre_eval0(gen_capture_eval, context, 
        return_from_context(context, context->env);
        )
with_pre_eval0(gen_capture_instance, context, 
        return_from_context(context, woodstock->ast_capture);
        )

define_bootstrapping_type(capture,
    // instance
    if_selector(EVAL, gen_capture_eval);
,
    // class
    if_selector(INSTANCE, gen_capture_instance);
)
