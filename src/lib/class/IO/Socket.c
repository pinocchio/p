#include <lib/class/IO/Socket.h>


Optr layout_IO_Socket_Class_class;
Optr slot_IO_Socket_handle;
Optr slot_IO_Socket_connected;
Optr layout_IO_Socket;


static void init_SMB_receiveDataSignallingClosedInto_startingAt_() {
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9609 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9611 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9610 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9611, (Optr)&t_method_return);
    Method PMethod9608 = new_Method_with(PArray9609, empty_Array, empty_Array, PThreadedCode9610, 1, PSend9611);
    
    MethodClosure MC_SMB_receiveDataSignallingClosedInto_startingAt_ = new_MethodClosure((Method)PMethod9608, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingClosedInto_startingAt_, MC_SMB_receiveDataSignallingClosedInto_startingAt_);
}


static void init_SMB_primReadyToWrite() {
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9615 = new_String(L"\t\n    int n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &writeset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &writeset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9614 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToWrite, (Optr)SMB_IO_minus_Socket, (Optr)string_9615);
    Array PArray9613 = new_Array_with(1, (Optr)PAnnotation9614);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9617 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9616 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9617, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9612 = new_NativeMethod_with(empty_Array, empty_Array, PArray9613, PThreadedCode9616, 2, PSend9617, self);
    
    MethodClosure MC_SMB_primReadyToWrite = new_MethodClosure((Method)PNativeMethod9612, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToWrite, MC_SMB_primReadyToWrite);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9619 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToWrite = new_Symbol(L"primReadyToWrite");
    // primReadyToWrite. 
    Send PSend9623 = new_Send((Optr)self, SMB_primReadyToWrite, 0);
    Array PThreadedCode9622 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9623, (Optr)&t_block_return);
    Block PBlock9621 = new_Block_with(empty_Array, empty_Array, PThreadedCode9622, 1, PSend9623);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9626 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend9627 = new_Send((Optr)PSend9626, SMB_yield, 0);
    Array PThreadedCode9625 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9626, (Optr)&t_send0, (Optr)PSend9627, (Optr)&t_block_return);
    Block PBlock9624 = new_Block_with(empty_Array, empty_Array, PThreadedCode9625, 1, PSend9627);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9628 = new_Send((Optr)PBlock9621, SMB_whileFalse_, 1, (Optr)PBlock9624);
    String string_9629 = new_String(L"Write!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9629_Const = new_Constant((Optr)string_9629);
    // warn:. 
    Send PSend9630 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9629_Const);
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    // primWrite:. 
    Send PSend9631 = new_Send((Optr)self, SMB_primWrite_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9620 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9621, (Optr)&t_push_closure, (Optr)PBlock9624, (Optr)&t_send1, (Optr)PSend9628, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9629, (Optr)&t_send1, (Optr)PSend9630, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9631, (Optr)&t_method_return);
    Method PMethod9618 = new_Method_with(PArray9619, empty_Array, empty_Array, PThreadedCode9620, 3, PSend9628, PSend9630, PSend9631);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod9618, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Array PArray9633 = new_Array_with(1, (Optr)VAR_buffer_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_8000 = new_SmallInt(8000);
    Constant int_8000_Const = new_Constant((Optr)int_8000);
    // new:. 
    Send PSend9636 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_8000_Const);
    Assign PAssign9635 = new_Assign((Optr)VAR_buffer_0_0, (Optr)PSend9636);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9637 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_buffer_0_0, (Optr)int_1_Const);
    Array PThreadedCode9634 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9635, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_8000, (Optr)&t_send1, (Optr)PSend9636, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend9637, (Optr)&t_method_return);
    Method PMethod9632 = new_Method_with(empty_Array, PArray9633, empty_Array, PThreadedCode9634, 2, PAssign9635, PSend9637);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod9632, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_receiveDataTimeout_into_startingAt_() {
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9639 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9641 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9640 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9641, (Optr)&t_method_return);
    Method PMethod9638 = new_Method_with(PArray9639, empty_Array, empty_Array, PThreadedCode9640, 1, PSend9641);
    
    MethodClosure MC_SMB_receiveDataTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9638, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataTimeout_into_startingAt_, MC_SMB_receiveDataTimeout_into_startingAt_);
}


static void init_SMB_primConnectTo_port_() {
    Symbol SMB_primConnectTo_port_ = new_Symbol(L"primConnectTo:port:");
    Variable VAR_aHostname_0_0 = new_Variable_named(L"aHostname", 0);
    Variable VAR_aPort_0_1 = new_Variable_named(L"aPort", 0);
    Array PArray9643 = new_Array_with(2, (Optr)VAR_aHostname_0_0, (Optr)VAR_aPort_0_1);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9646 = new_String(L"\n    struct sockaddr_in sin;\n    struct hostent * server;\n\n    server = gethostbyname(unicode_to_ascii(((Symbol)#{aHostname})->value));\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    bcopy((char *)server->h_addr,\n        (char *)&sin.sin_addr.s_addr,\n        server->h_length);\n\n    assert(!(connect(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to connect\"););\n\t\t\n    ^ self;\n\t");
    Annotation PAnnotation9645 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primConnectTo_port_, (Optr)SMB_IO_minus_Socket, (Optr)string_9646);
    Array PArray9644 = new_Array_with(1, (Optr)PAnnotation9645);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9648 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9647 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9648, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9642 = new_NativeMethod_with(PArray9643, empty_Array, PArray9644, PThreadedCode9647, 2, PSend9648, self);
    
    MethodClosure MC_SMB_primConnectTo_port_ = new_MethodClosure((Method)PNativeMethod9642, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primConnectTo_port_, MC_SMB_primConnectTo_port_);
}


static void init_SMB_primAccept() {
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9652 = new_String(L"\n    int handle_current;\n    socklen_t addrlen;\n    struct sockaddr_in sin;\n\n    /* wait for a client to talk to us */\n    addrlen = sizeof(sin);\n    assert(!((handle_current = accept(unwrap_int(${handle}), (struct sockaddr *) &sin, &addrlen)) == -1),\n        fwprintf(stderr, L\"Socket failed to accept\"););\n\n\tmake_nonblocking(handle_current);\n\t\n    ^ new_IO_Socket_withHandle((SmallInt)wrap_int(handle_current));\n\t");
    Annotation PAnnotation9651 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9652);
    Array PArray9650 = new_Array_with(1, (Optr)PAnnotation9651);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9654 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9653 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9654, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9649 = new_NativeMethod_with(empty_Array, empty_Array, PArray9650, PThreadedCode9653, 2, PSend9654, self);
    
    MethodClosure MC_SMB_primAccept = new_MethodClosure((Method)PNativeMethod9649, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primAccept, MC_SMB_primAccept);
}


static void init_SMB_receiveAvailableDataInto_startingAt_() {
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9656 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray9657 = new_Array_with(2, (Optr)VAR_data_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9663 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9662 = new_Send((Optr)PSend9663, SMB__minus_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend9661 = new_Send((Optr)PSend9662, SMB__plus_, 1, (Optr)int_1_Const);
    // receive:. 
    Send PSend9660 = new_Send((Optr)self, SMB_receive_, 1, (Optr)PSend9661);
    Assign PAssign9659 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend9660);
    // size. 
    Send PSend9665 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Assign PAssign9664 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend9665);
    String string_9666 = new_String(L"-Data: ");
    Constant string_9666_Const = new_Constant((Optr)string_9666);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9667 = new_Send((Optr)string_9666_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9668 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9667);
    String string_9669 = new_String(L"-Size: ");
    Constant string_9669_Const = new_Constant((Optr)string_9669);
    // ,. 
    Send PSend9670 = new_Send((Optr)string_9669_Const, SMB__append_, 1, (Optr)VAR_size_0_3);
    // warn:. 
    Send PSend9671 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9670);
    String string_9672 = new_String(L"-Buffer size ");
    // size. 
    Send PSend9673 = new_Send((Optr)VAR_aBuffer_0_0, SMB_size, 0);
    Constant string_9672_Const = new_Constant((Optr)string_9672);
    // ,. 
    Send PSend9674 = new_Send((Optr)string_9672_Const, SMB__append_, 1, (Optr)PSend9673);
    // warn:. 
    Send PSend9675 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9674);
    String string_9676 = new_String(L"-Buffer before: ");
    Constant string_9676_Const = new_Constant((Optr)string_9676);
    // warn:. 
    Send PSend9677 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9676_Const);
    // warn:. 
    Send PSend9678 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    // +. 
    Send PSend9679 = new_Send((Optr)VAR_pos_0_1, SMB__plus_, 1, (Optr)VAR_size_0_3);
    // -. 
    Send PSend9680 = new_Send((Optr)PSend9679, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend9681 = new_Send((Optr)VAR_aBuffer_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_pos_0_1, (Optr)PSend9680, (Optr)VAR_data_0_2, (Optr)int_1_Const);
    String string_9682 = new_String(L"-Buffer after ");
    Constant string_9682_Const = new_Constant((Optr)string_9682);
    // warn:. 
    Send PSend9683 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9682_Const);
    // warn:. 
    Send PSend9684 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_aBuffer_0_0);
    Array PThreadedCode9658 = instantiate_Array_with(ThreadedCode_Class, 0, 104, (Optr)&t_push1, (Optr)PAssign9659, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9663, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend9662, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9661, (Optr)&t_send1, (Optr)PSend9660, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9664, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend9665, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9666, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend9667, (Optr)&t_send1, (Optr)PSend9668, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9669, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9670, (Optr)&t_send1, (Optr)PSend9671, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9672, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send0, (Optr)PSend9673, (Optr)&t_send1, (Optr)PSend9674, (Optr)&t_send1, (Optr)PSend9675, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9676, (Optr)&t_send1, (Optr)PSend9677, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9678, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend9679, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9680, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend9681, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9682, (Optr)&t_send1, (Optr)PSend9683, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_send1, (Optr)PSend9684, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_method_return);
    Method PMethod9655 = new_Method_with(PArray9656, PArray9657, empty_Array, PThreadedCode9658, 11, PAssign9659, PAssign9664, PSend9668, PSend9671, PSend9675, PSend9677, PSend9678, PSend9681, PSend9683, PSend9684, VAR_size_0_3);
    
    MethodClosure MC_SMB_receiveAvailableDataInto_startingAt_ = new_MethodClosure((Method)PMethod9655, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveAvailableDataInto_startingAt_, MC_SMB_receiveAvailableDataInto_startingAt_);
}


