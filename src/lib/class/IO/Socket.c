#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9644 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9646 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9645 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9646, (Optr)&t_method_return);
    Method PMethod9643 = new_Method_with(PArray9644, empty_Array, empty_Array, PThreadedCode9645, 1, PSend9646);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9643, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9650 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9649 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9650);
    Array PArray9648 = new_Array_with(1, (Optr)PAnnotation9649);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9652 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9651 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9652, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9647 = new_NativeMethod_with(empty_Array, empty_Array, PArray9648, PThreadedCode9651, 2, PSend9652, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9647, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9654 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9658 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9657 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9658, (Optr)&t_block_return);
    Block PBlock9656 = new_Block_with(empty_Array, empty_Array, PThreadedCode9657, 1, PSend9658);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9661 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9662 = new_Send((Optr)PSend9661, SMB_yield, 0);
    Array PThreadedCode9660 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9661, (Optr)&t_send0, (Optr)PSend9662, (Optr)&t_block_return);
    Block PBlock9659 = new_Block_with(empty_Array, empty_Array, PThreadedCode9660, 1, PSend9662);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9663 = new_Send((Optr)PBlock9656, SMB_whileFalse_, 1, (Optr)PBlock9659);
    String string_9664 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9664_Const = new_Constant((Optr)string_9664);
    // warn:. 
    Send PSend9665 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9664_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9666 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9655 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9656, (Optr)&t_push_closure, (Optr)PBlock9659, (Optr)&t_send1, (Optr)PSend9663, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9664, (Optr)&t_send1, (Optr)PSend9665, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9666, (Optr)&t_method_return);
    Method PMethod9653 = new_Method_with(PArray9654, empty_Array, empty_Array, PThreadedCode9655, 3, PSend9663, PSend9665, PSend9666);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9653, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9668 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9671 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9670 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9671);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9672 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9669 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9670, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9671, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9672, (Optr)&t_method_return);
    Method PMethod9667 = new_Method_with(empty_Array, PArray9668, empty_Array, PThreadedCode9669, 2, PAssign9670, PSend9672);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9667, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9674 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9676 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9675 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9676, (Optr)&t_method_return);
    Method PMethod9673 = new_Method_with(PArray9674, empty_Array, empty_Array, PThreadedCode9675, 1, PSend9676);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9673, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9678 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9681 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9680 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9681);
    Array PArray9679 = new_Array_with(1, (Optr)PAnnotation9680);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9683 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9682 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9683, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9677 = new_NativeMethod_with(PArray9678, empty_Array, PArray9679, PThreadedCode9682, 2, PSend9683, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9677, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9687 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9686 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9687);
    Array PArray9685 = new_Array_with(1, (Optr)PAnnotation9686);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9689 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9688 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9689, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9684 = new_NativeMethod_with(empty_Array, empty_Array, PArray9685, PThreadedCode9688, 2, PSend9689, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9684, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9691 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9692 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9698 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9697 = new_Send((Optr)PSend9698, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9696 = new_Send((Optr)PSend9697, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9695 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9696);
    Assign PAssign9694 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9695);
    // size. 
    Send PSend9700 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9699 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9700);
    String string_9701 = new_String(L"-Data: ");
    Constant string_9701_Const = new_Constant((Optr)string_9701);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9702 = new_Send((Optr)string_9701_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9703 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9702);
    String string_9704 = new_String(L"-Size: ");
    Constant string_9704_Const = new_Constant((Optr)string_9704);
    // ,. 
    Send PSend9705 = new_Send((Optr)string_9704_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend9706 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9705);
    String string_9707 = new_String(L"-Buffer size ");
    // size. 
    Send PSend9708 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_9707_Const = new_Constant((Optr)string_9707);
    // ,. 
    Send PSend9709 = new_Send((Optr)string_9707_Const, SMB__append_, 1, (Optr)PSend9708);
    // warn:. 
    Send PSend9710 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9709);
    String string_9711 = new_String(L"-Buffer before: ");
    Constant string_9711_Const = new_Constant((Optr)string_9711);
    // warn:. 
    Send PSend9712 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9711_Const);
    // warn:. 
    Send PSend9713 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend9714 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend9715 = new_Send((Optr)PSend9714, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend9716 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend9715, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_9717 = new_String(L"-Buffer after ");
    Constant string_9717_Const = new_Constant((Optr)string_9717);
    // warn:. 
    Send PSend9718 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9717_Const);
    // warn:. 
    Send PSend9719 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9693 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9694, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9698, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9697, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9696, (Optr)&t_send1, (Optr)PSend9695, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9699, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9700, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9701, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9702, (Optr)&t_send1, (Optr)PSend9703, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9704, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9705, (Optr)&t_send1, (Optr)PSend9706, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9707, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9708, (Optr)&t_send1, (Optr)PSend9709, (Optr)&t_send1, (Optr)PSend9710, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9711, (Optr)&t_send1, (Optr)PSend9712, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9713, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9714, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9715, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend9716, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9717, (Optr)&t_send1, (Optr)PSend9718, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9719, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9690 = new_Method_with(PArray9691, PArray9692, empty_Array, PThreadedCode9693, 11, PAssign9694, PAssign9699, PSend9703, PSend9706, PSend9710, PSend9712, PSend9713, PSend9716, PSend9718, PSend9719, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9690, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9721 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9723 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9724 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9723);
    Array PThreadedCode9722 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9723, (Optr)&t_send1, (Optr)PSend9724, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9720 = new_Method_with(PArray9721, empty_Array, empty_Array, PThreadedCode9722, 2, PSend9724, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod9720, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend9727 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign9728 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode9726 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9727, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9728, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9725 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9726, 3, PSend9727, PAssign9728, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9725, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray9730 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend9732 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode9731 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend9732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9729 = new_Method_with(PArray9730, empty_Array, empty_Array, PThreadedCode9731, 2, PSend9732, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod9729, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9736 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9735 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_9736);
    Array PArray9734 = new_Array_with(1, (Optr)PAnnotation9735);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9738 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9737 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9738, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9733 = new_NativeMethod_with(empty_Array, empty_Array, PArray9734, PThreadedCode9737, 2, PSend9738, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod9733, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9740 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9744 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9743 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9744, (Optr)&t_block_return);
    Block PBlock9742 = new_Block_with(empty_Array, empty_Array, PThreadedCode9743, 1, PSend9744);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9747 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9748 = new_Send((Optr)PSend9747, SMB_primYield, 0);
    Array PThreadedCode9746 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9747, (Optr)&t_send0, (Optr)PSend9748, (Optr)&t_block_return);
    Block PBlock9745 = new_Block_with(empty_Array, empty_Array, PThreadedCode9746, 1, PSend9748);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9749 = new_Send((Optr)PBlock9742, SMB_whileFalse_, 1, (Optr)PBlock9745);
    String string_9750 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9750_Const = new_Constant((Optr)string_9750);
    // warn:. 
    Send PSend9751 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9750_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend9752 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode9741 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9742, (Optr)&t_push_closure, (Optr)PBlock9745, (Optr)&t_send1, (Optr)PSend9749, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9750, (Optr)&t_send1, (Optr)PSend9751, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend9752, (Optr)&t_method_return);
    Method PMethod9739 = new_Method_with(PArray9740, empty_Array, empty_Array, PThreadedCode9741, 3, PSend9749, PSend9751, PSend9752);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod9739, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9754 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9758 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9757 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9758, (Optr)&t_block_return);
    Block PBlock9756 = new_Block_with(empty_Array, empty_Array, PThreadedCode9757, 1, PSend9758);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9761 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9762 = new_Send((Optr)PSend9761, SMB_primYield, 0);
    Array PThreadedCode9760 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9761, (Optr)&t_send0, (Optr)PSend9762, (Optr)&t_block_return);
    Block PBlock9759 = new_Block_with(empty_Array, empty_Array, PThreadedCode9760, 1, PSend9762);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9763 = new_Send((Optr)PBlock9756, SMB_whileFalse_, 1, (Optr)PBlock9759);
    String string_9764 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9764_Const = new_Constant((Optr)string_9764);
    // warn:. 
    Send PSend9765 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9764_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend9766 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9755 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9756, (Optr)&t_push_closure, (Optr)PBlock9759, (Optr)&t_send1, (Optr)PSend9763, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9764, (Optr)&t_send1, (Optr)PSend9765, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9766, (Optr)&t_method_return);
    Method PMethod9753 = new_Method_with(PArray9754, empty_Array, empty_Array, PThreadedCode9755, 3, PSend9763, PSend9765, PSend9766);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod9753, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9768 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9770 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9769 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9770, (Optr)&t_method_return);
    Method PMethod9767 = new_Method_with(PArray9768, empty_Array, empty_Array, PThreadedCode9769, 1, PSend9770);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9767, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend9773 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign9777 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9776 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign9777, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9775 = new_Block_with(empty_Array, empty_Array, PThreadedCode9776, 1, PAssign9777);
    // ifFalse:. 
    Send PSend9774 = new_Send((Optr)PSend9773, SMB_ifFalse_, 1, (Optr)PBlock9775);
    Array PThreadedCode9772 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9773, (Optr)&t_send_ifFalse_, (Optr)PSend9774, (Optr)PBlock9775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9772, 2, PSend9774, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod9771, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9779 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9782 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation9781 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_9782);
    Array PArray9780 = new_Array_with(1, (Optr)PAnnotation9781);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9784 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9783 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9784, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9778 = new_NativeMethod_with(PArray9779, empty_Array, PArray9780, PThreadedCode9783, 2, PSend9784, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod9778, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9786 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9789 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9793 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode9792 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend9793, (Optr)&t_block_return);
    Block PBlock9791 = new_Block_with(empty_Array, empty_Array, PThreadedCode9792, 1, PSend9793);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9794 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock9791);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9795 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend9796 = new_Send((Optr)PSend9795, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode9790 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9791, (Optr)&t_send1, (Optr)PSend9794, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9795, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9796, (Optr)&t_method_return);
    Block PBlock9788 = new_Block_with(PArray9789, empty_Array, PThreadedCode9790, 2, PSend9794, PSend9796);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9797 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9788);
    Array PThreadedCode9787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9788, (Optr)&t_send1, (Optr)PSend9797, (Optr)&t_method_return);
    Method PMethod9785 = new_Method_with(empty_Array, PArray9786, empty_Array, PThreadedCode9787, 1, PSend9797);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod9785, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray9799 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9802 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation9801 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_9802);
    Array PArray9800 = new_Array_with(1, (Optr)PAnnotation9801);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9804 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9803 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9804, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9798 = new_NativeMethod_with(PArray9799, empty_Array, PArray9800, PThreadedCode9803, 2, PSend9804, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod9798, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9807 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9806 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9807, (Optr)&t_method_return);
    Method PMethod9805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9806, 1, PSend9807);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod9805, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9811 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation9810 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_9811);
    Array PArray9809 = new_Array_with(1, (Optr)PAnnotation9810);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9813 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9812 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9813, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9808 = new_NativeMethod_with(empty_Array, empty_Array, PArray9809, PThreadedCode9812, 2, PSend9813, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod9808, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9816 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9817 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode9815 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9816, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend9817, (Optr)&t_method_return);
    Method PMethod9814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9815, 2, PSend9816, PSend9817);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod9814, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign9820 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign9821 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9819 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign9820, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9821, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9818 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9819, 3, PAssign9820, PAssign9821, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod9818, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend9824 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode9823 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9824, (Optr)&t_method_return);
    Method PMethod9822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9823, 1, PSend9824);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod9822, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9826 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9829 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend9831 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9835 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_9835_Const = new_Constant((Optr)string_9835);
    // escape:. 
    Send PSend9836 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9835_Const);
    Array PThreadedCode9834 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9835, (Optr)&t_send1, (Optr)PSend9836, (Optr)&t_block_return);
    Block PBlock9833 = new_Block_with(empty_Array, empty_Array, PThreadedCode9834, 1, PSend9836);
    // ifTrue:. 
    Send PSend9832 = new_Send((Optr)PSend9831, SMB_ifTrue_, 1, (Optr)PBlock9833);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9838 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign9837 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend9838);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend9839 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_9843 = new_String(L"invalidSocketHandle");
    Constant string_9843_Const = new_Constant((Optr)string_9843);
    // escape:. 
    Send PSend9844 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9843_Const);
    Array PThreadedCode9842 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9843, (Optr)&t_send1, (Optr)PSend9844, (Optr)&t_block_return);
    Block PBlock9841 = new_Block_with(empty_Array, empty_Array, PThreadedCode9842, 1, PSend9844);
    // ifTrue:. 
    Send PSend9840 = new_Send((Optr)PSend9839, SMB_ifTrue_, 1, (Optr)PBlock9841);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend9845 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_9849 = new_String(L"unconnected");
    Constant string_9849_Const = new_Constant((Optr)string_9849);
    // escape:. 
    Send PSend9850 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9849_Const);
    Array PThreadedCode9848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9849, (Optr)&t_send1, (Optr)PSend9850, (Optr)&t_block_return);
    Block PBlock9847 = new_Block_with(empty_Array, empty_Array, PThreadedCode9848, 1, PSend9850);
    // ifTrue:. 
    Send PSend9846 = new_Send((Optr)PSend9845, SMB_ifTrue_, 1, (Optr)PBlock9847);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend9851 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_9855 = new_String(L"waitingForConnection");
    Constant string_9855_Const = new_Constant((Optr)string_9855);
    // escape:. 
    Send PSend9856 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9855_Const);
    Array PThreadedCode9854 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9855, (Optr)&t_send1, (Optr)PSend9856, (Optr)&t_block_return);
    Block PBlock9853 = new_Block_with(empty_Array, empty_Array, PThreadedCode9854, 1, PSend9856);
    // ifTrue:. 
    Send PSend9852 = new_Send((Optr)PSend9851, SMB_ifTrue_, 1, (Optr)PBlock9853);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend9857 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_9861 = new_String(L"connected");
    Constant string_9861_Const = new_Constant((Optr)string_9861);
    // escape:. 
    Send PSend9862 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9861_Const);
    Array PThreadedCode9860 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9861, (Optr)&t_send1, (Optr)PSend9862, (Optr)&t_block_return);
    Block PBlock9859 = new_Block_with(empty_Array, empty_Array, PThreadedCode9860, 1, PSend9862);
    // ifTrue:. 
    Send PSend9858 = new_Send((Optr)PSend9857, SMB_ifTrue_, 1, (Optr)PBlock9859);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend9863 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_9867 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_9867_Const = new_Constant((Optr)string_9867);
    // escape:. 
    Send PSend9868 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9867_Const);
    Array PThreadedCode9866 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9867, (Optr)&t_send1, (Optr)PSend9868, (Optr)&t_block_return);
    Block PBlock9865 = new_Block_with(empty_Array, empty_Array, PThreadedCode9866, 1, PSend9868);
    // ifTrue:. 
    Send PSend9864 = new_Send((Optr)PSend9863, SMB_ifTrue_, 1, (Optr)PBlock9865);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend9869 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_9873 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_9873_Const = new_Constant((Optr)string_9873);
    // escape:. 
    Send PSend9874 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9873_Const);
    Array PThreadedCode9872 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9873, (Optr)&t_send1, (Optr)PSend9874, (Optr)&t_block_return);
    Block PBlock9871 = new_Block_with(empty_Array, empty_Array, PThreadedCode9872, 1, PSend9874);
    // ifTrue:. 
    Send PSend9870 = new_Send((Optr)PSend9869, SMB_ifTrue_, 1, (Optr)PBlock9871);
    String string_9875 = new_String(L"unknown socket status");
    Array PThreadedCode9830 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend9831, (Optr)&t_send_ifTrue_, (Optr)PSend9832, (Optr)PBlock9833, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9837, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9838, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9839, (Optr)&t_send_ifTrue_, (Optr)PSend9840, (Optr)PBlock9841, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend9845, (Optr)&t_send_ifTrue_, (Optr)PSend9846, (Optr)PBlock9847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9851, (Optr)&t_send_ifTrue_, (Optr)PSend9852, (Optr)PBlock9853, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend9857, (Optr)&t_send_ifTrue_, (Optr)PSend9858, (Optr)PBlock9859, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend9863, (Optr)&t_send_ifTrue_, (Optr)PSend9864, (Optr)PBlock9865, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend9869, (Optr)&t_send_ifTrue_, (Optr)PSend9870, (Optr)PBlock9871, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_9875, (Optr)&t_method_return);
    Constant string_9875_Const = new_Constant((Optr)string_9875);
    Block PBlock9828 = new_Block_with(PArray9829, empty_Array, PThreadedCode9830, 9, PSend9832, PAssign9837, PSend9840, PSend9846, PSend9852, PSend9858, PSend9864, PSend9870, string_9875_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9876 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9828);
    Array PThreadedCode9827 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9828, (Optr)&t_send1, (Optr)PSend9876, (Optr)&t_method_return);
    Method PMethod9825 = new_Method_with(empty_Array, PArray9826, empty_Array, PThreadedCode9827, 1, PSend9876);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod9825, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9879 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode9878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9879, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod9877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9878, 2, PSend9879, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod9877, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9883 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation9882 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_9883);
    Array PArray9881 = new_Array_with(1, (Optr)PAnnotation9882);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9885 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9884 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9885, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9880 = new_NativeMethod_with(empty_Array, empty_Array, PArray9881, PThreadedCode9884, 2, PSend9885, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod9880, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9887 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9890 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation9889 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_9890);
    Array PArray9888 = new_Array_with(1, (Optr)PAnnotation9889);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9892 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9891 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9892, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9886 = new_NativeMethod_with(PArray9887, empty_Array, PArray9888, PThreadedCode9891, 2, PSend9892, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod9886, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9894 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9896 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9895 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9896, (Optr)&t_method_return);
    Method PMethod9893 = new_Method_with(PArray9894, empty_Array, empty_Array, PThreadedCode9895, 1, PSend9896);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod9893, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend9901 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode9900 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9901, (Optr)&t_block_return);
    Block PBlock9899 = new_Block_with(empty_Array, empty_Array, PThreadedCode9900, 1, PSend9901);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9904 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9905 = new_Send((Optr)PSend9904, SMB_primYield, 0);
    Array PThreadedCode9903 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9904, (Optr)&t_send0, (Optr)PSend9905, (Optr)&t_block_return);
    Block PBlock9902 = new_Block_with(empty_Array, empty_Array, PThreadedCode9903, 1, PSend9905);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9906 = new_Send((Optr)PBlock9899, SMB_whileFalse_, 1, (Optr)PBlock9902);
    String string_9907 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9907_Const = new_Constant((Optr)string_9907);
    // warn:. 
    Send PSend9908 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9907_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend9909 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode9898 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock9899, (Optr)&t_push_closure, (Optr)PBlock9902, (Optr)&t_send1, (Optr)PSend9906, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9907, (Optr)&t_send1, (Optr)PSend9908, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9909, (Optr)&t_method_return);
    Method PMethod9897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9898, 3, PSend9906, PSend9908, PSend9909);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod9897, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9913 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation9912 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_9913);
    Array PArray9911 = new_Array_with(1, (Optr)PAnnotation9912);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9915 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9914 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9915, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9910 = new_NativeMethod_with(empty_Array, empty_Array, PArray9911, PThreadedCode9914, 2, PSend9915, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod9910, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9917 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend9920 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign9919 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend9920);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend9922 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign9921 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend9922);
    String string_9923 = new_String(L"Size returned -> ");
    Constant string_9923_Const = new_Constant((Optr)string_9923);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9924 = new_Send((Optr)string_9923_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9925 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9924);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9926 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode9918 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign9919, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend9920, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9921, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9922, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9923, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend9924, (Optr)&t_send1, (Optr)PSend9925, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9926, (Optr)&t_method_return);
    Method PMethod9916 = new_Method_with(empty_Array, PArray9917, empty_Array, PThreadedCode9918, 4, PAssign9919, PAssign9921, PSend9925, PSend9926);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod9916, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9930 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9929 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9930);
    Array PArray9928 = new_Array_with(1, (Optr)PAnnotation9929);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9932 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9931 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9932, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9927 = new_NativeMethod_with(empty_Array, empty_Array, PArray9928, PThreadedCode9931, 2, PSend9932, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod9927, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray9934 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend9938 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend9939 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode9937 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9938, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9939, (Optr)&t_block_return);
    Block PBlock9936 = new_Block_with(empty_Array, empty_Array, PThreadedCode9937, 2, PSend9938, PSend9939);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend9940 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock9936);
    Array PThreadedCode9935 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9936, (Optr)&t_send1, (Optr)PSend9940, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9933 = new_Method_with(PArray9934, empty_Array, empty_Array, PThreadedCode9935, 2, PSend9940, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod9933, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9942 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9944 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9943 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9944, (Optr)&t_method_return);
    Method PMethod9941 = new_Method_with(PArray9942, empty_Array, empty_Array, PThreadedCode9943, 1, PSend9944);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod9941, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9946 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9949 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation9948 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_9949);
    Array PArray9947 = new_Array_with(1, (Optr)PAnnotation9948);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9951 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9950 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9951, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9945 = new_NativeMethod_with(PArray9946, empty_Array, PArray9947, PThreadedCode9950, 2, PSend9951, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod9945, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray9953 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend9955 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode9954 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend9955, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9952 = new_Method_with(PArray9953, empty_Array, empty_Array, PThreadedCode9954, 2, PSend9955, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod9952, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9959 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation9958 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_9959);
    Array PArray9957 = new_Array_with(1, (Optr)PAnnotation9958);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9961 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9960 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9961, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9956 = new_NativeMethod_with(empty_Array, empty_Array, PArray9957, PThreadedCode9960, 2, PSend9961, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod9956, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9965 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation9964 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_9965);
    Array PArray9963 = new_Array_with(1, (Optr)PAnnotation9964);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9967 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9966 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9967, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9962 = new_NativeMethod_with(empty_Array, empty_Array, PArray9963, PThreadedCode9966, 2, PSend9967, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod9962, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend9970 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode9969 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9970, (Optr)&t_method_return);
    Method PMethod9968 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9969, 1, PSend9970);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod9968, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray9972 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray9973 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9976 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9975 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend9976);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend9977 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend9980 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode9979 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9980, (Optr)&t_block_return);
    Block PBlock9978 = new_Block_with(empty_Array, empty_Array, PThreadedCode9979, 1, PSend9980);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray9982 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend9985 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign9984 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend9985);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray9987 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend9989 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9990 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9989);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend9991 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend9992 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9991);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9994 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign9993 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend9994);
    // on:. 
    Send PSend9996 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign9995 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend9996);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray9998 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10000 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10001 = new_Send((Optr)PSend10000, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend10004 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend10005 = new_Send((Optr)PSend10004, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode10003 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10004, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend10005, (Optr)&t_block_return);
    Block PBlock10002 = new_Block_with(empty_Array, empty_Array, PThreadedCode10003, 1, PSend10005);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10006 = new_Send((Optr)PSend10001, SMB_and_, 1, (Optr)PBlock10002);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend10010 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode10009 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10010, (Optr)&t_block_return);
    Block PBlock10008 = new_Block_with(empty_Array, empty_Array, PThreadedCode10009, 1, PSend10010);
    String string_10013 = new_String(L"Received ");
    Constant string_10013_Const = new_Constant((Optr)string_10013);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10014 = new_Send((Optr)string_10013_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_10015 = new_String(L", handle=");
    Constant string_10015_Const = new_Constant((Optr)string_10015);
    // ,. 
    Send PSend10016 = new_Send((Optr)PSend10014, SMB__append_, 1, (Optr)string_10015_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10017 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10018 = new_Send((Optr)PSend10016, SMB__append_, 1, (Optr)PSend10017);
    // warn:. 
    Send PSend10019 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10018);
    String string_10020 = new_String(L"Received ");
    // size. 
    Send PSend10021 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10020_Const = new_Constant((Optr)string_10020);
    // ,. 
    Send PSend10022 = new_Send((Optr)string_10020_Const, SMB__append_, 1, (Optr)PSend10021);
    String string_10023 = new_String(L" bytes");
    Constant string_10023_Const = new_Constant((Optr)string_10023);
    // ,. 
    Send PSend10024 = new_Send((Optr)PSend10022, SMB__append_, 1, (Optr)string_10023_Const);
    String string_10025 = new_String(L", handle=");
    Constant string_10025_Const = new_Constant((Optr)string_10025);
    // ,. 
    Send PSend10026 = new_Send((Optr)PSend10024, SMB__append_, 1, (Optr)string_10025_Const);
    // hash. 
    Send PSend10027 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10028 = new_Send((Optr)PSend10026, SMB__append_, 1, (Optr)PSend10027);
    // warn:. 
    Send PSend10029 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10028);
    String string_10030 = new_String(L"Received ");
    // size. 
    Send PSend10031 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10030_Const = new_Constant((Optr)string_10030);
    // ,. 
    Send PSend10032 = new_Send((Optr)string_10030_Const, SMB__append_, 1, (Optr)PSend10031);
    String string_10033 = new_String(L" bytes");
    Constant string_10033_Const = new_Constant((Optr)string_10033);
    // ,. 
    Send PSend10034 = new_Send((Optr)PSend10032, SMB__append_, 1, (Optr)string_10033_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10035 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10034);
    Array PThreadedCode10012 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10013, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend10014, (Optr)&t_push1, (Optr)string_10015, (Optr)&t_send1, (Optr)PSend10016, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10017, (Optr)&t_send1, (Optr)PSend10018, (Optr)&t_send1, (Optr)PSend10019, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10020, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10021, (Optr)&t_send1, (Optr)PSend10022, (Optr)&t_push1, (Optr)string_10023, (Optr)&t_send1, (Optr)PSend10024, (Optr)&t_push1, (Optr)string_10025, (Optr)&t_send1, (Optr)PSend10026, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10027, (Optr)&t_send1, (Optr)PSend10028, (Optr)&t_send1, (Optr)PSend10029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10030, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10031, (Optr)&t_send1, (Optr)PSend10032, (Optr)&t_push1, (Optr)string_10033, (Optr)&t_send1, (Optr)PSend10034, (Optr)&t_send1, (Optr)PSend10035, (Optr)&t_block_return);
    Block PBlock10011 = new_Block_with(empty_Array, empty_Array, PThreadedCode10012, 3, PSend10019, PSend10029, PSend10035);
    // ifTrue:ifFalse:. 
    Send PSend10007 = new_Send((Optr)PSend10006, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10008, (Optr)PBlock10011);
    Array PThreadedCode9999 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10000, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10001, (Optr)&t_push_closure, (Optr)PBlock10002, (Optr)&t_send1, (Optr)PSend10006, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10007, (Optr)PBlock10008, (Optr)PBlock10011, (Optr)&t_method_return);
    Block PBlock9997 = new_Block_with(PArray9998, empty_Array, PThreadedCode9999, 1, PSend10007);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10036 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock9997);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10038 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10040 = new_String(L"Error: Network Connection closed");
    Constant string_10040_Const = new_Constant((Optr)string_10040);
    // warn:. 
    Send PSend10041 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10040_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10042 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10043 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10044 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10043_Const = new_Constant((Optr)string_10043);
    // ,. 
    Send PSend10045 = new_Send((Optr)string_10043_Const, SMB__append_, 1, (Optr)PSend10044);
    // warn:. 
    Send PSend10046 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10045);
    Array PThreadedCode10039 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10040, (Optr)&t_send1, (Optr)PSend10041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10042, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10043, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10044, (Optr)&t_send1, (Optr)PSend10045, (Optr)&t_send1, (Optr)PSend10046, (Optr)&t_method_return);
    Block PBlock10037 = new_Block_with(PArray10038, empty_Array, PThreadedCode10039, 3, PSend10041, PSend10042, PSend10046);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10047 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10037);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10049 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10051 = new_String(L"Will now try to close connection");
    Constant string_10051_Const = new_Constant((Optr)string_10051);
    // warn:. 
    Send PSend10052 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10051_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10053 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10054 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10055 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10054_Const = new_Constant((Optr)string_10054);
    // ,. 
    Send PSend10056 = new_Send((Optr)string_10054_Const, SMB__append_, 1, (Optr)PSend10055);
    // warn:. 
    Send PSend10057 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10056);
    Array PThreadedCode10050 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10051, (Optr)&t_send1, (Optr)PSend10052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10053, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10054, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10055, (Optr)&t_send1, (Optr)PSend10056, (Optr)&t_send1, (Optr)PSend10057, (Optr)&t_method_return);
    Block PBlock10048 = new_Block_with(PArray10049, empty_Array, PThreadedCode10050, 3, PSend10052, PSend10053, PSend10057);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10058 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10048);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10059 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode9988 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9989, (Optr)&t_send1, (Optr)PSend9990, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9991, (Optr)&t_send1, (Optr)PSend9992, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9993, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend9994, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9995, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend9996, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock9997, (Optr)&t_send1, (Optr)PSend10036, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10037, (Optr)&t_send1, (Optr)PSend10047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10048, (Optr)&t_send1, (Optr)PSend10058, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10059, (Optr)&t_method_return);
    Block PBlock9986 = new_Block_with(empty_Array, PArray9987, PThreadedCode9988, 8, PSend9990, PSend9992, PAssign9993, PAssign9995, PSend10036, PSend10047, PSend10058, PSend10059);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10060 = new_Send((Optr)PBlock9986, SMB_fork, 0);
    Array PThreadedCode9983 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign9984, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend9985, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9986, (Optr)&t_send0, (Optr)PSend10060, (Optr)&t_method_return);
    Block PBlock9981 = new_Block_with(empty_Array, PArray9982, PThreadedCode9983, 2, PAssign9984, PSend10060);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10061 = new_Send((Optr)PBlock9978, SMB_whileTrue_, 1, (Optr)PBlock9981);
    Array PThreadedCode9974 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9975, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9976, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend9977, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9978, (Optr)&t_push_closure, (Optr)PBlock9981, (Optr)&t_send1, (Optr)PSend10061, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9971 = new_Method_with(PArray9972, PArray9973, empty_Array, PThreadedCode9974, 4, PAssign9975, PSend9977, PSend10061, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod9971, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10063 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10064 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10067 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10066 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10067);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10068 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10070 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10069 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10070);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10072 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10071 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10072);
    String string_10073 = new_String(L"* read from ");
    Constant string_10073_Const = new_Constant((Optr)string_10073);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10074 = new_Send((Optr)string_10073_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10075 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10074);
    String string_10076 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10077 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10076_Const = new_Constant((Optr)string_10076);
    // ,. 
    Send PSend10078 = new_Send((Optr)string_10076_Const, SMB__append_, 1, (Optr)PSend10077);
    String string_10079 = new_String(L" bytes");
    Constant string_10079_Const = new_Constant((Optr)string_10079);
    // ,. 
    Send PSend10080 = new_Send((Optr)PSend10078, SMB__append_, 1, (Optr)string_10079_Const);
    // warn:. 
    Send PSend10081 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10080);
    String string_10082 = new_String(L"Received ");
    // size. 
    Send PSend10083 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10082_Const = new_Constant((Optr)string_10082);
    // ,. 
    Send PSend10084 = new_Send((Optr)string_10082_Const, SMB__append_, 1, (Optr)PSend10083);
    String string_10085 = new_String(L" bytes");
    Constant string_10085_Const = new_Constant((Optr)string_10085);
    // ,. 
    Send PSend10086 = new_Send((Optr)PSend10084, SMB__append_, 1, (Optr)string_10085_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10087 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10086);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10088 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10089 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10065 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10066, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10068, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10069, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10070, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10071, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10072, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10073, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10074, (Optr)&t_send1, (Optr)PSend10075, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10076, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10077, (Optr)&t_send1, (Optr)PSend10078, (Optr)&t_push1, (Optr)string_10079, (Optr)&t_send1, (Optr)PSend10080, (Optr)&t_send1, (Optr)PSend10081, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10082, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10083, (Optr)&t_send1, (Optr)PSend10084, (Optr)&t_push1, (Optr)string_10085, (Optr)&t_send1, (Optr)PSend10086, (Optr)&t_send1, (Optr)PSend10087, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10088, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10089, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10062 = new_Method_with(PArray10063, PArray10064, empty_Array, PThreadedCode10065, 10, PAssign10066, PSend10068, PAssign10069, PAssign10071, PSend10075, PSend10081, PSend10087, PSend10088, PSend10089, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10062, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10092 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10091 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10092, (Optr)&t_method_return);
    Method PMethod10090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10091, 1, PSend10092);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10090, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10094 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10094, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10093, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10097 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10097_Const = new_Constant((Optr)string_10097);
    // require:at:. 
    Send PSend10098 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10097_Const);
    Array PThreadedCode10096 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10097, (Optr)&t_send2, (Optr)PSend10098, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10095 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10096, 2, PSend10098, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10095, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10100 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10101 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10104 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10103 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10104);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10105 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10108 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10107 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10108, (Optr)&t_block_return);
    Block PBlock10106 = new_Block_with(empty_Array, empty_Array, PThreadedCode10107, 1, PSend10108);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10110 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10113 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10112 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10113);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10117 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10116 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10117);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10120 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10121 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10121_Const = new_Constant((Optr)char_10121);
    // =. 
    Send PSend10122 = new_Send((Optr)PSend10120, SMB__equals_, 1, (Optr)char_10121_Const);
    Array PThreadedCode10119 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10120, (Optr)&t_push1, (Optr)char_10121, (Optr)&t_send1, (Optr)PSend10122, (Optr)&t_block_return);
    Block PBlock10118 = new_Block_with(empty_Array, empty_Array, PThreadedCode10119, 1, PSend10122);
    String string_10125 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10126 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10125_Const = new_Constant((Optr)string_10125);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10127 = new_Send((Optr)string_10125_Const, SMB__append_, 1, (Optr)PSend10126);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10128 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10127);
    String string_10129 = new_String(L"Received ");
    Constant string_10129_Const = new_Constant((Optr)string_10129);
    // ,. 
    Send PSend10130 = new_Send((Optr)string_10129_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10131 = new_String(L", handle=");
    Constant string_10131_Const = new_Constant((Optr)string_10131);
    // ,. 
    Send PSend10132 = new_Send((Optr)PSend10130, SMB__append_, 1, (Optr)string_10131_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10133 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10134 = new_Send((Optr)PSend10132, SMB__append_, 1, (Optr)PSend10133);
    // warn:. 
    Send PSend10135 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10134);
    String string_10136 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10137 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10136_Const = new_Constant((Optr)string_10136);
    // ,. 
    Send PSend10138 = new_Send((Optr)string_10136_Const, SMB__append_, 1, (Optr)PSend10137);
    String string_10139 = new_String(L" bytes");
    Constant string_10139_Const = new_Constant((Optr)string_10139);
    // ,. 
    Send PSend10140 = new_Send((Optr)PSend10138, SMB__append_, 1, (Optr)string_10139_Const);
    String string_10141 = new_String(L", handle=");
    Constant string_10141_Const = new_Constant((Optr)string_10141);
    // ,. 
    Send PSend10142 = new_Send((Optr)PSend10140, SMB__append_, 1, (Optr)string_10141_Const);
    // hash. 
    Send PSend10143 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10144 = new_Send((Optr)PSend10142, SMB__append_, 1, (Optr)PSend10143);
    // warn:. 
    Send PSend10145 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10144);
    String string_10146 = new_String(L"Received ");
    // size. 
    Send PSend10147 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10146_Const = new_Constant((Optr)string_10146);
    // ,. 
    Send PSend10148 = new_Send((Optr)string_10146_Const, SMB__append_, 1, (Optr)PSend10147);
    String string_10149 = new_String(L" bytes");
    Constant string_10149_Const = new_Constant((Optr)string_10149);
    // ,. 
    Send PSend10150 = new_Send((Optr)PSend10148, SMB__append_, 1, (Optr)string_10149_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10151 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10150);
    // receive. 
    Send PSend10153 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10152 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10153);
    Array PThreadedCode10124 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10125, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10126, (Optr)&t_send1, (Optr)PSend10127, (Optr)&t_send1, (Optr)PSend10128, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10129, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10130, (Optr)&t_push1, (Optr)string_10131, (Optr)&t_send1, (Optr)PSend10132, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10133, (Optr)&t_send1, (Optr)PSend10134, (Optr)&t_send1, (Optr)PSend10135, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10136, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10137, (Optr)&t_send1, (Optr)PSend10138, (Optr)&t_push1, (Optr)string_10139, (Optr)&t_send1, (Optr)PSend10140, (Optr)&t_push1, (Optr)string_10141, (Optr)&t_send1, (Optr)PSend10142, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10143, (Optr)&t_send1, (Optr)PSend10144, (Optr)&t_send1, (Optr)PSend10145, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10146, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10147, (Optr)&t_send1, (Optr)PSend10148, (Optr)&t_push1, (Optr)string_10149, (Optr)&t_send1, (Optr)PSend10150, (Optr)&t_send1, (Optr)PSend10151, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10152, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10153, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10123 = new_Block_with(empty_Array, empty_Array, PThreadedCode10124, 5, PSend10128, PSend10135, PSend10145, PSend10151, PAssign10152);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10154 = new_Send((Optr)PBlock10118, SMB_whileFalse_, 1, (Optr)PBlock10123);
    String string_10155 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10156 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10155_Const = new_Constant((Optr)string_10155);
    // ,. 
    Send PSend10157 = new_Send((Optr)string_10155_Const, SMB__append_, 1, (Optr)PSend10156);
    // warn:. 
    Send PSend10158 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10157);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10159 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10160 = new_String(L"Status ");
    // isConnected. 
    Send PSend10161 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10160_Const = new_Constant((Optr)string_10160);
    // ,. 
    Send PSend10162 = new_Send((Optr)string_10160_Const, SMB__append_, 1, (Optr)PSend10161);
    // warn:. 
    Send PSend10163 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10162);
    Array PThreadedCode10115 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10116, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10117, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10118, (Optr)&t_push_closure, (Optr)PBlock10123, (Optr)&t_send1, (Optr)PSend10154, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10155, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10156, (Optr)&t_send1, (Optr)PSend10157, (Optr)&t_send1, (Optr)PSend10158, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10159, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10160, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10161, (Optr)&t_send1, (Optr)PSend10162, (Optr)&t_send1, (Optr)PSend10163, (Optr)&t_block_return);
    Block PBlock10114 = new_Block_with(empty_Array, empty_Array, PThreadedCode10115, 5, PAssign10116, PSend10154, PSend10158, PSend10159, PSend10163);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10164 = new_Send((Optr)PBlock10114, SMB_fork, 0);
    Array PThreadedCode10111 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10112, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10114, (Optr)&t_send0, (Optr)PSend10164, (Optr)&t_method_return);
    Block PBlock10109 = new_Block_with(empty_Array, PArray10110, PThreadedCode10111, 2, PAssign10112, PSend10164);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10165 = new_Send((Optr)PBlock10106, SMB_whileTrue_, 1, (Optr)PBlock10109);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10166 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10102 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10103, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10104, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10105, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10106, (Optr)&t_push_closure, (Optr)PBlock10109, (Optr)&t_send1, (Optr)PSend10165, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10166, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10099 = new_Method_with(PArray10100, PArray10101, empty_Array, PThreadedCode10102, 5, PAssign10103, PSend10105, PSend10165, PSend10166, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10099, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10168 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10169 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10172 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10171 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10172);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10173 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10176 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10175 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10176, (Optr)&t_block_return);
    Block PBlock10174 = new_Block_with(empty_Array, empty_Array, PThreadedCode10175, 1, PSend10176);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10178 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10181 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10180 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10181);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10184 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10183 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10184, (Optr)&t_block_return);
    Block PBlock10182 = new_Block_with(empty_Array, empty_Array, PThreadedCode10183, 1, PSend10184);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10185 = new_Send((Optr)PBlock10182, SMB_fork, 0);
    Array PThreadedCode10179 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10180, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10181, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10182, (Optr)&t_send0, (Optr)PSend10185, (Optr)&t_method_return);
    Block PBlock10177 = new_Block_with(empty_Array, PArray10178, PThreadedCode10179, 2, PAssign10180, PSend10185);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10186 = new_Send((Optr)PBlock10174, SMB_whileTrue_, 1, (Optr)PBlock10177);
    Array PThreadedCode10170 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10171, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10172, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10173, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10174, (Optr)&t_push_closure, (Optr)PBlock10177, (Optr)&t_send1, (Optr)PSend10186, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10167 = new_Method_with(PArray10168, PArray10169, empty_Array, PThreadedCode10170, 4, PAssign10171, PSend10173, PSend10186, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10167, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10188 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10189 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10191 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10192 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10191);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10193 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10194 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10193);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10196 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10195 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10196);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10199 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10201 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10200 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10201);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10204 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10205 = new_Send((Optr)PSend10204, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10208 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10121 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10121_Const = new_Constant((Optr)char_10121);
    // =. 
    Send PSend10209 = new_Send((Optr)PSend10208, SMB__equals_, 1, (Optr)char_10121_Const);
    Array PThreadedCode10207 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10208, (Optr)&t_push1, (Optr)char_10121, (Optr)&t_send1, (Optr)PSend10209, (Optr)&t_block_return);
    Block PBlock10206 = new_Block_with(empty_Array, empty_Array, PThreadedCode10207, 1, PSend10209);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10210 = new_Send((Optr)PSend10205, SMB_and_, 1, (Optr)PBlock10206);
    Array PThreadedCode10203 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10204, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10205, (Optr)&t_push_closure, (Optr)PBlock10206, (Optr)&t_send1, (Optr)PSend10210, (Optr)&t_block_return);
    Block PBlock10202 = new_Block_with(empty_Array, empty_Array, PThreadedCode10203, 1, PSend10210);
    String string_10213 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10214 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10213_Const = new_Constant((Optr)string_10213);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10215 = new_Send((Optr)string_10213_Const, SMB__append_, 1, (Optr)PSend10214);
    // warn:. 
    Send PSend10216 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10215);
    String string_10217 = new_String(L"Received ");
    Constant string_10217_Const = new_Constant((Optr)string_10217);
    // ,. 
    Send PSend10218 = new_Send((Optr)string_10217_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10219 = new_String(L", handle=");
    Constant string_10219_Const = new_Constant((Optr)string_10219);
    // ,. 
    Send PSend10220 = new_Send((Optr)PSend10218, SMB__append_, 1, (Optr)string_10219_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10221 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10222 = new_Send((Optr)PSend10220, SMB__append_, 1, (Optr)PSend10221);
    // warn:. 
    Send PSend10223 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10222);
    String string_10224 = new_String(L"Received ");
    // size. 
    Send PSend10225 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10224_Const = new_Constant((Optr)string_10224);
    // ,. 
    Send PSend10226 = new_Send((Optr)string_10224_Const, SMB__append_, 1, (Optr)PSend10225);
    String string_10227 = new_String(L" bytes");
    Constant string_10227_Const = new_Constant((Optr)string_10227);
    // ,. 
    Send PSend10228 = new_Send((Optr)PSend10226, SMB__append_, 1, (Optr)string_10227_Const);
    String string_10229 = new_String(L", handle=");
    Constant string_10229_Const = new_Constant((Optr)string_10229);
    // ,. 
    Send PSend10230 = new_Send((Optr)PSend10228, SMB__append_, 1, (Optr)string_10229_Const);
    // hash. 
    Send PSend10231 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10232 = new_Send((Optr)PSend10230, SMB__append_, 1, (Optr)PSend10231);
    // warn:. 
    Send PSend10233 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10232);
    String string_10234 = new_String(L"Received ");
    // size. 
    Send PSend10235 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10234_Const = new_Constant((Optr)string_10234);
    // ,. 
    Send PSend10236 = new_Send((Optr)string_10234_Const, SMB__append_, 1, (Optr)PSend10235);
    String string_10237 = new_String(L" bytes");
    Constant string_10237_Const = new_Constant((Optr)string_10237);
    // ,. 
    Send PSend10238 = new_Send((Optr)PSend10236, SMB__append_, 1, (Optr)string_10237_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10239 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10238);
    // receiveDataIfAvailable. 
    Send PSend10240 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10242 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10241 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10242);
    Array PThreadedCode10212 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10213, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10214, (Optr)&t_send1, (Optr)PSend10215, (Optr)&t_send1, (Optr)PSend10216, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10217, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10218, (Optr)&t_push1, (Optr)string_10219, (Optr)&t_send1, (Optr)PSend10220, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10221, (Optr)&t_send1, (Optr)PSend10222, (Optr)&t_send1, (Optr)PSend10223, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10224, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10225, (Optr)&t_send1, (Optr)PSend10226, (Optr)&t_push1, (Optr)string_10227, (Optr)&t_send1, (Optr)PSend10228, (Optr)&t_push1, (Optr)string_10229, (Optr)&t_send1, (Optr)PSend10230, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10231, (Optr)&t_send1, (Optr)PSend10232, (Optr)&t_send1, (Optr)PSend10233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10234, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10235, (Optr)&t_send1, (Optr)PSend10236, (Optr)&t_push1, (Optr)string_10237, (Optr)&t_send1, (Optr)PSend10238, (Optr)&t_send1, (Optr)PSend10239, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10240, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10241, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10242, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10211 = new_Block_with(empty_Array, empty_Array, PThreadedCode10212, 6, PSend10216, PSend10223, PSend10233, PSend10239, PSend10240, PAssign10241);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10243 = new_Send((Optr)PBlock10202, SMB_whileFalse_, 1, (Optr)PBlock10211);
    Array PThreadedCode10198 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10199, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10200, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10201, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10202, (Optr)&t_push_closure, (Optr)PBlock10211, (Optr)&t_send1, (Optr)PSend10243, (Optr)&t_block_return);
    Block PBlock10197 = new_Block_with(empty_Array, empty_Array, PThreadedCode10198, 3, PSend10199, PAssign10200, PSend10243);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10245 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10247 = new_String(L"Error: Network Connection closed");
    Constant string_10247_Const = new_Constant((Optr)string_10247);
    // warn:. 
    Send PSend10248 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10247_Const);
    String string_10249 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10250 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10249_Const = new_Constant((Optr)string_10249);
    // ,. 
    Send PSend10251 = new_Send((Optr)string_10249_Const, SMB__append_, 1, (Optr)PSend10250);
    // warn:. 
    Send PSend10252 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10251);
    Array PThreadedCode10246 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10247, (Optr)&t_send1, (Optr)PSend10248, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10249, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10250, (Optr)&t_send1, (Optr)PSend10251, (Optr)&t_send1, (Optr)PSend10252, (Optr)&t_method_return);
    Block PBlock10244 = new_Block_with(PArray10245, empty_Array, PThreadedCode10246, 2, PSend10248, PSend10252);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10253 = new_Send((Optr)PBlock10197, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10244);
    String string_10254 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10255 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10254_Const = new_Constant((Optr)string_10254);
    // ,. 
    Send PSend10256 = new_Send((Optr)string_10254_Const, SMB__append_, 1, (Optr)PSend10255);
    // warn:. 
    Send PSend10257 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10256);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10258 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10259 = new_String(L"Status ");
    // isConnected. 
    Send PSend10260 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10259_Const = new_Constant((Optr)string_10259);
    // ,. 
    Send PSend10261 = new_Send((Optr)string_10259_Const, SMB__append_, 1, (Optr)PSend10260);
    // warn:. 
    Send PSend10262 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10261);
    Array PThreadedCode10190 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10191, (Optr)&t_send1, (Optr)PSend10192, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10193, (Optr)&t_send1, (Optr)PSend10194, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10195, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10196, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10197, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10244, (Optr)&t_send2, (Optr)PSend10253, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10254, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10255, (Optr)&t_send1, (Optr)PSend10256, (Optr)&t_send1, (Optr)PSend10257, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10258, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10259, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10260, (Optr)&t_send1, (Optr)PSend10261, (Optr)&t_send1, (Optr)PSend10262, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10187 = new_Method_with(PArray10188, PArray10189, empty_Array, PThreadedCode10190, 8, PSend10192, PSend10194, PAssign10195, PSend10253, PSend10257, PSend10258, PSend10262, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10187, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10264 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10264, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10263, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10266 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10267 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10270 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10269 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10270);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10271 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10274 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10273 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10274, (Optr)&t_block_return);
    Block PBlock10272 = new_Block_with(empty_Array, empty_Array, PThreadedCode10273, 1, PSend10274);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10276 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10279 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10278 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10279);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray10281 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10283 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10284 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10283);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10285 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10286 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10285);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10288 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10287 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10288);
    // on:. 
    Send PSend10290 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10289 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10290);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend10294 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10293 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10294);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10297 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10298 = new_Send((Optr)PSend10297, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10301 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_10121 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10121_Const = new_Constant((Optr)char_10121);
    // =. 
    Send PSend10302 = new_Send((Optr)PSend10301, SMB__equals_, 1, (Optr)char_10121_Const);
    Array PThreadedCode10300 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10301, (Optr)&t_push1, (Optr)char_10121, (Optr)&t_send1, (Optr)PSend10302, (Optr)&t_block_return);
    Block PBlock10299 = new_Block_with(empty_Array, empty_Array, PThreadedCode10300, 1, PSend10302);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10303 = new_Send((Optr)PSend10298, SMB_and_, 1, (Optr)PBlock10299);
    Array PThreadedCode10296 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10297, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10298, (Optr)&t_push_closure, (Optr)PBlock10299, (Optr)&t_send1, (Optr)PSend10303, (Optr)&t_block_return);
    Block PBlock10295 = new_Block_with(empty_Array, empty_Array, PThreadedCode10296, 1, PSend10303);
    String string_10306 = new_String(L"Received ");
    Constant string_10306_Const = new_Constant((Optr)string_10306);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10307 = new_Send((Optr)string_10306_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_10308 = new_String(L", handle=");
    Constant string_10308_Const = new_Constant((Optr)string_10308);
    // ,. 
    Send PSend10309 = new_Send((Optr)PSend10307, SMB__append_, 1, (Optr)string_10308_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10310 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10311 = new_Send((Optr)PSend10309, SMB__append_, 1, (Optr)PSend10310);
    // warn:. 
    Send PSend10312 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10311);
    String string_10313 = new_String(L"Received ");
    // size. 
    Send PSend10314 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10313_Const = new_Constant((Optr)string_10313);
    // ,. 
    Send PSend10315 = new_Send((Optr)string_10313_Const, SMB__append_, 1, (Optr)PSend10314);
    String string_10316 = new_String(L" bytes");
    Constant string_10316_Const = new_Constant((Optr)string_10316);
    // ,. 
    Send PSend10317 = new_Send((Optr)PSend10315, SMB__append_, 1, (Optr)string_10316_Const);
    String string_10318 = new_String(L", handle=");
    Constant string_10318_Const = new_Constant((Optr)string_10318);
    // ,. 
    Send PSend10319 = new_Send((Optr)PSend10317, SMB__append_, 1, (Optr)string_10318_Const);
    // hash. 
    Send PSend10320 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10321 = new_Send((Optr)PSend10319, SMB__append_, 1, (Optr)PSend10320);
    // warn:. 
    Send PSend10322 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10321);
    String string_10323 = new_String(L"Received ");
    // size. 
    Send PSend10324 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10323_Const = new_Constant((Optr)string_10323);
    // ,. 
    Send PSend10325 = new_Send((Optr)string_10323_Const, SMB__append_, 1, (Optr)PSend10324);
    String string_10326 = new_String(L" bytes");
    Constant string_10326_Const = new_Constant((Optr)string_10326);
    // ,. 
    Send PSend10327 = new_Send((Optr)PSend10325, SMB__append_, 1, (Optr)string_10326_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10328 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10327);
    // readMessage. 
    Send PSend10330 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10329 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10330);
    Array PThreadedCode10305 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10306, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend10307, (Optr)&t_push1, (Optr)string_10308, (Optr)&t_send1, (Optr)PSend10309, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10310, (Optr)&t_send1, (Optr)PSend10311, (Optr)&t_send1, (Optr)PSend10312, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10313, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10314, (Optr)&t_send1, (Optr)PSend10315, (Optr)&t_push1, (Optr)string_10316, (Optr)&t_send1, (Optr)PSend10317, (Optr)&t_push1, (Optr)string_10318, (Optr)&t_send1, (Optr)PSend10319, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10320, (Optr)&t_send1, (Optr)PSend10321, (Optr)&t_send1, (Optr)PSend10322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10323, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10324, (Optr)&t_send1, (Optr)PSend10325, (Optr)&t_push1, (Optr)string_10326, (Optr)&t_send1, (Optr)PSend10327, (Optr)&t_send1, (Optr)PSend10328, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10329, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10330, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10304 = new_Block_with(empty_Array, empty_Array, PThreadedCode10305, 4, PSend10312, PSend10322, PSend10328, PAssign10329);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10331 = new_Send((Optr)PBlock10295, SMB_whileFalse_, 1, (Optr)PBlock10304);
    Array PThreadedCode10292 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10293, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10294, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10295, (Optr)&t_push_closure, (Optr)PBlock10304, (Optr)&t_send1, (Optr)PSend10331, (Optr)&t_block_return);
    Block PBlock10291 = new_Block_with(empty_Array, empty_Array, PThreadedCode10292, 2, PAssign10293, PSend10331);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10333 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10335 = new_String(L"Error: Network Connection closed");
    Constant string_10335_Const = new_Constant((Optr)string_10335);
    // warn:. 
    Send PSend10336 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10335_Const);
    String string_10337 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10338 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10337_Const = new_Constant((Optr)string_10337);
    // ,. 
    Send PSend10339 = new_Send((Optr)string_10337_Const, SMB__append_, 1, (Optr)PSend10338);
    // warn:. 
    Send PSend10340 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10339);
    Array PThreadedCode10334 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10335, (Optr)&t_send1, (Optr)PSend10336, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10337, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10338, (Optr)&t_send1, (Optr)PSend10339, (Optr)&t_send1, (Optr)PSend10340, (Optr)&t_method_return);
    Block PBlock10332 = new_Block_with(PArray10333, empty_Array, PThreadedCode10334, 2, PSend10336, PSend10340);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10341 = new_Send((Optr)PBlock10291, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10332);
    String string_10342 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10343 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10342_Const = new_Constant((Optr)string_10342);
    // ,. 
    Send PSend10344 = new_Send((Optr)string_10342_Const, SMB__append_, 1, (Optr)PSend10343);
    // warn:. 
    Send PSend10345 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10344);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10346 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10347 = new_String(L"Status ");
    // isConnected. 
    Send PSend10348 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10347_Const = new_Constant((Optr)string_10347);
    // ,. 
    Send PSend10349 = new_Send((Optr)string_10347_Const, SMB__append_, 1, (Optr)PSend10348);
    // warn:. 
    Send PSend10350 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10349);
    Array PThreadedCode10282 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10283, (Optr)&t_send1, (Optr)PSend10284, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10285, (Optr)&t_send1, (Optr)PSend10286, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10287, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10288, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10289, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10290, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10291, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10332, (Optr)&t_send2, (Optr)PSend10341, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10342, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10343, (Optr)&t_send1, (Optr)PSend10344, (Optr)&t_send1, (Optr)PSend10345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10346, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10347, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10348, (Optr)&t_send1, (Optr)PSend10349, (Optr)&t_send1, (Optr)PSend10350, (Optr)&t_method_return);
    Block PBlock10280 = new_Block_with(empty_Array, PArray10281, PThreadedCode10282, 8, PSend10284, PSend10286, PAssign10287, PAssign10289, PSend10341, PSend10345, PSend10346, PSend10350);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10351 = new_Send((Optr)PBlock10280, SMB_fork, 0);
    Array PThreadedCode10277 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10278, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10279, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10280, (Optr)&t_send0, (Optr)PSend10351, (Optr)&t_method_return);
    Block PBlock10275 = new_Block_with(empty_Array, PArray10276, PThreadedCode10277, 2, PAssign10278, PSend10351);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10352 = new_Send((Optr)PBlock10272, SMB_whileTrue_, 1, (Optr)PBlock10275);
    Array PThreadedCode10268 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10269, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10270, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10271, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10272, (Optr)&t_push_closure, (Optr)PBlock10275, (Optr)&t_send1, (Optr)PSend10352, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10265 = new_Method_with(PArray10266, PArray10267, empty_Array, PThreadedCode10268, 4, PAssign10269, PSend10271, PSend10352, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod10265, HEADER(IO_Socket_Class));
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