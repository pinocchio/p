#include <system.h>
#include <model.h>
#include <assert.h>
#include <bootstrap.h>

void inline native(context_object context) {
    context_object passed_context = array_at(context->arguments, 0).context;
    passed_context->self.native->function(passed_context);
}

void transfer(context_object context) {
    context_object old_context;

    while (context->self.native != fools_system->native) {
        old_context = context;
        context = make_context(header(context->self.pointer), 1);
        context->arguments->values[0] = (object)old_context;
    }
    
    context->self.native->function(context);
}
