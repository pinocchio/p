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
    (object)make_iconst((object)woodstock->name);

#define import_class(name)\
    import_object(name##_##class);

int main () {
    bootstrap();

    setlocale(LC_ALL, "");

    runtime_env_object env = empty_env;

    object Env              = import_class(runtime_env);
    object IFixed           = import_class(fixed); 
    object String           = import_class(string);
    object Symbol           = import_class(symbol);
    object SmallInteger     = import_class(number);
    object Array            = import_class(array); 
    object Dictionary       = import_class(dict);
    object UndefinedObject  = import_class(nil);

    object IList            = import_class(ast_list);
    object ICall            = import_class(ast_call);
    object IConst           = import_class(ast_const);
    object IVar             = import_class(ast_var);
    object IAssign          = import_class(ast_assign);
    object ICapture         = import_class(ast_capture);
    object IScoped          = import_class(ast_scoped);
    object InputFile        = import_class(infile);
    object OutputFile       = import_class(outfile);
    object Character        = import_class(chr);

    object ifixed           = import_object(ifixed);
    object null             = import_object(nil);
    object true             = import_object(true);
    object false            = import_object(false);

/* Generated code */

