#include <assert.h>
#include <model.h>
#include <ast.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <scheme_natives.h>
#include <print.h>

int main () {
    bootstrap();
    bootstrap_scheme();

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);
    
    printf("start_env: %x\n", env);

/* Generated code */

