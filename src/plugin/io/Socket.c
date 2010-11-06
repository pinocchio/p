// Auto Generated. Do not change!.
#include <plugin/Plugin.h>
#include <wchar.h>
#include <stdio.h>
#include <plugin/io/SocketHelper.c>

#line 3 "Socket >> primReadyToWrite"
NATIVE(Socket_primReadyToWrite)
    ASSERT_ARG_SIZE(0);
 
    int n, listener, maxfd;
    fd_set readset, writeset, exset;
    struct timeval timeout;

    listener = unwrap_int(SELF->ivals[0]);
    maxfd = listener;

    FD_ZERO(&readset);
    FD_ZERO(&writeset);
    FD_ZERO(&exset);

    FD_SET(listener, &writeset);

    timeout.tv_sec = 0;
    timeout.tv_usec = 1000*10;

    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);

    if (FD_ISSET(listener, &writeset)) {
        RETURN_FROM_NATIVE(true);
    }
    else
    {
        RETURN_FROM_NATIVE(false);
    }
 
}

#line 3 "Socket >> primConnectTo:port:"
NATIVE(Socket_primConnectTo_95_port_95_)
    ASSERT_ARG_SIZE(2);

    struct sockaddr_in sin;
    struct hostent * server;

    server = gethostbyname(unicode_to_ascii(((Symbol)NATIVE_ARG(0))->value));

    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_port = htons(((SmallInt)NATIVE_ARG(1))->value);

    //Bcopy((char *)server->h_addr,
    //    (char *)&sin.sin_addr.s_addr,
    //    server->h_length);

    assert(!(connect(unwrap_int(SELF->ivals[0]), (struct sockaddr *) &sin, sizeof(sin)) == -1),
        fwprintf(stderr, L"Socket failed to connect"););
  
    RETURN_FROM_NATIVE(self);
 
}

#line 3 "Socket >> primAccept"
NATIVE(Socket_primAccept)
    ASSERT_ARG_SIZE(0);

    int handle_current;
    socklen_t addrlen;
    struct sockaddr_in sin;

    /* wait for a client to talk to us */
    addrlen = sizeof(sin);
    assert(!((handle_current = accept(unwrap_int(SELF->ivals[0]), (struct sockaddr *) &sin, &addrlen)) == -1),
        fwprintf(stderr, L"Socket failed to accept"););

 make_nonblocking(handle_current);
 
    RETURN_FROM_NATIVE(new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current)));
 
}

#line 3 "Socket >> primReadyToReceive"
NATIVE(Socket_primReadyToReceive)
    ASSERT_ARG_SIZE(0);

  
 int n, listener, maxfd;
    fd_set readset, writeset, exset;
    struct timeval timeout;

    listener = unwrap_int(SELF->ivals[0]);
    maxfd = listener;

    FD_ZERO(&readset);
    FD_ZERO(&writeset);
    FD_ZERO(&exset);

    FD_SET(listener, &readset);

    timeout.tv_sec = 0;
    timeout.tv_usec = 1000*10;

    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);

    if (FD_ISSET(listener, &readset)) {
         RETURN_FROM_NATIVE(true);
    }
    else
    {
        RETURN_FROM_NATIVE(false);
    }
 
}

#line 3 "Socket >> primReceiveInto:"
NATIVE(Socket_primReceiveInto_95_)
    ASSERT_ARG_SIZE(1);

     char * buffer = unicode_to_ascii(((String)NATIVE_ARG(0))->value);
 int alloc = ((Symbol)NATIVE_ARG(0))->size;
 int s;

 //fwprintf(stdout, L"Buffer size ->: %i\n", alloc );	
     s = recv(unwrap_int(SELF->ivals[0]), buffer, alloc, 0);

 if( s > 0 )
 {
     //fwprintf(stdout, L"Size ->: %i\n", s);	
      //fwprintf(stdout, L"Read -> : %s\n", buffer);
     RETURN_FROM_NATIVE(wrap_int( s ));
 }
 if( s == 0 )
 {
  // socket closed
  // fwprintf(stdout, L"Socket closed\n");
  fail(Network_Kernel_ConnectionClosed_Class, 0);
 }
 if( s < 0 )
 {
  // error
         fwprintf(stderr, L"Socket failed to initialize, errono %i", errno);
  fail(Network_Kernel_NetworkError_Class, 0);
 }
 

 
}

