#ifndef INFO_H
#define INFO_H

#include <pinocchio.h>

/* ========================================================================= */

struct Info_t {
    String   sourceFile;
    String   name;
    SmallInt line;
    SmallInt column;
};

extern Info empty_Info;

extern void post_init_Info();

extern Info new_raw_Info();
extern Info new_Info(String sourceFile, String name, 
                      SmallInt line, SmallInt column);

/* ========================================================================= */

extern void print_Info(Info info);

/* ========================================================================= */

#endif // INFO_H
