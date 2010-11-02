#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9620 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9622 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9621 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9622, (Optr)&t_method_return);
    Method PMethod9619 = new_Method_with(PArray9620, empty_Array, empty_Array, PThreadedCode9621, 1, PSend9622);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9619, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9626 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9625 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9626);
    Array PArray9624 = new_Array_with(1, (Optr)PAnnotation9625);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9628 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9627 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9628, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9623 = new_NativeMethod_with(empty_Array, empty_Array, PArray9624, PThreadedCode9627, 2, PSend9628, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9623, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9630 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9634 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9633 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9634, (Optr)&t_block_return);
    Block PBlock9632 = new_Block_with(empty_Array, empty_Array, PThreadedCode9633, 1, PSend9634);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9637 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9638 = new_Send((Optr)PSend9637, SMB_yield, 0);
    Array PThreadedCode9636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9637, (Optr)&t_send0, (Optr)PSend9638, (Optr)&t_block_return);
    Block PBlock9635 = new_Block_with(empty_Array, empty_Array, PThreadedCode9636, 1, PSend9638);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9639 = new_Send((Optr)PBlock9632, SMB_whileFalse_, 1, (Optr)PBlock9635);
    String string_9640 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9640_Const = new_Constant((Optr)string_9640);
    // warn:. 
    Send PSend9641 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9640_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9642 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9631 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9632, (Optr)&t_push_closure, (Optr)PBlock9635, (Optr)&t_send1, (Optr)PSend9639, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9640, (Optr)&t_send1, (Optr)PSend9641, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9642, (Optr)&t_method_return);
    Method PMethod9629 = new_Method_with(PArray9630, empty_Array, empty_Array, PThreadedCode9631, 3, PSend9639, PSend9641, PSend9642);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9629, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9644 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9647 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9646 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9647);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9648 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9645 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9646, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9647, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9648, (Optr)&t_method_return);
    Method PMethod9643 = new_Method_with(empty_Array, PArray9644, empty_Array, PThreadedCode9645, 2, PAssign9646, PSend9648);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9643, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9650 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9652 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9651 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9652, (Optr)&t_method_return);
    Method PMethod9649 = new_Method_with(PArray9650, empty_Array, empty_Array, PThreadedCode9651, 1, PSend9652);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9649, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9654 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9657 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9656 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9657);
    Array PArray9655 = new_Array_with(1, (Optr)PAnnotation9656);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9659 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9658 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9659, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9653 = new_NativeMethod_with(PArray9654, empty_Array, PArray9655, PThreadedCode9658, 2, PSend9659, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9653, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9663 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9662 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9663);
    Array PArray9661 = new_Array_with(1, (Optr)PAnnotation9662);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9665 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9664 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9665, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9660 = new_NativeMethod_with(empty_Array, empty_Array, PArray9661, PThreadedCode9664, 2, PSend9665, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9660, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9667 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9668 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9674 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9673 = new_Send((Optr)PSend9674, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9672 = new_Send((Optr)PSend9673, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9671 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9672);
    Assign PAssign9670 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9671);
    // size. 
    Send PSend9676 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9675 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9676);
    String string_9677 = new_String(L"-Data: ");
    Constant string_9677_Const = new_Constant((Optr)string_9677);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9678 = new_Send((Optr)string_9677_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9679 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9678);
    String string_9680 = new_String(L"-Size: ");
    Constant string_9680_Const = new_Constant((Optr)string_9680);
    // ,. 
    Send PSend9681 = new_Send((Optr)string_9680_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend9682 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9681);
    String string_9683 = new_String(L"-Buffer size ");
    // size. 
    Send PSend9684 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_9683_Const = new_Constant((Optr)string_9683);
    // ,. 
    Send PSend9685 = new_Send((Optr)string_9683_Const, SMB__append_, 1, (Optr)PSend9684);
    // warn:. 
    Send PSend9686 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9685);
    String string_9687 = new_String(L"-Buffer before: ");
    Constant string_9687_Const = new_Constant((Optr)string_9687);
    // warn:. 
    Send PSend9688 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9687_Const);
    // warn:. 
    Send PSend9689 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend9690 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend9691 = new_Send((Optr)PSend9690, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend9692 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend9691, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_9693 = new_String(L"-Buffer after ");
    Constant string_9693_Const = new_Constant((Optr)string_9693);
    // warn:. 
    Send PSend9694 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9693_Const);
    // warn:. 
    Send PSend9695 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9669 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9670, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9674, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9673, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9672, (Optr)&t_send1, (Optr)PSend9671, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9675, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9676, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9677, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9678, (Optr)&t_send1, (Optr)PSend9679, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9680, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9681, (Optr)&t_send1, (Optr)PSend9682, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9683, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9684, (Optr)&t_send1, (Optr)PSend9685, (Optr)&t_send1, (Optr)PSend9686, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9687, (Optr)&t_send1, (Optr)PSend9688, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9689, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9690, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9691, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend9692, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9693, (Optr)&t_send1, (Optr)PSend9694, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9695, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9666 = new_Method_with(PArray9667, PArray9668, empty_Array, PThreadedCode9669, 11, PAssign9670, PAssign9675, PSend9679, PSend9682, PSend9686, PSend9688, PSend9689, PSend9692, PSend9694, PSend9695, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9666, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9697 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9699 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9700 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9699);
    Array PThreadedCode9698 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9699, (Optr)&t_send1, (Optr)PSend9700, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9696 = new_Method_with(PArray9697, empty_Array, empty_Array, PThreadedCode9698, 2, PSend9700, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod9696, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend9703 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign9704 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode9702 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9703, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9704, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9701 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9702, 3, PSend9703, PAssign9704, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9701, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray9706 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend9708 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode9707 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend9708, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9705 = new_Method_with(PArray9706, empty_Array, empty_Array, PThreadedCode9707, 2, PSend9708, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod9705, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9712 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9711 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_9712);
    Array PArray9710 = new_Array_with(1, (Optr)PAnnotation9711);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9714 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9713 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9714, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9709 = new_NativeMethod_with(empty_Array, empty_Array, PArray9710, PThreadedCode9713, 2, PSend9714, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod9709, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9716 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9720 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9719 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9720, (Optr)&t_block_return);
    Block PBlock9718 = new_Block_with(empty_Array, empty_Array, PThreadedCode9719, 1, PSend9720);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9723 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9724 = new_Send((Optr)PSend9723, SMB_primYield, 0);
    Array PThreadedCode9722 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9723, (Optr)&t_send0, (Optr)PSend9724, (Optr)&t_block_return);
    Block PBlock9721 = new_Block_with(empty_Array, empty_Array, PThreadedCode9722, 1, PSend9724);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9725 = new_Send((Optr)PBlock9718, SMB_whileFalse_, 1, (Optr)PBlock9721);
    String string_9726 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9726_Const = new_Constant((Optr)string_9726);
    // warn:. 
    Send PSend9727 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9726_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend9728 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode9717 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9718, (Optr)&t_push_closure, (Optr)PBlock9721, (Optr)&t_send1, (Optr)PSend9725, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9726, (Optr)&t_send1, (Optr)PSend9727, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend9728, (Optr)&t_method_return);
    Method PMethod9715 = new_Method_with(PArray9716, empty_Array, empty_Array, PThreadedCode9717, 3, PSend9725, PSend9727, PSend9728);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod9715, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9730 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9734 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9733 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9734, (Optr)&t_block_return);
    Block PBlock9732 = new_Block_with(empty_Array, empty_Array, PThreadedCode9733, 1, PSend9734);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9737 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9738 = new_Send((Optr)PSend9737, SMB_primYield, 0);
    Array PThreadedCode9736 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9737, (Optr)&t_send0, (Optr)PSend9738, (Optr)&t_block_return);
    Block PBlock9735 = new_Block_with(empty_Array, empty_Array, PThreadedCode9736, 1, PSend9738);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9739 = new_Send((Optr)PBlock9732, SMB_whileFalse_, 1, (Optr)PBlock9735);
    String string_9740 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9740_Const = new_Constant((Optr)string_9740);
    // warn:. 
    Send PSend9741 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9740_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend9742 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9731 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9732, (Optr)&t_push_closure, (Optr)PBlock9735, (Optr)&t_send1, (Optr)PSend9739, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9740, (Optr)&t_send1, (Optr)PSend9741, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9742, (Optr)&t_method_return);
    Method PMethod9729 = new_Method_with(PArray9730, empty_Array, empty_Array, PThreadedCode9731, 3, PSend9739, PSend9741, PSend9742);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod9729, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9744 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9746 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9745 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9746, (Optr)&t_method_return);
    Method PMethod9743 = new_Method_with(PArray9744, empty_Array, empty_Array, PThreadedCode9745, 1, PSend9746);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9743, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend9749 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign9753 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9752 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign9753, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9751 = new_Block_with(empty_Array, empty_Array, PThreadedCode9752, 1, PAssign9753);
    // ifFalse:. 
    Send PSend9750 = new_Send((Optr)PSend9749, SMB_ifFalse_, 1, (Optr)PBlock9751);
    Array PThreadedCode9748 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9749, (Optr)&t_send_ifFalse_, (Optr)PSend9750, (Optr)PBlock9751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9748, 2, PSend9750, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod9747, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9755 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9758 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation9757 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_9758);
    Array PArray9756 = new_Array_with(1, (Optr)PAnnotation9757);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9760 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9759 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9760, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9754 = new_NativeMethod_with(PArray9755, empty_Array, PArray9756, PThreadedCode9759, 2, PSend9760, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod9754, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9762 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9765 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9769 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode9768 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend9769, (Optr)&t_block_return);
    Block PBlock9767 = new_Block_with(empty_Array, empty_Array, PThreadedCode9768, 1, PSend9769);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9770 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock9767);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9771 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend9772 = new_Send((Optr)PSend9771, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode9766 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9767, (Optr)&t_send1, (Optr)PSend9770, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9771, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9772, (Optr)&t_method_return);
    Block PBlock9764 = new_Block_with(PArray9765, empty_Array, PThreadedCode9766, 2, PSend9770, PSend9772);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9773 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9764);
    Array PThreadedCode9763 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9764, (Optr)&t_send1, (Optr)PSend9773, (Optr)&t_method_return);
    Method PMethod9761 = new_Method_with(empty_Array, PArray9762, empty_Array, PThreadedCode9763, 1, PSend9773);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod9761, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray9775 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9778 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation9777 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_9778);
    Array PArray9776 = new_Array_with(1, (Optr)PAnnotation9777);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9780 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9779 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9780, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9774 = new_NativeMethod_with(PArray9775, empty_Array, PArray9776, PThreadedCode9779, 2, PSend9780, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod9774, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9783 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9782 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9783, (Optr)&t_method_return);
    Method PMethod9781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9782, 1, PSend9783);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod9781, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9787 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation9786 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_9787);
    Array PArray9785 = new_Array_with(1, (Optr)PAnnotation9786);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9789 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9788 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9789, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9784 = new_NativeMethod_with(empty_Array, empty_Array, PArray9785, PThreadedCode9788, 2, PSend9789, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod9784, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9792 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9793 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode9791 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9792, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend9793, (Optr)&t_method_return);
    Method PMethod9790 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9791, 2, PSend9792, PSend9793);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod9790, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign9796 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign9797 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9795 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign9796, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9797, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9795, 3, PAssign9796, PAssign9797, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod9794, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9801 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation9800 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_9801);
    Array PArray9799 = new_Array_with(1, (Optr)PAnnotation9800);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9803 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9802 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9803, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9798 = new_NativeMethod_with(empty_Array, empty_Array, PArray9799, PThreadedCode9802, 2, PSend9803, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod9798, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend9806 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode9805 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9806, (Optr)&t_method_return);
    Method PMethod9804 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9805, 1, PSend9806);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod9804, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9809 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode9808 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9809, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod9807 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9808, 2, PSend9809, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod9807, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9813 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation9812 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_9813);
    Array PArray9811 = new_Array_with(1, (Optr)PAnnotation9812);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9815 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9814 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9815, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9810 = new_NativeMethod_with(empty_Array, empty_Array, PArray9811, PThreadedCode9814, 2, PSend9815, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod9810, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9817 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9820 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation9819 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_9820);
    Array PArray9818 = new_Array_with(1, (Optr)PAnnotation9819);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9822 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9821 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9822, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9816 = new_NativeMethod_with(PArray9817, empty_Array, PArray9818, PThreadedCode9821, 2, PSend9822, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod9816, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9824 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9826 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9825 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9826, (Optr)&t_method_return);
    Method PMethod9823 = new_Method_with(PArray9824, empty_Array, empty_Array, PThreadedCode9825, 1, PSend9826);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod9823, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9828 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9831 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend9833 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9837 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_9837_Const = new_Constant((Optr)string_9837);
    // escape:. 
    Send PSend9838 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9837_Const);
    Array PThreadedCode9836 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9837, (Optr)&t_send1, (Optr)PSend9838, (Optr)&t_block_return);
    Block PBlock9835 = new_Block_with(empty_Array, empty_Array, PThreadedCode9836, 1, PSend9838);
    // ifTrue:. 
    Send PSend9834 = new_Send((Optr)PSend9833, SMB_ifTrue_, 1, (Optr)PBlock9835);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9840 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign9839 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend9840);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend9841 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_9845 = new_String(L"invalidSocketHandle");
    Constant string_9845_Const = new_Constant((Optr)string_9845);
    // escape:. 
    Send PSend9846 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9845_Const);
    Array PThreadedCode9844 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9845, (Optr)&t_send1, (Optr)PSend9846, (Optr)&t_block_return);
    Block PBlock9843 = new_Block_with(empty_Array, empty_Array, PThreadedCode9844, 1, PSend9846);
    // ifTrue:. 
    Send PSend9842 = new_Send((Optr)PSend9841, SMB_ifTrue_, 1, (Optr)PBlock9843);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend9847 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_9851 = new_String(L"unconnected");
    Constant string_9851_Const = new_Constant((Optr)string_9851);
    // escape:. 
    Send PSend9852 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9851_Const);
    Array PThreadedCode9850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9851, (Optr)&t_send1, (Optr)PSend9852, (Optr)&t_block_return);
    Block PBlock9849 = new_Block_with(empty_Array, empty_Array, PThreadedCode9850, 1, PSend9852);
    // ifTrue:. 
    Send PSend9848 = new_Send((Optr)PSend9847, SMB_ifTrue_, 1, (Optr)PBlock9849);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend9853 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_9857 = new_String(L"waitingForConnection");
    Constant string_9857_Const = new_Constant((Optr)string_9857);
    // escape:. 
    Send PSend9858 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9857_Const);
    Array PThreadedCode9856 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9857, (Optr)&t_send1, (Optr)PSend9858, (Optr)&t_block_return);
    Block PBlock9855 = new_Block_with(empty_Array, empty_Array, PThreadedCode9856, 1, PSend9858);
    // ifTrue:. 
    Send PSend9854 = new_Send((Optr)PSend9853, SMB_ifTrue_, 1, (Optr)PBlock9855);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend9859 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_9863 = new_String(L"connected");
    Constant string_9863_Const = new_Constant((Optr)string_9863);
    // escape:. 
    Send PSend9864 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9863_Const);
    Array PThreadedCode9862 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9863, (Optr)&t_send1, (Optr)PSend9864, (Optr)&t_block_return);
    Block PBlock9861 = new_Block_with(empty_Array, empty_Array, PThreadedCode9862, 1, PSend9864);
    // ifTrue:. 
    Send PSend9860 = new_Send((Optr)PSend9859, SMB_ifTrue_, 1, (Optr)PBlock9861);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend9865 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_9869 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_9869_Const = new_Constant((Optr)string_9869);
    // escape:. 
    Send PSend9870 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9869_Const);
    Array PThreadedCode9868 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9869, (Optr)&t_send1, (Optr)PSend9870, (Optr)&t_block_return);
    Block PBlock9867 = new_Block_with(empty_Array, empty_Array, PThreadedCode9868, 1, PSend9870);
    // ifTrue:. 
    Send PSend9866 = new_Send((Optr)PSend9865, SMB_ifTrue_, 1, (Optr)PBlock9867);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend9871 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_9875 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_9875_Const = new_Constant((Optr)string_9875);
    // escape:. 
    Send PSend9876 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9875_Const);
    Array PThreadedCode9874 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9875, (Optr)&t_send1, (Optr)PSend9876, (Optr)&t_block_return);
    Block PBlock9873 = new_Block_with(empty_Array, empty_Array, PThreadedCode9874, 1, PSend9876);
    // ifTrue:. 
    Send PSend9872 = new_Send((Optr)PSend9871, SMB_ifTrue_, 1, (Optr)PBlock9873);
    String string_9877 = new_String(L"unknown socket status");
    Array PThreadedCode9832 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend9833, (Optr)&t_send_ifTrue_, (Optr)PSend9834, (Optr)PBlock9835, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9839, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9840, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9841, (Optr)&t_send_ifTrue_, (Optr)PSend9842, (Optr)PBlock9843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend9847, (Optr)&t_send_ifTrue_, (Optr)PSend9848, (Optr)PBlock9849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9853, (Optr)&t_send_ifTrue_, (Optr)PSend9854, (Optr)PBlock9855, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend9859, (Optr)&t_send_ifTrue_, (Optr)PSend9860, (Optr)PBlock9861, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend9865, (Optr)&t_send_ifTrue_, (Optr)PSend9866, (Optr)PBlock9867, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend9871, (Optr)&t_send_ifTrue_, (Optr)PSend9872, (Optr)PBlock9873, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_9877, (Optr)&t_method_return);
    Constant string_9877_Const = new_Constant((Optr)string_9877);
    Block PBlock9830 = new_Block_with(PArray9831, empty_Array, PThreadedCode9832, 9, PSend9834, PAssign9839, PSend9842, PSend9848, PSend9854, PSend9860, PSend9866, PSend9872, string_9877_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9878 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9830);
    Array PThreadedCode9829 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9830, (Optr)&t_send1, (Optr)PSend9878, (Optr)&t_method_return);
    Method PMethod9827 = new_Method_with(empty_Array, PArray9828, empty_Array, PThreadedCode9829, 1, PSend9878);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod9827, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend9883 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode9882 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9883, (Optr)&t_block_return);
    Block PBlock9881 = new_Block_with(empty_Array, empty_Array, PThreadedCode9882, 1, PSend9883);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9886 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9887 = new_Send((Optr)PSend9886, SMB_primYield, 0);
    Array PThreadedCode9885 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9886, (Optr)&t_send0, (Optr)PSend9887, (Optr)&t_block_return);
    Block PBlock9884 = new_Block_with(empty_Array, empty_Array, PThreadedCode9885, 1, PSend9887);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9888 = new_Send((Optr)PBlock9881, SMB_whileFalse_, 1, (Optr)PBlock9884);
    String string_9889 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9889_Const = new_Constant((Optr)string_9889);
    // warn:. 
    Send PSend9890 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9889_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend9891 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode9880 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock9881, (Optr)&t_push_closure, (Optr)PBlock9884, (Optr)&t_send1, (Optr)PSend9888, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9889, (Optr)&t_send1, (Optr)PSend9890, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9891, (Optr)&t_method_return);
    Method PMethod9879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9880, 3, PSend9888, PSend9890, PSend9891);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod9879, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9895 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation9894 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_9895);
    Array PArray9893 = new_Array_with(1, (Optr)PAnnotation9894);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9897 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9896 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9897, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9892 = new_NativeMethod_with(empty_Array, empty_Array, PArray9893, PThreadedCode9896, 2, PSend9897, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod9892, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9899 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend9902 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign9901 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend9902);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend9904 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign9903 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend9904);
    String string_9905 = new_String(L"Size returned -> ");
    Constant string_9905_Const = new_Constant((Optr)string_9905);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9906 = new_Send((Optr)string_9905_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9907 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9906);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9908 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode9900 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign9901, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend9902, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9903, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9904, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9905, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend9906, (Optr)&t_send1, (Optr)PSend9907, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9908, (Optr)&t_method_return);
    Method PMethod9898 = new_Method_with(empty_Array, PArray9899, empty_Array, PThreadedCode9900, 4, PAssign9901, PAssign9903, PSend9907, PSend9908);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod9898, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9912 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9911 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9912);
    Array PArray9910 = new_Array_with(1, (Optr)PAnnotation9911);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9914 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9913 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9914, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9909 = new_NativeMethod_with(empty_Array, empty_Array, PArray9910, PThreadedCode9913, 2, PSend9914, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod9909, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray9916 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend9920 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend9921 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode9919 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9920, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9921, (Optr)&t_block_return);
    Block PBlock9918 = new_Block_with(empty_Array, empty_Array, PThreadedCode9919, 2, PSend9920, PSend9921);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend9922 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock9918);
    Array PThreadedCode9917 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9918, (Optr)&t_send1, (Optr)PSend9922, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9915 = new_Method_with(PArray9916, empty_Array, empty_Array, PThreadedCode9917, 2, PSend9922, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod9915, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9924 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9926 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9925 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9926, (Optr)&t_method_return);
    Method PMethod9923 = new_Method_with(PArray9924, empty_Array, empty_Array, PThreadedCode9925, 1, PSend9926);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod9923, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9928 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9931 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation9930 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_9931);
    Array PArray9929 = new_Array_with(1, (Optr)PAnnotation9930);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9933 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9932 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9933, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9927 = new_NativeMethod_with(PArray9928, empty_Array, PArray9929, PThreadedCode9932, 2, PSend9933, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod9927, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray9935 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend9937 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode9936 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend9937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9934 = new_Method_with(PArray9935, empty_Array, empty_Array, PThreadedCode9936, 2, PSend9937, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod9934, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9941 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation9940 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_9941);
    Array PArray9939 = new_Array_with(1, (Optr)PAnnotation9940);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9943 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9942 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9943, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9938 = new_NativeMethod_with(empty_Array, empty_Array, PArray9939, PThreadedCode9942, 2, PSend9943, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod9938, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend9946 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode9945 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9946, (Optr)&t_method_return);
    Method PMethod9944 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9945, 1, PSend9946);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod9944, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray9948 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray9949 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9952 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9951 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend9952);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend9953 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend9956 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode9955 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9956, (Optr)&t_block_return);
    Block PBlock9954 = new_Block_with(empty_Array, empty_Array, PThreadedCode9955, 1, PSend9956);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray9958 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend9961 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign9960 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend9961);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray9963 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend9965 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9966 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9965);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend9967 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend9968 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9967);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9970 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign9969 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend9970);
    // on:. 
    Send PSend9972 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign9971 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend9972);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend9976 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign9975 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend9976);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9979 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend9980 = new_Send((Optr)PSend9979, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend9983 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_9984 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9984_Const = new_Constant((Optr)char_9984);
    // =. 
    Send PSend9985 = new_Send((Optr)PSend9983, SMB__equals_, 1, (Optr)char_9984_Const);
    Array PThreadedCode9982 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend9983, (Optr)&t_push1, (Optr)char_9984, (Optr)&t_send1, (Optr)PSend9985, (Optr)&t_block_return);
    Block PBlock9981 = new_Block_with(empty_Array, empty_Array, PThreadedCode9982, 1, PSend9985);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9986 = new_Send((Optr)PSend9980, SMB_and_, 1, (Optr)PBlock9981);
    Array PThreadedCode9978 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend9979, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend9980, (Optr)&t_push_closure, (Optr)PBlock9981, (Optr)&t_send1, (Optr)PSend9986, (Optr)&t_block_return);
    Block PBlock9977 = new_Block_with(empty_Array, empty_Array, PThreadedCode9978, 1, PSend9986);
    String string_9989 = new_String(L"Received ");
    Constant string_9989_Const = new_Constant((Optr)string_9989);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9990 = new_Send((Optr)string_9989_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_9991 = new_String(L", handle=");
    Constant string_9991_Const = new_Constant((Optr)string_9991);
    // ,. 
    Send PSend9992 = new_Send((Optr)PSend9990, SMB__append_, 1, (Optr)string_9991_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend9993 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend9994 = new_Send((Optr)PSend9992, SMB__append_, 1, (Optr)PSend9993);
    // warn:. 
    Send PSend9995 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9994);
    String string_9996 = new_String(L"Received ");
    // size. 
    Send PSend9997 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_9996_Const = new_Constant((Optr)string_9996);
    // ,. 
    Send PSend9998 = new_Send((Optr)string_9996_Const, SMB__append_, 1, (Optr)PSend9997);
    String string_9999 = new_String(L" bytes");
    Constant string_9999_Const = new_Constant((Optr)string_9999);
    // ,. 
    Send PSend10000 = new_Send((Optr)PSend9998, SMB__append_, 1, (Optr)string_9999_Const);
    String string_10001 = new_String(L", handle=");
    Constant string_10001_Const = new_Constant((Optr)string_10001);
    // ,. 
    Send PSend10002 = new_Send((Optr)PSend10000, SMB__append_, 1, (Optr)string_10001_Const);
    // hash. 
    Send PSend10003 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10004 = new_Send((Optr)PSend10002, SMB__append_, 1, (Optr)PSend10003);
    // warn:. 
    Send PSend10005 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10004);
    String string_10006 = new_String(L"Received ");
    // size. 
    Send PSend10007 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10006_Const = new_Constant((Optr)string_10006);
    // ,. 
    Send PSend10008 = new_Send((Optr)string_10006_Const, SMB__append_, 1, (Optr)PSend10007);
    String string_10009 = new_String(L" bytes");
    Constant string_10009_Const = new_Constant((Optr)string_10009);
    // ,. 
    Send PSend10010 = new_Send((Optr)PSend10008, SMB__append_, 1, (Optr)string_10009_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10011 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10010);
    // readMessage. 
    Send PSend10013 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10012 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10013);
    Array PThreadedCode9988 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9989, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend9990, (Optr)&t_push1, (Optr)string_9991, (Optr)&t_send1, (Optr)PSend9992, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9993, (Optr)&t_send1, (Optr)PSend9994, (Optr)&t_send1, (Optr)PSend9995, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9996, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend9997, (Optr)&t_send1, (Optr)PSend9998, (Optr)&t_push1, (Optr)string_9999, (Optr)&t_send1, (Optr)PSend10000, (Optr)&t_push1, (Optr)string_10001, (Optr)&t_send1, (Optr)PSend10002, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10003, (Optr)&t_send1, (Optr)PSend10004, (Optr)&t_send1, (Optr)PSend10005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10006, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10007, (Optr)&t_send1, (Optr)PSend10008, (Optr)&t_push1, (Optr)string_10009, (Optr)&t_send1, (Optr)PSend10010, (Optr)&t_send1, (Optr)PSend10011, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10012, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10013, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9987 = new_Block_with(empty_Array, empty_Array, PThreadedCode9988, 4, PSend9995, PSend10005, PSend10011, PAssign10012);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10014 = new_Send((Optr)PBlock9977, SMB_whileFalse_, 1, (Optr)PBlock9987);
    Array PThreadedCode9974 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign9975, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend9976, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9977, (Optr)&t_push_closure, (Optr)PBlock9987, (Optr)&t_send1, (Optr)PSend10014, (Optr)&t_block_return);
    Block PBlock9973 = new_Block_with(empty_Array, empty_Array, PThreadedCode9974, 2, PAssign9975, PSend10014);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10016 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10018 = new_String(L"Error: Network Connection closed");
    Constant string_10018_Const = new_Constant((Optr)string_10018);
    // warn:. 
    Send PSend10019 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10018_Const);
    String string_10020 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10021 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10020_Const = new_Constant((Optr)string_10020);
    // ,. 
    Send PSend10022 = new_Send((Optr)string_10020_Const, SMB__append_, 1, (Optr)PSend10021);
    // warn:. 
    Send PSend10023 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10022);
    Array PThreadedCode10017 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10018, (Optr)&t_send1, (Optr)PSend10019, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10020, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10021, (Optr)&t_send1, (Optr)PSend10022, (Optr)&t_send1, (Optr)PSend10023, (Optr)&t_method_return);
    Block PBlock10015 = new_Block_with(PArray10016, empty_Array, PThreadedCode10017, 2, PSend10019, PSend10023);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10024 = new_Send((Optr)PBlock9973, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10015);
    String string_10025 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10026 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10025_Const = new_Constant((Optr)string_10025);
    // ,. 
    Send PSend10027 = new_Send((Optr)string_10025_Const, SMB__append_, 1, (Optr)PSend10026);
    // warn:. 
    Send PSend10028 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10027);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10029 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10030 = new_String(L"Status ");
    // isConnected. 
    Send PSend10031 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10030_Const = new_Constant((Optr)string_10030);
    // ,. 
    Send PSend10032 = new_Send((Optr)string_10030_Const, SMB__append_, 1, (Optr)PSend10031);
    // warn:. 
    Send PSend10033 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10032);
    Array PThreadedCode9964 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9965, (Optr)&t_send1, (Optr)PSend9966, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9967, (Optr)&t_send1, (Optr)PSend9968, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9969, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend9970, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9971, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend9972, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9973, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10015, (Optr)&t_send2, (Optr)PSend10024, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10025, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10026, (Optr)&t_send1, (Optr)PSend10027, (Optr)&t_send1, (Optr)PSend10028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10029, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10030, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10031, (Optr)&t_send1, (Optr)PSend10032, (Optr)&t_send1, (Optr)PSend10033, (Optr)&t_method_return);
    Block PBlock9962 = new_Block_with(empty_Array, PArray9963, PThreadedCode9964, 8, PSend9966, PSend9968, PAssign9969, PAssign9971, PSend10024, PSend10028, PSend10029, PSend10033);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10034 = new_Send((Optr)PBlock9962, SMB_fork, 0);
    Array PThreadedCode9959 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign9960, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend9961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9962, (Optr)&t_send0, (Optr)PSend10034, (Optr)&t_method_return);
    Block PBlock9957 = new_Block_with(empty_Array, PArray9958, PThreadedCode9959, 2, PAssign9960, PSend10034);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10035 = new_Send((Optr)PBlock9954, SMB_whileTrue_, 1, (Optr)PBlock9957);
    Array PThreadedCode9950 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9951, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9952, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend9953, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9954, (Optr)&t_push_closure, (Optr)PBlock9957, (Optr)&t_send1, (Optr)PSend10035, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9947 = new_Method_with(PArray9948, PArray9949, empty_Array, PThreadedCode9950, 4, PAssign9951, PSend9953, PSend10035, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod9947, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket_, MC_SMB_testWebSocket_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10037 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10038 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10041 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10040 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10041);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10042 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10044 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10043 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10044);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10046 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10045 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10046);
    String string_10047 = new_String(L"* read from ");
    Constant string_10047_Const = new_Constant((Optr)string_10047);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10048 = new_Send((Optr)string_10047_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10049 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10048);
    String string_10050 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10051 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10050_Const = new_Constant((Optr)string_10050);
    // ,. 
    Send PSend10052 = new_Send((Optr)string_10050_Const, SMB__append_, 1, (Optr)PSend10051);
    String string_10053 = new_String(L" bytes");
    Constant string_10053_Const = new_Constant((Optr)string_10053);
    // ,. 
    Send PSend10054 = new_Send((Optr)PSend10052, SMB__append_, 1, (Optr)string_10053_Const);
    // warn:. 
    Send PSend10055 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10054);
    String string_10056 = new_String(L"Received ");
    // size. 
    Send PSend10057 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10056_Const = new_Constant((Optr)string_10056);
    // ,. 
    Send PSend10058 = new_Send((Optr)string_10056_Const, SMB__append_, 1, (Optr)PSend10057);
    String string_10059 = new_String(L" bytes");
    Constant string_10059_Const = new_Constant((Optr)string_10059);
    // ,. 
    Send PSend10060 = new_Send((Optr)PSend10058, SMB__append_, 1, (Optr)string_10059_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10061 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10060);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10062 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10063 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10039 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10040, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10041, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10042, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10043, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10044, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10045, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10046, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10047, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10048, (Optr)&t_send1, (Optr)PSend10049, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10050, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10051, (Optr)&t_send1, (Optr)PSend10052, (Optr)&t_push1, (Optr)string_10053, (Optr)&t_send1, (Optr)PSend10054, (Optr)&t_send1, (Optr)PSend10055, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10056, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10057, (Optr)&t_send1, (Optr)PSend10058, (Optr)&t_push1, (Optr)string_10059, (Optr)&t_send1, (Optr)PSend10060, (Optr)&t_send1, (Optr)PSend10061, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10062, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10063, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10036 = new_Method_with(PArray10037, PArray10038, empty_Array, PThreadedCode10039, 10, PAssign10040, PSend10042, PAssign10043, PAssign10045, PSend10049, PSend10055, PSend10061, PSend10062, PSend10063, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10036, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10066 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10065 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10066, (Optr)&t_method_return);
    Method PMethod10064 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10065, 1, PSend10066);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10064, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10068 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10068, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10067, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10070 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10071 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10074 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10073 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10074);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10075 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10078 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10077 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10078, (Optr)&t_block_return);
    Block PBlock10076 = new_Block_with(empty_Array, empty_Array, PThreadedCode10077, 1, PSend10078);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10080 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10083 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10082 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10083);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray10085 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10087 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10088 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10087);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10089 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10090 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10089);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10092 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10091 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10092);
    // on:. 
    Send PSend10094 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10093 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10094);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray10096 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10098 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10099 = new_Send((Optr)PSend10098, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend10102 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend10103 = new_Send((Optr)PSend10102, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode10101 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10102, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend10103, (Optr)&t_block_return);
    Block PBlock10100 = new_Block_with(empty_Array, empty_Array, PThreadedCode10101, 1, PSend10103);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10104 = new_Send((Optr)PSend10099, SMB_and_, 1, (Optr)PBlock10100);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend10108 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode10107 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10108, (Optr)&t_block_return);
    Block PBlock10106 = new_Block_with(empty_Array, empty_Array, PThreadedCode10107, 1, PSend10108);
    String string_10111 = new_String(L"Received ");
    Constant string_10111_Const = new_Constant((Optr)string_10111);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10112 = new_Send((Optr)string_10111_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_10113 = new_String(L", handle=");
    Constant string_10113_Const = new_Constant((Optr)string_10113);
    // ,. 
    Send PSend10114 = new_Send((Optr)PSend10112, SMB__append_, 1, (Optr)string_10113_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10115 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10116 = new_Send((Optr)PSend10114, SMB__append_, 1, (Optr)PSend10115);
    // warn:. 
    Send PSend10117 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10116);
    String string_10118 = new_String(L"Received ");
    // size. 
    Send PSend10119 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10118_Const = new_Constant((Optr)string_10118);
    // ,. 
    Send PSend10120 = new_Send((Optr)string_10118_Const, SMB__append_, 1, (Optr)PSend10119);
    String string_10121 = new_String(L" bytes");
    Constant string_10121_Const = new_Constant((Optr)string_10121);
    // ,. 
    Send PSend10122 = new_Send((Optr)PSend10120, SMB__append_, 1, (Optr)string_10121_Const);
    String string_10123 = new_String(L", handle=");
    Constant string_10123_Const = new_Constant((Optr)string_10123);
    // ,. 
    Send PSend10124 = new_Send((Optr)PSend10122, SMB__append_, 1, (Optr)string_10123_Const);
    // hash. 
    Send PSend10125 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10126 = new_Send((Optr)PSend10124, SMB__append_, 1, (Optr)PSend10125);
    // warn:. 
    Send PSend10127 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10126);
    String string_10128 = new_String(L"Received ");
    // size. 
    Send PSend10129 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_10128_Const = new_Constant((Optr)string_10128);
    // ,. 
    Send PSend10130 = new_Send((Optr)string_10128_Const, SMB__append_, 1, (Optr)PSend10129);
    String string_10131 = new_String(L" bytes");
    Constant string_10131_Const = new_Constant((Optr)string_10131);
    // ,. 
    Send PSend10132 = new_Send((Optr)PSend10130, SMB__append_, 1, (Optr)string_10131_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10133 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10132);
    Array PThreadedCode10110 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10111, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend10112, (Optr)&t_push1, (Optr)string_10113, (Optr)&t_send1, (Optr)PSend10114, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10115, (Optr)&t_send1, (Optr)PSend10116, (Optr)&t_send1, (Optr)PSend10117, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10118, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10119, (Optr)&t_send1, (Optr)PSend10120, (Optr)&t_push1, (Optr)string_10121, (Optr)&t_send1, (Optr)PSend10122, (Optr)&t_push1, (Optr)string_10123, (Optr)&t_send1, (Optr)PSend10124, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10125, (Optr)&t_send1, (Optr)PSend10126, (Optr)&t_send1, (Optr)PSend10127, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10128, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10129, (Optr)&t_send1, (Optr)PSend10130, (Optr)&t_push1, (Optr)string_10131, (Optr)&t_send1, (Optr)PSend10132, (Optr)&t_send1, (Optr)PSend10133, (Optr)&t_block_return);
    Block PBlock10109 = new_Block_with(empty_Array, empty_Array, PThreadedCode10110, 3, PSend10117, PSend10127, PSend10133);
    // ifTrue:ifFalse:. 
    Send PSend10105 = new_Send((Optr)PSend10104, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10106, (Optr)PBlock10109);
    Array PThreadedCode10097 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend10098, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10099, (Optr)&t_push_closure, (Optr)PBlock10100, (Optr)&t_send1, (Optr)PSend10104, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10105, (Optr)PBlock10106, (Optr)PBlock10109, (Optr)&t_method_return);
    Block PBlock10095 = new_Block_with(PArray10096, empty_Array, PThreadedCode10097, 1, PSend10105);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10134 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock10095);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10136 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10138 = new_String(L"Error: Network Connection closed");
    Constant string_10138_Const = new_Constant((Optr)string_10138);
    // warn:. 
    Send PSend10139 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10138_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10140 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10141 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10142 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10141_Const = new_Constant((Optr)string_10141);
    // ,. 
    Send PSend10143 = new_Send((Optr)string_10141_Const, SMB__append_, 1, (Optr)PSend10142);
    // warn:. 
    Send PSend10144 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10143);
    Array PThreadedCode10137 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10138, (Optr)&t_send1, (Optr)PSend10139, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10140, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10141, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10142, (Optr)&t_send1, (Optr)PSend10143, (Optr)&t_send1, (Optr)PSend10144, (Optr)&t_method_return);
    Block PBlock10135 = new_Block_with(PArray10136, empty_Array, PThreadedCode10137, 3, PSend10139, PSend10140, PSend10144);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10145 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10135);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10147 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10149 = new_String(L"Will now try to close connection");
    Constant string_10149_Const = new_Constant((Optr)string_10149);
    // warn:. 
    Send PSend10150 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10149_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10151 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10152 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10153 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10152_Const = new_Constant((Optr)string_10152);
    // ,. 
    Send PSend10154 = new_Send((Optr)string_10152_Const, SMB__append_, 1, (Optr)PSend10153);
    // warn:. 
    Send PSend10155 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10154);
    Array PThreadedCode10148 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10149, (Optr)&t_send1, (Optr)PSend10150, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10151, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10152, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10153, (Optr)&t_send1, (Optr)PSend10154, (Optr)&t_send1, (Optr)PSend10155, (Optr)&t_method_return);
    Block PBlock10146 = new_Block_with(PArray10147, empty_Array, PThreadedCode10148, 3, PSend10150, PSend10151, PSend10155);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10156 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10146);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10157 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode10086 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10087, (Optr)&t_send1, (Optr)PSend10088, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10089, (Optr)&t_send1, (Optr)PSend10090, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10091, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10092, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10093, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10094, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10095, (Optr)&t_send1, (Optr)PSend10134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10135, (Optr)&t_send1, (Optr)PSend10145, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10146, (Optr)&t_send1, (Optr)PSend10156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10157, (Optr)&t_method_return);
    Block PBlock10084 = new_Block_with(empty_Array, PArray10085, PThreadedCode10086, 8, PSend10088, PSend10090, PAssign10091, PAssign10093, PSend10134, PSend10145, PSend10156, PSend10157);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10158 = new_Send((Optr)PBlock10084, SMB_fork, 0);
    Array PThreadedCode10081 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10082, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10084, (Optr)&t_send0, (Optr)PSend10158, (Optr)&t_method_return);
    Block PBlock10079 = new_Block_with(empty_Array, PArray10080, PThreadedCode10081, 2, PAssign10082, PSend10158);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10159 = new_Send((Optr)PBlock10076, SMB_whileTrue_, 1, (Optr)PBlock10079);
    Array PThreadedCode10072 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10073, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10074, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10075, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10076, (Optr)&t_push_closure, (Optr)PBlock10079, (Optr)&t_send1, (Optr)PSend10159, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10069 = new_Method_with(PArray10070, PArray10071, empty_Array, PThreadedCode10072, 4, PAssign10073, PSend10075, PSend10159, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod10069, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10162 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10162_Const = new_Constant((Optr)string_10162);
    // require:at:. 
    Send PSend10163 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10162_Const);
    Array PThreadedCode10161 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10162, (Optr)&t_send2, (Optr)PSend10163, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10160 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10161, 2, PSend10163, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10160, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10165 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10166 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10169 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10168 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10169);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10170 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10173 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10172 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10173, (Optr)&t_block_return);
    Block PBlock10171 = new_Block_with(empty_Array, empty_Array, PThreadedCode10172, 1, PSend10173);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10175 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10178 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10177 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10178);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10182 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10181 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10182);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10185 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_9984 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9984_Const = new_Constant((Optr)char_9984);
    // =. 
    Send PSend10186 = new_Send((Optr)PSend10185, SMB__equals_, 1, (Optr)char_9984_Const);
    Array PThreadedCode10184 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10185, (Optr)&t_push1, (Optr)char_9984, (Optr)&t_send1, (Optr)PSend10186, (Optr)&t_block_return);
    Block PBlock10183 = new_Block_with(empty_Array, empty_Array, PThreadedCode10184, 1, PSend10186);
    String string_10189 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10190 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10189_Const = new_Constant((Optr)string_10189);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10191 = new_Send((Optr)string_10189_Const, SMB__append_, 1, (Optr)PSend10190);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10192 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10191);
    String string_10193 = new_String(L"Received ");
    Constant string_10193_Const = new_Constant((Optr)string_10193);
    // ,. 
    Send PSend10194 = new_Send((Optr)string_10193_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10195 = new_String(L", handle=");
    Constant string_10195_Const = new_Constant((Optr)string_10195);
    // ,. 
    Send PSend10196 = new_Send((Optr)PSend10194, SMB__append_, 1, (Optr)string_10195_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10197 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10198 = new_Send((Optr)PSend10196, SMB__append_, 1, (Optr)PSend10197);
    // warn:. 
    Send PSend10199 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10198);
    String string_10200 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10201 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10200_Const = new_Constant((Optr)string_10200);
    // ,. 
    Send PSend10202 = new_Send((Optr)string_10200_Const, SMB__append_, 1, (Optr)PSend10201);
    String string_10203 = new_String(L" bytes");
    Constant string_10203_Const = new_Constant((Optr)string_10203);
    // ,. 
    Send PSend10204 = new_Send((Optr)PSend10202, SMB__append_, 1, (Optr)string_10203_Const);
    String string_10205 = new_String(L", handle=");
    Constant string_10205_Const = new_Constant((Optr)string_10205);
    // ,. 
    Send PSend10206 = new_Send((Optr)PSend10204, SMB__append_, 1, (Optr)string_10205_Const);
    // hash. 
    Send PSend10207 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10208 = new_Send((Optr)PSend10206, SMB__append_, 1, (Optr)PSend10207);
    // warn:. 
    Send PSend10209 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10208);
    String string_10210 = new_String(L"Received ");
    // size. 
    Send PSend10211 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10210_Const = new_Constant((Optr)string_10210);
    // ,. 
    Send PSend10212 = new_Send((Optr)string_10210_Const, SMB__append_, 1, (Optr)PSend10211);
    String string_10213 = new_String(L" bytes");
    Constant string_10213_Const = new_Constant((Optr)string_10213);
    // ,. 
    Send PSend10214 = new_Send((Optr)PSend10212, SMB__append_, 1, (Optr)string_10213_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10215 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10214);
    // receive. 
    Send PSend10217 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10216 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10217);
    Array PThreadedCode10188 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10189, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10190, (Optr)&t_send1, (Optr)PSend10191, (Optr)&t_send1, (Optr)PSend10192, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10193, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10194, (Optr)&t_push1, (Optr)string_10195, (Optr)&t_send1, (Optr)PSend10196, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10197, (Optr)&t_send1, (Optr)PSend10198, (Optr)&t_send1, (Optr)PSend10199, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10200, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10201, (Optr)&t_send1, (Optr)PSend10202, (Optr)&t_push1, (Optr)string_10203, (Optr)&t_send1, (Optr)PSend10204, (Optr)&t_push1, (Optr)string_10205, (Optr)&t_send1, (Optr)PSend10206, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10207, (Optr)&t_send1, (Optr)PSend10208, (Optr)&t_send1, (Optr)PSend10209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10210, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10211, (Optr)&t_send1, (Optr)PSend10212, (Optr)&t_push1, (Optr)string_10213, (Optr)&t_send1, (Optr)PSend10214, (Optr)&t_send1, (Optr)PSend10215, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10216, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10217, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10187 = new_Block_with(empty_Array, empty_Array, PThreadedCode10188, 5, PSend10192, PSend10199, PSend10209, PSend10215, PAssign10216);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10218 = new_Send((Optr)PBlock10183, SMB_whileFalse_, 1, (Optr)PBlock10187);
    String string_10219 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10220 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10219_Const = new_Constant((Optr)string_10219);
    // ,. 
    Send PSend10221 = new_Send((Optr)string_10219_Const, SMB__append_, 1, (Optr)PSend10220);
    // warn:. 
    Send PSend10222 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10221);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10223 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10224 = new_String(L"Status ");
    // isConnected. 
    Send PSend10225 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10224_Const = new_Constant((Optr)string_10224);
    // ,. 
    Send PSend10226 = new_Send((Optr)string_10224_Const, SMB__append_, 1, (Optr)PSend10225);
    // warn:. 
    Send PSend10227 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10226);
    Array PThreadedCode10180 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10181, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10182, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10183, (Optr)&t_push_closure, (Optr)PBlock10187, (Optr)&t_send1, (Optr)PSend10218, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10219, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10220, (Optr)&t_send1, (Optr)PSend10221, (Optr)&t_send1, (Optr)PSend10222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10223, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10224, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10225, (Optr)&t_send1, (Optr)PSend10226, (Optr)&t_send1, (Optr)PSend10227, (Optr)&t_block_return);
    Block PBlock10179 = new_Block_with(empty_Array, empty_Array, PThreadedCode10180, 5, PAssign10181, PSend10218, PSend10222, PSend10223, PSend10227);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10228 = new_Send((Optr)PBlock10179, SMB_fork, 0);
    Array PThreadedCode10176 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10177, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10178, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10179, (Optr)&t_send0, (Optr)PSend10228, (Optr)&t_method_return);
    Block PBlock10174 = new_Block_with(empty_Array, PArray10175, PThreadedCode10176, 2, PAssign10177, PSend10228);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10229 = new_Send((Optr)PBlock10171, SMB_whileTrue_, 1, (Optr)PBlock10174);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10230 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10167 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10168, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10169, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10170, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10171, (Optr)&t_push_closure, (Optr)PBlock10174, (Optr)&t_send1, (Optr)PSend10229, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10230, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10164 = new_Method_with(PArray10165, PArray10166, empty_Array, PThreadedCode10167, 5, PAssign10168, PSend10170, PSend10229, PSend10230, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10164, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10232 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10233 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10236 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10235 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10236);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10237 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10240 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10239 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10240, (Optr)&t_block_return);
    Block PBlock10238 = new_Block_with(empty_Array, empty_Array, PThreadedCode10239, 1, PSend10240);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10242 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10245 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10244 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10245);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10248 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10247 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10248, (Optr)&t_block_return);
    Block PBlock10246 = new_Block_with(empty_Array, empty_Array, PThreadedCode10247, 1, PSend10248);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10249 = new_Send((Optr)PBlock10246, SMB_fork, 0);
    Array PThreadedCode10243 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10244, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10245, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10246, (Optr)&t_send0, (Optr)PSend10249, (Optr)&t_method_return);
    Block PBlock10241 = new_Block_with(empty_Array, PArray10242, PThreadedCode10243, 2, PAssign10244, PSend10249);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10250 = new_Send((Optr)PBlock10238, SMB_whileTrue_, 1, (Optr)PBlock10241);
    Array PThreadedCode10234 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10235, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10237, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10238, (Optr)&t_push_closure, (Optr)PBlock10241, (Optr)&t_send1, (Optr)PSend10250, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10231 = new_Method_with(PArray10232, PArray10233, empty_Array, PThreadedCode10234, 4, PAssign10235, PSend10237, PSend10250, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10231, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10252 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10253 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10255 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10256 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10255);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10257 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10258 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10257);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10260 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10259 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10260);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10263 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10265 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10264 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10265);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10268 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10269 = new_Send((Optr)PSend10268, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10272 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_9984 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9984_Const = new_Constant((Optr)char_9984);
    // =. 
    Send PSend10273 = new_Send((Optr)PSend10272, SMB__equals_, 1, (Optr)char_9984_Const);
    Array PThreadedCode10271 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10272, (Optr)&t_push1, (Optr)char_9984, (Optr)&t_send1, (Optr)PSend10273, (Optr)&t_block_return);
    Block PBlock10270 = new_Block_with(empty_Array, empty_Array, PThreadedCode10271, 1, PSend10273);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10274 = new_Send((Optr)PSend10269, SMB_and_, 1, (Optr)PBlock10270);
    Array PThreadedCode10267 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10268, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10269, (Optr)&t_push_closure, (Optr)PBlock10270, (Optr)&t_send1, (Optr)PSend10274, (Optr)&t_block_return);
    Block PBlock10266 = new_Block_with(empty_Array, empty_Array, PThreadedCode10267, 1, PSend10274);
    String string_10277 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10278 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10277_Const = new_Constant((Optr)string_10277);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10279 = new_Send((Optr)string_10277_Const, SMB__append_, 1, (Optr)PSend10278);
    // warn:. 
    Send PSend10280 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10279);
    String string_10281 = new_String(L"Received ");
    Constant string_10281_Const = new_Constant((Optr)string_10281);
    // ,. 
    Send PSend10282 = new_Send((Optr)string_10281_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10283 = new_String(L", handle=");
    Constant string_10283_Const = new_Constant((Optr)string_10283);
    // ,. 
    Send PSend10284 = new_Send((Optr)PSend10282, SMB__append_, 1, (Optr)string_10283_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10285 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10286 = new_Send((Optr)PSend10284, SMB__append_, 1, (Optr)PSend10285);
    // warn:. 
    Send PSend10287 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10286);
    String string_10288 = new_String(L"Received ");
    // size. 
    Send PSend10289 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10288_Const = new_Constant((Optr)string_10288);
    // ,. 
    Send PSend10290 = new_Send((Optr)string_10288_Const, SMB__append_, 1, (Optr)PSend10289);
    String string_10291 = new_String(L" bytes");
    Constant string_10291_Const = new_Constant((Optr)string_10291);
    // ,. 
    Send PSend10292 = new_Send((Optr)PSend10290, SMB__append_, 1, (Optr)string_10291_Const);
    String string_10293 = new_String(L", handle=");
    Constant string_10293_Const = new_Constant((Optr)string_10293);
    // ,. 
    Send PSend10294 = new_Send((Optr)PSend10292, SMB__append_, 1, (Optr)string_10293_Const);
    // hash. 
    Send PSend10295 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10296 = new_Send((Optr)PSend10294, SMB__append_, 1, (Optr)PSend10295);
    // warn:. 
    Send PSend10297 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10296);
    String string_10298 = new_String(L"Received ");
    // size. 
    Send PSend10299 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10298_Const = new_Constant((Optr)string_10298);
    // ,. 
    Send PSend10300 = new_Send((Optr)string_10298_Const, SMB__append_, 1, (Optr)PSend10299);
    String string_10301 = new_String(L" bytes");
    Constant string_10301_Const = new_Constant((Optr)string_10301);
    // ,. 
    Send PSend10302 = new_Send((Optr)PSend10300, SMB__append_, 1, (Optr)string_10301_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10303 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10302);
    // receiveDataIfAvailable. 
    Send PSend10304 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10306 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10305 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10306);
    Array PThreadedCode10276 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10277, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10278, (Optr)&t_send1, (Optr)PSend10279, (Optr)&t_send1, (Optr)PSend10280, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10281, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10282, (Optr)&t_push1, (Optr)string_10283, (Optr)&t_send1, (Optr)PSend10284, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10285, (Optr)&t_send1, (Optr)PSend10286, (Optr)&t_send1, (Optr)PSend10287, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10288, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10289, (Optr)&t_send1, (Optr)PSend10290, (Optr)&t_push1, (Optr)string_10291, (Optr)&t_send1, (Optr)PSend10292, (Optr)&t_push1, (Optr)string_10293, (Optr)&t_send1, (Optr)PSend10294, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10295, (Optr)&t_send1, (Optr)PSend10296, (Optr)&t_send1, (Optr)PSend10297, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10298, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10299, (Optr)&t_send1, (Optr)PSend10300, (Optr)&t_push1, (Optr)string_10301, (Optr)&t_send1, (Optr)PSend10302, (Optr)&t_send1, (Optr)PSend10303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10304, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10305, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10306, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10275 = new_Block_with(empty_Array, empty_Array, PThreadedCode10276, 6, PSend10280, PSend10287, PSend10297, PSend10303, PSend10304, PAssign10305);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10307 = new_Send((Optr)PBlock10266, SMB_whileFalse_, 1, (Optr)PBlock10275);
    Array PThreadedCode10262 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10263, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10264, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10265, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10266, (Optr)&t_push_closure, (Optr)PBlock10275, (Optr)&t_send1, (Optr)PSend10307, (Optr)&t_block_return);
    Block PBlock10261 = new_Block_with(empty_Array, empty_Array, PThreadedCode10262, 3, PSend10263, PAssign10264, PSend10307);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10309 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10311 = new_String(L"Error: Network Connection closed");
    Constant string_10311_Const = new_Constant((Optr)string_10311);
    // warn:. 
    Send PSend10312 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10311_Const);
    String string_10313 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10314 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10313_Const = new_Constant((Optr)string_10313);
    // ,. 
    Send PSend10315 = new_Send((Optr)string_10313_Const, SMB__append_, 1, (Optr)PSend10314);
    // warn:. 
    Send PSend10316 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10315);
    Array PThreadedCode10310 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10311, (Optr)&t_send1, (Optr)PSend10312, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10313, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10314, (Optr)&t_send1, (Optr)PSend10315, (Optr)&t_send1, (Optr)PSend10316, (Optr)&t_method_return);
    Block PBlock10308 = new_Block_with(PArray10309, empty_Array, PThreadedCode10310, 2, PSend10312, PSend10316);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10317 = new_Send((Optr)PBlock10261, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10308);
    String string_10318 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10319 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10318_Const = new_Constant((Optr)string_10318);
    // ,. 
    Send PSend10320 = new_Send((Optr)string_10318_Const, SMB__append_, 1, (Optr)PSend10319);
    // warn:. 
    Send PSend10321 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10320);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10322 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10323 = new_String(L"Status ");
    // isConnected. 
    Send PSend10324 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10323_Const = new_Constant((Optr)string_10323);
    // ,. 
    Send PSend10325 = new_Send((Optr)string_10323_Const, SMB__append_, 1, (Optr)PSend10324);
    // warn:. 
    Send PSend10326 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10325);
    Array PThreadedCode10254 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10255, (Optr)&t_send1, (Optr)PSend10256, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10257, (Optr)&t_send1, (Optr)PSend10258, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10259, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10260, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10261, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10308, (Optr)&t_send2, (Optr)PSend10317, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10318, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10319, (Optr)&t_send1, (Optr)PSend10320, (Optr)&t_send1, (Optr)PSend10321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10322, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10323, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10324, (Optr)&t_send1, (Optr)PSend10325, (Optr)&t_send1, (Optr)PSend10326, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10251 = new_Method_with(PArray10252, PArray10253, empty_Array, PThreadedCode10254, 8, PSend10256, PSend10258, PAssign10259, PSend10317, PSend10321, PSend10322, PSend10326, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10251, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10328 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10328, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10327, HEADER(IO_Socket_Class));
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