#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9693 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9695 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9694 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9695, (Optr)&t_method_return);
    Method PMethod9692 = new_Method_with(PArray9693, empty_Array, empty_Array, PThreadedCode9694, 1, PSend9695);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9692, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9699 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9698 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9699);
    Array PArray9697 = new_Array_with(1, (Optr)PAnnotation9698);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9701 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9700 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9701, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9696 = new_NativeMethod_with(empty_Array, empty_Array, PArray9697, PThreadedCode9700, 2, PSend9701, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9696, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9703 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9707 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9706 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9707, (Optr)&t_block_return);
    Block PBlock9705 = new_Block_with(empty_Array, empty_Array, PThreadedCode9706, 1, PSend9707);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9710 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9711 = new_Send((Optr)PSend9710, SMB_yield, 0);
    Array PThreadedCode9709 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9710, (Optr)&t_send0, (Optr)PSend9711, (Optr)&t_block_return);
    Block PBlock9708 = new_Block_with(empty_Array, empty_Array, PThreadedCode9709, 1, PSend9711);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9712 = new_Send((Optr)PBlock9705, SMB_whileFalse_, 1, (Optr)PBlock9708);
    String string_9713 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9713_Const = new_Constant((Optr)string_9713);
    // warn:. 
    Send PSend9714 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9713_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9715 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9704 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9705, (Optr)&t_push_closure, (Optr)PBlock9708, (Optr)&t_send1, (Optr)PSend9712, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9713, (Optr)&t_send1, (Optr)PSend9714, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9715, (Optr)&t_method_return);
    Method PMethod9702 = new_Method_with(PArray9703, empty_Array, empty_Array, PThreadedCode9704, 3, PSend9712, PSend9714, PSend9715);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9702, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9717 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9720 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9719 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9720);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9721 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9718 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9719, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9720, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9721, (Optr)&t_method_return);
    Method PMethod9716 = new_Method_with(empty_Array, PArray9717, empty_Array, PThreadedCode9718, 2, PAssign9719, PSend9721);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9716, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9723 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9725 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9724 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9725, (Optr)&t_method_return);
    Method PMethod9722 = new_Method_with(PArray9723, empty_Array, empty_Array, PThreadedCode9724, 1, PSend9725);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9722, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9727 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9730 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9729 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9730);
    Array PArray9728 = new_Array_with(1, (Optr)PAnnotation9729);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9732 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9731 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9732, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9726 = new_NativeMethod_with(PArray9727, empty_Array, PArray9728, PThreadedCode9731, 2, PSend9732, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9726, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9736 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9735 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9736);
    Array PArray9734 = new_Array_with(1, (Optr)PAnnotation9735);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9738 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9737 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9738, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9733 = new_NativeMethod_with(empty_Array, empty_Array, PArray9734, PThreadedCode9737, 2, PSend9738, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9733, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9740 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9741 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9747 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9746 = new_Send((Optr)PSend9747, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9745 = new_Send((Optr)PSend9746, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9744 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9745);
    Assign PAssign9743 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9744);
    // size. 
    Send PSend9749 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9748 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9749);
    String string_9750 = new_String(L"-Data: ");
    Constant string_9750_Const = new_Constant((Optr)string_9750);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9751 = new_Send((Optr)string_9750_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9752 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9751);
    String string_9753 = new_String(L"-Size: ");
    Constant string_9753_Const = new_Constant((Optr)string_9753);
    // ,. 
    Send PSend9754 = new_Send((Optr)string_9753_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend9755 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9754);
    String string_9756 = new_String(L"-Buffer size ");
    // size. 
    Send PSend9757 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_9756_Const = new_Constant((Optr)string_9756);
    // ,. 
    Send PSend9758 = new_Send((Optr)string_9756_Const, SMB__append_, 1, (Optr)PSend9757);
    // warn:. 
    Send PSend9759 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9758);
    String string_9760 = new_String(L"-Buffer before: ");
    Constant string_9760_Const = new_Constant((Optr)string_9760);
    // warn:. 
    Send PSend9761 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9760_Const);
    // warn:. 
    Send PSend9762 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend9763 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend9764 = new_Send((Optr)PSend9763, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend9765 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend9764, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_9766 = new_String(L"-Buffer after ");
    Constant string_9766_Const = new_Constant((Optr)string_9766);
    // warn:. 
    Send PSend9767 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9766_Const);
    // warn:. 
    Send PSend9768 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9742 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9743, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9747, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9746, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9745, (Optr)&t_send1, (Optr)PSend9744, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9748, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9749, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9750, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9751, (Optr)&t_send1, (Optr)PSend9752, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9753, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9754, (Optr)&t_send1, (Optr)PSend9755, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9756, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9757, (Optr)&t_send1, (Optr)PSend9758, (Optr)&t_send1, (Optr)PSend9759, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9760, (Optr)&t_send1, (Optr)PSend9761, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9762, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9763, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9764, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend9765, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9766, (Optr)&t_send1, (Optr)PSend9767, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9768, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9739 = new_Method_with(PArray9740, PArray9741, empty_Array, PThreadedCode9742, 11, PAssign9743, PAssign9748, PSend9752, PSend9755, PSend9759, PSend9761, PSend9762, PSend9765, PSend9767, PSend9768, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9739, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9770 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9772 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9773 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9772);
    Array PThreadedCode9771 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9772, (Optr)&t_send1, (Optr)PSend9773, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9769 = new_Method_with(PArray9770, empty_Array, empty_Array, PThreadedCode9771, 2, PSend9773, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod9769, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend9776 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign9777 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode9775 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9776, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9777, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9775, 3, PSend9776, PAssign9777, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9774, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray9779 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend9781 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode9780 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend9781, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9778 = new_Method_with(PArray9779, empty_Array, empty_Array, PThreadedCode9780, 2, PSend9781, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod9778, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9785 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9784 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_9785);
    Array PArray9783 = new_Array_with(1, (Optr)PAnnotation9784);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9787 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9786 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9787, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9782 = new_NativeMethod_with(empty_Array, empty_Array, PArray9783, PThreadedCode9786, 2, PSend9787, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod9782, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9789 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9793 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9792 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9793, (Optr)&t_block_return);
    Block PBlock9791 = new_Block_with(empty_Array, empty_Array, PThreadedCode9792, 1, PSend9793);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9796 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9797 = new_Send((Optr)PSend9796, SMB_primYield, 0);
    Array PThreadedCode9795 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9796, (Optr)&t_send0, (Optr)PSend9797, (Optr)&t_block_return);
    Block PBlock9794 = new_Block_with(empty_Array, empty_Array, PThreadedCode9795, 1, PSend9797);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9798 = new_Send((Optr)PBlock9791, SMB_whileFalse_, 1, (Optr)PBlock9794);
    String string_9799 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9799_Const = new_Constant((Optr)string_9799);
    // warn:. 
    Send PSend9800 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9799_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend9801 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode9790 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9791, (Optr)&t_push_closure, (Optr)PBlock9794, (Optr)&t_send1, (Optr)PSend9798, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9799, (Optr)&t_send1, (Optr)PSend9800, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend9801, (Optr)&t_method_return);
    Method PMethod9788 = new_Method_with(PArray9789, empty_Array, empty_Array, PThreadedCode9790, 3, PSend9798, PSend9800, PSend9801);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod9788, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9803 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9807 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9806 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9807, (Optr)&t_block_return);
    Block PBlock9805 = new_Block_with(empty_Array, empty_Array, PThreadedCode9806, 1, PSend9807);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9810 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9811 = new_Send((Optr)PSend9810, SMB_primYield, 0);
    Array PThreadedCode9809 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9810, (Optr)&t_send0, (Optr)PSend9811, (Optr)&t_block_return);
    Block PBlock9808 = new_Block_with(empty_Array, empty_Array, PThreadedCode9809, 1, PSend9811);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9812 = new_Send((Optr)PBlock9805, SMB_whileFalse_, 1, (Optr)PBlock9808);
    String string_9813 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9813_Const = new_Constant((Optr)string_9813);
    // warn:. 
    Send PSend9814 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9813_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend9815 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9804 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9805, (Optr)&t_push_closure, (Optr)PBlock9808, (Optr)&t_send1, (Optr)PSend9812, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9813, (Optr)&t_send1, (Optr)PSend9814, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9815, (Optr)&t_method_return);
    Method PMethod9802 = new_Method_with(PArray9803, empty_Array, empty_Array, PThreadedCode9804, 3, PSend9812, PSend9814, PSend9815);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod9802, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9817 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9819 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9818 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9819, (Optr)&t_method_return);
    Method PMethod9816 = new_Method_with(PArray9817, empty_Array, empty_Array, PThreadedCode9818, 1, PSend9819);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9816, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend9822 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign9826 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9825 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign9826, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9824 = new_Block_with(empty_Array, empty_Array, PThreadedCode9825, 1, PAssign9826);
    // ifFalse:. 
    Send PSend9823 = new_Send((Optr)PSend9822, SMB_ifFalse_, 1, (Optr)PBlock9824);
    Array PThreadedCode9821 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9822, (Optr)&t_send_ifFalse_, (Optr)PSend9823, (Optr)PBlock9824, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9820 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9821, 2, PSend9823, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod9820, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9828 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9831 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation9830 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_9831);
    Array PArray9829 = new_Array_with(1, (Optr)PAnnotation9830);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9833 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9832 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9833, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9827 = new_NativeMethod_with(PArray9828, empty_Array, PArray9829, PThreadedCode9832, 2, PSend9833, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod9827, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9835 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9838 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9842 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode9841 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend9842, (Optr)&t_block_return);
    Block PBlock9840 = new_Block_with(empty_Array, empty_Array, PThreadedCode9841, 1, PSend9842);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9843 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock9840);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9844 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend9845 = new_Send((Optr)PSend9844, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode9839 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9840, (Optr)&t_send1, (Optr)PSend9843, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9844, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9845, (Optr)&t_method_return);
    Block PBlock9837 = new_Block_with(PArray9838, empty_Array, PThreadedCode9839, 2, PSend9843, PSend9845);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9846 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9837);
    Array PThreadedCode9836 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9837, (Optr)&t_send1, (Optr)PSend9846, (Optr)&t_method_return);
    Method PMethod9834 = new_Method_with(empty_Array, PArray9835, empty_Array, PThreadedCode9836, 1, PSend9846);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod9834, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray9848 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9851 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation9850 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_9851);
    Array PArray9849 = new_Array_with(1, (Optr)PAnnotation9850);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9853 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9852 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9853, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9847 = new_NativeMethod_with(PArray9848, empty_Array, PArray9849, PThreadedCode9852, 2, PSend9853, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod9847, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9856 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9855 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9856, (Optr)&t_method_return);
    Method PMethod9854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9855, 1, PSend9856);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod9854, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9860 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation9859 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_9860);
    Array PArray9858 = new_Array_with(1, (Optr)PAnnotation9859);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9862 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9861 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9862, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9857 = new_NativeMethod_with(empty_Array, empty_Array, PArray9858, PThreadedCode9861, 2, PSend9862, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod9857, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9865 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9866 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode9864 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9865, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend9866, (Optr)&t_method_return);
    Method PMethod9863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9864, 2, PSend9865, PSend9866);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod9863, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign9869 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign9870 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9868 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign9869, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9870, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9867 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9868, 3, PAssign9869, PAssign9870, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod9867, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend9873 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode9872 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9873, (Optr)&t_method_return);
    Method PMethod9871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9872, 1, PSend9873);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod9871, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9875 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9878 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend9880 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9884 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_9884_Const = new_Constant((Optr)string_9884);
    // escape:. 
    Send PSend9885 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9884_Const);
    Array PThreadedCode9883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9884, (Optr)&t_send1, (Optr)PSend9885, (Optr)&t_block_return);
    Block PBlock9882 = new_Block_with(empty_Array, empty_Array, PThreadedCode9883, 1, PSend9885);
    // ifTrue:. 
    Send PSend9881 = new_Send((Optr)PSend9880, SMB_ifTrue_, 1, (Optr)PBlock9882);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9887 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign9886 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend9887);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend9888 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_9892 = new_String(L"invalidSocketHandle");
    Constant string_9892_Const = new_Constant((Optr)string_9892);
    // escape:. 
    Send PSend9893 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9892_Const);
    Array PThreadedCode9891 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9892, (Optr)&t_send1, (Optr)PSend9893, (Optr)&t_block_return);
    Block PBlock9890 = new_Block_with(empty_Array, empty_Array, PThreadedCode9891, 1, PSend9893);
    // ifTrue:. 
    Send PSend9889 = new_Send((Optr)PSend9888, SMB_ifTrue_, 1, (Optr)PBlock9890);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend9894 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_9898 = new_String(L"unconnected");
    Constant string_9898_Const = new_Constant((Optr)string_9898);
    // escape:. 
    Send PSend9899 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9898_Const);
    Array PThreadedCode9897 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9898, (Optr)&t_send1, (Optr)PSend9899, (Optr)&t_block_return);
    Block PBlock9896 = new_Block_with(empty_Array, empty_Array, PThreadedCode9897, 1, PSend9899);
    // ifTrue:. 
    Send PSend9895 = new_Send((Optr)PSend9894, SMB_ifTrue_, 1, (Optr)PBlock9896);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend9900 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_9904 = new_String(L"waitingForConnection");
    Constant string_9904_Const = new_Constant((Optr)string_9904);
    // escape:. 
    Send PSend9905 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9904_Const);
    Array PThreadedCode9903 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9904, (Optr)&t_send1, (Optr)PSend9905, (Optr)&t_block_return);
    Block PBlock9902 = new_Block_with(empty_Array, empty_Array, PThreadedCode9903, 1, PSend9905);
    // ifTrue:. 
    Send PSend9901 = new_Send((Optr)PSend9900, SMB_ifTrue_, 1, (Optr)PBlock9902);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend9906 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_9910 = new_String(L"connected");
    Constant string_9910_Const = new_Constant((Optr)string_9910);
    // escape:. 
    Send PSend9911 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9910_Const);
    Array PThreadedCode9909 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9910, (Optr)&t_send1, (Optr)PSend9911, (Optr)&t_block_return);
    Block PBlock9908 = new_Block_with(empty_Array, empty_Array, PThreadedCode9909, 1, PSend9911);
    // ifTrue:. 
    Send PSend9907 = new_Send((Optr)PSend9906, SMB_ifTrue_, 1, (Optr)PBlock9908);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend9912 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_9916 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_9916_Const = new_Constant((Optr)string_9916);
    // escape:. 
    Send PSend9917 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9916_Const);
    Array PThreadedCode9915 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9916, (Optr)&t_send1, (Optr)PSend9917, (Optr)&t_block_return);
    Block PBlock9914 = new_Block_with(empty_Array, empty_Array, PThreadedCode9915, 1, PSend9917);
    // ifTrue:. 
    Send PSend9913 = new_Send((Optr)PSend9912, SMB_ifTrue_, 1, (Optr)PBlock9914);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend9918 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_9922 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_9922_Const = new_Constant((Optr)string_9922);
    // escape:. 
    Send PSend9923 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9922_Const);
    Array PThreadedCode9921 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9922, (Optr)&t_send1, (Optr)PSend9923, (Optr)&t_block_return);
    Block PBlock9920 = new_Block_with(empty_Array, empty_Array, PThreadedCode9921, 1, PSend9923);
    // ifTrue:. 
    Send PSend9919 = new_Send((Optr)PSend9918, SMB_ifTrue_, 1, (Optr)PBlock9920);
    String string_9924 = new_String(L"unknown socket status");
    Array PThreadedCode9879 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend9880, (Optr)&t_send_ifTrue_, (Optr)PSend9881, (Optr)PBlock9882, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9886, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9887, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9888, (Optr)&t_send_ifTrue_, (Optr)PSend9889, (Optr)PBlock9890, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend9894, (Optr)&t_send_ifTrue_, (Optr)PSend9895, (Optr)PBlock9896, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9900, (Optr)&t_send_ifTrue_, (Optr)PSend9901, (Optr)PBlock9902, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend9906, (Optr)&t_send_ifTrue_, (Optr)PSend9907, (Optr)PBlock9908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend9912, (Optr)&t_send_ifTrue_, (Optr)PSend9913, (Optr)PBlock9914, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend9918, (Optr)&t_send_ifTrue_, (Optr)PSend9919, (Optr)PBlock9920, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_9924, (Optr)&t_method_return);
    Constant string_9924_Const = new_Constant((Optr)string_9924);
    Block PBlock9877 = new_Block_with(PArray9878, empty_Array, PThreadedCode9879, 9, PSend9881, PAssign9886, PSend9889, PSend9895, PSend9901, PSend9907, PSend9913, PSend9919, string_9924_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9925 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9877);
    Array PThreadedCode9876 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9877, (Optr)&t_send1, (Optr)PSend9925, (Optr)&t_method_return);
    Method PMethod9874 = new_Method_with(empty_Array, PArray9875, empty_Array, PThreadedCode9876, 1, PSend9925);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod9874, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9928 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode9927 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9928, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod9926 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9927, 2, PSend9928, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod9926, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9932 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation9931 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_9932);
    Array PArray9930 = new_Array_with(1, (Optr)PAnnotation9931);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9934 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9933 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9934, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9929 = new_NativeMethod_with(empty_Array, empty_Array, PArray9930, PThreadedCode9933, 2, PSend9934, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod9929, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9936 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9939 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation9938 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_9939);
    Array PArray9937 = new_Array_with(1, (Optr)PAnnotation9938);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9941 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9940 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9941, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9935 = new_NativeMethod_with(PArray9936, empty_Array, PArray9937, PThreadedCode9940, 2, PSend9941, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod9935, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9943 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9945 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9944 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9945, (Optr)&t_method_return);
    Method PMethod9942 = new_Method_with(PArray9943, empty_Array, empty_Array, PThreadedCode9944, 1, PSend9945);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod9942, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend9950 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode9949 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9950, (Optr)&t_block_return);
    Block PBlock9948 = new_Block_with(empty_Array, empty_Array, PThreadedCode9949, 1, PSend9950);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9953 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9954 = new_Send((Optr)PSend9953, SMB_primYield, 0);
    Array PThreadedCode9952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9953, (Optr)&t_send0, (Optr)PSend9954, (Optr)&t_block_return);
    Block PBlock9951 = new_Block_with(empty_Array, empty_Array, PThreadedCode9952, 1, PSend9954);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9955 = new_Send((Optr)PBlock9948, SMB_whileFalse_, 1, (Optr)PBlock9951);
    String string_9956 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9956_Const = new_Constant((Optr)string_9956);
    // warn:. 
    Send PSend9957 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9956_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend9958 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode9947 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock9948, (Optr)&t_push_closure, (Optr)PBlock9951, (Optr)&t_send1, (Optr)PSend9955, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9956, (Optr)&t_send1, (Optr)PSend9957, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9958, (Optr)&t_method_return);
    Method PMethod9946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9947, 3, PSend9955, PSend9957, PSend9958);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod9946, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9962 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation9961 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_9962);
    Array PArray9960 = new_Array_with(1, (Optr)PAnnotation9961);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9964 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9963 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9964, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9959 = new_NativeMethod_with(empty_Array, empty_Array, PArray9960, PThreadedCode9963, 2, PSend9964, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod9959, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9966 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend9969 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign9968 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend9969);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend9971 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign9970 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend9971);
    String string_9972 = new_String(L"Size returned -> ");
    Constant string_9972_Const = new_Constant((Optr)string_9972);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9973 = new_Send((Optr)string_9972_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9974 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9973);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9975 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode9967 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign9968, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend9969, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9970, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9971, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9972, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend9973, (Optr)&t_send1, (Optr)PSend9974, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9975, (Optr)&t_method_return);
    Method PMethod9965 = new_Method_with(empty_Array, PArray9966, empty_Array, PThreadedCode9967, 4, PAssign9968, PAssign9970, PSend9974, PSend9975);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod9965, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9979 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9978 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9979);
    Array PArray9977 = new_Array_with(1, (Optr)PAnnotation9978);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9981 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9980 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9981, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9976 = new_NativeMethod_with(empty_Array, empty_Array, PArray9977, PThreadedCode9980, 2, PSend9981, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod9976, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray9983 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend9987 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend9988 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode9986 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9987, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9988, (Optr)&t_block_return);
    Block PBlock9985 = new_Block_with(empty_Array, empty_Array, PThreadedCode9986, 2, PSend9987, PSend9988);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend9989 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock9985);
    Array PThreadedCode9984 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9985, (Optr)&t_send1, (Optr)PSend9989, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9982 = new_Method_with(PArray9983, empty_Array, empty_Array, PThreadedCode9984, 2, PSend9989, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod9982, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9991 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9993 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9992 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9993, (Optr)&t_method_return);
    Method PMethod9990 = new_Method_with(PArray9991, empty_Array, empty_Array, PThreadedCode9992, 1, PSend9993);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod9990, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9995 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9998 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation9997 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_9998);
    Array PArray9996 = new_Array_with(1, (Optr)PAnnotation9997);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10000 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9999 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10000, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9994 = new_NativeMethod_with(PArray9995, empty_Array, PArray9996, PThreadedCode9999, 2, PSend10000, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod9994, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray10002 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10004 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode10003 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend10004, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10001 = new_Method_with(PArray10002, empty_Array, empty_Array, PThreadedCode10003, 2, PSend10004, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod10001, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10008 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation10007 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_10008);
    Array PArray10006 = new_Array_with(1, (Optr)PAnnotation10007);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10010 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10009 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10010, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10005 = new_NativeMethod_with(empty_Array, empty_Array, PArray10006, PThreadedCode10009, 2, PSend10010, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod10005, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10014 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation10013 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_10014);
    Array PArray10012 = new_Array_with(1, (Optr)PAnnotation10013);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10016 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10015 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10016, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10011 = new_NativeMethod_with(empty_Array, empty_Array, PArray10012, PThreadedCode10015, 2, PSend10016, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod10011, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend10019 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode10018 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10019, (Optr)&t_method_return);
    Method PMethod10017 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10018, 1, PSend10019);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod10017, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10021 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10022 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10025 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10024 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10025);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10026 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10029 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10028 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10029, (Optr)&t_block_return);
    Block PBlock10027 = new_Block_with(empty_Array, empty_Array, PThreadedCode10028, 1, PSend10029);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10031 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10034 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10033 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10034);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray10036 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10038 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10039 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10038);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10040 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10041 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10040);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10043 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10042 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10043);
    // on:. 
    Send PSend10045 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10044 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10045);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray10047 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10049 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10050 = new_Send((Optr)PSend10049, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend10053 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend10054 = new_Send((Optr)PSend10053, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode10052 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10053, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend10054, (Optr)&t_block_return);
    Block PBlock10051 = new_Block_with(empty_Array, empty_Array, PThreadedCode10052, 1, PSend10054);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10055 = new_Send((Optr)PSend10050, SMB_and_, 1, (Optr)PBlock10051);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend10059 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode10058 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10059, (Optr)&t_block_return);
    Block PBlock10057 = new_Block_with(empty_Array, empty_Array, PThreadedCode10058, 1, PSend10059);
    String string_10062 = new_String(L"Received ");
    Constant string_10062_Const = new_Constant((Optr)string_10062);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10063 = new_Send((Optr)string_10062_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_10064 = new_String(L", handle=");
    Constant string_10064_Const = new_Constant((Optr)string_10064);
    // ,. 
    Send PSend10065 = new_Send((Optr)PSend10063, SMB__append_, 1, (Optr)string_10064_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10066 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10067 = new_Send((Optr)PSend10065, SMB__append_, 1, (Optr)PSend10066);
    // warn:. 
    Send PSend10068 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10067);
    String string_10069 = new_String(L"Received ");
    // size. 
    Send PSend10070 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10069_Const = new_Constant((Optr)string_10069);
    // ,. 
    Send PSend10071 = new_Send((Optr)string_10069_Const, SMB__append_, 1, (Optr)PSend10070);
    String string_10072 = new_String(L" bytes");
    Constant string_10072_Const = new_Constant((Optr)string_10072);
    // ,. 
    Send PSend10073 = new_Send((Optr)PSend10071, SMB__append_, 1, (Optr)string_10072_Const);
    String string_10074 = new_String(L", handle=");
    Constant string_10074_Const = new_Constant((Optr)string_10074);
    // ,. 
    Send PSend10075 = new_Send((Optr)PSend10073, SMB__append_, 1, (Optr)string_10074_Const);
    // hash. 
    Send PSend10076 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10077 = new_Send((Optr)PSend10075, SMB__append_, 1, (Optr)PSend10076);
    // warn:. 
    Send PSend10078 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10077);
    String string_10079 = new_String(L"Received ");
    // size. 
    Send PSend10080 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10079_Const = new_Constant((Optr)string_10079);
    // ,. 
    Send PSend10081 = new_Send((Optr)string_10079_Const, SMB__append_, 1, (Optr)PSend10080);
    String string_10082 = new_String(L" bytes");
    Constant string_10082_Const = new_Constant((Optr)string_10082);
    // ,. 
    Send PSend10083 = new_Send((Optr)PSend10081, SMB__append_, 1, (Optr)string_10082_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10084 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10083);
    Array PThreadedCode10061 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10062, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend10063, (Optr)&t_push1, (Optr)string_10064, (Optr)&t_send1, (Optr)PSend10065, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10066, (Optr)&t_send1, (Optr)PSend10067, (Optr)&t_send1, (Optr)PSend10068, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10069, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10070, (Optr)&t_send1, (Optr)PSend10071, (Optr)&t_push1, (Optr)string_10072, (Optr)&t_send1, (Optr)PSend10073, (Optr)&t_push1, (Optr)string_10074, (Optr)&t_send1, (Optr)PSend10075, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10076, (Optr)&t_send1, (Optr)PSend10077, (Optr)&t_send1, (Optr)PSend10078, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10079, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10080, (Optr)&t_send1, (Optr)PSend10081, (Optr)&t_push1, (Optr)string_10082, (Optr)&t_send1, (Optr)PSend10083, (Optr)&t_send1, (Optr)PSend10084, (Optr)&t_block_return);
    Block PBlock10060 = new_Block_with(empty_Array, empty_Array, PThreadedCode10061, 3, PSend10068, PSend10078, PSend10084);
    // ifTrue:ifFalse:. 
    Send PSend10056 = new_Send((Optr)PSend10055, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10057, (Optr)PBlock10060);
    Array PThreadedCode10048 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10049, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10050, (Optr)&t_push_closure, (Optr)PBlock10051, (Optr)&t_send1, (Optr)PSend10055, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10056, (Optr)PBlock10057, (Optr)PBlock10060, (Optr)&t_method_return);
    Block PBlock10046 = new_Block_with(PArray10047, empty_Array, PThreadedCode10048, 1, PSend10056);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10085 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock10046);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10087 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10089 = new_String(L"Error: Network Connection closed");
    Constant string_10089_Const = new_Constant((Optr)string_10089);
    // warn:. 
    Send PSend10090 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10089_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10091 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10092 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10093 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10092_Const = new_Constant((Optr)string_10092);
    // ,. 
    Send PSend10094 = new_Send((Optr)string_10092_Const, SMB__append_, 1, (Optr)PSend10093);
    // warn:. 
    Send PSend10095 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10094);
    Array PThreadedCode10088 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10089, (Optr)&t_send1, (Optr)PSend10090, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10091, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10092, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10093, (Optr)&t_send1, (Optr)PSend10094, (Optr)&t_send1, (Optr)PSend10095, (Optr)&t_method_return);
    Block PBlock10086 = new_Block_with(PArray10087, empty_Array, PThreadedCode10088, 3, PSend10090, PSend10091, PSend10095);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10096 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10086);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10098 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10100 = new_String(L"Will now try to close connection");
    Constant string_10100_Const = new_Constant((Optr)string_10100);
    // warn:. 
    Send PSend10101 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10100_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10102 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10103 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10104 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10103_Const = new_Constant((Optr)string_10103);
    // ,. 
    Send PSend10105 = new_Send((Optr)string_10103_Const, SMB__append_, 1, (Optr)PSend10104);
    // warn:. 
    Send PSend10106 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10105);
    Array PThreadedCode10099 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10100, (Optr)&t_send1, (Optr)PSend10101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10102, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10103, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10104, (Optr)&t_send1, (Optr)PSend10105, (Optr)&t_send1, (Optr)PSend10106, (Optr)&t_method_return);
    Block PBlock10097 = new_Block_with(PArray10098, empty_Array, PThreadedCode10099, 3, PSend10101, PSend10102, PSend10106);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10107 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10097);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10108 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode10037 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10038, (Optr)&t_send1, (Optr)PSend10039, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10040, (Optr)&t_send1, (Optr)PSend10041, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10042, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10043, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10044, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10045, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10046, (Optr)&t_send1, (Optr)PSend10085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10086, (Optr)&t_send1, (Optr)PSend10096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10097, (Optr)&t_send1, (Optr)PSend10107, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10108, (Optr)&t_method_return);
    Block PBlock10035 = new_Block_with(empty_Array, PArray10036, PThreadedCode10037, 8, PSend10039, PSend10041, PAssign10042, PAssign10044, PSend10085, PSend10096, PSend10107, PSend10108);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10109 = new_Send((Optr)PBlock10035, SMB_fork, 0);
    Array PThreadedCode10032 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10033, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10034, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10035, (Optr)&t_send0, (Optr)PSend10109, (Optr)&t_method_return);
    Block PBlock10030 = new_Block_with(empty_Array, PArray10031, PThreadedCode10032, 2, PAssign10033, PSend10109);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10110 = new_Send((Optr)PBlock10027, SMB_whileTrue_, 1, (Optr)PBlock10030);
    Array PThreadedCode10023 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10024, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10025, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10026, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10027, (Optr)&t_push_closure, (Optr)PBlock10030, (Optr)&t_send1, (Optr)PSend10110, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10020 = new_Method_with(PArray10021, PArray10022, empty_Array, PThreadedCode10023, 4, PAssign10024, PSend10026, PSend10110, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod10020, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10112 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10113 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10116 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10115 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10116);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10117 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10119 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10118 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10119);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10121 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10120 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10121);
    String string_10122 = new_String(L"* read from ");
    Constant string_10122_Const = new_Constant((Optr)string_10122);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10123 = new_Send((Optr)string_10122_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10124 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10123);
    String string_10125 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10126 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10125_Const = new_Constant((Optr)string_10125);
    // ,. 
    Send PSend10127 = new_Send((Optr)string_10125_Const, SMB__append_, 1, (Optr)PSend10126);
    String string_10128 = new_String(L" bytes");
    Constant string_10128_Const = new_Constant((Optr)string_10128);
    // ,. 
    Send PSend10129 = new_Send((Optr)PSend10127, SMB__append_, 1, (Optr)string_10128_Const);
    // warn:. 
    Send PSend10130 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10129);
    String string_10131 = new_String(L"Received ");
    // size. 
    Send PSend10132 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10131_Const = new_Constant((Optr)string_10131);
    // ,. 
    Send PSend10133 = new_Send((Optr)string_10131_Const, SMB__append_, 1, (Optr)PSend10132);
    String string_10134 = new_String(L" bytes");
    Constant string_10134_Const = new_Constant((Optr)string_10134);
    // ,. 
    Send PSend10135 = new_Send((Optr)PSend10133, SMB__append_, 1, (Optr)string_10134_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10136 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10135);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10137 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10138 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10114 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10115, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10116, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10117, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10118, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10120, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10121, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10122, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10123, (Optr)&t_send1, (Optr)PSend10124, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10125, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10126, (Optr)&t_send1, (Optr)PSend10127, (Optr)&t_push1, (Optr)string_10128, (Optr)&t_send1, (Optr)PSend10129, (Optr)&t_send1, (Optr)PSend10130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10131, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10132, (Optr)&t_send1, (Optr)PSend10133, (Optr)&t_push1, (Optr)string_10134, (Optr)&t_send1, (Optr)PSend10135, (Optr)&t_send1, (Optr)PSend10136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10138, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10111 = new_Method_with(PArray10112, PArray10113, empty_Array, PThreadedCode10114, 10, PAssign10115, PSend10117, PAssign10118, PAssign10120, PSend10124, PSend10130, PSend10136, PSend10137, PSend10138, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10111, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10141 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10140 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10141, (Optr)&t_method_return);
    Method PMethod10139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10140, 1, PSend10141);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10139, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10143 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10143, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10142, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10146 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10146_Const = new_Constant((Optr)string_10146);
    // require:at:. 
    Send PSend10147 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10146_Const);
    Array PThreadedCode10145 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10146, (Optr)&t_send2, (Optr)PSend10147, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10145, 2, PSend10147, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10144, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10149 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10150 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10153 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10152 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10153);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10154 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10157 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10156 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10157, (Optr)&t_block_return);
    Block PBlock10155 = new_Block_with(empty_Array, empty_Array, PThreadedCode10156, 1, PSend10157);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10159 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10162 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10161 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10162);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10166 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10165 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10166);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10169 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10170 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10170_Const = new_Constant((Optr)char_10170);
    // =. 
    Send PSend10171 = new_Send((Optr)PSend10169, SMB__equals_, 1, (Optr)char_10170_Const);
    Array PThreadedCode10168 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10169, (Optr)&t_push1, (Optr)char_10170, (Optr)&t_send1, (Optr)PSend10171, (Optr)&t_block_return);
    Block PBlock10167 = new_Block_with(empty_Array, empty_Array, PThreadedCode10168, 1, PSend10171);
    String string_10174 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10175 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10174_Const = new_Constant((Optr)string_10174);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10176 = new_Send((Optr)string_10174_Const, SMB__append_, 1, (Optr)PSend10175);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10177 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10176);
    String string_10178 = new_String(L"Received ");
    Constant string_10178_Const = new_Constant((Optr)string_10178);
    // ,. 
    Send PSend10179 = new_Send((Optr)string_10178_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10180 = new_String(L", handle=");
    Constant string_10180_Const = new_Constant((Optr)string_10180);
    // ,. 
    Send PSend10181 = new_Send((Optr)PSend10179, SMB__append_, 1, (Optr)string_10180_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10182 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10183 = new_Send((Optr)PSend10181, SMB__append_, 1, (Optr)PSend10182);
    // warn:. 
    Send PSend10184 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10183);
    String string_10185 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10186 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10185_Const = new_Constant((Optr)string_10185);
    // ,. 
    Send PSend10187 = new_Send((Optr)string_10185_Const, SMB__append_, 1, (Optr)PSend10186);
    String string_10188 = new_String(L" bytes");
    Constant string_10188_Const = new_Constant((Optr)string_10188);
    // ,. 
    Send PSend10189 = new_Send((Optr)PSend10187, SMB__append_, 1, (Optr)string_10188_Const);
    String string_10190 = new_String(L", handle=");
    Constant string_10190_Const = new_Constant((Optr)string_10190);
    // ,. 
    Send PSend10191 = new_Send((Optr)PSend10189, SMB__append_, 1, (Optr)string_10190_Const);
    // hash. 
    Send PSend10192 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10193 = new_Send((Optr)PSend10191, SMB__append_, 1, (Optr)PSend10192);
    // warn:. 
    Send PSend10194 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10193);
    String string_10195 = new_String(L"Received ");
    // size. 
    Send PSend10196 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10195_Const = new_Constant((Optr)string_10195);
    // ,. 
    Send PSend10197 = new_Send((Optr)string_10195_Const, SMB__append_, 1, (Optr)PSend10196);
    String string_10198 = new_String(L" bytes");
    Constant string_10198_Const = new_Constant((Optr)string_10198);
    // ,. 
    Send PSend10199 = new_Send((Optr)PSend10197, SMB__append_, 1, (Optr)string_10198_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10200 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10199);
    // receive. 
    Send PSend10202 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10201 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10202);
    Array PThreadedCode10173 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10174, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10175, (Optr)&t_send1, (Optr)PSend10176, (Optr)&t_send1, (Optr)PSend10177, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10178, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10179, (Optr)&t_push1, (Optr)string_10180, (Optr)&t_send1, (Optr)PSend10181, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10182, (Optr)&t_send1, (Optr)PSend10183, (Optr)&t_send1, (Optr)PSend10184, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10185, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10186, (Optr)&t_send1, (Optr)PSend10187, (Optr)&t_push1, (Optr)string_10188, (Optr)&t_send1, (Optr)PSend10189, (Optr)&t_push1, (Optr)string_10190, (Optr)&t_send1, (Optr)PSend10191, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10192, (Optr)&t_send1, (Optr)PSend10193, (Optr)&t_send1, (Optr)PSend10194, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10195, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10196, (Optr)&t_send1, (Optr)PSend10197, (Optr)&t_push1, (Optr)string_10198, (Optr)&t_send1, (Optr)PSend10199, (Optr)&t_send1, (Optr)PSend10200, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10201, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10202, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10172 = new_Block_with(empty_Array, empty_Array, PThreadedCode10173, 5, PSend10177, PSend10184, PSend10194, PSend10200, PAssign10201);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10203 = new_Send((Optr)PBlock10167, SMB_whileFalse_, 1, (Optr)PBlock10172);
    String string_10204 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10205 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10204_Const = new_Constant((Optr)string_10204);
    // ,. 
    Send PSend10206 = new_Send((Optr)string_10204_Const, SMB__append_, 1, (Optr)PSend10205);
    // warn:. 
    Send PSend10207 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10206);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10208 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10209 = new_String(L"Status ");
    // isConnected. 
    Send PSend10210 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10209_Const = new_Constant((Optr)string_10209);
    // ,. 
    Send PSend10211 = new_Send((Optr)string_10209_Const, SMB__append_, 1, (Optr)PSend10210);
    // warn:. 
    Send PSend10212 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10211);
    Array PThreadedCode10164 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10165, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10167, (Optr)&t_push_closure, (Optr)PBlock10172, (Optr)&t_send1, (Optr)PSend10203, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10204, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10205, (Optr)&t_send1, (Optr)PSend10206, (Optr)&t_send1, (Optr)PSend10207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10208, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10209, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10210, (Optr)&t_send1, (Optr)PSend10211, (Optr)&t_send1, (Optr)PSend10212, (Optr)&t_block_return);
    Block PBlock10163 = new_Block_with(empty_Array, empty_Array, PThreadedCode10164, 5, PAssign10165, PSend10203, PSend10207, PSend10208, PSend10212);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10213 = new_Send((Optr)PBlock10163, SMB_fork, 0);
    Array PThreadedCode10160 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10161, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10163, (Optr)&t_send0, (Optr)PSend10213, (Optr)&t_method_return);
    Block PBlock10158 = new_Block_with(empty_Array, PArray10159, PThreadedCode10160, 2, PAssign10161, PSend10213);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10214 = new_Send((Optr)PBlock10155, SMB_whileTrue_, 1, (Optr)PBlock10158);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10215 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10151 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10152, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10153, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10154, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10155, (Optr)&t_push_closure, (Optr)PBlock10158, (Optr)&t_send1, (Optr)PSend10214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10215, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10148 = new_Method_with(PArray10149, PArray10150, empty_Array, PThreadedCode10151, 5, PAssign10152, PSend10154, PSend10214, PSend10215, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10148, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10217 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10218 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10221 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10220 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10221);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10222 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10225 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10224 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10225, (Optr)&t_block_return);
    Block PBlock10223 = new_Block_with(empty_Array, empty_Array, PThreadedCode10224, 1, PSend10225);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10227 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10230 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10229 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10230);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10233 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10232 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10233, (Optr)&t_block_return);
    Block PBlock10231 = new_Block_with(empty_Array, empty_Array, PThreadedCode10232, 1, PSend10233);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10234 = new_Send((Optr)PBlock10231, SMB_fork, 0);
    Array PThreadedCode10228 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10229, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10231, (Optr)&t_send0, (Optr)PSend10234, (Optr)&t_method_return);
    Block PBlock10226 = new_Block_with(empty_Array, PArray10227, PThreadedCode10228, 2, PAssign10229, PSend10234);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10235 = new_Send((Optr)PBlock10223, SMB_whileTrue_, 1, (Optr)PBlock10226);
    Array PThreadedCode10219 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10220, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10221, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10222, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10223, (Optr)&t_push_closure, (Optr)PBlock10226, (Optr)&t_send1, (Optr)PSend10235, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10216 = new_Method_with(PArray10217, PArray10218, empty_Array, PThreadedCode10219, 4, PAssign10220, PSend10222, PSend10235, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10216, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10237 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10238 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10240 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10241 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10240);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10242 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10243 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10242);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10245 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10244 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10245);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10248 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10250 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10249 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10250);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10253 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10254 = new_Send((Optr)PSend10253, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10257 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10170 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10170_Const = new_Constant((Optr)char_10170);
    // =. 
    Send PSend10258 = new_Send((Optr)PSend10257, SMB__equals_, 1, (Optr)char_10170_Const);
    Array PThreadedCode10256 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10257, (Optr)&t_push1, (Optr)char_10170, (Optr)&t_send1, (Optr)PSend10258, (Optr)&t_block_return);
    Block PBlock10255 = new_Block_with(empty_Array, empty_Array, PThreadedCode10256, 1, PSend10258);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10259 = new_Send((Optr)PSend10254, SMB_and_, 1, (Optr)PBlock10255);
    Array PThreadedCode10252 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10253, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10254, (Optr)&t_push_closure, (Optr)PBlock10255, (Optr)&t_send1, (Optr)PSend10259, (Optr)&t_block_return);
    Block PBlock10251 = new_Block_with(empty_Array, empty_Array, PThreadedCode10252, 1, PSend10259);
    String string_10262 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10263 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10262_Const = new_Constant((Optr)string_10262);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10264 = new_Send((Optr)string_10262_Const, SMB__append_, 1, (Optr)PSend10263);
    // warn:. 
    Send PSend10265 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10264);
    String string_10266 = new_String(L"Received ");
    Constant string_10266_Const = new_Constant((Optr)string_10266);
    // ,. 
    Send PSend10267 = new_Send((Optr)string_10266_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10268 = new_String(L", handle=");
    Constant string_10268_Const = new_Constant((Optr)string_10268);
    // ,. 
    Send PSend10269 = new_Send((Optr)PSend10267, SMB__append_, 1, (Optr)string_10268_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10270 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10271 = new_Send((Optr)PSend10269, SMB__append_, 1, (Optr)PSend10270);
    // warn:. 
    Send PSend10272 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10271);
    String string_10273 = new_String(L"Received ");
    // size. 
    Send PSend10274 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10273_Const = new_Constant((Optr)string_10273);
    // ,. 
    Send PSend10275 = new_Send((Optr)string_10273_Const, SMB__append_, 1, (Optr)PSend10274);
    String string_10276 = new_String(L" bytes");
    Constant string_10276_Const = new_Constant((Optr)string_10276);
    // ,. 
    Send PSend10277 = new_Send((Optr)PSend10275, SMB__append_, 1, (Optr)string_10276_Const);
    String string_10278 = new_String(L", handle=");
    Constant string_10278_Const = new_Constant((Optr)string_10278);
    // ,. 
    Send PSend10279 = new_Send((Optr)PSend10277, SMB__append_, 1, (Optr)string_10278_Const);
    // hash. 
    Send PSend10280 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10281 = new_Send((Optr)PSend10279, SMB__append_, 1, (Optr)PSend10280);
    // warn:. 
    Send PSend10282 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10281);
    String string_10283 = new_String(L"Received ");
    // size. 
    Send PSend10284 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10283_Const = new_Constant((Optr)string_10283);
    // ,. 
    Send PSend10285 = new_Send((Optr)string_10283_Const, SMB__append_, 1, (Optr)PSend10284);
    String string_10286 = new_String(L" bytes");
    Constant string_10286_Const = new_Constant((Optr)string_10286);
    // ,. 
    Send PSend10287 = new_Send((Optr)PSend10285, SMB__append_, 1, (Optr)string_10286_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10288 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10287);
    // receiveDataIfAvailable. 
    Send PSend10289 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10291 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10290 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10291);
    Array PThreadedCode10261 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10262, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10263, (Optr)&t_send1, (Optr)PSend10264, (Optr)&t_send1, (Optr)PSend10265, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10266, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10267, (Optr)&t_push1, (Optr)string_10268, (Optr)&t_send1, (Optr)PSend10269, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10270, (Optr)&t_send1, (Optr)PSend10271, (Optr)&t_send1, (Optr)PSend10272, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10273, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10274, (Optr)&t_send1, (Optr)PSend10275, (Optr)&t_push1, (Optr)string_10276, (Optr)&t_send1, (Optr)PSend10277, (Optr)&t_push1, (Optr)string_10278, (Optr)&t_send1, (Optr)PSend10279, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10280, (Optr)&t_send1, (Optr)PSend10281, (Optr)&t_send1, (Optr)PSend10282, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10283, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10284, (Optr)&t_send1, (Optr)PSend10285, (Optr)&t_push1, (Optr)string_10286, (Optr)&t_send1, (Optr)PSend10287, (Optr)&t_send1, (Optr)PSend10288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10289, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10290, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10291, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10260 = new_Block_with(empty_Array, empty_Array, PThreadedCode10261, 6, PSend10265, PSend10272, PSend10282, PSend10288, PSend10289, PAssign10290);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10292 = new_Send((Optr)PBlock10251, SMB_whileFalse_, 1, (Optr)PBlock10260);
    Array PThreadedCode10247 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10248, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10249, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10250, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10251, (Optr)&t_push_closure, (Optr)PBlock10260, (Optr)&t_send1, (Optr)PSend10292, (Optr)&t_block_return);
    Block PBlock10246 = new_Block_with(empty_Array, empty_Array, PThreadedCode10247, 3, PSend10248, PAssign10249, PSend10292);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10294 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10296 = new_String(L"Error: Network Connection closed");
    Constant string_10296_Const = new_Constant((Optr)string_10296);
    // warn:. 
    Send PSend10297 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10296_Const);
    String string_10298 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10299 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10298_Const = new_Constant((Optr)string_10298);
    // ,. 
    Send PSend10300 = new_Send((Optr)string_10298_Const, SMB__append_, 1, (Optr)PSend10299);
    // warn:. 
    Send PSend10301 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10300);
    Array PThreadedCode10295 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10296, (Optr)&t_send1, (Optr)PSend10297, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10298, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10299, (Optr)&t_send1, (Optr)PSend10300, (Optr)&t_send1, (Optr)PSend10301, (Optr)&t_method_return);
    Block PBlock10293 = new_Block_with(PArray10294, empty_Array, PThreadedCode10295, 2, PSend10297, PSend10301);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10302 = new_Send((Optr)PBlock10246, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10293);
    String string_10303 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10304 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10303_Const = new_Constant((Optr)string_10303);
    // ,. 
    Send PSend10305 = new_Send((Optr)string_10303_Const, SMB__append_, 1, (Optr)PSend10304);
    // warn:. 
    Send PSend10306 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10305);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10307 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10308 = new_String(L"Status ");
    // isConnected. 
    Send PSend10309 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10308_Const = new_Constant((Optr)string_10308);
    // ,. 
    Send PSend10310 = new_Send((Optr)string_10308_Const, SMB__append_, 1, (Optr)PSend10309);
    // warn:. 
    Send PSend10311 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10310);
    Array PThreadedCode10239 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10240, (Optr)&t_send1, (Optr)PSend10241, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10242, (Optr)&t_send1, (Optr)PSend10243, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10244, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10245, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10246, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10293, (Optr)&t_send2, (Optr)PSend10302, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10303, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10304, (Optr)&t_send1, (Optr)PSend10305, (Optr)&t_send1, (Optr)PSend10306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10307, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10308, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10309, (Optr)&t_send1, (Optr)PSend10310, (Optr)&t_send1, (Optr)PSend10311, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10236 = new_Method_with(PArray10237, PArray10238, empty_Array, PThreadedCode10239, 8, PSend10241, PSend10243, PAssign10244, PSend10302, PSend10306, PSend10307, PSend10311, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10236, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10313 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10312 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10313, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10312, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10315 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10316 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10319 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10318 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10319);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10320 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10323 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10322 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10323, (Optr)&t_block_return);
    Block PBlock10321 = new_Block_with(empty_Array, empty_Array, PThreadedCode10322, 1, PSend10323);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10325 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10328 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10327 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10328);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray10330 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10332 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10333 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10332);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10334 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10335 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10334);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10337 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10336 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10337);
    // on:. 
    Send PSend10339 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10338 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10339);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend10343 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10342 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10343);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10346 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10347 = new_Send((Optr)PSend10346, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10350 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_10170 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10170_Const = new_Constant((Optr)char_10170);
    // =. 
    Send PSend10351 = new_Send((Optr)PSend10350, SMB__equals_, 1, (Optr)char_10170_Const);
    Array PThreadedCode10349 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10350, (Optr)&t_push1, (Optr)char_10170, (Optr)&t_send1, (Optr)PSend10351, (Optr)&t_block_return);
    Block PBlock10348 = new_Block_with(empty_Array, empty_Array, PThreadedCode10349, 1, PSend10351);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10352 = new_Send((Optr)PSend10347, SMB_and_, 1, (Optr)PBlock10348);
    Array PThreadedCode10345 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10346, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10347, (Optr)&t_push_closure, (Optr)PBlock10348, (Optr)&t_send1, (Optr)PSend10352, (Optr)&t_block_return);
    Block PBlock10344 = new_Block_with(empty_Array, empty_Array, PThreadedCode10345, 1, PSend10352);
    String string_10355 = new_String(L"Received ");
    Constant string_10355_Const = new_Constant((Optr)string_10355);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10356 = new_Send((Optr)string_10355_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_10357 = new_String(L", handle=");
    Constant string_10357_Const = new_Constant((Optr)string_10357);
    // ,. 
    Send PSend10358 = new_Send((Optr)PSend10356, SMB__append_, 1, (Optr)string_10357_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10359 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10360 = new_Send((Optr)PSend10358, SMB__append_, 1, (Optr)PSend10359);
    // warn:. 
    Send PSend10361 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10360);
    String string_10362 = new_String(L"Received ");
    // size. 
    Send PSend10363 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10362_Const = new_Constant((Optr)string_10362);
    // ,. 
    Send PSend10364 = new_Send((Optr)string_10362_Const, SMB__append_, 1, (Optr)PSend10363);
    String string_10365 = new_String(L" bytes");
    Constant string_10365_Const = new_Constant((Optr)string_10365);
    // ,. 
    Send PSend10366 = new_Send((Optr)PSend10364, SMB__append_, 1, (Optr)string_10365_Const);
    String string_10367 = new_String(L", handle=");
    Constant string_10367_Const = new_Constant((Optr)string_10367);
    // ,. 
    Send PSend10368 = new_Send((Optr)PSend10366, SMB__append_, 1, (Optr)string_10367_Const);
    // hash. 
    Send PSend10369 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10370 = new_Send((Optr)PSend10368, SMB__append_, 1, (Optr)PSend10369);
    // warn:. 
    Send PSend10371 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10370);
    String string_10372 = new_String(L"Received ");
    // size. 
    Send PSend10373 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10372_Const = new_Constant((Optr)string_10372);
    // ,. 
    Send PSend10374 = new_Send((Optr)string_10372_Const, SMB__append_, 1, (Optr)PSend10373);
    String string_10375 = new_String(L" bytes");
    Constant string_10375_Const = new_Constant((Optr)string_10375);
    // ,. 
    Send PSend10376 = new_Send((Optr)PSend10374, SMB__append_, 1, (Optr)string_10375_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10377 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10376);
    // readMessage. 
    Send PSend10379 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10378 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10379);
    Array PThreadedCode10354 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10355, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend10356, (Optr)&t_push1, (Optr)string_10357, (Optr)&t_send1, (Optr)PSend10358, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10359, (Optr)&t_send1, (Optr)PSend10360, (Optr)&t_send1, (Optr)PSend10361, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10362, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10363, (Optr)&t_send1, (Optr)PSend10364, (Optr)&t_push1, (Optr)string_10365, (Optr)&t_send1, (Optr)PSend10366, (Optr)&t_push1, (Optr)string_10367, (Optr)&t_send1, (Optr)PSend10368, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10369, (Optr)&t_send1, (Optr)PSend10370, (Optr)&t_send1, (Optr)PSend10371, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10372, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10373, (Optr)&t_send1, (Optr)PSend10374, (Optr)&t_push1, (Optr)string_10375, (Optr)&t_send1, (Optr)PSend10376, (Optr)&t_send1, (Optr)PSend10377, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10378, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10379, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10353 = new_Block_with(empty_Array, empty_Array, PThreadedCode10354, 4, PSend10361, PSend10371, PSend10377, PAssign10378);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10380 = new_Send((Optr)PBlock10344, SMB_whileFalse_, 1, (Optr)PBlock10353);
    Array PThreadedCode10341 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10342, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10343, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10344, (Optr)&t_push_closure, (Optr)PBlock10353, (Optr)&t_send1, (Optr)PSend10380, (Optr)&t_block_return);
    Block PBlock10340 = new_Block_with(empty_Array, empty_Array, PThreadedCode10341, 2, PAssign10342, PSend10380);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10382 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10384 = new_String(L"Error: Network Connection closed");
    Constant string_10384_Const = new_Constant((Optr)string_10384);
    // warn:. 
    Send PSend10385 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10384_Const);
    String string_10386 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10387 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10386_Const = new_Constant((Optr)string_10386);
    // ,. 
    Send PSend10388 = new_Send((Optr)string_10386_Const, SMB__append_, 1, (Optr)PSend10387);
    // warn:. 
    Send PSend10389 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10388);
    Array PThreadedCode10383 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10384, (Optr)&t_send1, (Optr)PSend10385, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10386, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10387, (Optr)&t_send1, (Optr)PSend10388, (Optr)&t_send1, (Optr)PSend10389, (Optr)&t_method_return);
    Block PBlock10381 = new_Block_with(PArray10382, empty_Array, PThreadedCode10383, 2, PSend10385, PSend10389);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10390 = new_Send((Optr)PBlock10340, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10381);
    String string_10391 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10392 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10391_Const = new_Constant((Optr)string_10391);
    // ,. 
    Send PSend10393 = new_Send((Optr)string_10391_Const, SMB__append_, 1, (Optr)PSend10392);
    // warn:. 
    Send PSend10394 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10393);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10395 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10396 = new_String(L"Status ");
    // isConnected. 
    Send PSend10397 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10396_Const = new_Constant((Optr)string_10396);
    // ,. 
    Send PSend10398 = new_Send((Optr)string_10396_Const, SMB__append_, 1, (Optr)PSend10397);
    // warn:. 
    Send PSend10399 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10398);
    Array PThreadedCode10331 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10332, (Optr)&t_send1, (Optr)PSend10333, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10334, (Optr)&t_send1, (Optr)PSend10335, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10336, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10337, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10338, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10339, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10340, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10381, (Optr)&t_send2, (Optr)PSend10390, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10391, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10392, (Optr)&t_send1, (Optr)PSend10393, (Optr)&t_send1, (Optr)PSend10394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10395, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10396, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10397, (Optr)&t_send1, (Optr)PSend10398, (Optr)&t_send1, (Optr)PSend10399, (Optr)&t_method_return);
    Block PBlock10329 = new_Block_with(empty_Array, PArray10330, PThreadedCode10331, 8, PSend10333, PSend10335, PAssign10336, PAssign10338, PSend10390, PSend10394, PSend10395, PSend10399);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10400 = new_Send((Optr)PBlock10329, SMB_fork, 0);
    Array PThreadedCode10326 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10327, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10328, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10329, (Optr)&t_send0, (Optr)PSend10400, (Optr)&t_method_return);
    Block PBlock10324 = new_Block_with(empty_Array, PArray10325, PThreadedCode10326, 2, PAssign10327, PSend10400);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10401 = new_Send((Optr)PBlock10321, SMB_whileTrue_, 1, (Optr)PBlock10324);
    Array PThreadedCode10317 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10318, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10319, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10320, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10321, (Optr)&t_push_closure, (Optr)PBlock10324, (Optr)&t_send1, (Optr)PSend10401, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10314 = new_Method_with(PArray10315, PArray10316, empty_Array, PThreadedCode10317, 4, PAssign10318, PSend10320, PSend10401, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod10314, HEADER(IO_Socket_Class));
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