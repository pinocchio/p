#include <lib/class/IO/SocketStream.h>


Optr layout_IO_SocketStream_Class_class;
Optr slot_IO_SocketStream_recentlyRead;
Optr slot_IO_SocketStream_socket;
Optr slot_IO_SocketStream_inBuffer;
Optr slot_IO_SocketStream_outBuffer;
Optr slot_IO_SocketStream_inNextToWrite;
Optr slot_IO_SocketStream_outNextToWrite;
Optr slot_IO_SocketStream_lastRead;
Optr slot_IO_SocketStream_timeout;
Optr slot_IO_SocketStream_autoFlush;
Optr slot_IO_SocketStream_bufferSize;
Optr slot_IO_SocketStream_binary;
Optr slot_IO_SocketStream_shouldSignal;
Optr layout_IO_SocketStream;


static void init_SMB_shouldSignal_() {
    Symbol SMB_shouldSignal_ = new_Symbol(L"shouldSignal:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10624 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10626 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10625 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10626, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10623 = new_Method_with(PArray10624, empty_Array, empty_Array, PThreadedCode10625, 2, PAssign10626, self);
    
    MethodClosure MC_SMB_shouldSignal_ = new_MethodClosure((Method)PMethod10623, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal_, MC_SMB_shouldSignal_);
}


static void init_SMB_binary() {
    Symbol SMB_binary = new_Symbol(L"binary");
    Assign PAssign10629 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)true_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10630 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10628 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10629, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10630, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10628, 3, PAssign10629, PSend10630, self);
    
    MethodClosure MC_SMB_binary = new_MethodClosure((Method)PMethod10627, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_binary, MC_SMB_binary);
}


static void init_SMB_nextLine() {
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    // nextLineCrLf. 
    Send PSend10633 = new_Send((Optr)self, SMB_nextLineCrLf, 0);
    Array PThreadedCode10632 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10633, (Optr)&t_method_return);
    Method PMethod10631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10632, 1, PSend10633);
    
    MethodClosure MC_SMB_nextLine = new_MethodClosure((Method)PMethod10631, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLine, MC_SMB_nextLine);
}


static void init_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10636 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10637 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10636);
    Array PThreadedCode10635 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10636, (Optr)&t_send1, (Optr)PSend10637, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10635, 2, PSend10637, self);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod10634, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_crlf, MC_SMB_crlf);
}


static void init_SMB_noTimeout() {
    Symbol SMB_noTimeout = new_Symbol(L"noTimeout");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10640 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)int_0_Const);
    Array PThreadedCode10639 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign10640, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10638 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10639, 2, PAssign10640, self);
    
    MethodClosure MC_SMB_noTimeout = new_MethodClosure((Method)PMethod10638, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_noTimeout, MC_SMB_noTimeout);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    String string_10643 = new_String(L"SocketStream>>receiveData");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10643_Const = new_Constant((Optr)string_10643);
    // warn:. 
    Send PSend10644 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10643_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_10649 = new_String(L"SocketStream>>receiveData: should signal");
    Constant string_10649_Const = new_Constant((Optr)string_10649);
    // warn:. 
    Send PSend10650 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10649_Const);
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    // shouldTimeout. 
    Send PSend10651 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10655 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10655_Const = new_Constant((Optr)string_10655);
    // warn:. 
    Send PSend10656 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10655_Const);
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    // receiveDataSignallingTimeout:into:startingAt:. 
    Send PSend10657 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10654 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10655, (Optr)&t_send1, (Optr)PSend10656, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10657, (Optr)&t_block_return);
    Block PBlock10653 = new_Block_with(empty_Array, empty_Array, PThreadedCode10654, 2, PSend10656, PSend10657);
    String string_10660 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10660_Const = new_Constant((Optr)string_10660);
    // warn:. 
    Send PSend10661 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10660_Const);
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    // receiveDataSignallingClosedInto:startingAt:. 
    Send PSend10662 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingClosedInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10659 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10660, (Optr)&t_send1, (Optr)PSend10661, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10662, (Optr)&t_block_return);
    Block PBlock10658 = new_Block_with(empty_Array, empty_Array, PThreadedCode10659, 2, PSend10661, PSend10662);
    // ifTrue:ifFalse:. 
    Send PSend10652 = new_Send((Optr)PSend10651, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10653, (Optr)PBlock10658);
    Array PThreadedCode10648 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10649, (Optr)&t_send1, (Optr)PSend10650, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10651, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10652, (Optr)PBlock10653, (Optr)PBlock10658, (Optr)&t_block_return);
    Block PBlock10647 = new_Block_with(empty_Array, empty_Array, PThreadedCode10648, 2, PSend10650, PSend10652);
    String string_10665 = new_String(L"SocketStream>>receiveData: should NOT signal");
    Constant string_10665_Const = new_Constant((Optr)string_10665);
    // warn:. 
    Send PSend10666 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10665_Const);
    // shouldTimeout. 
    Send PSend10667 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10671 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10671_Const = new_Constant((Optr)string_10671);
    // warn:. 
    Send PSend10672 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10671_Const);
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    // receiveDataTimeout:into:startingAt:. 
    Send PSend10673 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10670 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10671, (Optr)&t_send1, (Optr)PSend10672, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10673, (Optr)&t_block_return);
    Block PBlock10669 = new_Block_with(empty_Array, empty_Array, PThreadedCode10670, 2, PSend10672, PSend10673);
    String string_10676 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10676_Const = new_Constant((Optr)string_10676);
    // warn:. 
    Send PSend10677 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10676_Const);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10678 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10675 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10676, (Optr)&t_send1, (Optr)PSend10677, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10678, (Optr)&t_block_return);
    Block PBlock10674 = new_Block_with(empty_Array, empty_Array, PThreadedCode10675, 2, PSend10677, PSend10678);
    // ifTrue:ifFalse:. 
    Send PSend10668 = new_Send((Optr)PSend10667, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10669, (Optr)PBlock10674);
    Array PThreadedCode10664 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10665, (Optr)&t_send1, (Optr)PSend10666, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10667, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10668, (Optr)PBlock10669, (Optr)PBlock10674, (Optr)&t_block_return);
    Block PBlock10663 = new_Block_with(empty_Array, empty_Array, PThreadedCode10664, 2, PSend10666, PSend10668);
    // ifTrue:ifFalse:. 
    Send PSend10646 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10647, (Optr)PBlock10663);
    Assign PAssign10645 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10646);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10679 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10642 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10643, (Optr)&t_send1, (Optr)PSend10644, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10645, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10646, (Optr)PBlock10647, (Optr)PBlock10663, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10679, (Optr)&t_method_return);
    Method PMethod10641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10642, 3, PSend10644, PAssign10645, PSend10679);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod10641, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_isBinary() {
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    Array PThreadedCode10681 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_method_return);
    Method PMethod10680 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10681, 1, slot_IO_SocketStream_binary);
    
    MethodClosure MC_SMB_isBinary = new_MethodClosure((Method)PMethod10680, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isBinary, MC_SMB_isBinary);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper10684 = new_Super(SMB_initialize, 0);
    Assign PAssign10685 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)true_Const);
    Assign PAssign10686 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)true_Const);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10687 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)int_0_Const);
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    Assign PAssign10688 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)int_4096_Const);
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend10689 = new_Send((Optr)self, SMB_ascii, 0);
    Array PThreadedCode10683 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper10684, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10685, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10686, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10687, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10688, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10689, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10683, 7, PSuper10684, PAssign10685, PAssign10686, PAssign10687, PAssign10688, PSend10689, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10682, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_peekFor_() {
    Symbol SMB_peekFor_ = new_Symbol(L"peekFor:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray10691 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_nextObject_0_1 = new_Variable_named(L"nextObject", 0);
    Array PArray10692 = new_Array_with(1, (Optr)VAR_nextObject_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10695 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10697 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10701 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10700 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10701, (Optr)&t_block_return);
    Block PBlock10699 = new_Block_with(empty_Array, empty_Array, PThreadedCode10700, 1, PSend10701);
    // ifTrue:. 
    Send PSend10698 = new_Send((Optr)PSend10697, SMB_ifTrue_, 1, (Optr)PBlock10699);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10702 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10706 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10707 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10711 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10710 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10711, (Optr)&t_block_return);
    Block PBlock10709 = new_Block_with(empty_Array, empty_Array, PThreadedCode10710, 1, PSend10711);
    // ifTrue:. 
    Send PSend10708 = new_Send((Optr)PSend10707, SMB_ifTrue_, 1, (Optr)PBlock10709);
    Array PThreadedCode10705 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10706, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10707, (Optr)&t_send_ifTrue_, (Optr)PSend10708, (Optr)PBlock10709, (Optr)&t_block_return);
    Block PBlock10704 = new_Block_with(empty_Array, empty_Array, PThreadedCode10705, 2, PSend10706, PSend10708);
    // ifTrue:. 
    Send PSend10703 = new_Send((Optr)PSend10702, SMB_ifTrue_, 1, (Optr)PBlock10704);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10713 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Assign PAssign10712 = new_Assign((Optr)VAR_nextObject_0_1, (Optr)PSend10713);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10714 = new_Send((Optr)VAR_nextObject_0_1, SMB__equals_, 1, (Optr)VAR_aCharacterOrByte_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10719 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10718 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10719);
    // escape:. 
    Send PSend10720 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10717 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10718, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10719, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10720, (Optr)&t_block_return);
    Block PBlock10716 = new_Block_with(empty_Array, empty_Array, PThreadedCode10717, 2, PAssign10718, PSend10720);
    // ifTrue:. 
    Send PSend10715 = new_Send((Optr)PSend10714, SMB_ifTrue_, 1, (Optr)PBlock10716);
    Array PThreadedCode10696 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10697, (Optr)&t_send_ifTrue_, (Optr)PSend10698, (Optr)PBlock10699, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10702, (Optr)&t_send_ifTrue_, (Optr)PSend10703, (Optr)PBlock10704, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10712, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10713, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_send1, (Optr)PSend10714, (Optr)&t_send_ifTrue_, (Optr)PSend10715, (Optr)PBlock10716, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock10694 = new_Block_with(PArray10695, empty_Array, PThreadedCode10696, 5, PSend10698, PSend10703, PAssign10712, PSend10715, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10721 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10694);
    Array PThreadedCode10693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10694, (Optr)&t_send1, (Optr)PSend10721, (Optr)&t_method_return);
    Method PMethod10690 = new_Method_with(PArray10691, PArray10692, empty_Array, PThreadedCode10693, 1, PSend10721);
    
    MethodClosure MC_SMB_peekFor_ = new_MethodClosure((Method)PMethod10690, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekFor_, MC_SMB_peekFor_);
}


static void init_SMB_peekForAll_() {
    Symbol SMB_peekForAll_ = new_Symbol(L"peekForAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10723 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_sz_0_1 = new_Variable_named(L"sz", 0);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray10724 = new_Array_with(2, (Optr)VAR_sz_0_1, (Optr)VAR_start_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10727 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10730 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Assign PAssign10729 = new_Assign((Optr)VAR_sz_0_1, (Optr)PSend10730);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10731 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10732 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10733 = new_Send((Optr)PSend10732, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend10734 = new_Send((Optr)PSend10733, SMB__lt_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10738 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10737 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10738, (Optr)&t_block_return);
    Block PBlock10736 = new_Block_with(empty_Array, empty_Array, PThreadedCode10737, 1, PSend10738);
    // ifTrue:. 
    Send PSend10735 = new_Send((Optr)PSend10734, SMB_ifTrue_, 1, (Optr)PBlock10736);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10740 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10739 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend10740);
    Symbol SMB_findString_startingAt_ = new_Symbol(L"findString:startingAt:");
    // findString:startingAt:. 
    Send PSend10741 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_findString_startingAt_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_start_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10742 = new_Send((Optr)PSend10741, SMB__equals_, 1, (Optr)VAR_start_0_2);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend10746 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10745 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10746, (Optr)&t_block_return);
    Block PBlock10744 = new_Block_with(empty_Array, empty_Array, PThreadedCode10745, 1, PSend10746);
    // ifFalse:. 
    Send PSend10743 = new_Send((Optr)PSend10742, SMB_ifFalse_, 1, (Optr)PBlock10744);
    // +. 
    Send PSend10748 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_sz_0_1);
    Assign PAssign10747 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10748);
    Array PThreadedCode10728 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign10729, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend10730, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10731, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10732, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10733, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10734, (Optr)&t_send_ifTrue_, (Optr)PSend10735, (Optr)PBlock10736, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10739, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send2, (Optr)PSend10741, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send1, (Optr)PSend10742, (Optr)&t_send_ifFalse_, (Optr)PSend10743, (Optr)PBlock10744, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10747, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10748, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock10726 = new_Block_with(PArray10727, empty_Array, PThreadedCode10728, 7, PAssign10729, PSend10731, PSend10735, PAssign10739, PSend10743, PAssign10747, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10749 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10726);
    Array PThreadedCode10725 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10726, (Optr)&t_send1, (Optr)PSend10749, (Optr)&t_method_return);
    Method PMethod10722 = new_Method_with(PArray10723, PArray10724, empty_Array, PThreadedCode10725, 1, PSend10749);
    
    MethodClosure MC_SMB_peekForAll_ = new_MethodClosure((Method)PMethod10722, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekForAll_, MC_SMB_peekForAll_);
}


