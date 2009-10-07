#ifndef IO_STREAM_H
#define IO_STREAM_H

#include <pinocchio.h>

/* ======================================================================== */

struct IO_Stream_t {
    FILE *file;
};

CREATE_INITIALIZERS(IO_Stream)
extern IO_Stream new_IO_Stream();

/* ======================================================================== */

/* ======================================================================== */

#endif // IO_STREAM_H
