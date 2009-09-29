
#include <stdlib.h>
#include <stdio.h>
#include <system/io/File.h>

/* ======================================================================== */

Type_Class File_Type_Class;

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
    File_Type_Class = new_Named_Type_Class((Object)Type_Object_Type_Class, L"File");
}

/* =========================================================================*/


/* =========================================================================*/

void post_init_File()
{
    // TODO install methods 
}