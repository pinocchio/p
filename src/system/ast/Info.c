
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Info.h>

/* ========================================================================= */

AST_Info empty_AST_Info;

/* ========================================================================= */

AST_Info new_raw_AST_Info()
{
    NEW_OBJECT(AST_Info);
    result->name       = empty_String;
    result->sourceFile = empty_String;
    result->line       = new_SmallInt(-1);
    result->column     = new_SmallInt(-1);
    return result;
}

AST_Info new_AST_Info(String sourceFile, String name, 
                      SmallInt line, SmallInt column)
{
    AST_Info result     = new_raw_AST_Info();
    result->sourceFile  = sourceFile;
    result->name        = name;
    result->line        = line;
    result->column      = column;
    return result;
}

void post_init_AST_Info()
{
    empty_AST_Info         = NEW_t(AST_Info);
    HEADER(empty_AST_Info) = AST_Info_Class;

    empty_AST_Info->name       = empty_String;
    empty_AST_Info->sourceFile = empty_String;
    empty_AST_Info->line       = new_SmallInt(-1);
    empty_AST_Info->column     = new_SmallInt(-1);
}

/* ========================================================================= */

void print_AST_Info(AST_Info info)
{
    if (info == NULL || (Optr)info != nil || info == empty_AST_Info) {
        printf("[ NO SOURCE INFO GIVEN ]");
    } else {
        printf("[%ls %i]", info->name->value, 
                          //info->sourceFile->value,
                          info->line->value);
    }
}
