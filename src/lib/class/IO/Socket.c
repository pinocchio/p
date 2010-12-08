#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9941 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9943 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9942 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9943, (Optr)&t_method_return);
    Method PMethod9940 = new_Method_with(PArray9941, empty_Array, empty_Array, PThreadedCode9942, 1, PSend9943);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9940, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9947 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9946 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9947);
    Array PArray9945 = new_Array_with(1, (Optr)PAnnotation9946);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9949 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9948 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9949, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9944 = new_NativeMethod_with(empty_Array, empty_Array, PArray9945, PThreadedCode9948, 2, PSend9949, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9944, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9951 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9955 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9954 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9955, (Optr)&t_block_return);
    Block PBlock9953 = new_Block_with(empty_Array, empty_Array, PThreadedCode9954, 1, PSend9955);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9958 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9959 = new_Send((Optr)PSend9958, SMB_yield, 0);
    Array PThreadedCode9957 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9958, (Optr)&t_send0, (Optr)PSend9959, (Optr)&t_block_return);
    Block PBlock9956 = new_Block_with(empty_Array, empty_Array, PThreadedCode9957, 1, PSend9959);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9960 = new_Send((Optr)PBlock9953, SMB_whileFalse_, 1, (Optr)PBlock9956);
    String string_9961 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9961_Const = new_Constant((Optr)string_9961);
    // warn:. 
    Send PSend9962 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9961_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9963 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9952 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9953, (Optr)&t_push_closure, (Optr)PBlock9956, (Optr)&t_send1, (Optr)PSend9960, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9961, (Optr)&t_send1, (Optr)PSend9962, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9963, (Optr)&t_method_return);
    Method PMethod9950 = new_Method_with(PArray9951, empty_Array, empty_Array, PThreadedCode9952, 3, PSend9960, PSend9962, PSend9963);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9950, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9965 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9968 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9967 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9968);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9969 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9966 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9967, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9968, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9969, (Optr)&t_method_return);
    Method PMethod9964 = new_Method_with(empty_Array, PArray9965, empty_Array, PThreadedCode9966, 2, PAssign9967, PSend9969);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9964, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9971 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9973 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9972 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9973, (Optr)&t_method_return);
    Method PMethod9970 = new_Method_with(PArray9971, empty_Array, empty_Array, PThreadedCode9972, 1, PSend9973);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9970, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9975 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9978 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9977 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9978);
    Array PArray9976 = new_Array_with(1, (Optr)PAnnotation9977);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9980 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9979 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9980, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9974 = new_NativeMethod_with(PArray9975, empty_Array, PArray9976, PThreadedCode9979, 2, PSend9980, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9974, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9984 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9983 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9984);
    Array PArray9982 = new_Array_with(1, (Optr)PAnnotation9983);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9986 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9985 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9986, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9981 = new_NativeMethod_with(empty_Array, empty_Array, PArray9982, PThreadedCode9985, 2, PSend9986, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9981, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9988 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9989 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9995 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9994 = new_Send((Optr)PSend9995, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9993 = new_Send((Optr)PSend9994, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9992 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9993);
    Assign PAssign9991 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9992);
    // size. 
    Send PSend9997 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9996 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9997);
    String string_9998 = new_String(L"-Data: ");
    Constant string_9998_Const = new_Constant((Optr)string_9998);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9999 = new_Send((Optr)string_9998_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10000 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9999);
    String string_10001 = new_String(L"-Size: ");
    Constant string_10001_Const = new_Constant((Optr)string_10001);
    // ,. 
    Send PSend10002 = new_Send((Optr)string_10001_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend10003 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10002);
    String string_10004 = new_String(L"-Buffer size ");
    // size. 
    Send PSend10005 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_10004_Const = new_Constant((Optr)string_10004);
    // ,. 
    Send PSend10006 = new_Send((Optr)string_10004_Const, SMB__append_, 1, (Optr)PSend10005);
    // warn:. 
    Send PSend10007 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10006);
    String string_10008 = new_String(L"-Buffer before: ");
    Constant string_10008_Const = new_Constant((Optr)string_10008);
    // warn:. 
    Send PSend10009 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10008_Const);
    // warn:. 
    Send PSend10010 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend10011 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend10012 = new_Send((Optr)PSend10011, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend10013 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend10012, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_10014 = new_String(L"-Buffer after ");
    Constant string_10014_Const = new_Constant((Optr)string_10014);
    // warn:. 
    Send PSend10015 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10014_Const);
    // warn:. 
    Send PSend10016 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9990 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9991, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9995, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9994, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9993, (Optr)&t_send1, (Optr)PSend9992, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9996, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9998, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9999, (Optr)&t_send1, (Optr)PSend10000, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10001, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend10002, (Optr)&t_send1, (Optr)PSend10003, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10004, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend10005, (Optr)&t_send1, (Optr)PSend10006, (Optr)&t_send1, (Optr)PSend10007, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10008, (Optr)&t_send1, (Optr)PSend10009, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend10010, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend10011, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10012, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10013, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10014, (Optr)&t_send1, (Optr)PSend10015, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend10016, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9987 = new_Method_with(PArray9988, PArray9989, empty_Array, PThreadedCode9990, 11, PAssign9991, PAssign9996, PSend10000, PSend10003, PSend10007, PSend10009, PSend10010, PSend10013, PSend10015, PSend10016, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9987, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray10018 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend10020 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10021 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend10020);
    Array PThreadedCode10019 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend10020, (Optr)&t_send1, (Optr)PSend10021, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10017 = new_Method_with(PArray10018, empty_Array, empty_Array, PThreadedCode10019, 2, PSend10021, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod10017, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend10024 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign10025 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode10023 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10024, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10025, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10022 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10023, 3, PSend10024, PAssign10025, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10022, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray10027 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend10029 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode10028 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend10029, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10026 = new_Method_with(PArray10027, empty_Array, empty_Array, PThreadedCode10028, 2, PSend10029, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod10026, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10033 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation10032 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_10033);
    Array PArray10031 = new_Array_with(1, (Optr)PAnnotation10032);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10035 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10034 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10035, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10030 = new_NativeMethod_with(empty_Array, empty_Array, PArray10031, PThreadedCode10034, 2, PSend10035, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod10030, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray10037 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend10041 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode10040 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10041, (Optr)&t_block_return);
    Block PBlock10039 = new_Block_with(empty_Array, empty_Array, PThreadedCode10040, 1, PSend10041);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend10044 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10045 = new_Send((Optr)PSend10044, SMB_primYield, 0);
    Array PThreadedCode10043 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend10044, (Optr)&t_send0, (Optr)PSend10045, (Optr)&t_block_return);
    Block PBlock10042 = new_Block_with(empty_Array, empty_Array, PThreadedCode10043, 1, PSend10045);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10046 = new_Send((Optr)PBlock10039, SMB_whileFalse_, 1, (Optr)PBlock10042);
    String string_10047 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10047_Const = new_Constant((Optr)string_10047);
    // warn:. 
    Send PSend10048 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10047_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend10049 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode10038 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock10039, (Optr)&t_push_closure, (Optr)PBlock10042, (Optr)&t_send1, (Optr)PSend10046, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10047, (Optr)&t_send1, (Optr)PSend10048, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend10049, (Optr)&t_method_return);
    Method PMethod10036 = new_Method_with(PArray10037, empty_Array, empty_Array, PThreadedCode10038, 3, PSend10046, PSend10048, PSend10049);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod10036, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10051 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend10055 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode10054 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10055, (Optr)&t_block_return);
    Block PBlock10053 = new_Block_with(empty_Array, empty_Array, PThreadedCode10054, 1, PSend10055);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend10058 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10059 = new_Send((Optr)PSend10058, SMB_primYield, 0);
    Array PThreadedCode10057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend10058, (Optr)&t_send0, (Optr)PSend10059, (Optr)&t_block_return);
    Block PBlock10056 = new_Block_with(empty_Array, empty_Array, PThreadedCode10057, 1, PSend10059);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10060 = new_Send((Optr)PBlock10053, SMB_whileFalse_, 1, (Optr)PBlock10056);
    String string_10061 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10061_Const = new_Constant((Optr)string_10061);
    // warn:. 
    Send PSend10062 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10061_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend10063 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode10052 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock10053, (Optr)&t_push_closure, (Optr)PBlock10056, (Optr)&t_send1, (Optr)PSend10060, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10061, (Optr)&t_send1, (Optr)PSend10062, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend10063, (Optr)&t_method_return);
    Method PMethod10050 = new_Method_with(PArray10051, empty_Array, empty_Array, PThreadedCode10052, 3, PSend10060, PSend10062, PSend10063);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod10050, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray10065 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10067 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode10066 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend10067, (Optr)&t_method_return);
    Method PMethod10064 = new_Method_with(PArray10065, empty_Array, empty_Array, PThreadedCode10066, 1, PSend10067);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod10064, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend10070 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign10074 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode10073 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10074, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10072 = new_Block_with(empty_Array, empty_Array, PThreadedCode10073, 1, PAssign10074);
    // ifFalse:. 
    Send PSend10071 = new_Send((Optr)PSend10070, SMB_ifFalse_, 1, (Optr)PBlock10072);
    Array PThreadedCode10069 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10070, (Optr)&t_send_ifFalse_, (Optr)PSend10071, (Optr)PBlock10072, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10068 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10069, 2, PSend10071, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod10068, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10076 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10079 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation10078 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_10079);
    Array PArray10077 = new_Array_with(1, (Optr)PAnnotation10078);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10081 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10080 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10081, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10075 = new_NativeMethod_with(PArray10076, empty_Array, PArray10077, PThreadedCode10080, 2, PSend10081, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod10075, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray10083 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10086 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10090 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10089 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10090, (Optr)&t_block_return);
    Block PBlock10088 = new_Block_with(empty_Array, empty_Array, PThreadedCode10089, 1, PSend10090);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10091 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock10088);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend10092 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend10093 = new_Send((Optr)PSend10092, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode10087 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock10088, (Optr)&t_send1, (Optr)PSend10091, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10092, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend10093, (Optr)&t_method_return);
    Block PBlock10085 = new_Block_with(PArray10086, empty_Array, PThreadedCode10087, 2, PSend10091, PSend10093);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10094 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10085);
    Array PThreadedCode10084 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10085, (Optr)&t_send1, (Optr)PSend10094, (Optr)&t_method_return);
    Method PMethod10082 = new_Method_with(empty_Array, PArray10083, empty_Array, PThreadedCode10084, 1, PSend10094);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod10082, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10096 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10099 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation10098 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_10099);
    Array PArray10097 = new_Array_with(1, (Optr)PAnnotation10098);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10101 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10100 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10101, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10095 = new_NativeMethod_with(PArray10096, empty_Array, PArray10097, PThreadedCode10100, 2, PSend10101, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod10095, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend10104 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode10103 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10104, (Optr)&t_method_return);
    Method PMethod10102 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10103, 1, PSend10104);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod10102, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10108 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation10107 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_10108);
    Array PArray10106 = new_Array_with(1, (Optr)PAnnotation10107);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10110 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10109 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10110, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10105 = new_NativeMethod_with(empty_Array, empty_Array, PArray10106, PThreadedCode10109, 2, PSend10110, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod10105, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend10113 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10114 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode10112 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10113, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend10114, (Optr)&t_method_return);
    Method PMethod10111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10112, 2, PSend10113, PSend10114);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod10111, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign10117 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign10118 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode10116 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign10117, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10118, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10115 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10116, 3, PAssign10117, PAssign10118, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod10115, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend10121 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode10120 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10121, (Optr)&t_method_return);
    Method PMethod10119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10120, 1, PSend10121);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod10119, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray10123 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10126 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend10128 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10132 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_10132_Const = new_Constant((Optr)string_10132);
    // escape:. 
    Send PSend10133 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10132_Const);
    Array PThreadedCode10131 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10132, (Optr)&t_send1, (Optr)PSend10133, (Optr)&t_block_return);
    Block PBlock10130 = new_Block_with(empty_Array, empty_Array, PThreadedCode10131, 1, PSend10133);
    // ifTrue:. 
    Send PSend10129 = new_Send((Optr)PSend10128, SMB_ifTrue_, 1, (Optr)PBlock10130);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend10135 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign10134 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend10135);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend10136 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_10140 = new_String(L"invalidSocketHandle");
    Constant string_10140_Const = new_Constant((Optr)string_10140);
    // escape:. 
    Send PSend10141 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10140_Const);
    Array PThreadedCode10139 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10140, (Optr)&t_send1, (Optr)PSend10141, (Optr)&t_block_return);
    Block PBlock10138 = new_Block_with(empty_Array, empty_Array, PThreadedCode10139, 1, PSend10141);
    // ifTrue:. 
    Send PSend10137 = new_Send((Optr)PSend10136, SMB_ifTrue_, 1, (Optr)PBlock10138);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10142 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_10146 = new_String(L"unconnected");
    Constant string_10146_Const = new_Constant((Optr)string_10146);
    // escape:. 
    Send PSend10147 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10146_Const);
    Array PThreadedCode10145 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10146, (Optr)&t_send1, (Optr)PSend10147, (Optr)&t_block_return);
    Block PBlock10144 = new_Block_with(empty_Array, empty_Array, PThreadedCode10145, 1, PSend10147);
    // ifTrue:. 
    Send PSend10143 = new_Send((Optr)PSend10142, SMB_ifTrue_, 1, (Optr)PBlock10144);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend10148 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_10152 = new_String(L"waitingForConnection");
    Constant string_10152_Const = new_Constant((Optr)string_10152);
    // escape:. 
    Send PSend10153 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10152_Const);
    Array PThreadedCode10151 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10152, (Optr)&t_send1, (Optr)PSend10153, (Optr)&t_block_return);
    Block PBlock10150 = new_Block_with(empty_Array, empty_Array, PThreadedCode10151, 1, PSend10153);
    // ifTrue:. 
    Send PSend10149 = new_Send((Optr)PSend10148, SMB_ifTrue_, 1, (Optr)PBlock10150);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend10154 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_10158 = new_String(L"connected");
    Constant string_10158_Const = new_Constant((Optr)string_10158);
    // escape:. 
    Send PSend10159 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10158_Const);
    Array PThreadedCode10157 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10158, (Optr)&t_send1, (Optr)PSend10159, (Optr)&t_block_return);
    Block PBlock10156 = new_Block_with(empty_Array, empty_Array, PThreadedCode10157, 1, PSend10159);
    // ifTrue:. 
    Send PSend10155 = new_Send((Optr)PSend10154, SMB_ifTrue_, 1, (Optr)PBlock10156);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend10160 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_10164 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_10164_Const = new_Constant((Optr)string_10164);
    // escape:. 
    Send PSend10165 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10164_Const);
    Array PThreadedCode10163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10164, (Optr)&t_send1, (Optr)PSend10165, (Optr)&t_block_return);
    Block PBlock10162 = new_Block_with(empty_Array, empty_Array, PThreadedCode10163, 1, PSend10165);
    // ifTrue:. 
    Send PSend10161 = new_Send((Optr)PSend10160, SMB_ifTrue_, 1, (Optr)PBlock10162);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend10166 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_10170 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_10170_Const = new_Constant((Optr)string_10170);
    // escape:. 
    Send PSend10171 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10170_Const);
    Array PThreadedCode10169 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10170, (Optr)&t_send1, (Optr)PSend10171, (Optr)&t_block_return);
    Block PBlock10168 = new_Block_with(empty_Array, empty_Array, PThreadedCode10169, 1, PSend10171);
    // ifTrue:. 
    Send PSend10167 = new_Send((Optr)PSend10166, SMB_ifTrue_, 1, (Optr)PBlock10168);
    String string_10172 = new_String(L"unknown socket status");
    Array PThreadedCode10127 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10128, (Optr)&t_send_ifTrue_, (Optr)PSend10129, (Optr)PBlock10130, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10134, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10135, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend10136, (Optr)&t_send_ifTrue_, (Optr)PSend10137, (Optr)PBlock10138, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10142, (Optr)&t_send_ifTrue_, (Optr)PSend10143, (Optr)PBlock10144, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10148, (Optr)&t_send_ifTrue_, (Optr)PSend10149, (Optr)PBlock10150, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10154, (Optr)&t_send_ifTrue_, (Optr)PSend10155, (Optr)PBlock10156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend10160, (Optr)&t_send_ifTrue_, (Optr)PSend10161, (Optr)PBlock10162, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend10166, (Optr)&t_send_ifTrue_, (Optr)PSend10167, (Optr)PBlock10168, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_10172, (Optr)&t_method_return);
    Constant string_10172_Const = new_Constant((Optr)string_10172);
    Block PBlock10125 = new_Block_with(PArray10126, empty_Array, PThreadedCode10127, 9, PSend10129, PAssign10134, PSend10137, PSend10143, PSend10149, PSend10155, PSend10161, PSend10167, string_10172_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10173 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10125);
    Array PThreadedCode10124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10125, (Optr)&t_send1, (Optr)PSend10173, (Optr)&t_method_return);
    Method PMethod10122 = new_Method_with(empty_Array, PArray10123, empty_Array, PThreadedCode10124, 1, PSend10173);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod10122, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend10176 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode10175 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10176, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod10174 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10175, 2, PSend10176, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod10174, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10180 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation10179 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_10180);
    Array PArray10178 = new_Array_with(1, (Optr)PAnnotation10179);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10182 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10181 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10182, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10177 = new_NativeMethod_with(empty_Array, empty_Array, PArray10178, PThreadedCode10181, 2, PSend10182, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod10177, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10184 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10187 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation10186 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_10187);
    Array PArray10185 = new_Array_with(1, (Optr)PAnnotation10186);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10189 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10188 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10189, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10183 = new_NativeMethod_with(PArray10184, empty_Array, PArray10185, PThreadedCode10188, 2, PSend10189, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod10183, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray10191 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10193 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode10192 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend10193, (Optr)&t_method_return);
    Method PMethod10190 = new_Method_with(PArray10191, empty_Array, empty_Array, PThreadedCode10192, 1, PSend10193);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod10190, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend10198 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode10197 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10198, (Optr)&t_block_return);
    Block PBlock10196 = new_Block_with(empty_Array, empty_Array, PThreadedCode10197, 1, PSend10198);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend10201 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10202 = new_Send((Optr)PSend10201, SMB_primYield, 0);
    Array PThreadedCode10200 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend10201, (Optr)&t_send0, (Optr)PSend10202, (Optr)&t_block_return);
    Block PBlock10199 = new_Block_with(empty_Array, empty_Array, PThreadedCode10200, 1, PSend10202);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10203 = new_Send((Optr)PBlock10196, SMB_whileFalse_, 1, (Optr)PBlock10199);
    String string_10204 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10204_Const = new_Constant((Optr)string_10204);
    // warn:. 
    Send PSend10205 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10204_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend10206 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode10195 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock10196, (Optr)&t_push_closure, (Optr)PBlock10199, (Optr)&t_send1, (Optr)PSend10203, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10204, (Optr)&t_send1, (Optr)PSend10205, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10206, (Optr)&t_method_return);
    Method PMethod10194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10195, 3, PSend10203, PSend10205, PSend10206);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod10194, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10210 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation10209 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_10210);
    Array PArray10208 = new_Array_with(1, (Optr)PAnnotation10209);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10212 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10211 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10212, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10207 = new_NativeMethod_with(empty_Array, empty_Array, PArray10208, PThreadedCode10211, 2, PSend10212, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod10207, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray10214 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend10217 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign10216 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend10217);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend10219 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign10218 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend10219);
    String string_10220 = new_String(L"Size returned -> ");
    Constant string_10220_Const = new_Constant((Optr)string_10220);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10221 = new_Send((Optr)string_10220_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10222 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10221);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend10223 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode10215 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign10216, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend10217, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10218, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend10219, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10220, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend10221, (Optr)&t_send1, (Optr)PSend10222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend10223, (Optr)&t_method_return);
    Method PMethod10213 = new_Method_with(empty_Array, PArray10214, empty_Array, PThreadedCode10215, 4, PAssign10216, PAssign10218, PSend10222, PSend10223);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod10213, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10227 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation10226 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_10227);
    Array PArray10225 = new_Array_with(1, (Optr)PAnnotation10226);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10229 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10228 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10229, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10224 = new_NativeMethod_with(empty_Array, empty_Array, PArray10225, PThreadedCode10228, 2, PSend10229, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod10224, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray10231 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10235 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10236 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode10234 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10235, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10236, (Optr)&t_block_return);
    Block PBlock10233 = new_Block_with(empty_Array, empty_Array, PThreadedCode10234, 2, PSend10235, PSend10236);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend10237 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock10233);
    Array PThreadedCode10232 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock10233, (Optr)&t_send1, (Optr)PSend10237, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10230 = new_Method_with(PArray10231, empty_Array, empty_Array, PThreadedCode10232, 2, PSend10237, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod10230, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray10239 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10241 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode10240 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend10241, (Optr)&t_method_return);
    Method PMethod10238 = new_Method_with(PArray10239, empty_Array, empty_Array, PThreadedCode10240, 1, PSend10241);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod10238, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray10243 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10246 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation10245 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_10246);
    Array PArray10244 = new_Array_with(1, (Optr)PAnnotation10245);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10248 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10247 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10248, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10242 = new_NativeMethod_with(PArray10243, empty_Array, PArray10244, PThreadedCode10247, 2, PSend10248, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod10242, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray10250 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10252 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode10251 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend10252, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10249 = new_Method_with(PArray10250, empty_Array, empty_Array, PThreadedCode10251, 2, PSend10252, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod10249, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10256 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation10255 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_10256);
    Array PArray10254 = new_Array_with(1, (Optr)PAnnotation10255);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10258 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10257 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10258, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10253 = new_NativeMethod_with(empty_Array, empty_Array, PArray10254, PThreadedCode10257, 2, PSend10258, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod10253, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10262 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation10261 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_10262);
    Array PArray10260 = new_Array_with(1, (Optr)PAnnotation10261);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10264 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10263 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10264, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10259 = new_NativeMethod_with(empty_Array, empty_Array, PArray10260, PThreadedCode10263, 2, PSend10264, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod10259, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend10267 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode10266 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10267, (Optr)&t_method_return);
    Method PMethod10265 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10266, 1, PSend10267);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod10265, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10269 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10270 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10273 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10272 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10273);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10274 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10277 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10276 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10277, (Optr)&t_block_return);
    Block PBlock10275 = new_Block_with(empty_Array, empty_Array, PThreadedCode10276, 1, PSend10277);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10279 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10282 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10281 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10282);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray10284 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10286 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10287 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10286);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10288 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10289 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10288);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10291 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10290 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10291);
    // on:. 
    Send PSend10293 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10292 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10293);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray10295 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10297 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10298 = new_Send((Optr)PSend10297, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend10301 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend10302 = new_Send((Optr)PSend10301, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode10300 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10301, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend10302, (Optr)&t_block_return);
    Block PBlock10299 = new_Block_with(empty_Array, empty_Array, PThreadedCode10300, 1, PSend10302);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10303 = new_Send((Optr)PSend10298, SMB_and_, 1, (Optr)PBlock10299);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend10307 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode10306 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10307, (Optr)&t_block_return);
    Block PBlock10305 = new_Block_with(empty_Array, empty_Array, PThreadedCode10306, 1, PSend10307);
    String string_10310 = new_String(L"Received ");
    Constant string_10310_Const = new_Constant((Optr)string_10310);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10311 = new_Send((Optr)string_10310_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_10312 = new_String(L", handle=");
    Constant string_10312_Const = new_Constant((Optr)string_10312);
    // ,. 
    Send PSend10313 = new_Send((Optr)PSend10311, SMB__append_, 1, (Optr)string_10312_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10314 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10315 = new_Send((Optr)PSend10313, SMB__append_, 1, (Optr)PSend10314);
    // warn:. 
    Send PSend10316 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10315);
    String string_10317 = new_String(L"Received ");
    // size. 
    Send PSend10318 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10317_Const = new_Constant((Optr)string_10317);
    // ,. 
    Send PSend10319 = new_Send((Optr)string_10317_Const, SMB__append_, 1, (Optr)PSend10318);
    String string_10320 = new_String(L" bytes");
    Constant string_10320_Const = new_Constant((Optr)string_10320);
    // ,. 
    Send PSend10321 = new_Send((Optr)PSend10319, SMB__append_, 1, (Optr)string_10320_Const);
    String string_10322 = new_String(L", handle=");
    Constant string_10322_Const = new_Constant((Optr)string_10322);
    // ,. 
    Send PSend10323 = new_Send((Optr)PSend10321, SMB__append_, 1, (Optr)string_10322_Const);
    // hash. 
    Send PSend10324 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10325 = new_Send((Optr)PSend10323, SMB__append_, 1, (Optr)PSend10324);
    // warn:. 
    Send PSend10326 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10325);
    String string_10327 = new_String(L"Received ");
    // size. 
    Send PSend10328 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10327_Const = new_Constant((Optr)string_10327);
    // ,. 
    Send PSend10329 = new_Send((Optr)string_10327_Const, SMB__append_, 1, (Optr)PSend10328);
    String string_10330 = new_String(L" bytes");
    Constant string_10330_Const = new_Constant((Optr)string_10330);
    // ,. 
    Send PSend10331 = new_Send((Optr)PSend10329, SMB__append_, 1, (Optr)string_10330_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10332 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10331);
    Array PThreadedCode10309 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10310, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend10311, (Optr)&t_push1, (Optr)string_10312, (Optr)&t_send1, (Optr)PSend10313, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10314, (Optr)&t_send1, (Optr)PSend10315, (Optr)&t_send1, (Optr)PSend10316, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10317, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10318, (Optr)&t_send1, (Optr)PSend10319, (Optr)&t_push1, (Optr)string_10320, (Optr)&t_send1, (Optr)PSend10321, (Optr)&t_push1, (Optr)string_10322, (Optr)&t_send1, (Optr)PSend10323, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10324, (Optr)&t_send1, (Optr)PSend10325, (Optr)&t_send1, (Optr)PSend10326, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10327, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10328, (Optr)&t_send1, (Optr)PSend10329, (Optr)&t_push1, (Optr)string_10330, (Optr)&t_send1, (Optr)PSend10331, (Optr)&t_send1, (Optr)PSend10332, (Optr)&t_block_return);
    Block PBlock10308 = new_Block_with(empty_Array, empty_Array, PThreadedCode10309, 3, PSend10316, PSend10326, PSend10332);
    // ifTrue:ifFalse:. 
    Send PSend10304 = new_Send((Optr)PSend10303, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10305, (Optr)PBlock10308);
    Array PThreadedCode10296 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10297, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10298, (Optr)&t_push_closure, (Optr)PBlock10299, (Optr)&t_send1, (Optr)PSend10303, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10304, (Optr)PBlock10305, (Optr)PBlock10308, (Optr)&t_method_return);
    Block PBlock10294 = new_Block_with(PArray10295, empty_Array, PThreadedCode10296, 1, PSend10304);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10333 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock10294);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10335 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10337 = new_String(L"Error: Network Connection closed");
    Constant string_10337_Const = new_Constant((Optr)string_10337);
    // warn:. 
    Send PSend10338 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10337_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10339 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10340 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10341 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10340_Const = new_Constant((Optr)string_10340);
    // ,. 
    Send PSend10342 = new_Send((Optr)string_10340_Const, SMB__append_, 1, (Optr)PSend10341);
    // warn:. 
    Send PSend10343 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10342);
    Array PThreadedCode10336 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10337, (Optr)&t_send1, (Optr)PSend10338, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10339, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10340, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10341, (Optr)&t_send1, (Optr)PSend10342, (Optr)&t_send1, (Optr)PSend10343, (Optr)&t_method_return);
    Block PBlock10334 = new_Block_with(PArray10335, empty_Array, PThreadedCode10336, 3, PSend10338, PSend10339, PSend10343);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10344 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10334);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10346 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10348 = new_String(L"Will now try to close connection");
    Constant string_10348_Const = new_Constant((Optr)string_10348);
    // warn:. 
    Send PSend10349 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10348_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10350 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10351 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10352 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10351_Const = new_Constant((Optr)string_10351);
    // ,. 
    Send PSend10353 = new_Send((Optr)string_10351_Const, SMB__append_, 1, (Optr)PSend10352);
    // warn:. 
    Send PSend10354 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10353);
    Array PThreadedCode10347 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10348, (Optr)&t_send1, (Optr)PSend10349, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10350, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10351, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10352, (Optr)&t_send1, (Optr)PSend10353, (Optr)&t_send1, (Optr)PSend10354, (Optr)&t_method_return);
    Block PBlock10345 = new_Block_with(PArray10346, empty_Array, PThreadedCode10347, 3, PSend10349, PSend10350, PSend10354);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10355 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10345);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10356 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode10285 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10286, (Optr)&t_send1, (Optr)PSend10287, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10288, (Optr)&t_send1, (Optr)PSend10289, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10290, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10292, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10293, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10294, (Optr)&t_send1, (Optr)PSend10333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10334, (Optr)&t_send1, (Optr)PSend10344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10345, (Optr)&t_send1, (Optr)PSend10355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10356, (Optr)&t_method_return);
    Block PBlock10283 = new_Block_with(empty_Array, PArray10284, PThreadedCode10285, 8, PSend10287, PSend10289, PAssign10290, PAssign10292, PSend10333, PSend10344, PSend10355, PSend10356);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10357 = new_Send((Optr)PBlock10283, SMB_fork, 0);
    Array PThreadedCode10280 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10281, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10282, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10283, (Optr)&t_send0, (Optr)PSend10357, (Optr)&t_method_return);
    Block PBlock10278 = new_Block_with(empty_Array, PArray10279, PThreadedCode10280, 2, PAssign10281, PSend10357);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10358 = new_Send((Optr)PBlock10275, SMB_whileTrue_, 1, (Optr)PBlock10278);
    Array PThreadedCode10271 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10272, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10273, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10274, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10275, (Optr)&t_push_closure, (Optr)PBlock10278, (Optr)&t_send1, (Optr)PSend10358, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10268 = new_Method_with(PArray10269, PArray10270, empty_Array, PThreadedCode10271, 4, PAssign10272, PSend10274, PSend10358, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod10268, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10360 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10361 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10364 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10363 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10364);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10365 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10367 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10366 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10367);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10369 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10368 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10369);
    String string_10370 = new_String(L"* read from ");
    Constant string_10370_Const = new_Constant((Optr)string_10370);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10371 = new_Send((Optr)string_10370_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10372 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10371);
    String string_10373 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10374 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10373_Const = new_Constant((Optr)string_10373);
    // ,. 
    Send PSend10375 = new_Send((Optr)string_10373_Const, SMB__append_, 1, (Optr)PSend10374);
    String string_10376 = new_String(L" bytes");
    Constant string_10376_Const = new_Constant((Optr)string_10376);
    // ,. 
    Send PSend10377 = new_Send((Optr)PSend10375, SMB__append_, 1, (Optr)string_10376_Const);
    // warn:. 
    Send PSend10378 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10377);
    String string_10379 = new_String(L"Received ");
    // size. 
    Send PSend10380 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10379_Const = new_Constant((Optr)string_10379);
    // ,. 
    Send PSend10381 = new_Send((Optr)string_10379_Const, SMB__append_, 1, (Optr)PSend10380);
    String string_10382 = new_String(L" bytes");
    Constant string_10382_Const = new_Constant((Optr)string_10382);
    // ,. 
    Send PSend10383 = new_Send((Optr)PSend10381, SMB__append_, 1, (Optr)string_10382_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10384 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10383);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10385 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10386 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10362 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10363, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10365, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10366, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10367, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10368, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10370, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10371, (Optr)&t_send1, (Optr)PSend10372, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10373, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10374, (Optr)&t_send1, (Optr)PSend10375, (Optr)&t_push1, (Optr)string_10376, (Optr)&t_send1, (Optr)PSend10377, (Optr)&t_send1, (Optr)PSend10378, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10379, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10380, (Optr)&t_send1, (Optr)PSend10381, (Optr)&t_push1, (Optr)string_10382, (Optr)&t_send1, (Optr)PSend10383, (Optr)&t_send1, (Optr)PSend10384, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10386, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10359 = new_Method_with(PArray10360, PArray10361, empty_Array, PThreadedCode10362, 10, PAssign10363, PSend10365, PAssign10366, PAssign10368, PSend10372, PSend10378, PSend10384, PSend10385, PSend10386, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10359, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10389 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10388 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10389, (Optr)&t_method_return);
    Method PMethod10387 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10388, 1, PSend10389);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10387, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10391 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10390 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10391, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10390, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10394 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10394_Const = new_Constant((Optr)string_10394);
    // require:at:. 
    Send PSend10395 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10394_Const);
    Array PThreadedCode10393 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10394, (Optr)&t_send2, (Optr)PSend10395, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10392 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10393, 2, PSend10395, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10392, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10397 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10398 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10401 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10400 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10401);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10402 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10405 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10404 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10405, (Optr)&t_block_return);
    Block PBlock10403 = new_Block_with(empty_Array, empty_Array, PThreadedCode10404, 1, PSend10405);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10407 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10410 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10409 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10410);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10414 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10413 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10414);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10417 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10418 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10418_Const = new_Constant((Optr)char_10418);
    // =. 
    Send PSend10419 = new_Send((Optr)PSend10417, SMB__equals_, 1, (Optr)char_10418_Const);
    Array PThreadedCode10416 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10417, (Optr)&t_push1, (Optr)char_10418, (Optr)&t_send1, (Optr)PSend10419, (Optr)&t_block_return);
    Block PBlock10415 = new_Block_with(empty_Array, empty_Array, PThreadedCode10416, 1, PSend10419);
    String string_10422 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10423 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10422_Const = new_Constant((Optr)string_10422);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10424 = new_Send((Optr)string_10422_Const, SMB__append_, 1, (Optr)PSend10423);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10425 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10424);
    String string_10426 = new_String(L"Received ");
    Constant string_10426_Const = new_Constant((Optr)string_10426);
    // ,. 
    Send PSend10427 = new_Send((Optr)string_10426_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10428 = new_String(L", handle=");
    Constant string_10428_Const = new_Constant((Optr)string_10428);
    // ,. 
    Send PSend10429 = new_Send((Optr)PSend10427, SMB__append_, 1, (Optr)string_10428_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10430 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10431 = new_Send((Optr)PSend10429, SMB__append_, 1, (Optr)PSend10430);
    // warn:. 
    Send PSend10432 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10431);
    String string_10433 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10434 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10433_Const = new_Constant((Optr)string_10433);
    // ,. 
    Send PSend10435 = new_Send((Optr)string_10433_Const, SMB__append_, 1, (Optr)PSend10434);
    String string_10436 = new_String(L" bytes");
    Constant string_10436_Const = new_Constant((Optr)string_10436);
    // ,. 
    Send PSend10437 = new_Send((Optr)PSend10435, SMB__append_, 1, (Optr)string_10436_Const);
    String string_10438 = new_String(L", handle=");
    Constant string_10438_Const = new_Constant((Optr)string_10438);
    // ,. 
    Send PSend10439 = new_Send((Optr)PSend10437, SMB__append_, 1, (Optr)string_10438_Const);
    // hash. 
    Send PSend10440 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10441 = new_Send((Optr)PSend10439, SMB__append_, 1, (Optr)PSend10440);
    // warn:. 
    Send PSend10442 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10441);
    String string_10443 = new_String(L"Received ");
    // size. 
    Send PSend10444 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10443_Const = new_Constant((Optr)string_10443);
    // ,. 
    Send PSend10445 = new_Send((Optr)string_10443_Const, SMB__append_, 1, (Optr)PSend10444);
    String string_10446 = new_String(L" bytes");
    Constant string_10446_Const = new_Constant((Optr)string_10446);
    // ,. 
    Send PSend10447 = new_Send((Optr)PSend10445, SMB__append_, 1, (Optr)string_10446_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10448 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10447);
    // receive. 
    Send PSend10450 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10449 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10450);
    Array PThreadedCode10421 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10422, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10423, (Optr)&t_send1, (Optr)PSend10424, (Optr)&t_send1, (Optr)PSend10425, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10426, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10427, (Optr)&t_push1, (Optr)string_10428, (Optr)&t_send1, (Optr)PSend10429, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10430, (Optr)&t_send1, (Optr)PSend10431, (Optr)&t_send1, (Optr)PSend10432, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10433, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10434, (Optr)&t_send1, (Optr)PSend10435, (Optr)&t_push1, (Optr)string_10436, (Optr)&t_send1, (Optr)PSend10437, (Optr)&t_push1, (Optr)string_10438, (Optr)&t_send1, (Optr)PSend10439, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10440, (Optr)&t_send1, (Optr)PSend10441, (Optr)&t_send1, (Optr)PSend10442, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10443, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10444, (Optr)&t_send1, (Optr)PSend10445, (Optr)&t_push1, (Optr)string_10446, (Optr)&t_send1, (Optr)PSend10447, (Optr)&t_send1, (Optr)PSend10448, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10449, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10450, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10420 = new_Block_with(empty_Array, empty_Array, PThreadedCode10421, 5, PSend10425, PSend10432, PSend10442, PSend10448, PAssign10449);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10451 = new_Send((Optr)PBlock10415, SMB_whileFalse_, 1, (Optr)PBlock10420);
    String string_10452 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10453 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10452_Const = new_Constant((Optr)string_10452);
    // ,. 
    Send PSend10454 = new_Send((Optr)string_10452_Const, SMB__append_, 1, (Optr)PSend10453);
    // warn:. 
    Send PSend10455 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10454);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10456 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10457 = new_String(L"Status ");
    // isConnected. 
    Send PSend10458 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10457_Const = new_Constant((Optr)string_10457);
    // ,. 
    Send PSend10459 = new_Send((Optr)string_10457_Const, SMB__append_, 1, (Optr)PSend10458);
    // warn:. 
    Send PSend10460 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10459);
    Array PThreadedCode10412 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10413, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10414, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10415, (Optr)&t_push_closure, (Optr)PBlock10420, (Optr)&t_send1, (Optr)PSend10451, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10452, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10453, (Optr)&t_send1, (Optr)PSend10454, (Optr)&t_send1, (Optr)PSend10455, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10456, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10457, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10458, (Optr)&t_send1, (Optr)PSend10459, (Optr)&t_send1, (Optr)PSend10460, (Optr)&t_block_return);
    Block PBlock10411 = new_Block_with(empty_Array, empty_Array, PThreadedCode10412, 5, PAssign10413, PSend10451, PSend10455, PSend10456, PSend10460);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10461 = new_Send((Optr)PBlock10411, SMB_fork, 0);
    Array PThreadedCode10408 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10409, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10410, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10411, (Optr)&t_send0, (Optr)PSend10461, (Optr)&t_method_return);
    Block PBlock10406 = new_Block_with(empty_Array, PArray10407, PThreadedCode10408, 2, PAssign10409, PSend10461);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10462 = new_Send((Optr)PBlock10403, SMB_whileTrue_, 1, (Optr)PBlock10406);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10463 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10399 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10400, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10401, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10402, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10403, (Optr)&t_push_closure, (Optr)PBlock10406, (Optr)&t_send1, (Optr)PSend10462, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10463, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10396 = new_Method_with(PArray10397, PArray10398, empty_Array, PThreadedCode10399, 5, PAssign10400, PSend10402, PSend10462, PSend10463, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10396, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10465 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10466 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10469 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10468 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10469);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10470 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10473 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10472 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10473, (Optr)&t_block_return);
    Block PBlock10471 = new_Block_with(empty_Array, empty_Array, PThreadedCode10472, 1, PSend10473);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10475 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10478 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10477 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10478);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10481 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10480 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10481, (Optr)&t_block_return);
    Block PBlock10479 = new_Block_with(empty_Array, empty_Array, PThreadedCode10480, 1, PSend10481);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10482 = new_Send((Optr)PBlock10479, SMB_fork, 0);
    Array PThreadedCode10476 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10477, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10478, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10479, (Optr)&t_send0, (Optr)PSend10482, (Optr)&t_method_return);
    Block PBlock10474 = new_Block_with(empty_Array, PArray10475, PThreadedCode10476, 2, PAssign10477, PSend10482);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10483 = new_Send((Optr)PBlock10471, SMB_whileTrue_, 1, (Optr)PBlock10474);
    Array PThreadedCode10467 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10468, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10469, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10470, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10471, (Optr)&t_push_closure, (Optr)PBlock10474, (Optr)&t_send1, (Optr)PSend10483, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10464 = new_Method_with(PArray10465, PArray10466, empty_Array, PThreadedCode10467, 4, PAssign10468, PSend10470, PSend10483, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10464, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10485 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10486 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10488 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10489 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10488);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10490 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10491 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10490);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10493 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10492 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10493);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10496 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10498 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10497 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10498);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10501 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10502 = new_Send((Optr)PSend10501, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10505 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10418 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10418_Const = new_Constant((Optr)char_10418);
    // =. 
    Send PSend10506 = new_Send((Optr)PSend10505, SMB__equals_, 1, (Optr)char_10418_Const);
    Array PThreadedCode10504 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10505, (Optr)&t_push1, (Optr)char_10418, (Optr)&t_send1, (Optr)PSend10506, (Optr)&t_block_return);
    Block PBlock10503 = new_Block_with(empty_Array, empty_Array, PThreadedCode10504, 1, PSend10506);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10507 = new_Send((Optr)PSend10502, SMB_and_, 1, (Optr)PBlock10503);
    Array PThreadedCode10500 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10501, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10502, (Optr)&t_push_closure, (Optr)PBlock10503, (Optr)&t_send1, (Optr)PSend10507, (Optr)&t_block_return);
    Block PBlock10499 = new_Block_with(empty_Array, empty_Array, PThreadedCode10500, 1, PSend10507);
    String string_10510 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10511 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10510_Const = new_Constant((Optr)string_10510);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10512 = new_Send((Optr)string_10510_Const, SMB__append_, 1, (Optr)PSend10511);
    // warn:. 
    Send PSend10513 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10512);
    String string_10514 = new_String(L"Received ");
    Constant string_10514_Const = new_Constant((Optr)string_10514);
    // ,. 
    Send PSend10515 = new_Send((Optr)string_10514_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10516 = new_String(L", handle=");
    Constant string_10516_Const = new_Constant((Optr)string_10516);
    // ,. 
    Send PSend10517 = new_Send((Optr)PSend10515, SMB__append_, 1, (Optr)string_10516_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10518 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10519 = new_Send((Optr)PSend10517, SMB__append_, 1, (Optr)PSend10518);
    // warn:. 
    Send PSend10520 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10519);
    String string_10521 = new_String(L"Received ");
    // size. 
    Send PSend10522 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10521_Const = new_Constant((Optr)string_10521);
    // ,. 
    Send PSend10523 = new_Send((Optr)string_10521_Const, SMB__append_, 1, (Optr)PSend10522);
    String string_10524 = new_String(L" bytes");
    Constant string_10524_Const = new_Constant((Optr)string_10524);
    // ,. 
    Send PSend10525 = new_Send((Optr)PSend10523, SMB__append_, 1, (Optr)string_10524_Const);
    String string_10526 = new_String(L", handle=");
    Constant string_10526_Const = new_Constant((Optr)string_10526);
    // ,. 
    Send PSend10527 = new_Send((Optr)PSend10525, SMB__append_, 1, (Optr)string_10526_Const);
    // hash. 
    Send PSend10528 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10529 = new_Send((Optr)PSend10527, SMB__append_, 1, (Optr)PSend10528);
    // warn:. 
    Send PSend10530 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10529);
    String string_10531 = new_String(L"Received ");
    // size. 
    Send PSend10532 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10531_Const = new_Constant((Optr)string_10531);
    // ,. 
    Send PSend10533 = new_Send((Optr)string_10531_Const, SMB__append_, 1, (Optr)PSend10532);
    String string_10534 = new_String(L" bytes");
    Constant string_10534_Const = new_Constant((Optr)string_10534);
    // ,. 
    Send PSend10535 = new_Send((Optr)PSend10533, SMB__append_, 1, (Optr)string_10534_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10536 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10535);
    // receiveDataIfAvailable. 
    Send PSend10537 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10539 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10538 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10539);
    Array PThreadedCode10509 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10510, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10511, (Optr)&t_send1, (Optr)PSend10512, (Optr)&t_send1, (Optr)PSend10513, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10514, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10515, (Optr)&t_push1, (Optr)string_10516, (Optr)&t_send1, (Optr)PSend10517, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10518, (Optr)&t_send1, (Optr)PSend10519, (Optr)&t_send1, (Optr)PSend10520, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10521, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10522, (Optr)&t_send1, (Optr)PSend10523, (Optr)&t_push1, (Optr)string_10524, (Optr)&t_send1, (Optr)PSend10525, (Optr)&t_push1, (Optr)string_10526, (Optr)&t_send1, (Optr)PSend10527, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10528, (Optr)&t_send1, (Optr)PSend10529, (Optr)&t_send1, (Optr)PSend10530, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10531, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10532, (Optr)&t_send1, (Optr)PSend10533, (Optr)&t_push1, (Optr)string_10534, (Optr)&t_send1, (Optr)PSend10535, (Optr)&t_send1, (Optr)PSend10536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10537, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10538, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10539, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10508 = new_Block_with(empty_Array, empty_Array, PThreadedCode10509, 6, PSend10513, PSend10520, PSend10530, PSend10536, PSend10537, PAssign10538);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10540 = new_Send((Optr)PBlock10499, SMB_whileFalse_, 1, (Optr)PBlock10508);
    Array PThreadedCode10495 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10496, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10497, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10498, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10499, (Optr)&t_push_closure, (Optr)PBlock10508, (Optr)&t_send1, (Optr)PSend10540, (Optr)&t_block_return);
    Block PBlock10494 = new_Block_with(empty_Array, empty_Array, PThreadedCode10495, 3, PSend10496, PAssign10497, PSend10540);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10542 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10544 = new_String(L"Error: Network Connection closed");
    Constant string_10544_Const = new_Constant((Optr)string_10544);
    // warn:. 
    Send PSend10545 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10544_Const);
    String string_10546 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10547 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10546_Const = new_Constant((Optr)string_10546);
    // ,. 
    Send PSend10548 = new_Send((Optr)string_10546_Const, SMB__append_, 1, (Optr)PSend10547);
    // warn:. 
    Send PSend10549 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10548);
    Array PThreadedCode10543 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10544, (Optr)&t_send1, (Optr)PSend10545, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10546, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10547, (Optr)&t_send1, (Optr)PSend10548, (Optr)&t_send1, (Optr)PSend10549, (Optr)&t_method_return);
    Block PBlock10541 = new_Block_with(PArray10542, empty_Array, PThreadedCode10543, 2, PSend10545, PSend10549);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10550 = new_Send((Optr)PBlock10494, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10541);
    String string_10551 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10552 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10551_Const = new_Constant((Optr)string_10551);
    // ,. 
    Send PSend10553 = new_Send((Optr)string_10551_Const, SMB__append_, 1, (Optr)PSend10552);
    // warn:. 
    Send PSend10554 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10553);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10555 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10556 = new_String(L"Status ");
    // isConnected. 
    Send PSend10557 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10556_Const = new_Constant((Optr)string_10556);
    // ,. 
    Send PSend10558 = new_Send((Optr)string_10556_Const, SMB__append_, 1, (Optr)PSend10557);
    // warn:. 
    Send PSend10559 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10558);
    Array PThreadedCode10487 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10488, (Optr)&t_send1, (Optr)PSend10489, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10490, (Optr)&t_send1, (Optr)PSend10491, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10492, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10494, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10541, (Optr)&t_send2, (Optr)PSend10550, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10551, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10552, (Optr)&t_send1, (Optr)PSend10553, (Optr)&t_send1, (Optr)PSend10554, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10555, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10556, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10557, (Optr)&t_send1, (Optr)PSend10558, (Optr)&t_send1, (Optr)PSend10559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10484 = new_Method_with(PArray10485, PArray10486, empty_Array, PThreadedCode10487, 8, PSend10489, PSend10491, PAssign10492, PSend10550, PSend10554, PSend10555, PSend10559, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10484, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10561 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10561, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10560, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10563 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10564 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10567 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10566 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10567);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10568 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10571 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10570 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10571, (Optr)&t_block_return);
    Block PBlock10569 = new_Block_with(empty_Array, empty_Array, PThreadedCode10570, 1, PSend10571);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10573 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10576 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10575 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10576);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray10578 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10580 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10581 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10580);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10582 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10583 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10582);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10585 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10584 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10585);
    // on:. 
    Send PSend10587 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10586 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10587);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend10591 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10590 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10591);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10594 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10595 = new_Send((Optr)PSend10594, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10598 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_10418 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10418_Const = new_Constant((Optr)char_10418);
    // =. 
    Send PSend10599 = new_Send((Optr)PSend10598, SMB__equals_, 1, (Optr)char_10418_Const);
    Array PThreadedCode10597 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10598, (Optr)&t_push1, (Optr)char_10418, (Optr)&t_send1, (Optr)PSend10599, (Optr)&t_block_return);
    Block PBlock10596 = new_Block_with(empty_Array, empty_Array, PThreadedCode10597, 1, PSend10599);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10600 = new_Send((Optr)PSend10595, SMB_and_, 1, (Optr)PBlock10596);
    Array PThreadedCode10593 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10594, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10595, (Optr)&t_push_closure, (Optr)PBlock10596, (Optr)&t_send1, (Optr)PSend10600, (Optr)&t_block_return);
    Block PBlock10592 = new_Block_with(empty_Array, empty_Array, PThreadedCode10593, 1, PSend10600);
    String string_10603 = new_String(L"Received ");
    Constant string_10603_Const = new_Constant((Optr)string_10603);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10604 = new_Send((Optr)string_10603_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_10605 = new_String(L", handle=");
    Constant string_10605_Const = new_Constant((Optr)string_10605);
    // ,. 
    Send PSend10606 = new_Send((Optr)PSend10604, SMB__append_, 1, (Optr)string_10605_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10607 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10608 = new_Send((Optr)PSend10606, SMB__append_, 1, (Optr)PSend10607);
    // warn:. 
    Send PSend10609 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10608);
    String string_10610 = new_String(L"Received ");
    // size. 
    Send PSend10611 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10610_Const = new_Constant((Optr)string_10610);
    // ,. 
    Send PSend10612 = new_Send((Optr)string_10610_Const, SMB__append_, 1, (Optr)PSend10611);
    String string_10613 = new_String(L" bytes");
    Constant string_10613_Const = new_Constant((Optr)string_10613);
    // ,. 
    Send PSend10614 = new_Send((Optr)PSend10612, SMB__append_, 1, (Optr)string_10613_Const);
    String string_10615 = new_String(L", handle=");
    Constant string_10615_Const = new_Constant((Optr)string_10615);
    // ,. 
    Send PSend10616 = new_Send((Optr)PSend10614, SMB__append_, 1, (Optr)string_10615_Const);
    // hash. 
    Send PSend10617 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10618 = new_Send((Optr)PSend10616, SMB__append_, 1, (Optr)PSend10617);
    // warn:. 
    Send PSend10619 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10618);
    String string_10620 = new_String(L"Received ");
    // size. 
    Send PSend10621 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10620_Const = new_Constant((Optr)string_10620);
    // ,. 
    Send PSend10622 = new_Send((Optr)string_10620_Const, SMB__append_, 1, (Optr)PSend10621);
    String string_10623 = new_String(L" bytes");
    Constant string_10623_Const = new_Constant((Optr)string_10623);
    // ,. 
    Send PSend10624 = new_Send((Optr)PSend10622, SMB__append_, 1, (Optr)string_10623_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10625 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10624);
    // readMessage. 
    Send PSend10627 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10626 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10627);
    Array PThreadedCode10602 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10603, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend10604, (Optr)&t_push1, (Optr)string_10605, (Optr)&t_send1, (Optr)PSend10606, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10607, (Optr)&t_send1, (Optr)PSend10608, (Optr)&t_send1, (Optr)PSend10609, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10610, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10611, (Optr)&t_send1, (Optr)PSend10612, (Optr)&t_push1, (Optr)string_10613, (Optr)&t_send1, (Optr)PSend10614, (Optr)&t_push1, (Optr)string_10615, (Optr)&t_send1, (Optr)PSend10616, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10617, (Optr)&t_send1, (Optr)PSend10618, (Optr)&t_send1, (Optr)PSend10619, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10620, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10621, (Optr)&t_send1, (Optr)PSend10622, (Optr)&t_push1, (Optr)string_10623, (Optr)&t_send1, (Optr)PSend10624, (Optr)&t_send1, (Optr)PSend10625, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10626, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10627, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10601 = new_Block_with(empty_Array, empty_Array, PThreadedCode10602, 4, PSend10609, PSend10619, PSend10625, PAssign10626);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10628 = new_Send((Optr)PBlock10592, SMB_whileFalse_, 1, (Optr)PBlock10601);
    Array PThreadedCode10589 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10590, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10591, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10592, (Optr)&t_push_closure, (Optr)PBlock10601, (Optr)&t_send1, (Optr)PSend10628, (Optr)&t_block_return);
    Block PBlock10588 = new_Block_with(empty_Array, empty_Array, PThreadedCode10589, 2, PAssign10590, PSend10628);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10630 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10632 = new_String(L"Error: Network Connection closed");
    Constant string_10632_Const = new_Constant((Optr)string_10632);
    // warn:. 
    Send PSend10633 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10632_Const);
    String string_10634 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10635 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10634_Const = new_Constant((Optr)string_10634);
    // ,. 
    Send PSend10636 = new_Send((Optr)string_10634_Const, SMB__append_, 1, (Optr)PSend10635);
    // warn:. 
    Send PSend10637 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10636);
    Array PThreadedCode10631 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10632, (Optr)&t_send1, (Optr)PSend10633, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10634, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10635, (Optr)&t_send1, (Optr)PSend10636, (Optr)&t_send1, (Optr)PSend10637, (Optr)&t_method_return);
    Block PBlock10629 = new_Block_with(PArray10630, empty_Array, PThreadedCode10631, 2, PSend10633, PSend10637);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10638 = new_Send((Optr)PBlock10588, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10629);
    String string_10639 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10640 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10639_Const = new_Constant((Optr)string_10639);
    // ,. 
    Send PSend10641 = new_Send((Optr)string_10639_Const, SMB__append_, 1, (Optr)PSend10640);
    // warn:. 
    Send PSend10642 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10641);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10643 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10644 = new_String(L"Status ");
    // isConnected. 
    Send PSend10645 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10644_Const = new_Constant((Optr)string_10644);
    // ,. 
    Send PSend10646 = new_Send((Optr)string_10644_Const, SMB__append_, 1, (Optr)PSend10645);
    // warn:. 
    Send PSend10647 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10646);
    Array PThreadedCode10579 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10580, (Optr)&t_send1, (Optr)PSend10581, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10582, (Optr)&t_send1, (Optr)PSend10583, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10584, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10585, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10586, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10587, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10588, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10629, (Optr)&t_send2, (Optr)PSend10638, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10639, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10640, (Optr)&t_send1, (Optr)PSend10641, (Optr)&t_send1, (Optr)PSend10642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10643, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10644, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10645, (Optr)&t_send1, (Optr)PSend10646, (Optr)&t_send1, (Optr)PSend10647, (Optr)&t_method_return);
    Block PBlock10577 = new_Block_with(empty_Array, PArray10578, PThreadedCode10579, 8, PSend10581, PSend10583, PAssign10584, PAssign10586, PSend10638, PSend10642, PSend10643, PSend10647);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10648 = new_Send((Optr)PBlock10577, SMB_fork, 0);
    Array PThreadedCode10574 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10575, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10576, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10577, (Optr)&t_send0, (Optr)PSend10648, (Optr)&t_method_return);
    Block PBlock10572 = new_Block_with(empty_Array, PArray10573, PThreadedCode10574, 2, PAssign10575, PSend10648);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10649 = new_Send((Optr)PBlock10569, SMB_whileTrue_, 1, (Optr)PBlock10572);
    Array PThreadedCode10565 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10566, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10567, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10568, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10569, (Optr)&t_push_closure, (Optr)PBlock10572, (Optr)&t_send1, (Optr)PSend10649, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10562 = new_Method_with(PArray10563, PArray10564, empty_Array, PThreadedCode10565, 4, PAssign10566, PSend10568, PSend10649, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod10562, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket_, MC_SMB_testWebSocket_);
}

