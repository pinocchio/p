#include <plugin/io/SocketHelper.h>

/* For sockaddr_in */
#include <netinet/in.h>
/* For socket functions */
#include <sys/socket.h>
/* For fcntl */
#include <fcntl.h>
/* for select */
#include <sys/select.h>



void
make_nonblocking(int fd) {
    fcntl(fd, F_SETFL, O_NONBLOCK);
}

/* ========================================================================= */

IO_Socket new_IO_Socket_withHandle(SmallInt handle) {
    NEW_OBJECT(IO_Socket);
    result->handle = handle;
    result->connected = true;
    return result;
}