static void init_SMB_receiveAvailableData() {
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10753 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10752 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10753);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10754 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10751 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10752, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10753, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10754, (Optr)&t_method_return);
    Method PMethod10750 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10751, 2, PAssign10752, PSend10754);
    
    MethodClosure MC_SMB_receiveAvailableData = new_MethodClosure((Method)PMethod10750, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveAvailableData, MC_SMB_receiveAvailableData);
}


static void init_SMB_autoFlush_() {
    Symbol SMB_autoFlush_ = new_Symbol(L"autoFlush:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10756 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10758 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10757 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10758, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10755 = new_Method_with(PArray10756, empty_Array, empty_Array, PThreadedCode10757, 2, PAssign10758, self);
    
    MethodClosure MC_SMB_autoFlush_ = new_MethodClosure((Method)PMethod10755, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush_, MC_SMB_autoFlush_);
}


static void init_SMB_nextLineCrLf() {
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10761 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend10762 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend10761);
    Array PThreadedCode10760 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10761, (Optr)&t_send1, (Optr)PSend10762, (Optr)&t_method_return);
    Method PMethod10759 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10760, 1, PSend10762);
    
    MethodClosure MC_SMB_nextLineCrLf = new_MethodClosure((Method)PMethod10759, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineCrLf, MC_SMB_nextLineCrLf);
}


static void init_SMB_isStream() {
    Symbol SMB_isStream = new_Symbol(L"isStream");
    Array PThreadedCode10764 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod10763 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10764, 1, true_Const);
    
    MethodClosure MC_SMB_isStream = new_MethodClosure((Method)PMethod10763, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isStream, MC_SMB_isStream);
}


static void init_SMB_receiveData_() {
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    Variable VAR_nBytes_0_0 = new_Variable_named(L"nBytes", 0);
    Array PArray10766 = new_Array_with(1, (Optr)VAR_nBytes_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10770 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10771 = new_Send((Optr)PSend10770, SMB_not, 0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10774 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10775 = new_Send((Optr)VAR_nBytes_0_0, SMB__gt_, 1, (Optr)PSend10774);
    Array PThreadedCode10773 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_nBytes_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10774, (Optr)&t_send1, (Optr)PSend10775, (Optr)&t_block_return);
    Block PBlock10772 = new_Block_with(empty_Array, empty_Array, PThreadedCode10773, 1, PSend10775);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10776 = new_Send((Optr)PSend10771, SMB_and_, 1, (Optr)PBlock10772);
    Array PThreadedCode10769 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10770, (Optr)&t_send0, (Optr)PSend10771, (Optr)&t_push_closure, (Optr)PBlock10772, (Optr)&t_send1, (Optr)PSend10776, (Optr)&t_block_return);
    Block PBlock10768 = new_Block_with(empty_Array, empty_Array, PThreadedCode10769, 1, PSend10776);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10779 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10778 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10779, (Optr)&t_block_return);
    Block PBlock10777 = new_Block_with(empty_Array, empty_Array, PThreadedCode10778, 1, PSend10779);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10780 = new_Send((Optr)PBlock10768, SMB_whileTrue_, 1, (Optr)PBlock10777);
    Array PThreadedCode10767 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock10768, (Optr)&t_push_closure, (Optr)PBlock10777, (Optr)&t_send1, (Optr)PSend10780, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10765 = new_Method_with(PArray10766, empty_Array, empty_Array, PThreadedCode10767, 2, PSend10780, self);
    
    MethodClosure MC_SMB_receiveData_ = new_MethodClosure((Method)PMethod10765, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData_, MC_SMB_receiveData_);
}


static void init_SMB_streamBuffer_() {
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray10782 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend10784 = new_Send((Optr)self, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode10787 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ByteArray_classReference, (Optr)&t_block_return);
    Block PBlock10786 = new_Block_with(empty_Array, empty_Array, PThreadedCode10787, 1, ByteArray_classReference);
    Array PThreadedCode10789 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_block_return);
    Block PBlock10788 = new_Block_with(empty_Array, empty_Array, PThreadedCode10789, 1, String_classReference);
    // ifTrue:ifFalse:. 
    Send PSend10785 = new_Send((Optr)PSend10784, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10786, (Optr)PBlock10788);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend10790 = new_Send((Optr)PSend10785, SMB_new_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode10783 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10784, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10785, (Optr)PBlock10786, (Optr)PBlock10788, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend10790, (Optr)&t_method_return);
    Method PMethod10781 = new_Method_with(PArray10782, empty_Array, empty_Array, PThreadedCode10783, 1, PSend10790);
    
    MethodClosure MC_SMB_streamBuffer_ = new_MethodClosure((Method)PMethod10781, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_streamBuffer_, MC_SMB_streamBuffer_);
}


static void init_SMB_socket_() {
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray10792 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Assign PAssign10794 = new_Assign((Optr)slot_IO_SocketStream_socket, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode10793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10794, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10791 = new_Method_with(PArray10792, empty_Array, empty_Array, PThreadedCode10793, 2, PAssign10794, self);
    
    MethodClosure MC_SMB_socket_ = new_MethodClosure((Method)PMethod10791, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket_, MC_SMB_socket_);
}


static void init_SMB_ascii() {
    Symbol SMB_ascii = new_Symbol(L"ascii");
    Assign PAssign10797 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)false_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10798 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10796 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10797, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10798, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10796, 3, PAssign10797, PSend10798, self);
    
    MethodClosure MC_SMB_ascii = new_MethodClosure((Method)PMethod10795, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ascii, MC_SMB_ascii);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray10800 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Assign PAssign10802 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)VAR_seconds_0_0);
    Array PThreadedCode10801 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10802, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10799 = new_Method_with(PArray10800, empty_Array, empty_Array, PThreadedCode10801, 2, PAssign10802, self);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod10799, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_shouldTimeout() {
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend10805 = new_Send((Optr)self, SMB_timeout, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10806 = new_Send((Optr)PSend10805, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode10804 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10805, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10806, (Optr)&t_method_return);
    Method PMethod10803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10804, 1, PSend10806);
    
    MethodClosure MC_SMB_shouldTimeout = new_MethodClosure((Method)PMethod10803, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldTimeout, MC_SMB_shouldTimeout);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10810 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10812 = new_String(L"SocketStream>>peek");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10812_Const = new_Constant((Optr)string_10812);
    // warn:. 
    Send PSend10813 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10812_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10814 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10818 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10817 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10818, (Optr)&t_block_return);
    Block PBlock10816 = new_Block_with(empty_Array, empty_Array, PThreadedCode10817, 1, PSend10818);
    // ifTrue:. 
    Send PSend10815 = new_Send((Optr)PSend10814, SMB_ifTrue_, 1, (Optr)PBlock10816);
    String string_10819 = new_String(L"SocketStream>>peek: not at end");
    Constant string_10819_Const = new_Constant((Optr)string_10819);
    // warn:. 
    Send PSend10820 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10819_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10821 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    String string_10825 = new_String(L"SocketStream>>peek: in buffer is empty");
    Constant string_10825_Const = new_Constant((Optr)string_10825);
    // warn:. 
    Send PSend10826 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10825_Const);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10827 = new_Send((Optr)self, SMB_receiveData, 0);
    String string_10828 = new_String(L"SocketStream>>peek: recevied data");
    Constant string_10828_Const = new_Constant((Optr)string_10828);
    // warn:. 
    Send PSend10829 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10828_Const);
    // atEnd. 
    Send PSend10830 = new_Send((Optr)self, SMB_atEnd, 0);
    String string_10834 = new_String(L"SocketStream>>peek: at end");
    Constant string_10834_Const = new_Constant((Optr)string_10834);
    // warn:. 
    Send PSend10835 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10834_Const);
    // escape:. 
    Send PSend10836 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10833 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10834, (Optr)&t_send1, (Optr)PSend10835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10836, (Optr)&t_block_return);
    Block PBlock10832 = new_Block_with(empty_Array, empty_Array, PThreadedCode10833, 2, PSend10835, PSend10836);
    // ifTrue:. 
    Send PSend10831 = new_Send((Optr)PSend10830, SMB_ifTrue_, 1, (Optr)PBlock10832);
    Array PThreadedCode10824 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10825, (Optr)&t_send1, (Optr)PSend10826, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10827, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10828, (Optr)&t_send1, (Optr)PSend10829, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10830, (Optr)&t_send_ifTrue_, (Optr)PSend10831, (Optr)PBlock10832, (Optr)&t_block_return);
    Block PBlock10823 = new_Block_with(empty_Array, empty_Array, PThreadedCode10824, 4, PSend10826, PSend10827, PSend10829, PSend10831);
    // ifTrue:. 
    Send PSend10822 = new_Send((Optr)PSend10821, SMB_ifTrue_, 1, (Optr)PBlock10823);
    String string_10837 = new_String(L"SocketStream>>peek: return...");
    Constant string_10837_Const = new_Constant((Optr)string_10837);
    // warn:. 
    Send PSend10838 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10837_Const);
    String string_10839 = new_String(L"SocketStream>>peek: in buffer is");
    Constant string_10839_Const = new_Constant((Optr)string_10839);
    // warn:. 
    Send PSend10840 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10839_Const);
    // warn:. 
    Send PSend10841 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    String string_10842 = new_String(L"SocketStream>>peek: last read is");
    Constant string_10842_Const = new_Constant((Optr)string_10842);
    // warn:. 
    Send PSend10843 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10842_Const);
    // warn:. 
    Send PSend10844 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10845 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10846 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)PSend10845);
    Array PThreadedCode10811 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10812, (Optr)&t_send1, (Optr)PSend10813, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10814, (Optr)&t_send_ifTrue_, (Optr)PSend10815, (Optr)PBlock10816, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10819, (Optr)&t_send1, (Optr)PSend10820, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10821, (Optr)&t_send_ifTrue_, (Optr)PSend10822, (Optr)PBlock10823, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10837, (Optr)&t_send1, (Optr)PSend10838, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10839, (Optr)&t_send1, (Optr)PSend10840, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend10841, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10842, (Optr)&t_send1, (Optr)PSend10843, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10844, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10845, (Optr)&t_send1, (Optr)PSend10846, (Optr)&t_method_return);
    Block PBlock10809 = new_Block_with(PArray10810, empty_Array, PThreadedCode10811, 10, PSend10813, PSend10815, PSend10820, PSend10822, PSend10838, PSend10840, PSend10841, PSend10843, PSend10844, PSend10846);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10847 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10809);
    Array PThreadedCode10808 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10809, (Optr)&t_send1, (Optr)PSend10847, (Optr)&t_method_return);
    Method PMethod10807 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10808, 1, PSend10847);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod10807, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_shouldSignal() {
    Symbol SMB_shouldSignal = new_Symbol(L"shouldSignal");
    Array PThreadedCode10849 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_method_return);
    Method PMethod10848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10849, 1, slot_IO_SocketStream_shouldSignal);
    
    MethodClosure MC_SMB_shouldSignal = new_MethodClosure((Method)PMethod10848, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal, MC_SMB_shouldSignal);
}


static void init_SMB_bufferSize() {
    Symbol SMB_bufferSize = new_Symbol(L"bufferSize");
    Array PThreadedCode10851 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_method_return);
    Method PMethod10850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10851, 1, slot_IO_SocketStream_bufferSize);
    
    MethodClosure MC_SMB_bufferSize = new_MethodClosure((Method)PMethod10850, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize, MC_SMB_bufferSize);
}


