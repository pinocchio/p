#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9914 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9916 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9915 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9916, (Optr)&t_method_return);
    Method PMethod9913 = new_Method_with(PArray9914, empty_Array, empty_Array, PThreadedCode9915, 1, PSend9916);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9913, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9920 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9919 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9920);
    Array PArray9918 = new_Array_with(1, (Optr)PAnnotation9919);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9922 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9921 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9922, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9917 = new_NativeMethod_with(empty_Array, empty_Array, PArray9918, PThreadedCode9921, 2, PSend9922, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9917, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9924 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9928 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9927 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9928, (Optr)&t_block_return);
    Block PBlock9926 = new_Block_with(empty_Array, empty_Array, PThreadedCode9927, 1, PSend9928);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9931 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9932 = new_Send((Optr)PSend9931, SMB_yield, 0);
    Array PThreadedCode9930 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9931, (Optr)&t_send0, (Optr)PSend9932, (Optr)&t_block_return);
    Block PBlock9929 = new_Block_with(empty_Array, empty_Array, PThreadedCode9930, 1, PSend9932);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9933 = new_Send((Optr)PBlock9926, SMB_whileFalse_, 1, (Optr)PBlock9929);
    String string_9934 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9934_Const = new_Constant((Optr)string_9934);
    // warn:. 
    Send PSend9935 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9934_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9936 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9925 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9926, (Optr)&t_push_closure, (Optr)PBlock9929, (Optr)&t_send1, (Optr)PSend9933, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9934, (Optr)&t_send1, (Optr)PSend9935, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9936, (Optr)&t_method_return);
    Method PMethod9923 = new_Method_with(PArray9924, empty_Array, empty_Array, PThreadedCode9925, 3, PSend9933, PSend9935, PSend9936);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9923, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9938 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9941 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9940 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9941);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9942 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9939 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9940, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9941, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9942, (Optr)&t_method_return);
    Method PMethod9937 = new_Method_with(empty_Array, PArray9938, empty_Array, PThreadedCode9939, 2, PAssign9940, PSend9942);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9937, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9944 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9946 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9945 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9946, (Optr)&t_method_return);
    Method PMethod9943 = new_Method_with(PArray9944, empty_Array, empty_Array, PThreadedCode9945, 1, PSend9946);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9943, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9948 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9951 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9950 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9951);
    Array PArray9949 = new_Array_with(1, (Optr)PAnnotation9950);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9953 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9952 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9953, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9947 = new_NativeMethod_with(PArray9948, empty_Array, PArray9949, PThreadedCode9952, 2, PSend9953, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9947, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9957 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9956 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9957);
    Array PArray9955 = new_Array_with(1, (Optr)PAnnotation9956);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9959 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9958 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9959, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9954 = new_NativeMethod_with(empty_Array, empty_Array, PArray9955, PThreadedCode9958, 2, PSend9959, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9954, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9961 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9962 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9968 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9967 = new_Send((Optr)PSend9968, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9966 = new_Send((Optr)PSend9967, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9965 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9966);
    Assign PAssign9964 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9965);
    // size. 
    Send PSend9970 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9969 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9970);
    String string_9971 = new_String(L"-Data: ");
    Constant string_9971_Const = new_Constant((Optr)string_9971);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9972 = new_Send((Optr)string_9971_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9973 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9972);
    String string_9974 = new_String(L"-Size: ");
    Constant string_9974_Const = new_Constant((Optr)string_9974);
    // ,. 
    Send PSend9975 = new_Send((Optr)string_9974_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend9976 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9975);
    String string_9977 = new_String(L"-Buffer size ");
    // size. 
    Send PSend9978 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_9977_Const = new_Constant((Optr)string_9977);
    // ,. 
    Send PSend9979 = new_Send((Optr)string_9977_Const, SMB__append_, 1, (Optr)PSend9978);
    // warn:. 
    Send PSend9980 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9979);
    String string_9981 = new_String(L"-Buffer before: ");
    Constant string_9981_Const = new_Constant((Optr)string_9981);
    // warn:. 
    Send PSend9982 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9981_Const);
    // warn:. 
    Send PSend9983 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend9984 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend9985 = new_Send((Optr)PSend9984, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend9986 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend9985, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_9987 = new_String(L"-Buffer after ");
    Constant string_9987_Const = new_Constant((Optr)string_9987);
    // warn:. 
    Send PSend9988 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9987_Const);
    // warn:. 
    Send PSend9989 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9963 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9964, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9968, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9967, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9966, (Optr)&t_send1, (Optr)PSend9965, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9969, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9970, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9971, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9972, (Optr)&t_send1, (Optr)PSend9973, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9974, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9975, (Optr)&t_send1, (Optr)PSend9976, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9977, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9978, (Optr)&t_send1, (Optr)PSend9979, (Optr)&t_send1, (Optr)PSend9980, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9981, (Optr)&t_send1, (Optr)PSend9982, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9983, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9984, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9985, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend9986, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9987, (Optr)&t_send1, (Optr)PSend9988, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9989, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9960 = new_Method_with(PArray9961, PArray9962, empty_Array, PThreadedCode9963, 11, PAssign9964, PAssign9969, PSend9973, PSend9976, PSend9980, PSend9982, PSend9983, PSend9986, PSend9988, PSend9989, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9960, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9991 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9993 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9994 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9993);
    Array PThreadedCode9992 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9993, (Optr)&t_send1, (Optr)PSend9994, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9990 = new_Method_with(PArray9991, empty_Array, empty_Array, PThreadedCode9992, 2, PSend9994, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod9990, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend9997 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign9998 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode9996 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9997, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9998, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9995 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9996, 3, PSend9997, PAssign9998, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9995, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray10000 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend10002 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode10001 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend10002, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9999 = new_Method_with(PArray10000, empty_Array, empty_Array, PThreadedCode10001, 2, PSend10002, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod9999, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10006 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation10005 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_10006);
    Array PArray10004 = new_Array_with(1, (Optr)PAnnotation10005);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10008 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10007 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10008, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10003 = new_NativeMethod_with(empty_Array, empty_Array, PArray10004, PThreadedCode10007, 2, PSend10008, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod10003, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray10010 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend10014 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode10013 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10014, (Optr)&t_block_return);
    Block PBlock10012 = new_Block_with(empty_Array, empty_Array, PThreadedCode10013, 1, PSend10014);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend10017 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10018 = new_Send((Optr)PSend10017, SMB_primYield, 0);
    Array PThreadedCode10016 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend10017, (Optr)&t_send0, (Optr)PSend10018, (Optr)&t_block_return);
    Block PBlock10015 = new_Block_with(empty_Array, empty_Array, PThreadedCode10016, 1, PSend10018);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10019 = new_Send((Optr)PBlock10012, SMB_whileFalse_, 1, (Optr)PBlock10015);
    String string_10020 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10020_Const = new_Constant((Optr)string_10020);
    // warn:. 
    Send PSend10021 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10020_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend10022 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode10011 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock10012, (Optr)&t_push_closure, (Optr)PBlock10015, (Optr)&t_send1, (Optr)PSend10019, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10020, (Optr)&t_send1, (Optr)PSend10021, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend10022, (Optr)&t_method_return);
    Method PMethod10009 = new_Method_with(PArray10010, empty_Array, empty_Array, PThreadedCode10011, 3, PSend10019, PSend10021, PSend10022);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod10009, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10024 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend10028 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode10027 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10028, (Optr)&t_block_return);
    Block PBlock10026 = new_Block_with(empty_Array, empty_Array, PThreadedCode10027, 1, PSend10028);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend10031 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10032 = new_Send((Optr)PSend10031, SMB_primYield, 0);
    Array PThreadedCode10030 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend10031, (Optr)&t_send0, (Optr)PSend10032, (Optr)&t_block_return);
    Block PBlock10029 = new_Block_with(empty_Array, empty_Array, PThreadedCode10030, 1, PSend10032);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10033 = new_Send((Optr)PBlock10026, SMB_whileFalse_, 1, (Optr)PBlock10029);
    String string_10034 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10034_Const = new_Constant((Optr)string_10034);
    // warn:. 
    Send PSend10035 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10034_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend10036 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode10025 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock10026, (Optr)&t_push_closure, (Optr)PBlock10029, (Optr)&t_send1, (Optr)PSend10033, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10034, (Optr)&t_send1, (Optr)PSend10035, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend10036, (Optr)&t_method_return);
    Method PMethod10023 = new_Method_with(PArray10024, empty_Array, empty_Array, PThreadedCode10025, 3, PSend10033, PSend10035, PSend10036);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod10023, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray10038 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10040 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode10039 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend10040, (Optr)&t_method_return);
    Method PMethod10037 = new_Method_with(PArray10038, empty_Array, empty_Array, PThreadedCode10039, 1, PSend10040);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod10037, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend10043 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign10047 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode10046 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10047, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10045 = new_Block_with(empty_Array, empty_Array, PThreadedCode10046, 1, PAssign10047);
    // ifFalse:. 
    Send PSend10044 = new_Send((Optr)PSend10043, SMB_ifFalse_, 1, (Optr)PBlock10045);
    Array PThreadedCode10042 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10043, (Optr)&t_send_ifFalse_, (Optr)PSend10044, (Optr)PBlock10045, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10042, 2, PSend10044, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod10041, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10049 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10052 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation10051 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_10052);
    Array PArray10050 = new_Array_with(1, (Optr)PAnnotation10051);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10054 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10053 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10054, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10048 = new_NativeMethod_with(PArray10049, empty_Array, PArray10050, PThreadedCode10053, 2, PSend10054, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod10048, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray10056 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10059 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10063 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10062 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10063, (Optr)&t_block_return);
    Block PBlock10061 = new_Block_with(empty_Array, empty_Array, PThreadedCode10062, 1, PSend10063);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10064 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock10061);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend10065 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend10066 = new_Send((Optr)PSend10065, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode10060 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock10061, (Optr)&t_send1, (Optr)PSend10064, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10065, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend10066, (Optr)&t_method_return);
    Block PBlock10058 = new_Block_with(PArray10059, empty_Array, PThreadedCode10060, 2, PSend10064, PSend10066);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10067 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10058);
    Array PThreadedCode10057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10058, (Optr)&t_send1, (Optr)PSend10067, (Optr)&t_method_return);
    Method PMethod10055 = new_Method_with(empty_Array, PArray10056, empty_Array, PThreadedCode10057, 1, PSend10067);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod10055, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10069 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10072 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation10071 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_10072);
    Array PArray10070 = new_Array_with(1, (Optr)PAnnotation10071);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10074 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10073 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10074, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10068 = new_NativeMethod_with(PArray10069, empty_Array, PArray10070, PThreadedCode10073, 2, PSend10074, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod10068, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend10077 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode10076 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10077, (Optr)&t_method_return);
    Method PMethod10075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10076, 1, PSend10077);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod10075, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10081 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation10080 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_10081);
    Array PArray10079 = new_Array_with(1, (Optr)PAnnotation10080);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10083 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10082 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10083, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10078 = new_NativeMethod_with(empty_Array, empty_Array, PArray10079, PThreadedCode10082, 2, PSend10083, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod10078, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend10086 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10087 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode10085 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10086, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend10087, (Optr)&t_method_return);
    Method PMethod10084 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10085, 2, PSend10086, PSend10087);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod10084, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign10090 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign10091 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode10089 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign10090, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10091, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10089, 3, PAssign10090, PAssign10091, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod10088, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend10094 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode10093 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10094, (Optr)&t_method_return);
    Method PMethod10092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10093, 1, PSend10094);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod10092, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray10096 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10099 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend10101 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10105 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_10105_Const = new_Constant((Optr)string_10105);
    // escape:. 
    Send PSend10106 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10105_Const);
    Array PThreadedCode10104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10105, (Optr)&t_send1, (Optr)PSend10106, (Optr)&t_block_return);
    Block PBlock10103 = new_Block_with(empty_Array, empty_Array, PThreadedCode10104, 1, PSend10106);
    // ifTrue:. 
    Send PSend10102 = new_Send((Optr)PSend10101, SMB_ifTrue_, 1, (Optr)PBlock10103);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend10108 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign10107 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend10108);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend10109 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_10113 = new_String(L"invalidSocketHandle");
    Constant string_10113_Const = new_Constant((Optr)string_10113);
    // escape:. 
    Send PSend10114 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10113_Const);
    Array PThreadedCode10112 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10113, (Optr)&t_send1, (Optr)PSend10114, (Optr)&t_block_return);
    Block PBlock10111 = new_Block_with(empty_Array, empty_Array, PThreadedCode10112, 1, PSend10114);
    // ifTrue:. 
    Send PSend10110 = new_Send((Optr)PSend10109, SMB_ifTrue_, 1, (Optr)PBlock10111);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10115 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_10119 = new_String(L"unconnected");
    Constant string_10119_Const = new_Constant((Optr)string_10119);
    // escape:. 
    Send PSend10120 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10119_Const);
    Array PThreadedCode10118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10119, (Optr)&t_send1, (Optr)PSend10120, (Optr)&t_block_return);
    Block PBlock10117 = new_Block_with(empty_Array, empty_Array, PThreadedCode10118, 1, PSend10120);
    // ifTrue:. 
    Send PSend10116 = new_Send((Optr)PSend10115, SMB_ifTrue_, 1, (Optr)PBlock10117);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend10121 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_10125 = new_String(L"waitingForConnection");
    Constant string_10125_Const = new_Constant((Optr)string_10125);
    // escape:. 
    Send PSend10126 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10125_Const);
    Array PThreadedCode10124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10125, (Optr)&t_send1, (Optr)PSend10126, (Optr)&t_block_return);
    Block PBlock10123 = new_Block_with(empty_Array, empty_Array, PThreadedCode10124, 1, PSend10126);
    // ifTrue:. 
    Send PSend10122 = new_Send((Optr)PSend10121, SMB_ifTrue_, 1, (Optr)PBlock10123);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend10127 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_10131 = new_String(L"connected");
    Constant string_10131_Const = new_Constant((Optr)string_10131);
    // escape:. 
    Send PSend10132 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10131_Const);
    Array PThreadedCode10130 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10131, (Optr)&t_send1, (Optr)PSend10132, (Optr)&t_block_return);
    Block PBlock10129 = new_Block_with(empty_Array, empty_Array, PThreadedCode10130, 1, PSend10132);
    // ifTrue:. 
    Send PSend10128 = new_Send((Optr)PSend10127, SMB_ifTrue_, 1, (Optr)PBlock10129);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend10133 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_10137 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_10137_Const = new_Constant((Optr)string_10137);
    // escape:. 
    Send PSend10138 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10137_Const);
    Array PThreadedCode10136 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10137, (Optr)&t_send1, (Optr)PSend10138, (Optr)&t_block_return);
    Block PBlock10135 = new_Block_with(empty_Array, empty_Array, PThreadedCode10136, 1, PSend10138);
    // ifTrue:. 
    Send PSend10134 = new_Send((Optr)PSend10133, SMB_ifTrue_, 1, (Optr)PBlock10135);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend10139 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_10143 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_10143_Const = new_Constant((Optr)string_10143);
    // escape:. 
    Send PSend10144 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10143_Const);
    Array PThreadedCode10142 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10143, (Optr)&t_send1, (Optr)PSend10144, (Optr)&t_block_return);
    Block PBlock10141 = new_Block_with(empty_Array, empty_Array, PThreadedCode10142, 1, PSend10144);
    // ifTrue:. 
    Send PSend10140 = new_Send((Optr)PSend10139, SMB_ifTrue_, 1, (Optr)PBlock10141);
    String string_10145 = new_String(L"unknown socket status");
    Array PThreadedCode10100 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10101, (Optr)&t_send_ifTrue_, (Optr)PSend10102, (Optr)PBlock10103, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10107, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend10109, (Optr)&t_send_ifTrue_, (Optr)PSend10110, (Optr)PBlock10111, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10115, (Optr)&t_send_ifTrue_, (Optr)PSend10116, (Optr)PBlock10117, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10121, (Optr)&t_send_ifTrue_, (Optr)PSend10122, (Optr)PBlock10123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10127, (Optr)&t_send_ifTrue_, (Optr)PSend10128, (Optr)PBlock10129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend10133, (Optr)&t_send_ifTrue_, (Optr)PSend10134, (Optr)PBlock10135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend10139, (Optr)&t_send_ifTrue_, (Optr)PSend10140, (Optr)PBlock10141, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_10145, (Optr)&t_method_return);
    Constant string_10145_Const = new_Constant((Optr)string_10145);
    Block PBlock10098 = new_Block_with(PArray10099, empty_Array, PThreadedCode10100, 9, PSend10102, PAssign10107, PSend10110, PSend10116, PSend10122, PSend10128, PSend10134, PSend10140, string_10145_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10146 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10098);
    Array PThreadedCode10097 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10098, (Optr)&t_send1, (Optr)PSend10146, (Optr)&t_method_return);
    Method PMethod10095 = new_Method_with(empty_Array, PArray10096, empty_Array, PThreadedCode10097, 1, PSend10146);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod10095, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend10149 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode10148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10149, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod10147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10148, 2, PSend10149, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod10147, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10153 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation10152 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_10153);
    Array PArray10151 = new_Array_with(1, (Optr)PAnnotation10152);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10155 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10154 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10155, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10150 = new_NativeMethod_with(empty_Array, empty_Array, PArray10151, PThreadedCode10154, 2, PSend10155, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod10150, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10157 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10160 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation10159 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_10160);
    Array PArray10158 = new_Array_with(1, (Optr)PAnnotation10159);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10162 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10161 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10162, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10156 = new_NativeMethod_with(PArray10157, empty_Array, PArray10158, PThreadedCode10161, 2, PSend10162, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod10156, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray10164 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10166 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode10165 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend10166, (Optr)&t_method_return);
    Method PMethod10163 = new_Method_with(PArray10164, empty_Array, empty_Array, PThreadedCode10165, 1, PSend10166);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod10163, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend10171 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode10170 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10171, (Optr)&t_block_return);
    Block PBlock10169 = new_Block_with(empty_Array, empty_Array, PThreadedCode10170, 1, PSend10171);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend10174 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10175 = new_Send((Optr)PSend10174, SMB_primYield, 0);
    Array PThreadedCode10173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend10174, (Optr)&t_send0, (Optr)PSend10175, (Optr)&t_block_return);
    Block PBlock10172 = new_Block_with(empty_Array, empty_Array, PThreadedCode10173, 1, PSend10175);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10176 = new_Send((Optr)PBlock10169, SMB_whileFalse_, 1, (Optr)PBlock10172);
    String string_10177 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10177_Const = new_Constant((Optr)string_10177);
    // warn:. 
    Send PSend10178 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10177_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend10179 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode10168 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock10169, (Optr)&t_push_closure, (Optr)PBlock10172, (Optr)&t_send1, (Optr)PSend10176, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10177, (Optr)&t_send1, (Optr)PSend10178, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10179, (Optr)&t_method_return);
    Method PMethod10167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10168, 3, PSend10176, PSend10178, PSend10179);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod10167, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10183 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation10182 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_10183);
    Array PArray10181 = new_Array_with(1, (Optr)PAnnotation10182);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10185 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10184 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10185, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10180 = new_NativeMethod_with(empty_Array, empty_Array, PArray10181, PThreadedCode10184, 2, PSend10185, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod10180, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray10187 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend10190 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign10189 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend10190);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend10192 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign10191 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend10192);
    String string_10193 = new_String(L"Size returned -> ");
    Constant string_10193_Const = new_Constant((Optr)string_10193);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10194 = new_Send((Optr)string_10193_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10195 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10194);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend10196 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode10188 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign10189, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend10190, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10191, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend10192, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10193, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend10194, (Optr)&t_send1, (Optr)PSend10195, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend10196, (Optr)&t_method_return);
    Method PMethod10186 = new_Method_with(empty_Array, PArray10187, empty_Array, PThreadedCode10188, 4, PAssign10189, PAssign10191, PSend10195, PSend10196);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod10186, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10200 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation10199 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_10200);
    Array PArray10198 = new_Array_with(1, (Optr)PAnnotation10199);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10202 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10201 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10202, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10197 = new_NativeMethod_with(empty_Array, empty_Array, PArray10198, PThreadedCode10201, 2, PSend10202, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod10197, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray10204 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10208 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10209 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode10207 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10208, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10209, (Optr)&t_block_return);
    Block PBlock10206 = new_Block_with(empty_Array, empty_Array, PThreadedCode10207, 2, PSend10208, PSend10209);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend10210 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock10206);
    Array PThreadedCode10205 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock10206, (Optr)&t_send1, (Optr)PSend10210, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10203 = new_Method_with(PArray10204, empty_Array, empty_Array, PThreadedCode10205, 2, PSend10210, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod10203, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray10212 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10214 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode10213 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend10214, (Optr)&t_method_return);
    Method PMethod10211 = new_Method_with(PArray10212, empty_Array, empty_Array, PThreadedCode10213, 1, PSend10214);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod10211, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray10216 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10219 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation10218 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_10219);
    Array PArray10217 = new_Array_with(1, (Optr)PAnnotation10218);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10221 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10220 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10221, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10215 = new_NativeMethod_with(PArray10216, empty_Array, PArray10217, PThreadedCode10220, 2, PSend10221, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod10215, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray10223 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10225 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode10224 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend10225, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10222 = new_Method_with(PArray10223, empty_Array, empty_Array, PThreadedCode10224, 2, PSend10225, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod10222, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10229 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation10228 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_10229);
    Array PArray10227 = new_Array_with(1, (Optr)PAnnotation10228);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10231 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10230 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10231, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10226 = new_NativeMethod_with(empty_Array, empty_Array, PArray10227, PThreadedCode10230, 2, PSend10231, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod10226, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10235 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation10234 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_10235);
    Array PArray10233 = new_Array_with(1, (Optr)PAnnotation10234);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10237 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10236 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10237, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10232 = new_NativeMethod_with(empty_Array, empty_Array, PArray10233, PThreadedCode10236, 2, PSend10237, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod10232, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend10240 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode10239 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10240, (Optr)&t_method_return);
    Method PMethod10238 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10239, 1, PSend10240);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod10238, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10242 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10243 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10246 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10245 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10246);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10247 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10250 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10249 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10250, (Optr)&t_block_return);
    Block PBlock10248 = new_Block_with(empty_Array, empty_Array, PThreadedCode10249, 1, PSend10250);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10252 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10255 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10254 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10255);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray10257 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10259 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10260 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10259);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10261 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10262 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10261);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10264 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10263 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10264);
    // on:. 
    Send PSend10266 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10265 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10266);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray10268 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10270 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10271 = new_Send((Optr)PSend10270, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend10274 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend10275 = new_Send((Optr)PSend10274, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode10273 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10274, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend10275, (Optr)&t_block_return);
    Block PBlock10272 = new_Block_with(empty_Array, empty_Array, PThreadedCode10273, 1, PSend10275);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10276 = new_Send((Optr)PSend10271, SMB_and_, 1, (Optr)PBlock10272);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend10280 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode10279 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10280, (Optr)&t_block_return);
    Block PBlock10278 = new_Block_with(empty_Array, empty_Array, PThreadedCode10279, 1, PSend10280);
    String string_10283 = new_String(L"Received ");
    Constant string_10283_Const = new_Constant((Optr)string_10283);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10284 = new_Send((Optr)string_10283_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_10285 = new_String(L", handle=");
    Constant string_10285_Const = new_Constant((Optr)string_10285);
    // ,. 
    Send PSend10286 = new_Send((Optr)PSend10284, SMB__append_, 1, (Optr)string_10285_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10287 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10288 = new_Send((Optr)PSend10286, SMB__append_, 1, (Optr)PSend10287);
    // warn:. 
    Send PSend10289 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10288);
    String string_10290 = new_String(L"Received ");
    // size. 
    Send PSend10291 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10290_Const = new_Constant((Optr)string_10290);
    // ,. 
    Send PSend10292 = new_Send((Optr)string_10290_Const, SMB__append_, 1, (Optr)PSend10291);
    String string_10293 = new_String(L" bytes");
    Constant string_10293_Const = new_Constant((Optr)string_10293);
    // ,. 
    Send PSend10294 = new_Send((Optr)PSend10292, SMB__append_, 1, (Optr)string_10293_Const);
    String string_10295 = new_String(L", handle=");
    Constant string_10295_Const = new_Constant((Optr)string_10295);
    // ,. 
    Send PSend10296 = new_Send((Optr)PSend10294, SMB__append_, 1, (Optr)string_10295_Const);
    // hash. 
    Send PSend10297 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10298 = new_Send((Optr)PSend10296, SMB__append_, 1, (Optr)PSend10297);
    // warn:. 
    Send PSend10299 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10298);
    String string_10300 = new_String(L"Received ");
    // size. 
    Send PSend10301 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10300_Const = new_Constant((Optr)string_10300);
    // ,. 
    Send PSend10302 = new_Send((Optr)string_10300_Const, SMB__append_, 1, (Optr)PSend10301);
    String string_10303 = new_String(L" bytes");
    Constant string_10303_Const = new_Constant((Optr)string_10303);
    // ,. 
    Send PSend10304 = new_Send((Optr)PSend10302, SMB__append_, 1, (Optr)string_10303_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10305 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10304);
    Array PThreadedCode10282 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10283, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend10284, (Optr)&t_push1, (Optr)string_10285, (Optr)&t_send1, (Optr)PSend10286, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10287, (Optr)&t_send1, (Optr)PSend10288, (Optr)&t_send1, (Optr)PSend10289, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10290, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10291, (Optr)&t_send1, (Optr)PSend10292, (Optr)&t_push1, (Optr)string_10293, (Optr)&t_send1, (Optr)PSend10294, (Optr)&t_push1, (Optr)string_10295, (Optr)&t_send1, (Optr)PSend10296, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10297, (Optr)&t_send1, (Optr)PSend10298, (Optr)&t_send1, (Optr)PSend10299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10300, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10301, (Optr)&t_send1, (Optr)PSend10302, (Optr)&t_push1, (Optr)string_10303, (Optr)&t_send1, (Optr)PSend10304, (Optr)&t_send1, (Optr)PSend10305, (Optr)&t_block_return);
    Block PBlock10281 = new_Block_with(empty_Array, empty_Array, PThreadedCode10282, 3, PSend10289, PSend10299, PSend10305);
    // ifTrue:ifFalse:. 
    Send PSend10277 = new_Send((Optr)PSend10276, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10278, (Optr)PBlock10281);
    Array PThreadedCode10269 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10270, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10271, (Optr)&t_push_closure, (Optr)PBlock10272, (Optr)&t_send1, (Optr)PSend10276, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10277, (Optr)PBlock10278, (Optr)PBlock10281, (Optr)&t_method_return);
    Block PBlock10267 = new_Block_with(PArray10268, empty_Array, PThreadedCode10269, 1, PSend10277);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10306 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock10267);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10308 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10310 = new_String(L"Error: Network Connection closed");
    Constant string_10310_Const = new_Constant((Optr)string_10310);
    // warn:. 
    Send PSend10311 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10310_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10312 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10313 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10314 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10313_Const = new_Constant((Optr)string_10313);
    // ,. 
    Send PSend10315 = new_Send((Optr)string_10313_Const, SMB__append_, 1, (Optr)PSend10314);
    // warn:. 
    Send PSend10316 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10315);
    Array PThreadedCode10309 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10310, (Optr)&t_send1, (Optr)PSend10311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10312, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10313, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10314, (Optr)&t_send1, (Optr)PSend10315, (Optr)&t_send1, (Optr)PSend10316, (Optr)&t_method_return);
    Block PBlock10307 = new_Block_with(PArray10308, empty_Array, PThreadedCode10309, 3, PSend10311, PSend10312, PSend10316);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10317 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10307);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10319 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10321 = new_String(L"Will now try to close connection");
    Constant string_10321_Const = new_Constant((Optr)string_10321);
    // warn:. 
    Send PSend10322 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10321_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10323 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10324 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10325 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10324_Const = new_Constant((Optr)string_10324);
    // ,. 
    Send PSend10326 = new_Send((Optr)string_10324_Const, SMB__append_, 1, (Optr)PSend10325);
    // warn:. 
    Send PSend10327 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10326);
    Array PThreadedCode10320 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10321, (Optr)&t_send1, (Optr)PSend10322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10323, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10324, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10325, (Optr)&t_send1, (Optr)PSend10326, (Optr)&t_send1, (Optr)PSend10327, (Optr)&t_method_return);
    Block PBlock10318 = new_Block_with(PArray10319, empty_Array, PThreadedCode10320, 3, PSend10322, PSend10323, PSend10327);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10328 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10318);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10329 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode10258 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10259, (Optr)&t_send1, (Optr)PSend10260, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10261, (Optr)&t_send1, (Optr)PSend10262, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10263, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10264, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10265, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10266, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10267, (Optr)&t_send1, (Optr)PSend10306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10307, (Optr)&t_send1, (Optr)PSend10317, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10318, (Optr)&t_send1, (Optr)PSend10328, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10329, (Optr)&t_method_return);
    Block PBlock10256 = new_Block_with(empty_Array, PArray10257, PThreadedCode10258, 8, PSend10260, PSend10262, PAssign10263, PAssign10265, PSend10306, PSend10317, PSend10328, PSend10329);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10330 = new_Send((Optr)PBlock10256, SMB_fork, 0);
    Array PThreadedCode10253 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10254, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10256, (Optr)&t_send0, (Optr)PSend10330, (Optr)&t_method_return);
    Block PBlock10251 = new_Block_with(empty_Array, PArray10252, PThreadedCode10253, 2, PAssign10254, PSend10330);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10331 = new_Send((Optr)PBlock10248, SMB_whileTrue_, 1, (Optr)PBlock10251);
    Array PThreadedCode10244 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10245, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10247, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10248, (Optr)&t_push_closure, (Optr)PBlock10251, (Optr)&t_send1, (Optr)PSend10331, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10241 = new_Method_with(PArray10242, PArray10243, empty_Array, PThreadedCode10244, 4, PAssign10245, PSend10247, PSend10331, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod10241, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10333 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10334 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10337 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10336 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10337);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10338 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10340 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10339 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10340);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10342 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10341 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10342);
    String string_10343 = new_String(L"* read from ");
    Constant string_10343_Const = new_Constant((Optr)string_10343);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10344 = new_Send((Optr)string_10343_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10345 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10344);
    String string_10346 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10347 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10346_Const = new_Constant((Optr)string_10346);
    // ,. 
    Send PSend10348 = new_Send((Optr)string_10346_Const, SMB__append_, 1, (Optr)PSend10347);
    String string_10349 = new_String(L" bytes");
    Constant string_10349_Const = new_Constant((Optr)string_10349);
    // ,. 
    Send PSend10350 = new_Send((Optr)PSend10348, SMB__append_, 1, (Optr)string_10349_Const);
    // warn:. 
    Send PSend10351 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10350);
    String string_10352 = new_String(L"Received ");
    // size. 
    Send PSend10353 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10352_Const = new_Constant((Optr)string_10352);
    // ,. 
    Send PSend10354 = new_Send((Optr)string_10352_Const, SMB__append_, 1, (Optr)PSend10353);
    String string_10355 = new_String(L" bytes");
    Constant string_10355_Const = new_Constant((Optr)string_10355);
    // ,. 
    Send PSend10356 = new_Send((Optr)PSend10354, SMB__append_, 1, (Optr)string_10355_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10357 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10356);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10358 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10359 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10335 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10336, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10337, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10338, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10339, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10341, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10342, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10343, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10344, (Optr)&t_send1, (Optr)PSend10345, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10346, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10347, (Optr)&t_send1, (Optr)PSend10348, (Optr)&t_push1, (Optr)string_10349, (Optr)&t_send1, (Optr)PSend10350, (Optr)&t_send1, (Optr)PSend10351, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10352, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10353, (Optr)&t_send1, (Optr)PSend10354, (Optr)&t_push1, (Optr)string_10355, (Optr)&t_send1, (Optr)PSend10356, (Optr)&t_send1, (Optr)PSend10357, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10358, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10359, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10332 = new_Method_with(PArray10333, PArray10334, empty_Array, PThreadedCode10335, 10, PAssign10336, PSend10338, PAssign10339, PAssign10341, PSend10345, PSend10351, PSend10357, PSend10358, PSend10359, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10332, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10362 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10361 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10362, (Optr)&t_method_return);
    Method PMethod10360 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10361, 1, PSend10362);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10360, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10364 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10364, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10363, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10367 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10367_Const = new_Constant((Optr)string_10367);
    // require:at:. 
    Send PSend10368 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10367_Const);
    Array PThreadedCode10366 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10367, (Optr)&t_send2, (Optr)PSend10368, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10365 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10366, 2, PSend10368, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10365, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10370 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10371 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10374 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10373 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10374);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10375 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10378 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10377 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10378, (Optr)&t_block_return);
    Block PBlock10376 = new_Block_with(empty_Array, empty_Array, PThreadedCode10377, 1, PSend10378);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10380 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10383 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10382 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10383);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10387 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10386 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10387);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10390 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10391 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10391_Const = new_Constant((Optr)char_10391);
    // =. 
    Send PSend10392 = new_Send((Optr)PSend10390, SMB__equals_, 1, (Optr)char_10391_Const);
    Array PThreadedCode10389 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10390, (Optr)&t_push1, (Optr)char_10391, (Optr)&t_send1, (Optr)PSend10392, (Optr)&t_block_return);
    Block PBlock10388 = new_Block_with(empty_Array, empty_Array, PThreadedCode10389, 1, PSend10392);
    String string_10395 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10396 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10395_Const = new_Constant((Optr)string_10395);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10397 = new_Send((Optr)string_10395_Const, SMB__append_, 1, (Optr)PSend10396);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10398 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10397);
    String string_10399 = new_String(L"Received ");
    Constant string_10399_Const = new_Constant((Optr)string_10399);
    // ,. 
    Send PSend10400 = new_Send((Optr)string_10399_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10401 = new_String(L", handle=");
    Constant string_10401_Const = new_Constant((Optr)string_10401);
    // ,. 
    Send PSend10402 = new_Send((Optr)PSend10400, SMB__append_, 1, (Optr)string_10401_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10403 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10404 = new_Send((Optr)PSend10402, SMB__append_, 1, (Optr)PSend10403);
    // warn:. 
    Send PSend10405 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10404);
    String string_10406 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10407 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10406_Const = new_Constant((Optr)string_10406);
    // ,. 
    Send PSend10408 = new_Send((Optr)string_10406_Const, SMB__append_, 1, (Optr)PSend10407);
    String string_10409 = new_String(L" bytes");
    Constant string_10409_Const = new_Constant((Optr)string_10409);
    // ,. 
    Send PSend10410 = new_Send((Optr)PSend10408, SMB__append_, 1, (Optr)string_10409_Const);
    String string_10411 = new_String(L", handle=");
    Constant string_10411_Const = new_Constant((Optr)string_10411);
    // ,. 
    Send PSend10412 = new_Send((Optr)PSend10410, SMB__append_, 1, (Optr)string_10411_Const);
    // hash. 
    Send PSend10413 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10414 = new_Send((Optr)PSend10412, SMB__append_, 1, (Optr)PSend10413);
    // warn:. 
    Send PSend10415 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10414);
    String string_10416 = new_String(L"Received ");
    // size. 
    Send PSend10417 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10416_Const = new_Constant((Optr)string_10416);
    // ,. 
    Send PSend10418 = new_Send((Optr)string_10416_Const, SMB__append_, 1, (Optr)PSend10417);
    String string_10419 = new_String(L" bytes");
    Constant string_10419_Const = new_Constant((Optr)string_10419);
    // ,. 
    Send PSend10420 = new_Send((Optr)PSend10418, SMB__append_, 1, (Optr)string_10419_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10421 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10420);
    // receive. 
    Send PSend10423 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10422 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10423);
    Array PThreadedCode10394 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10395, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10396, (Optr)&t_send1, (Optr)PSend10397, (Optr)&t_send1, (Optr)PSend10398, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10399, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10400, (Optr)&t_push1, (Optr)string_10401, (Optr)&t_send1, (Optr)PSend10402, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10403, (Optr)&t_send1, (Optr)PSend10404, (Optr)&t_send1, (Optr)PSend10405, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10406, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10407, (Optr)&t_send1, (Optr)PSend10408, (Optr)&t_push1, (Optr)string_10409, (Optr)&t_send1, (Optr)PSend10410, (Optr)&t_push1, (Optr)string_10411, (Optr)&t_send1, (Optr)PSend10412, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10413, (Optr)&t_send1, (Optr)PSend10414, (Optr)&t_send1, (Optr)PSend10415, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10416, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10417, (Optr)&t_send1, (Optr)PSend10418, (Optr)&t_push1, (Optr)string_10419, (Optr)&t_send1, (Optr)PSend10420, (Optr)&t_send1, (Optr)PSend10421, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10422, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10423, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10393 = new_Block_with(empty_Array, empty_Array, PThreadedCode10394, 5, PSend10398, PSend10405, PSend10415, PSend10421, PAssign10422);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10424 = new_Send((Optr)PBlock10388, SMB_whileFalse_, 1, (Optr)PBlock10393);
    String string_10425 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10426 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10425_Const = new_Constant((Optr)string_10425);
    // ,. 
    Send PSend10427 = new_Send((Optr)string_10425_Const, SMB__append_, 1, (Optr)PSend10426);
    // warn:. 
    Send PSend10428 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10427);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10429 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10430 = new_String(L"Status ");
    // isConnected. 
    Send PSend10431 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10430_Const = new_Constant((Optr)string_10430);
    // ,. 
    Send PSend10432 = new_Send((Optr)string_10430_Const, SMB__append_, 1, (Optr)PSend10431);
    // warn:. 
    Send PSend10433 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10432);
    Array PThreadedCode10385 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10386, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10387, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10388, (Optr)&t_push_closure, (Optr)PBlock10393, (Optr)&t_send1, (Optr)PSend10424, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10425, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10426, (Optr)&t_send1, (Optr)PSend10427, (Optr)&t_send1, (Optr)PSend10428, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10429, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10430, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10431, (Optr)&t_send1, (Optr)PSend10432, (Optr)&t_send1, (Optr)PSend10433, (Optr)&t_block_return);
    Block PBlock10384 = new_Block_with(empty_Array, empty_Array, PThreadedCode10385, 5, PAssign10386, PSend10424, PSend10428, PSend10429, PSend10433);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10434 = new_Send((Optr)PBlock10384, SMB_fork, 0);
    Array PThreadedCode10381 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10382, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10384, (Optr)&t_send0, (Optr)PSend10434, (Optr)&t_method_return);
    Block PBlock10379 = new_Block_with(empty_Array, PArray10380, PThreadedCode10381, 2, PAssign10382, PSend10434);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10435 = new_Send((Optr)PBlock10376, SMB_whileTrue_, 1, (Optr)PBlock10379);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10436 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10372 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10373, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10374, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10375, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10376, (Optr)&t_push_closure, (Optr)PBlock10379, (Optr)&t_send1, (Optr)PSend10435, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10436, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10369 = new_Method_with(PArray10370, PArray10371, empty_Array, PThreadedCode10372, 5, PAssign10373, PSend10375, PSend10435, PSend10436, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10369, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10438 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10439 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10442 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10441 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10442);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10443 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10446 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10445 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10446, (Optr)&t_block_return);
    Block PBlock10444 = new_Block_with(empty_Array, empty_Array, PThreadedCode10445, 1, PSend10446);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10448 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10451 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10450 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10451);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10454 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10453 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10454, (Optr)&t_block_return);
    Block PBlock10452 = new_Block_with(empty_Array, empty_Array, PThreadedCode10453, 1, PSend10454);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10455 = new_Send((Optr)PBlock10452, SMB_fork, 0);
    Array PThreadedCode10449 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10450, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10452, (Optr)&t_send0, (Optr)PSend10455, (Optr)&t_method_return);
    Block PBlock10447 = new_Block_with(empty_Array, PArray10448, PThreadedCode10449, 2, PAssign10450, PSend10455);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10456 = new_Send((Optr)PBlock10444, SMB_whileTrue_, 1, (Optr)PBlock10447);
    Array PThreadedCode10440 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10441, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10442, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10443, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10444, (Optr)&t_push_closure, (Optr)PBlock10447, (Optr)&t_send1, (Optr)PSend10456, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10437 = new_Method_with(PArray10438, PArray10439, empty_Array, PThreadedCode10440, 4, PAssign10441, PSend10443, PSend10456, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10437, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10458 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10459 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10461 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10462 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10461);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10463 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10464 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10463);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10466 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10465 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10466);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10469 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10471 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10470 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10471);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10474 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10475 = new_Send((Optr)PSend10474, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10478 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10391 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10391_Const = new_Constant((Optr)char_10391);
    // =. 
    Send PSend10479 = new_Send((Optr)PSend10478, SMB__equals_, 1, (Optr)char_10391_Const);
    Array PThreadedCode10477 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10478, (Optr)&t_push1, (Optr)char_10391, (Optr)&t_send1, (Optr)PSend10479, (Optr)&t_block_return);
    Block PBlock10476 = new_Block_with(empty_Array, empty_Array, PThreadedCode10477, 1, PSend10479);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10480 = new_Send((Optr)PSend10475, SMB_and_, 1, (Optr)PBlock10476);
    Array PThreadedCode10473 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10474, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10475, (Optr)&t_push_closure, (Optr)PBlock10476, (Optr)&t_send1, (Optr)PSend10480, (Optr)&t_block_return);
    Block PBlock10472 = new_Block_with(empty_Array, empty_Array, PThreadedCode10473, 1, PSend10480);
    String string_10483 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10484 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10483_Const = new_Constant((Optr)string_10483);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10485 = new_Send((Optr)string_10483_Const, SMB__append_, 1, (Optr)PSend10484);
    // warn:. 
    Send PSend10486 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10485);
    String string_10487 = new_String(L"Received ");
    Constant string_10487_Const = new_Constant((Optr)string_10487);
    // ,. 
    Send PSend10488 = new_Send((Optr)string_10487_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10489 = new_String(L", handle=");
    Constant string_10489_Const = new_Constant((Optr)string_10489);
    // ,. 
    Send PSend10490 = new_Send((Optr)PSend10488, SMB__append_, 1, (Optr)string_10489_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10491 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10492 = new_Send((Optr)PSend10490, SMB__append_, 1, (Optr)PSend10491);
    // warn:. 
    Send PSend10493 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10492);
    String string_10494 = new_String(L"Received ");
    // size. 
    Send PSend10495 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10494_Const = new_Constant((Optr)string_10494);
    // ,. 
    Send PSend10496 = new_Send((Optr)string_10494_Const, SMB__append_, 1, (Optr)PSend10495);
    String string_10497 = new_String(L" bytes");
    Constant string_10497_Const = new_Constant((Optr)string_10497);
    // ,. 
    Send PSend10498 = new_Send((Optr)PSend10496, SMB__append_, 1, (Optr)string_10497_Const);
    String string_10499 = new_String(L", handle=");
    Constant string_10499_Const = new_Constant((Optr)string_10499);
    // ,. 
    Send PSend10500 = new_Send((Optr)PSend10498, SMB__append_, 1, (Optr)string_10499_Const);
    // hash. 
    Send PSend10501 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10502 = new_Send((Optr)PSend10500, SMB__append_, 1, (Optr)PSend10501);
    // warn:. 
    Send PSend10503 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10502);
    String string_10504 = new_String(L"Received ");
    // size. 
    Send PSend10505 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10504_Const = new_Constant((Optr)string_10504);
    // ,. 
    Send PSend10506 = new_Send((Optr)string_10504_Const, SMB__append_, 1, (Optr)PSend10505);
    String string_10507 = new_String(L" bytes");
    Constant string_10507_Const = new_Constant((Optr)string_10507);
    // ,. 
    Send PSend10508 = new_Send((Optr)PSend10506, SMB__append_, 1, (Optr)string_10507_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10509 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10508);
    // receiveDataIfAvailable. 
    Send PSend10510 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10512 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10511 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10512);
    Array PThreadedCode10482 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10483, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10484, (Optr)&t_send1, (Optr)PSend10485, (Optr)&t_send1, (Optr)PSend10486, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10487, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10488, (Optr)&t_push1, (Optr)string_10489, (Optr)&t_send1, (Optr)PSend10490, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10491, (Optr)&t_send1, (Optr)PSend10492, (Optr)&t_send1, (Optr)PSend10493, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10494, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10495, (Optr)&t_send1, (Optr)PSend10496, (Optr)&t_push1, (Optr)string_10497, (Optr)&t_send1, (Optr)PSend10498, (Optr)&t_push1, (Optr)string_10499, (Optr)&t_send1, (Optr)PSend10500, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10501, (Optr)&t_send1, (Optr)PSend10502, (Optr)&t_send1, (Optr)PSend10503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10504, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10505, (Optr)&t_send1, (Optr)PSend10506, (Optr)&t_push1, (Optr)string_10507, (Optr)&t_send1, (Optr)PSend10508, (Optr)&t_send1, (Optr)PSend10509, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10510, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10511, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10512, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10481 = new_Block_with(empty_Array, empty_Array, PThreadedCode10482, 6, PSend10486, PSend10493, PSend10503, PSend10509, PSend10510, PAssign10511);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10513 = new_Send((Optr)PBlock10472, SMB_whileFalse_, 1, (Optr)PBlock10481);
    Array PThreadedCode10468 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10469, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10470, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10471, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10472, (Optr)&t_push_closure, (Optr)PBlock10481, (Optr)&t_send1, (Optr)PSend10513, (Optr)&t_block_return);
    Block PBlock10467 = new_Block_with(empty_Array, empty_Array, PThreadedCode10468, 3, PSend10469, PAssign10470, PSend10513);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10515 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10517 = new_String(L"Error: Network Connection closed");
    Constant string_10517_Const = new_Constant((Optr)string_10517);
    // warn:. 
    Send PSend10518 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10517_Const);
    String string_10519 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10520 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10519_Const = new_Constant((Optr)string_10519);
    // ,. 
    Send PSend10521 = new_Send((Optr)string_10519_Const, SMB__append_, 1, (Optr)PSend10520);
    // warn:. 
    Send PSend10522 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10521);
    Array PThreadedCode10516 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10517, (Optr)&t_send1, (Optr)PSend10518, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10519, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10520, (Optr)&t_send1, (Optr)PSend10521, (Optr)&t_send1, (Optr)PSend10522, (Optr)&t_method_return);
    Block PBlock10514 = new_Block_with(PArray10515, empty_Array, PThreadedCode10516, 2, PSend10518, PSend10522);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10523 = new_Send((Optr)PBlock10467, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10514);
    String string_10524 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10525 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10524_Const = new_Constant((Optr)string_10524);
    // ,. 
    Send PSend10526 = new_Send((Optr)string_10524_Const, SMB__append_, 1, (Optr)PSend10525);
    // warn:. 
    Send PSend10527 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10526);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10528 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10529 = new_String(L"Status ");
    // isConnected. 
    Send PSend10530 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10529_Const = new_Constant((Optr)string_10529);
    // ,. 
    Send PSend10531 = new_Send((Optr)string_10529_Const, SMB__append_, 1, (Optr)PSend10530);
    // warn:. 
    Send PSend10532 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10531);
    Array PThreadedCode10460 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10461, (Optr)&t_send1, (Optr)PSend10462, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10463, (Optr)&t_send1, (Optr)PSend10464, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10465, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10466, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10467, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10514, (Optr)&t_send2, (Optr)PSend10523, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10524, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10525, (Optr)&t_send1, (Optr)PSend10526, (Optr)&t_send1, (Optr)PSend10527, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10528, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10529, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10530, (Optr)&t_send1, (Optr)PSend10531, (Optr)&t_send1, (Optr)PSend10532, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10457 = new_Method_with(PArray10458, PArray10459, empty_Array, PThreadedCode10460, 8, PSend10462, PSend10464, PAssign10465, PSend10523, PSend10527, PSend10528, PSend10532, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10457, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10534 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10533 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10534, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10533, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10536 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10537 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10540 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10539 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10540);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10541 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10544 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10543 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10544, (Optr)&t_block_return);
    Block PBlock10542 = new_Block_with(empty_Array, empty_Array, PThreadedCode10543, 1, PSend10544);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10546 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10549 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10548 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10549);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray10551 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10553 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10554 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10553);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10555 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10556 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10555);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10558 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10557 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10558);
    // on:. 
    Send PSend10560 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10559 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10560);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend10564 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10563 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10564);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10567 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10568 = new_Send((Optr)PSend10567, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10571 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_10391 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10391_Const = new_Constant((Optr)char_10391);
    // =. 
    Send PSend10572 = new_Send((Optr)PSend10571, SMB__equals_, 1, (Optr)char_10391_Const);
    Array PThreadedCode10570 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10571, (Optr)&t_push1, (Optr)char_10391, (Optr)&t_send1, (Optr)PSend10572, (Optr)&t_block_return);
    Block PBlock10569 = new_Block_with(empty_Array, empty_Array, PThreadedCode10570, 1, PSend10572);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10573 = new_Send((Optr)PSend10568, SMB_and_, 1, (Optr)PBlock10569);
    Array PThreadedCode10566 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10567, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10568, (Optr)&t_push_closure, (Optr)PBlock10569, (Optr)&t_send1, (Optr)PSend10573, (Optr)&t_block_return);
    Block PBlock10565 = new_Block_with(empty_Array, empty_Array, PThreadedCode10566, 1, PSend10573);
    String string_10576 = new_String(L"Received ");
    Constant string_10576_Const = new_Constant((Optr)string_10576);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10577 = new_Send((Optr)string_10576_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_10578 = new_String(L", handle=");
    Constant string_10578_Const = new_Constant((Optr)string_10578);
    // ,. 
    Send PSend10579 = new_Send((Optr)PSend10577, SMB__append_, 1, (Optr)string_10578_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10580 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10581 = new_Send((Optr)PSend10579, SMB__append_, 1, (Optr)PSend10580);
    // warn:. 
    Send PSend10582 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10581);
    String string_10583 = new_String(L"Received ");
    // size. 
    Send PSend10584 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10583_Const = new_Constant((Optr)string_10583);
    // ,. 
    Send PSend10585 = new_Send((Optr)string_10583_Const, SMB__append_, 1, (Optr)PSend10584);
    String string_10586 = new_String(L" bytes");
    Constant string_10586_Const = new_Constant((Optr)string_10586);
    // ,. 
    Send PSend10587 = new_Send((Optr)PSend10585, SMB__append_, 1, (Optr)string_10586_Const);
    String string_10588 = new_String(L", handle=");
    Constant string_10588_Const = new_Constant((Optr)string_10588);
    // ,. 
    Send PSend10589 = new_Send((Optr)PSend10587, SMB__append_, 1, (Optr)string_10588_Const);
    // hash. 
    Send PSend10590 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10591 = new_Send((Optr)PSend10589, SMB__append_, 1, (Optr)PSend10590);
    // warn:. 
    Send PSend10592 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10591);
    String string_10593 = new_String(L"Received ");
    // size. 
    Send PSend10594 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10593_Const = new_Constant((Optr)string_10593);
    // ,. 
    Send PSend10595 = new_Send((Optr)string_10593_Const, SMB__append_, 1, (Optr)PSend10594);
    String string_10596 = new_String(L" bytes");
    Constant string_10596_Const = new_Constant((Optr)string_10596);
    // ,. 
    Send PSend10597 = new_Send((Optr)PSend10595, SMB__append_, 1, (Optr)string_10596_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10598 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10597);
    // readMessage. 
    Send PSend10600 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10599 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10600);
    Array PThreadedCode10575 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10576, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend10577, (Optr)&t_push1, (Optr)string_10578, (Optr)&t_send1, (Optr)PSend10579, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10580, (Optr)&t_send1, (Optr)PSend10581, (Optr)&t_send1, (Optr)PSend10582, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10583, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10584, (Optr)&t_send1, (Optr)PSend10585, (Optr)&t_push1, (Optr)string_10586, (Optr)&t_send1, (Optr)PSend10587, (Optr)&t_push1, (Optr)string_10588, (Optr)&t_send1, (Optr)PSend10589, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10590, (Optr)&t_send1, (Optr)PSend10591, (Optr)&t_send1, (Optr)PSend10592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10593, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10594, (Optr)&t_send1, (Optr)PSend10595, (Optr)&t_push1, (Optr)string_10596, (Optr)&t_send1, (Optr)PSend10597, (Optr)&t_send1, (Optr)PSend10598, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10599, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10600, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10574 = new_Block_with(empty_Array, empty_Array, PThreadedCode10575, 4, PSend10582, PSend10592, PSend10598, PAssign10599);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10601 = new_Send((Optr)PBlock10565, SMB_whileFalse_, 1, (Optr)PBlock10574);
    Array PThreadedCode10562 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10563, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10565, (Optr)&t_push_closure, (Optr)PBlock10574, (Optr)&t_send1, (Optr)PSend10601, (Optr)&t_block_return);
    Block PBlock10561 = new_Block_with(empty_Array, empty_Array, PThreadedCode10562, 2, PAssign10563, PSend10601);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10603 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10605 = new_String(L"Error: Network Connection closed");
    Constant string_10605_Const = new_Constant((Optr)string_10605);
    // warn:. 
    Send PSend10606 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10605_Const);
    String string_10607 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10608 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10607_Const = new_Constant((Optr)string_10607);
    // ,. 
    Send PSend10609 = new_Send((Optr)string_10607_Const, SMB__append_, 1, (Optr)PSend10608);
    // warn:. 
    Send PSend10610 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10609);
    Array PThreadedCode10604 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10605, (Optr)&t_send1, (Optr)PSend10606, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10607, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10608, (Optr)&t_send1, (Optr)PSend10609, (Optr)&t_send1, (Optr)PSend10610, (Optr)&t_method_return);
    Block PBlock10602 = new_Block_with(PArray10603, empty_Array, PThreadedCode10604, 2, PSend10606, PSend10610);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10611 = new_Send((Optr)PBlock10561, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10602);
    String string_10612 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10613 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10612_Const = new_Constant((Optr)string_10612);
    // ,. 
    Send PSend10614 = new_Send((Optr)string_10612_Const, SMB__append_, 1, (Optr)PSend10613);
    // warn:. 
    Send PSend10615 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10614);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10616 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10617 = new_String(L"Status ");
    // isConnected. 
    Send PSend10618 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10617_Const = new_Constant((Optr)string_10617);
    // ,. 
    Send PSend10619 = new_Send((Optr)string_10617_Const, SMB__append_, 1, (Optr)PSend10618);
    // warn:. 
    Send PSend10620 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10619);
    Array PThreadedCode10552 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10553, (Optr)&t_send1, (Optr)PSend10554, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10555, (Optr)&t_send1, (Optr)PSend10556, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10557, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10559, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10560, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10561, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10602, (Optr)&t_send2, (Optr)PSend10611, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10612, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10613, (Optr)&t_send1, (Optr)PSend10614, (Optr)&t_send1, (Optr)PSend10615, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10616, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10617, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10618, (Optr)&t_send1, (Optr)PSend10619, (Optr)&t_send1, (Optr)PSend10620, (Optr)&t_method_return);
    Block PBlock10550 = new_Block_with(empty_Array, PArray10551, PThreadedCode10552, 8, PSend10554, PSend10556, PAssign10557, PAssign10559, PSend10611, PSend10615, PSend10616, PSend10620);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10621 = new_Send((Optr)PBlock10550, SMB_fork, 0);
    Array PThreadedCode10547 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10548, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10550, (Optr)&t_send0, (Optr)PSend10621, (Optr)&t_method_return);
    Block PBlock10545 = new_Block_with(empty_Array, PArray10546, PThreadedCode10547, 2, PAssign10548, PSend10621);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10622 = new_Send((Optr)PBlock10542, SMB_whileTrue_, 1, (Optr)PBlock10545);
    Array PThreadedCode10538 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10539, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10540, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10541, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10542, (Optr)&t_push_closure, (Optr)PBlock10545, (Optr)&t_send1, (Optr)PSend10622, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10535 = new_Method_with(PArray10536, PArray10537, empty_Array, PThreadedCode10538, 4, PAssign10539, PSend10541, PSend10622, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod10535, HEADER(IO_Socket_Class));
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