static void init_SMB_sendData_count_() {
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    Variable VAR_buffer_0_0 = new_Variable_named(L"buffer", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9686 = new_Array_with(2, (Optr)VAR_buffer_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9688 = new_Send((Optr)VAR_buffer_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9689 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9688);
    Array PThreadedCode9687 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_buffer_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9688, (Optr)&t_send1, (Optr)PSend9689, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9685 = new_Method_with(PArray9686, empty_Array, empty_Array, PThreadedCode9687, 2, PSend9689, self);
    
    MethodClosure MC_SMB_sendData_count_ = new_MethodClosure((Method)PMethod9685, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_sendData_count_, MC_SMB_sendData_count_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primInit = new_Symbol(L"primInit");
    // primInit. 
    Send PSend9692 = new_Send((Optr)self, SMB_primInit, 0);
    Assign PAssign9693 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)true_Const);
    Array PThreadedCode9691 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9692, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9693, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9691, 3, PSend9692, PAssign9693, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9690, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_listenOn_backlogSize_interface_() {
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_aBacklogSize_0_1 = new_Variable_named(L"aBacklogSize", 0);
    Variable VAR_anInterface_0_2 = new_Variable_named(L"anInterface", 0);
    Array PArray9695 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1, (Optr)VAR_anInterface_0_2);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend9697 = new_Send((Optr)self, SMB_listenOn_backlogSize_, 2, (Optr)VAR_aPort_0_0, (Optr)VAR_aBacklogSize_0_1);
    Array PThreadedCode9696 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_aBacklogSize_0_1, (Optr)&t_send2, (Optr)PSend9697, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9694 = new_Method_with(PArray9695, empty_Array, empty_Array, PThreadedCode9696, 2, PSend9697, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_interface_ = new_MethodClosure((Method)PMethod9694, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_interface_, MC_SMB_listenOn_backlogSize_interface_);
}


static void init_SMB_primReadyToReceive() {
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9701 = new_String(L"\n  \n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n\n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n         ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9700 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToReceive, (Optr)SMB_IO_minus_Socket, (Optr)string_9701);
    Array PArray9699 = new_Array_with(1, (Optr)PAnnotation9700);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9703 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9702 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9703, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9698 = new_NativeMethod_with(empty_Array, empty_Array, PArray9699, PThreadedCode9702, 2, PSend9703, self);
    
    MethodClosure MC_SMB_primReadyToReceive = new_MethodClosure((Method)PNativeMethod9698, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToReceive, MC_SMB_primReadyToReceive);
}


static void init_SMB_receive_() {
    Symbol SMB_receive_ = new_Symbol(L"receive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9705 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9709 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9708 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9709, (Optr)&t_block_return);
    Block PBlock9707 = new_Block_with(empty_Array, empty_Array, PThreadedCode9708, 1, PSend9709);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9712 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9713 = new_Send((Optr)PSend9712, SMB_primYield, 0);
    Array PThreadedCode9711 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9712, (Optr)&t_send0, (Optr)PSend9713, (Optr)&t_block_return);
    Block PBlock9710 = new_Block_with(empty_Array, empty_Array, PThreadedCode9711, 1, PSend9713);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9714 = new_Send((Optr)PBlock9707, SMB_whileFalse_, 1, (Optr)PBlock9710);
    String string_9715 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9715_Const = new_Constant((Optr)string_9715);
    // warn:. 
    Send PSend9716 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9715_Const);
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    // primReceive:. 
    Send PSend9717 = new_Send((Optr)self, SMB_primReceive_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode9706 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9707, (Optr)&t_push_closure, (Optr)PBlock9710, (Optr)&t_send1, (Optr)PSend9714, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9715, (Optr)&t_send1, (Optr)PSend9716, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend9717, (Optr)&t_method_return);
    Method PMethod9704 = new_Method_with(PArray9705, empty_Array, empty_Array, PThreadedCode9706, 3, PSend9714, PSend9716, PSend9717);
    
    MethodClosure MC_SMB_receive_ = new_MethodClosure((Method)PMethod9704, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive_, MC_SMB_receive_);
}


static void init_SMB_receiveInto_() {
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9719 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9723 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9722 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9723, (Optr)&t_block_return);
    Block PBlock9721 = new_Block_with(empty_Array, empty_Array, PThreadedCode9722, 1, PSend9723);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9726 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9727 = new_Send((Optr)PSend9726, SMB_primYield, 0);
    Array PThreadedCode9725 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9726, (Optr)&t_send0, (Optr)PSend9727, (Optr)&t_block_return);
    Block PBlock9724 = new_Block_with(empty_Array, empty_Array, PThreadedCode9725, 1, PSend9727);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9728 = new_Send((Optr)PBlock9721, SMB_whileFalse_, 1, (Optr)PBlock9724);
    String string_9729 = new_String(L"received");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9729_Const = new_Constant((Optr)string_9729);
    // warn:. 
    Send PSend9730 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9729_Const);
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    // primReceiveInto:. 
    Send PSend9731 = new_Send((Optr)self, SMB_primReceiveInto_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9720 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_closure, (Optr)PBlock9721, (Optr)&t_push_closure, (Optr)PBlock9724, (Optr)&t_send1, (Optr)PSend9728, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9729, (Optr)&t_send1, (Optr)PSend9730, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9731, (Optr)&t_method_return);
    Method PMethod9718 = new_Method_with(PArray9719, empty_Array, empty_Array, PThreadedCode9720, 3, PSend9728, PSend9730, PSend9731);
    
    MethodClosure MC_SMB_receiveInto_ = new_MethodClosure((Method)PMethod9718, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveInto_, MC_SMB_receiveInto_);
}


static void init_SMB_receiveDataSignallingTimeout_into_startingAt_() {
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    Variable VAR_timeout_0_0 = new_Variable_named(L"timeout", 0);
    Variable VAR_aBuffer_0_1 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_2 = new_Variable_named(L"pos", 0);
    Array PArray9733 = new_Array_with(3, (Optr)VAR_timeout_0_0, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9735 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_1, (Optr)VAR_pos_0_2);
    Array PThreadedCode9734 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_1, (Optr)&t_push_variable, (Optr)VAR_pos_0_2, (Optr)&t_send2, (Optr)PSend9735, (Optr)&t_method_return);
    Method PMethod9732 = new_Method_with(PArray9733, empty_Array, empty_Array, PThreadedCode9734, 1, PSend9735);
    
    MethodClosure MC_SMB_receiveDataSignallingTimeout_into_startingAt_ = new_MethodClosure((Method)PMethod9732, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataSignallingTimeout_into_startingAt_, MC_SMB_receiveDataSignallingTimeout_into_startingAt_);
}


static void init_SMB_checkConnected() {
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend9738 = new_Send((Optr)self, SMB_isValid, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign9742 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9741 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign9742, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9740 = new_Block_with(empty_Array, empty_Array, PThreadedCode9741, 1, PAssign9742);
    // ifFalse:. 
    Send PSend9739 = new_Send((Optr)PSend9738, SMB_ifFalse_, 1, (Optr)PBlock9740);
    Array PThreadedCode9737 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9738, (Optr)&t_send_ifFalse_, (Optr)PSend9739, (Optr)PBlock9740, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9736 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9737, 2, PSend9739, self);
    
    MethodClosure MC_SMB_checkConnected = new_MethodClosure((Method)PMethod9736, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_checkConnected, MC_SMB_checkConnected);
}


static void init_SMB_primReceiveInto_() {
    Symbol SMB_primReceiveInto_ = new_Symbol(L"primReceiveInto:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9744 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9747 = new_String(L"\n     char * buffer = unicode_to_ascii(((String)#{aString})->value);\n\tint alloc = ((Symbol)#{aString})->size;\n\tint s;\n\n\t//fwprintf(stdout, L\"Buffer size ->: %i\\n\", alloc );\t\n     s = recv(unwrap_int(${handle}), buffer, alloc, 0);\n\n\tif( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ wrap_int( s ).\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\n\t");
    Annotation PAnnotation9746 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceiveInto_, (Optr)SMB_IO_minus_Socket, (Optr)string_9747);
    Array PArray9745 = new_Array_with(1, (Optr)PAnnotation9746);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9749 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9748 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9749, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9743 = new_NativeMethod_with(PArray9744, empty_Array, PArray9745, PThreadedCode9748, 2, PSend9749, self);
    
    MethodClosure MC_SMB_primReceiveInto_ = new_MethodClosure((Method)PNativeMethod9743, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceiveInto_, MC_SMB_primReceiveInto_);
}


static void init_SMB_isValid() {
    Symbol SMB_isValid = new_Symbol(L"isValid");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9751 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9754 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9758 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode9757 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend9758, (Optr)&t_block_return);
    Block PBlock9756 = new_Block_with(empty_Array, empty_Array, PThreadedCode9757, 1, PSend9758);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9759 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNil_, 1, (Optr)PBlock9756);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9760 = new_Send((Optr)self, SMB_primStatus, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // >. 
    Send PSend9761 = new_Send((Optr)PSend9760, SMB__gt_, 1, (Optr)int_n1_Const);
    Array PThreadedCode9755 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9756, (Optr)&t_send1, (Optr)PSend9759, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9760, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9761, (Optr)&t_method_return);
    Block PBlock9753 = new_Block_with(PArray9754, empty_Array, PThreadedCode9755, 2, PSend9759, PSend9761);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9762 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9753);
    Array PThreadedCode9752 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9753, (Optr)&t_send1, (Optr)PSend9762, (Optr)&t_method_return);
    Method PMethod9750 = new_Method_with(empty_Array, PArray9751, empty_Array, PThreadedCode9752, 1, PSend9762);
    
    MethodClosure MC_SMB_isValid = new_MethodClosure((Method)PMethod9750, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isValid, MC_SMB_isValid);
}


static void init_SMB_primListenOn_() {
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray9764 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9767 = new_String(L"\n    struct sockaddr_in sin;\n\n    memset(&sin, 0, sizeof(sin));\n    sin.sin_family = AF_INET;\n    sin.sin_addr.s_addr = INADDR_ANY;\n    sin.sin_port = htons(((SmallInt)#{aPort})->value);\n\n    /* bind the socket to the port number */\n    assert(!(bind(unwrap_int(${handle}), (struct sockaddr *) &sin, sizeof(sin)) == -1),\n        fwprintf(stderr, L\"Socket failed to bind\"););\n\n    /* show that we are willing to listen */\n    assert(!(listen(unwrap_int(${handle}), 5) == -1),\n        fwprintf(stderr, L\"Socket failed to listen\"););\n\n    ^ self;\n\t");
    Annotation PAnnotation9766 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primListenOn_, (Optr)SMB_IO_minus_Socket, (Optr)string_9767);
    Array PArray9765 = new_Array_with(1, (Optr)PAnnotation9766);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9769 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9768 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9769, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9763 = new_NativeMethod_with(PArray9764, empty_Array, PArray9765, PThreadedCode9768, 2, PSend9769, self);
    
    MethodClosure MC_SMB_primListenOn_ = new_MethodClosure((Method)PNativeMethod9763, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primListenOn_, MC_SMB_primListenOn_);
}


static void init_SMB_dataAvailable() {
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    Symbol SMB_primReadyToReceive = new_Symbol(L"primReadyToReceive");
    // primReadyToReceive. 
    Send PSend9772 = new_Send((Optr)self, SMB_primReadyToReceive, 0);
    Array PThreadedCode9771 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9772, (Optr)&t_method_return);
    Method PMethod9770 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9771, 1, PSend9772);
    
    MethodClosure MC_SMB_dataAvailable = new_MethodClosure((Method)PMethod9770, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_dataAvailable, MC_SMB_dataAvailable);
}


static void init_SMB_primSocketRemotePort() {
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9776 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin,  &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohs(sin.sin_port));\n\t");
    Annotation PAnnotation9775 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemotePort, (Optr)SMB_IO_minus_Socket, (Optr)string_9776);
    Array PArray9774 = new_Array_with(1, (Optr)PAnnotation9775);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9778 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9777 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9778, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9773 = new_NativeMethod_with(empty_Array, empty_Array, PArray9774, PThreadedCode9777, 2, PSend9778, self);
    
    MethodClosure MC_SMB_primSocketRemotePort = new_MethodClosure((Method)PNativeMethod9773, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemotePort, MC_SMB_primSocketRemotePort);
}


static void init_SMB_isOtherEndClosed() {
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9781 = new_Send((Optr)self, SMB_checkConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9782 = new_Send((Optr)slot_IO_Socket_connected, SMB_not, 0);
    Array PThreadedCode9780 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9781, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_send0, (Optr)PSend9782, (Optr)&t_method_return);
    Method PMethod9779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9780, 2, PSend9781, PSend9782);
    
    MethodClosure MC_SMB_isOtherEndClosed = new_MethodClosure((Method)PMethod9779, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isOtherEndClosed, MC_SMB_isOtherEndClosed);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Assign PAssign9785 = new_Assign((Optr)slot_IO_Socket_handle, (Optr)nil_Const);
    Assign PAssign9786 = new_Assign((Optr)slot_IO_Socket_connected, (Optr)false_Const);
    Array PThreadedCode9784 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign9785, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9786, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9783 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9784, 3, PAssign9785, PAssign9786, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod9783, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_remotePort() {
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    Symbol SMB_primSocketRemotePort = new_Symbol(L"primSocketRemotePort");
    // primSocketRemotePort. 
    Send PSend9789 = new_Send((Optr)self, SMB_primSocketRemotePort, 0);
    Array PThreadedCode9788 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9789, (Optr)&t_method_return);
    Method PMethod9787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9788, 1, PSend9789);
    
    MethodClosure MC_SMB_remotePort = new_MethodClosure((Method)PMethod9787, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remotePort, MC_SMB_remotePort);
}


