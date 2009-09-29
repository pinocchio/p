#ifndef INFO_H
#define INFO_H

#include <pinocchio.h>

/* ======================================================================== */

struct AST_Info_t {
    wchar_t *   sourceIO_File;
    int         line;
    int         column;
};

CREATE_INITIALIZERS(AST_Info);
extern AST_Info new_AST_Info(wchar_t * sourceIO_File, int line, int column);

/* ======================================================================== */

/* ======================================================================== */

#endif // INFO_H
