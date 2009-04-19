#include <system.h>
#include <model.h>
#include <assert.h>
#include <bootstrap.h>

void inline native(context_object context) {
    context_object passed_context = array_at(context->arguments, 0).context;
    native_target(passed_context->self.native)(passed_context);
}

void inline transfer(context_object context) {

    while (context->self.pointer != fools_system->native.pointer) {
        context = make_meta_context(context);
    }
    
    native_target(context->self.native)(context);
}
