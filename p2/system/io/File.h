#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct IO_File_t {
    Type_SmallInt size;
    FILE *file;
};


CREATE_INITIALIZERS(IO_File)

/* ========================================================================= */

extern char* unicode_to_ascii(const wchar_t* str);

/* ========================================================================= */

#endif // FILE_H