static void init_SMB_nextPutAllFlush_() {
    Symbol SMB_nextPutAllFlush_ = new_Symbol(L"nextPutAllFlush:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10853 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10854 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10860 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10859 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10860, (Optr)&t_block_return);
    Block PBlock10858 = new_Block_with(empty_Array, empty_Array, PThreadedCode10859, 1, PSend10860);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10863 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10862 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10863, (Optr)&t_block_return);
    Block PBlock10861 = new_Block_with(empty_Array, empty_Array, PThreadedCode10862, 1, PSend10863);
    // ifTrue:ifFalse:. 
    Send PSend10857 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10858, (Optr)PBlock10861);
    Assign PAssign10856 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10857);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10864 = new_Send((Optr)self, SMB_flush, 0);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend10865 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10871 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend10872 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)VAR_toPut_0_1, (Optr)PSend10871);
    Array PThreadedCode10870 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10871, (Optr)&t_send2, (Optr)PSend10872, (Optr)&t_block_return);
    Block PBlock10869 = new_Block_with(empty_Array, empty_Array, PThreadedCode10870, 1, PSend10872);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray10874 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode10878 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock10877 = new_Block_with(empty_Array, empty_Array, PThreadedCode10878, 0);
    // ifFalse:. 
    Send PSend10876 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock10877);
    Array PThreadedCode10875 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend10876, (Optr)PBlock10877, (Optr)&t_method_return);
    Block PBlock10873 = new_Block_with(PArray10874, empty_Array, PThreadedCode10875, 1, PSend10876);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10879 = new_Send((Optr)PBlock10869, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock10873);
    Array PThreadedCode10868 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock10869, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock10873, (Optr)&t_send2, (Optr)PSend10879, (Optr)&t_block_return);
    Block PBlock10867 = new_Block_with(empty_Array, empty_Array, PThreadedCode10868, 1, PSend10879);
    // ifFalse:. 
    Send PSend10866 = new_Send((Optr)PSend10865, SMB_ifFalse_, 1, (Optr)PBlock10867);
    Array PThreadedCode10855 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign10856, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10857, (Optr)PBlock10858, (Optr)PBlock10861, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10864, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10865, (Optr)&t_send_ifFalse_, (Optr)PSend10866, (Optr)PBlock10867, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10852 = new_Method_with(PArray10853, PArray10854, empty_Array, PThreadedCode10855, 4, PAssign10856, PSend10864, PSend10866, self);
    
    MethodClosure MC_SMB_nextPutAllFlush_ = new_MethodClosure((Method)PMethod10852, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAllFlush_, MC_SMB_nextPutAllFlush_);
}


static void init_SMB_outBufferSize() {
    Symbol SMB_outBufferSize = new_Symbol(L"outBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10882 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10881 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10882, (Optr)&t_method_return);
    Method PMethod10880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10881, 1, PSend10882);
    
    MethodClosure MC_SMB_outBufferSize = new_MethodClosure((Method)PMethod10880, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_outBufferSize, MC_SMB_outBufferSize);
}


static void init_SMB_sendCommand_() {
    Symbol SMB_sendCommand_ = new_Symbol(L"sendCommand:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10884 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray10887 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10889 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10890 = new_Send((Optr)VAR_aString_0_0, SMB__append_, 1, (Optr)PSend10889);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10891 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)PSend10890);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10892 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Array PThreadedCode10888 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10889, (Optr)&t_send1, (Optr)PSend10890, (Optr)&t_send1, (Optr)PSend10891, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend10892, (Optr)&t_method_return);
    Block PBlock10886 = new_Block_with(PArray10887, empty_Array, PThreadedCode10888, 2, PSend10891, PSend10892);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10893 = new_Send((Optr)PBlock10886, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10885 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock10886, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10893, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10883 = new_Method_with(PArray10884, empty_Array, empty_Array, PThreadedCode10885, 2, PSend10893, self);
    
    MethodClosure MC_SMB_sendCommand_ = new_MethodClosure((Method)PMethod10883, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_sendCommand_, MC_SMB_sendCommand_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10896 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10899 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10900 = new_Send((Optr)PSend10899, SMB_not, 0);
    Array PThreadedCode10898 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10899, (Optr)&t_send0, (Optr)PSend10900, (Optr)&t_block_return);
    Block PBlock10897 = new_Block_with(empty_Array, empty_Array, PThreadedCode10898, 1, PSend10900);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10901 = new_Send((Optr)PSend10896, SMB_and_, 1, (Optr)PBlock10897);
    Array PThreadedCode10895 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10896, (Optr)&t_push_closure, (Optr)PBlock10897, (Optr)&t_send1, (Optr)PSend10901, (Optr)&t_method_return);
    Method PMethod10894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10895, 1, PSend10901);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod10894, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_checkFlush() {
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10906 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Array PThreadedCode10905 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend10906, (Optr)&t_block_return);
    Block PBlock10904 = new_Block_with(empty_Array, empty_Array, PThreadedCode10905, 1, PSend10906);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10907 = new_Send((Optr)slot_IO_SocketStream_autoFlush, SMB_and_, 1, (Optr)PBlock10904);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10911 = new_Send((Optr)self, SMB_flush, 0);
    Array PThreadedCode10910 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10911, (Optr)&t_block_return);
    Block PBlock10909 = new_Block_with(empty_Array, empty_Array, PThreadedCode10910, 1, PSend10911);
    // ifTrue:. 
    Send PSend10908 = new_Send((Optr)PSend10907, SMB_ifTrue_, 1, (Optr)PBlock10909);
    Array PThreadedCode10903 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_push_closure, (Optr)PBlock10904, (Optr)&t_send1, (Optr)PSend10907, (Optr)&t_send_ifTrue_, (Optr)PSend10908, (Optr)PBlock10909, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10903, 2, PSend10908, self);
    
    MethodClosure MC_SMB_checkFlush = new_MethodClosure((Method)PMethod10902, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_checkFlush, MC_SMB_checkFlush);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10913 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10914 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10916 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10918 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10917 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10918);
    // +. 
    Send PSend10921 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10922 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10920 = new_Send((Optr)PSend10921, SMB_min_, 1, (Optr)PSend10922);
    Assign PAssign10919 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10920);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10923 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10915 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10916, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10917, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10918, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10919, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10921, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10922, (Optr)&t_send1, (Optr)PSend10920, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend10923, (Optr)&t_method_return);
    Method PMethod10912 = new_Method_with(PArray10913, PArray10914, empty_Array, PThreadedCode10915, 4, PSend10916, PAssign10917, PAssign10919, PSend10923);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod10912, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_socket() {
    Symbol SMB_socket = new_Symbol(L"socket");
    Array PThreadedCode10925 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_method_return);
    Method PMethod10924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10925, 1, slot_IO_SocketStream_socket);
    
    MethodClosure MC_SMB_socket = new_MethodClosure((Method)PMethod10924, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket, MC_SMB_socket);
}


static void init_SMB_adjustInBuffer_() {
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    Variable VAR_bytesRead_0_0 = new_Variable_named(L"bytesRead", 0);
    Array PArray10927 = new_Array_with(1, (Optr)VAR_bytesRead_0_0);
    Variable VAR_old_0_1 = new_Variable_named(L"old", 0);
    Array PArray10928 = new_Array_with(1, (Optr)VAR_old_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10931 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10933 = new_String(L"SocketStream>>adjustInBuffer:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10933_Const = new_Constant((Optr)string_10933);
    // warn:. 
    Send PSend10934 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10933_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10935 = new_Send((Optr)VAR_bytesRead_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10939 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10938 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10939, (Optr)&t_block_return);
    Block PBlock10937 = new_Block_with(empty_Array, empty_Array, PThreadedCode10938, 1, PSend10939);
    // ifTrue:. 
    Send PSend10936 = new_Send((Optr)PSend10935, SMB_ifTrue_, 1, (Optr)PBlock10937);
    Assign PAssign10940 = new_Assign((Optr)VAR_old_0_1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10942 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__plus_, 1, (Optr)VAR_bytesRead_0_0);
    Assign PAssign10941 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10942);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10943 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10944 = new_Send((Optr)PSend10943, SMB__minus_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10945 = new_Send((Optr)PSend10944, SMB__lt_, 1, (Optr)int_1024_Const);
    SmallInt int_512 = new_SmallInt(512);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_512_Const = new_Constant((Optr)int_512);
    // >. 
    Send PSend10949 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__gt_, 1, (Optr)int_512_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    // moveInBufferDown. 
    Send PSend10953 = new_Send((Optr)self, SMB_moveInBufferDown, 0);
    // -. 
    Send PSend10954 = new_Send((Optr)VAR_old_0_1, SMB__minus_, 1, (Optr)PSend10953);
    // escape:. 
    Send PSend10955 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10954);
    Array PThreadedCode10952 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10953, (Optr)&t_send1, (Optr)PSend10954, (Optr)&t_send1, (Optr)PSend10955, (Optr)&t_block_return);
    Block PBlock10951 = new_Block_with(empty_Array, empty_Array, PThreadedCode10952, 1, PSend10955);
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    // growInBuffer. 
    Send PSend10958 = new_Send((Optr)self, SMB_growInBuffer, 0);
    Array PThreadedCode10957 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10958, (Optr)&t_block_return);
    Block PBlock10956 = new_Block_with(empty_Array, empty_Array, PThreadedCode10957, 1, PSend10958);
    // ifTrue:ifFalse:. 
    Send PSend10950 = new_Send((Optr)PSend10949, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10951, (Optr)PBlock10956);
    Array PThreadedCode10948 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push1, (Optr)int_512, (Optr)&t_send1, (Optr)PSend10949, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10950, (Optr)PBlock10951, (Optr)PBlock10956, (Optr)&t_block_return);
    Block PBlock10947 = new_Block_with(empty_Array, empty_Array, PThreadedCode10948, 1, PSend10950);
    // ifTrue:. 
    Send PSend10946 = new_Send((Optr)PSend10945, SMB_ifTrue_, 1, (Optr)PBlock10947);
    Array PThreadedCode10932 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10933, (Optr)&t_send1, (Optr)PSend10934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10935, (Optr)&t_send_ifTrue_, (Optr)PSend10936, (Optr)PBlock10937, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10940, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10941, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_send1, (Optr)PSend10942, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10943, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10944, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10945, (Optr)&t_send_ifTrue_, (Optr)PSend10946, (Optr)PBlock10947, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_method_return);
    Block PBlock10930 = new_Block_with(PArray10931, empty_Array, PThreadedCode10932, 6, PSend10934, PSend10936, PAssign10940, PAssign10941, PSend10946, VAR_old_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10959 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10930);
    Array PThreadedCode10929 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10930, (Optr)&t_send1, (Optr)PSend10959, (Optr)&t_method_return);
    Method PMethod10926 = new_Method_with(PArray10927, PArray10928, empty_Array, PThreadedCode10929, 1, PSend10959);
    
    MethodClosure MC_SMB_adjustInBuffer_ = new_MethodClosure((Method)PMethod10926, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustInBuffer_, MC_SMB_adjustInBuffer_);
}


static void init_SMB_ifStale_() {
    Symbol SMB_ifStale_ = new_Symbol(L"ifStale:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray10961 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10963 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend10967 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode10966 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend10967, (Optr)&t_block_return);
    Block PBlock10965 = new_Block_with(empty_Array, empty_Array, PThreadedCode10966, 1, PSend10967);
    // ifFalse:. 
    Send PSend10964 = new_Send((Optr)PSend10963, SMB_ifFalse_, 1, (Optr)PBlock10965);
    Array PThreadedCode10962 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10963, (Optr)&t_send_ifFalse_, (Optr)PSend10964, (Optr)PBlock10965, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10960 = new_Method_with(PArray10961, empty_Array, empty_Array, PThreadedCode10962, 2, PSend10964, self);
    
    MethodClosure MC_SMB_ifStale_ = new_MethodClosure((Method)PMethod10960, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ifStale_, MC_SMB_ifStale_);
}


static void init_SMB_nextAvailable() {
    Symbol SMB_nextAvailable = new_Symbol(L"nextAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10971 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10973 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10977 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10978 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10977);
    Array PThreadedCode10976 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10977, (Optr)&t_send1, (Optr)PSend10978, (Optr)&t_block_return);
    Block PBlock10975 = new_Block_with(empty_Array, empty_Array, PThreadedCode10976, 1, PSend10978);
    // ifFalse:. 
    Send PSend10974 = new_Send((Optr)PSend10973, SMB_ifFalse_, 1, (Optr)PBlock10975);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10979 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10983 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10982 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10983, (Optr)&t_block_return);
    Block PBlock10981 = new_Block_with(empty_Array, empty_Array, PThreadedCode10982, 1, PSend10983);
    // ifTrue:. 
    Send PSend10980 = new_Send((Optr)PSend10979, SMB_ifTrue_, 1, (Optr)PBlock10981);
    // nextAllInBuffer. 
    Send PSend10984 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode10972 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10973, (Optr)&t_send_ifFalse_, (Optr)PSend10974, (Optr)PBlock10975, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10979, (Optr)&t_send_ifTrue_, (Optr)PSend10980, (Optr)PBlock10981, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10984, (Optr)&t_method_return);
    Block PBlock10970 = new_Block_with(PArray10971, empty_Array, PThreadedCode10972, 3, PSend10974, PSend10980, PSend10984);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10985 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10970);
    Array PThreadedCode10969 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10970, (Optr)&t_send1, (Optr)PSend10985, (Optr)&t_method_return);
    Method PMethod10968 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10969, 1, PSend10985);
    
    MethodClosure MC_SMB_nextAvailable = new_MethodClosure((Method)PMethod10968, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable, MC_SMB_nextAvailable);
}