static void init_SMB_statusString() {
    Symbol SMB_statusString = new_Symbol(L"statusString");
    Variable VAR_status_0_0 = new_Variable_named(L"status", 0);
    Array PArray9791 = new_Array_with(1, (Optr)VAR_status_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9794 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend9796 = new_Send((Optr)slot_IO_Socket_handle, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9800 = new_String(L"destroyed");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_9800_Const = new_Constant((Optr)string_9800);
    // escape:. 
    Send PSend9801 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9800_Const);
    Array PThreadedCode9799 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9800, (Optr)&t_send1, (Optr)PSend9801, (Optr)&t_block_return);
    Block PBlock9798 = new_Block_with(empty_Array, empty_Array, PThreadedCode9799, 1, PSend9801);
    // ifTrue:. 
    Send PSend9797 = new_Send((Optr)PSend9796, SMB_ifTrue_, 1, (Optr)PBlock9798);
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    // primStatus. 
    Send PSend9803 = new_Send((Optr)self, SMB_primStatus, 0);
    Assign PAssign9802 = new_Assign((Optr)VAR_status_0_0, (Optr)PSend9803);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // =. 
    Send PSend9804 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_n1_Const);
    String string_9808 = new_String(L"invalidSocketHandle");
    Constant string_9808_Const = new_Constant((Optr)string_9808);
    // escape:. 
    Send PSend9809 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9808_Const);
    Array PThreadedCode9807 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9808, (Optr)&t_send1, (Optr)PSend9809, (Optr)&t_block_return);
    Block PBlock9806 = new_Block_with(empty_Array, empty_Array, PThreadedCode9807, 1, PSend9809);
    // ifTrue:. 
    Send PSend9805 = new_Send((Optr)PSend9804, SMB_ifTrue_, 1, (Optr)PBlock9806);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend9810 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    String string_9814 = new_String(L"unconnected");
    Constant string_9814_Const = new_Constant((Optr)string_9814);
    // escape:. 
    Send PSend9815 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9814_Const);
    Array PThreadedCode9813 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9814, (Optr)&t_send1, (Optr)PSend9815, (Optr)&t_block_return);
    Block PBlock9812 = new_Block_with(empty_Array, empty_Array, PThreadedCode9813, 1, PSend9815);
    // ifTrue:. 
    Send PSend9811 = new_Send((Optr)PSend9810, SMB_ifTrue_, 1, (Optr)PBlock9812);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend9816 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_1_Const);
    String string_9820 = new_String(L"waitingForConnection");
    Constant string_9820_Const = new_Constant((Optr)string_9820);
    // escape:. 
    Send PSend9821 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9820_Const);
    Array PThreadedCode9819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9820, (Optr)&t_send1, (Optr)PSend9821, (Optr)&t_block_return);
    Block PBlock9818 = new_Block_with(empty_Array, empty_Array, PThreadedCode9819, 1, PSend9821);
    // ifTrue:. 
    Send PSend9817 = new_Send((Optr)PSend9816, SMB_ifTrue_, 1, (Optr)PBlock9818);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend9822 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_2_Const);
    String string_9826 = new_String(L"connected");
    Constant string_9826_Const = new_Constant((Optr)string_9826);
    // escape:. 
    Send PSend9827 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9826_Const);
    Array PThreadedCode9825 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9826, (Optr)&t_send1, (Optr)PSend9827, (Optr)&t_block_return);
    Block PBlock9824 = new_Block_with(empty_Array, empty_Array, PThreadedCode9825, 1, PSend9827);
    // ifTrue:. 
    Send PSend9823 = new_Send((Optr)PSend9822, SMB_ifTrue_, 1, (Optr)PBlock9824);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend9828 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_3_Const);
    String string_9832 = new_String(L"otherEndClosedButNotThisEnd");
    Constant string_9832_Const = new_Constant((Optr)string_9832);
    // escape:. 
    Send PSend9833 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9832_Const);
    Array PThreadedCode9831 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9832, (Optr)&t_send1, (Optr)PSend9833, (Optr)&t_block_return);
    Block PBlock9830 = new_Block_with(empty_Array, empty_Array, PThreadedCode9831, 1, PSend9833);
    // ifTrue:. 
    Send PSend9829 = new_Send((Optr)PSend9828, SMB_ifTrue_, 1, (Optr)PBlock9830);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // =. 
    Send PSend9834 = new_Send((Optr)VAR_status_0_0, SMB__equals_, 1, (Optr)int_4_Const);
    String string_9838 = new_String(L"thisEndClosedButNotOtherEnd");
    Constant string_9838_Const = new_Constant((Optr)string_9838);
    // escape:. 
    Send PSend9839 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_9838_Const);
    Array PThreadedCode9837 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_9838, (Optr)&t_send1, (Optr)PSend9839, (Optr)&t_block_return);
    Block PBlock9836 = new_Block_with(empty_Array, empty_Array, PThreadedCode9837, 1, PSend9839);
    // ifTrue:. 
    Send PSend9835 = new_Send((Optr)PSend9834, SMB_ifTrue_, 1, (Optr)PBlock9836);
    String string_9840 = new_String(L"unknown socket status");
    Array PThreadedCode9795 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend9796, (Optr)&t_send_ifTrue_, (Optr)PSend9797, (Optr)PBlock9798, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9802, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9803, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend9804, (Optr)&t_send_ifTrue_, (Optr)PSend9805, (Optr)PBlock9806, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend9810, (Optr)&t_send_ifTrue_, (Optr)PSend9811, (Optr)PBlock9812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9816, (Optr)&t_send_ifTrue_, (Optr)PSend9817, (Optr)PBlock9818, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend9822, (Optr)&t_send_ifTrue_, (Optr)PSend9823, (Optr)PBlock9824, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend9828, (Optr)&t_send_ifTrue_, (Optr)PSend9829, (Optr)PBlock9830, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_status_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend9834, (Optr)&t_send_ifTrue_, (Optr)PSend9835, (Optr)PBlock9836, (Optr)&t_zap, (Optr)&t_push1, (Optr)string_9840, (Optr)&t_method_return);
    Constant string_9840_Const = new_Constant((Optr)string_9840);
    Block PBlock9793 = new_Block_with(PArray9794, empty_Array, PThreadedCode9795, 9, PSend9797, PAssign9802, PSend9805, PSend9811, PSend9817, PSend9823, PSend9829, PSend9835, string_9840_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9841 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9793);
    Array PThreadedCode9792 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9793, (Optr)&t_send1, (Optr)PSend9841, (Optr)&t_method_return);
    Method PMethod9790 = new_Method_with(empty_Array, PArray9791, empty_Array, PThreadedCode9792, 1, PSend9841);
    
    MethodClosure MC_SMB_statusString = new_MethodClosure((Method)PMethod9790, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_statusString, MC_SMB_statusString);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    Symbol SMB_checkConnected = new_Symbol(L"checkConnected");
    // checkConnected. 
    Send PSend9844 = new_Send((Optr)self, SMB_checkConnected, 0);
    Array PThreadedCode9843 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9844, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Socket_connected, (Optr)&t_method_return);
    Method PMethod9842 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9843, 2, PSend9844, slot_IO_Socket_connected);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod9842, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_primClose() {
    Symbol SMB_primClose = new_Symbol(L"primClose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9848 = new_String(L"\t   \n\tclose(unwrap_int(${handle}));\n    ^ self;\n\t");
    Annotation PAnnotation9847 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primClose, (Optr)SMB_IO_minus_Socket, (Optr)string_9848);
    Array PArray9846 = new_Array_with(1, (Optr)PAnnotation9847);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9850 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9849 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9850, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9845 = new_NativeMethod_with(empty_Array, empty_Array, PArray9846, PThreadedCode9849, 2, PSend9850, self);
    
    MethodClosure MC_SMB_primClose = new_MethodClosure((Method)PNativeMethod9845, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primClose, MC_SMB_primClose);
}


static void init_SMB_primWrite_() {
    Symbol SMB_primWrite_ = new_Symbol(L"primWrite:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9852 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9855 = new_String(L"\t\n    char * buffer = unicode_to_ascii(((String)#{aString})->value);\n    int s;\n\n    s = write(unwrap_int(${handle}), buffer, strlen(buffer));\n\n     if( s > 0 )\n\t{\n\t    //fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n \t    //fwprintf(stdout, L\"Read -> : %s\\n\", buffer);\n\t    ^ self;\n\t}\n\tif( s == 0 )\n\t{\n\t\t// socket closed\n\t\t// fwprintf(stdout, L\"Socket closed\\n\");\n\t\tfail(Network_Kernel_ConnectionClosed_Class, 0);\n\t}\n\tif( s < 0 )\n\t{\n\t\t// error\n        \tfwprintf(stderr, L\"Socket failed to initialize, errono %i\", errno);\n\t\tfail(Network_Kernel_NetworkError_Class, 0);\n\t}\n\t\n\t");
    Annotation PAnnotation9854 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primWrite_, (Optr)SMB_IO_minus_Socket, (Optr)string_9855);
    Array PArray9853 = new_Array_with(1, (Optr)PAnnotation9854);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9857 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9856 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9857, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9851 = new_NativeMethod_with(PArray9852, empty_Array, PArray9853, PThreadedCode9856, 2, PSend9857, self);
    
    MethodClosure MC_SMB_primWrite_ = new_MethodClosure((Method)PNativeMethod9851, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primWrite_, MC_SMB_primWrite_);
}


static void init_SMB_receiveSomeDataInto_startingAt_() {
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9859 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend9861 = new_Send((Optr)self, SMB_receiveDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9860 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9861, (Optr)&t_method_return);
    Method PMethod9858 = new_Method_with(PArray9859, empty_Array, empty_Array, PThreadedCode9860, 1, PSend9861);
    
    MethodClosure MC_SMB_receiveSomeDataInto_startingAt_ = new_MethodClosure((Method)PMethod9858, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveSomeDataInto_startingAt_, MC_SMB_receiveSomeDataInto_startingAt_);
}


static void init_SMB_accept() {
    Symbol SMB_accept = new_Symbol(L"accept");
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    // primReadyToAccept. 
    Send PSend9866 = new_Send((Optr)self, SMB_primReadyToAccept, 0);
    Array PThreadedCode9865 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9866, (Optr)&t_block_return);
    Block PBlock9864 = new_Block_with(empty_Array, empty_Array, PThreadedCode9865, 1, PSend9866);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend9869 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_primYield = new_Symbol(L"primYield");
    // primYield. 
    Send PSend9870 = new_Send((Optr)PSend9869, SMB_primYield, 0);
    Array PThreadedCode9868 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend9869, (Optr)&t_send0, (Optr)PSend9870, (Optr)&t_block_return);
    Block PBlock9867 = new_Block_with(empty_Array, empty_Array, PThreadedCode9868, 1, PSend9870);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend9871 = new_Send((Optr)PBlock9864, SMB_whileFalse_, 1, (Optr)PBlock9867);
    String string_9872 = new_String(L"accepted!");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_9872_Const = new_Constant((Optr)string_9872);
    // warn:. 
    Send PSend9873 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_9872_Const);
    Symbol SMB_primAccept = new_Symbol(L"primAccept");
    // primAccept. 
    Send PSend9874 = new_Send((Optr)self, SMB_primAccept, 0);
    Array PThreadedCode9863 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock9864, (Optr)&t_push_closure, (Optr)PBlock9867, (Optr)&t_send1, (Optr)PSend9871, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9872, (Optr)&t_send1, (Optr)PSend9873, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9874, (Optr)&t_method_return);
    Method PMethod9862 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9863, 3, PSend9871, PSend9873, PSend9874);
    
    MethodClosure MC_SMB_accept = new_MethodClosure((Method)PMethod9862, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_accept, MC_SMB_accept);
}


