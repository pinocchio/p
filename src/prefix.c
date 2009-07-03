#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <thread.h>
#include <scheme/natives.h>
#include <scheme/behaviour.h>
#include <scheme/symbols.h>
#include <print.h>
#include <locale.h>

#define import_object(name)\
    (object)make_iconst((object)fools_system->name);
#define import_class(name)\
    import_object(name##_##class);

int main () {
    bootstrap();

    setlocale(LC_ALL, "");

    env_object env = empty_env;

    object Env              = import_class(env);
    object IFixed           = import_class(fixed); 
    object String           = import_class(string);
    object Symbol           = import_class(symbol);
    object SmallInteger     = import_class(number);
    object Array            = import_class(array); 
    object Dictionary       = import_class(dict);
    object UndefinedObject  = import_class(nil);

    object IList            = import_class(ilist);
    object ICall            = import_class(icall);
    object IConst           = import_class(iconst);
    object IVar             = import_class(ivar);
    object IAssign          = import_class(iassign);
    object ICapture         = import_class(icapture);
    object IScoped          = import_class(iscoped);
    object InputFile        = import_class(inputfile);
    object OutputFile       = import_class(outputfile);
    object Character        = import_class(chr);

    object ifixed           = import_object(ifixed);
    object null             = import_object(nil);
    object true             = import_object(true);
    object false            = import_object(false);

/* Generated code */

