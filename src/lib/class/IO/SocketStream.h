#ifndef PINOCCHIO_LIB_IO_PSOCKETSTREAM
#define PINOCCHIO_LIB_IO_PSOCKETSTREAM 

#include <pinocchio.h>
extern void init_IO_PSocketStream_methods();

extern void init_IO_PSocketStream_layout();

#include <lib/lib.h>

extern Optr layout_IO_SocketStream_Class_class;
extern Optr slot_IO_SocketStream_recentlyRead;
extern Optr slot_IO_SocketStream_socket;
extern Optr slot_IO_SocketStream_inBuffer;
extern Optr slot_IO_SocketStream_outBuffer;
extern Optr slot_IO_SocketStream_inNextToWrite;
extern Optr slot_IO_SocketStream_outNextToWrite;
extern Optr slot_IO_SocketStream_lastRead;
extern Optr slot_IO_SocketStream_timeout;
extern Optr slot_IO_SocketStream_autoFlush;
extern Optr slot_IO_SocketStream_bufferSize;
extern Optr slot_IO_SocketStream_binary;
extern Optr slot_IO_SocketStream_shouldSignal;
extern Optr layout_IO_SocketStream;


#endif //PINOCCHIO_LIB_IO_PSOCKETSTREAM