#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9682 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9684 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9683 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9684, (Optr)&t_method_return);
    Method PMethod9681 = new_Method_with(PArray9682, empty_Array, empty_Array, PThreadedCode9683, 1, PSend9684);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9681, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9688 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9687 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9688);
    Array PArray9686 = new_Array_with(1, (Optr)PAnnotation9687);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9690 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9689 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9690, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9685 = new_NativeMethod_with(empty_Array, empty_Array, PArray9686, PThreadedCode9689, 2, PSend9690, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9685, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9692 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9696 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9695 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9696, (Optr)&t_block_return);
    Block PBlock9694 = new_Block_with(empty_Array, empty_Array, PThreadedCode9695, 1, PSend9696);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9699 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9700 = new_Send((Optr)PSend9699, SMB_yield, 0);
    Array PThreadedCode9698 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9699, (Optr)&t_send0, (Optr)PSend9700, (Optr)&t_block_return);
    Block PBlock9697 = new_Block_with(empty_Array, empty_Array, PThreadedCode9698, 1, PSend9700);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9701 = new_Send((Optr)PBlock9694, SMB_whileFalse_, 1, (Optr)PBlock9697);
    String string_9702 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9702_Const = new_Constant((Optr)string_9702);
    // warn:. 
    Send PSend9703 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9702_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9704 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9693 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9694, (Optr)&t_push_closure, (Optr)PBlock9697, (Optr)&t_send1, (Optr)PSend9701, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9702, (Optr)&t_send1, (Optr)PSend9703, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9704, (Optr)&t_method_return);
    Method PMethod9691 = new_Method_with(PArray9692, empty_Array, empty_Array, PThreadedCode9693, 3, PSend9701, PSend9703, PSend9704);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9691, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9706 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9709 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9708 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9709);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9710 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9707 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9708, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9709, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9710, (Optr)&t_method_return);
    Method PMethod9705 = new_Method_with(empty_Array, PArray9706, empty_Array, PThreadedCode9707, 2, PAssign9708, PSend9710);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9705, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9712 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9714 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9713 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9714, (Optr)&t_method_return);
    Method PMethod9711 = new_Method_with(PArray9712, empty_Array, empty_Array, PThreadedCode9713, 1, PSend9714);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9711, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9716 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9719 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9718 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9719);
    Array PArray9717 = new_Array_with(1, (Optr)PAnnotation9718);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9721 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9720 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9721, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9715 = new_NativeMethod_with(PArray9716, empty_Array, PArray9717, PThreadedCode9720, 2, PSend9721, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9715, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9725 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9724 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9725);
    Array PArray9723 = new_Array_with(1, (Optr)PAnnotation9724);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9727 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9726 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9727, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9722 = new_NativeMethod_with(empty_Array, empty_Array, PArray9723, PThreadedCode9726, 2, PSend9727, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9722, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9729 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9730 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9736 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9735 = new_Send((Optr)PSend9736, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9734 = new_Send((Optr)PSend9735, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9733 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9734);
    Assign PAssign9732 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9733);
    // size. 
    Send PSend9738 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9737 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9738);
    String string_9739 = new_String(L"-Data: ");
    Constant string_9739_Const = new_Constant((Optr)string_9739);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9740 = new_Send((Optr)string_9739_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9741 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9740);
    String string_9742 = new_String(L"-Size: ");
    Constant string_9742_Const = new_Constant((Optr)string_9742);
    // ,. 
    Send PSend9743 = new_Send((Optr)string_9742_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend9744 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9743);
    String string_9745 = new_String(L"-Buffer size ");
    // size. 
    Send PSend9746 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_9745_Const = new_Constant((Optr)string_9745);
    // ,. 
    Send PSend9747 = new_Send((Optr)string_9745_Const, SMB__append_, 1, (Optr)PSend9746);
    // warn:. 
    Send PSend9748 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9747);
    String string_9749 = new_String(L"-Buffer before: ");
    Constant string_9749_Const = new_Constant((Optr)string_9749);
    // warn:. 
    Send PSend9750 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9749_Const);
    // warn:. 
    Send PSend9751 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend9752 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend9753 = new_Send((Optr)PSend9752, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend9754 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend9753, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_9755 = new_String(L"-Buffer after ");
    Constant string_9755_Const = new_Constant((Optr)string_9755);
    // warn:. 
    Send PSend9756 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9755_Const);
    // warn:. 
    Send PSend9757 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9731 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9732, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9736, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9735, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9734, (Optr)&t_send1, (Optr)PSend9733, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9737, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9738, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9739, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9740, (Optr)&t_send1, (Optr)PSend9741, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9742, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9743, (Optr)&t_send1, (Optr)PSend9744, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9745, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9746, (Optr)&t_send1, (Optr)PSend9747, (Optr)&t_send1, (Optr)PSend9748, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9749, (Optr)&t_send1, (Optr)PSend9750, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9751, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9752, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9753, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend9754, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9755, (Optr)&t_send1, (Optr)PSend9756, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9728 = new_Method_with(PArray9729, PArray9730, empty_Array, PThreadedCode9731, 11, PAssign9732, PAssign9737, PSend9741, PSend9744, PSend9748, PSend9750, PSend9751, PSend9754, PSend9756, PSend9757, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9728, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9759 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9761 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9762 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9761);
    Array PThreadedCode9760 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9761, (Optr)&t_send1, (Optr)PSend9762, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9758 = new_Method_with(PArray9759, empty_Array, empty_Array, PThreadedCode9760, 2, PSend9762, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod9758, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend9765 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign9766 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode9764 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9765, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9766, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9763 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9764, 3, PSend9765, PAssign9766, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9763, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray9768 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend9770 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode9769 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend9770, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9767 = new_Method_with(PArray9768, empty_Array, empty_Array, PThreadedCode9769, 2, PSend9770, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod9767, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9774 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9773 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_9774);
    Array PArray9772 = new_Array_with(1, (Optr)PAnnotation9773);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9776 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9775 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9776, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9771 = new_NativeMethod_with(empty_Array, empty_Array, PArray9772, PThreadedCode9775, 2, PSend9776, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod9771, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9778 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9782 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9781 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9782, (Optr)&t_block_return);
    Block PBlock9780 = new_Block_with(empty_Array, empty_Array, PThreadedCode9781, 1, PSend9782);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9785 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9786 = new_Send((Optr)PSend9785, SMB_primYield, 0);
    Array PThreadedCode9784 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9785, (Optr)&t_send0, (Optr)PSend9786, (Optr)&t_block_return);
    Block PBlock9783 = new_Block_with(empty_Array, empty_Array, PThreadedCode9784, 1, PSend9786);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9787 = new_Send((Optr)PBlock9780, SMB_whileFalse_, 1, (Optr)PBlock9783);
    String string_9788 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9788_Const = new_Constant((Optr)string_9788);
    // warn:. 
    Send PSend9789 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9788_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend9790 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode9779 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9780, (Optr)&t_push_closure, (Optr)PBlock9783, (Optr)&t_send1, (Optr)PSend9787, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9788, (Optr)&t_send1, (Optr)PSend9789, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend9790, (Optr)&t_method_return);
    Method PMethod9777 = new_Method_with(PArray9778, empty_Array, empty_Array, PThreadedCode9779, 3, PSend9787, PSend9789, PSend9790);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod9777, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9792 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9796 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9795 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9796, (Optr)&t_block_return);
    Block PBlock9794 = new_Block_with(empty_Array, empty_Array, PThreadedCode9795, 1, PSend9796);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9799 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9800 = new_Send((Optr)PSend9799, SMB_primYield, 0);
    Array PThreadedCode9798 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9799, (Optr)&t_send0, (Optr)PSend9800, (Optr)&t_block_return);
    Block PBlock9797 = new_Block_with(empty_Array, empty_Array, PThreadedCode9798, 1, PSend9800);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9801 = new_Send((Optr)PBlock9794, SMB_whileFalse_, 1, (Optr)PBlock9797);
    String string_9802 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9802_Const = new_Constant((Optr)string_9802);
    // warn:. 
    Send PSend9803 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9802_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend9804 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9793 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9794, (Optr)&t_push_closure, (Optr)PBlock9797, (Optr)&t_send1, (Optr)PSend9801, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9802, (Optr)&t_send1, (Optr)PSend9803, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9804, (Optr)&t_method_return);
    Method PMethod9791 = new_Method_with(PArray9792, empty_Array, empty_Array, PThreadedCode9793, 3, PSend9801, PSend9803, PSend9804);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod9791, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9806 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9808 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9807 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9808, (Optr)&t_method_return);
    Method PMethod9805 = new_Method_with(PArray9806, empty_Array, empty_Array, PThreadedCode9807, 1, PSend9808);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9805, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend9811 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign9815 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9814 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign9815, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9813 = new_Block_with(empty_Array, empty_Array, PThreadedCode9814, 1, PAssign9815);
    // ifFalse:. 
    Send PSend9812 = new_Send((Optr)PSend9811, SMB_ifFalse_, 1, (Optr)PBlock9813);
    Array PThreadedCode9810 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9811, (Optr)&t_send_ifFalse_, (Optr)PSend9812, (Optr)PBlock9813, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9809 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9810, 2, PSend9812, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod9809, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9817 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9820 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation9819 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_9820);
    Array PArray9818 = new_Array_with(1, (Optr)PAnnotation9819);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9822 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9821 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9822, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9816 = new_NativeMethod_with(PArray9817, empty_Array, PArray9818, PThreadedCode9821, 2, PSend9822, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod9816, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9824 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9827 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9831 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode9830 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend9831, (Optr)&t_block_return);
    Block PBlock9829 = new_Block_with(empty_Array, empty_Array, PThreadedCode9830, 1, PSend9831);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9832 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock9829);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9833 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend9834 = new_Send((Optr)PSend9833, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode9828 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9829, (Optr)&t_send1, (Optr)PSend9832, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9833, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9834, (Optr)&t_method_return);
    Block PBlock9826 = new_Block_with(PArray9827, empty_Array, PThreadedCode9828, 2, PSend9832, PSend9834);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9835 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9826);
    Array PThreadedCode9825 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9826, (Optr)&t_send1, (Optr)PSend9835, (Optr)&t_method_return);
    Method PMethod9823 = new_Method_with(empty_Array, PArray9824, empty_Array, PThreadedCode9825, 1, PSend9835);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod9823, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray9837 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9840 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation9839 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_9840);
    Array PArray9838 = new_Array_with(1, (Optr)PAnnotation9839);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9842 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9841 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9842, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9836 = new_NativeMethod_with(PArray9837, empty_Array, PArray9838, PThreadedCode9841, 2, PSend9842, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod9836, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9845 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9844 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9845, (Optr)&t_method_return);
    Method PMethod9843 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9844, 1, PSend9845);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod9843, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9849 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation9848 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_9849);
    Array PArray9847 = new_Array_with(1, (Optr)PAnnotation9848);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9851 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9850 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9851, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9846 = new_NativeMethod_with(empty_Array, empty_Array, PArray9847, PThreadedCode9850, 2, PSend9851, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod9846, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9854 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9855 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode9853 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9854, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend9855, (Optr)&t_method_return);
    Method PMethod9852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9853, 2, PSend9854, PSend9855);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod9852, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign9858 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign9859 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9857 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign9858, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9859, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9857, 3, PAssign9858, PAssign9859, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod9856, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend9862 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode9861 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9862, (Optr)&t_method_return);
    Method PMethod9860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9861, 1, PSend9862);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod9860, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9864 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9867 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend9869 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9873 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_9873_Const = new_Constant((Optr)string_9873);
    // escape:. 
    Send PSend9874 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9873_Const);
    Array PThreadedCode9872 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9873, (Optr)&t_send1, (Optr)PSend9874, (Optr)&t_block_return);
    Block PBlock9871 = new_Block_with(empty_Array, empty_Array, PThreadedCode9872, 1, PSend9874);
    // ifTrue:. 
    Send PSend9870 = new_Send((Optr)PSend9869, SMB_ifTrue_, 1, (Optr)PBlock9871);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9876 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign9875 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend9876);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend9877 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_9881 = new_String(L"invalidSocketHandle");
    Constant string_9881_Const = new_Constant((Optr)string_9881);
    // escape:. 
    Send PSend9882 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9881_Const);
    Array PThreadedCode9880 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9881, (Optr)&t_send1, (Optr)PSend9882, (Optr)&t_block_return);
    Block PBlock9879 = new_Block_with(empty_Array, empty_Array, PThreadedCode9880, 1, PSend9882);
    // ifTrue:. 
    Send PSend9878 = new_Send((Optr)PSend9877, SMB_ifTrue_, 1, (Optr)PBlock9879);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend9883 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_9887 = new_String(L"unconnected");
    Constant string_9887_Const = new_Constant((Optr)string_9887);
    // escape:. 
    Send PSend9888 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9887_Const);
    Array PThreadedCode9886 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9887, (Optr)&t_send1, (Optr)PSend9888, (Optr)&t_block_return);
    Block PBlock9885 = new_Block_with(empty_Array, empty_Array, PThreadedCode9886, 1, PSend9888);
    // ifTrue:. 
    Send PSend9884 = new_Send((Optr)PSend9883, SMB_ifTrue_, 1, (Optr)PBlock9885);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend9889 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_9893 = new_String(L"waitingForConnection");
    Constant string_9893_Const = new_Constant((Optr)string_9893);
    // escape:. 
    Send PSend9894 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9893_Const);
    Array PThreadedCode9892 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9893, (Optr)&t_send1, (Optr)PSend9894, (Optr)&t_block_return);
    Block PBlock9891 = new_Block_with(empty_Array, empty_Array, PThreadedCode9892, 1, PSend9894);
    // ifTrue:. 
    Send PSend9890 = new_Send((Optr)PSend9889, SMB_ifTrue_, 1, (Optr)PBlock9891);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend9895 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_9899 = new_String(L"connected");
    Constant string_9899_Const = new_Constant((Optr)string_9899);
    // escape:. 
    Send PSend9900 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9899_Const);
    Array PThreadedCode9898 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9899, (Optr)&t_send1, (Optr)PSend9900, (Optr)&t_block_return);
    Block PBlock9897 = new_Block_with(empty_Array, empty_Array, PThreadedCode9898, 1, PSend9900);
    // ifTrue:. 
    Send PSend9896 = new_Send((Optr)PSend9895, SMB_ifTrue_, 1, (Optr)PBlock9897);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend9901 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_9905 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_9905_Const = new_Constant((Optr)string_9905);
    // escape:. 
    Send PSend9906 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9905_Const);
    Array PThreadedCode9904 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9905, (Optr)&t_send1, (Optr)PSend9906, (Optr)&t_block_return);
    Block PBlock9903 = new_Block_with(empty_Array, empty_Array, PThreadedCode9904, 1, PSend9906);
    // ifTrue:. 
    Send PSend9902 = new_Send((Optr)PSend9901, SMB_ifTrue_, 1, (Optr)PBlock9903);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend9907 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_9911 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_9911_Const = new_Constant((Optr)string_9911);
    // escape:. 
    Send PSend9912 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9911_Const);
    Array PThreadedCode9910 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9911, (Optr)&t_send1, (Optr)PSend9912, (Optr)&t_block_return);
    Block PBlock9909 = new_Block_with(empty_Array, empty_Array, PThreadedCode9910, 1, PSend9912);
    // ifTrue:. 
    Send PSend9908 = new_Send((Optr)PSend9907, SMB_ifTrue_, 1, (Optr)PBlock9909);
    String string_9913 = new_String(L"unknown socket status");
    Array PThreadedCode9868 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend9869, (Optr)&t_send_ifTrue_, (Optr)PSend9870, (Optr)PBlock9871, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9875, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9876, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9877, (Optr)&t_send_ifTrue_, (Optr)PSend9878, (Optr)PBlock9879, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend9883, (Optr)&t_send_ifTrue_, (Optr)PSend9884, (Optr)PBlock9885, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9889, (Optr)&t_send_ifTrue_, (Optr)PSend9890, (Optr)PBlock9891, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend9895, (Optr)&t_send_ifTrue_, (Optr)PSend9896, (Optr)PBlock9897, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend9901, (Optr)&t_send_ifTrue_, (Optr)PSend9902, (Optr)PBlock9903, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend9907, (Optr)&t_send_ifTrue_, (Optr)PSend9908, (Optr)PBlock9909, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_9913, (Optr)&t_method_return);
    Constant string_9913_Const = new_Constant((Optr)string_9913);
    Block PBlock9866 = new_Block_with(PArray9867, empty_Array, PThreadedCode9868, 9, PSend9870, PAssign9875, PSend9878, PSend9884, PSend9890, PSend9896, PSend9902, PSend9908, string_9913_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9914 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9866);
    Array PThreadedCode9865 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9866, (Optr)&t_send1, (Optr)PSend9914, (Optr)&t_method_return);
    Method PMethod9863 = new_Method_with(empty_Array, PArray9864, empty_Array, PThreadedCode9865, 1, PSend9914);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod9863, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9917 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode9916 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9917, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod9915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9916, 2, PSend9917, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod9915, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9921 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation9920 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_9921);
    Array PArray9919 = new_Array_with(1, (Optr)PAnnotation9920);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9923 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9922 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9923, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9918 = new_NativeMethod_with(empty_Array, empty_Array, PArray9919, PThreadedCode9922, 2, PSend9923, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod9918, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9925 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9928 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation9927 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_9928);
    Array PArray9926 = new_Array_with(1, (Optr)PAnnotation9927);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9930 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9929 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9930, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9924 = new_NativeMethod_with(PArray9925, empty_Array, PArray9926, PThreadedCode9929, 2, PSend9930, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod9924, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9932 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9934 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9933 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9934, (Optr)&t_method_return);
    Method PMethod9931 = new_Method_with(PArray9932, empty_Array, empty_Array, PThreadedCode9933, 1, PSend9934);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod9931, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend9939 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode9938 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9939, (Optr)&t_block_return);
    Block PBlock9937 = new_Block_with(empty_Array, empty_Array, PThreadedCode9938, 1, PSend9939);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9942 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9943 = new_Send((Optr)PSend9942, SMB_primYield, 0);
    Array PThreadedCode9941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9942, (Optr)&t_send0, (Optr)PSend9943, (Optr)&t_block_return);
    Block PBlock9940 = new_Block_with(empty_Array, empty_Array, PThreadedCode9941, 1, PSend9943);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9944 = new_Send((Optr)PBlock9937, SMB_whileFalse_, 1, (Optr)PBlock9940);
    String string_9945 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9945_Const = new_Constant((Optr)string_9945);
    // warn:. 
    Send PSend9946 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9945_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend9947 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode9936 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock9937, (Optr)&t_push_closure, (Optr)PBlock9940, (Optr)&t_send1, (Optr)PSend9944, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9945, (Optr)&t_send1, (Optr)PSend9946, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9947, (Optr)&t_method_return);
    Method PMethod9935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9936, 3, PSend9944, PSend9946, PSend9947);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod9935, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9951 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation9950 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_9951);
    Array PArray9949 = new_Array_with(1, (Optr)PAnnotation9950);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9953 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9952 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9953, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9948 = new_NativeMethod_with(empty_Array, empty_Array, PArray9949, PThreadedCode9952, 2, PSend9953, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod9948, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9955 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend9958 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign9957 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend9958);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend9960 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign9959 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend9960);
    String string_9961 = new_String(L"Size returned -> ");
    Constant string_9961_Const = new_Constant((Optr)string_9961);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9962 = new_Send((Optr)string_9961_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9963 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9962);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9964 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode9956 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign9957, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend9958, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9959, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9960, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9961, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend9962, (Optr)&t_send1, (Optr)PSend9963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9964, (Optr)&t_method_return);
    Method PMethod9954 = new_Method_with(empty_Array, PArray9955, empty_Array, PThreadedCode9956, 4, PAssign9957, PAssign9959, PSend9963, PSend9964);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod9954, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9968 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9967 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9968);
    Array PArray9966 = new_Array_with(1, (Optr)PAnnotation9967);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9970 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9969 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9970, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9965 = new_NativeMethod_with(empty_Array, empty_Array, PArray9966, PThreadedCode9969, 2, PSend9970, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod9965, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray9972 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend9976 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend9977 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode9975 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9976, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9977, (Optr)&t_block_return);
    Block PBlock9974 = new_Block_with(empty_Array, empty_Array, PThreadedCode9975, 2, PSend9976, PSend9977);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend9978 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock9974);
    Array PThreadedCode9973 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9974, (Optr)&t_send1, (Optr)PSend9978, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9971 = new_Method_with(PArray9972, empty_Array, empty_Array, PThreadedCode9973, 2, PSend9978, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod9971, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9980 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9982 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9981 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9982, (Optr)&t_method_return);
    Method PMethod9979 = new_Method_with(PArray9980, empty_Array, empty_Array, PThreadedCode9981, 1, PSend9982);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod9979, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9984 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9987 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation9986 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_9987);
    Array PArray9985 = new_Array_with(1, (Optr)PAnnotation9986);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9989 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9988 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9989, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9983 = new_NativeMethod_with(PArray9984, empty_Array, PArray9985, PThreadedCode9988, 2, PSend9989, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod9983, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray9991 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend9993 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode9992 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend9993, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9990 = new_Method_with(PArray9991, empty_Array, empty_Array, PThreadedCode9992, 2, PSend9993, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod9990, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9997 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation9996 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_9997);
    Array PArray9995 = new_Array_with(1, (Optr)PAnnotation9996);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9999 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9998 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9999, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9994 = new_NativeMethod_with(empty_Array, empty_Array, PArray9995, PThreadedCode9998, 2, PSend9999, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod9994, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10003 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation10002 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_10003);
    Array PArray10001 = new_Array_with(1, (Optr)PAnnotation10002);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend10005 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode10004 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10005, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod10000 = new_NativeMethod_with(empty_Array, empty_Array, PArray10001, PThreadedCode10004, 2, PSend10005, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod10000, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend10008 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode10007 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10008, (Optr)&t_method_return);
    Method PMethod10006 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10007, 1, PSend10008);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod10006, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10010 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10011 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10014 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10013 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10014);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10015 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10018 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10017 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10018, (Optr)&t_block_return);
    Block PBlock10016 = new_Block_with(empty_Array, empty_Array, PThreadedCode10017, 1, PSend10018);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10020 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10023 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10022 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10023);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray10025 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10027 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10028 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10027);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10029 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10030 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10029);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10032 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10031 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10032);
    // on:. 
    Send PSend10034 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10033 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10034);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray10036 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10038 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10039 = new_Send((Optr)PSend10038, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend10042 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend10043 = new_Send((Optr)PSend10042, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode10041 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10042, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend10043, (Optr)&t_block_return);
    Block PBlock10040 = new_Block_with(empty_Array, empty_Array, PThreadedCode10041, 1, PSend10043);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10044 = new_Send((Optr)PSend10039, SMB_and_, 1, (Optr)PBlock10040);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend10048 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode10047 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10048, (Optr)&t_block_return);
    Block PBlock10046 = new_Block_with(empty_Array, empty_Array, PThreadedCode10047, 1, PSend10048);
    String string_10051 = new_String(L"Received ");
    Constant string_10051_Const = new_Constant((Optr)string_10051);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10052 = new_Send((Optr)string_10051_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_10053 = new_String(L", handle=");
    Constant string_10053_Const = new_Constant((Optr)string_10053);
    // ,. 
    Send PSend10054 = new_Send((Optr)PSend10052, SMB__append_, 1, (Optr)string_10053_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10055 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10056 = new_Send((Optr)PSend10054, SMB__append_, 1, (Optr)PSend10055);
    // warn:. 
    Send PSend10057 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10056);
    String string_10058 = new_String(L"Received ");
    // size. 
    Send PSend10059 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10058_Const = new_Constant((Optr)string_10058);
    // ,. 
    Send PSend10060 = new_Send((Optr)string_10058_Const, SMB__append_, 1, (Optr)PSend10059);
    String string_10061 = new_String(L" bytes");
    Constant string_10061_Const = new_Constant((Optr)string_10061);
    // ,. 
    Send PSend10062 = new_Send((Optr)PSend10060, SMB__append_, 1, (Optr)string_10061_Const);
    String string_10063 = new_String(L", handle=");
    Constant string_10063_Const = new_Constant((Optr)string_10063);
    // ,. 
    Send PSend10064 = new_Send((Optr)PSend10062, SMB__append_, 1, (Optr)string_10063_Const);
    // hash. 
    Send PSend10065 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10066 = new_Send((Optr)PSend10064, SMB__append_, 1, (Optr)PSend10065);
    // warn:. 
    Send PSend10067 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10066);
    String string_10068 = new_String(L"Received ");
    // size. 
    Send PSend10069 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10068_Const = new_Constant((Optr)string_10068);
    // ,. 
    Send PSend10070 = new_Send((Optr)string_10068_Const, SMB__append_, 1, (Optr)PSend10069);
    String string_10071 = new_String(L" bytes");
    Constant string_10071_Const = new_Constant((Optr)string_10071);
    // ,. 
    Send PSend10072 = new_Send((Optr)PSend10070, SMB__append_, 1, (Optr)string_10071_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10073 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10072);
    Array PThreadedCode10050 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10051, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend10052, (Optr)&t_push1, (Optr)string_10053, (Optr)&t_send1, (Optr)PSend10054, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10055, (Optr)&t_send1, (Optr)PSend10056, (Optr)&t_send1, (Optr)PSend10057, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10058, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10059, (Optr)&t_send1, (Optr)PSend10060, (Optr)&t_push1, (Optr)string_10061, (Optr)&t_send1, (Optr)PSend10062, (Optr)&t_push1, (Optr)string_10063, (Optr)&t_send1, (Optr)PSend10064, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10065, (Optr)&t_send1, (Optr)PSend10066, (Optr)&t_send1, (Optr)PSend10067, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10068, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10069, (Optr)&t_send1, (Optr)PSend10070, (Optr)&t_push1, (Optr)string_10071, (Optr)&t_send1, (Optr)PSend10072, (Optr)&t_send1, (Optr)PSend10073, (Optr)&t_block_return);
    Block PBlock10049 = new_Block_with(empty_Array, empty_Array, PThreadedCode10050, 3, PSend10057, PSend10067, PSend10073);
    // ifTrue:ifFalse:. 
    Send PSend10045 = new_Send((Optr)PSend10044, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10046, (Optr)PBlock10049);
    Array PThreadedCode10037 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10038, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10039, (Optr)&t_push_closure, (Optr)PBlock10040, (Optr)&t_send1, (Optr)PSend10044, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10045, (Optr)PBlock10046, (Optr)PBlock10049, (Optr)&t_method_return);
    Block PBlock10035 = new_Block_with(PArray10036, empty_Array, PThreadedCode10037, 1, PSend10045);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10074 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock10035);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10076 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10078 = new_String(L"Error: Network Connection closed");
    Constant string_10078_Const = new_Constant((Optr)string_10078);
    // warn:. 
    Send PSend10079 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10078_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10080 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10081 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10082 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10081_Const = new_Constant((Optr)string_10081);
    // ,. 
    Send PSend10083 = new_Send((Optr)string_10081_Const, SMB__append_, 1, (Optr)PSend10082);
    // warn:. 
    Send PSend10084 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10083);
    Array PThreadedCode10077 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10078, (Optr)&t_send1, (Optr)PSend10079, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10080, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10081, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10082, (Optr)&t_send1, (Optr)PSend10083, (Optr)&t_send1, (Optr)PSend10084, (Optr)&t_method_return);
    Block PBlock10075 = new_Block_with(PArray10076, empty_Array, PThreadedCode10077, 3, PSend10079, PSend10080, PSend10084);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10085 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10075);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10087 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10089 = new_String(L"Will now try to close connection");
    Constant string_10089_Const = new_Constant((Optr)string_10089);
    // warn:. 
    Send PSend10090 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10089_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10091 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10092 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10093 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10092_Const = new_Constant((Optr)string_10092);
    // ,. 
    Send PSend10094 = new_Send((Optr)string_10092_Const, SMB__append_, 1, (Optr)PSend10093);
    // warn:. 
    Send PSend10095 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10094);
    Array PThreadedCode10088 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10089, (Optr)&t_send1, (Optr)PSend10090, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10091, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10092, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10093, (Optr)&t_send1, (Optr)PSend10094, (Optr)&t_send1, (Optr)PSend10095, (Optr)&t_method_return);
    Block PBlock10086 = new_Block_with(PArray10087, empty_Array, PThreadedCode10088, 3, PSend10090, PSend10091, PSend10095);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10096 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10086);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10097 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode10026 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10027, (Optr)&t_send1, (Optr)PSend10028, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10029, (Optr)&t_send1, (Optr)PSend10030, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10031, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10032, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10033, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10034, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10035, (Optr)&t_send1, (Optr)PSend10074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10075, (Optr)&t_send1, (Optr)PSend10085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10086, (Optr)&t_send1, (Optr)PSend10096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10097, (Optr)&t_method_return);
    Block PBlock10024 = new_Block_with(empty_Array, PArray10025, PThreadedCode10026, 8, PSend10028, PSend10030, PAssign10031, PAssign10033, PSend10074, PSend10085, PSend10096, PSend10097);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10098 = new_Send((Optr)PBlock10024, SMB_fork, 0);
    Array PThreadedCode10021 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10022, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10023, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10024, (Optr)&t_send0, (Optr)PSend10098, (Optr)&t_method_return);
    Block PBlock10019 = new_Block_with(empty_Array, PArray10020, PThreadedCode10021, 2, PAssign10022, PSend10098);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10099 = new_Send((Optr)PBlock10016, SMB_whileTrue_, 1, (Optr)PBlock10019);
    Array PThreadedCode10012 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10013, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10014, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10015, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10016, (Optr)&t_push_closure, (Optr)PBlock10019, (Optr)&t_send1, (Optr)PSend10099, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10009 = new_Method_with(PArray10010, PArray10011, empty_Array, PThreadedCode10012, 4, PAssign10013, PSend10015, PSend10099, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod10009, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10101 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10102 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10105 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10104 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10105);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10106 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10108 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10107 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10108);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10110 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10109 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10110);
    String string_10111 = new_String(L"* read from ");
    Constant string_10111_Const = new_Constant((Optr)string_10111);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10112 = new_Send((Optr)string_10111_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10113 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10112);
    String string_10114 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10115 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10114_Const = new_Constant((Optr)string_10114);
    // ,. 
    Send PSend10116 = new_Send((Optr)string_10114_Const, SMB__append_, 1, (Optr)PSend10115);
    String string_10117 = new_String(L" bytes");
    Constant string_10117_Const = new_Constant((Optr)string_10117);
    // ,. 
    Send PSend10118 = new_Send((Optr)PSend10116, SMB__append_, 1, (Optr)string_10117_Const);
    // warn:. 
    Send PSend10119 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10118);
    String string_10120 = new_String(L"Received ");
    // size. 
    Send PSend10121 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10120_Const = new_Constant((Optr)string_10120);
    // ,. 
    Send PSend10122 = new_Send((Optr)string_10120_Const, SMB__append_, 1, (Optr)PSend10121);
    String string_10123 = new_String(L" bytes");
    Constant string_10123_Const = new_Constant((Optr)string_10123);
    // ,. 
    Send PSend10124 = new_Send((Optr)PSend10122, SMB__append_, 1, (Optr)string_10123_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10125 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10124);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10126 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10127 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10103 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10104, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10105, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10106, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10107, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10109, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10110, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10111, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10112, (Optr)&t_send1, (Optr)PSend10113, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10114, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10115, (Optr)&t_send1, (Optr)PSend10116, (Optr)&t_push1, (Optr)string_10117, (Optr)&t_send1, (Optr)PSend10118, (Optr)&t_send1, (Optr)PSend10119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10120, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10121, (Optr)&t_send1, (Optr)PSend10122, (Optr)&t_push1, (Optr)string_10123, (Optr)&t_send1, (Optr)PSend10124, (Optr)&t_send1, (Optr)PSend10125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10126, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10127, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10100 = new_Method_with(PArray10101, PArray10102, empty_Array, PThreadedCode10103, 10, PAssign10104, PSend10106, PAssign10107, PAssign10109, PSend10113, PSend10119, PSend10125, PSend10126, PSend10127, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10100, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10130 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10129 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10130, (Optr)&t_method_return);
    Method PMethod10128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10129, 1, PSend10130);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10128, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10132 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10132, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10131, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10135 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10135_Const = new_Constant((Optr)string_10135);
    // require:at:. 
    Send PSend10136 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10135_Const);
    Array PThreadedCode10134 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10135, (Optr)&t_send2, (Optr)PSend10136, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10134, 2, PSend10136, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10133, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10138 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10139 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10142 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10141 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10142);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10143 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10146 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10145 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10146, (Optr)&t_block_return);
    Block PBlock10144 = new_Block_with(empty_Array, empty_Array, PThreadedCode10145, 1, PSend10146);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10148 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10151 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10150 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10151);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10155 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10154 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10155);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10158 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10159 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10159_Const = new_Constant((Optr)char_10159);
    // =. 
    Send PSend10160 = new_Send((Optr)PSend10158, SMB__equals_, 1, (Optr)char_10159_Const);
    Array PThreadedCode10157 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10158, (Optr)&t_push1, (Optr)char_10159, (Optr)&t_send1, (Optr)PSend10160, (Optr)&t_block_return);
    Block PBlock10156 = new_Block_with(empty_Array, empty_Array, PThreadedCode10157, 1, PSend10160);
    String string_10163 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10164 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10163_Const = new_Constant((Optr)string_10163);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10165 = new_Send((Optr)string_10163_Const, SMB__append_, 1, (Optr)PSend10164);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10166 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10165);
    String string_10167 = new_String(L"Received ");
    Constant string_10167_Const = new_Constant((Optr)string_10167);
    // ,. 
    Send PSend10168 = new_Send((Optr)string_10167_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10169 = new_String(L", handle=");
    Constant string_10169_Const = new_Constant((Optr)string_10169);
    // ,. 
    Send PSend10170 = new_Send((Optr)PSend10168, SMB__append_, 1, (Optr)string_10169_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10171 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10172 = new_Send((Optr)PSend10170, SMB__append_, 1, (Optr)PSend10171);
    // warn:. 
    Send PSend10173 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10172);
    String string_10174 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10175 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10174_Const = new_Constant((Optr)string_10174);
    // ,. 
    Send PSend10176 = new_Send((Optr)string_10174_Const, SMB__append_, 1, (Optr)PSend10175);
    String string_10177 = new_String(L" bytes");
    Constant string_10177_Const = new_Constant((Optr)string_10177);
    // ,. 
    Send PSend10178 = new_Send((Optr)PSend10176, SMB__append_, 1, (Optr)string_10177_Const);
    String string_10179 = new_String(L", handle=");
    Constant string_10179_Const = new_Constant((Optr)string_10179);
    // ,. 
    Send PSend10180 = new_Send((Optr)PSend10178, SMB__append_, 1, (Optr)string_10179_Const);
    // hash. 
    Send PSend10181 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10182 = new_Send((Optr)PSend10180, SMB__append_, 1, (Optr)PSend10181);
    // warn:. 
    Send PSend10183 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10182);
    String string_10184 = new_String(L"Received ");
    // size. 
    Send PSend10185 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10184_Const = new_Constant((Optr)string_10184);
    // ,. 
    Send PSend10186 = new_Send((Optr)string_10184_Const, SMB__append_, 1, (Optr)PSend10185);
    String string_10187 = new_String(L" bytes");
    Constant string_10187_Const = new_Constant((Optr)string_10187);
    // ,. 
    Send PSend10188 = new_Send((Optr)PSend10186, SMB__append_, 1, (Optr)string_10187_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10189 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10188);
    // receive. 
    Send PSend10191 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10190 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10191);
    Array PThreadedCode10162 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10163, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10164, (Optr)&t_send1, (Optr)PSend10165, (Optr)&t_send1, (Optr)PSend10166, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10167, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10168, (Optr)&t_push1, (Optr)string_10169, (Optr)&t_send1, (Optr)PSend10170, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10171, (Optr)&t_send1, (Optr)PSend10172, (Optr)&t_send1, (Optr)PSend10173, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10174, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10175, (Optr)&t_send1, (Optr)PSend10176, (Optr)&t_push1, (Optr)string_10177, (Optr)&t_send1, (Optr)PSend10178, (Optr)&t_push1, (Optr)string_10179, (Optr)&t_send1, (Optr)PSend10180, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10181, (Optr)&t_send1, (Optr)PSend10182, (Optr)&t_send1, (Optr)PSend10183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10184, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10185, (Optr)&t_send1, (Optr)PSend10186, (Optr)&t_push1, (Optr)string_10187, (Optr)&t_send1, (Optr)PSend10188, (Optr)&t_send1, (Optr)PSend10189, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10190, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10191, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10161 = new_Block_with(empty_Array, empty_Array, PThreadedCode10162, 5, PSend10166, PSend10173, PSend10183, PSend10189, PAssign10190);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10192 = new_Send((Optr)PBlock10156, SMB_whileFalse_, 1, (Optr)PBlock10161);
    String string_10193 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10194 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10193_Const = new_Constant((Optr)string_10193);
    // ,. 
    Send PSend10195 = new_Send((Optr)string_10193_Const, SMB__append_, 1, (Optr)PSend10194);
    // warn:. 
    Send PSend10196 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10195);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10197 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10198 = new_String(L"Status ");
    // isConnected. 
    Send PSend10199 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10198_Const = new_Constant((Optr)string_10198);
    // ,. 
    Send PSend10200 = new_Send((Optr)string_10198_Const, SMB__append_, 1, (Optr)PSend10199);
    // warn:. 
    Send PSend10201 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10200);
    Array PThreadedCode10153 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10154, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10155, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10156, (Optr)&t_push_closure, (Optr)PBlock10161, (Optr)&t_send1, (Optr)PSend10192, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10193, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10194, (Optr)&t_send1, (Optr)PSend10195, (Optr)&t_send1, (Optr)PSend10196, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10197, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10198, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10199, (Optr)&t_send1, (Optr)PSend10200, (Optr)&t_send1, (Optr)PSend10201, (Optr)&t_block_return);
    Block PBlock10152 = new_Block_with(empty_Array, empty_Array, PThreadedCode10153, 5, PAssign10154, PSend10192, PSend10196, PSend10197, PSend10201);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10202 = new_Send((Optr)PBlock10152, SMB_fork, 0);
    Array PThreadedCode10149 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10150, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10151, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10152, (Optr)&t_send0, (Optr)PSend10202, (Optr)&t_method_return);
    Block PBlock10147 = new_Block_with(empty_Array, PArray10148, PThreadedCode10149, 2, PAssign10150, PSend10202);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10203 = new_Send((Optr)PBlock10144, SMB_whileTrue_, 1, (Optr)PBlock10147);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10204 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10140 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10141, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10142, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10143, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10144, (Optr)&t_push_closure, (Optr)PBlock10147, (Optr)&t_send1, (Optr)PSend10203, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10204, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10137 = new_Method_with(PArray10138, PArray10139, empty_Array, PThreadedCode10140, 5, PAssign10141, PSend10143, PSend10203, PSend10204, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10137, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10206 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10207 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10210 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10209 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10210);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10211 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10214 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10213 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10214, (Optr)&t_block_return);
    Block PBlock10212 = new_Block_with(empty_Array, empty_Array, PThreadedCode10213, 1, PSend10214);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10216 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10219 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10218 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10219);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10222 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10221 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10222, (Optr)&t_block_return);
    Block PBlock10220 = new_Block_with(empty_Array, empty_Array, PThreadedCode10221, 1, PSend10222);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10223 = new_Send((Optr)PBlock10220, SMB_fork, 0);
    Array PThreadedCode10217 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10218, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10219, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10220, (Optr)&t_send0, (Optr)PSend10223, (Optr)&t_method_return);
    Block PBlock10215 = new_Block_with(empty_Array, PArray10216, PThreadedCode10217, 2, PAssign10218, PSend10223);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10224 = new_Send((Optr)PBlock10212, SMB_whileTrue_, 1, (Optr)PBlock10215);
    Array PThreadedCode10208 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10209, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10210, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10211, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10212, (Optr)&t_push_closure, (Optr)PBlock10215, (Optr)&t_send1, (Optr)PSend10224, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10205 = new_Method_with(PArray10206, PArray10207, empty_Array, PThreadedCode10208, 4, PAssign10209, PSend10211, PSend10224, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10205, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10226 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10227 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10229 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10230 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10229);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10231 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10232 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10231);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10234 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10233 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10234);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10237 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10239 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10238 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10239);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10242 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10243 = new_Send((Optr)PSend10242, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10246 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10159 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10159_Const = new_Constant((Optr)char_10159);
    // =. 
    Send PSend10247 = new_Send((Optr)PSend10246, SMB__equals_, 1, (Optr)char_10159_Const);
    Array PThreadedCode10245 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10246, (Optr)&t_push1, (Optr)char_10159, (Optr)&t_send1, (Optr)PSend10247, (Optr)&t_block_return);
    Block PBlock10244 = new_Block_with(empty_Array, empty_Array, PThreadedCode10245, 1, PSend10247);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10248 = new_Send((Optr)PSend10243, SMB_and_, 1, (Optr)PBlock10244);
    Array PThreadedCode10241 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10242, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10243, (Optr)&t_push_closure, (Optr)PBlock10244, (Optr)&t_send1, (Optr)PSend10248, (Optr)&t_block_return);
    Block PBlock10240 = new_Block_with(empty_Array, empty_Array, PThreadedCode10241, 1, PSend10248);
    String string_10251 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10252 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10251_Const = new_Constant((Optr)string_10251);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10253 = new_Send((Optr)string_10251_Const, SMB__append_, 1, (Optr)PSend10252);
    // warn:. 
    Send PSend10254 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10253);
    String string_10255 = new_String(L"Received ");
    Constant string_10255_Const = new_Constant((Optr)string_10255);
    // ,. 
    Send PSend10256 = new_Send((Optr)string_10255_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10257 = new_String(L", handle=");
    Constant string_10257_Const = new_Constant((Optr)string_10257);
    // ,. 
    Send PSend10258 = new_Send((Optr)PSend10256, SMB__append_, 1, (Optr)string_10257_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10259 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10260 = new_Send((Optr)PSend10258, SMB__append_, 1, (Optr)PSend10259);
    // warn:. 
    Send PSend10261 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10260);
    String string_10262 = new_String(L"Received ");
    // size. 
    Send PSend10263 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10262_Const = new_Constant((Optr)string_10262);
    // ,. 
    Send PSend10264 = new_Send((Optr)string_10262_Const, SMB__append_, 1, (Optr)PSend10263);
    String string_10265 = new_String(L" bytes");
    Constant string_10265_Const = new_Constant((Optr)string_10265);
    // ,. 
    Send PSend10266 = new_Send((Optr)PSend10264, SMB__append_, 1, (Optr)string_10265_Const);
    String string_10267 = new_String(L", handle=");
    Constant string_10267_Const = new_Constant((Optr)string_10267);
    // ,. 
    Send PSend10268 = new_Send((Optr)PSend10266, SMB__append_, 1, (Optr)string_10267_Const);
    // hash. 
    Send PSend10269 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10270 = new_Send((Optr)PSend10268, SMB__append_, 1, (Optr)PSend10269);
    // warn:. 
    Send PSend10271 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10270);
    String string_10272 = new_String(L"Received ");
    // size. 
    Send PSend10273 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10272_Const = new_Constant((Optr)string_10272);
    // ,. 
    Send PSend10274 = new_Send((Optr)string_10272_Const, SMB__append_, 1, (Optr)PSend10273);
    String string_10275 = new_String(L" bytes");
    Constant string_10275_Const = new_Constant((Optr)string_10275);
    // ,. 
    Send PSend10276 = new_Send((Optr)PSend10274, SMB__append_, 1, (Optr)string_10275_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10277 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10276);
    // receiveDataIfAvailable. 
    Send PSend10278 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10280 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10279 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10280);
    Array PThreadedCode10250 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10251, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10252, (Optr)&t_send1, (Optr)PSend10253, (Optr)&t_send1, (Optr)PSend10254, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10255, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10256, (Optr)&t_push1, (Optr)string_10257, (Optr)&t_send1, (Optr)PSend10258, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10259, (Optr)&t_send1, (Optr)PSend10260, (Optr)&t_send1, (Optr)PSend10261, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10262, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10263, (Optr)&t_send1, (Optr)PSend10264, (Optr)&t_push1, (Optr)string_10265, (Optr)&t_send1, (Optr)PSend10266, (Optr)&t_push1, (Optr)string_10267, (Optr)&t_send1, (Optr)PSend10268, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10269, (Optr)&t_send1, (Optr)PSend10270, (Optr)&t_send1, (Optr)PSend10271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10272, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10273, (Optr)&t_send1, (Optr)PSend10274, (Optr)&t_push1, (Optr)string_10275, (Optr)&t_send1, (Optr)PSend10276, (Optr)&t_send1, (Optr)PSend10277, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10278, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10279, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10280, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10249 = new_Block_with(empty_Array, empty_Array, PThreadedCode10250, 6, PSend10254, PSend10261, PSend10271, PSend10277, PSend10278, PAssign10279);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10281 = new_Send((Optr)PBlock10240, SMB_whileFalse_, 1, (Optr)PBlock10249);
    Array PThreadedCode10236 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10237, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10238, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10239, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10240, (Optr)&t_push_closure, (Optr)PBlock10249, (Optr)&t_send1, (Optr)PSend10281, (Optr)&t_block_return);
    Block PBlock10235 = new_Block_with(empty_Array, empty_Array, PThreadedCode10236, 3, PSend10237, PAssign10238, PSend10281);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10283 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10285 = new_String(L"Error: Network Connection closed");
    Constant string_10285_Const = new_Constant((Optr)string_10285);
    // warn:. 
    Send PSend10286 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10285_Const);
    String string_10287 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10288 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10287_Const = new_Constant((Optr)string_10287);
    // ,. 
    Send PSend10289 = new_Send((Optr)string_10287_Const, SMB__append_, 1, (Optr)PSend10288);
    // warn:. 
    Send PSend10290 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10289);
    Array PThreadedCode10284 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10285, (Optr)&t_send1, (Optr)PSend10286, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10287, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10288, (Optr)&t_send1, (Optr)PSend10289, (Optr)&t_send1, (Optr)PSend10290, (Optr)&t_method_return);
    Block PBlock10282 = new_Block_with(PArray10283, empty_Array, PThreadedCode10284, 2, PSend10286, PSend10290);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10291 = new_Send((Optr)PBlock10235, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10282);
    String string_10292 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10293 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10292_Const = new_Constant((Optr)string_10292);
    // ,. 
    Send PSend10294 = new_Send((Optr)string_10292_Const, SMB__append_, 1, (Optr)PSend10293);
    // warn:. 
    Send PSend10295 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10294);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10296 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10297 = new_String(L"Status ");
    // isConnected. 
    Send PSend10298 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10297_Const = new_Constant((Optr)string_10297);
    // ,. 
    Send PSend10299 = new_Send((Optr)string_10297_Const, SMB__append_, 1, (Optr)PSend10298);
    // warn:. 
    Send PSend10300 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10299);
    Array PThreadedCode10228 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10229, (Optr)&t_send1, (Optr)PSend10230, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10231, (Optr)&t_send1, (Optr)PSend10232, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10233, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10234, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10235, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10282, (Optr)&t_send2, (Optr)PSend10291, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10292, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10293, (Optr)&t_send1, (Optr)PSend10294, (Optr)&t_send1, (Optr)PSend10295, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10296, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10297, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10298, (Optr)&t_send1, (Optr)PSend10299, (Optr)&t_send1, (Optr)PSend10300, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10225 = new_Method_with(PArray10226, PArray10227, empty_Array, PThreadedCode10228, 8, PSend10230, PSend10232, PAssign10233, PSend10291, PSend10295, PSend10296, PSend10300, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10225, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10302 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10301 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10302, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10301, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10304 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10305 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10308 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10307 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10308);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10309 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10312 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10311 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10312, (Optr)&t_block_return);
    Block PBlock10310 = new_Block_with(empty_Array, empty_Array, PThreadedCode10311, 1, PSend10312);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10314 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10317 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10316 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10317);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray10319 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10321 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10322 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10321);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10323 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10324 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10323);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10326 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10325 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10326);
    // on:. 
    Send PSend10328 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10327 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10328);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend10332 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10331 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10332);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10335 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10336 = new_Send((Optr)PSend10335, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10339 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_10159 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10159_Const = new_Constant((Optr)char_10159);
    // =. 
    Send PSend10340 = new_Send((Optr)PSend10339, SMB__equals_, 1, (Optr)char_10159_Const);
    Array PThreadedCode10338 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10339, (Optr)&t_push1, (Optr)char_10159, (Optr)&t_send1, (Optr)PSend10340, (Optr)&t_block_return);
    Block PBlock10337 = new_Block_with(empty_Array, empty_Array, PThreadedCode10338, 1, PSend10340);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10341 = new_Send((Optr)PSend10336, SMB_and_, 1, (Optr)PBlock10337);
    Array PThreadedCode10334 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10335, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10336, (Optr)&t_push_closure, (Optr)PBlock10337, (Optr)&t_send1, (Optr)PSend10341, (Optr)&t_block_return);
    Block PBlock10333 = new_Block_with(empty_Array, empty_Array, PThreadedCode10334, 1, PSend10341);
    String string_10344 = new_String(L"Received ");
    Constant string_10344_Const = new_Constant((Optr)string_10344);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10345 = new_Send((Optr)string_10344_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_10346 = new_String(L", handle=");
    Constant string_10346_Const = new_Constant((Optr)string_10346);
    // ,. 
    Send PSend10347 = new_Send((Optr)PSend10345, SMB__append_, 1, (Optr)string_10346_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10348 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10349 = new_Send((Optr)PSend10347, SMB__append_, 1, (Optr)PSend10348);
    // warn:. 
    Send PSend10350 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10349);
    String string_10351 = new_String(L"Received ");
    // size. 
    Send PSend10352 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10351_Const = new_Constant((Optr)string_10351);
    // ,. 
    Send PSend10353 = new_Send((Optr)string_10351_Const, SMB__append_, 1, (Optr)PSend10352);
    String string_10354 = new_String(L" bytes");
    Constant string_10354_Const = new_Constant((Optr)string_10354);
    // ,. 
    Send PSend10355 = new_Send((Optr)PSend10353, SMB__append_, 1, (Optr)string_10354_Const);
    String string_10356 = new_String(L", handle=");
    Constant string_10356_Const = new_Constant((Optr)string_10356);
    // ,. 
    Send PSend10357 = new_Send((Optr)PSend10355, SMB__append_, 1, (Optr)string_10356_Const);
    // hash. 
    Send PSend10358 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10359 = new_Send((Optr)PSend10357, SMB__append_, 1, (Optr)PSend10358);
    // warn:. 
    Send PSend10360 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10359);
    String string_10361 = new_String(L"Received ");
    // size. 
    Send PSend10362 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10361_Const = new_Constant((Optr)string_10361);
    // ,. 
    Send PSend10363 = new_Send((Optr)string_10361_Const, SMB__append_, 1, (Optr)PSend10362);
    String string_10364 = new_String(L" bytes");
    Constant string_10364_Const = new_Constant((Optr)string_10364);
    // ,. 
    Send PSend10365 = new_Send((Optr)PSend10363, SMB__append_, 1, (Optr)string_10364_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10366 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10365);
    // readMessage. 
    Send PSend10368 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10367 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10368);
    Array PThreadedCode10343 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10344, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend10345, (Optr)&t_push1, (Optr)string_10346, (Optr)&t_send1, (Optr)PSend10347, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10348, (Optr)&t_send1, (Optr)PSend10349, (Optr)&t_send1, (Optr)PSend10350, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10351, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10352, (Optr)&t_send1, (Optr)PSend10353, (Optr)&t_push1, (Optr)string_10354, (Optr)&t_send1, (Optr)PSend10355, (Optr)&t_push1, (Optr)string_10356, (Optr)&t_send1, (Optr)PSend10357, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10358, (Optr)&t_send1, (Optr)PSend10359, (Optr)&t_send1, (Optr)PSend10360, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10361, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10362, (Optr)&t_send1, (Optr)PSend10363, (Optr)&t_push1, (Optr)string_10364, (Optr)&t_send1, (Optr)PSend10365, (Optr)&t_send1, (Optr)PSend10366, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10367, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10368, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10342 = new_Block_with(empty_Array, empty_Array, PThreadedCode10343, 4, PSend10350, PSend10360, PSend10366, PAssign10367);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10369 = new_Send((Optr)PBlock10333, SMB_whileFalse_, 1, (Optr)PBlock10342);
    Array PThreadedCode10330 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10331, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10332, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10333, (Optr)&t_push_closure, (Optr)PBlock10342, (Optr)&t_send1, (Optr)PSend10369, (Optr)&t_block_return);
    Block PBlock10329 = new_Block_with(empty_Array, empty_Array, PThreadedCode10330, 2, PAssign10331, PSend10369);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10371 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10373 = new_String(L"Error: Network Connection closed");
    Constant string_10373_Const = new_Constant((Optr)string_10373);
    // warn:. 
    Send PSend10374 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10373_Const);
    String string_10375 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10376 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10375_Const = new_Constant((Optr)string_10375);
    // ,. 
    Send PSend10377 = new_Send((Optr)string_10375_Const, SMB__append_, 1, (Optr)PSend10376);
    // warn:. 
    Send PSend10378 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10377);
    Array PThreadedCode10372 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10373, (Optr)&t_send1, (Optr)PSend10374, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10375, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10376, (Optr)&t_send1, (Optr)PSend10377, (Optr)&t_send1, (Optr)PSend10378, (Optr)&t_method_return);
    Block PBlock10370 = new_Block_with(PArray10371, empty_Array, PThreadedCode10372, 2, PSend10374, PSend10378);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10379 = new_Send((Optr)PBlock10329, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10370);
    String string_10380 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10381 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10380_Const = new_Constant((Optr)string_10380);
    // ,. 
    Send PSend10382 = new_Send((Optr)string_10380_Const, SMB__append_, 1, (Optr)PSend10381);
    // warn:. 
    Send PSend10383 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10382);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10384 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10385 = new_String(L"Status ");
    // isConnected. 
    Send PSend10386 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10385_Const = new_Constant((Optr)string_10385);
    // ,. 
    Send PSend10387 = new_Send((Optr)string_10385_Const, SMB__append_, 1, (Optr)PSend10386);
    // warn:. 
    Send PSend10388 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10387);
    Array PThreadedCode10320 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10321, (Optr)&t_send1, (Optr)PSend10322, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10323, (Optr)&t_send1, (Optr)PSend10324, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10325, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10326, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10327, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10328, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10329, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10370, (Optr)&t_send2, (Optr)PSend10379, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10380, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10381, (Optr)&t_send1, (Optr)PSend10382, (Optr)&t_send1, (Optr)PSend10383, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10384, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10385, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10386, (Optr)&t_send1, (Optr)PSend10387, (Optr)&t_send1, (Optr)PSend10388, (Optr)&t_method_return);
    Block PBlock10318 = new_Block_with(empty_Array, PArray10319, PThreadedCode10320, 8, PSend10322, PSend10324, PAssign10325, PAssign10327, PSend10379, PSend10383, PSend10384, PSend10388);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10389 = new_Send((Optr)PBlock10318, SMB_fork, 0);
    Array PThreadedCode10315 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10316, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10317, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10318, (Optr)&t_send0, (Optr)PSend10389, (Optr)&t_method_return);
    Block PBlock10313 = new_Block_with(empty_Array, PArray10314, PThreadedCode10315, 2, PAssign10316, PSend10389);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10390 = new_Send((Optr)PBlock10310, SMB_whileTrue_, 1, (Optr)PBlock10313);
    Array PThreadedCode10306 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10307, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10309, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10310, (Optr)&t_push_closure, (Optr)PBlock10313, (Optr)&t_send1, (Optr)PSend10390, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10303 = new_Method_with(PArray10304, PArray10305, empty_Array, PThreadedCode10306, 4, PAssign10307, PSend10309, PSend10390, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod10303, HEADER(IO_Socket_Class));
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