#line 3 "Socket >> primListenOn:"
NATIVE(Socket_primListenOn_95_)
    ASSERT_ARG_SIZE(1);

    struct sockaddr_in sin;

    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = INADDR_ANY;
    sin.sin_port = htons(((SmallInt)NATIVE_ARG(0))->value);

    /* bind the socket to the port number */
    assert(!(bind(unwrap_int(SELF->ivals[0]), (struct sockaddr *) &sin, sizeof(sin)) == -1),
        fwprintf(stderr, L"Socket failed to bind"););

    /* show that we are willing to listen */
    assert(!(listen(unwrap_int(SELF->ivals[0]), 5) == -1),
        fwprintf(stderr, L"Socket failed to listen"););

    RETURN_FROM_NATIVE(self);
 
}

#line 3 "Socket >> primSocketRemotePort"
NATIVE(Socket_primSocketRemotePort)
    ASSERT_ARG_SIZE(0);

    struct sockaddr_in sin;
    socklen_t addrlen;

    /* --- TCP --- */
    addrlen = sizeof(sin);
    if (getpeername(unwrap_int(SELF->ivals[0]), (struct sockaddr *)&sin,  &addrlen)
        || (AF_INET != sin.sin_family)) {
        RETURN_FROM_NATIVE(wrap_int(0));
    }
    RETURN_FROM_NATIVE(wrap_int(ntohs(sin.sin_port)));
 
}

#line 3 "Socket >> primClose"
NATIVE(Socket_primClose)
    ASSERT_ARG_SIZE(0);
    
 close(unwrap_int(SELF->ivals[0]));
    RETURN_FROM_NATIVE(self);
 
}

#line 3 "Socket >> primWrite:"
NATIVE(Socket_primWrite_95_)
    ASSERT_ARG_SIZE(1);
 
    char * buffer = unicode_to_ascii(((String)NATIVE_ARG(0))->value);
    int s;

    s = write(unwrap_int(SELF->ivals[0]), buffer, strlen(buffer));

     if( s > 0 )
 {
     //fwprintf(stdout, L"Size ->: %i\n", s);	
      //fwprintf(stdout, L"Read -> : %s\n", buffer);
     RETURN_FROM_NATIVE(self);
 }
 if( s == 0 )
 {
  // socket closed
  // fwprintf(stdout, L"Socket closed\n");
  fail(Network_Kernel_ConnectionClosed_Class, 0);
 }
 if( s < 0 )
 {
  // error
         fwprintf(stderr, L"Socket failed to initialize, errono %i", errno);
  fail(Network_Kernel_NetworkError_Class, 0);
 }
 
 
}

#line 3 "Socket >> primInit"
NATIVE(Socket_primInit)
    ASSERT_ARG_SIZE(0);

    int handle;
    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),
        fwprintf(stderr, L"Socket failed to initialize"););
  
    make_nonblocking(handle);
  
    SELF->ivals[0] = wrap_int(handle);
    RETURN_FROM_NATIVE(self);
 
}

#line 3 "Socket >> primReadyToAccept"
NATIVE(Socket_primReadyToAccept)
    ASSERT_ARG_SIZE(0);

 
 int n, listener, maxfd;
    fd_set readset, writeset, exset;
    struct timeval timeout;
    
    listener = unwrap_int(SELF->ivals[0]);
    maxfd = listener;

    FD_ZERO(&readset);
    FD_ZERO(&writeset);
    FD_ZERO(&exset);

    FD_SET(listener, &readset);

    timeout.tv_sec = 0;
    timeout.tv_usec = 1000*10 ;

    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);

    if (FD_ISSET(listener, &readset)) {
        RETURN_FROM_NATIVE(true);
    }
    else
    {
        RETURN_FROM_NATIVE(false);
    }
 
}

