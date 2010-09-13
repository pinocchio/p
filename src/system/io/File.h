#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct IO_File_t {
    FILE *file;
    SmallInt   size;
    String     path;
};

extern void post_init_IO_File();
extern void cleanup_IO_File();

IO_File new_IO_File();
IO_File new_IO_File_fromFile(FILE* file);
IO_File new_IO_ReadFile_from(FILE* file);
IO_File new_IO_WriteFile_from(FILE* file);
IO_File new_IO_File_fromPath(const wchar_t * path, char * mode);

/* ========================================================================= */

#endif // FILE_H
