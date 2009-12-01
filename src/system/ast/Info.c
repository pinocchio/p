
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Info.h>

/* ========================================================================= */

Type_Class AST_Info_Class;
AST_Info empty_AST_Info;

/* ========================================================================= */

AST_Info new_raw_AST_Info()
{
    NEW_OBJECT(AST_Info);
    result->name       = empty_Type_String;
    result->sourceFile = empty_Type_String;
    result->line       = new_Type_SmallInt(-1);
    result->column     = new_Type_SmallInt(-1);
    return result;
}

AST_Info new_AST_Info(Type_String sourceFile, Type_String name, 
                      Type_SmallInt line, Type_SmallInt column)
{
    AST_Info result     = new_raw_AST_Info();
    result->sourceFile  = sourceFile;
    result->name        = name;
    result->line        = line;
    result->column      = column;
    return result;
}

void pre_init_AST_Info()
{
    AST_Info_Class         = new_Class_named((Object)Type_Object_Class,
                                             L"AST_Info",
                                             CREATE_OBJECT_TAG(AST_INFO));
    empty_AST_Info         = NEW_t(AST_Info);
    HEADER(empty_AST_Info) = (Object)AST_Info_Class;
}

/* ========================================================================= */

void print_AST_Info(AST_Info info)
{
    assert1((info != NULL && (Object)info != Nil), 
        "Wrong info for print_AST_Info");
    if (info == empty_AST_Info) {
        printf("[ NO SOURCE INFO GIVEN ]");
    } else {
        printf("[%ls %i]", info->name->value, 
                          //info->sourceFile->value,
                          info->line->value);
    }
}


/* ========================================================================= */

void post_init_AST_Info()
{
    empty_AST_Info->name       = empty_Type_String;
    empty_AST_Info->sourceFile = empty_Type_String;
    empty_AST_Info->line       = new_Type_SmallInt(-1);
    empty_AST_Info->column     = new_Type_SmallInt(-1);
}
