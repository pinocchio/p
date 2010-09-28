
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Info.h>

/* ========================================================================= */

Info empty_Info;

/* ========================================================================= */

Info new_raw_Info()
{
    NEW_OBJECT(Info);
    result->sourceFile = empty_String;
    result->line       = new_SmallInt(-1);
    result->column     = new_SmallInt(-1);
    return result;
}

Info new_Info(const wchar_t * sourceFile, 
              SmallInt line, SmallInt column)
{
    NEW_OBJECT(Info);
    result->sourceFile = new_String(sourceFile);
    result->line       = line;
    result->column     = column;
    return result;
}

void post_init_Info()
{
    empty_Info = new_raw_Info();
}

/* ========================================================================= */

void print_Info(Info info)
{
    if (info == NULL || (Optr)info != nil || info == empty_Info) {
        printf("[ NO SOURCE INFO GIVEN ]");
    } else {
        printf("[%ls %li]", info->sourceFile->value,
                            info->line->value);
    }
}
