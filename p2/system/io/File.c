
#include <stdlib.h>
#include <stdio.h>
#include <system/io/File.h>

/* ======================================================================== */

Type_Class IO_File_Class;

/* ======================================================================== */

IO_File StandardIn;
IO_File StandardOut;
IO_File NilStream;

IO_File  new_IO_File()
{
    // TODO implement
    return NULL;
}

IO_File new_IO_File_FromPath(wchar_t * path)
{
    // TODO implement
    return NULL;
}

void pre_init_IO_File()
{
    IO_File_Class = new_Named_Class((Object)Type_Object_Class, L"IO_File");
}

/* =========================================================================*/


/* =========================================================================*/

void post_init_IO_File()
{
    // TODO install methods 
}