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
    object CharacterTable   = import_class(chartable);

    object Character        = import_class(chr);
    object IAssign          = import_class(ast_assign);
    object ICall            = import_class(ast_call);
    object ICapture         = import_class(ast_capture);
    object IConst           = import_class(ast_const);
    object IList            = import_class(ast_list);
    object IScoped          = import_class(ast_scoped);
    object IVar             = import_class(ast_var);
    object InputFile        = import_class(infile);
    object OutputFile       = import_class(outfile);

    object ifixed           = import_object(ifixed);
    object null             = import_object(nil);
    object true             = import_object(true);
    object false            = import_object(false);
    object charactertable   = import_object(chartable);
    object stdinstream      = import_object(stdinstream);
    object stdoutstream     = import_object(stdoutstream);

/* Generated code */

