#ifndef INFO_H
#define INFO_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Info_t {
    Type_String   sourceFile;
    Type_String   name;
    Type_SmallInt line;
    Type_SmallInt column;
};

extern AST_Info empty_AST_Info;

CREATE_INITIALIZERS(AST_Info);

extern AST_Info new_raw_AST_Info();
extern AST_Info new_AST_Info(Type_String sourceFile, Type_String name, 
                      Type_SmallInt line, Type_SmallInt column);

/* ========================================================================= */

/* ========================================================================= */

#endif // INFO_H
