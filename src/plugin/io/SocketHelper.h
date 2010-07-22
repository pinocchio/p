#ifndef IO_SOCKET_H
#define IO_SOCKET_H

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <pinocchio.h>
#include <unistd.h>

/* ========================================================================= */

struct IO_Socket_t {
    SmallInt handle;
};

TYPE(IO_Socket)

extern IO_Socket new_IO_Socket_withHandle(SmallInt handle);

/* ========================================================================= */

#endif // IO_SOCKET_H

