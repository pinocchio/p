#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct IO_File_t {
    FILE *file;
    Type_SmallInt size;
};


CREATE_INITIALIZERS(IO_File)

/* ========================================================================= */

extern char* unicode_to_ascii(const wchar_t* str);

/* ========================================================================= */

#endif // FILE_H
