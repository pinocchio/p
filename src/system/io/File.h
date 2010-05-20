#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct IO_File_t {
    FILE *file;
    Number_SmallInt   size;
    Type_String     path;
};

CREATE_INITIALIZERS(IO_File);

EXPORT_CLASS(IO_ReadFile);
EXPORT_CLASS(IO_WriteFile);
EXPORT_REFERENCE(IO_ReadFile);
EXPORT_REFERENCE(IO_WriteFile);

IO_File new_IO_File();
IO_File new_IO_File_fromFile(FILE* file);
IO_File new_IO_ReadFile_from(FILE* file);
IO_File new_IO_WriteFile_from(FILE* file);
IO_File new_IO_File_fromPath(const wchar_t * path, char * mode);

/* ========================================================================= */

#endif // FILE_H
