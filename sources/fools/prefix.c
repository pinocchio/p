#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <scheme/system.h>
#include <scheme/natives.h>
#include <print.h>

int main () {
    bootstrap();
    bootstrap_scheme();

    env_object env = empty_env;

/* Generated code */