static void init_SMB_primInit() {
    Symbol SMB_primInit = new_Symbol(L"primInit");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9878 = new_String(L"\n    int handle;\n    assert(!((handle = socket(AF_INET, SOCK_STREAM, 0)) == -1),\n        fwprintf(stderr, L\"Socket failed to initialize\"););\n\t\t\n    make_nonblocking(handle);\n\t\t\n    ${handle} = wrap_int(handle);\n    ^ self;\n\t");
    Annotation PAnnotation9877 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primInit, (Optr)SMB_IO_minus_Socket, (Optr)string_9878);
    Array PArray9876 = new_Array_with(1, (Optr)PAnnotation9877);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9880 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9879 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9880, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9875 = new_NativeMethod_with(empty_Array, empty_Array, PArray9876, PThreadedCode9879, 2, PSend9880, self);
    
    MethodClosure MC_SMB_primInit = new_MethodClosure((Method)PNativeMethod9875, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primInit, MC_SMB_primInit);
}


static void init_SMB_receive() {
    Symbol SMB_receive = new_Symbol(L"receive");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray9882 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_size_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // new:. 
    Send PSend9885 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_200_Const);
    Assign PAssign9884 = new_Assign((Optr)VAR_aString_0_0, (Optr)PSend9885);
    Symbol SMB_receiveInto_ = new_Symbol(L"receiveInto:");
    // receiveInto:. 
    Send PSend9887 = new_Send((Optr)self, SMB_receiveInto_, 1, (Optr)VAR_aString_0_0);
    Assign PAssign9886 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend9887);
    String string_9888 = new_String(L"Size returned -> ");
    Constant string_9888_Const = new_Constant((Optr)string_9888);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9889 = new_Send((Optr)string_9888_Const, SMB__append_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9890 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9889);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend9891 = new_Send((Optr)VAR_aString_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_size_0_1);
    Array PThreadedCode9883 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign9884, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend9885, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9886, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9887, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9888, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend9889, (Optr)&t_send1, (Optr)PSend9890, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send2, (Optr)PSend9891, (Optr)&t_method_return);
    Method PMethod9881 = new_Method_with(empty_Array, PArray9882, empty_Array, PThreadedCode9883, 4, PAssign9884, PAssign9886, PSend9890, PSend9891);
    
    MethodClosure MC_SMB_receive = new_MethodClosure((Method)PMethod9881, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receive, MC_SMB_receive);
}


static void init_SMB_primReadyToAccept() {
    Symbol SMB_primReadyToAccept = new_Symbol(L"primReadyToAccept");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9895 = new_String(L"\n\t\n\tint n, listener, maxfd;\n    fd_set readset, writeset, exset;\n    struct timeval timeout;\n    \n    listener = unwrap_int(${handle});\n    maxfd = listener;\n\n    FD_ZERO(&readset);\n    FD_ZERO(&writeset);\n    FD_ZERO(&exset);\n\n    FD_SET(listener, &readset);\n\n    timeout.tv_sec = 0;\n    timeout.tv_usec = 1000*10 ;\n\n    n = select(maxfd+1, &readset, &writeset, &exset, &timeout);\n\n    if (FD_ISSET(listener, &readset)) {\n        ^ true;\n    }\n    else\n    {\n        ^ false;\n    }\n\t");
    Annotation PAnnotation9894 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReadyToAccept, (Optr)SMB_IO_minus_Socket, (Optr)string_9895);
    Array PArray9893 = new_Array_with(1, (Optr)PAnnotation9894);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9897 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9896 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9897, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9892 = new_NativeMethod_with(empty_Array, empty_Array, PArray9893, PThreadedCode9896, 2, PSend9897, self);
    
    MethodClosure MC_SMB_primReadyToAccept = new_MethodClosure((Method)PNativeMethod9892, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReadyToAccept, MC_SMB_primReadyToAccept);
}


static void init_SMB_closeAndDestroy_() {
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Variable VAR_aTimeout_0_0 = new_Variable_named(L"aTimeout", 0);
    Array PArray9899 = new_Array_with(1, (Optr)VAR_aTimeout_0_0);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend9903 = new_Send((Optr)self, SMB_primClose, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend9904 = new_Send((Optr)self, SMB_destroy, 0);
    Array PThreadedCode9902 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9903, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9904, (Optr)&t_block_return);
    Block PBlock9901 = new_Block_with(empty_Array, empty_Array, PThreadedCode9902, 2, PSend9903, PSend9904);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend9905 = new_Send((Optr)slot_IO_Socket_handle, SMB_ifNotNil_, 1, (Optr)PBlock9901);
    Array PThreadedCode9900 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Socket_handle, (Optr)&t_push_closure, (Optr)PBlock9901, (Optr)&t_send1, (Optr)PSend9905, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9898 = new_Method_with(PArray9899, empty_Array, empty_Array, PThreadedCode9900, 2, PSend9905, self);
    
    MethodClosure MC_SMB_closeAndDestroy_ = new_MethodClosure((Method)PMethod9898, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_closeAndDestroy_, MC_SMB_closeAndDestroy_);
}


static void init_SMB_receiveDataInto_startingAt_() {
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    Variable VAR_aBuffer_0_0 = new_Variable_named(L"aBuffer", 0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Array PArray9907 = new_Array_with(2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend9909 = new_Send((Optr)self, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)VAR_aBuffer_0_0, (Optr)VAR_pos_0_1);
    Array PThreadedCode9908 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBuffer_0_0, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send2, (Optr)PSend9909, (Optr)&t_method_return);
    Method PMethod9906 = new_Method_with(PArray9907, empty_Array, empty_Array, PThreadedCode9908, 1, PSend9909);
    
    MethodClosure MC_SMB_receiveDataInto_startingAt_ = new_MethodClosure((Method)PMethod9906, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_receiveDataInto_startingAt_, MC_SMB_receiveDataInto_startingAt_);
}


static void init_SMB_primReceive_() {
    Symbol SMB_primReceive_ = new_Symbol(L"primReceive:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray9911 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9914 = new_String(L"\n    char dir[ unwrap_int( #{max} ) ];\n    int s;\n\n    s = recv(unwrap_int(${handle}), dir, sizeof(dir), 0);\n\n    if( s > 0 )\n    {\n        fwprintf(stdout, L\"Size ->: %i\\n\", s);\t\n        fwprintf(stdout, L\"Read -> : %s\\n\", dir);\n        dir[s] = L'\\0';\n        fwprintf(stdout, L\"Before new string\\n\", s);\n        ^new_String_from_charp(&dir[0]);\n    }\n    if( s == 0 )\n    {\n        // socket closed\n        // fwprintf(stdout, L\"Socket closed\\n\");\n        fail(Network_Kernel_ConnectionClosed_Class, 0);\n    }\n    if( s < 0 )\n    {\n        // error\n        fwprintf(stderr, L\"Socket failed to initialize, errno %i\", errno);\n        fail(Network_Kernel_NetworkError_Class, 0);\n    }\n\t");
    Annotation PAnnotation9913 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primReceive_, (Optr)SMB_IO_minus_Socket, (Optr)string_9914);
    Array PArray9912 = new_Array_with(1, (Optr)PAnnotation9913);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9916 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9915 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9916, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9910 = new_NativeMethod_with(PArray9911, empty_Array, PArray9912, PThreadedCode9915, 2, PSend9916, self);
    
    MethodClosure MC_SMB_primReceive_ = new_MethodClosure((Method)PNativeMethod9910, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primReceive_, MC_SMB_primReceive_);
}


static void init_SMB_listenOn_backlogSize_() {
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    Variable VAR_port_0_0 = new_Variable_named(L"port", 0);
    Variable VAR_backlog_0_1 = new_Variable_named(L"backlog", 0);
    Array PArray9918 = new_Array_with(2, (Optr)VAR_port_0_0, (Optr)VAR_backlog_0_1);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend9920 = new_Send((Optr)self, SMB_primListenOn_, 1, (Optr)VAR_port_0_0);
    Array PThreadedCode9919 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_port_0_0, (Optr)&t_send1, (Optr)PSend9920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9917 = new_Method_with(PArray9918, empty_Array, empty_Array, PThreadedCode9919, 2, PSend9920, self);
    
    MethodClosure MC_SMB_listenOn_backlogSize_ = new_MethodClosure((Method)PMethod9917, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_listenOn_backlogSize_, MC_SMB_listenOn_backlogSize_);
}


static void init_SMB_primStatus() {
    Symbol SMB_primStatus = new_Symbol(L"primStatus");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9924 = new_String(L"\t\n\tint sval;\n\tint ret_val = 1;\n\tfd_set check_set;\n\tstruct timeval to;\n\n\tint sock = unwrap_int(${handle});\n\n\tFD_ZERO(&check_set);\n\tFD_SET(sock,&check_set);\n\n\tto.tv_sec = 0;\n\tto.tv_usec = 1000*10 ;\n\n\tsval = select(sock + 1,&check_set,0,0,&to);\n\t\n\tfwprintf(stderr, L\"Select sval %d \\n\",sval);\n\t\n\tif( sval < 0)\n\t{\n\t\tfwprintf(stderr, L\"Select returned %d %d\\n\",sval,errno);\n\t\tret_val = -1;\n\t}\n\tif(sval == 0)\n\t{\n\t\tfwprintf(stderr, L\"Select timed out.\\n\");\n\t\tret_val = 0;\n\t}\n\telse if(sval > 0)\n\t{\n\t\t fwprintf(stderr, L\"Select shows %d as return val.\\n\",sval);\n\t}\n\t\n\t^wrap_int(ret_val);\n\t");
    Annotation PAnnotation9923 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primStatus, (Optr)SMB_IO_minus_Socket, (Optr)string_9924);
    Array PArray9922 = new_Array_with(1, (Optr)PAnnotation9923);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9926 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9925 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9926, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9921 = new_NativeMethod_with(empty_Array, empty_Array, PArray9922, PThreadedCode9925, 2, PSend9926, self);
    
    MethodClosure MC_SMB_primStatus = new_MethodClosure((Method)PNativeMethod9921, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primStatus, MC_SMB_primStatus);
}


static void init_SMB_primSocketRemoteAddress() {
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_9930 = new_String(L"\n    struct sockaddr_in sin;\n    socklen_t addrlen;\n\n    /* --- TCP --- */\n    addrlen = sizeof(sin);\n    if (getpeername(unwrap_int(${handle}), (struct sockaddr *)&sin, &addrlen)\n        || (AF_INET != sin.sin_family)) {\n        ^wrap_int(0);\n    }\n    ^wrap_int(ntohl(sin.sin_addr.s_addr));\n\t");
    Annotation PAnnotation9929 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_primSocketRemoteAddress, (Optr)SMB_IO_minus_Socket, (Optr)string_9930);
    Array PArray9928 = new_Array_with(1, (Optr)PAnnotation9929);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9932 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9931 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9932, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9927 = new_NativeMethod_with(empty_Array, empty_Array, PArray9928, PThreadedCode9931, 2, PSend9932, self);
    
    MethodClosure MC_SMB_primSocketRemoteAddress = new_MethodClosure((Method)PNativeMethod9927, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_primSocketRemoteAddress, MC_SMB_primSocketRemoteAddress);
}


