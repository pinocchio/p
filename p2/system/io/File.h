#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct IO_File_t {
    Type_SmallInt *size;
    FILE *file;
};

extern IO_File StandardIn;
extern IO_File StandardOut;
extern IO_File StandardError;
extern IO_File NullStream;


CREATE_INITIALIZERS(IO_File)

/* ======================================================================== */

extern char* unicode_to_ascii(const wchar_t* str);

/* ======================================================================== */

#endif // FILE_H
