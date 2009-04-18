#include <system.h>
#include <model.h>
#include <assert.h>
#include <bootstrap.h>

void native(context_object context) {
    assert(context->arguments->size->value == 1);
    context_object passed_context = context->arguments->values[0].context;
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
