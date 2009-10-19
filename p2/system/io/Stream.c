
#include <stdlib.h>
#include <stdio.h>
#include <system/io/Stream.h>

/* ========================================================================= */

Type_Class IO_Stream_Class;

IO_Stream StandardIn;
IO_Stream StandardOut;
IO_Stream StandardError;
IO_Stream NullStream;

/* ========================================================================= */

void pre_init_IO_Stream()
{
    IO_Stream_Class = new_Named_Class((Object)Type_Object_Class,
                                      L"IO_Stream",
                                      create_type(1, OBJECT));
}

/* ========================================================================= */



IO_Stream new_IO_Stream()
{
    NEW_OBJECT(IO_Stream);
    return result;
}

IO_Stream new_IO_Stream_fromStream(FILE* file)
{
    IO_Stream result = new_IO_Stream();
    assert1(file != NULL, "Cannot create a new File from NULL.");
    result->file = file;
    return result;
}

/* ========================================================================= */

void post_init_IO_Stream()
{

    StandardIn      = new_IO_Stream_fromStream(stdin);
    StandardOut     = new_IO_Stream_fromStream(stdout);
    StandardError   = new_IO_Stream_fromStream(stderr);
    NullStream      = new_IO_Stream();
}