static void init_SMB_resizeInBuffer_() {
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    Variable VAR_newSize_0_0 = new_Variable_named(L"newSize", 0);
    Array PArray10987 = new_Array_with(1, (Optr)VAR_newSize_0_0);
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend10991 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)VAR_newSize_0_0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10992 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10990 = new_Send((Optr)PSend10991, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10992, (Optr)slot_IO_SocketStream_inBuffer, (Optr)int_1_Const);
    Assign PAssign10989 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend10990);
    Array PThreadedCode10988 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign10989, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newSize_0_0, (Optr)&t_send1, (Optr)PSend10991, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10992, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10990, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10986 = new_Method_with(PArray10987, empty_Array, empty_Array, PThreadedCode10988, 2, PAssign10989, self);
    
    MethodClosure MC_SMB_resizeInBuffer_ = new_MethodClosure((Method)PMethod10986, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resizeInBuffer_, MC_SMB_resizeInBuffer_);
}


static void init_SMB_bufferSize_() {
    Symbol SMB_bufferSize_ = new_Symbol(L"bufferSize:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray10994 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign10996 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)VAR_anInt_0_0);
    Array PThreadedCode10995 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10996, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10993 = new_Method_with(PArray10994, empty_Array, empty_Array, PThreadedCode10995, 2, PAssign10996, self);
    
    MethodClosure MC_SMB_bufferSize_ = new_MethodClosure((Method)PMethod10993, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize_, MC_SMB_bufferSize_);
}


static void init_SMB_isDataAvailable() {
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11000 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11002 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11006 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode11005 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11006, (Optr)&t_block_return);
    Block PBlock11004 = new_Block_with(empty_Array, empty_Array, PThreadedCode11005, 1, PSend11006);
    // ifFalse:. 
    Send PSend11003 = new_Send((Optr)PSend11002, SMB_ifFalse_, 1, (Optr)PBlock11004);
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    // dataAvailable. 
    Send PSend11007 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_dataAvailable, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Array PThreadedCode11010 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock11009 = new_Block_with(empty_Array, empty_Array, PThreadedCode11010, 1, false_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11014 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend11016 = new_Send((Optr)VAR__receiver__2_0, SMB_receiveDataIfAvailable, 0);
    // isDataAvailable. 
    Send PSend11017 = new_Send((Optr)VAR__receiver__2_0, SMB_isDataAvailable, 0);
    Array PThreadedCode11015 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11016, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11017, (Optr)&t_method_return);
    Block PBlock11013 = new_Block_with(PArray11014, empty_Array, PThreadedCode11015, 2, PSend11016, PSend11017);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11018 = new_Send((Optr)PBlock11013, SMB_value_, 1, (Optr)self);
    Array PThreadedCode11012 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock11013, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend11018, (Optr)&t_block_return);
    Block PBlock11011 = new_Block_with(empty_Array, empty_Array, PThreadedCode11012, 1, PSend11018);
    // ifFalse:ifTrue:. 
    Send PSend11008 = new_Send((Optr)PSend11007, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11009, (Optr)PBlock11011);
    Array PThreadedCode11001 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11002, (Optr)&t_send_ifFalse_, (Optr)PSend11003, (Optr)PBlock11004, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11007, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11008, (Optr)PBlock11009, (Optr)PBlock11011, (Optr)&t_method_return);
    Block PBlock10999 = new_Block_with(PArray11000, empty_Array, PThreadedCode11001, 2, PSend11003, PSend11008);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11019 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10999);
    Array PThreadedCode10998 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10999, (Optr)&t_send1, (Optr)PSend11019, (Optr)&t_method_return);
    Method PMethod10997 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10998, 1, PSend11019);
    
    MethodClosure MC_SMB_isDataAvailable = new_MethodClosure((Method)PMethod10997, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isDataAvailable, MC_SMB_isDataAvailable);
}


static void init_SMB_adjustOutBuffer_() {
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    Variable VAR_bytesToWrite_0_0 = new_Variable_named(L"bytesToWrite", 0);
    Array PArray11021 = new_Array_with(1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11023 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11024 = new_Send((Optr)PSend11023, SMB__minus_, 1, (Optr)slot_IO_SocketStream_outNextToWrite);
    // -. 
    Send PSend11025 = new_Send((Optr)PSend11024, SMB__minus_, 1, (Optr)VAR_bytesToWrite_0_0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend11026 = new_Send((Optr)PSend11025, SMB__lt_, 1, (Optr)int_1024_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // size. 
    Send PSend11035 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend11034 = new_Send((Optr)PSend11035, SMB_max_, 1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend11033 = new_Send((Optr)PSend11034, SMB__times_, 1, (Optr)int_2_Const);
    // streamBuffer:. 
    Send PSend11032 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)PSend11033);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // size. 
    Send PSend11036 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // replaceFrom:to:with:startingAt:. 
    Send PSend11031 = new_Send((Optr)PSend11032, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend11036, (Optr)slot_IO_SocketStream_outBuffer, (Optr)int_1_Const);
    Assign PAssign11030 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11031);
    Array PThreadedCode11029 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11030, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11035, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend11034, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend11033, (Optr)&t_send1, (Optr)PSend11032, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11036, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend11031, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11028 = new_Block_with(empty_Array, empty_Array, PThreadedCode11029, 1, PAssign11030);
    // ifTrue:. 
    Send PSend11027 = new_Send((Optr)PSend11026, SMB_ifTrue_, 1, (Optr)PBlock11028);
    Array PThreadedCode11022 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11023, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_send1, (Optr)PSend11024, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend11025, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11026, (Optr)&t_send_ifTrue_, (Optr)PSend11027, (Optr)PBlock11028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11020 = new_Method_with(PArray11021, empty_Array, empty_Array, PThreadedCode11022, 2, PSend11027, self);
    
    MethodClosure MC_SMB_adjustOutBuffer_ = new_MethodClosure((Method)PMethod11020, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustOutBuffer_, MC_SMB_adjustOutBuffer_);
}


static void init_SMB_nextAllInBuffer() {
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11039 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11040 = new_Send((Optr)PSend11039, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend11041 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11040);
    Array PThreadedCode11038 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11039, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11040, (Optr)&t_send1, (Optr)PSend11041, (Optr)&t_method_return);
    Method PMethod11037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11038, 1, PSend11041);
    
    MethodClosure MC_SMB_nextAllInBuffer = new_MethodClosure((Method)PMethod11037, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAllInBuffer, MC_SMB_nextAllInBuffer);
}


static void init_SMB_skip_() {
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11043 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11045 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11048 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11049 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11047 = new_Send((Optr)PSend11048, SMB_min_, 1, (Optr)PSend11049);
    Assign PAssign11046 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11047);
    Array PThreadedCode11044 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11045, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11046, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11048, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11049, (Optr)&t_send1, (Optr)PSend11047, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11042 = new_Method_with(PArray11043, empty_Array, empty_Array, PThreadedCode11044, 3, PSend11045, PAssign11046, self);
    
    MethodClosure MC_SMB_skip_ = new_MethodClosure((Method)PMethod11042, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_skip_, MC_SMB_skip_);
}


