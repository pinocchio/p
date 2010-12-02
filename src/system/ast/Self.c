#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Self.h>

/* ========================================================================= */

Optr self;

/* ========================================================================= */

Optr current_self()
{
    return current_env()->home_context->self;
}

/* ========================================================================= */

void post_init_Self()
{
    self           = (Optr) NEW_t(Self);
    HEADER(self)   = Self_Class;
    Self_Class->cvars[0] = self;
}