static void init_SMB_remoteAddress() {
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    Symbol SMB_primSocketRemoteAddress = new_Symbol(L"primSocketRemoteAddress");
    // primSocketRemoteAddress. 
    Send PSend9935 = new_Send((Optr)self, SMB_primSocketRemoteAddress, 0);
    Array PThreadedCode9934 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9935, (Optr)&t_method_return);
    Method PMethod9933 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9934, 1, PSend9935);
    
    MethodClosure MC_SMB_remoteAddress = new_MethodClosure((Method)PMethod9933, IO_Socket_Class);
    store_method(IO_Socket_Class, SMB_remoteAddress, MC_SMB_remoteAddress);
}


static void init_class_SMB_testWebSocket2_() {
    Symbol SMB_testWebSocket2_ = new_Symbol(L"testWebSocket2:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray9937 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray9938 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9941 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9940 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend9941);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend9942 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend9945 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode9944 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend9945, (Optr)&t_block_return);
    Block PBlock9943 = new_Block_with(empty_Array, empty_Array, PThreadedCode9944, 1, PSend9945);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray9947 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend9950 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign9949 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend9950);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Array PArray9952 = new_Array_with(2, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend9954 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9955 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9954);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend9956 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend9957 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9956);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9959 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign9958 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend9959);
    // on:. 
    Send PSend9961 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign9960 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend9961);
    Variable VAR_data_3_0 = new_Variable_named(L"data", 3);
    Variable VAR_type_3_1 = new_Variable_named(L"type", 3);
    Variable VAR_ws_3_2 = new_Variable_named(L"ws", 3);
    Array PArray9963 = new_Array_with(3, (Optr)VAR_data_3_0, (Optr)VAR_type_3_1, (Optr)VAR_ws_3_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend9965 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend9966 = new_Send((Optr)PSend9965, SMB__gt_, 1, (Optr)int_0_Const);
    // size. 
    Send PSend9969 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // >. 
    Send PSend9970 = new_Send((Optr)PSend9969, SMB__gt_, 1, (Optr)int_50_Const);
    Array PThreadedCode9968 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend9969, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend9970, (Optr)&t_block_return);
    Block PBlock9967 = new_Block_with(empty_Array, empty_Array, PThreadedCode9968, 1, PSend9970);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9971 = new_Send((Optr)PSend9966, SMB_and_, 1, (Optr)PBlock9967);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend9975 = new_Send((Optr)VAR_web_2_1, SMB_close, 0);
    Array PThreadedCode9974 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend9975, (Optr)&t_block_return);
    Block PBlock9973 = new_Block_with(empty_Array, empty_Array, PThreadedCode9974, 1, PSend9975);
    String string_9978 = new_String(L"Received ");
    Constant string_9978_Const = new_Constant((Optr)string_9978);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9979 = new_Send((Optr)string_9978_Const, SMB__append_, 1, (Optr)VAR_data_3_0);
    String string_9980 = new_String(L", handle=");
    Constant string_9980_Const = new_Constant((Optr)string_9980);
    // ,. 
    Send PSend9981 = new_Send((Optr)PSend9979, SMB__append_, 1, (Optr)string_9980_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend9982 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend9983 = new_Send((Optr)PSend9981, SMB__append_, 1, (Optr)PSend9982);
    // warn:. 
    Send PSend9984 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9983);
    String string_9985 = new_String(L"Received ");
    // size. 
    Send PSend9986 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_9985_Const = new_Constant((Optr)string_9985);
    // ,. 
    Send PSend9987 = new_Send((Optr)string_9985_Const, SMB__append_, 1, (Optr)PSend9986);
    String string_9988 = new_String(L" bytes");
    Constant string_9988_Const = new_Constant((Optr)string_9988);
    // ,. 
    Send PSend9989 = new_Send((Optr)PSend9987, SMB__append_, 1, (Optr)string_9988_Const);
    String string_9990 = new_String(L", handle=");
    Constant string_9990_Const = new_Constant((Optr)string_9990);
    // ,. 
    Send PSend9991 = new_Send((Optr)PSend9989, SMB__append_, 1, (Optr)string_9990_Const);
    // hash. 
    Send PSend9992 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend9993 = new_Send((Optr)PSend9991, SMB__append_, 1, (Optr)PSend9992);
    // warn:. 
    Send PSend9994 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9993);
    String string_9995 = new_String(L"Received ");
    // size. 
    Send PSend9996 = new_Send((Optr)VAR_data_3_0, SMB_size, 0);
    Constant string_9995_Const = new_Constant((Optr)string_9995);
    // ,. 
    Send PSend9997 = new_Send((Optr)string_9995_Const, SMB__append_, 1, (Optr)PSend9996);
    String string_9998 = new_String(L" bytes");
    Constant string_9998_Const = new_Constant((Optr)string_9998);
    // ,. 
    Send PSend9999 = new_Send((Optr)PSend9997, SMB__append_, 1, (Optr)string_9998_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10000 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend9999);
    Array PThreadedCode9977 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9978, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send1, (Optr)PSend9979, (Optr)&t_push1, (Optr)string_9980, (Optr)&t_send1, (Optr)PSend9981, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9982, (Optr)&t_send1, (Optr)PSend9983, (Optr)&t_send1, (Optr)PSend9984, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9985, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend9986, (Optr)&t_send1, (Optr)PSend9987, (Optr)&t_push1, (Optr)string_9988, (Optr)&t_send1, (Optr)PSend9989, (Optr)&t_push1, (Optr)string_9990, (Optr)&t_send1, (Optr)PSend9991, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9992, (Optr)&t_send1, (Optr)PSend9993, (Optr)&t_send1, (Optr)PSend9994, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_9995, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend9996, (Optr)&t_send1, (Optr)PSend9997, (Optr)&t_push1, (Optr)string_9998, (Optr)&t_send1, (Optr)PSend9999, (Optr)&t_send1, (Optr)PSend10000, (Optr)&t_block_return);
    Block PBlock9976 = new_Block_with(empty_Array, empty_Array, PThreadedCode9977, 3, PSend9984, PSend9994, PSend10000);
    // ifTrue:ifFalse:. 
    Send PSend9972 = new_Send((Optr)PSend9971, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9973, (Optr)PBlock9976);
    Array PThreadedCode9964 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_data_3_0, (Optr)&t_send0, (Optr)PSend9965, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend9966, (Optr)&t_push_closure, (Optr)PBlock9967, (Optr)&t_send1, (Optr)PSend9971, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9972, (Optr)PBlock9973, (Optr)PBlock9976, (Optr)&t_method_return);
    Block PBlock9962 = new_Block_with(PArray9963, empty_Array, PThreadedCode9964, 1, PSend9972);
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    // onMessage:. 
    Send PSend10001 = new_Send((Optr)VAR_web_2_1, SMB_onMessage_, 1, (Optr)PBlock9962);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Variable VAR_ws_3_1 = new_Variable_named(L"ws", 3);
    Array PArray10003 = new_Array_with(2, (Optr)VAR_error_3_0, (Optr)VAR_ws_3_1);
    String string_10005 = new_String(L"Error: Network Connection closed");
    Constant string_10005_Const = new_Constant((Optr)string_10005);
    // warn:. 
    Send PSend10006 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10005_Const);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend10007 = new_Send((Optr)VAR_conn_1_0, SMB_destroy, 0);
    String string_10008 = new_String(L"Connected: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10009 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10008_Const = new_Constant((Optr)string_10008);
    // ,. 
    Send PSend10010 = new_Send((Optr)string_10008_Const, SMB__append_, 1, (Optr)PSend10009);
    // warn:. 
    Send PSend10011 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10010);
    Array PThreadedCode10004 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10005, (Optr)&t_send1, (Optr)PSend10006, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10007, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10008, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10009, (Optr)&t_send1, (Optr)PSend10010, (Optr)&t_send1, (Optr)PSend10011, (Optr)&t_method_return);
    Block PBlock10002 = new_Block_with(PArray10003, empty_Array, PThreadedCode10004, 3, PSend10006, PSend10007, PSend10011);
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    // onError:. 
    Send PSend10012 = new_Send((Optr)VAR_web_2_1, SMB_onError_, 1, (Optr)PBlock10002);
    Variable VAR_ws_3_0 = new_Variable_named(L"ws", 3);
    Array PArray10014 = new_Array_with(1, (Optr)VAR_ws_3_0);
    String string_10016 = new_String(L"Will now try to close connection");
    Constant string_10016_Const = new_Constant((Optr)string_10016);
    // warn:. 
    Send PSend10017 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10016_Const);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10018 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10019 = new_String(L"Connected: ");
    // isConnected. 
    Send PSend10020 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10019_Const = new_Constant((Optr)string_10019);
    // ,. 
    Send PSend10021 = new_Send((Optr)string_10019_Const, SMB__append_, 1, (Optr)PSend10020);
    // warn:. 
    Send PSend10022 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10021);
    Array PThreadedCode10015 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10016, (Optr)&t_send1, (Optr)PSend10017, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10018, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10019, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10020, (Optr)&t_send1, (Optr)PSend10021, (Optr)&t_send1, (Optr)PSend10022, (Optr)&t_method_return);
    Block PBlock10013 = new_Block_with(PArray10014, empty_Array, PThreadedCode10015, 3, PSend10017, PSend10018, PSend10022);
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    // onClose:. 
    Send PSend10023 = new_Send((Optr)VAR_web_2_1, SMB_onClose_, 1, (Optr)PBlock10013);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend10024 = new_Send((Optr)VAR_web_2_1, SMB_run, 0);
    Array PThreadedCode9953 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9954, (Optr)&t_send1, (Optr)PSend9955, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend9956, (Optr)&t_send1, (Optr)PSend9957, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9958, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend9959, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9960, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend9961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock9962, (Optr)&t_send1, (Optr)PSend10001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10002, (Optr)&t_send1, (Optr)PSend10012, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push_closure, (Optr)PBlock10013, (Optr)&t_send1, (Optr)PSend10023, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10024, (Optr)&t_method_return);
    Block PBlock9951 = new_Block_with(empty_Array, PArray9952, PThreadedCode9953, 8, PSend9955, PSend9957, PAssign9958, PAssign9960, PSend10001, PSend10012, PSend10023, PSend10024);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10025 = new_Send((Optr)PBlock9951, SMB_fork, 0);
    Array PThreadedCode9948 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign9949, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend9950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9951, (Optr)&t_send0, (Optr)PSend10025, (Optr)&t_method_return);
    Block PBlock9946 = new_Block_with(empty_Array, PArray9947, PThreadedCode9948, 2, PAssign9949, PSend10025);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10026 = new_Send((Optr)PBlock9943, SMB_whileTrue_, 1, (Optr)PBlock9946);
    Array PThreadedCode9939 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9940, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9941, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend9942, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9943, (Optr)&t_push_closure, (Optr)PBlock9946, (Optr)&t_send1, (Optr)PSend10026, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9936 = new_Method_with(PArray9937, PArray9938, empty_Array, PThreadedCode9939, 4, PAssign9940, PSend9942, PSend10026, self);
    
    MethodClosure MC_SMB_testWebSocket2_ = new_MethodClosure((Method)PMethod9936, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testWebSocket2_, MC_SMB_testWebSocket2_);
}