static void init_SMB_nextAvailable_() {
    Symbol SMB_nextAvailable_ = new_Symbol(L"nextAvailable:");
    Variable VAR_howMany_0_0 = new_Variable_named(L"howMany", 0);
    Array PArray11051 = new_Array_with(1, (Optr)VAR_howMany_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11054 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11056 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend11060 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11061 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11060);
    Array PThreadedCode11059 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend11060, (Optr)&t_send1, (Optr)PSend11061, (Optr)&t_block_return);
    Block PBlock11058 = new_Block_with(empty_Array, empty_Array, PThreadedCode11059, 1, PSend11061);
    // ifFalse:. 
    Send PSend11057 = new_Send((Optr)PSend11056, SMB_ifFalse_, 1, (Optr)PBlock11058);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11062 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11066 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11065 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11066, (Optr)&t_block_return);
    Block PBlock11064 = new_Block_with(empty_Array, empty_Array, PThreadedCode11065, 1, PSend11066);
    // ifTrue:. 
    Send PSend11063 = new_Send((Optr)PSend11062, SMB_ifTrue_, 1, (Optr)PBlock11064);
    // nextInBuffer:. 
    Send PSend11067 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Array PThreadedCode11055 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11056, (Optr)&t_send_ifFalse_, (Optr)PSend11057, (Optr)PBlock11058, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11062, (Optr)&t_send_ifTrue_, (Optr)PSend11063, (Optr)PBlock11064, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend11067, (Optr)&t_method_return);
    Block PBlock11053 = new_Block_with(PArray11054, empty_Array, PThreadedCode11055, 3, PSend11057, PSend11063, PSend11067);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11068 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11053);
    Array PThreadedCode11052 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11053, (Optr)&t_send1, (Optr)PSend11068, (Optr)&t_method_return);
    Method PMethod11050 = new_Method_with(PArray11051, empty_Array, empty_Array, PThreadedCode11052, 1, PSend11068);
    
    MethodClosure MC_SMB_nextAvailable_ = new_MethodClosure((Method)PMethod11050, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable_, MC_SMB_nextAvailable_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend11071 = new_Send((Optr)self, SMB_flush, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // closeAndDestroy:. 
    Send PSend11072 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_closeAndDestroy_, 1, (Optr)int_30_Const);
    Array PThreadedCode11070 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11071, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend11072, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11069 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11070, 3, PSend11071, PSend11072, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod11069, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_inBufferSize() {
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11075 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11076 = new_Send((Optr)PSend11075, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode11074 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11075, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11076, (Optr)&t_method_return);
    Method PMethod11073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11074, 1, PSend11076);
    
    MethodClosure MC_SMB_inBufferSize = new_MethodClosure((Method)PMethod11073, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_inBufferSize, MC_SMB_inBufferSize);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11078 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11080 = new_Send((Optr)VAR_anObject_0_0, SMB_printOn_, 1, (Optr)self);
    Array PThreadedCode11079 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend11080, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11077 = new_Method_with(PArray11078, empty_Array, empty_Array, PThreadedCode11079, 2, PSend11080, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod11077, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11084 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11086 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11090 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode11089 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend11090, (Optr)&t_block_return);
    Block PBlock11088 = new_Block_with(empty_Array, empty_Array, PThreadedCode11089, 1, PSend11090);
    // ifTrue:. 
    Send PSend11087 = new_Send((Optr)PSend11086, SMB_ifTrue_, 1, (Optr)PBlock11088);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11091 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11095 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend11096 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend11100 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode11099 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend11100, (Optr)&t_block_return);
    Block PBlock11098 = new_Block_with(empty_Array, empty_Array, PThreadedCode11099, 1, PSend11100);
    // ifTrue:. 
    Send PSend11097 = new_Send((Optr)PSend11096, SMB_ifTrue_, 1, (Optr)PBlock11098);
    Array PThreadedCode11094 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11095, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11096, (Optr)&t_send_ifTrue_, (Optr)PSend11097, (Optr)PBlock11098, (Optr)&t_block_return);
    Block PBlock11093 = new_Block_with(empty_Array, empty_Array, PThreadedCode11094, 2, PSend11095, PSend11097);
    // ifTrue:. 
    Send PSend11092 = new_Send((Optr)PSend11091, SMB_ifTrue_, 1, (Optr)PBlock11093);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11102 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11101 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11102);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11103 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11085 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11086, (Optr)&t_send_ifTrue_, (Optr)PSend11087, (Optr)PBlock11088, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11091, (Optr)&t_send_ifTrue_, (Optr)PSend11092, (Optr)PBlock11093, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11101, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11102, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11103, (Optr)&t_method_return);
    Block PBlock11083 = new_Block_with(PArray11084, empty_Array, PThreadedCode11085, 4, PSend11087, PSend11092, PAssign11101, PSend11103);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11104 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11083);
    Array PThreadedCode11082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11083, (Optr)&t_send1, (Optr)PSend11104, (Optr)&t_method_return);
    Method PMethod11081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11082, 1, PSend11104);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod11081, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    // standardTimeout. 
    Send PSend11110 = new_Send((Optr)PSocket_classReference, SMB_standardTimeout, 0);
    Assign PAssign11109 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)PSend11110);
    Array PThreadedCode11108 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11109, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11110, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11107 = new_Block_with(empty_Array, empty_Array, PThreadedCode11108, 1, PAssign11109);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend11111 = new_Send((Optr)slot_IO_SocketStream_timeout, SMB_ifNil_, 1, (Optr)PBlock11107);
    Array PThreadedCode11106 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_closure, (Optr)PBlock11107, (Optr)&t_send1, (Optr)PSend11111, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_method_return);
    Method PMethod11105 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11106, 2, PSend11111, slot_IO_SocketStream_timeout);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod11105, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_upToAll_() {
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Variable VAR_aStringOrByteArray_0_0 = new_Variable_named(L"aStringOrByteArray", 0);
    Array PArray11113 = new_Array_with(1, (Optr)VAR_aStringOrByteArray_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_sz_0_2 = new_Variable_named(L"sz", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_4 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_5 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11114 = new_Array_with(5, (Optr)VAR_index_0_1, (Optr)VAR_sz_0_2, (Optr)VAR_result_0_3, (Optr)VAR_lastRecentlyRead_0_4, (Optr)VAR_searchedSoFar_0_5);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11117 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11119 = new_String(L"SocketStream>>upToAll:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11119_Const = new_Constant((Optr)string_11119);
    // warn:. 
    Send PSend11120 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11119_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11122 = new_Send((Optr)VAR_aStringOrByteArray_0_0, SMB_size, 0);
    Assign PAssign11121 = new_Assign((Optr)VAR_sz_0_2, (Optr)PSend11122);
    String string_11123 = new_String(L"SocketStream>>upToAll: sz is ");
    Constant string_11123_Const = new_Constant((Optr)string_11123);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11124 = new_Send((Optr)string_11123_Const, SMB__append_, 1, (Optr)VAR_sz_0_2);
    // warn:. 
    Send PSend11125 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11124);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11126 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)int_0_Const);
    Assign PAssign11127 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)int_0_Const);
    Assign PAssign11128 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    String string_11129 = new_String(L"SocketStream>>upToAll: temps initialized");
    Constant string_11129_Const = new_Constant((Optr)string_11129);
    // warn:. 
    Send PSend11130 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11129_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11133 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11134 = new_Send((Optr)PSend11133, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11137 = new_Send((Optr)VAR_lastRecentlyRead_0_4, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11140 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11141 = new_Send((Optr)PSend11140, SMB_not, 0);
    Array PThreadedCode11139 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11140, (Optr)&t_send0, (Optr)PSend11141, (Optr)&t_block_return);
    Block PBlock11138 = new_Block_with(empty_Array, empty_Array, PThreadedCode11139, 1, PSend11141);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11142 = new_Send((Optr)PSend11137, SMB_and_, 1, (Optr)PBlock11138);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11145 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11146 = new_Send((Optr)PSend11145, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11144 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11145, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11146, (Optr)&t_block_return);
    Block PBlock11143 = new_Block_with(empty_Array, empty_Array, PThreadedCode11144, 1, PSend11146);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11147 = new_Send((Optr)PSend11142, SMB_or_, 1, (Optr)PBlock11143);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_11151 = new_String(L"SocketStream>>upToAll: we need to read data");
    Constant string_11151_Const = new_Constant((Optr)string_11151);
    // warn:. 
    Send PSend11152 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11151_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11156 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_5);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11155 = new_Send((Optr)PSend11156, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOfSubCollection:startingAt:. 
    Send PSend11154 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_aStringOrByteArray_0_0, (Optr)PSend11155);
    Assign PAssign11153 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11154);
    String string_11157 = new_String(L"SocketStream>>upToAll: searched for a bit.");
    Constant string_11157_Const = new_Constant((Optr)string_11157);
    // warn:. 
    Send PSend11158 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11157_Const);
    // inBufferSize. 
    Send PSend11160 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11159 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)PSend11160);
    String string_11161 = new_String(L"SocketStream>>upToAll: this far we searched until");
    Constant string_11161_Const = new_Constant((Optr)string_11161);
    // warn:. 
    Send PSend11162 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11161_Const);
    // warn:. 
    Send PSend11163 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_searchedSoFar_0_5);
    // >. 
    Send PSend11164 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11167 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)VAR_sz_0_2);
    // >. 
    Send PSend11168 = new_Send((Optr)PSend11167, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11166 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11167, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11168, (Optr)&t_block_return);
    Block PBlock11165 = new_Block_with(empty_Array, empty_Array, PThreadedCode11166, 1, PSend11168);
    // and:. 
    Send PSend11169 = new_Send((Optr)PSend11164, SMB_and_, 1, (Optr)PBlock11165);
    Assign PAssign11173 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11172 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11173, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11171 = new_Block_with(empty_Array, empty_Array, PThreadedCode11172, 1, PAssign11173);
    // ifTrue:. 
    Send PSend11170 = new_Send((Optr)PSend11169, SMB_ifTrue_, 1, (Optr)PBlock11171);
    Array PThreadedCode11150 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11151, (Optr)&t_send1, (Optr)PSend11152, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11153, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend11156, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11155, (Optr)&t_send2, (Optr)PSend11154, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11157, (Optr)&t_send1, (Optr)PSend11158, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11159, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11160, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11161, (Optr)&t_send1, (Optr)PSend11162, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend11163, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11164, (Optr)&t_push_closure, (Optr)PBlock11165, (Optr)&t_send1, (Optr)PSend11169, (Optr)&t_send_ifTrue_, (Optr)PSend11170, (Optr)PBlock11171, (Optr)&t_block_return);
    Block PBlock11149 = new_Block_with(empty_Array, empty_Array, PThreadedCode11150, 7, PSend11152, PAssign11153, PSend11158, PAssign11159, PSend11162, PSend11163, PSend11170);
    // ifTrue:. 
    Send PSend11148 = new_Send((Optr)PSend11147, SMB_ifTrue_, 1, (Optr)PBlock11149);
    // =. 
    Send PSend11174 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11136 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_4, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11137, (Optr)&t_push_closure, (Optr)PBlock11138, (Optr)&t_send1, (Optr)PSend11142, (Optr)&t_push_closure, (Optr)PBlock11143, (Optr)&t_send1, (Optr)PSend11147, (Optr)&t_send_ifTrue_, (Optr)PSend11148, (Optr)PBlock11149, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11174, (Optr)&t_block_return);
    Block PBlock11135 = new_Block_with(empty_Array, empty_Array, PThreadedCode11136, 2, PSend11148, PSend11174);
    // and:. 
    Send PSend11175 = new_Send((Optr)PSend11134, SMB_and_, 1, (Optr)PBlock11135);
    Array PThreadedCode11132 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11133, (Optr)&t_send0, (Optr)PSend11134, (Optr)&t_push_closure, (Optr)PBlock11135, (Optr)&t_send1, (Optr)PSend11175, (Optr)&t_block_return);
    Block PBlock11131 = new_Block_with(empty_Array, empty_Array, PThreadedCode11132, 1, PSend11175);
    // =. 
    Send PSend11178 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11182 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11181 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11182, (Optr)&t_block_return);
    Block PBlock11180 = new_Block_with(empty_Array, empty_Array, PThreadedCode11181, 1, PSend11182);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11185 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11184 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11185, (Optr)&t_block_return);
    Block PBlock11183 = new_Block_with(empty_Array, empty_Array, PThreadedCode11184, 1, PSend11185);
    // ifTrue:ifFalse:. 
    Send PSend11179 = new_Send((Optr)PSend11178, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11180, (Optr)PBlock11183);
    Assign PAssign11186 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11177 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11178, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11179, (Optr)PBlock11180, (Optr)PBlock11183, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11186, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11176 = new_Block_with(empty_Array, empty_Array, PThreadedCode11177, 2, PSend11179, PAssign11186);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11187 = new_Send((Optr)PBlock11131, SMB_whileTrue_, 1, (Optr)PBlock11176);
    // >. 
    Send PSend11188 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11195 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11194 = new_Send((Optr)PSend11195, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11193 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11194);
    Assign PAssign11192 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend11193);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11196 = new_Send((Optr)self, SMB_skip_, 1, (Optr)VAR_sz_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11197 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_3);
    Array PThreadedCode11191 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign11192, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11195, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11194, (Optr)&t_send1, (Optr)PSend11193, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11196, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_send1, (Optr)PSend11197, (Optr)&t_block_return);
    Block PBlock11190 = new_Block_with(empty_Array, empty_Array, PThreadedCode11191, 3, PAssign11192, PSend11196, PSend11197);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11200 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11201 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11200);
    Array PThreadedCode11199 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11200, (Optr)&t_send1, (Optr)PSend11201, (Optr)&t_block_return);
    Block PBlock11198 = new_Block_with(empty_Array, empty_Array, PThreadedCode11199, 1, PSend11201);
    // ifTrue:ifFalse:. 
    Send PSend11189 = new_Send((Optr)PSend11188, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11190, (Optr)PBlock11198);
    Array PThreadedCode11118 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11119, (Optr)&t_send1, (Optr)PSend11120, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11121, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_send0, (Optr)PSend11122, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11123, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11124, (Optr)&t_send1, (Optr)PSend11125, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11126, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11127, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11128, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11129, (Optr)&t_send1, (Optr)PSend11130, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11131, (Optr)&t_push_closure, (Optr)PBlock11176, (Optr)&t_send1, (Optr)PSend11187, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11188, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11189, (Optr)PBlock11190, (Optr)PBlock11198, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11116 = new_Block_with(PArray11117, empty_Array, PThreadedCode11118, 10, PSend11120, PAssign11121, PSend11125, PAssign11126, PAssign11127, PAssign11128, PSend11130, PSend11187, PSend11189, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11202 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11116);
    Array PThreadedCode11115 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11116, (Optr)&t_send1, (Optr)PSend11202, (Optr)&t_method_return);
    Method PMethod11112 = new_Method_with(PArray11113, PArray11114, empty_Array, PThreadedCode11115, 1, PSend11202);
    
    MethodClosure MC_SMB_upToAll_ = new_MethodClosure((Method)PMethod11112, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToAll_, MC_SMB_upToAll_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray11204 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend11206 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode11205 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend11206, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11203 = new_Method_with(PArray11204, empty_Array, empty_Array, PThreadedCode11205, 2, PSend11206, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod11203, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_growInBuffer() {
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11209 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend11210 = new_Send((Optr)PSend11209, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    // resizeInBuffer:. 
    Send PSend11211 = new_Send((Optr)self, SMB_resizeInBuffer_, 1, (Optr)PSend11210);
    Array PThreadedCode11208 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11209, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend11210, (Optr)&t_send1, (Optr)PSend11211, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11208, 2, PSend11211, self);
    
    MethodClosure MC_SMB_growInBuffer = new_MethodClosure((Method)PMethod11207, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_growInBuffer, MC_SMB_growInBuffer);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11213 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11215 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11216 = new_Send((Optr)PSend11215, SMB_name, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11217 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend11216);
    String string_11220 = new_String(L"[inbuf:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11221 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // /. 
    Send PSend11222 = new_Send((Optr)PSend11221, SMB__divide_, 1, (Optr)int_1024_Const);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend11223 = new_Send((Optr)PSend11222, SMB_rounded, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11224 = new_Send((Optr)PSend11223, SMB_asString, 0);
    Constant string_11220_Const = new_Constant((Optr)string_11220);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11225 = new_Send((Optr)string_11220_Const, SMB__append_, 1, (Optr)PSend11224);
    String string_11226 = new_String(L"kb/outbuf:");
    Constant string_11226_Const = new_Constant((Optr)string_11226);
    // ,. 
    Send PSend11227 = new_Send((Optr)PSend11225, SMB__append_, 1, (Optr)string_11226_Const);
    // size. 
    Send PSend11228 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // /. 
    Send PSend11229 = new_Send((Optr)PSend11228, SMB__divide_, 1, (Optr)int_1024_Const);
    // rounded. 
    Send PSend11230 = new_Send((Optr)PSend11229, SMB_rounded, 0);
    // asString. 
    Send PSend11231 = new_Send((Optr)PSend11230, SMB_asString, 0);
    // ,. 
    Send PSend11232 = new_Send((Optr)PSend11227, SMB__append_, 1, (Optr)PSend11231);
    String string_11233 = new_String(L"kb]");
    Constant string_11233_Const = new_Constant((Optr)string_11233);
    // ,. 
    Send PSend11234 = new_Send((Optr)PSend11232, SMB__append_, 1, (Optr)string_11233_Const);
    // nextPutAll:. 
    Send PSend11235 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend11234);
    Array PThreadedCode11219 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11220, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11221, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11222, (Optr)&t_send0, (Optr)PSend11223, (Optr)&t_send0, (Optr)PSend11224, (Optr)&t_send1, (Optr)PSend11225, (Optr)&t_push1, (Optr)string_11226, (Optr)&t_send1, (Optr)PSend11227, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11228, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11229, (Optr)&t_send0, (Optr)PSend11230, (Optr)&t_send0, (Optr)PSend11231, (Optr)&t_send1, (Optr)PSend11232, (Optr)&t_push1, (Optr)string_11233, (Optr)&t_send1, (Optr)PSend11234, (Optr)&t_send1, (Optr)PSend11235, (Optr)&t_block_return);
    Block PBlock11218 = new_Block_with(empty_Array, empty_Array, PThreadedCode11219, 1, PSend11235);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend11236 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_ifNotNil_, 1, (Optr)PBlock11218);
    Array PThreadedCode11214 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11215, (Optr)&t_send0, (Optr)PSend11216, (Optr)&t_send1, (Optr)PSend11217, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_closure, (Optr)PBlock11218, (Optr)&t_send1, (Optr)PSend11236, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11212 = new_Method_with(PArray11213, empty_Array, empty_Array, PThreadedCode11214, 3, PSend11217, PSend11236, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod11212, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_autoFlush() {
    Symbol SMB_autoFlush = new_Symbol(L"autoFlush");
    Array PThreadedCode11238 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_method_return);
    Method PMethod11237 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11238, 1, slot_IO_SocketStream_autoFlush);
    
    MethodClosure MC_SMB_autoFlush = new_MethodClosure((Method)PMethod11237, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush, MC_SMB_autoFlush);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11240 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11241 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend11247 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode11246 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11247, (Optr)&t_block_return);
    Block PBlock11245 = new_Block_with(empty_Array, empty_Array, PThreadedCode11246, 1, PSend11247);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11250 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode11249 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11250, (Optr)&t_block_return);
    Block PBlock11248 = new_Block_with(empty_Array, empty_Array, PThreadedCode11249, 1, PSend11250);
    // ifTrue:ifFalse:. 
    Send PSend11244 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11245, (Optr)PBlock11248);
    Assign PAssign11243 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11244);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11251 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    // adjustOutBuffer:. 
    Send PSend11252 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)PSend11251);
    // size. 
    Send PSend11253 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11254 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11253);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11255 = new_Send((Optr)PSend11254, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11256 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11255, (Optr)VAR_toPut_0_1, (Optr)int_1_Const);
    // size. 
    Send PSend11259 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    // +. 
    Send PSend11258 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11259);
    Assign PAssign11257 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11258);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11260 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11242 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign11243, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11244, (Optr)PBlock11245, (Optr)PBlock11248, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11251, (Optr)&t_send1, (Optr)PSend11252, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11253, (Optr)&t_send1, (Optr)PSend11254, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11255, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend11256, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11257, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11259, (Optr)&t_send1, (Optr)PSend11258, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11260, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11239 = new_Method_with(PArray11240, PArray11241, empty_Array, PThreadedCode11242, 6, PAssign11243, PSend11252, PSend11256, PAssign11257, PSend11260, self);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod11239, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_receiveDataIfAvailable() {
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    // receiveSomeDataInto:startingAt:. 
    Send PSend11264 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveSomeDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign11263 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend11264);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend11265 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11262 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign11263, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend11264, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend11265, (Optr)&t_method_return);
    Method PMethod11261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11262, 2, PAssign11263, PSend11265);
    
    MethodClosure MC_SMB_receiveDataIfAvailable = new_MethodClosure((Method)PMethod11261, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveDataIfAvailable, MC_SMB_receiveDataIfAvailable);
}


