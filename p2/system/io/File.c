
#include <stdlib.h>
#include <stdio.h>
#include <system/io/File.h>

/* ======================================================================== */

Type_Class File_Class;

/* ======================================================================== */

Type_File StandardIn;
Type_File StandardOut;
Type_File NilStream;

Type_File 
new_File()
{
    // TODO implement
    return NULL;
}

Type_File 
new_File_FromPath(wchar_t * path)
{
    // TODO implement
    return NULL;
}

void pre_init_File()
{
    File_Class = new_Named_Class((Object)Type_Object_Class, L"File");
}

/* =========================================================================*/


/* =========================================================================*/

void post_init_File()
{
    // TODO install methods 
}