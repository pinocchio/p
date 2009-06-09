#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <thread.h>
#include <scheme/natives.h>
#include <scheme/system.h>
#include <scheme/symbols.h>
#include <print.h>

#define import_object(name)\
    (object)make_iconst((object)fools_system->name);
#define import_class(name)\
    import_object(name##_##class);

int main () {
    bootstrap();

    env_object env = empty_env;

    object Env              = import_class(env);
    object IFixed           = import_class(fixed); 
    object String           = import_class(string);
    object Symbol           = import_class(symbol);
    object SmallInteger     = import_class(number);
    object Array            = import_class(array); 
    object Dictionary       = import_class(dict);
    object UndefinedObject  = import_class(nil);

    object ifixed           = import_object(ifixed);
    object null             = import_object(nil);

/* Generated code */