static void init_SMB_isInBufferEmpty() {
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    String string_11268 = new_String(L"SocketStream>>isInBufferEmpty:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11268_Const = new_Constant((Optr)string_11268);
    // warn:. 
    Send PSend11269 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11268_Const);
    String string_11270 = new_String(L"-Last Read:");
    Constant string_11270_Const = new_Constant((Optr)string_11270);
    // warn:. 
    Send PSend11271 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11270_Const);
    // warn:. 
    Send PSend11272 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    String string_11273 = new_String(L"-Index Next To Write:");
    Constant string_11273_Const = new_Constant((Optr)string_11273);
    // warn:. 
    Send PSend11274 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11273_Const);
    // warn:. 
    Send PSend11275 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11276 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11277 = new_Send((Optr)PSend11276, SMB__equals_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11267 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11268, (Optr)&t_send1, (Optr)PSend11269, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11270, (Optr)&t_send1, (Optr)PSend11271, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11272, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11273, (Optr)&t_send1, (Optr)PSend11274, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11275, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11276, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11277, (Optr)&t_method_return);
    Method PMethod11266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11267, 6, PSend11269, PSend11271, PSend11272, PSend11274, PSend11275, PSend11277);
    
    MethodClosure MC_SMB_isInBufferEmpty = new_MethodClosure((Method)PMethod11266, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isInBufferEmpty, MC_SMB_isInBufferEmpty);
}


static void init_SMB_peek_() {
    Symbol SMB_peek_ = new_Symbol(L"peek:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11279 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray11280 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11282 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11284 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11283 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11284);
    // +. 
    Send PSend11285 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11286 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend11287 = new_Send((Optr)PSend11285, SMB_min_, 1, (Optr)PSend11286);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11288 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend11287);
    Array PThreadedCode11281 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11282, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11283, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11285, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11286, (Optr)&t_send1, (Optr)PSend11287, (Optr)&t_send2, (Optr)PSend11288, (Optr)&t_method_return);
    Method PMethod11278 = new_Method_with(PArray11279, PArray11280, empty_Array, PThreadedCode11281, 3, PSend11282, PAssign11283, PSend11288);
    
    MethodClosure MC_SMB_peek_ = new_MethodClosure((Method)PMethod11278, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek_, MC_SMB_peek_);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11291 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11292 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend11291);
    Array PThreadedCode11290 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11291, (Optr)&t_send1, (Optr)PSend11292, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11289 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11290, 2, PSend11292, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod11289, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_moveInBufferDown() {
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    Variable VAR_sz_0_0 = new_Variable_named(L"sz", 0);
    Variable VAR_distanceMoved_0_1 = new_Variable_named(L"distanceMoved", 0);
    Array PArray11294 = new_Array_with(2, (Optr)VAR_sz_0_0, (Optr)VAR_distanceMoved_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11298 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11297 = new_Send((Optr)PSend11298, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign11296 = new_Assign((Optr)VAR_sz_0_0, (Optr)PSend11297);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11299 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11300 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_sz_0_0, (Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11299);
    Assign PAssign11301 = new_Assign((Optr)VAR_distanceMoved_0_1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11302 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    // +. 
    Send PSend11304 = new_Send((Optr)VAR_sz_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11303 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend11304);
    Array PThreadedCode11295 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign11296, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11298, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11297, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11299, (Optr)&t_send4, (Optr)PSend11300, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11301, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11302, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11303, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_distanceMoved_0_1, (Optr)&t_method_return);
    Method PMethod11293 = new_Method_with(empty_Array, PArray11294, empty_Array, PThreadedCode11295, 6, PAssign11296, PSend11300, PAssign11301, PAssign11302, PAssign11303, VAR_distanceMoved_0_1);
    
    MethodClosure MC_SMB_moveInBufferDown = new_MethodClosure((Method)PMethod11293, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_moveInBufferDown, MC_SMB_moveInBufferDown);
}


static void init_SMB_nextLineLf() {
    Symbol SMB_nextLineLf = new_Symbol(L"nextLineLf");
    Variable VAR_nextLine_0_0 = new_Variable_named(L"nextLine", 0);
    Array PArray11306 = new_Array_with(1, (Optr)VAR_nextLine_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend11310 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // upToAll:. 
    Send PSend11309 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend11310);
    Assign PAssign11308 = new_Assign((Optr)VAR_nextLine_0_0, (Optr)PSend11309);
    Array PThreadedCode11307 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11308, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11310, (Optr)&t_send1, (Optr)PSend11309, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_0, (Optr)&t_method_return);
    Method PMethod11305 = new_Method_with(empty_Array, PArray11306, empty_Array, PThreadedCode11307, 2, PAssign11308, VAR_nextLine_0_0);
    
    MethodClosure MC_SMB_nextLineLf = new_MethodClosure((Method)PMethod11305, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineLf, MC_SMB_nextLineLf);
}


static void init_SMB_nextInBuffer_() {
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11312 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_amount_0_2 = new_Variable_named(L"amount", 0);
    Array PArray11313 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_amount_0_2);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11318 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11317 = new_Send((Optr)PSend11318, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11316 = new_Send((Optr)VAR_anInteger_0_0, SMB_min_, 1, (Optr)PSend11317);
    Assign PAssign11315 = new_Assign((Optr)VAR_amount_0_2, (Optr)PSend11316);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11320 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11319 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11320);
    // +. 
    Send PSend11322 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_amount_0_2);
    Assign PAssign11321 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11322);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11323 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11314 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign11315, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11318, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11317, (Optr)&t_send1, (Optr)PSend11316, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11319, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11320, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11321, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_amount_0_2, (Optr)&t_send1, (Optr)PSend11322, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend11323, (Optr)&t_method_return);
    Method PMethod11311 = new_Method_with(PArray11312, PArray11313, empty_Array, PThreadedCode11314, 4, PAssign11315, PAssign11319, PAssign11321, PSend11323);
    
    MethodClosure MC_SMB_nextInBuffer_ = new_MethodClosure((Method)PMethod11311, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextInBuffer_, MC_SMB_nextInBuffer_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11327 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11329 = new_String(L"SocketStream>>atEnd");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11329_Const = new_Constant((Optr)string_11329);
    // warn:. 
    Send PSend11330 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11329_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11331 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11335 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode11334 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11335, (Optr)&t_block_return);
    Block PBlock11333 = new_Block_with(empty_Array, empty_Array, PThreadedCode11334, 1, PSend11335);
    // ifFalse:. 
    Send PSend11332 = new_Send((Optr)PSend11331, SMB_ifFalse_, 1, (Optr)PBlock11333);
    String string_11336 = new_String(L"SocketStream>>atEnd: Buffer is Empty");
    Constant string_11336_Const = new_Constant((Optr)string_11336);
    // warn:. 
    Send PSend11337 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11336_Const);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend11338 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11339 = new_Send((Optr)PSend11338, SMB_not, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11342 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    // not. 
    Send PSend11343 = new_Send((Optr)PSend11342, SMB_not, 0);
    Array PThreadedCode11341 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11342, (Optr)&t_send0, (Optr)PSend11343, (Optr)&t_block_return);
    Block PBlock11340 = new_Block_with(empty_Array, empty_Array, PThreadedCode11341, 1, PSend11343);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11344 = new_Send((Optr)PSend11339, SMB_and_, 1, (Optr)PBlock11340);
    Array PThreadedCode11328 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11329, (Optr)&t_send1, (Optr)PSend11330, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11331, (Optr)&t_send_ifFalse_, (Optr)PSend11332, (Optr)PBlock11333, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11336, (Optr)&t_send1, (Optr)PSend11337, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11338, (Optr)&t_send0, (Optr)PSend11339, (Optr)&t_push_closure, (Optr)PBlock11340, (Optr)&t_send1, (Optr)PSend11344, (Optr)&t_method_return);
    Block PBlock11326 = new_Block_with(PArray11327, empty_Array, PThreadedCode11328, 4, PSend11330, PSend11332, PSend11337, PSend11344);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11345 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11326);
    Array PThreadedCode11325 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11326, (Optr)&t_send1, (Optr)PSend11345, (Optr)&t_method_return);
    Method PMethod11324 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11325, 1, PSend11345);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod11324, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray11347 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11348 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend11354 = new_Send((Optr)VAR_char_0_0, SMB_asInteger, 0);
    Array PThreadedCode11353 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11354, (Optr)&t_block_return);
    Block PBlock11352 = new_Block_with(empty_Array, empty_Array, PThreadedCode11353, 1, PSend11354);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend11357 = new_Send((Optr)VAR_char_0_0, SMB_asCharacter, 0);
    Array PThreadedCode11356 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11357, (Optr)&t_block_return);
    Block PBlock11355 = new_Block_with(empty_Array, empty_Array, PThreadedCode11356, 1, PSend11357);
    // ifTrue:ifFalse:. 
    Send PSend11351 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11352, (Optr)PBlock11355);
    Assign PAssign11350 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11351);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // adjustOutBuffer:. 
    Send PSend11358 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend11359 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_at_put_, 2, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)VAR_toPut_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11361 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11360 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11361);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11362 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11349 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign11350, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11351, (Optr)PBlock11352, (Optr)PBlock11355, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11358, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send2, (Optr)PSend11359, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11360, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11361, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_method_return);
    Method PMethod11346 = new_Method_with(PArray11347, PArray11348, empty_Array, PThreadedCode11349, 6, PAssign11350, PSend11358, PSend11359, PAssign11360, PSend11362, VAR_char_0_0);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod11346, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    String string_11365 = new_String(L"SocketStream>>isConnected");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11365_Const = new_Constant((Optr)string_11365);
    // warn:. 
    Send PSend11366 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11365_Const);
    // isConnected. 
    Send PSend11367 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isConnected, 0);
    Array PThreadedCode11364 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11365, (Optr)&t_send1, (Optr)PSend11366, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11367, (Optr)&t_method_return);
    Method PMethod11363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11364, 2, PSend11366, PSend11367);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod11363, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend11370 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend11371 = new_Send((Optr)self, SMB_nextPut_, 1, (Optr)PSend11370);
    Array PThreadedCode11369 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend11370, (Optr)&t_send1, (Optr)PSend11371, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11368 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11369, 2, PSend11371, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod11368, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend11374 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11377 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11378 = new_Send((Optr)PSend11377, SMB_not, 0);
    Array PThreadedCode11376 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11377, (Optr)&t_send0, (Optr)PSend11378, (Optr)&t_block_return);
    Block PBlock11375 = new_Block_with(empty_Array, empty_Array, PThreadedCode11376, 1, PSend11378);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11379 = new_Send((Optr)PSend11374, SMB_and_, 1, (Optr)PBlock11375);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11385 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend11386 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11385);
    Array PThreadedCode11384 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11385, (Optr)&t_send2, (Optr)PSend11386, (Optr)&t_block_return);
    Block PBlock11383 = new_Block_with(empty_Array, empty_Array, PThreadedCode11384, 1, PSend11386);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11388 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Array PThreadedCode11392 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11391 = new_Block_with(empty_Array, empty_Array, PThreadedCode11392, 0);
    // ifFalse:. 
    Send PSend11390 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock11391);
    Array PThreadedCode11389 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend11390, (Optr)PBlock11391, (Optr)&t_method_return);
    Block PBlock11387 = new_Block_with(PArray11388, empty_Array, PThreadedCode11389, 1, PSend11390);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11393 = new_Send((Optr)PBlock11383, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock11387);
    Assign PAssign11394 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11382 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11383, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock11387, (Optr)&t_send2, (Optr)PSend11393, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11394, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11381 = new_Block_with(empty_Array, empty_Array, PThreadedCode11382, 2, PSend11393, PAssign11394);
    // ifTrue:. 
    Send PSend11380 = new_Send((Optr)PSend11379, SMB_ifTrue_, 1, (Optr)PBlock11381);
    Array PThreadedCode11373 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11374, (Optr)&t_push_closure, (Optr)PBlock11375, (Optr)&t_send1, (Optr)PSend11379, (Optr)&t_send_ifTrue_, (Optr)PSend11380, (Optr)PBlock11381, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11372 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11373, 2, PSend11380, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod11372, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_isOtherEndConnected() {
    Symbol SMB_isOtherEndConnected = new_Symbol(L"isOtherEndConnected");
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11397 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11398 = new_Send((Optr)PSend11397, SMB_not, 0);
    Array PThreadedCode11396 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11397, (Optr)&t_send0, (Optr)PSend11398, (Optr)&t_method_return);
    Method PMethod11395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11396, 1, PSend11398);
    
    MethodClosure MC_SMB_isOtherEndConnected = new_MethodClosure((Method)PMethod11395, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isOtherEndConnected, MC_SMB_isOtherEndConnected);
}