void init_IO_PSocket_layout() {
    layout_IO_Socket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Socket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Socket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Socket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Socket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Socket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Socket = new_Symbol(L"Socket");
    slot_IO_Socket_handle = (Optr)new_Slot(0, L"handle");
    slot_IO_Socket_connected = (Optr)new_Slot(1, L"connected");
    layout_IO_Socket = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_IO_Socket)->values[0] = slot_IO_Socket_handle; // handle 
    ((Array)layout_IO_Socket)->values[1] = slot_IO_Socket_connected; // connected 
    IO_Socket_Class = (Class)new_Class(Object_Class, layout_IO_Socket_Class_class);
    IO_Socket_Class->layout = layout_IO_Socket;
    IO_Socket_Class->name = SMB_Socket;
    
}

void init_IO_PSocket_methods() {
    init_SMB_receiveDataSignallingClosedInto_startingAt_();
    init_SMB_primReadyToWrite();
    init_SMB_write_();
    init_SMB_receiveData();
    init_SMB_receiveDataTimeout_into_startingAt_();
    init_SMB_primConnectTo_port_();
    init_SMB_primAccept();
    init_SMB_receiveAvailableDataInto_startingAt_();
    init_SMB_sendData_count_();
    init_SMB_initialize();
    init_SMB_listenOn_backlogSize_interface_();
    init_SMB_primReadyToReceive();
    init_SMB_receive_();
    init_SMB_receiveInto_();
    init_SMB_receiveDataSignallingTimeout_into_startingAt_();
    init_SMB_checkConnected();
    init_SMB_primReceiveInto_();
    init_SMB_isValid();
    init_SMB_primListenOn_();
    init_SMB_dataAvailable();
    init_SMB_primSocketRemotePort();
    init_SMB_isOtherEndClosed();
    init_SMB_destroy();
    init_SMB_remotePort();
    init_SMB_statusString();
    init_SMB_isConnected();
    init_SMB_primClose();
    init_SMB_primWrite_();
    init_SMB_receiveSomeDataInto_startingAt_();
    init_SMB_accept();
    init_SMB_primInit();
    init_SMB_receive();
    init_SMB_primReadyToAccept();
    init_SMB_closeAndDestroy_();
    init_SMB_receiveDataInto_startingAt_();
    init_SMB_primReceive_();
    init_SMB_listenOn_backlogSize_();
    init_SMB_primStatus();
    init_SMB_primSocketRemoteAddress();
    init_SMB_remoteAddress();
    init_class_SMB_testWebSocket2_();
    init_class_SMB_testOn_();
    init_class_SMB_newTCP();
    init_class_SMB_standardTimeout();
    init_class_SMB_initialize();
    init_class_SMB_testServer_();
    init_class_SMB_testSocketStream_();
    init_class_SMB_value_();
    init_class_SMB_test();
    init_class_SMB_testWebSocket_();
    
}