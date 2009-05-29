#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <scheme/natives.h>
#include <scheme/system.h>
#include <scheme/symbols.h>
#include <print.h>

int main () {
    bootstrap();

    env_object env = empty_env;

    object ifixed       = (object)make_iconst(fools_system->ifixed);
    object dictionary   = (object)make_iconst(fools_system->dict);
    object array        = (object)make_iconst(fools_system->array);
    object null         = (object)make_iconst((object)fools_system->nil);
/* Generated code */