static void init_SMB_resetBuffers() {
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11402 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11401 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11402);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11403 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign11404 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)int_1_Const);
    // streamBuffer:. 
    Send PSend11406 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11405 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11406);
    Assign PAssign11407 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11400 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign11401, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11402, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11403, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11404, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11405, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11406, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11407, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11399 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11400, 6, PAssign11401, PAssign11403, PAssign11404, PAssign11405, PAssign11407, self);
    
    MethodClosure MC_SMB_resetBuffers = new_MethodClosure((Method)PMethod11399, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resetBuffers, MC_SMB_resetBuffers);
}


static void init_SMB_debug() {
    Symbol SMB_debug = new_Symbol(L"debug");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Array PArray11409 = new_Array_with(1, (Optr)VAR_data_0_0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11412 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11411 = new_Assign((Optr)VAR_data_0_0, (Optr)PSend11412);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11414 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11417 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_11419 = new_String(L"Buffer size: ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11420 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11421 = new_Send((Optr)PSend11420, SMB_asString, 0);
    Constant string_11419_Const = new_Constant((Optr)string_11419);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11422 = new_Send((Optr)string_11419_Const, SMB__append_, 1, (Optr)PSend11421);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11423 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11422);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11424 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11425 = new_String(L"InBuffer data size: ");
    // asString. 
    Send PSend11426 = new_Send((Optr)VAR_data_0_0, SMB_asString, 0);
    Constant string_11425_Const = new_Constant((Optr)string_11425);
    // ,. 
    Send PSend11427 = new_Send((Optr)string_11425_Const, SMB__append_, 1, (Optr)PSend11426);
    // nextPutAll:. 
    Send PSend11428 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11427);
    // cr. 
    Send PSend11429 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11430 = new_String(L"In data (20):");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11431 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend11432 = new_Send((Optr)VAR_data_0_0, SMB_min_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend11433 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)PSend11432);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11434 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)PSend11431, (Optr)PSend11433);
    Constant string_11430_Const = new_Constant((Optr)string_11430);
    // ,. 
    Send PSend11435 = new_Send((Optr)string_11430_Const, SMB__append_, 1, (Optr)PSend11434);
    // nextPutAll:. 
    Send PSend11436 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11435);
    // cr. 
    Send PSend11437 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11438 = new_String(L"OutBuffer data size: ");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11439 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // asString. 
    Send PSend11440 = new_Send((Optr)PSend11439, SMB_asString, 0);
    Constant string_11438_Const = new_Constant((Optr)string_11438);
    // ,. 
    Send PSend11441 = new_Send((Optr)string_11438_Const, SMB__append_, 1, (Optr)PSend11440);
    // nextPutAll:. 
    Send PSend11442 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11441);
    // cr. 
    Send PSend11443 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11444 = new_String(L"Out data (20):");
    // -. 
    Send PSend11445 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11446 = new_Send((Optr)PSend11445, SMB_min_, 1, (Optr)int_20_Const);
    // copyFrom:to:. 
    Send PSend11447 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend11446);
    Constant string_11444_Const = new_Constant((Optr)string_11444);
    // ,. 
    Send PSend11448 = new_Send((Optr)string_11444_Const, SMB__append_, 1, (Optr)PSend11447);
    // nextPutAll:. 
    Send PSend11449 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11448);
    // cr. 
    Send PSend11450 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11418 = instantiate_Array_with(ThreadedCode_Class, 0, 120, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11419, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11420, (Optr)&t_send0, (Optr)PSend11421, (Optr)&t_send1, (Optr)PSend11422, (Optr)&t_send1, (Optr)PSend11423, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11425, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send0, (Optr)PSend11426, (Optr)&t_send1, (Optr)PSend11427, (Optr)&t_send1, (Optr)PSend11428, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11430, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11431, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11432, (Optr)&t_send1, (Optr)PSend11433, (Optr)&t_send2, (Optr)PSend11434, (Optr)&t_send1, (Optr)PSend11435, (Optr)&t_send1, (Optr)PSend11436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11437, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11438, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11439, (Optr)&t_send0, (Optr)PSend11440, (Optr)&t_send1, (Optr)PSend11441, (Optr)&t_send1, (Optr)PSend11442, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11443, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11444, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11445, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11446, (Optr)&t_send2, (Optr)PSend11447, (Optr)&t_send1, (Optr)PSend11448, (Optr)&t_send1, (Optr)PSend11449, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11450, (Optr)&t_method_return);
    Block PBlock11416 = new_Block_with(PArray11417, empty_Array, PThreadedCode11418, 10, PSend11423, PSend11424, PSend11428, PSend11429, PSend11436, PSend11437, PSend11442, PSend11443, PSend11449, PSend11450);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11451 = new_Send((Optr)PBlock11416, SMB_value_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11415 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11416, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11451, (Optr)&t_method_return);
    Block PBlock11413 = new_Block_with(PArray11414, empty_Array, PThreadedCode11415, 1, PSend11451);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend11452 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock11413);
    Array PThreadedCode11410 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11411, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11412, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock11413, (Optr)&t_send1, (Optr)PSend11452, (Optr)&t_method_return);
    Method PMethod11408 = new_Method_with(empty_Array, PArray11409, empty_Array, PThreadedCode11410, 2, PAssign11411, PSend11452);
    
    MethodClosure MC_SMB_debug = new_MethodClosure((Method)PMethod11408, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_debug, MC_SMB_debug);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray11454 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_3 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_4 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11455 = new_Array_with(4, (Optr)VAR_index_0_1, (Optr)VAR_result_0_2, (Optr)VAR_lastRecentlyRead_0_3, (Optr)VAR_searchedSoFar_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11458 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11460 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)int_0_Const);
    Assign PAssign11461 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)int_0_Const);
    Assign PAssign11462 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11465 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11466 = new_Send((Optr)PSend11465, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11469 = new_Send((Optr)VAR_lastRecentlyRead_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11472 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11473 = new_Send((Optr)PSend11472, SMB_not, 0);
    Array PThreadedCode11471 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11472, (Optr)&t_send0, (Optr)PSend11473, (Optr)&t_block_return);
    Block PBlock11470 = new_Block_with(empty_Array, empty_Array, PThreadedCode11471, 1, PSend11473);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11474 = new_Send((Optr)PSend11469, SMB_and_, 1, (Optr)PBlock11470);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11477 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11478 = new_Send((Optr)PSend11477, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11476 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11477, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11478, (Optr)&t_block_return);
    Block PBlock11475 = new_Block_with(empty_Array, empty_Array, PThreadedCode11476, 1, PSend11478);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11479 = new_Send((Optr)PSend11474, SMB_or_, 1, (Optr)PBlock11475);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11486 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11485 = new_Send((Optr)PSend11486, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOf:startingAt:. 
    Send PSend11484 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOf_startingAt_, 2, (Optr)VAR_aCharacterOrByte_0_0, (Optr)PSend11485);
    Assign PAssign11483 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11484);
    // inBufferSize. 
    Send PSend11488 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11487 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)PSend11488);
    // >. 
    Send PSend11489 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11492 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // >. 
    Send PSend11493 = new_Send((Optr)PSend11492, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11491 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11492, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11493, (Optr)&t_block_return);
    Block PBlock11490 = new_Block_with(empty_Array, empty_Array, PThreadedCode11491, 1, PSend11493);
    // and:. 
    Send PSend11494 = new_Send((Optr)PSend11489, SMB_and_, 1, (Optr)PBlock11490);
    Assign PAssign11498 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11497 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11498, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11496 = new_Block_with(empty_Array, empty_Array, PThreadedCode11497, 1, PAssign11498);
    // ifTrue:. 
    Send PSend11495 = new_Send((Optr)PSend11494, SMB_ifTrue_, 1, (Optr)PBlock11496);
    Array PThreadedCode11482 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11483, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_4, (Optr)&t_send1, (Optr)PSend11486, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11485, (Optr)&t_send2, (Optr)PSend11484, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11487, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11488, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11489, (Optr)&t_push_closure, (Optr)PBlock11490, (Optr)&t_send1, (Optr)PSend11494, (Optr)&t_send_ifTrue_, (Optr)PSend11495, (Optr)PBlock11496, (Optr)&t_block_return);
    Block PBlock11481 = new_Block_with(empty_Array, empty_Array, PThreadedCode11482, 3, PAssign11483, PAssign11487, PSend11495);
    // ifTrue:. 
    Send PSend11480 = new_Send((Optr)PSend11479, SMB_ifTrue_, 1, (Optr)PBlock11481);
    // =. 
    Send PSend11499 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11468 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11469, (Optr)&t_push_closure, (Optr)PBlock11470, (Optr)&t_send1, (Optr)PSend11474, (Optr)&t_push_closure, (Optr)PBlock11475, (Optr)&t_send1, (Optr)PSend11479, (Optr)&t_send_ifTrue_, (Optr)PSend11480, (Optr)PBlock11481, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11499, (Optr)&t_block_return);
    Block PBlock11467 = new_Block_with(empty_Array, empty_Array, PThreadedCode11468, 2, PSend11480, PSend11499);
    // and:. 
    Send PSend11500 = new_Send((Optr)PSend11466, SMB_and_, 1, (Optr)PBlock11467);
    Array PThreadedCode11464 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11465, (Optr)&t_send0, (Optr)PSend11466, (Optr)&t_push_closure, (Optr)PBlock11467, (Optr)&t_send1, (Optr)PSend11500, (Optr)&t_block_return);
    Block PBlock11463 = new_Block_with(empty_Array, empty_Array, PThreadedCode11464, 1, PSend11500);
    String string_11503 = new_String(L"Buffer: ");
    Constant string_11503_Const = new_Constant((Optr)string_11503);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11504 = new_Send((Optr)string_11503_Const, SMB__append_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend11505 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11504);
    // =. 
    Send PSend11506 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11510 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11509 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11510, (Optr)&t_block_return);
    Block PBlock11508 = new_Block_with(empty_Array, empty_Array, PThreadedCode11509, 1, PSend11510);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11513 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11512 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11513, (Optr)&t_block_return);
    Block PBlock11511 = new_Block_with(empty_Array, empty_Array, PThreadedCode11512, 1, PSend11513);
    // ifTrue:ifFalse:. 
    Send PSend11507 = new_Send((Optr)PSend11506, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11508, (Optr)PBlock11511);
    Assign PAssign11514 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11502 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11503, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend11504, (Optr)&t_send1, (Optr)PSend11505, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11506, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11507, (Optr)PBlock11508, (Optr)PBlock11511, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11514, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11501 = new_Block_with(empty_Array, empty_Array, PThreadedCode11502, 3, PSend11505, PSend11507, PAssign11514);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11515 = new_Send((Optr)PBlock11463, SMB_whileTrue_, 1, (Optr)PBlock11501);
    // >. 
    Send PSend11516 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11523 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11522 = new_Send((Optr)PSend11523, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11521 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11522);
    Assign PAssign11520 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend11521);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11524 = new_Send((Optr)self, SMB_skip_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11525 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode11519 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11520, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11523, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11522, (Optr)&t_send1, (Optr)PSend11521, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11524, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend11525, (Optr)&t_block_return);
    Block PBlock11518 = new_Block_with(empty_Array, empty_Array, PThreadedCode11519, 3, PAssign11520, PSend11524, PSend11525);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11528 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11529 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11528);
    Array PThreadedCode11527 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11528, (Optr)&t_send1, (Optr)PSend11529, (Optr)&t_block_return);
    Block PBlock11526 = new_Block_with(empty_Array, empty_Array, PThreadedCode11527, 1, PSend11529);
    // ifTrue:ifFalse:. 
    Send PSend11517 = new_Send((Optr)PSend11516, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11518, (Optr)PBlock11526);
    Array PThreadedCode11459 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11460, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11461, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11462, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11463, (Optr)&t_push_closure, (Optr)PBlock11501, (Optr)&t_send1, (Optr)PSend11515, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11516, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11517, (Optr)PBlock11518, (Optr)PBlock11526, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11457 = new_Block_with(PArray11458, empty_Array, PThreadedCode11459, 6, PAssign11460, PAssign11461, PAssign11462, PSend11515, PSend11517, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11530 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11457);
    Array PThreadedCode11456 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11457, (Optr)&t_send1, (Optr)PSend11530, (Optr)&t_method_return);
    Method PMethod11453 = new_Method_with(PArray11454, PArray11455, empty_Array, PThreadedCode11456, 1, PSend11530);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod11453, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11537 = new_Send((Optr)self, SMB_atEnd, 0);
    Array PThreadedCode11536 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11537, (Optr)&t_block_return);
    Block PBlock11535 = new_Block_with(empty_Array, empty_Array, PThreadedCode11536, 1, PSend11537);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11540 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11539 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11540, (Optr)&t_block_return);
    Block PBlock11538 = new_Block_with(empty_Array, empty_Array, PThreadedCode11539, 1, PSend11540);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend11541 = new_Send((Optr)PBlock11535, SMB_whileFalse_, 1, (Optr)PBlock11538);
    Array PThreadedCode11534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11535, (Optr)&t_push_closure, (Optr)PBlock11538, (Optr)&t_send1, (Optr)PSend11541, (Optr)&t_block_return);
    Block PBlock11533 = new_Block_with(empty_Array, empty_Array, PThreadedCode11534, 1, PSend11541);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11543 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode11544 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock11542 = new_Block_with(PArray11543, empty_Array, PThreadedCode11544, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11545 = new_Send((Optr)PBlock11533, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock11542);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11546 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode11532 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock11533, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock11542, (Optr)&t_send2, (Optr)PSend11545, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11546, (Optr)&t_method_return);
    Method PMethod11531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11532, 2, PSend11545, PSend11546);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod11531, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_recentlyRead() {
    Symbol SMB_recentlyRead = new_Symbol(L"recentlyRead");
    Array PThreadedCode11548 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_method_return);
    Method PMethod11547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11548, 1, slot_IO_SocketStream_recentlyRead);
    
    MethodClosure MC_SMB_recentlyRead = new_MethodClosure((Method)PMethod11547, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_recentlyRead, MC_SMB_recentlyRead);
}


