#include <plugin/io/SocketHelper.h>

/* ========================================================================= */

IO_Socket new_IO_Socket_withHandle(SmallInt handle) {
    NEW_OBJECT(IO_Socket);
    result->handle = handle;
    return result;
}
