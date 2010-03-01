#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

#define IO_FILE_SIZE 3
#define IO_FILE_VARS L"pointer", L"size", L"path"

struct IO_File_t {
    FILE *file;
    Type_SmallInt   size;
    Type_String     path;
};


CREATE_INITIALIZERS(IO_File);
IO_File new_IO_File();
IO_File new_IO_File_fromFile(FILE* file);
IO_File new_IO_File_fromPath(const wchar_t * path, char * mode);

/* ========================================================================= */

#endif // FILE_H