static void init_class_SMB_testOn_() {
    Symbol SMB_testOn_ = new_Symbol(L"testOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10028 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_conn_0_2 = new_Variable_named(L"conn", 0);
    Variable VAR_data_0_3 = new_Variable_named(L"data", 0);
    Array PArray10029 = new_Array_with(3, (Optr)VAR_sock_0_1, (Optr)VAR_conn_0_2, (Optr)VAR_data_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10032 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10031 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10032);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10033 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10035 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10034 = new_Assign((Optr)VAR_conn_0_2, (Optr)PSend10035);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10037 = new_Send((Optr)VAR_conn_0_2, SMB_receive, 0);
    Assign PAssign10036 = new_Assign((Optr)VAR_data_0_3, (Optr)PSend10037);
    String string_10038 = new_String(L"* read from ");
    Constant string_10038_Const = new_Constant((Optr)string_10038);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10039 = new_Send((Optr)string_10038_Const, SMB__append_, 1, (Optr)VAR_data_0_3);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10040 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10039);
    String string_10041 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10042 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10041_Const = new_Constant((Optr)string_10041);
    // ,. 
    Send PSend10043 = new_Send((Optr)string_10041_Const, SMB__append_, 1, (Optr)PSend10042);
    String string_10044 = new_String(L" bytes");
    Constant string_10044_Const = new_Constant((Optr)string_10044);
    // ,. 
    Send PSend10045 = new_Send((Optr)PSend10043, SMB__append_, 1, (Optr)string_10044_Const);
    // warn:. 
    Send PSend10046 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10045);
    String string_10047 = new_String(L"Received ");
    // size. 
    Send PSend10048 = new_Send((Optr)VAR_data_0_3, SMB_size, 0);
    Constant string_10047_Const = new_Constant((Optr)string_10047);
    // ,. 
    Send PSend10049 = new_Send((Optr)string_10047_Const, SMB__append_, 1, (Optr)PSend10048);
    String string_10050 = new_String(L" bytes");
    Constant string_10050_Const = new_Constant((Optr)string_10050);
    // ,. 
    Send PSend10051 = new_Send((Optr)PSend10049, SMB__append_, 1, (Optr)string_10050_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10052 = new_Send((Optr)VAR_conn_0_2, SMB_write_, 1, (Optr)PSend10051);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10053 = new_Send((Optr)VAR_conn_0_2, SMB_primClose, 0);
    // primClose. 
    Send PSend10054 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10030 = instantiate_Array_with(ThreadedCode_Class, 0, 84, (Optr)&t_push1, (Optr)PAssign10031, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10032, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10033, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10034, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10035, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10036, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10038, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send1, (Optr)PSend10039, (Optr)&t_send1, (Optr)PSend10040, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10041, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10042, (Optr)&t_send1, (Optr)PSend10043, (Optr)&t_push1, (Optr)string_10044, (Optr)&t_send1, (Optr)PSend10045, (Optr)&t_send1, (Optr)PSend10046, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_push1, (Optr)string_10047, (Optr)&t_push_variable, (Optr)VAR_data_0_3, (Optr)&t_send0, (Optr)PSend10048, (Optr)&t_send1, (Optr)PSend10049, (Optr)&t_push1, (Optr)string_10050, (Optr)&t_send1, (Optr)PSend10051, (Optr)&t_send1, (Optr)PSend10052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_2, (Optr)&t_send0, (Optr)PSend10053, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10054, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10027 = new_Method_with(PArray10028, PArray10029, empty_Array, PThreadedCode10030, 10, PAssign10031, PSend10033, PAssign10034, PAssign10036, PSend10040, PSend10046, PSend10052, PSend10053, PSend10054, self);
    
    MethodClosure MC_SMB_testOn_ = new_MethodClosure((Method)PMethod10027, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testOn_, MC_SMB_testOn_);
}


static void init_class_SMB_newTCP() {
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10057 = new_Send((Optr)self, SMB_new, 0);
    Array PThreadedCode10056 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10057, (Optr)&t_method_return);
    Method PMethod10055 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10056, 1, PSend10057);
    
    MethodClosure MC_SMB_newTCP = new_MethodClosure((Method)PMethod10055, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_newTCP, MC_SMB_newTCP);
}


static void init_class_SMB_standardTimeout() {
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    SmallInt int_45 = new_SmallInt(45);
    Array PThreadedCode10059 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_45, (Optr)&t_method_return);
    Constant int_45_Const = new_Constant((Optr)int_45);
    Method PMethod10058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10059, 1, int_45_Const);
    
    MethodClosure MC_SMB_standardTimeout = new_MethodClosure((Method)PMethod10058, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_standardTimeout, MC_SMB_standardTimeout);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Socket = new_Symbol(L"IO.Socket");
    String string_10062 = new_String(L"plugin/io/Socket.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Socket_Const = new_Constant((Optr)SMB_IO_minus_Socket);
    Constant string_10062_Const = new_Constant((Optr)string_10062);
    // require:at:. 
    Send PSend10063 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Socket_Const, (Optr)string_10062_Const);
    Array PThreadedCode10061 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Socket, (Optr)&t_push1, (Optr)string_10062, (Optr)&t_send2, (Optr)PSend10063, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10061, 2, PSend10063, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10060, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_testServer_() {
    Symbol SMB_testServer_ = new_Symbol(L"testServer:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10065 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10066 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10069 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10068 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10069);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10070 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10073 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10072 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10073, (Optr)&t_block_return);
    Block PBlock10071 = new_Block_with(empty_Array, empty_Array, PThreadedCode10072, 1, PSend10073);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10075 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10078 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10077 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10078);
    Symbol SMB_receive = new_Symbol(L"receive");
    // receive. 
    Send PSend10082 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10081 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10082);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10085 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10086 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10086_Const = new_Constant((Optr)char_10086);
    // =. 
    Send PSend10087 = new_Send((Optr)PSend10085, SMB__equals_, 1, (Optr)char_10086_Const);
    Array PThreadedCode10084 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10085, (Optr)&t_push1, (Optr)char_10086, (Optr)&t_send1, (Optr)PSend10087, (Optr)&t_block_return);
    Block PBlock10083 = new_Block_with(empty_Array, empty_Array, PThreadedCode10084, 1, PSend10087);
    String string_10090 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10091 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10090_Const = new_Constant((Optr)string_10090);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10092 = new_Send((Optr)string_10090_Const, SMB__append_, 1, (Optr)PSend10091);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10093 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10092);
    String string_10094 = new_String(L"Received ");
    Constant string_10094_Const = new_Constant((Optr)string_10094);
    // ,. 
    Send PSend10095 = new_Send((Optr)string_10094_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10096 = new_String(L", handle=");
    Constant string_10096_Const = new_Constant((Optr)string_10096);
    // ,. 
    Send PSend10097 = new_Send((Optr)PSend10095, SMB__append_, 1, (Optr)string_10096_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10098 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10099 = new_Send((Optr)PSend10097, SMB__append_, 1, (Optr)PSend10098);
    // warn:. 
    Send PSend10100 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10099);
    String string_10101 = new_String(L"Received ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10102 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10101_Const = new_Constant((Optr)string_10101);
    // ,. 
    Send PSend10103 = new_Send((Optr)string_10101_Const, SMB__append_, 1, (Optr)PSend10102);
    String string_10104 = new_String(L" bytes");
    Constant string_10104_Const = new_Constant((Optr)string_10104);
    // ,. 
    Send PSend10105 = new_Send((Optr)PSend10103, SMB__append_, 1, (Optr)string_10104_Const);
    String string_10106 = new_String(L", handle=");
    Constant string_10106_Const = new_Constant((Optr)string_10106);
    // ,. 
    Send PSend10107 = new_Send((Optr)PSend10105, SMB__append_, 1, (Optr)string_10106_Const);
    // hash. 
    Send PSend10108 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10109 = new_Send((Optr)PSend10107, SMB__append_, 1, (Optr)PSend10108);
    // warn:. 
    Send PSend10110 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10109);
    String string_10111 = new_String(L"Received ");
    // size. 
    Send PSend10112 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10111_Const = new_Constant((Optr)string_10111);
    // ,. 
    Send PSend10113 = new_Send((Optr)string_10111_Const, SMB__append_, 1, (Optr)PSend10112);
    String string_10114 = new_String(L" bytes");
    Constant string_10114_Const = new_Constant((Optr)string_10114);
    // ,. 
    Send PSend10115 = new_Send((Optr)PSend10113, SMB__append_, 1, (Optr)string_10114_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10116 = new_Send((Optr)VAR_conn_1_0, SMB_write_, 1, (Optr)PSend10115);
    // receive. 
    Send PSend10118 = new_Send((Optr)VAR_conn_1_0, SMB_receive, 0);
    Assign PAssign10117 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10118);
    Array PThreadedCode10089 = instantiate_Array_with(ThreadedCode_Class, 0, 83, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10090, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10091, (Optr)&t_send1, (Optr)PSend10092, (Optr)&t_send1, (Optr)PSend10093, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10094, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10095, (Optr)&t_push1, (Optr)string_10096, (Optr)&t_send1, (Optr)PSend10097, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10098, (Optr)&t_send1, (Optr)PSend10099, (Optr)&t_send1, (Optr)PSend10100, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10101, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10102, (Optr)&t_send1, (Optr)PSend10103, (Optr)&t_push1, (Optr)string_10104, (Optr)&t_send1, (Optr)PSend10105, (Optr)&t_push1, (Optr)string_10106, (Optr)&t_send1, (Optr)PSend10107, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10108, (Optr)&t_send1, (Optr)PSend10109, (Optr)&t_send1, (Optr)PSend10110, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push1, (Optr)string_10111, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10112, (Optr)&t_send1, (Optr)PSend10113, (Optr)&t_push1, (Optr)string_10114, (Optr)&t_send1, (Optr)PSend10115, (Optr)&t_send1, (Optr)PSend10116, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10117, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10118, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10088 = new_Block_with(empty_Array, empty_Array, PThreadedCode10089, 5, PSend10093, PSend10100, PSend10110, PSend10116, PAssign10117);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10119 = new_Send((Optr)PBlock10083, SMB_whileFalse_, 1, (Optr)PBlock10088);
    String string_10120 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10121 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10120_Const = new_Constant((Optr)string_10120);
    // ,. 
    Send PSend10122 = new_Send((Optr)string_10120_Const, SMB__append_, 1, (Optr)PSend10121);
    // warn:. 
    Send PSend10123 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10122);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // closeAndDestroy:. 
    Send PSend10124 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10125 = new_String(L"Status ");
    // isConnected. 
    Send PSend10126 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10125_Const = new_Constant((Optr)string_10125);
    // ,. 
    Send PSend10127 = new_Send((Optr)string_10125_Const, SMB__append_, 1, (Optr)PSend10126);
    // warn:. 
    Send PSend10128 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10127);
    Array PThreadedCode10080 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign10081, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10082, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10083, (Optr)&t_push_closure, (Optr)PBlock10088, (Optr)&t_send1, (Optr)PSend10119, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10120, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10121, (Optr)&t_send1, (Optr)PSend10122, (Optr)&t_send1, (Optr)PSend10123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10124, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10125, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10126, (Optr)&t_send1, (Optr)PSend10127, (Optr)&t_send1, (Optr)PSend10128, (Optr)&t_block_return);
    Block PBlock10079 = new_Block_with(empty_Array, empty_Array, PThreadedCode10080, 5, PAssign10081, PSend10119, PSend10123, PSend10124, PSend10128);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10129 = new_Send((Optr)PBlock10079, SMB_fork, 0);
    Array PThreadedCode10076 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10077, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10078, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10079, (Optr)&t_send0, (Optr)PSend10129, (Optr)&t_method_return);
    Block PBlock10074 = new_Block_with(empty_Array, PArray10075, PThreadedCode10076, 2, PAssign10077, PSend10129);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10130 = new_Send((Optr)PBlock10071, SMB_whileTrue_, 1, (Optr)PBlock10074);
    Symbol SMB_primClose = new_Symbol(L"primClose");
    // primClose. 
    Send PSend10131 = new_Send((Optr)VAR_sock_0_1, SMB_primClose, 0);
    Array PThreadedCode10067 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign10068, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10069, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10070, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10071, (Optr)&t_push_closure, (Optr)PBlock10074, (Optr)&t_send1, (Optr)PSend10130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10131, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10064 = new_Method_with(PArray10065, PArray10066, empty_Array, PThreadedCode10067, 5, PAssign10068, PSend10070, PSend10130, PSend10131, self);
    
    MethodClosure MC_SMB_testServer_ = new_MethodClosure((Method)PMethod10064, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testServer_, MC_SMB_testServer_);
}


