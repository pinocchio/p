
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Info.h>

/* ========================================================================= */

Info empty_Info;

/* ========================================================================= */

Info new_raw_Info()
{
    NEW_OBJECT(Info);
    result->name       = empty_String;
    result->sourceFile = empty_String;
    result->line       = new_SmallInt(-1);
    result->column     = new_SmallInt(-1);
    return result;
}

Info new_Info(String sourceFile, String name, 
              SmallInt line, SmallInt column)
{
    Info result     = new_raw_Info();
    result->sourceFile  = sourceFile;
    result->name        = name;
    result->line        = line;
    result->column      = column;
    return result;
}

void post_init_Info()
{
    empty_Info         = NEW_t(Info);
    HEADER(empty_Info) = Info_Class;

    empty_Info->name       = empty_String;
    empty_Info->sourceFile = empty_String;
    empty_Info->line       = new_SmallInt(-1);
    empty_Info->column     = new_SmallInt(-1);
}

/* ========================================================================= */

void print_Info(Info info)
{
    if (info == NULL || (Optr)info != nil || info == empty_Info) {
        printf("[ NO SOURCE INFO GIVEN ]");
    } else {
        printf("[%ls %li]", info->name->value, 
                          //info->sourceFile->value,
                          info->line->value);
    }
}