static void init_class_SMB_openConnectionToHostNamed_port_() {
    Symbol SMB_openConnectionToHostNamed_port_ = new_Symbol(L"openConnectionToHostNamed:port:");
    Variable VAR_hostName_0_0 = new_Variable_named(L"hostName", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11550 = new_Array_with(2, (Optr)VAR_hostName_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_hostIP_0_2 = new_Variable_named(L"hostIP", 0);
    Array PArray11551 = new_Array_with(1, (Optr)VAR_hostIP_0_2);
    Symbol SMB_addressForName_timeout_ = new_Symbol(L"addressForName:timeout:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // addressForName:timeout:. 
    Send PSend11554 = new_Send((Optr)NetNameResolver_classReference, SMB_addressForName_timeout_, 2, (Optr)VAR_hostName_0_0, (Optr)int_20_Const);
    Assign PAssign11553 = new_Assign((Optr)VAR_hostIP_0_2, (Optr)PSend11554);
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    // openConnectionToHost:port:. 
    Send PSend11555 = new_Send((Optr)self, SMB_openConnectionToHost_port_, 2, (Optr)VAR_hostIP_0_2, (Optr)VAR_portNumber_0_1);
    Array PThreadedCode11552 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign11553, (Optr)&t_push_class_reference, (Optr)NetNameResolver_classReference, (Optr)&t_push_variable, (Optr)VAR_hostName_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send2, (Optr)PSend11554, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_2, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11555, (Optr)&t_method_return);
    Method PMethod11549 = new_Method_with(PArray11550, PArray11551, empty_Array, PThreadedCode11552, 2, PAssign11553, PSend11555);
    
    MethodClosure MC_SMB_openConnectionToHostNamed_port_ = new_MethodClosure((Method)PMethod11549, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHostNamed_port_, MC_SMB_openConnectionToHostNamed_port_);
}


static void init_class_SMB_openConnectionToHost_port_() {
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    Variable VAR_hostIP_0_0 = new_Variable_named(L"hostIP", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11557 = new_Array_with(2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_socket_0_2 = new_Variable_named(L"socket", 0);
    Array PArray11558 = new_Array_with(1, (Optr)VAR_socket_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11561 = new_Send((Optr)PSocket_classReference, SMB_new, 0);
    Assign PAssign11560 = new_Assign((Optr)VAR_socket_0_2, (Optr)PSend11561);
    Symbol SMB_connectTo_port_ = new_Symbol(L"connectTo:port:");
    // connectTo:port:. 
    Send PSend11562 = new_Send((Optr)VAR_socket_0_2, SMB_connectTo_port_, 2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11563 = new_Send((Optr)self, SMB_on_, 1, (Optr)VAR_socket_0_2);
    Array PThreadedCode11559 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign11560, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11561, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_0, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11562, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_send1, (Optr)PSend11563, (Optr)&t_method_return);
    Method PMethod11556 = new_Method_with(PArray11557, PArray11558, empty_Array, PThreadedCode11559, 3, PAssign11560, PSend11562, PSend11563);
    
    MethodClosure MC_SMB_openConnectionToHost_port_ = new_MethodClosure((Method)PMethod11556, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHost_port_, MC_SMB_openConnectionToHost_port_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode11565 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod11564 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11565, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod11564, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_socket_0_0 = new_Variable_named(L"socket", 0);
    Array PArray11567 = new_Array_with(1, (Optr)VAR_socket_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11569 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    // socket:. 
    Send PSend11570 = new_Send((Optr)PSend11569, SMB_socket_, 1, (Optr)VAR_socket_0_0);
    Array PThreadedCode11568 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11569, (Optr)&t_push_variable, (Optr)VAR_socket_0_0, (Optr)&t_send1, (Optr)PSend11570, (Optr)&t_method_return);
    Method PMethod11566 = new_Method_with(PArray11567, empty_Array, empty_Array, PThreadedCode11568, 1, PSend11570);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod11566, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_on_, MC_SMB_on_);
}

void init_IO_PSocketStream_layout() {
    layout_IO_SocketStream_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_SocketStream_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_SocketStream_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_SocketStream_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_SocketStream_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_SocketStream_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SocketStream = new_Symbol(L"SocketStream");
    slot_IO_SocketStream_recentlyRead = (Optr)new_Slot(0, L"recentlyRead");
    slot_IO_SocketStream_socket = (Optr)new_Slot(1, L"socket");
    slot_IO_SocketStream_inBuffer = (Optr)new_Slot(2, L"inBuffer");
    slot_IO_SocketStream_outBuffer = (Optr)new_Slot(3, L"outBuffer");
    slot_IO_SocketStream_inNextToWrite = (Optr)new_Slot(4, L"inNextToWrite");
    slot_IO_SocketStream_outNextToWrite = (Optr)new_Slot(5, L"outNextToWrite");
    slot_IO_SocketStream_lastRead = (Optr)new_Slot(6, L"lastRead");
    slot_IO_SocketStream_timeout = (Optr)new_Slot(7, L"timeout");
    slot_IO_SocketStream_autoFlush = (Optr)new_Slot(8, L"autoFlush");
    slot_IO_SocketStream_bufferSize = (Optr)new_Slot(9, L"bufferSize");
    slot_IO_SocketStream_binary = (Optr)new_Slot(10, L"binary");
    slot_IO_SocketStream_shouldSignal = (Optr)new_Slot(11, L"shouldSignal");
    layout_IO_SocketStream = (Optr)create_layout_with_vars(ObjectLayout_Class, 12);
    ((Array)layout_IO_SocketStream)->values[0] = slot_IO_SocketStream_recentlyRead; // recentlyRead 
    ((Array)layout_IO_SocketStream)->values[1] = slot_IO_SocketStream_socket; // socket 
    ((Array)layout_IO_SocketStream)->values[2] = slot_IO_SocketStream_inBuffer; // inBuffer 
    ((Array)layout_IO_SocketStream)->values[3] = slot_IO_SocketStream_outBuffer; // outBuffer 
    ((Array)layout_IO_SocketStream)->values[4] = slot_IO_SocketStream_inNextToWrite; // inNextToWrite 
    ((Array)layout_IO_SocketStream)->values[5] = slot_IO_SocketStream_outNextToWrite; // outNextToWrite 
    ((Array)layout_IO_SocketStream)->values[6] = slot_IO_SocketStream_lastRead; // lastRead 
    ((Array)layout_IO_SocketStream)->values[7] = slot_IO_SocketStream_timeout; // timeout 
    ((Array)layout_IO_SocketStream)->values[8] = slot_IO_SocketStream_autoFlush; // autoFlush 
    ((Array)layout_IO_SocketStream)->values[9] = slot_IO_SocketStream_bufferSize; // bufferSize 
    ((Array)layout_IO_SocketStream)->values[10] = slot_IO_SocketStream_binary; // binary 
    ((Array)layout_IO_SocketStream)->values[11] = slot_IO_SocketStream_shouldSignal; // shouldSignal 
    IO_SocketStream_Class = (Class)new_Class(Object_Class, layout_IO_SocketStream_Class_class);
    IO_SocketStream_Class->layout = layout_IO_SocketStream;
    IO_SocketStream_Class->name = SMB_SocketStream;
    
}

void init_IO_PSocketStream_methods() {
    init_SMB_shouldSignal_();
    init_SMB_binary();
    init_SMB_nextLine();
    init_SMB_crlf();
    init_SMB_noTimeout();
    init_SMB_receiveData();
    init_SMB_isBinary();
    init_SMB_initialize();
    init_SMB_peekFor_();
    init_SMB_peekForAll_();
    init_SMB_receiveAvailableData();
    init_SMB_autoFlush_();
    init_SMB_nextLineCrLf();
    init_SMB_isStream();
    init_SMB_receiveData_();
    init_SMB_streamBuffer_();
    init_SMB_socket_();
    init_SMB_ascii();
    init_SMB_timeout_();
    init_SMB_shouldTimeout();
    init_SMB_peek();
    init_SMB_shouldSignal();
    init_SMB_bufferSize();
    init_SMB_nextPutAllFlush_();
    init_SMB_outBufferSize();
    init_SMB_sendCommand_();
    init_SMB_isEmpty();
    init_SMB_checkFlush();
    init_SMB_next_();
    init_SMB_socket();
    init_SMB_adjustInBuffer_();
    init_SMB_ifStale_();
    init_SMB_nextAvailable();
    init_SMB_resizeInBuffer_();
    init_SMB_bufferSize_();
    init_SMB_isDataAvailable();
    init_SMB_adjustOutBuffer_();
    init_SMB_nextAllInBuffer();
    init_SMB_skip_();
    init_SMB_nextAvailable_();
    init_SMB_close();
    init_SMB_inBufferSize();
    init_SMB_print_();
    init_SMB_next();
    init_SMB_timeout();
    init_SMB_upToAll_();
    init_SMB__shiftLeft_();
    init_SMB_growInBuffer();
    init_SMB_printOn_();
    init_SMB_autoFlush();
    init_SMB_nextPutAll_();
    init_SMB_receiveDataIfAvailable();
    init_SMB_isInBufferEmpty();
    init_SMB_peek_();
    init_SMB_cr();
    init_SMB_moveInBufferDown();
    init_SMB_nextLineLf();
    init_SMB_nextInBuffer_();
    init_SMB_atEnd();
    init_SMB_nextPut_();
    init_SMB_isConnected();
    init_SMB_space();
    init_SMB_flush();
    init_SMB_isOtherEndConnected();
    init_SMB_resetBuffers();
    init_SMB_debug();
    init_SMB_upTo_();
    init_SMB_upToEnd();
    init_SMB_recentlyRead();
    init_class_SMB_openConnectionToHostNamed_port_();
    init_class_SMB_openConnectionToHost_port_();
    init_class_SMB_test();
    init_class_SMB_on_();
    
}