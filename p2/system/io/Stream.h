#ifndef IO_STREAM_H
#define IO_STREAM_H

#include <pinocchio.h>

/* ========================================================================= */

extern IO_Stream StandardIn;
extern IO_Stream StandardOut;
extern IO_Stream StandardError;
extern IO_Stream NullStream;

/* ========================================================================= */


struct IO_Stream_t {
    FILE *file;
};

CREATE_INITIALIZERS(IO_Stream)
extern IO_Stream new_IO_Stream();
extern IO_Stream new_IO_Stream_fromStream(FILE* file);

/* ========================================================================= */

/* ========================================================================= */

#endif // IO_STREAM_H
