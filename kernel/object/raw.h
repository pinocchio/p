#ifndef KERNEL_OBJECT_RAW_H
#define KERNEL_OBJECT_RAW_H

#include <pinocchio.h>

/* ======================================================================= */

struct Raw {
    Header              header;
    void**              data;
};
extern Class Raw_class;

/* ======================================================================= */

extern Raw new_Raw(void** data);

/* ======================================================================= */

#endif // KERNEL_OBJECT_RAW_H