#line 3 "Socket >> primReceive:"
NATIVE(Socket_primReceive_95_)
    ASSERT_ARG_SIZE(1);

    char dir[ unwrap_int( NATIVE_ARG(0) ) ];
    int s;

    s = recv(unwrap_int(SELF->ivals[0]), dir, sizeof(dir), 0);

    if( s > 0 )
    {
        fwprintf(stdout, L"Size ->: %i\n", s);	
        fwprintf(stdout, L"Read -> : %s\n", dir);
        dir[s] = L'\0';
        fwprintf(stdout, L"Before new string\n", s);
        RETURN_FROM_NATIVE(new_String_from_charp(&dir[0]));
    }
    if( s == 0 )
    {
        // socket closed
        // fwprintf(stdout, L"Socket closed\n");
        fail(Network_Kernel_ConnectionClosed_Class, 0);
    }
    if( s < 0 )
    {
        // error
        fwprintf(stderr, L"Socket failed to initialize, errno %i", errno);
        fail(Network_Kernel_NetworkError_Class, 0);
    }
 
}

#line 3 "Socket >> primStatus"
NATIVE(Socket_primStatus)
    ASSERT_ARG_SIZE(0);
 
 int sval;
 int ret_val = 1;
 fd_set check_set;
 struct timeval to;

 int sock = unwrap_int(SELF->ivals[0]);

 FD_ZERO(&check_set);
 FD_SET(sock,&check_set);

 to.tv_sec = 0;
 to.tv_usec = 1000*10 ;

 sval = select(sock + 1,&check_set,0,0,&to);
 
 fwprintf(stderr, L"Select sval %d \n",sval);
 
 if( sval < 0)
 {
  fwprintf(stderr, L"Select returned %d %d\n",sval,errno);
  ret_val = -1;
 }
 if(sval == 0)
 {
  fwprintf(stderr, L"Select timed out.\n");
  ret_val = 0;
 }
 else if(sval > 0)
 {
   fwprintf(stderr, L"Select shows %d as return val.\n",sval);
 }
 
 RETURN_FROM_NATIVE(wrap_int(ret_val));
 
}

#line 3 "Socket >> primSocketRemoteAddress"
NATIVE(Socket_primSocketRemoteAddress)
    ASSERT_ARG_SIZE(0);

    struct sockaddr_in sin;
    socklen_t addrlen;

    /* --- TCP --- */
    addrlen = sizeof(sin);
    if (getpeername(unwrap_int(SELF->ivals[0]), (struct sockaddr *)&sin, &addrlen)
        || (AF_INET != sin.sin_family)) {
        RETURN_FROM_NATIVE(wrap_int(0));
    }
    RETURN_FROM_NATIVE(wrap_int(ntohl(sin.sin_addr.s_addr)));
 
}

// ============================================================================

PLUGIN()
    EXPORT(L"primReadyToWrite", Socket_primReadyToWrite);
    EXPORT(L"primConnectTo:port:", Socket_primConnectTo_95_port_95_);
    EXPORT(L"primAccept", Socket_primAccept);
    EXPORT(L"primReadyToReceive", Socket_primReadyToReceive);
    EXPORT(L"primReceiveInto:", Socket_primReceiveInto_95_);
    EXPORT(L"primListenOn:", Socket_primListenOn_95_);
    EXPORT(L"primSocketRemotePort", Socket_primSocketRemotePort);
    EXPORT(L"primClose", Socket_primClose);
    EXPORT(L"primWrite:", Socket_primWrite_95_);
    EXPORT(L"primInit", Socket_primInit);
    EXPORT(L"primReadyToAccept", Socket_primReadyToAccept);
    EXPORT(L"primReceive:", Socket_primReceive_95_);
    EXPORT(L"primStatus", Socket_primStatus);
    EXPORT(L"primSocketRemoteAddress", Socket_primSocketRemoteAddress);
}

void unload_plugin() {}
