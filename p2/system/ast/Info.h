#ifndef INFO_H
#define INFO_H

#include <pinocchio.h>

/* ======================================================================== */

struct AST_Info_t {
    wchar_t *   sourceFile;
    int         line;
    int         column;
};

CREATE_INITIALIZERS(Info);
extern AST_Info new_Info(wchar_t * sourceFile, int line, int column);

/* ======================================================================== */

/* ======================================================================== */

#endif // INFO_H