static void init_class_SMB_testSocketStream_() {
    Symbol SMB_testSocketStream_ = new_Symbol(L"testSocketStream:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10133 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10134 = new_Array_with(2, (Optr)VAR_sock_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10137 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10136 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10137);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10138 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10141 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10140 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10141, (Optr)&t_block_return);
    Block PBlock10139 = new_Block_with(empty_Array, empty_Array, PThreadedCode10140, 1, PSend10141);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Variable VAR_stream_1_1 = new_Variable_named(L"stream", 1);
    Array PArray10143 = new_Array_with(2, (Optr)VAR_conn_1_0, (Optr)VAR_stream_1_1);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10146 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10145 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10146);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10149 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_conn_1_0);
    Array PThreadedCode10148 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10149, (Optr)&t_block_return);
    Block PBlock10147 = new_Block_with(empty_Array, empty_Array, PThreadedCode10148, 1, PSend10149);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10150 = new_Send((Optr)PBlock10147, SMB_fork, 0);
    Array PThreadedCode10144 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10145, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10146, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10147, (Optr)&t_send0, (Optr)PSend10150, (Optr)&t_method_return);
    Block PBlock10142 = new_Block_with(empty_Array, PArray10143, PThreadedCode10144, 2, PAssign10145, PSend10150);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10151 = new_Send((Optr)PBlock10139, SMB_whileTrue_, 1, (Optr)PBlock10142);
    Array PThreadedCode10135 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10136, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10137, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10138, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10139, (Optr)&t_push_closure, (Optr)PBlock10142, (Optr)&t_send1, (Optr)PSend10151, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10132 = new_Method_with(PArray10133, PArray10134, empty_Array, PThreadedCode10135, 4, PAssign10136, PSend10138, PSend10151, self);
    
    MethodClosure MC_SMB_testSocketStream_ = new_MethodClosure((Method)PMethod10132, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_testSocketStream_, MC_SMB_testSocketStream_);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_conn_0_0 = new_Variable_named(L"conn", 0);
    Array PArray10153 = new_Array_with(1, (Optr)VAR_conn_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_data_0_2 = new_Variable_named(L"data", 0);
    Array PArray10154 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_data_0_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10156 = new_Send((Optr)VAR_conn_0_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10157 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10156);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10158 = new_Send((Optr)VAR_conn_0_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10159 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10158);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10161 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_0_0);
    Assign PAssign10160 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend10161);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10164 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10166 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10165 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10166);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10169 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10170 = new_Send((Optr)PSend10169, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10173 = new_Send((Optr)VAR_data_0_2, SMB_first, 0);
    Character char_10086 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10086_Const = new_Constant((Optr)char_10086);
    // =. 
    Send PSend10174 = new_Send((Optr)PSend10173, SMB__equals_, 1, (Optr)char_10086_Const);
    Array PThreadedCode10172 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10173, (Optr)&t_push1, (Optr)char_10086, (Optr)&t_send1, (Optr)PSend10174, (Optr)&t_block_return);
    Block PBlock10171 = new_Block_with(empty_Array, empty_Array, PThreadedCode10172, 1, PSend10174);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10175 = new_Send((Optr)PSend10170, SMB_and_, 1, (Optr)PBlock10171);
    Array PThreadedCode10168 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10169, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10170, (Optr)&t_push_closure, (Optr)PBlock10171, (Optr)&t_send1, (Optr)PSend10175, (Optr)&t_block_return);
    Block PBlock10167 = new_Block_with(empty_Array, empty_Array, PThreadedCode10168, 1, PSend10175);
    String string_10178 = new_String(L"Status ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10179 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10178_Const = new_Constant((Optr)string_10178);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10180 = new_Send((Optr)string_10178_Const, SMB__append_, 1, (Optr)PSend10179);
    // warn:. 
    Send PSend10181 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10180);
    String string_10182 = new_String(L"Received ");
    Constant string_10182_Const = new_Constant((Optr)string_10182);
    // ,. 
    Send PSend10183 = new_Send((Optr)string_10182_Const, SMB__append_, 1, (Optr)VAR_data_0_2);
    String string_10184 = new_String(L", handle=");
    Constant string_10184_Const = new_Constant((Optr)string_10184);
    // ,. 
    Send PSend10185 = new_Send((Optr)PSend10183, SMB__append_, 1, (Optr)string_10184_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10186 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10187 = new_Send((Optr)PSend10185, SMB__append_, 1, (Optr)PSend10186);
    // warn:. 
    Send PSend10188 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10187);
    String string_10189 = new_String(L"Received ");
    // size. 
    Send PSend10190 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10189_Const = new_Constant((Optr)string_10189);
    // ,. 
    Send PSend10191 = new_Send((Optr)string_10189_Const, SMB__append_, 1, (Optr)PSend10190);
    String string_10192 = new_String(L" bytes");
    Constant string_10192_Const = new_Constant((Optr)string_10192);
    // ,. 
    Send PSend10193 = new_Send((Optr)PSend10191, SMB__append_, 1, (Optr)string_10192_Const);
    String string_10194 = new_String(L", handle=");
    Constant string_10194_Const = new_Constant((Optr)string_10194);
    // ,. 
    Send PSend10195 = new_Send((Optr)PSend10193, SMB__append_, 1, (Optr)string_10194_Const);
    // hash. 
    Send PSend10196 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    // ,. 
    Send PSend10197 = new_Send((Optr)PSend10195, SMB__append_, 1, (Optr)PSend10196);
    // warn:. 
    Send PSend10198 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10197);
    String string_10199 = new_String(L"Received ");
    // size. 
    Send PSend10200 = new_Send((Optr)VAR_data_0_2, SMB_size, 0);
    Constant string_10199_Const = new_Constant((Optr)string_10199);
    // ,. 
    Send PSend10201 = new_Send((Optr)string_10199_Const, SMB__append_, 1, (Optr)PSend10200);
    String string_10202 = new_String(L" bytes");
    Constant string_10202_Const = new_Constant((Optr)string_10202);
    // ,. 
    Send PSend10203 = new_Send((Optr)PSend10201, SMB__append_, 1, (Optr)string_10202_Const);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend10204 = new_Send((Optr)VAR_conn_0_0, SMB_write_, 1, (Optr)PSend10203);
    // receiveDataIfAvailable. 
    Send PSend10205 = new_Send((Optr)VAR_stream_0_1, SMB_receiveDataIfAvailable, 0);
    // nextAllInBuffer. 
    Send PSend10207 = new_Send((Optr)VAR_stream_0_1, SMB_nextAllInBuffer, 0);
    Assign PAssign10206 = new_Assign((Optr)VAR_data_0_2, (Optr)PSend10207);
    Array PThreadedCode10177 = instantiate_Array_with(ThreadedCode_Class, 0, 88, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10178, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10179, (Optr)&t_send1, (Optr)PSend10180, (Optr)&t_send1, (Optr)PSend10181, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10182, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send1, (Optr)PSend10183, (Optr)&t_push1, (Optr)string_10184, (Optr)&t_send1, (Optr)PSend10185, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10186, (Optr)&t_send1, (Optr)PSend10187, (Optr)&t_send1, (Optr)PSend10188, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10189, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10190, (Optr)&t_send1, (Optr)PSend10191, (Optr)&t_push1, (Optr)string_10192, (Optr)&t_send1, (Optr)PSend10193, (Optr)&t_push1, (Optr)string_10194, (Optr)&t_send1, (Optr)PSend10195, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10196, (Optr)&t_send1, (Optr)PSend10197, (Optr)&t_send1, (Optr)PSend10198, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push1, (Optr)string_10199, (Optr)&t_push_variable, (Optr)VAR_data_0_2, (Optr)&t_send0, (Optr)PSend10200, (Optr)&t_send1, (Optr)PSend10201, (Optr)&t_push1, (Optr)string_10202, (Optr)&t_send1, (Optr)PSend10203, (Optr)&t_send1, (Optr)PSend10204, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10205, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10206, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10207, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10176 = new_Block_with(empty_Array, empty_Array, PThreadedCode10177, 6, PSend10181, PSend10188, PSend10198, PSend10204, PSend10205, PAssign10206);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10208 = new_Send((Optr)PBlock10167, SMB_whileFalse_, 1, (Optr)PBlock10176);
    Array PThreadedCode10163 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10164, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10165, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend10166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10167, (Optr)&t_push_closure, (Optr)PBlock10176, (Optr)&t_send1, (Optr)PSend10208, (Optr)&t_block_return);
    Block PBlock10162 = new_Block_with(empty_Array, empty_Array, PThreadedCode10163, 3, PSend10164, PAssign10165, PSend10208);
    Variable VAR_error_1_0 = new_Variable_named(L"error", 1);
    Array PArray10210 = new_Array_with(1, (Optr)VAR_error_1_0);
    String string_10212 = new_String(L"Error: Network Connection closed");
    Constant string_10212_Const = new_Constant((Optr)string_10212);
    // warn:. 
    Send PSend10213 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10212_Const);
    String string_10214 = new_String(L"Status: ");
    // isConnected. 
    Send PSend10215 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10214_Const = new_Constant((Optr)string_10214);
    // ,. 
    Send PSend10216 = new_Send((Optr)string_10214_Const, SMB__append_, 1, (Optr)PSend10215);
    // warn:. 
    Send PSend10217 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10216);
    Array PThreadedCode10211 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10212, (Optr)&t_send1, (Optr)PSend10213, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10214, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10215, (Optr)&t_send1, (Optr)PSend10216, (Optr)&t_send1, (Optr)PSend10217, (Optr)&t_method_return);
    Block PBlock10209 = new_Block_with(PArray10210, empty_Array, PThreadedCode10211, 2, PSend10213, PSend10217);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10218 = new_Send((Optr)PBlock10162, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10209);
    String string_10219 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10220 = new_Send((Optr)VAR_conn_0_0, SMB_hash, 0);
    Constant string_10219_Const = new_Constant((Optr)string_10219);
    // ,. 
    Send PSend10221 = new_Send((Optr)string_10219_Const, SMB__append_, 1, (Optr)PSend10220);
    // warn:. 
    Send PSend10222 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10221);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10223 = new_Send((Optr)VAR_conn_0_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10224 = new_String(L"Status ");
    // isConnected. 
    Send PSend10225 = new_Send((Optr)VAR_conn_0_0, SMB_isConnected, 0);
    Constant string_10224_Const = new_Constant((Optr)string_10224);
    // ,. 
    Send PSend10226 = new_Send((Optr)string_10224_Const, SMB__append_, 1, (Optr)PSend10225);
    // warn:. 
    Send PSend10227 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10226);
    Array PThreadedCode10155 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10156, (Optr)&t_send1, (Optr)PSend10157, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10158, (Optr)&t_send1, (Optr)PSend10159, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10160, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send1, (Optr)PSend10161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10162, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10209, (Optr)&t_send2, (Optr)PSend10218, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10219, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10220, (Optr)&t_send1, (Optr)PSend10221, (Optr)&t_send1, (Optr)PSend10222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10223, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10224, (Optr)&t_push_variable, (Optr)VAR_conn_0_0, (Optr)&t_send0, (Optr)PSend10225, (Optr)&t_send1, (Optr)PSend10226, (Optr)&t_send1, (Optr)PSend10227, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10152 = new_Method_with(PArray10153, PArray10154, empty_Array, PThreadedCode10155, 8, PSend10157, PSend10159, PAssign10160, PSend10218, PSend10222, PSend10223, PSend10227, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod10152, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode10229 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod10228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10229, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod10228, HEADER(IO_Socket_Class));
    store_method(HEADER(IO_Socket_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_testWebSocket_() {
    Symbol SMB_testWebSocket_ = new_Symbol(L"testWebSocket:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray10231 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Variable VAR_sock_0_1 = new_Variable_named(L"sock", 0);
    Array PArray10232 = new_Array_with(1, (Optr)VAR_sock_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend10235 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign10234 = new_Assign((Optr)VAR_sock_0_1, (Optr)PSend10235);
    Symbol SMB_primListenOn_ = new_Symbol(L"primListenOn:");
    // primListenOn:. 
    Send PSend10236 = new_Send((Optr)VAR_sock_0_1, SMB_primListenOn_, 1, (Optr)VAR_aPort_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend10239 = new_Send((Optr)int_2_Const, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode10238 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10239, (Optr)&t_block_return);
    Block PBlock10237 = new_Block_with(empty_Array, empty_Array, PThreadedCode10238, 1, PSend10239);
    Variable VAR_conn_1_0 = new_Variable_named(L"conn", 1);
    Array PArray10241 = new_Array_with(1, (Optr)VAR_conn_1_0);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend10244 = new_Send((Optr)VAR_sock_0_1, SMB_accept, 0);
    Assign PAssign10243 = new_Assign((Optr)VAR_conn_1_0, (Optr)PSend10244);
    Variable VAR_stream_2_0 = new_Variable_named(L"stream", 2);
    Variable VAR_web_2_1 = new_Variable_named(L"web", 2);
    Variable VAR_data_2_2 = new_Variable_named(L"data", 2);
    Array PArray10246 = new_Array_with(3, (Optr)VAR_stream_2_0, (Optr)VAR_web_2_1, (Optr)VAR_data_2_2);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend10248 = new_Send((Optr)VAR_conn_1_0, SMB_remotePort, 0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend10249 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10248);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend10250 = new_Send((Optr)VAR_conn_1_0, SMB_remoteAddress, 0);
    // warn:. 
    Send PSend10251 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10250);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10253 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_conn_1_0);
    Assign PAssign10252 = new_Assign((Optr)VAR_stream_2_0, (Optr)PSend10253);
    // on:. 
    Send PSend10255 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_stream_2_0);
    Assign PAssign10254 = new_Assign((Optr)VAR_web_2_1, (Optr)PSend10255);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend10259 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10258 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10259);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10262 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10263 = new_Send((Optr)PSend10262, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend10266 = new_Send((Optr)VAR_data_2_2, SMB_first, 0);
    Character char_10086 = new_Character(L'!');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_10086_Const = new_Constant((Optr)char_10086);
    // =. 
    Send PSend10267 = new_Send((Optr)PSend10266, SMB__equals_, 1, (Optr)char_10086_Const);
    Array PThreadedCode10265 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10266, (Optr)&t_push1, (Optr)char_10086, (Optr)&t_send1, (Optr)PSend10267, (Optr)&t_block_return);
    Block PBlock10264 = new_Block_with(empty_Array, empty_Array, PThreadedCode10265, 1, PSend10267);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10268 = new_Send((Optr)PSend10263, SMB_and_, 1, (Optr)PBlock10264);
    Array PThreadedCode10261 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10262, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10263, (Optr)&t_push_closure, (Optr)PBlock10264, (Optr)&t_send1, (Optr)PSend10268, (Optr)&t_block_return);
    Block PBlock10260 = new_Block_with(empty_Array, empty_Array, PThreadedCode10261, 1, PSend10268);
    String string_10271 = new_String(L"Received ");
    Constant string_10271_Const = new_Constant((Optr)string_10271);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10272 = new_Send((Optr)string_10271_Const, SMB__append_, 1, (Optr)VAR_data_2_2);
    String string_10273 = new_String(L", handle=");
    Constant string_10273_Const = new_Constant((Optr)string_10273);
    // ,. 
    Send PSend10274 = new_Send((Optr)PSend10272, SMB__append_, 1, (Optr)string_10273_Const);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend10275 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10276 = new_Send((Optr)PSend10274, SMB__append_, 1, (Optr)PSend10275);
    // warn:. 
    Send PSend10277 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10276);
    String string_10278 = new_String(L"Received ");
    // size. 
    Send PSend10279 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10278_Const = new_Constant((Optr)string_10278);
    // ,. 
    Send PSend10280 = new_Send((Optr)string_10278_Const, SMB__append_, 1, (Optr)PSend10279);
    String string_10281 = new_String(L" bytes");
    Constant string_10281_Const = new_Constant((Optr)string_10281);
    // ,. 
    Send PSend10282 = new_Send((Optr)PSend10280, SMB__append_, 1, (Optr)string_10281_Const);
    String string_10283 = new_String(L", handle=");
    Constant string_10283_Const = new_Constant((Optr)string_10283);
    // ,. 
    Send PSend10284 = new_Send((Optr)PSend10282, SMB__append_, 1, (Optr)string_10283_Const);
    // hash. 
    Send PSend10285 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    // ,. 
    Send PSend10286 = new_Send((Optr)PSend10284, SMB__append_, 1, (Optr)PSend10285);
    // warn:. 
    Send PSend10287 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10286);
    String string_10288 = new_String(L"Received ");
    // size. 
    Send PSend10289 = new_Send((Optr)VAR_data_2_2, SMB_size, 0);
    Constant string_10288_Const = new_Constant((Optr)string_10288);
    // ,. 
    Send PSend10290 = new_Send((Optr)string_10288_Const, SMB__append_, 1, (Optr)PSend10289);
    String string_10291 = new_String(L" bytes");
    Constant string_10291_Const = new_Constant((Optr)string_10291);
    // ,. 
    Send PSend10292 = new_Send((Optr)PSend10290, SMB__append_, 1, (Optr)string_10291_Const);
    Symbol SMB_send_ = new_Symbol(L"send:");
    // send:. 
    Send PSend10293 = new_Send((Optr)VAR_web_2_1, SMB_send_, 1, (Optr)PSend10292);
    // readMessage. 
    Send PSend10295 = new_Send((Optr)VAR_web_2_1, SMB_readMessage, 0);
    Assign PAssign10294 = new_Assign((Optr)VAR_data_2_2, (Optr)PSend10295);
    Array PThreadedCode10270 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10271, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send1, (Optr)PSend10272, (Optr)&t_push1, (Optr)string_10273, (Optr)&t_send1, (Optr)PSend10274, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10275, (Optr)&t_send1, (Optr)PSend10276, (Optr)&t_send1, (Optr)PSend10277, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10278, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10279, (Optr)&t_send1, (Optr)PSend10280, (Optr)&t_push1, (Optr)string_10281, (Optr)&t_send1, (Optr)PSend10282, (Optr)&t_push1, (Optr)string_10283, (Optr)&t_send1, (Optr)PSend10284, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10285, (Optr)&t_send1, (Optr)PSend10286, (Optr)&t_send1, (Optr)PSend10287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_push1, (Optr)string_10288, (Optr)&t_push_variable, (Optr)VAR_data_2_2, (Optr)&t_send0, (Optr)PSend10289, (Optr)&t_send1, (Optr)PSend10290, (Optr)&t_push1, (Optr)string_10291, (Optr)&t_send1, (Optr)PSend10292, (Optr)&t_send1, (Optr)PSend10293, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10294, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10295, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10269 = new_Block_with(empty_Array, empty_Array, PThreadedCode10270, 4, PSend10277, PSend10287, PSend10293, PAssign10294);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend10296 = new_Send((Optr)PBlock10260, SMB_whileFalse_, 1, (Optr)PBlock10269);
    Array PThreadedCode10257 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10258, (Optr)&t_push_variable, (Optr)VAR_web_2_1, (Optr)&t_send0, (Optr)PSend10259, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10260, (Optr)&t_push_closure, (Optr)PBlock10269, (Optr)&t_send1, (Optr)PSend10296, (Optr)&t_block_return);
    Block PBlock10256 = new_Block_with(empty_Array, empty_Array, PThreadedCode10257, 2, PAssign10258, PSend10296);
    Variable VAR_error_3_0 = new_Variable_named(L"error", 3);
    Array PArray10298 = new_Array_with(1, (Optr)VAR_error_3_0);
    String string_10300 = new_String(L"Error: Network Connection closed");
    Constant string_10300_Const = new_Constant((Optr)string_10300);
    // warn:. 
    Send PSend10301 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10300_Const);
    String string_10302 = new_String(L"Status: ");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10303 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10302_Const = new_Constant((Optr)string_10302);
    // ,. 
    Send PSend10304 = new_Send((Optr)string_10302_Const, SMB__append_, 1, (Optr)PSend10303);
    // warn:. 
    Send PSend10305 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10304);
    Array PThreadedCode10299 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10300, (Optr)&t_send1, (Optr)PSend10301, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10302, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10303, (Optr)&t_send1, (Optr)PSend10304, (Optr)&t_send1, (Optr)PSend10305, (Optr)&t_method_return);
    Block PBlock10297 = new_Block_with(PArray10298, empty_Array, PThreadedCode10299, 2, PSend10301, PSend10305);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10306 = new_Send((Optr)PBlock10256, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock10297);
    String string_10307 = new_String(L"Will now close connection, handle=");
    // hash. 
    Send PSend10308 = new_Send((Optr)VAR_conn_1_0, SMB_hash, 0);
    Constant string_10307_Const = new_Constant((Optr)string_10307);
    // ,. 
    Send PSend10309 = new_Send((Optr)string_10307_Const, SMB__append_, 1, (Optr)PSend10308);
    // warn:. 
    Send PSend10310 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10309);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    // closeAndDestroy:. 
    Send PSend10311 = new_Send((Optr)VAR_conn_1_0, SMB_closeAndDestroy_, 1, (Optr)int_0_Const);
    String string_10312 = new_String(L"Status ");
    // isConnected. 
    Send PSend10313 = new_Send((Optr)VAR_conn_1_0, SMB_isConnected, 0);
    Constant string_10312_Const = new_Constant((Optr)string_10312);
    // ,. 
    Send PSend10314 = new_Send((Optr)string_10312_Const, SMB__append_, 1, (Optr)PSend10313);
    // warn:. 
    Send PSend10315 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10314);
    Array PThreadedCode10247 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10248, (Optr)&t_send1, (Optr)PSend10249, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10250, (Optr)&t_send1, (Optr)PSend10251, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10252, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send1, (Optr)PSend10253, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10254, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_stream_2_0, (Optr)&t_send1, (Optr)PSend10255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10256, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock10297, (Optr)&t_send2, (Optr)PSend10306, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10307, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10308, (Optr)&t_send1, (Optr)PSend10309, (Optr)&t_send1, (Optr)PSend10310, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10311, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10312, (Optr)&t_push_variable, (Optr)VAR_conn_1_0, (Optr)&t_send0, (Optr)PSend10313, (Optr)&t_send1, (Optr)PSend10314, (Optr)&t_send1, (Optr)PSend10315, (Optr)&t_method_return);
    Block PBlock10245 = new_Block_with(empty_Array, PArray10246, PThreadedCode10247, 8, PSend10249, PSend10251, PAssign10252, PAssign10254, PSend10306, PSend10310, PSend10311, PSend10315);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend10316 = new_Send((Optr)PBlock10245, SMB_fork, 0);
    Array PThreadedCode10242 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign10243, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_send0, (Optr)PSend10244, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10245, (Optr)&t_send0, (Optr)PSend10316, (Optr)&t_method_return);
    Block PBlock10240 = new_Block_with(empty_Array, PArray10241, PThreadedCode10242, 2, PAssign10243, PSend10316);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10317 = new_Send((Optr)PBlock10237, SMB_whileTrue_, 1, (Optr)PBlock10240);
    Array PThreadedCode10233 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign10234, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10235, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sock_0_1, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_send1, (Optr)PSend10236, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10237, (Optr)&t_push_closure, (Optr)PBlock10240, (Optr)&t_send1, (Optr)PSend10317, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10230 = new_Method_with(PArray10231, PArray10232, empty_Array, PThreadedCode10233, 4, PAssign10234, PSend10236, PSend10317, self);
    
    MethodClosure MC_SMB_testWebSocket_ = new_MethodClosure((Method)PMethod10230, HEADER(IO_Socket_Class));
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