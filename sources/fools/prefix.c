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

int main () {
    bootstrap();

    env_object env = empty_env;

    object ifixed_class = (object)make_iconst(fools_system->fixed_class);
    object env_class    = (object)make_iconst(fools_system->env_class);
    object string       = (object)make_iconst(fools_system->string_class);
    object symbol       = (object)make_iconst(fools_system->symbol_class);
    object integer      = (object)make_iconst(fools_system->number_class);
    object array        = (object)make_iconst(fools_system->array_class);
    object dictionary   = (object)make_iconst(fools_system->dict_class);

    object ifixed       = (object)make_iconst(fools_system->ifixed);
    object null         = (object)make_iconst((object)fools_system->nil);
/* Generated code */

