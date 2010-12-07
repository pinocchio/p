#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9880 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9882 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9881 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9882, (Optr)&t_method_return);
    Method PMethod9879 = new_Method_with(PArray9880, empty_Array, empty_Array, PThreadedCode9881, 1, PSend9882);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9879, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9886 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9885 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9886);
    Array PArray9884 = new_Array_with(1, (Optr)PAnnotation9885);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9888 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9887 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9888, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9883 = new_NativeMethod_with(empty_Array, empty_Array, PArray9884, PThreadedCode9887, 2, PSend9888, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9883, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9890 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9894 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9893 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9894, (Optr)&t_block_return);
    Block PBlock9892 = new_Block_with(empty_Array, empty_Array, PThreadedCode9893, 1, PSend9894);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9897 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9898 = new_Send((Optr)PSend9897, SMB_yield, 0);
    Array PThreadedCode9896 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9897, (Optr)&t_send0, (Optr)PSend9898, (Optr)&t_block_return);
    Block PBlock9895 = new_Block_with(empty_Array, empty_Array, PThreadedCode9896, 1, PSend9898);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9899 = new_Send((Optr)PBlock9892, SMB_whileFalse_, 1, (Optr)PBlock9895);
    String string_9900 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9900_Const = new_Constant((Optr)string_9900);
    // warn:. 
    Send PSend9901 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9900_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9902 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9891 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9892, (Optr)&t_push_closure, (Optr)PBlock9895, (Optr)&t_send1, (Optr)PSend9899, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9900, (Optr)&t_send1, (Optr)PSend9901, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9902, (Optr)&t_method_return);
    Method PMethod9889 = new_Method_with(PArray9890, empty_Array, empty_Array, PThreadedCode9891, 3, PSend9899, PSend9901, PSend9902);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9889, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9904 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9907 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9906 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9907);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9908 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9905 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9906, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9907, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9908, (Optr)&t_method_return);
    Method PMethod9903 = new_Method_with(empty_Array, PArray9904, empty_Array, PThreadedCode9905, 2, PAssign9906, PSend9908);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9903, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9910 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9912 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9911 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9912, (Optr)&t_method_return);
    Method PMethod9909 = new_Method_with(PArray9910, empty_Array, empty_Array, PThreadedCode9911, 1, PSend9912);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9909, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9914 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9917 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9916 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9917);
    Array PArray9915 = new_Array_with(1, (Optr)PAnnotation9916);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9919 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9918 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9919, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9913 = new_NativeMethod_with(PArray9914, empty_Array, PArray9915, PThreadedCode9918, 2, PSend9919, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9913, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9923 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9922 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9923);
    Array PArray9921 = new_Array_with(1, (Optr)PAnnotation9922);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9925 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9924 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9925, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9920 = new_NativeMethod_with(empty_Array, empty_Array, PArray9921, PThreadedCode9924, 2, PSend9925, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9920, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9927 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9928 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9934 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9933 = new_Send((Optr)PSend9934, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9932 = new_Send((Optr)PSend9933, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9931 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9932);
    Assign PAssign9930 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9931);
    // size. 
    Send PSend9936 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9935 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9936);
    String string_9937 = new_String(L"-Data: ");
    Constant string_9937_Const = new_Constant((Optr)string_9937);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9938 = new_Send((Optr)string_9937_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9939 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9938);
    String string_9940 = new_String(L"-Size: ");
    Constant string_9940_Const = new_Constant((Optr)string_9940);
    // ,. 
    Send PSend9941 = new_Send((Optr)string_9940_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend9942 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9941);
    String string_9943 = new_String(L"-Buffer size ");
    // size. 
    Send PSend9944 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_9943_Const = new_Constant((Optr)string_9943);
    // ,. 
    Send PSend9945 = new_Send((Optr)string_9943_Const, SMB__append_, 1, (Optr)PSend9944);
    // warn:. 
    Send PSend9946 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9945);
    String string_9947 = new_String(L"-Buffer before: ");
    Constant string_9947_Const = new_Constant((Optr)string_9947);
    // warn:. 
    Send PSend9948 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9947_Const);
    // warn:. 
    Send PSend9949 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend9950 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend9951 = new_Send((Optr)PSend9950, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend9952 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend9951, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_9953 = new_String(L"-Buffer after ");
    Constant string_9953_Const = new_Constant((Optr)string_9953);
    // warn:. 
    Send PSend9954 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9953_Const);
    // warn:. 
    Send PSend9955 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9929 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9930, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9934, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9933, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9932, (Optr)&t_send1, (Optr)PSend9931, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9935, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9936, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9937, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9938, (Optr)&t_send1, (Optr)PSend9939, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9940, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9941, (Optr)&t_send1, (Optr)PSend9942, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9943, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9944, (Optr)&t_send1, (Optr)PSend9945, (Optr)&t_send1, (Optr)PSend9946, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9947, (Optr)&t_send1, (Optr)PSend9948, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9949, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9950, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9951, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend9952, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9953, (Optr)&t_send1, (Optr)PSend9954, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9926 = new_Method_with(PArray9927, PArray9928, empty_Array, PThreadedCode9929, 11, PAssign9930, PAssign9935, PSend9939, PSend9942, PSend9946, PSend9948, PSend9949, PSend9952, PSend9954, PSend9955, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9926, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9957 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9959 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9960 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9959);
    Array PThreadedCode9958 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9959, (Optr)&t_send1, (Optr)PSend9960, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9956 = new_Method_with(PArray9957, empty_Array, empty_Array, PThreadedCode9958, 2, PSend9960, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod9956, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend9963 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign9964 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode9962 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9963, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9964, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9962, 3, PSend9963, PAssign9964, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9961, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray9966 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend9968 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode9967 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend9968, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9965 = new_Method_with(PArray9966, empty_Array, empty_Array, PThreadedCode9967, 2, PSend9968, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod9965, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9972 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9971 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_9972);
    Array PArray9970 = new_Array_with(1, (Optr)PAnnotation9971);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9974 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9973 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9974, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9969 = new_NativeMethod_with(empty_Array, empty_Array, PArray9970, PThreadedCode9973, 2, PSend9974, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod9969, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9976 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9980 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9979 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9980, (Optr)&t_block_return);
    Block PBlock9978 = new_Block_with(empty_Array, empty_Array, PThreadedCode9979, 1, PSend9980);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9983 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9984 = new_Send((Optr)PSend9983, SMB_primYield, 0);
    Array PThreadedCode9982 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9983, (Optr)&t_send0, (Optr)PSend9984, (Optr)&t_block_return);
    Block PBlock9981 = new_Block_with(empty_Array, empty_Array, PThreadedCode9982, 1, PSend9984);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9985 = new_Send((Optr)PBlock9978, SMB_whileFalse_, 1, (Optr)PBlock9981);
    String string_9986 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9986_Const = new_Constant((Optr)string_9986);
    // warn:. 
    Send PSend9987 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9986_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend9988 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode9977 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9978, (Optr)&t_push_closure, (Optr)PBlock9981, (Optr)&t_send1, (Optr)PSend9985, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9986, (Optr)&t_send1, (Optr)PSend9987, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend9988, (Optr)&t_method_return);
    Method PMethod9975 = new_Method_with(PArray9976, empty_Array, empty_Array, PThreadedCode9977, 3, PSend9985, PSend9987, PSend9988);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod9975, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9990 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9994 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9993 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9994, (Optr)&t_block_return);
    Block PBlock9992 = new_Block_with(empty_Array, empty_Array, PThreadedCode9993, 1, PSend9994);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9997 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9998 = new_Send((Optr)PSend9997, SMB_primYield, 0);
    Array PThreadedCode9996 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9997, (Optr)&t_send0, (Optr)PSend9998, (Optr)&t_block_return);
    Block PBlock9995 = new_Block_with(empty_Array, empty_Array, PThreadedCode9996, 1, PSend9998);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9999 = new_Send((Optr)PBlock9992, SMB_whileFalse_, 1, (Optr)PBlock9995);
    String string_10000 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10000_Const = new_Constant((Optr)string_10000);
    // warn:. 
    Send PSend10001 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10000_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend10002 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9991 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9992, (Optr)&t_push_closure, (Optr)PBlock9995, (Optr)&t_send1, (Optr)PSend9999, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10000, (Optr)&t_send1, (Optr)PSend10001, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend10002, (Optr)&t_method_return);
    Method PMethod9989 = new_Method_with(PArray9990, empty_Array, empty_Array, PThreadedCode9991, 3, PSend9999, PSend10001, PSend10002);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod9989, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray10004 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10006 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode10005 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend10006, (Optr)&t_method_return);
    Method PMethod10003 = new_Method_with(PArray10004, empty_Array, empty_Array, PThreadedCode10005, 1, PSend10006);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod10003, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend10009 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign10013 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode10012 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10013, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10011 = new_Block_with(empty_Array, empty_Array, PThreadedCode10012, 1, PAssign10013);
    // ifFalse:. 
    Send PSend10010 = new_Send((Optr)PSend10009, SMB_ifFalse_, 1, (Optr)PBlock10011);
    Array PThreadedCode10008 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10009, (Optr)&t_send_ifFalse_, (Optr)PSend10010, (Optr)PBlock10011, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10007 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10008, 2, PSend10010, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod10007, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10015 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10018 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation10017 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_10018);
    Array PArray10016 = new_Array_with(1, (Optr)PAnnotation10017);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10020 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10019 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10020, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10014 = new_NativeMethod_with(PArray10015, empty_Array, PArray10016, PThreadedCode10019, 2, PSend10020, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod10014, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray10022 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10025 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10029 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10028 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10029, (Optr)&t_block_return);
    Block PBlock10027 = new_Block_with(empty_Array, empty_Array, PThreadedCode10028, 1, PSend10029);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10030 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock10027);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend10031 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend10032 = new_Send((Optr)PSend10031, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode10026 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock10027, (Optr)&t_send1, (Optr)PSend10030, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10031, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend10032, (Optr)&t_method_return);
    Block PBlock10024 = new_Block_with(PArray10025, empty_Array, PThreadedCode10026, 2, PSend10030, PSend10032);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10033 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10024);
    Array PThreadedCode10023 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10024, (Optr)&t_send1, (Optr)PSend10033, (Optr)&t_method_return);
    Method PMethod10021 = new_Method_with(empty_Array, PArray10022, empty_Array, PThreadedCode10023, 1, PSend10033);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod10021, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10035 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10038 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation10037 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_10038);
    Array PArray10036 = new_Array_with(1, (Optr)PAnnotation10037);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10040 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10039 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10040, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10034 = new_NativeMethod_with(PArray10035, empty_Array, PArray10036, PThreadedCode10039, 2, PSend10040, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod10034, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend10043 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode10042 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10043, (Optr)&t_method_return);
    Method PMethod10041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10042, 1, PSend10043);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod10041, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10047 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation10046 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_10047);
    Array PArray10045 = new_Array_with(1, (Optr)PAnnotation10046);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10049 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10048 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10049, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10044 = new_NativeMethod_with(empty_Array, empty_Array, PArray10045, PThreadedCode10048, 2, PSend10049, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod10044, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend10052 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10053 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode10051 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10052, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend10053, (Optr)&t_method_return);
    Method PMethod10050 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10051, 2, PSend10052, PSend10053);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod10050, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign10056 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign10057 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode10055 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign10056, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10057, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10055, 3, PAssign10056, PAssign10057, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod10054, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10061 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation10060 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_10061);
    Array PArray10059 = new_Array_with(1, (Optr)PAnnotation10060);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10063 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10062 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10063, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10058 = new_NativeMethod_with(empty_Array, empty_Array, PArray10059, PThreadedCode10062, 2, PSend10063, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod10058, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend10066 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode10065 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10066, (Optr)&t_method_return);
    Method PMethod10064 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10065, 1, PSend10066);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod10064, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend10069 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode10068 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10069, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod10067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10068, 2, PSend10069, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod10067, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10073 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation10072 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_10073);
    Array PArray10071 = new_Array_with(1, (Optr)PAnnotation10072);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10075 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10074 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10075, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10070 = new_NativeMethod_with(empty_Array, empty_Array, PArray10071, PThreadedCode10074, 2, PSend10075, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod10070, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10077 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10080 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation10079 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_10080);
    Array PArray10078 = new_Array_with(1, (Optr)PAnnotation10079);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10082 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10081 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10082, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10076 = new_NativeMethod_with(PArray10077, empty_Array, PArray10078, PThreadedCode10081, 2, PSend10082, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod10076, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray10084 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10086 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode10085 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend10086, (Optr)&t_method_return);
    Method PMethod10083 = new_Method_with(PArray10084, empty_Array, empty_Array, PThreadedCode10085, 1, PSend10086);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod10083, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray10088 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10091 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend10093 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10097 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_10097_Const = new_Constant((Optr)string_10097);
    // escape:. 
    Send PSend10098 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10097_Const);
    Array PThreadedCode10096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10097, (Optr)&t_send1, (Optr)PSend10098, (Optr)&t_block_return);
    Block PBlock10095 = new_Block_with(empty_Array, empty_Array, PThreadedCode10096, 1, PSend10098);
    // ifTrue:. 
    Send PSend10094 = new_Send((Optr)PSend10093, SMB_ifTrue_, 1, (Optr)PBlock10095);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend10100 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign10099 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend10100);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend10101 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_10105 = new_String(L"invalidSocketHandle");
    Constant string_10105_Const = new_Constant((Optr)string_10105);
    // escape:. 
    Send PSend10106 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10105_Const);
    Array PThreadedCode10104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10105, (Optr)&t_send1, (Optr)PSend10106, (Optr)&t_block_return);
    Block PBlock10103 = new_Block_with(empty_Array, empty_Array, PThreadedCode10104, 1, PSend10106);
    // ifTrue:. 
    Send PSend10102 = new_Send((Optr)PSend10101, SMB_ifTrue_, 1, (Optr)PBlock10103);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10107 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_10111 = new_String(L"unconnected");
    Constant string_10111_Const = new_Constant((Optr)string_10111);
    // escape:. 
    Send PSend10112 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10111_Const);
    Array PThreadedCode10110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10111, (Optr)&t_send1, (Optr)PSend10112, (Optr)&t_block_return);
    Block PBlock10109 = new_Block_with(empty_Array, empty_Array, PThreadedCode10110, 1, PSend10112);
    // ifTrue:. 
    Send PSend10108 = new_Send((Optr)PSend10107, SMB_ifTrue_, 1, (Optr)PBlock10109);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend10113 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_10117 = new_String(L"waitingForConnection");
    Constant string_10117_Const = new_Constant((Optr)string_10117);
    // escape:. 
    Send PSend10118 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10117_Const);
    Array PThreadedCode10116 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10117, (Optr)&t_send1, (Optr)PSend10118, (Optr)&t_block_return);
    Block PBlock10115 = new_Block_with(empty_Array, empty_Array, PThreadedCode10116, 1, PSend10118);
    // ifTrue:. 
    Send PSend10114 = new_Send((Optr)PSend10113, SMB_ifTrue_, 1, (Optr)PBlock10115);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend10119 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_10123 = new_String(L"connected");
    Constant string_10123_Const = new_Constant((Optr)string_10123);
    // escape:. 
    Send PSend10124 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10123_Const);
    Array PThreadedCode10122 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10123, (Optr)&t_send1, (Optr)PSend10124, (Optr)&t_block_return);
    Block PBlock10121 = new_Block_with(empty_Array, empty_Array, PThreadedCode10122, 1, PSend10124);
    // ifTrue:. 
    Send PSend10120 = new_Send((Optr)PSend10119, SMB_ifTrue_, 1, (Optr)PBlock10121);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend10125 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_10129 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_10129_Const = new_Constant((Optr)string_10129);
    // escape:. 
    Send PSend10130 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10129_Const);
    Array PThreadedCode10128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10129, (Optr)&t_send1, (Optr)PSend10130, (Optr)&t_block_return);
    Block PBlock10127 = new_Block_with(empty_Array, empty_Array, PThreadedCode10128, 1, PSend10130);
    // ifTrue:. 
    Send PSend10126 = new_Send((Optr)PSend10125, SMB_ifTrue_, 1, (Optr)PBlock10127);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend10131 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_10135 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_10135_Const = new_Constant((Optr)string_10135);
    // escape:. 
    Send PSend10136 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_10135_Const);
    Array PThreadedCode10134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_10135, (Optr)&t_send1, (Optr)PSend10136, (Optr)&t_block_return);
    Block PBlock10133 = new_Block_with(empty_Array, empty_Array, PThreadedCode10134, 1, PSend10136);
    // ifTrue:. 
    Send PSend10132 = new_Send((Optr)PSend10131, SMB_ifTrue_, 1, (Optr)PBlock10133);
    String string_10137 = new_String(L"unknown socket status");
    Array PThreadedCode10092 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10093, (Optr)&t_send_ifTrue_, (Optr)PSend10094, (Optr)PBlock10095, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10099, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10100, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend10101, (Optr)&t_send_ifTrue_, (Optr)PSend10102, (Optr)PBlock10103, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10107, (Optr)&t_send_ifTrue_, (Optr)PSend10108, (Optr)PBlock10109, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10113, (Optr)&t_send_ifTrue_, (Optr)PSend10114, (Optr)PBlock10115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10119, (Optr)&t_send_ifTrue_, (Optr)PSend10120, (Optr)PBlock10121, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend10125, (Optr)&t_send_ifTrue_, (Optr)PSend10126, (Optr)PBlock10127, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend10131, (Optr)&t_send_ifTrue_, (Optr)PSend10132, (Optr)PBlock10133, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_10137, (Optr)&t_method_return);
    Constant string_10137_Const = new_Constant((Optr)string_10137);
    Block PBlock10090 = new_Block_with(PArray10091, empty_Array, PThreadedCode10092, 9, PSend10094, PAssign10099, PSend10102, PSend10108, PSend10114, PSend10120, PSend10126, PSend10132, string_10137_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10138 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10090);
    Array PThreadedCode10089 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10090, (Optr)&t_send1, (Optr)PSend10138, (Optr)&t_method_return);
    Method PMethod10087 = new_Method_with(empty_Array, PArray10088, empty_Array, PThreadedCode10089, 1, PSend10138);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod10087, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend10143 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode10142 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10143, (Optr)&t_block_return);
    Block PBlock10141 = new_Block_with(empty_Array, empty_Array, PThreadedCode10142, 1, PSend10143);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend10146 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend10147 = new_Send((Optr)PSend10146, SMB_primYield, 0);
    Array PThreadedCode10145 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend10146, (Optr)&t_send0, (Optr)PSend10147, (Optr)&t_block_return);
    Block PBlock10144 = new_Block_with(empty_Array, empty_Array, PThreadedCode10145, 1, PSend10147);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10148 = new_Send((Optr)PBlock10141, SMB_whileFalse_, 1, (Optr)PBlock10144);
    String string_10149 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10149_Const = new_Constant((Optr)string_10149);
    // warn:. 
    Send PSend10150 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10149_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend10151 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode10140 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock10141, (Optr)&t_push_closure, (Optr)PBlock10144, (Optr)&t_send1, (Optr)PSend10148, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10149, (Optr)&t_send1, (Optr)PSend10150, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10151, (Optr)&t_method_return);
    Method PMethod10139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10140, 3, PSend10148, PSend10150, PSend10151);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod10139, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10155 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation10154 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_10155);
    Array PArray10153 = new_Array_with(1, (Optr)PAnnotation10154);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10157 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10156 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10157, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10152 = new_NativeMethod_with(empty_Array, empty_Array, PArray10153, PThreadedCode10156, 2, PSend10157, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod10152, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray10159 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend10162 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign10161 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend10162);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend10164 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign10163 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend10164);
    String string_10165 = new_String(L"Size returned -> ");
    Constant string_10165_Const = new_Constant((Optr)string_10165);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10166 = new_Send((Optr)string_10165_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10167 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10166);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend10168 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode10160 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign10161, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend10162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10163, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend10164, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10165, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend10166, (Optr)&t_send1, (Optr)PSend10167, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend10168, (Optr)&t_method_return);
    Method PMethod10158 = new_Method_with(empty_Array, PArray10159, empty_Array, PThreadedCode10160, 4, PAssign10161, PAssign10163, PSend10167, PSend10168);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod10158, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10172 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation10171 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_10172);
    Array PArray10170 = new_Array_with(1, (Optr)PAnnotation10171);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10174 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10173 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10174, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10169 = new_NativeMethod_with(empty_Array, empty_Array, PArray10170, PThreadedCode10173, 2, PSend10174, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod10169, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray10176 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10180 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10181 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode10179 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10180, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10181, (Optr)&t_block_return);
    Block PBlock10178 = new_Block_with(empty_Array, empty_Array, PThreadedCode10179, 2, PSend10180, PSend10181);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend10182 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock10178);
    Array PThreadedCode10177 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock10178, (Optr)&t_send1, (Optr)PSend10182, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10175 = new_Method_with(PArray10176, empty_Array, empty_Array, PThreadedCode10177, 2, PSend10182, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod10175, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray10184 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10186 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode10185 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend10186, (Optr)&t_method_return);
    Method PMethod10183 = new_Method_with(PArray10184, empty_Array, empty_Array, PThreadedCode10185, 1, PSend10186);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod10183, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray10188 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10191 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation10190 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_10191);
    Array PArray10189 = new_Array_with(1, (Optr)PAnnotation10190);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10193 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10192 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10193, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10187 = new_NativeMethod_with(PArray10188, empty_Array, PArray10189, PThreadedCode10192, 2, PSend10193, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod10187, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray10195 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10197 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode10196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend10197, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10194 = new_Method_with(PArray10195, empty_Array, empty_Array, PThreadedCode10196, 2, PSend10197, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod10194, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10201 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation10200 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_10201);
    Array PArray10199 = new_Array_with(1, (Optr)PAnnotation10200);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10203 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10202 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10203, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10198 = new_NativeMethod_with(empty_Array, empty_Array, PArray10199, PThreadedCode10202, 2, PSend10203, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod10198, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend10206 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode10205 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10206, (Optr)&t_method_return);
    Method PMethod10204 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10205, 1, PSend10206);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod10204, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10208 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10209 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10212 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10211 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10212);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10213 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10216 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10215 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10216, (Optr)&t_block_return);
    Block PBlock10214 = new_Block_with(empty_Array, empty_Array, PThreadedCode10215, 1, PSend10216);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10218 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10221 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10220 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10221);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray10223 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10225 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10226 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10225);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10227 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10228 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10227);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10230 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10229 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10230);
    // on:. 
    Send PSend10232 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10231 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10232);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend10236 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10235 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10236);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10239 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10240 = new_Send((Optr)PSend10239, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10243 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_10244 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10244_Const = new_Constant((Optr)char_10244);
    // =. 
    Send PSend10245 = new_Send((Optr)PSend10243, SMB__equals_, 1, (Optr)char_10244_Const);
    Array PThreadedCode10242 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10243, (Optr)&t_push1, (Optr)char_10244, (Optr)&t_send1, (Optr)PSend10245, (Optr)&t_block_return);
    Block PBlock10241 = new_Block_with(empty_Array, empty_Array, PThreadedCode10242, 1, PSend10245);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10246 = new_Send((Optr)PSend10240, SMB_and_, 1, (Optr)PBlock10241);
    Array PThreadedCode10238 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10239, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10240, (Optr)&t_push_closure, (Optr)PBlock10241, (Optr)&t_send1, (Optr)PSend10246, (Optr)&t_block_return);
    Block PBlock10237 = new_Block_with(empty_Array, empty_Array, PThreadedCode10238, 1, PSend10246);
    String string_10249 = new_String(L"Received ");
    Constant string_10249_Const = new_Constant((Optr)string_10249);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10250 = new_Send((Optr)string_10249_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_10251 = new_String(L", handle=");
    Constant string_10251_Const = new_Constant((Optr)string_10251);
    // ,. 
    Send PSend10252 = new_Send((Optr)PSend10250, SMB__append_, 1, (Optr)string_10251_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10253 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10254 = new_Send((Optr)PSend10252, SMB__append_, 1, (Optr)PSend10253);
    // warn:. 
    Send PSend10255 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10254);
    String string_10256 = new_String(L"Received ");
    // size. 
    Send PSend10257 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10256_Const = new_Constant((Optr)string_10256);
    // ,. 
    Send PSend10258 = new_Send((Optr)string_10256_Const, SMB__append_, 1, (Optr)PSend10257);
    String string_10259 = new_String(L" bytes");
    Constant string_10259_Const = new_Constant((Optr)string_10259);
    // ,. 
    Send PSend10260 = new_Send((Optr)PSend10258, SMB__append_, 1, (Optr)string_10259_Const);
    String string_10261 = new_String(L", handle=");
    Constant string_10261_Const = new_Constant((Optr)string_10261);
    // ,. 
    Send PSend10262 = new_Send((Optr)PSend10260, SMB__append_, 1, (Optr)string_10261_Const);
    // hash. 
    Send PSend10263 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10264 = new_Send((Optr)PSend10262, SMB__append_, 1, (Optr)PSend10263);
    // warn:. 
    Send PSend10265 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10264);
    String string_10266 = new_String(L"Received ");
    // size. 
    Send PSend10267 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10266_Const = new_Constant((Optr)string_10266);
    // ,. 
    Send PSend10268 = new_Send((Optr)string_10266_Const, SMB__append_, 1, (Optr)PSend10267);
    String string_10269 = new_String(L" bytes");
    Constant string_10269_Const = new_Constant((Optr)string_10269);
    // ,. 
    Send PSend10270 = new_Send((Optr)PSend10268, SMB__append_, 1, (Optr)string_10269_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10271 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10270);
    // readMessage. 
    Send PSend10273 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10272 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10273);
    Array PThreadedCode10248 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10249, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend10250, (Optr)&t_push1, (Optr)string_10251, (Optr)&t_send1, (Optr)PSend10252, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10253, (Optr)&t_send1, (Optr)PSend10254, (Optr)&t_send1, (Optr)PSend10255, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10256, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10257, (Optr)&t_send1, (Optr)PSend10258, (Optr)&t_push1, (Optr)string_10259, (Optr)&t_send1, (Optr)PSend10260, (Optr)&t_push1, (Optr)string_10261, (Optr)&t_send1, (Optr)PSend10262, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10263, (Optr)&t_send1, (Optr)PSend10264, (Optr)&t_send1, (Optr)PSend10265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10266, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10267, (Optr)&t_send1, (Optr)PSend10268, (Optr)&t_push1, (Optr)string_10269, (Optr)&t_send1, (Optr)PSend10270, (Optr)&t_send1, (Optr)PSend10271, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10272, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10273, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10247 = new_Block_with(empty_Array, empty_Array, PThreadedCode10248, 4, PSend10255, PSend10265, PSend10271, PAssign10272);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10274 = new_Send((Optr)PBlock10237, SMB_whileFalse_, 1, (Optr)PBlock10247);
    Array PThreadedCode10234 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10235, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10237, (Optr)&t_push_closure, (Optr)PBlock10247, (Optr)&t_send1, (Optr)PSend10274, (Optr)&t_block_return);
    Block PBlock10233 = new_Block_with(empty_Array, empty_Array, PThreadedCode10234, 2, PAssign10235, PSend10274);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10276 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10278 = new_String(L"Error: Network Connection closed");
    Constant string_10278_Const = new_Constant((Optr)string_10278);
    // warn:. 
    Send PSend10279 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10278_Const);
    String string_10280 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10281 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10280_Const = new_Constant((Optr)string_10280);
    // ,. 
    Send PSend10282 = new_Send((Optr)string_10280_Const, SMB__append_, 1, (Optr)PSend10281);
    // warn:. 
    Send PSend10283 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10282);
    Array PThreadedCode10277 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10278, (Optr)&t_send1, (Optr)PSend10279, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10280, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10281, (Optr)&t_send1, (Optr)PSend10282, (Optr)&t_send1, (Optr)PSend10283, (Optr)&t_method_return);
    Block PBlock10275 = new_Block_with(PArray10276, empty_Array, PThreadedCode10277, 2, PSend10279, PSend10283);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10284 = new_Send((Optr)PBlock10233, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10275);
    String string_10285 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10286 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10285_Const = new_Constant((Optr)string_10285);
    // ,. 
    Send PSend10287 = new_Send((Optr)string_10285_Const, SMB__append_, 1, (Optr)PSend10286);
    // warn:. 
    Send PSend10288 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10287);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10289 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10290 = new_String(L"Status ");
    // isConnected. 
    Send PSend10291 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10290_Const = new_Constant((Optr)string_10290);
    // ,. 
    Send PSend10292 = new_Send((Optr)string_10290_Const, SMB__append_, 1, (Optr)PSend10291);
    // warn:. 
    Send PSend10293 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10292);
    Array PThreadedCode10224 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10225, (Optr)&t_send1, (Optr)PSend10226, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10227, (Optr)&t_send1, (Optr)PSend10228, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10229, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10231, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10232, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10233, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10275, (Optr)&t_send2, (Optr)PSend10284, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10285, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10286, (Optr)&t_send1, (Optr)PSend10287, (Optr)&t_send1, (Optr)PSend10288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10289, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10290, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10291, (Optr)&t_send1, (Optr)PSend10292, (Optr)&t_send1, (Optr)PSend10293, (Optr)&t_method_return);
    Block PBlock10222 = new_Block_with(empty_Array, PArray10223, PThreadedCode10224, 8, PSend10226, PSend10228, PAssign10229, PAssign10231, PSend10284, PSend10288, PSend10289, PSend10293);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10294 = new_Send((Optr)PBlock10222, SMB_fork, 0);
    Array PThreadedCode10219 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10220, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10221, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10222, (Optr)&t_send0, (Optr)PSend10294, (Optr)&t_method_return);
    Block PBlock10217 = new_Block_with(empty_Array, PArray10218, PThreadedCode10219, 2, PAssign10220, PSend10294);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10295 = new_Send((Optr)PBlock10214, SMB_whileTrue_, 1, (Optr)PBlock10217);
    Array PThreadedCode10210 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10211, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10212, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10213, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10214, (Optr)&t_push_closure, (Optr)PBlock10217, (Optr)&t_send1, (Optr)PSend10295, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10207 = new_Method_with(PArray10208, PArray10209, empty_Array, PThreadedCode10210, 4, PAssign10211, PSend10213, PSend10295, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod10207, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket_, MC_SMB_testWebSocket_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10297 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10298 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10301 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10300 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10301);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10302 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10304 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10303 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10304);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10306 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10305 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10306);
    String string_10307 = new_String(L"* read from ");
    Constant string_10307_Const = new_Constant((Optr)string_10307);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10308 = new_Send((Optr)string_10307_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10309 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10308);
    String string_10310 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10311 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10310_Const = new_Constant((Optr)string_10310);
    // ,. 
    Send PSend10312 = new_Send((Optr)string_10310_Const, SMB__append_, 1, (Optr)PSend10311);
    String string_10313 = new_String(L" bytes");
    Constant string_10313_Const = new_Constant((Optr)string_10313);
    // ,. 
    Send PSend10314 = new_Send((Optr)PSend10312, SMB__append_, 1, (Optr)string_10313_Const);
    // warn:. 
    Send PSend10315 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10314);
    String string_10316 = new_String(L"Received ");
    // size. 
    Send PSend10317 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10316_Const = new_Constant((Optr)string_10316);
    // ,. 
    Send PSend10318 = new_Send((Optr)string_10316_Const, SMB__append_, 1, (Optr)PSend10317);
    String string_10319 = new_String(L" bytes");
    Constant string_10319_Const = new_Constant((Optr)string_10319);
    // ,. 
    Send PSend10320 = new_Send((Optr)PSend10318, SMB__append_, 1, (Optr)string_10319_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10321 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10320);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10322 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10323 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10299 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10300, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10301, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10302, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10303, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10305, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10307, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10308, (Optr)&t_send1, (Optr)PSend10309, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10310, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10311, (Optr)&t_send1, (Optr)PSend10312, (Optr)&t_push1, (Optr)string_10313, (Optr)&t_send1, (Optr)PSend10314, (Optr)&t_send1, (Optr)PSend10315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10316, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10317, (Optr)&t_send1, (Optr)PSend10318, (Optr)&t_push1, (Optr)string_10319, (Optr)&t_send1, (Optr)PSend10320, (Optr)&t_send1, (Optr)PSend10321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10323, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10296 = new_Method_with(PArray10297, PArray10298, empty_Array, PThreadedCode10299, 10, PAssign10300, PSend10302, PAssign10303, PAssign10305, PSend10309, PSend10315, PSend10321, PSend10322, PSend10323, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10296, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10326 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10325 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10326, (Optr)&t_method_return);
    Method PMethod10324 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10325, 1, PSend10326);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10324, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10328 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10328, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10327, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10330 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10331 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10334 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10333 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10334);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10335 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10338 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10337 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10338, (Optr)&t_block_return);
    Block PBlock10336 = new_Block_with(empty_Array, empty_Array, PThreadedCode10337, 1, PSend10338);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10340 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10343 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10342 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10343);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray10345 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10347 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10348 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10347);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10349 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10350 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10349);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10352 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10351 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10352);
    // on:. 
    Send PSend10354 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10353 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10354);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray10356 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10358 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10359 = new_Send((Optr)PSend10358, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend10362 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend10363 = new_Send((Optr)PSend10362, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode10361 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10362, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend10363, (Optr)&t_block_return);
    Block PBlock10360 = new_Block_with(empty_Array, empty_Array, PThreadedCode10361, 1, PSend10363);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10364 = new_Send((Optr)PSend10359, SMB_and_, 1, (Optr)PBlock10360);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend10368 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode10367 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10368, (Optr)&t_block_return);
    Block PBlock10366 = new_Block_with(empty_Array, empty_Array, PThreadedCode10367, 1, PSend10368);
    String string_10371 = new_String(L"Received ");
    Constant string_10371_Const = new_Constant((Optr)string_10371);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10372 = new_Send((Optr)string_10371_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_10373 = new_String(L", handle=");
    Constant string_10373_Const = new_Constant((Optr)string_10373);
    // ,. 
    Send PSend10374 = new_Send((Optr)PSend10372, SMB__append_, 1, (Optr)string_10373_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10375 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10376 = new_Send((Optr)PSend10374, SMB__append_, 1, (Optr)PSend10375);
    // warn:. 
    Send PSend10377 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10376);
    String string_10378 = new_String(L"Received ");
    // size. 
    Send PSend10379 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10378_Const = new_Constant((Optr)string_10378);
    // ,. 
    Send PSend10380 = new_Send((Optr)string_10378_Const, SMB__append_, 1, (Optr)PSend10379);
    String string_10381 = new_String(L" bytes");
    Constant string_10381_Const = new_Constant((Optr)string_10381);
    // ,. 
    Send PSend10382 = new_Send((Optr)PSend10380, SMB__append_, 1, (Optr)string_10381_Const);
    String string_10383 = new_String(L", handle=");
    Constant string_10383_Const = new_Constant((Optr)string_10383);
    // ,. 
    Send PSend10384 = new_Send((Optr)PSend10382, SMB__append_, 1, (Optr)string_10383_Const);
    // hash. 
    Send PSend10385 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10386 = new_Send((Optr)PSend10384, SMB__append_, 1, (Optr)PSend10385);
    // warn:. 
    Send PSend10387 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10386);
    String string_10388 = new_String(L"Received ");
    // size. 
    Send PSend10389 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10388_Const = new_Constant((Optr)string_10388);
    // ,. 
    Send PSend10390 = new_Send((Optr)string_10388_Const, SMB__append_, 1, (Optr)PSend10389);
    String string_10391 = new_String(L" bytes");
    Constant string_10391_Const = new_Constant((Optr)string_10391);
    // ,. 
    Send PSend10392 = new_Send((Optr)PSend10390, SMB__append_, 1, (Optr)string_10391_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10393 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10392);
    Array PThreadedCode10370 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10371, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend10372, (Optr)&t_push1, (Optr)string_10373, (Optr)&t_send1, (Optr)PSend10374, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10375, (Optr)&t_send1, (Optr)PSend10376, (Optr)&t_send1, (Optr)PSend10377, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10378, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10379, (Optr)&t_send1, (Optr)PSend10380, (Optr)&t_push1, (Optr)string_10381, (Optr)&t_send1, (Optr)PSend10382, (Optr)&t_push1, (Optr)string_10383, (Optr)&t_send1, (Optr)PSend10384, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10385, (Optr)&t_send1, (Optr)PSend10386, (Optr)&t_send1, (Optr)PSend10387, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10388, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10389, (Optr)&t_send1, (Optr)PSend10390, (Optr)&t_push1, (Optr)string_10391, (Optr)&t_send1, (Optr)PSend10392, (Optr)&t_send1, (Optr)PSend10393, (Optr)&t_block_return);
    Block PBlock10369 = new_Block_with(empty_Array, empty_Array, PThreadedCode10370, 3, PSend10377, PSend10387, PSend10393);
    // ifTrue:ifFalse:. 
    Send PSend10365 = new_Send((Optr)PSend10364, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10366, (Optr)PBlock10369);
    Array PThreadedCode10357 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10358, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10359, (Optr)&t_push_closure, (Optr)PBlock10360, (Optr)&t_send1, (Optr)PSend10364, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10365, (Optr)PBlock10366, (Optr)PBlock10369, (Optr)&t_method_return);
    Block PBlock10355 = new_Block_with(PArray10356, empty_Array, PThreadedCode10357, 1, PSend10365);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10394 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock10355);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10396 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10398 = new_String(L"Error: Network Connection closed");
    Constant string_10398_Const = new_Constant((Optr)string_10398);
    // warn:. 
    Send PSend10399 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10398_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10400 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10401 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10402 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10401_Const = new_Constant((Optr)string_10401);
    // ,. 
    Send PSend10403 = new_Send((Optr)string_10401_Const, SMB__append_, 1, (Optr)PSend10402);
    // warn:. 
    Send PSend10404 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10403);
    Array PThreadedCode10397 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10398, (Optr)&t_send1, (Optr)PSend10399, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10400, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10401, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10402, (Optr)&t_send1, (Optr)PSend10403, (Optr)&t_send1, (Optr)PSend10404, (Optr)&t_method_return);
    Block PBlock10395 = new_Block_with(PArray10396, empty_Array, PThreadedCode10397, 3, PSend10399, PSend10400, PSend10404);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10405 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10395);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10407 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10409 = new_String(L"Will now try to close connection");
    Constant string_10409_Const = new_Constant((Optr)string_10409);
    // warn:. 
    Send PSend10410 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10409_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10411 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10412 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10413 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10412_Const = new_Constant((Optr)string_10412);
    // ,. 
    Send PSend10414 = new_Send((Optr)string_10412_Const, SMB__append_, 1, (Optr)PSend10413);
    // warn:. 
    Send PSend10415 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10414);
    Array PThreadedCode10408 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10409, (Optr)&t_send1, (Optr)PSend10410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10411, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10412, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10413, (Optr)&t_send1, (Optr)PSend10414, (Optr)&t_send1, (Optr)PSend10415, (Optr)&t_method_return);
    Block PBlock10406 = new_Block_with(PArray10407, empty_Array, PThreadedCode10408, 3, PSend10410, PSend10411, PSend10415);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10416 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10406);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10417 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode10346 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10347, (Optr)&t_send1, (Optr)PSend10348, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10349, (Optr)&t_send1, (Optr)PSend10350, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10351, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10352, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10353, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10354, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10355, (Optr)&t_send1, (Optr)PSend10394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10395, (Optr)&t_send1, (Optr)PSend10405, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10406, (Optr)&t_send1, (Optr)PSend10416, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10417, (Optr)&t_method_return);
    Block PBlock10344 = new_Block_with(empty_Array, PArray10345, PThreadedCode10346, 8, PSend10348, PSend10350, PAssign10351, PAssign10353, PSend10394, PSend10405, PSend10416, PSend10417);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10418 = new_Send((Optr)PBlock10344, SMB_fork, 0);
    Array PThreadedCode10341 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10342, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10343, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10344, (Optr)&t_send0, (Optr)PSend10418, (Optr)&t_method_return);
    Block PBlock10339 = new_Block_with(empty_Array, PArray10340, PThreadedCode10341, 2, PAssign10342, PSend10418);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10419 = new_Send((Optr)PBlock10336, SMB_whileTrue_, 1, (Optr)PBlock10339);
    Array PThreadedCode10332 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10333, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10334, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10335, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10336, (Optr)&t_push_closure, (Optr)PBlock10339, (Optr)&t_send1, (Optr)PSend10419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10329 = new_Method_with(PArray10330, PArray10331, empty_Array, PThreadedCode10332, 4, PAssign10333, PSend10335, PSend10419, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod10329, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10422 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10422_Const = new_Constant((Optr)string_10422);
    // require:at:. 
    Send PSend10423 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10422_Const);
    Array PThreadedCode10421 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10422, (Optr)&t_send2, (Optr)PSend10423, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10421, 2, PSend10423, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10420, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10425 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10426 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10429 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10428 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10429);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10430 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10433 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10432 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10433, (Optr)&t_block_return);
    Block PBlock10431 = new_Block_with(empty_Array, empty_Array, PThreadedCode10432, 1, PSend10433);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10435 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10438 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10437 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10438);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10442 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10441 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10442);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10445 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10244 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10244_Const = new_Constant((Optr)char_10244);
    // =. 
    Send PSend10446 = new_Send((Optr)PSend10445, SMB__equals_, 1, (Optr)char_10244_Const);
    Array PThreadedCode10444 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10445, (Optr)&t_push1, (Optr)char_10244, (Optr)&t_send1, (Optr)PSend10446, (Optr)&t_block_return);
    Block PBlock10443 = new_Block_with(empty_Array, empty_Array, PThreadedCode10444, 1, PSend10446);
    String string_10449 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10450 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10449_Const = new_Constant((Optr)string_10449);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10451 = new_Send((Optr)string_10449_Const, SMB__append_, 1, (Optr)PSend10450);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10452 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10451);
    String string_10453 = new_String(L"Received ");
    Constant string_10453_Const = new_Constant((Optr)string_10453);
    // ,. 
    Send PSend10454 = new_Send((Optr)string_10453_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10455 = new_String(L", handle=");
    Constant string_10455_Const = new_Constant((Optr)string_10455);
    // ,. 
    Send PSend10456 = new_Send((Optr)PSend10454, SMB__append_, 1, (Optr)string_10455_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10457 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10458 = new_Send((Optr)PSend10456, SMB__append_, 1, (Optr)PSend10457);
    // warn:. 
    Send PSend10459 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10458);
    String string_10460 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10461 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10460_Const = new_Constant((Optr)string_10460);
    // ,. 
    Send PSend10462 = new_Send((Optr)string_10460_Const, SMB__append_, 1, (Optr)PSend10461);
    String string_10463 = new_String(L" bytes");
    Constant string_10463_Const = new_Constant((Optr)string_10463);
    // ,. 
    Send PSend10464 = new_Send((Optr)PSend10462, SMB__append_, 1, (Optr)string_10463_Const);
    String string_10465 = new_String(L", handle=");
    Constant string_10465_Const = new_Constant((Optr)string_10465);
    // ,. 
    Send PSend10466 = new_Send((Optr)PSend10464, SMB__append_, 1, (Optr)string_10465_Const);
    // hash. 
    Send PSend10467 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10468 = new_Send((Optr)PSend10466, SMB__append_, 1, (Optr)PSend10467);
    // warn:. 
    Send PSend10469 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10468);
    String string_10470 = new_String(L"Received ");
    // size. 
    Send PSend10471 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10470_Const = new_Constant((Optr)string_10470);
    // ,. 
    Send PSend10472 = new_Send((Optr)string_10470_Const, SMB__append_, 1, (Optr)PSend10471);
    String string_10473 = new_String(L" bytes");
    Constant string_10473_Const = new_Constant((Optr)string_10473);
    // ,. 
    Send PSend10474 = new_Send((Optr)PSend10472, SMB__append_, 1, (Optr)string_10473_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10475 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10474);
    // receive. 
    Send PSend10477 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10476 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10477);
    Array PThreadedCode10448 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10449, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10450, (Optr)&t_send1, (Optr)PSend10451, (Optr)&t_send1, (Optr)PSend10452, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10453, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10454, (Optr)&t_push1, (Optr)string_10455, (Optr)&t_send1, (Optr)PSend10456, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10457, (Optr)&t_send1, (Optr)PSend10458, (Optr)&t_send1, (Optr)PSend10459, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10460, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10461, (Optr)&t_send1, (Optr)PSend10462, (Optr)&t_push1, (Optr)string_10463, (Optr)&t_send1, (Optr)PSend10464, (Optr)&t_push1, (Optr)string_10465, (Optr)&t_send1, (Optr)PSend10466, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10467, (Optr)&t_send1, (Optr)PSend10468, (Optr)&t_send1, (Optr)PSend10469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10470, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10471, (Optr)&t_send1, (Optr)PSend10472, (Optr)&t_push1, (Optr)string_10473, (Optr)&t_send1, (Optr)PSend10474, (Optr)&t_send1, (Optr)PSend10475, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10476, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10477, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10447 = new_Block_with(empty_Array, empty_Array, PThreadedCode10448, 5, PSend10452, PSend10459, PSend10469, PSend10475, PAssign10476);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10478 = new_Send((Optr)PBlock10443, SMB_whileFalse_, 1, (Optr)PBlock10447);
    String string_10479 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10480 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10479_Const = new_Constant((Optr)string_10479);
    // ,. 
    Send PSend10481 = new_Send((Optr)string_10479_Const, SMB__append_, 1, (Optr)PSend10480);
    // warn:. 
    Send PSend10482 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10481);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10483 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10484 = new_String(L"Status ");
    // isConnected. 
    Send PSend10485 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10484_Const = new_Constant((Optr)string_10484);
    // ,. 
    Send PSend10486 = new_Send((Optr)string_10484_Const, SMB__append_, 1, (Optr)PSend10485);
    // warn:. 
    Send PSend10487 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10486);
    Array PThreadedCode10440 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10441, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10442, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10443, (Optr)&t_push_closure, (Optr)PBlock10447, (Optr)&t_send1, (Optr)PSend10478, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10479, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10480, (Optr)&t_send1, (Optr)PSend10481, (Optr)&t_send1, (Optr)PSend10482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10483, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10484, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10485, (Optr)&t_send1, (Optr)PSend10486, (Optr)&t_send1, (Optr)PSend10487, (Optr)&t_block_return);
    Block PBlock10439 = new_Block_with(empty_Array, empty_Array, PThreadedCode10440, 5, PAssign10441, PSend10478, PSend10482, PSend10483, PSend10487);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10488 = new_Send((Optr)PBlock10439, SMB_fork, 0);
    Array PThreadedCode10436 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10437, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10438, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10439, (Optr)&t_send0, (Optr)PSend10488, (Optr)&t_method_return);
    Block PBlock10434 = new_Block_with(empty_Array, PArray10435, PThreadedCode10436, 2, PAssign10437, PSend10488);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10489 = new_Send((Optr)PBlock10431, SMB_whileTrue_, 1, (Optr)PBlock10434);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10490 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10427 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10428, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10429, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10430, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10431, (Optr)&t_push_closure, (Optr)PBlock10434, (Optr)&t_send1, (Optr)PSend10489, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10490, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10424 = new_Method_with(PArray10425, PArray10426, empty_Array, PThreadedCode10427, 5, PAssign10428, PSend10430, PSend10489, PSend10490, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10424, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10492 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10493 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10496 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10495 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10496);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10497 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10500 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10499 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10500, (Optr)&t_block_return);
    Block PBlock10498 = new_Block_with(empty_Array, empty_Array, PThreadedCode10499, 1, PSend10500);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10502 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10505 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10504 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10505);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10508 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10507 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10508, (Optr)&t_block_return);
    Block PBlock10506 = new_Block_with(empty_Array, empty_Array, PThreadedCode10507, 1, PSend10508);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10509 = new_Send((Optr)PBlock10506, SMB_fork, 0);
    Array PThreadedCode10503 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10504, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10505, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10506, (Optr)&t_send0, (Optr)PSend10509, (Optr)&t_method_return);
    Block PBlock10501 = new_Block_with(empty_Array, PArray10502, PThreadedCode10503, 2, PAssign10504, PSend10509);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10510 = new_Send((Optr)PBlock10498, SMB_whileTrue_, 1, (Optr)PBlock10501);
    Array PThreadedCode10494 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10495, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10496, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10497, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10498, (Optr)&t_push_closure, (Optr)PBlock10501, (Optr)&t_send1, (Optr)PSend10510, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10491 = new_Method_with(PArray10492, PArray10493, empty_Array, PThreadedCode10494, 4, PAssign10495, PSend10497, PSend10510, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10491, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10512 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10513 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10515 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10516 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10515);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10517 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10518 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10517);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10520 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10519 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10520);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10523 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10525 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10524 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10525);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10528 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10529 = new_Send((Optr)PSend10528, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10532 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10244 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10244_Const = new_Constant((Optr)char_10244);
    // =. 
    Send PSend10533 = new_Send((Optr)PSend10532, SMB__equals_, 1, (Optr)char_10244_Const);
    Array PThreadedCode10531 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10532, (Optr)&t_push1, (Optr)char_10244, (Optr)&t_send1, (Optr)PSend10533, (Optr)&t_block_return);
    Block PBlock10530 = new_Block_with(empty_Array, empty_Array, PThreadedCode10531, 1, PSend10533);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10534 = new_Send((Optr)PSend10529, SMB_and_, 1, (Optr)PBlock10530);
    Array PThreadedCode10527 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10528, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10529, (Optr)&t_push_closure, (Optr)PBlock10530, (Optr)&t_send1, (Optr)PSend10534, (Optr)&t_block_return);
    Block PBlock10526 = new_Block_with(empty_Array, empty_Array, PThreadedCode10527, 1, PSend10534);
    String string_10537 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10538 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10537_Const = new_Constant((Optr)string_10537);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10539 = new_Send((Optr)string_10537_Const, SMB__append_, 1, (Optr)PSend10538);
    // warn:. 
    Send PSend10540 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10539);
    String string_10541 = new_String(L"Received ");
    Constant string_10541_Const = new_Constant((Optr)string_10541);
    // ,. 
    Send PSend10542 = new_Send((Optr)string_10541_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10543 = new_String(L", handle=");
    Constant string_10543_Const = new_Constant((Optr)string_10543);
    // ,. 
    Send PSend10544 = new_Send((Optr)PSend10542, SMB__append_, 1, (Optr)string_10543_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10545 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10546 = new_Send((Optr)PSend10544, SMB__append_, 1, (Optr)PSend10545);
    // warn:. 
    Send PSend10547 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10546);
    String string_10548 = new_String(L"Received ");
    // size. 
    Send PSend10549 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10548_Const = new_Constant((Optr)string_10548);
    // ,. 
    Send PSend10550 = new_Send((Optr)string_10548_Const, SMB__append_, 1, (Optr)PSend10549);
    String string_10551 = new_String(L" bytes");
    Constant string_10551_Const = new_Constant((Optr)string_10551);
    // ,. 
    Send PSend10552 = new_Send((Optr)PSend10550, SMB__append_, 1, (Optr)string_10551_Const);
    String string_10553 = new_String(L", handle=");
    Constant string_10553_Const = new_Constant((Optr)string_10553);
    // ,. 
    Send PSend10554 = new_Send((Optr)PSend10552, SMB__append_, 1, (Optr)string_10553_Const);
    // hash. 
    Send PSend10555 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10556 = new_Send((Optr)PSend10554, SMB__append_, 1, (Optr)PSend10555);
    // warn:. 
    Send PSend10557 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10556);
    String string_10558 = new_String(L"Received ");
    // size. 
    Send PSend10559 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10558_Const = new_Constant((Optr)string_10558);
    // ,. 
    Send PSend10560 = new_Send((Optr)string_10558_Const, SMB__append_, 1, (Optr)PSend10559);
    String string_10561 = new_String(L" bytes");
    Constant string_10561_Const = new_Constant((Optr)string_10561);
    // ,. 
    Send PSend10562 = new_Send((Optr)PSend10560, SMB__append_, 1, (Optr)string_10561_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10563 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10562);
    // receiveDataIfAvailable. 
    Send PSend10564 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10566 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10565 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10566);
    Array PThreadedCode10536 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10537, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10538, (Optr)&t_send1, (Optr)PSend10539, (Optr)&t_send1, (Optr)PSend10540, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10541, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10542, (Optr)&t_push1, (Optr)string_10543, (Optr)&t_send1, (Optr)PSend10544, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10545, (Optr)&t_send1, (Optr)PSend10546, (Optr)&t_send1, (Optr)PSend10547, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10548, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10549, (Optr)&t_send1, (Optr)PSend10550, (Optr)&t_push1, (Optr)string_10551, (Optr)&t_send1, (Optr)PSend10552, (Optr)&t_push1, (Optr)string_10553, (Optr)&t_send1, (Optr)PSend10554, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10555, (Optr)&t_send1, (Optr)PSend10556, (Optr)&t_send1, (Optr)PSend10557, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10558, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10559, (Optr)&t_send1, (Optr)PSend10560, (Optr)&t_push1, (Optr)string_10561, (Optr)&t_send1, (Optr)PSend10562, (Optr)&t_send1, (Optr)PSend10563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10564, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10565, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10566, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10535 = new_Block_with(empty_Array, empty_Array, PThreadedCode10536, 6, PSend10540, PSend10547, PSend10557, PSend10563, PSend10564, PAssign10565);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10567 = new_Send((Optr)PBlock10526, SMB_whileFalse_, 1, (Optr)PBlock10535);
    Array PThreadedCode10522 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10523, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10524, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10525, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10526, (Optr)&t_push_closure, (Optr)PBlock10535, (Optr)&t_send1, (Optr)PSend10567, (Optr)&t_block_return);
    Block PBlock10521 = new_Block_with(empty_Array, empty_Array, PThreadedCode10522, 3, PSend10523, PAssign10524, PSend10567);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10569 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10571 = new_String(L"Error: Network Connection closed");
    Constant string_10571_Const = new_Constant((Optr)string_10571);
    // warn:. 
    Send PSend10572 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10571_Const);
    String string_10573 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10574 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10573_Const = new_Constant((Optr)string_10573);
    // ,. 
    Send PSend10575 = new_Send((Optr)string_10573_Const, SMB__append_, 1, (Optr)PSend10574);
    // warn:. 
    Send PSend10576 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10575);
    Array PThreadedCode10570 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10571, (Optr)&t_send1, (Optr)PSend10572, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10573, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10574, (Optr)&t_send1, (Optr)PSend10575, (Optr)&t_send1, (Optr)PSend10576, (Optr)&t_method_return);
    Block PBlock10568 = new_Block_with(PArray10569, empty_Array, PThreadedCode10570, 2, PSend10572, PSend10576);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10577 = new_Send((Optr)PBlock10521, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10568);
    String string_10578 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10579 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10578_Const = new_Constant((Optr)string_10578);
    // ,. 
    Send PSend10580 = new_Send((Optr)string_10578_Const, SMB__append_, 1, (Optr)PSend10579);
    // warn:. 
    Send PSend10581 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10580);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10582 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10583 = new_String(L"Status ");
    // isConnected. 
    Send PSend10584 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10583_Const = new_Constant((Optr)string_10583);
    // ,. 
    Send PSend10585 = new_Send((Optr)string_10583_Const, SMB__append_, 1, (Optr)PSend10584);
    // warn:. 
    Send PSend10586 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10585);
    Array PThreadedCode10514 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10515, (Optr)&t_send1, (Optr)PSend10516, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10517, (Optr)&t_send1, (Optr)PSend10518, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10519, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10520, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10521, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10568, (Optr)&t_send2, (Optr)PSend10577, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10578, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10579, (Optr)&t_send1, (Optr)PSend10580, (Optr)&t_send1, (Optr)PSend10581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10582, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10583, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10584, (Optr)&t_send1, (Optr)PSend10585, (Optr)&t_send1, (Optr)PSend10586, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10511 = new_Method_with(PArray10512, PArray10513, empty_Array, PThreadedCode10514, 8, PSend10516, PSend10518, PAssign10519, PSend10577, PSend10581, PSend10582, PSend10586, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10511, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10588 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10588, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10587, HEADER(IO_Socket_Class));
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