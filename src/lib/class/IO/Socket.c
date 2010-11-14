#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9882 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9884 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9883 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9884, (Optr)&t_method_return);
    Method PMethod9881 = new_Method_with(PArray9882, empty_Array, empty_Array, PThreadedCode9883, 1, PSend9884);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9881, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9888 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9887 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9888);
    Array PArray9886 = new_Array_with(1, (Optr)PAnnotation9887);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9890 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9889 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9890, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9885 = new_NativeMethod_with(empty_Array, empty_Array, PArray9886, PThreadedCode9889, 2, PSend9890, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9885, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9892 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9896 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9895 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9896, (Optr)&t_block_return);
    Block PBlock9894 = new_Block_with(empty_Array, empty_Array, PThreadedCode9895, 1, PSend9896);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9899 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9900 = new_Send((Optr)PSend9899, SMB_yield, 0);
    Array PThreadedCode9898 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9899, (Optr)&t_send0, (Optr)PSend9900, (Optr)&t_block_return);
    Block PBlock9897 = new_Block_with(empty_Array, empty_Array, PThreadedCode9898, 1, PSend9900);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9901 = new_Send((Optr)PBlock9894, SMB_whileFalse_, 1, (Optr)PBlock9897);
    String string_9902 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9902_Const = new_Constant((Optr)string_9902);
    // warn:. 
    Send PSend9903 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9902_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9904 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9893 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9894, (Optr)&t_push_closure, (Optr)PBlock9897, (Optr)&t_send1, (Optr)PSend9901, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9902, (Optr)&t_send1, (Optr)PSend9903, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9904, (Optr)&t_method_return);
    Method PMethod9891 = new_Method_with(PArray9892, empty_Array, empty_Array, PThreadedCode9893, 3, PSend9901, PSend9903, PSend9904);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9891, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9906 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9909 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9908 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9909);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9910 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9907 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9908, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9909, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9910, (Optr)&t_method_return);
    Method PMethod9905 = new_Method_with(empty_Array, PArray9906, empty_Array, PThreadedCode9907, 2, PAssign9908, PSend9910);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9905, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9912 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9914 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9913 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9914, (Optr)&t_method_return);
    Method PMethod9911 = new_Method_with(PArray9912, empty_Array, empty_Array, PThreadedCode9913, 1, PSend9914);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9911, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9916 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9919 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9918 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9919);
    Array PArray9917 = new_Array_with(1, (Optr)PAnnotation9918);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9921 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9920 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9921, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9915 = new_NativeMethod_with(PArray9916, empty_Array, PArray9917, PThreadedCode9920, 2, PSend9921, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9915, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9925 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9924 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9925);
    Array PArray9923 = new_Array_with(1, (Optr)PAnnotation9924);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9927 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9926 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9927, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9922 = new_NativeMethod_with(empty_Array, empty_Array, PArray9923, PThreadedCode9926, 2, PSend9927, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9922, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9929 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9930 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9936 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9935 = new_Send((Optr)PSend9936, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9934 = new_Send((Optr)PSend9935, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9933 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9934);
    Assign PAssign9932 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9933);
    // size. 
    Send PSend9938 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9937 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9938);
    String string_9939 = new_String(L"-Data: ");
    Constant string_9939_Const = new_Constant((Optr)string_9939);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9940 = new_Send((Optr)string_9939_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9941 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9940);
    String string_9942 = new_String(L"-Size: ");
    Constant string_9942_Const = new_Constant((Optr)string_9942);
    // ,. 
    Send PSend9943 = new_Send((Optr)string_9942_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend9944 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9943);
    String string_9945 = new_String(L"-Buffer size ");
    // size. 
    Send PSend9946 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_9945_Const = new_Constant((Optr)string_9945);
    // ,. 
    Send PSend9947 = new_Send((Optr)string_9945_Const, SMB__append_, 1, (Optr)PSend9946);
    // warn:. 
    Send PSend9948 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9947);
    String string_9949 = new_String(L"-Buffer before: ");
    Constant string_9949_Const = new_Constant((Optr)string_9949);
    // warn:. 
    Send PSend9950 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9949_Const);
    // warn:. 
    Send PSend9951 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend9952 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend9953 = new_Send((Optr)PSend9952, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend9954 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend9953, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_9955 = new_String(L"-Buffer after ");
    Constant string_9955_Const = new_Constant((Optr)string_9955);
    // warn:. 
    Send PSend9956 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9955_Const);
    // warn:. 
    Send PSend9957 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9931 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9932, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9936, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9935, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9934, (Optr)&t_send1, (Optr)PSend9933, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9937, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9938, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9939, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9940, (Optr)&t_send1, (Optr)PSend9941, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9942, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9943, (Optr)&t_send1, (Optr)PSend9944, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9945, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9946, (Optr)&t_send1, (Optr)PSend9947, (Optr)&t_send1, (Optr)PSend9948, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9949, (Optr)&t_send1, (Optr)PSend9950, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9951, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9952, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9953, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend9954, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9955, (Optr)&t_send1, (Optr)PSend9956, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9957, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9928 = new_Method_with(PArray9929, PArray9930, empty_Array, PThreadedCode9931, 11, PAssign9932, PAssign9937, PSend9941, PSend9944, PSend9948, PSend9950, PSend9951, PSend9954, PSend9956, PSend9957, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9928, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9959 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9961 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9962 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9961);
    Array PThreadedCode9960 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9961, (Optr)&t_send1, (Optr)PSend9962, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9958 = new_Method_with(PArray9959, empty_Array, empty_Array, PThreadedCode9960, 2, PSend9962, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod9958, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend9965 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign9966 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode9964 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9965, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9966, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9963 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9964, 3, PSend9965, PAssign9966, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9963, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray9968 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend9970 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode9969 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend9970, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9967 = new_Method_with(PArray9968, empty_Array, empty_Array, PThreadedCode9969, 2, PSend9970, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod9967, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9974 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9973 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_9974);
    Array PArray9972 = new_Array_with(1, (Optr)PAnnotation9973);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9976 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9975 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9976, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9971 = new_NativeMethod_with(empty_Array, empty_Array, PArray9972, PThreadedCode9975, 2, PSend9976, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod9971, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9978 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9982 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9981 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9982, (Optr)&t_block_return);
    Block PBlock9980 = new_Block_with(empty_Array, empty_Array, PThreadedCode9981, 1, PSend9982);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9985 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9986 = new_Send((Optr)PSend9985, SMB_primYield, 0);
    Array PThreadedCode9984 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9985, (Optr)&t_send0, (Optr)PSend9986, (Optr)&t_block_return);
    Block PBlock9983 = new_Block_with(empty_Array, empty_Array, PThreadedCode9984, 1, PSend9986);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9987 = new_Send((Optr)PBlock9980, SMB_whileFalse_, 1, (Optr)PBlock9983);
    String string_9988 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9988_Const = new_Constant((Optr)string_9988);
    // warn:. 
    Send PSend9989 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9988_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend9990 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode9979 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9980, (Optr)&t_push_closure, (Optr)PBlock9983, (Optr)&t_send1, (Optr)PSend9987, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9988, (Optr)&t_send1, (Optr)PSend9989, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend9990, (Optr)&t_method_return);
    Method PMethod9977 = new_Method_with(PArray9978, empty_Array, empty_Array, PThreadedCode9979, 3, PSend9987, PSend9989, PSend9990);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod9977, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9992 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9996 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9995 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9996, (Optr)&t_block_return);
    Block PBlock9994 = new_Block_with(empty_Array, empty_Array, PThreadedCode9995, 1, PSend9996);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9999 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10000 = new_Send((Optr)PSend9999, SMB_primYield, 0);
    Array PThreadedCode9998 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9999, (Optr)&t_send0, (Optr)PSend10000, (Optr)&t_block_return);
    Block PBlock9997 = new_Block_with(empty_Array, empty_Array, PThreadedCode9998, 1, PSend10000);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10001 = new_Send((Optr)PBlock9994, SMB_whileFalse_, 1, (Optr)PBlock9997);
    String string_10002 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10002_Const = new_Constant((Optr)string_10002);
    // warn:. 
    Send PSend10003 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10002_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend10004 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9993 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9994, (Optr)&t_push_closure, (Optr)PBlock9997, (Optr)&t_send1, (Optr)PSend10001, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10002, (Optr)&t_send1, (Optr)PSend10003, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend10004, (Optr)&t_method_return);
    Method PMethod9991 = new_Method_with(PArray9992, empty_Array, empty_Array, PThreadedCode9993, 3, PSend10001, PSend10003, PSend10004);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod9991, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray10006 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10008 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode10007 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend10008, (Optr)&t_method_return);
    Method PMethod10005 = new_Method_with(PArray10006, empty_Array, empty_Array, PThreadedCode10007, 1, PSend10008);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod10005, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend10011 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign10015 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode10014 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10015, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10013 = new_Block_with(empty_Array, empty_Array, PThreadedCode10014, 1, PAssign10015);
    // ifFalse:. 
    Send PSend10012 = new_Send((Optr)PSend10011, SMB_ifFalse_, 1, (Optr)PBlock10013);
    Array PThreadedCode10010 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10011, (Optr)&t_send_ifFalse_, (Optr)PSend10012, (Optr)PBlock10013, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10010, 2, PSend10012, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod10009, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10017 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10020 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation10019 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_10020);
    Array PArray10018 = new_Array_with(1, (Optr)PAnnotation10019);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10022 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10021 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10022, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10016 = new_NativeMethod_with(PArray10017, empty_Array, PArray10018, PThreadedCode10021, 2, PSend10022, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod10016, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray10024 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10027 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10031 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10030 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10031, (Optr)&t_block_return);
    Block PBlock10029 = new_Block_with(empty_Array, empty_Array, PThreadedCode10030, 1, PSend10031);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10032 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock10029);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend10033 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend10034 = new_Send((Optr)PSend10033, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode10028 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock10029, (Optr)&t_send1, (Optr)PSend10032, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10033, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend10034, (Optr)&t_method_return);
    Block PBlock10026 = new_Block_with(PArray10027, empty_Array, PThreadedCode10028, 2, PSend10032, PSend10034);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10035 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10026);
    Array PThreadedCode10025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10026, (Optr)&t_send1, (Optr)PSend10035, (Optr)&t_method_return);
    Method PMethod10023 = new_Method_with(empty_Array, PArray10024, empty_Array, PThreadedCode10025, 1, PSend10035);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod10023, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10037 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10040 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation10039 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_10040);
    Array PArray10038 = new_Array_with(1, (Optr)PAnnotation10039);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10042 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10041 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10042, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10036 = new_NativeMethod_with(PArray10037, empty_Array, PArray10038, PThreadedCode10041, 2, PSend10042, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod10036, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend10045 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode10044 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10045, (Optr)&t_method_return);
    Method PMethod10043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10044, 1, PSend10045);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod10043, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10049 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation10048 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_10049);
    Array PArray10047 = new_Array_with(1, (Optr)PAnnotation10048);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10051 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10050 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10051, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10046 = new_NativeMethod_with(empty_Array, empty_Array, PArray10047, PThreadedCode10050, 2, PSend10051, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod10046, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend10054 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10055 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode10053 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10054, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend10055, (Optr)&t_method_return);
    Method PMethod10052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10053, 2, PSend10054, PSend10055);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod10052, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign10058 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign10059 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode10057 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign10058, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10059, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10057, 3, PAssign10058, PAssign10059, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod10056, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10063 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation10062 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_10063);
    Array PArray10061 = new_Array_with(1, (Optr)PAnnotation10062);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10065 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10064 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10065, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10060 = new_NativeMethod_with(empty_Array, empty_Array, PArray10061, PThreadedCode10064, 2, PSend10065, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod10060, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend10068 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode10067 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10068, (Optr)&t_method_return);
    Method PMethod10066 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10067, 1, PSend10068);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod10066, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend10071 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode10070 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10071, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod10069 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10070, 2, PSend10071, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod10069, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10075 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation10074 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_10075);
    Array PArray10073 = new_Array_with(1, (Optr)PAnnotation10074);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10077 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10076 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10077, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10072 = new_NativeMethod_with(empty_Array, empty_Array, PArray10073, PThreadedCode10076, 2, PSend10077, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod10072, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10079 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10082 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation10081 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_10082);
    Array PArray10080 = new_Array_with(1, (Optr)PAnnotation10081);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10084 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10083 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10084, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10078 = new_NativeMethod_with(PArray10079, empty_Array, PArray10080, PThreadedCode10083, 2, PSend10084, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod10078, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray10086 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10088 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode10087 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend10088, (Optr)&t_method_return);
    Method PMethod10085 = new_Method_with(PArray10086, empty_Array, empty_Array, PThreadedCode10087, 1, PSend10088);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod10085, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray10090 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10093 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend10095 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10099 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_10099_Const = new_Constant((Optr)string_10099);
    // escape:. 
    Send PSend10100 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10099_Const);
    Array PThreadedCode10098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10099, (Optr)&t_send1, (Optr)PSend10100, (Optr)&t_block_return);
    Block PBlock10097 = new_Block_with(empty_Array, empty_Array, PThreadedCode10098, 1, PSend10100);
    // ifTrue:. 
    Send PSend10096 = new_Send((Optr)PSend10095, SMB_ifTrue_, 1, (Optr)PBlock10097);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend10102 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign10101 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend10102);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend10103 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_10107 = new_String(L"invalidSocketHandle");
    Constant string_10107_Const = new_Constant((Optr)string_10107);
    // escape:. 
    Send PSend10108 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10107_Const);
    Array PThreadedCode10106 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10107, (Optr)&t_send1, (Optr)PSend10108, (Optr)&t_block_return);
    Block PBlock10105 = new_Block_with(empty_Array, empty_Array, PThreadedCode10106, 1, PSend10108);
    // ifTrue:. 
    Send PSend10104 = new_Send((Optr)PSend10103, SMB_ifTrue_, 1, (Optr)PBlock10105);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10109 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_10113 = new_String(L"unconnected");
    Constant string_10113_Const = new_Constant((Optr)string_10113);
    // escape:. 
    Send PSend10114 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10113_Const);
    Array PThreadedCode10112 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10113, (Optr)&t_send1, (Optr)PSend10114, (Optr)&t_block_return);
    Block PBlock10111 = new_Block_with(empty_Array, empty_Array, PThreadedCode10112, 1, PSend10114);
    // ifTrue:. 
    Send PSend10110 = new_Send((Optr)PSend10109, SMB_ifTrue_, 1, (Optr)PBlock10111);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend10115 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_10119 = new_String(L"waitingForConnection");
    Constant string_10119_Const = new_Constant((Optr)string_10119);
    // escape:. 
    Send PSend10120 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10119_Const);
    Array PThreadedCode10118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10119, (Optr)&t_send1, (Optr)PSend10120, (Optr)&t_block_return);
    Block PBlock10117 = new_Block_with(empty_Array, empty_Array, PThreadedCode10118, 1, PSend10120);
    // ifTrue:. 
    Send PSend10116 = new_Send((Optr)PSend10115, SMB_ifTrue_, 1, (Optr)PBlock10117);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend10121 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_10125 = new_String(L"connected");
    Constant string_10125_Const = new_Constant((Optr)string_10125);
    // escape:. 
    Send PSend10126 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10125_Const);
    Array PThreadedCode10124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10125, (Optr)&t_send1, (Optr)PSend10126, (Optr)&t_block_return);
    Block PBlock10123 = new_Block_with(empty_Array, empty_Array, PThreadedCode10124, 1, PSend10126);
    // ifTrue:. 
    Send PSend10122 = new_Send((Optr)PSend10121, SMB_ifTrue_, 1, (Optr)PBlock10123);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend10127 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_10131 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_10131_Const = new_Constant((Optr)string_10131);
    // escape:. 
    Send PSend10132 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10131_Const);
    Array PThreadedCode10130 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10131, (Optr)&t_send1, (Optr)PSend10132, (Optr)&t_block_return);
    Block PBlock10129 = new_Block_with(empty_Array, empty_Array, PThreadedCode10130, 1, PSend10132);
    // ifTrue:. 
    Send PSend10128 = new_Send((Optr)PSend10127, SMB_ifTrue_, 1, (Optr)PBlock10129);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend10133 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_10137 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_10137_Const = new_Constant((Optr)string_10137);
    // escape:. 
    Send PSend10138 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10137_Const);
    Array PThreadedCode10136 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10137, (Optr)&t_send1, (Optr)PSend10138, (Optr)&t_block_return);
    Block PBlock10135 = new_Block_with(empty_Array, empty_Array, PThreadedCode10136, 1, PSend10138);
    // ifTrue:. 
    Send PSend10134 = new_Send((Optr)PSend10133, SMB_ifTrue_, 1, (Optr)PBlock10135);
    String string_10139 = new_String(L"unknown socket status");
    Array PThreadedCode10094 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10095, (Optr)&t_send_ifTrue_, (Optr)PSend10096, (Optr)PBlock10097, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10101, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10102, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend10103, (Optr)&t_send_ifTrue_, (Optr)PSend10104, (Optr)PBlock10105, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10109, (Optr)&t_send_ifTrue_, (Optr)PSend10110, (Optr)PBlock10111, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10115, (Optr)&t_send_ifTrue_, (Optr)PSend10116, (Optr)PBlock10117, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10121, (Optr)&t_send_ifTrue_, (Optr)PSend10122, (Optr)PBlock10123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend10127, (Optr)&t_send_ifTrue_, (Optr)PSend10128, (Optr)PBlock10129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend10133, (Optr)&t_send_ifTrue_, (Optr)PSend10134, (Optr)PBlock10135, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_10139, (Optr)&t_method_return);
    Constant string_10139_Const = new_Constant((Optr)string_10139);
    Block PBlock10092 = new_Block_with(PArray10093, empty_Array, PThreadedCode10094, 9, PSend10096, PAssign10101, PSend10104, PSend10110, PSend10116, PSend10122, PSend10128, PSend10134, string_10139_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10140 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10092);
    Array PThreadedCode10091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10092, (Optr)&t_send1, (Optr)PSend10140, (Optr)&t_method_return);
    Method PMethod10089 = new_Method_with(empty_Array, PArray10090, empty_Array, PThreadedCode10091, 1, PSend10140);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod10089, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend10145 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode10144 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10145, (Optr)&t_block_return);
    Block PBlock10143 = new_Block_with(empty_Array, empty_Array, PThreadedCode10144, 1, PSend10145);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend10148 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10149 = new_Send((Optr)PSend10148, SMB_primYield, 0);
    Array PThreadedCode10147 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend10148, (Optr)&t_send0, (Optr)PSend10149, (Optr)&t_block_return);
    Block PBlock10146 = new_Block_with(empty_Array, empty_Array, PThreadedCode10147, 1, PSend10149);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10150 = new_Send((Optr)PBlock10143, SMB_whileFalse_, 1, (Optr)PBlock10146);
    String string_10151 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10151_Const = new_Constant((Optr)string_10151);
    // warn:. 
    Send PSend10152 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10151_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend10153 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode10142 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock10143, (Optr)&t_push_closure, (Optr)PBlock10146, (Optr)&t_send1, (Optr)PSend10150, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10151, (Optr)&t_send1, (Optr)PSend10152, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10153, (Optr)&t_method_return);
    Method PMethod10141 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10142, 3, PSend10150, PSend10152, PSend10153);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod10141, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10157 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation10156 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_10157);
    Array PArray10155 = new_Array_with(1, (Optr)PAnnotation10156);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10159 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10158 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10159, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10154 = new_NativeMethod_with(empty_Array, empty_Array, PArray10155, PThreadedCode10158, 2, PSend10159, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod10154, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray10161 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend10164 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign10163 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend10164);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend10166 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign10165 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend10166);
    String string_10167 = new_String(L"Size returned -> ");
    Constant string_10167_Const = new_Constant((Optr)string_10167);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10168 = new_Send((Optr)string_10167_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10169 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10168);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend10170 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode10162 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign10163, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend10164, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10165, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend10166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10167, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend10168, (Optr)&t_send1, (Optr)PSend10169, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend10170, (Optr)&t_method_return);
    Method PMethod10160 = new_Method_with(empty_Array, PArray10161, empty_Array, PThreadedCode10162, 4, PAssign10163, PAssign10165, PSend10169, PSend10170);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod10160, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10174 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation10173 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_10174);
    Array PArray10172 = new_Array_with(1, (Optr)PAnnotation10173);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10176 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10175 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10176, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10171 = new_NativeMethod_with(empty_Array, empty_Array, PArray10172, PThreadedCode10175, 2, PSend10176, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod10171, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray10178 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10182 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10183 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode10181 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10182, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10183, (Optr)&t_block_return);
    Block PBlock10180 = new_Block_with(empty_Array, empty_Array, PThreadedCode10181, 2, PSend10182, PSend10183);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend10184 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock10180);
    Array PThreadedCode10179 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock10180, (Optr)&t_send1, (Optr)PSend10184, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10177 = new_Method_with(PArray10178, empty_Array, empty_Array, PThreadedCode10179, 2, PSend10184, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod10177, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray10186 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10188 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode10187 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend10188, (Optr)&t_method_return);
    Method PMethod10185 = new_Method_with(PArray10186, empty_Array, empty_Array, PThreadedCode10187, 1, PSend10188);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod10185, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray10190 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10193 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation10192 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_10193);
    Array PArray10191 = new_Array_with(1, (Optr)PAnnotation10192);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10195 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10194 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10195, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10189 = new_NativeMethod_with(PArray10190, empty_Array, PArray10191, PThreadedCode10194, 2, PSend10195, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod10189, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray10197 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10199 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode10198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend10199, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10196 = new_Method_with(PArray10197, empty_Array, empty_Array, PThreadedCode10198, 2, PSend10199, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod10196, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10203 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation10202 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_10203);
    Array PArray10201 = new_Array_with(1, (Optr)PAnnotation10202);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10205 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10204 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10205, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10200 = new_NativeMethod_with(empty_Array, empty_Array, PArray10201, PThreadedCode10204, 2, PSend10205, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod10200, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend10208 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode10207 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10208, (Optr)&t_method_return);
    Method PMethod10206 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10207, 1, PSend10208);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod10206, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10210 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10211 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10214 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10213 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10214);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10215 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10218 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10217 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10218, (Optr)&t_block_return);
    Block PBlock10216 = new_Block_with(empty_Array, empty_Array, PThreadedCode10217, 1, PSend10218);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10220 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10223 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10222 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10223);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray10225 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10227 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10228 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10227);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10229 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10230 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10229);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10232 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10231 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10232);
    // on:. 
    Send PSend10234 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10233 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10234);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend10238 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10237 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10238);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10241 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10242 = new_Send((Optr)PSend10241, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10245 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_10246 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10246_Const = new_Constant((Optr)char_10246);
    // =. 
    Send PSend10247 = new_Send((Optr)PSend10245, SMB__equals_, 1, (Optr)char_10246_Const);
    Array PThreadedCode10244 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10245, (Optr)&t_push1, (Optr)char_10246, (Optr)&t_send1, (Optr)PSend10247, (Optr)&t_block_return);
    Block PBlock10243 = new_Block_with(empty_Array, empty_Array, PThreadedCode10244, 1, PSend10247);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10248 = new_Send((Optr)PSend10242, SMB_and_, 1, (Optr)PBlock10243);
    Array PThreadedCode10240 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10241, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10242, (Optr)&t_push_closure, (Optr)PBlock10243, (Optr)&t_send1, (Optr)PSend10248, (Optr)&t_block_return);
    Block PBlock10239 = new_Block_with(empty_Array, empty_Array, PThreadedCode10240, 1, PSend10248);
    String string_10251 = new_String(L"Received ");
    Constant string_10251_Const = new_Constant((Optr)string_10251);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10252 = new_Send((Optr)string_10251_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_10253 = new_String(L", handle=");
    Constant string_10253_Const = new_Constant((Optr)string_10253);
    // ,. 
    Send PSend10254 = new_Send((Optr)PSend10252, SMB__append_, 1, (Optr)string_10253_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10255 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10256 = new_Send((Optr)PSend10254, SMB__append_, 1, (Optr)PSend10255);
    // warn:. 
    Send PSend10257 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10256);
    String string_10258 = new_String(L"Received ");
    // size. 
    Send PSend10259 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10258_Const = new_Constant((Optr)string_10258);
    // ,. 
    Send PSend10260 = new_Send((Optr)string_10258_Const, SMB__append_, 1, (Optr)PSend10259);
    String string_10261 = new_String(L" bytes");
    Constant string_10261_Const = new_Constant((Optr)string_10261);
    // ,. 
    Send PSend10262 = new_Send((Optr)PSend10260, SMB__append_, 1, (Optr)string_10261_Const);
    String string_10263 = new_String(L", handle=");
    Constant string_10263_Const = new_Constant((Optr)string_10263);
    // ,. 
    Send PSend10264 = new_Send((Optr)PSend10262, SMB__append_, 1, (Optr)string_10263_Const);
    // hash. 
    Send PSend10265 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10266 = new_Send((Optr)PSend10264, SMB__append_, 1, (Optr)PSend10265);
    // warn:. 
    Send PSend10267 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10266);
    String string_10268 = new_String(L"Received ");
    // size. 
    Send PSend10269 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10268_Const = new_Constant((Optr)string_10268);
    // ,. 
    Send PSend10270 = new_Send((Optr)string_10268_Const, SMB__append_, 1, (Optr)PSend10269);
    String string_10271 = new_String(L" bytes");
    Constant string_10271_Const = new_Constant((Optr)string_10271);
    // ,. 
    Send PSend10272 = new_Send((Optr)PSend10270, SMB__append_, 1, (Optr)string_10271_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10273 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10272);
    // readMessage. 
    Send PSend10275 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10274 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10275);
    Array PThreadedCode10250 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10251, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend10252, (Optr)&t_push1, (Optr)string_10253, (Optr)&t_send1, (Optr)PSend10254, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10255, (Optr)&t_send1, (Optr)PSend10256, (Optr)&t_send1, (Optr)PSend10257, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10258, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10259, (Optr)&t_send1, (Optr)PSend10260, (Optr)&t_push1, (Optr)string_10261, (Optr)&t_send1, (Optr)PSend10262, (Optr)&t_push1, (Optr)string_10263, (Optr)&t_send1, (Optr)PSend10264, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10265, (Optr)&t_send1, (Optr)PSend10266, (Optr)&t_send1, (Optr)PSend10267, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10268, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10269, (Optr)&t_send1, (Optr)PSend10270, (Optr)&t_push1, (Optr)string_10271, (Optr)&t_send1, (Optr)PSend10272, (Optr)&t_send1, (Optr)PSend10273, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10274, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10275, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10249 = new_Block_with(empty_Array, empty_Array, PThreadedCode10250, 4, PSend10257, PSend10267, PSend10273, PAssign10274);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10276 = new_Send((Optr)PBlock10239, SMB_whileFalse_, 1, (Optr)PBlock10249);
    Array PThreadedCode10236 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10237, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10239, (Optr)&t_push_closure, (Optr)PBlock10249, (Optr)&t_send1, (Optr)PSend10276, (Optr)&t_block_return);
    Block PBlock10235 = new_Block_with(empty_Array, empty_Array, PThreadedCode10236, 2, PAssign10237, PSend10276);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10278 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10280 = new_String(L"Error: Network Connection closed");
    Constant string_10280_Const = new_Constant((Optr)string_10280);
    // warn:. 
    Send PSend10281 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10280_Const);
    String string_10282 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10283 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10282_Const = new_Constant((Optr)string_10282);
    // ,. 
    Send PSend10284 = new_Send((Optr)string_10282_Const, SMB__append_, 1, (Optr)PSend10283);
    // warn:. 
    Send PSend10285 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10284);
    Array PThreadedCode10279 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10280, (Optr)&t_send1, (Optr)PSend10281, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10282, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10283, (Optr)&t_send1, (Optr)PSend10284, (Optr)&t_send1, (Optr)PSend10285, (Optr)&t_method_return);
    Block PBlock10277 = new_Block_with(PArray10278, empty_Array, PThreadedCode10279, 2, PSend10281, PSend10285);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10286 = new_Send((Optr)PBlock10235, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10277);
    String string_10287 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10288 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10287_Const = new_Constant((Optr)string_10287);
    // ,. 
    Send PSend10289 = new_Send((Optr)string_10287_Const, SMB__append_, 1, (Optr)PSend10288);
    // warn:. 
    Send PSend10290 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10289);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10291 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10292 = new_String(L"Status ");
    // isConnected. 
    Send PSend10293 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10292_Const = new_Constant((Optr)string_10292);
    // ,. 
    Send PSend10294 = new_Send((Optr)string_10292_Const, SMB__append_, 1, (Optr)PSend10293);
    // warn:. 
    Send PSend10295 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10294);
    Array PThreadedCode10226 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10227, (Optr)&t_send1, (Optr)PSend10228, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10229, (Optr)&t_send1, (Optr)PSend10230, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10231, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10232, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10233, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10234, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10235, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10277, (Optr)&t_send2, (Optr)PSend10286, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10287, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10288, (Optr)&t_send1, (Optr)PSend10289, (Optr)&t_send1, (Optr)PSend10290, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10291, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10292, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10293, (Optr)&t_send1, (Optr)PSend10294, (Optr)&t_send1, (Optr)PSend10295, (Optr)&t_method_return);
    Block PBlock10224 = new_Block_with(empty_Array, PArray10225, PThreadedCode10226, 8, PSend10228, PSend10230, PAssign10231, PAssign10233, PSend10286, PSend10290, PSend10291, PSend10295);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10296 = new_Send((Optr)PBlock10224, SMB_fork, 0);
    Array PThreadedCode10221 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10222, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10223, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10224, (Optr)&t_send0, (Optr)PSend10296, (Optr)&t_method_return);
    Block PBlock10219 = new_Block_with(empty_Array, PArray10220, PThreadedCode10221, 2, PAssign10222, PSend10296);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10297 = new_Send((Optr)PBlock10216, SMB_whileTrue_, 1, (Optr)PBlock10219);
    Array PThreadedCode10212 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10213, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10214, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10215, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10216, (Optr)&t_push_closure, (Optr)PBlock10219, (Optr)&t_send1, (Optr)PSend10297, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10209 = new_Method_with(PArray10210, PArray10211, empty_Array, PThreadedCode10212, 4, PAssign10213, PSend10215, PSend10297, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod10209, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket_, MC_SMB_testWebSocket_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10299 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10300 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10303 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10302 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10303);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10304 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10306 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10305 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10306);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10308 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10307 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10308);
    String string_10309 = new_String(L"* read from ");
    Constant string_10309_Const = new_Constant((Optr)string_10309);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10310 = new_Send((Optr)string_10309_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10311 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10310);
    String string_10312 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10313 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10312_Const = new_Constant((Optr)string_10312);
    // ,. 
    Send PSend10314 = new_Send((Optr)string_10312_Const, SMB__append_, 1, (Optr)PSend10313);
    String string_10315 = new_String(L" bytes");
    Constant string_10315_Const = new_Constant((Optr)string_10315);
    // ,. 
    Send PSend10316 = new_Send((Optr)PSend10314, SMB__append_, 1, (Optr)string_10315_Const);
    // warn:. 
    Send PSend10317 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10316);
    String string_10318 = new_String(L"Received ");
    // size. 
    Send PSend10319 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10318_Const = new_Constant((Optr)string_10318);
    // ,. 
    Send PSend10320 = new_Send((Optr)string_10318_Const, SMB__append_, 1, (Optr)PSend10319);
    String string_10321 = new_String(L" bytes");
    Constant string_10321_Const = new_Constant((Optr)string_10321);
    // ,. 
    Send PSend10322 = new_Send((Optr)PSend10320, SMB__append_, 1, (Optr)string_10321_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10323 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10322);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10324 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10325 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10301 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10302, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10303, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10304, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10305, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10307, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10309, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10310, (Optr)&t_send1, (Optr)PSend10311, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10312, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10313, (Optr)&t_send1, (Optr)PSend10314, (Optr)&t_push1, (Optr)string_10315, (Optr)&t_send1, (Optr)PSend10316, (Optr)&t_send1, (Optr)PSend10317, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10318, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10319, (Optr)&t_send1, (Optr)PSend10320, (Optr)&t_push1, (Optr)string_10321, (Optr)&t_send1, (Optr)PSend10322, (Optr)&t_send1, (Optr)PSend10323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10324, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10325, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10298 = new_Method_with(PArray10299, PArray10300, empty_Array, PThreadedCode10301, 10, PAssign10302, PSend10304, PAssign10305, PAssign10307, PSend10311, PSend10317, PSend10323, PSend10324, PSend10325, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10298, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10328 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10327 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10328, (Optr)&t_method_return);
    Method PMethod10326 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10327, 1, PSend10328);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10326, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10330 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10330, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10329, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10332 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10333 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10336 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10335 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10336);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10337 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10340 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10339 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10340, (Optr)&t_block_return);
    Block PBlock10338 = new_Block_with(empty_Array, empty_Array, PThreadedCode10339, 1, PSend10340);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10342 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10345 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10344 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10345);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray10347 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10349 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10350 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10349);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10351 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10352 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10351);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10354 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10353 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10354);
    // on:. 
    Send PSend10356 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10355 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10356);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray10358 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10360 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10361 = new_Send((Optr)PSend10360, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend10364 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend10365 = new_Send((Optr)PSend10364, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode10363 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10364, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend10365, (Optr)&t_block_return);
    Block PBlock10362 = new_Block_with(empty_Array, empty_Array, PThreadedCode10363, 1, PSend10365);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10366 = new_Send((Optr)PSend10361, SMB_and_, 1, (Optr)PBlock10362);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend10370 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode10369 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10370, (Optr)&t_block_return);
    Block PBlock10368 = new_Block_with(empty_Array, empty_Array, PThreadedCode10369, 1, PSend10370);
    String string_10373 = new_String(L"Received ");
    Constant string_10373_Const = new_Constant((Optr)string_10373);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10374 = new_Send((Optr)string_10373_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_10375 = new_String(L", handle=");
    Constant string_10375_Const = new_Constant((Optr)string_10375);
    // ,. 
    Send PSend10376 = new_Send((Optr)PSend10374, SMB__append_, 1, (Optr)string_10375_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10377 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10378 = new_Send((Optr)PSend10376, SMB__append_, 1, (Optr)PSend10377);
    // warn:. 
    Send PSend10379 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10378);
    String string_10380 = new_String(L"Received ");
    // size. 
    Send PSend10381 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10380_Const = new_Constant((Optr)string_10380);
    // ,. 
    Send PSend10382 = new_Send((Optr)string_10380_Const, SMB__append_, 1, (Optr)PSend10381);
    String string_10383 = new_String(L" bytes");
    Constant string_10383_Const = new_Constant((Optr)string_10383);
    // ,. 
    Send PSend10384 = new_Send((Optr)PSend10382, SMB__append_, 1, (Optr)string_10383_Const);
    String string_10385 = new_String(L", handle=");
    Constant string_10385_Const = new_Constant((Optr)string_10385);
    // ,. 
    Send PSend10386 = new_Send((Optr)PSend10384, SMB__append_, 1, (Optr)string_10385_Const);
    // hash. 
    Send PSend10387 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10388 = new_Send((Optr)PSend10386, SMB__append_, 1, (Optr)PSend10387);
    // warn:. 
    Send PSend10389 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10388);
    String string_10390 = new_String(L"Received ");
    // size. 
    Send PSend10391 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10390_Const = new_Constant((Optr)string_10390);
    // ,. 
    Send PSend10392 = new_Send((Optr)string_10390_Const, SMB__append_, 1, (Optr)PSend10391);
    String string_10393 = new_String(L" bytes");
    Constant string_10393_Const = new_Constant((Optr)string_10393);
    // ,. 
    Send PSend10394 = new_Send((Optr)PSend10392, SMB__append_, 1, (Optr)string_10393_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10395 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10394);
    Array PThreadedCode10372 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10373, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend10374, (Optr)&t_push1, (Optr)string_10375, (Optr)&t_send1, (Optr)PSend10376, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10377, (Optr)&t_send1, (Optr)PSend10378, (Optr)&t_send1, (Optr)PSend10379, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10380, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10381, (Optr)&t_send1, (Optr)PSend10382, (Optr)&t_push1, (Optr)string_10383, (Optr)&t_send1, (Optr)PSend10384, (Optr)&t_push1, (Optr)string_10385, (Optr)&t_send1, (Optr)PSend10386, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10387, (Optr)&t_send1, (Optr)PSend10388, (Optr)&t_send1, (Optr)PSend10389, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10390, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10391, (Optr)&t_send1, (Optr)PSend10392, (Optr)&t_push1, (Optr)string_10393, (Optr)&t_send1, (Optr)PSend10394, (Optr)&t_send1, (Optr)PSend10395, (Optr)&t_block_return);
    Block PBlock10371 = new_Block_with(empty_Array, empty_Array, PThreadedCode10372, 3, PSend10379, PSend10389, PSend10395);
    // ifTrue:ifFalse:. 
    Send PSend10367 = new_Send((Optr)PSend10366, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10368, (Optr)PBlock10371);
    Array PThreadedCode10359 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10360, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10361, (Optr)&t_push_closure, (Optr)PBlock10362, (Optr)&t_send1, (Optr)PSend10366, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10367, (Optr)PBlock10368, (Optr)PBlock10371, (Optr)&t_method_return);
    Block PBlock10357 = new_Block_with(PArray10358, empty_Array, PThreadedCode10359, 1, PSend10367);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10396 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock10357);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10398 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10400 = new_String(L"Error: Network Connection closed");
    Constant string_10400_Const = new_Constant((Optr)string_10400);
    // warn:. 
    Send PSend10401 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10400_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10402 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10403 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10404 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10403_Const = new_Constant((Optr)string_10403);
    // ,. 
    Send PSend10405 = new_Send((Optr)string_10403_Const, SMB__append_, 1, (Optr)PSend10404);
    // warn:. 
    Send PSend10406 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10405);
    Array PThreadedCode10399 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10400, (Optr)&t_send1, (Optr)PSend10401, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10402, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10403, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10404, (Optr)&t_send1, (Optr)PSend10405, (Optr)&t_send1, (Optr)PSend10406, (Optr)&t_method_return);
    Block PBlock10397 = new_Block_with(PArray10398, empty_Array, PThreadedCode10399, 3, PSend10401, PSend10402, PSend10406);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10407 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10397);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10409 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10411 = new_String(L"Will now try to close connection");
    Constant string_10411_Const = new_Constant((Optr)string_10411);
    // warn:. 
    Send PSend10412 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10411_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10413 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10414 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10415 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10414_Const = new_Constant((Optr)string_10414);
    // ,. 
    Send PSend10416 = new_Send((Optr)string_10414_Const, SMB__append_, 1, (Optr)PSend10415);
    // warn:. 
    Send PSend10417 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10416);
    Array PThreadedCode10410 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10411, (Optr)&t_send1, (Optr)PSend10412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10413, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10414, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10415, (Optr)&t_send1, (Optr)PSend10416, (Optr)&t_send1, (Optr)PSend10417, (Optr)&t_method_return);
    Block PBlock10408 = new_Block_with(PArray10409, empty_Array, PThreadedCode10410, 3, PSend10412, PSend10413, PSend10417);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10418 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10408);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10419 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode10348 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10349, (Optr)&t_send1, (Optr)PSend10350, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10351, (Optr)&t_send1, (Optr)PSend10352, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10353, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10354, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10355, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10357, (Optr)&t_send1, (Optr)PSend10396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10397, (Optr)&t_send1, (Optr)PSend10407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10408, (Optr)&t_send1, (Optr)PSend10418, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10419, (Optr)&t_method_return);
    Block PBlock10346 = new_Block_with(empty_Array, PArray10347, PThreadedCode10348, 8, PSend10350, PSend10352, PAssign10353, PAssign10355, PSend10396, PSend10407, PSend10418, PSend10419);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10420 = new_Send((Optr)PBlock10346, SMB_fork, 0);
    Array PThreadedCode10343 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10344, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10345, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10346, (Optr)&t_send0, (Optr)PSend10420, (Optr)&t_method_return);
    Block PBlock10341 = new_Block_with(empty_Array, PArray10342, PThreadedCode10343, 2, PAssign10344, PSend10420);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10421 = new_Send((Optr)PBlock10338, SMB_whileTrue_, 1, (Optr)PBlock10341);
    Array PThreadedCode10334 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10335, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10336, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10337, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10338, (Optr)&t_push_closure, (Optr)PBlock10341, (Optr)&t_send1, (Optr)PSend10421, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10331 = new_Method_with(PArray10332, PArray10333, empty_Array, PThreadedCode10334, 4, PAssign10335, PSend10337, PSend10421, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod10331, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10424 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10424_Const = new_Constant((Optr)string_10424);
    // require:at:. 
    Send PSend10425 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10424_Const);
    Array PThreadedCode10423 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10424, (Optr)&t_send2, (Optr)PSend10425, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10423, 2, PSend10425, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10422, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10427 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10428 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10431 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10430 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10431);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10432 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10435 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10434 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10435, (Optr)&t_block_return);
    Block PBlock10433 = new_Block_with(empty_Array, empty_Array, PThreadedCode10434, 1, PSend10435);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10437 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10440 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10439 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10440);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10444 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10443 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10444);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10447 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10246 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10246_Const = new_Constant((Optr)char_10246);
    // =. 
    Send PSend10448 = new_Send((Optr)PSend10447, SMB__equals_, 1, (Optr)char_10246_Const);
    Array PThreadedCode10446 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10447, (Optr)&t_push1, (Optr)char_10246, (Optr)&t_send1, (Optr)PSend10448, (Optr)&t_block_return);
    Block PBlock10445 = new_Block_with(empty_Array, empty_Array, PThreadedCode10446, 1, PSend10448);
    String string_10451 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10452 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10451_Const = new_Constant((Optr)string_10451);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10453 = new_Send((Optr)string_10451_Const, SMB__append_, 1, (Optr)PSend10452);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10454 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10453);
    String string_10455 = new_String(L"Received ");
    Constant string_10455_Const = new_Constant((Optr)string_10455);
    // ,. 
    Send PSend10456 = new_Send((Optr)string_10455_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10457 = new_String(L", handle=");
    Constant string_10457_Const = new_Constant((Optr)string_10457);
    // ,. 
    Send PSend10458 = new_Send((Optr)PSend10456, SMB__append_, 1, (Optr)string_10457_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10459 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10460 = new_Send((Optr)PSend10458, SMB__append_, 1, (Optr)PSend10459);
    // warn:. 
    Send PSend10461 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10460);
    String string_10462 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10463 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10462_Const = new_Constant((Optr)string_10462);
    // ,. 
    Send PSend10464 = new_Send((Optr)string_10462_Const, SMB__append_, 1, (Optr)PSend10463);
    String string_10465 = new_String(L" bytes");
    Constant string_10465_Const = new_Constant((Optr)string_10465);
    // ,. 
    Send PSend10466 = new_Send((Optr)PSend10464, SMB__append_, 1, (Optr)string_10465_Const);
    String string_10467 = new_String(L", handle=");
    Constant string_10467_Const = new_Constant((Optr)string_10467);
    // ,. 
    Send PSend10468 = new_Send((Optr)PSend10466, SMB__append_, 1, (Optr)string_10467_Const);
    // hash. 
    Send PSend10469 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10470 = new_Send((Optr)PSend10468, SMB__append_, 1, (Optr)PSend10469);
    // warn:. 
    Send PSend10471 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10470);
    String string_10472 = new_String(L"Received ");
    // size. 
    Send PSend10473 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10472_Const = new_Constant((Optr)string_10472);
    // ,. 
    Send PSend10474 = new_Send((Optr)string_10472_Const, SMB__append_, 1, (Optr)PSend10473);
    String string_10475 = new_String(L" bytes");
    Constant string_10475_Const = new_Constant((Optr)string_10475);
    // ,. 
    Send PSend10476 = new_Send((Optr)PSend10474, SMB__append_, 1, (Optr)string_10475_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10477 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10476);
    // receive. 
    Send PSend10479 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10478 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10479);
    Array PThreadedCode10450 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10451, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10452, (Optr)&t_send1, (Optr)PSend10453, (Optr)&t_send1, (Optr)PSend10454, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10455, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10456, (Optr)&t_push1, (Optr)string_10457, (Optr)&t_send1, (Optr)PSend10458, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10459, (Optr)&t_send1, (Optr)PSend10460, (Optr)&t_send1, (Optr)PSend10461, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10462, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10463, (Optr)&t_send1, (Optr)PSend10464, (Optr)&t_push1, (Optr)string_10465, (Optr)&t_send1, (Optr)PSend10466, (Optr)&t_push1, (Optr)string_10467, (Optr)&t_send1, (Optr)PSend10468, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10469, (Optr)&t_send1, (Optr)PSend10470, (Optr)&t_send1, (Optr)PSend10471, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10472, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10473, (Optr)&t_send1, (Optr)PSend10474, (Optr)&t_push1, (Optr)string_10475, (Optr)&t_send1, (Optr)PSend10476, (Optr)&t_send1, (Optr)PSend10477, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10478, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10479, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10449 = new_Block_with(empty_Array, empty_Array, PThreadedCode10450, 5, PSend10454, PSend10461, PSend10471, PSend10477, PAssign10478);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10480 = new_Send((Optr)PBlock10445, SMB_whileFalse_, 1, (Optr)PBlock10449);
    String string_10481 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10482 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10481_Const = new_Constant((Optr)string_10481);
    // ,. 
    Send PSend10483 = new_Send((Optr)string_10481_Const, SMB__append_, 1, (Optr)PSend10482);
    // warn:. 
    Send PSend10484 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10483);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10485 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10486 = new_String(L"Status ");
    // isConnected. 
    Send PSend10487 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10486_Const = new_Constant((Optr)string_10486);
    // ,. 
    Send PSend10488 = new_Send((Optr)string_10486_Const, SMB__append_, 1, (Optr)PSend10487);
    // warn:. 
    Send PSend10489 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10488);
    Array PThreadedCode10442 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10443, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10444, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10445, (Optr)&t_push_closure, (Optr)PBlock10449, (Optr)&t_send1, (Optr)PSend10480, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10481, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10482, (Optr)&t_send1, (Optr)PSend10483, (Optr)&t_send1, (Optr)PSend10484, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10485, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10486, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10487, (Optr)&t_send1, (Optr)PSend10488, (Optr)&t_send1, (Optr)PSend10489, (Optr)&t_block_return);
    Block PBlock10441 = new_Block_with(empty_Array, empty_Array, PThreadedCode10442, 5, PAssign10443, PSend10480, PSend10484, PSend10485, PSend10489);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10490 = new_Send((Optr)PBlock10441, SMB_fork, 0);
    Array PThreadedCode10438 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10439, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10440, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10441, (Optr)&t_send0, (Optr)PSend10490, (Optr)&t_method_return);
    Block PBlock10436 = new_Block_with(empty_Array, PArray10437, PThreadedCode10438, 2, PAssign10439, PSend10490);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10491 = new_Send((Optr)PBlock10433, SMB_whileTrue_, 1, (Optr)PBlock10436);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10492 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10429 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10430, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10431, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10432, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10433, (Optr)&t_push_closure, (Optr)PBlock10436, (Optr)&t_send1, (Optr)PSend10491, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10492, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10426 = new_Method_with(PArray10427, PArray10428, empty_Array, PThreadedCode10429, 5, PAssign10430, PSend10432, PSend10491, PSend10492, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10426, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10494 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10495 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10498 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10497 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10498);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10499 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10502 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10501 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10502, (Optr)&t_block_return);
    Block PBlock10500 = new_Block_with(empty_Array, empty_Array, PThreadedCode10501, 1, PSend10502);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10504 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10507 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10506 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10507);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10510 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10509 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10510, (Optr)&t_block_return);
    Block PBlock10508 = new_Block_with(empty_Array, empty_Array, PThreadedCode10509, 1, PSend10510);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10511 = new_Send((Optr)PBlock10508, SMB_fork, 0);
    Array PThreadedCode10505 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10506, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10507, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10508, (Optr)&t_send0, (Optr)PSend10511, (Optr)&t_method_return);
    Block PBlock10503 = new_Block_with(empty_Array, PArray10504, PThreadedCode10505, 2, PAssign10506, PSend10511);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10512 = new_Send((Optr)PBlock10500, SMB_whileTrue_, 1, (Optr)PBlock10503);
    Array PThreadedCode10496 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10497, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10498, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10499, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10500, (Optr)&t_push_closure, (Optr)PBlock10503, (Optr)&t_send1, (Optr)PSend10512, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10493 = new_Method_with(PArray10494, PArray10495, empty_Array, PThreadedCode10496, 4, PAssign10497, PSend10499, PSend10512, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10493, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10514 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10515 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10517 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10518 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10517);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10519 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10520 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10519);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10522 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10521 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10522);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10525 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10527 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10526 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10527);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10530 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10531 = new_Send((Optr)PSend10530, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10534 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10246 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10246_Const = new_Constant((Optr)char_10246);
    // =. 
    Send PSend10535 = new_Send((Optr)PSend10534, SMB__equals_, 1, (Optr)char_10246_Const);
    Array PThreadedCode10533 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10534, (Optr)&t_push1, (Optr)char_10246, (Optr)&t_send1, (Optr)PSend10535, (Optr)&t_block_return);
    Block PBlock10532 = new_Block_with(empty_Array, empty_Array, PThreadedCode10533, 1, PSend10535);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10536 = new_Send((Optr)PSend10531, SMB_and_, 1, (Optr)PBlock10532);
    Array PThreadedCode10529 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10530, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10531, (Optr)&t_push_closure, (Optr)PBlock10532, (Optr)&t_send1, (Optr)PSend10536, (Optr)&t_block_return);
    Block PBlock10528 = new_Block_with(empty_Array, empty_Array, PThreadedCode10529, 1, PSend10536);
    String string_10539 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10540 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10539_Const = new_Constant((Optr)string_10539);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10541 = new_Send((Optr)string_10539_Const, SMB__append_, 1, (Optr)PSend10540);
    // warn:. 
    Send PSend10542 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10541);
    String string_10543 = new_String(L"Received ");
    Constant string_10543_Const = new_Constant((Optr)string_10543);
    // ,. 
    Send PSend10544 = new_Send((Optr)string_10543_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10545 = new_String(L", handle=");
    Constant string_10545_Const = new_Constant((Optr)string_10545);
    // ,. 
    Send PSend10546 = new_Send((Optr)PSend10544, SMB__append_, 1, (Optr)string_10545_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10547 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10548 = new_Send((Optr)PSend10546, SMB__append_, 1, (Optr)PSend10547);
    // warn:. 
    Send PSend10549 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10548);
    String string_10550 = new_String(L"Received ");
    // size. 
    Send PSend10551 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10550_Const = new_Constant((Optr)string_10550);
    // ,. 
    Send PSend10552 = new_Send((Optr)string_10550_Const, SMB__append_, 1, (Optr)PSend10551);
    String string_10553 = new_String(L" bytes");
    Constant string_10553_Const = new_Constant((Optr)string_10553);
    // ,. 
    Send PSend10554 = new_Send((Optr)PSend10552, SMB__append_, 1, (Optr)string_10553_Const);
    String string_10555 = new_String(L", handle=");
    Constant string_10555_Const = new_Constant((Optr)string_10555);
    // ,. 
    Send PSend10556 = new_Send((Optr)PSend10554, SMB__append_, 1, (Optr)string_10555_Const);
    // hash. 
    Send PSend10557 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10558 = new_Send((Optr)PSend10556, SMB__append_, 1, (Optr)PSend10557);
    // warn:. 
    Send PSend10559 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10558);
    String string_10560 = new_String(L"Received ");
    // size. 
    Send PSend10561 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10560_Const = new_Constant((Optr)string_10560);
    // ,. 
    Send PSend10562 = new_Send((Optr)string_10560_Const, SMB__append_, 1, (Optr)PSend10561);
    String string_10563 = new_String(L" bytes");
    Constant string_10563_Const = new_Constant((Optr)string_10563);
    // ,. 
    Send PSend10564 = new_Send((Optr)PSend10562, SMB__append_, 1, (Optr)string_10563_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10565 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10564);
    // receiveDataIfAvailable. 
    Send PSend10566 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10568 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10567 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10568);
    Array PThreadedCode10538 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10539, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10540, (Optr)&t_send1, (Optr)PSend10541, (Optr)&t_send1, (Optr)PSend10542, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10543, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10544, (Optr)&t_push1, (Optr)string_10545, (Optr)&t_send1, (Optr)PSend10546, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10547, (Optr)&t_send1, (Optr)PSend10548, (Optr)&t_send1, (Optr)PSend10549, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10550, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10551, (Optr)&t_send1, (Optr)PSend10552, (Optr)&t_push1, (Optr)string_10553, (Optr)&t_send1, (Optr)PSend10554, (Optr)&t_push1, (Optr)string_10555, (Optr)&t_send1, (Optr)PSend10556, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10557, (Optr)&t_send1, (Optr)PSend10558, (Optr)&t_send1, (Optr)PSend10559, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10560, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10561, (Optr)&t_send1, (Optr)PSend10562, (Optr)&t_push1, (Optr)string_10563, (Optr)&t_send1, (Optr)PSend10564, (Optr)&t_send1, (Optr)PSend10565, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10566, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10567, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10568, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10537 = new_Block_with(empty_Array, empty_Array, PThreadedCode10538, 6, PSend10542, PSend10549, PSend10559, PSend10565, PSend10566, PAssign10567);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10569 = new_Send((Optr)PBlock10528, SMB_whileFalse_, 1, (Optr)PBlock10537);
    Array PThreadedCode10524 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10525, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10526, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10527, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10528, (Optr)&t_push_closure, (Optr)PBlock10537, (Optr)&t_send1, (Optr)PSend10569, (Optr)&t_block_return);
    Block PBlock10523 = new_Block_with(empty_Array, empty_Array, PThreadedCode10524, 3, PSend10525, PAssign10526, PSend10569);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10571 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10573 = new_String(L"Error: Network Connection closed");
    Constant string_10573_Const = new_Constant((Optr)string_10573);
    // warn:. 
    Send PSend10574 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10573_Const);
    String string_10575 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10576 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10575_Const = new_Constant((Optr)string_10575);
    // ,. 
    Send PSend10577 = new_Send((Optr)string_10575_Const, SMB__append_, 1, (Optr)PSend10576);
    // warn:. 
    Send PSend10578 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10577);
    Array PThreadedCode10572 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10573, (Optr)&t_send1, (Optr)PSend10574, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10575, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10576, (Optr)&t_send1, (Optr)PSend10577, (Optr)&t_send1, (Optr)PSend10578, (Optr)&t_method_return);
    Block PBlock10570 = new_Block_with(PArray10571, empty_Array, PThreadedCode10572, 2, PSend10574, PSend10578);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10579 = new_Send((Optr)PBlock10523, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10570);
    String string_10580 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10581 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10580_Const = new_Constant((Optr)string_10580);
    // ,. 
    Send PSend10582 = new_Send((Optr)string_10580_Const, SMB__append_, 1, (Optr)PSend10581);
    // warn:. 
    Send PSend10583 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10582);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10584 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10585 = new_String(L"Status ");
    // isConnected. 
    Send PSend10586 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10585_Const = new_Constant((Optr)string_10585);
    // ,. 
    Send PSend10587 = new_Send((Optr)string_10585_Const, SMB__append_, 1, (Optr)PSend10586);
    // warn:. 
    Send PSend10588 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10587);
    Array PThreadedCode10516 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10517, (Optr)&t_send1, (Optr)PSend10518, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10519, (Optr)&t_send1, (Optr)PSend10520, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10521, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10522, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10523, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10570, (Optr)&t_send2, (Optr)PSend10579, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10580, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10581, (Optr)&t_send1, (Optr)PSend10582, (Optr)&t_send1, (Optr)PSend10583, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10584, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10585, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10586, (Optr)&t_send1, (Optr)PSend10587, (Optr)&t_send1, (Optr)PSend10588, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10513 = new_Method_with(PArray10514, PArray10515, empty_Array, PThreadedCode10516, 8, PSend10518, PSend10520, PAssign10521, PSend10579, PSend10583, PSend10584, PSend10588, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10513, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10590 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10589 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10590, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10589, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_test, MC_SMB_test);
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
    init_SMB_primSocketRemoteAddress();
    init_SMB_isOtherEndClosed();
    init_SMB_destroy();
    init_SMB_primSocketRemotePort();
    init_SMB_remotePort();
    init_SMB_isConnected();
    init_SMB_primClose();
    init_SMB_primWrite_();
    init_SMB_receiveSomeDataInto_startingAt_();
    init_SMB_statusString();
    init_SMB_accept();
    init_SMB_primInit();
    init_SMB_receive();
    init_SMB_primReadyToAccept();
    init_SMB_closeAndDestroy_();
    init_SMB_receiveDataInto_startingAt_();
    init_SMB_primReceive_();
    init_SMB_listenOn_backlogSize_();
    init_SMB_primStatus();
    init_SMB_remoteAddress();
    init_class_SMB_testWebSocket_();
    init_class_SMB_testOn_();
    init_class_SMB_newTCP();
    init_class_SMB_standardTimeout();
    init_class_SMB_testWebSocket2_();
    init_class_SMB_initialize();
    init_class_SMB_testServer_();
    init_class_SMB_testSocketStream_();
    init_class_SMB_value_();
    init_class_SMB_test();
    
}