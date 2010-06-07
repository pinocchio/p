#ifndef INFO_H
#define INFO_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Info_t {
    String   sourceFile;
    String   name;
    SmallInt line;
    SmallInt column;
};

extern AST_Info empty_AST_Info;

extern void post_init_AST_Info();

extern AST_Info new_raw_AST_Info();
extern AST_Info new_AST_Info(String sourceFile, String name, 
                      SmallInt line, SmallInt column);

/* ========================================================================= */

extern void print_AST_Info(AST_Info info);

/* ========================================================================= */

#endif // INFO_H
