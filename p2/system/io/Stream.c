
#include <stdlib.h>
#include <stdio.h>
#include <system/io/Stream.h>

/* ======================================================================== */

Type_Class IO_Stream_Class;

/* ======================================================================== */

void pre_init_IO_Stream()
{
    IO_Stream_Class = new_Named_Class((Object)Type_Object_Class, L"IO_Stream");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_IO_Stream()
{

}
