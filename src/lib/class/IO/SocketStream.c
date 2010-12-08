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
    Array PArray10651 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10653 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10652 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10653, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10650 = new_Method_with(PArray10651, empty_Array, empty_Array, PThreadedCode10652, 2, PAssign10653, self);
    
    MethodClosure MC_SMB_shouldSignal_ = new_MethodClosure((Method)PMethod10650, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal_, MC_SMB_shouldSignal_);
}


static void init_SMB_binary() {
    Symbol SMB_binary = new_Symbol(L"binary");
    Assign PAssign10656 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)true_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10657 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10655 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10656, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10657, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10655, 3, PAssign10656, PSend10657, self);
    
    MethodClosure MC_SMB_binary = new_MethodClosure((Method)PMethod10654, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_binary, MC_SMB_binary);
}


static void init_SMB_nextLine() {
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    // nextLineCrLf. 
    Send PSend10660 = new_Send((Optr)self, SMB_nextLineCrLf, 0);
    Array PThreadedCode10659 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10660, (Optr)&t_method_return);
    Method PMethod10658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10659, 1, PSend10660);
    
    MethodClosure MC_SMB_nextLine = new_MethodClosure((Method)PMethod10658, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLine, MC_SMB_nextLine);
}


static void init_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10663 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10664 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10663);
    Array PThreadedCode10662 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10663, (Optr)&t_send1, (Optr)PSend10664, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10661 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10662, 2, PSend10664, self);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod10661, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_crlf, MC_SMB_crlf);
}


static void init_SMB_noTimeout() {
    Symbol SMB_noTimeout = new_Symbol(L"noTimeout");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10667 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)int_0_Const);
    Array PThreadedCode10666 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign10667, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10666, 2, PAssign10667, self);
    
    MethodClosure MC_SMB_noTimeout = new_MethodClosure((Method)PMethod10665, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_noTimeout, MC_SMB_noTimeout);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    String string_10670 = new_String(L"SocketStream>>receiveData");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10670_Const = new_Constant((Optr)string_10670);
    // warn:. 
    Send PSend10671 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10670_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_10676 = new_String(L"SocketStream>>receiveData: should signal");
    Constant string_10676_Const = new_Constant((Optr)string_10676);
    // warn:. 
    Send PSend10677 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10676_Const);
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    // shouldTimeout. 
    Send PSend10678 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10682 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10682_Const = new_Constant((Optr)string_10682);
    // warn:. 
    Send PSend10683 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10682_Const);
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    // receiveDataSignallingTimeout:into:startingAt:. 
    Send PSend10684 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10681 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10682, (Optr)&t_send1, (Optr)PSend10683, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10684, (Optr)&t_block_return);
    Block PBlock10680 = new_Block_with(empty_Array, empty_Array, PThreadedCode10681, 2, PSend10683, PSend10684);
    String string_10687 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10687_Const = new_Constant((Optr)string_10687);
    // warn:. 
    Send PSend10688 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10687_Const);
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    // receiveDataSignallingClosedInto:startingAt:. 
    Send PSend10689 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingClosedInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10686 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10687, (Optr)&t_send1, (Optr)PSend10688, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10689, (Optr)&t_block_return);
    Block PBlock10685 = new_Block_with(empty_Array, empty_Array, PThreadedCode10686, 2, PSend10688, PSend10689);
    // ifTrue:ifFalse:. 
    Send PSend10679 = new_Send((Optr)PSend10678, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10680, (Optr)PBlock10685);
    Array PThreadedCode10675 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10676, (Optr)&t_send1, (Optr)PSend10677, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10678, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10679, (Optr)PBlock10680, (Optr)PBlock10685, (Optr)&t_block_return);
    Block PBlock10674 = new_Block_with(empty_Array, empty_Array, PThreadedCode10675, 2, PSend10677, PSend10679);
    String string_10692 = new_String(L"SocketStream>>receiveData: should NOT signal");
    Constant string_10692_Const = new_Constant((Optr)string_10692);
    // warn:. 
    Send PSend10693 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10692_Const);
    // shouldTimeout. 
    Send PSend10694 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10698 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10698_Const = new_Constant((Optr)string_10698);
    // warn:. 
    Send PSend10699 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10698_Const);
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    // receiveDataTimeout:into:startingAt:. 
    Send PSend10700 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10697 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10698, (Optr)&t_send1, (Optr)PSend10699, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10700, (Optr)&t_block_return);
    Block PBlock10696 = new_Block_with(empty_Array, empty_Array, PThreadedCode10697, 2, PSend10699, PSend10700);
    String string_10703 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10703_Const = new_Constant((Optr)string_10703);
    // warn:. 
    Send PSend10704 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10703_Const);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10705 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10702 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10703, (Optr)&t_send1, (Optr)PSend10704, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10705, (Optr)&t_block_return);
    Block PBlock10701 = new_Block_with(empty_Array, empty_Array, PThreadedCode10702, 2, PSend10704, PSend10705);
    // ifTrue:ifFalse:. 
    Send PSend10695 = new_Send((Optr)PSend10694, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10696, (Optr)PBlock10701);
    Array PThreadedCode10691 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10692, (Optr)&t_send1, (Optr)PSend10693, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10694, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10695, (Optr)PBlock10696, (Optr)PBlock10701, (Optr)&t_block_return);
    Block PBlock10690 = new_Block_with(empty_Array, empty_Array, PThreadedCode10691, 2, PSend10693, PSend10695);
    // ifTrue:ifFalse:. 
    Send PSend10673 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10674, (Optr)PBlock10690);
    Assign PAssign10672 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10673);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10706 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10669 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10670, (Optr)&t_send1, (Optr)PSend10671, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10672, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10673, (Optr)PBlock10674, (Optr)PBlock10690, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10706, (Optr)&t_method_return);
    Method PMethod10668 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10669, 3, PSend10671, PAssign10672, PSend10706);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod10668, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_isBinary() {
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    Array PThreadedCode10708 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_method_return);
    Method PMethod10707 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10708, 1, slot_IO_SocketStream_binary);
    
    MethodClosure MC_SMB_isBinary = new_MethodClosure((Method)PMethod10707, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isBinary, MC_SMB_isBinary);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper10711 = new_Super(SMB_initialize, 0);
    Assign PAssign10712 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)true_Const);
    Assign PAssign10713 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)true_Const);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10714 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)int_0_Const);
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    Assign PAssign10715 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)int_4096_Const);
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend10716 = new_Send((Optr)self, SMB_ascii, 0);
    Array PThreadedCode10710 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper10711, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10712, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10713, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10714, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10715, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10716, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10709 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10710, 7, PSuper10711, PAssign10712, PAssign10713, PAssign10714, PAssign10715, PSend10716, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10709, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_peekFor_() {
    Symbol SMB_peekFor_ = new_Symbol(L"peekFor:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray10718 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_nextObject_0_1 = new_Variable_named(L"nextObject", 0);
    Array PArray10719 = new_Array_with(1, (Optr)VAR_nextObject_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10722 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10724 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10728 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10727 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10728, (Optr)&t_block_return);
    Block PBlock10726 = new_Block_with(empty_Array, empty_Array, PThreadedCode10727, 1, PSend10728);
    // ifTrue:. 
    Send PSend10725 = new_Send((Optr)PSend10724, SMB_ifTrue_, 1, (Optr)PBlock10726);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10729 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10733 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10734 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10738 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10737 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10738, (Optr)&t_block_return);
    Block PBlock10736 = new_Block_with(empty_Array, empty_Array, PThreadedCode10737, 1, PSend10738);
    // ifTrue:. 
    Send PSend10735 = new_Send((Optr)PSend10734, SMB_ifTrue_, 1, (Optr)PBlock10736);
    Array PThreadedCode10732 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10733, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10734, (Optr)&t_send_ifTrue_, (Optr)PSend10735, (Optr)PBlock10736, (Optr)&t_block_return);
    Block PBlock10731 = new_Block_with(empty_Array, empty_Array, PThreadedCode10732, 2, PSend10733, PSend10735);
    // ifTrue:. 
    Send PSend10730 = new_Send((Optr)PSend10729, SMB_ifTrue_, 1, (Optr)PBlock10731);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10740 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Assign PAssign10739 = new_Assign((Optr)VAR_nextObject_0_1, (Optr)PSend10740);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10741 = new_Send((Optr)VAR_nextObject_0_1, SMB__equals_, 1, (Optr)VAR_aCharacterOrByte_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10746 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10745 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10746);
    // escape:. 
    Send PSend10747 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10744 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10745, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10746, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10747, (Optr)&t_block_return);
    Block PBlock10743 = new_Block_with(empty_Array, empty_Array, PThreadedCode10744, 2, PAssign10745, PSend10747);
    // ifTrue:. 
    Send PSend10742 = new_Send((Optr)PSend10741, SMB_ifTrue_, 1, (Optr)PBlock10743);
    Array PThreadedCode10723 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10724, (Optr)&t_send_ifTrue_, (Optr)PSend10725, (Optr)PBlock10726, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10729, (Optr)&t_send_ifTrue_, (Optr)PSend10730, (Optr)PBlock10731, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10739, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_send1, (Optr)PSend10741, (Optr)&t_send_ifTrue_, (Optr)PSend10742, (Optr)PBlock10743, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock10721 = new_Block_with(PArray10722, empty_Array, PThreadedCode10723, 5, PSend10725, PSend10730, PAssign10739, PSend10742, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10748 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10721);
    Array PThreadedCode10720 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10721, (Optr)&t_send1, (Optr)PSend10748, (Optr)&t_method_return);
    Method PMethod10717 = new_Method_with(PArray10718, PArray10719, empty_Array, PThreadedCode10720, 1, PSend10748);
    
    MethodClosure MC_SMB_peekFor_ = new_MethodClosure((Method)PMethod10717, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekFor_, MC_SMB_peekFor_);
}


static void init_SMB_peekForAll_() {
    Symbol SMB_peekForAll_ = new_Symbol(L"peekForAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10750 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_sz_0_1 = new_Variable_named(L"sz", 0);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray10751 = new_Array_with(2, (Optr)VAR_sz_0_1, (Optr)VAR_start_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10754 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10757 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Assign PAssign10756 = new_Assign((Optr)VAR_sz_0_1, (Optr)PSend10757);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10758 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10759 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10760 = new_Send((Optr)PSend10759, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend10761 = new_Send((Optr)PSend10760, SMB__lt_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10765 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10764 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10765, (Optr)&t_block_return);
    Block PBlock10763 = new_Block_with(empty_Array, empty_Array, PThreadedCode10764, 1, PSend10765);
    // ifTrue:. 
    Send PSend10762 = new_Send((Optr)PSend10761, SMB_ifTrue_, 1, (Optr)PBlock10763);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10767 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10766 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend10767);
    Symbol SMB_findString_startingAt_ = new_Symbol(L"findString:startingAt:");
    // findString:startingAt:. 
    Send PSend10768 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_findString_startingAt_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_start_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10769 = new_Send((Optr)PSend10768, SMB__equals_, 1, (Optr)VAR_start_0_2);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend10773 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10772 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10773, (Optr)&t_block_return);
    Block PBlock10771 = new_Block_with(empty_Array, empty_Array, PThreadedCode10772, 1, PSend10773);
    // ifFalse:. 
    Send PSend10770 = new_Send((Optr)PSend10769, SMB_ifFalse_, 1, (Optr)PBlock10771);
    // +. 
    Send PSend10775 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_sz_0_1);
    Assign PAssign10774 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10775);
    Array PThreadedCode10755 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign10756, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend10757, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10758, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10759, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10760, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10761, (Optr)&t_send_ifTrue_, (Optr)PSend10762, (Optr)PBlock10763, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10766, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10767, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send2, (Optr)PSend10768, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send1, (Optr)PSend10769, (Optr)&t_send_ifFalse_, (Optr)PSend10770, (Optr)PBlock10771, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10774, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10775, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock10753 = new_Block_with(PArray10754, empty_Array, PThreadedCode10755, 7, PAssign10756, PSend10758, PSend10762, PAssign10766, PSend10770, PAssign10774, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10776 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10753);
    Array PThreadedCode10752 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10753, (Optr)&t_send1, (Optr)PSend10776, (Optr)&t_method_return);
    Method PMethod10749 = new_Method_with(PArray10750, PArray10751, empty_Array, PThreadedCode10752, 1, PSend10776);
    
    MethodClosure MC_SMB_peekForAll_ = new_MethodClosure((Method)PMethod10749, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekForAll_, MC_SMB_peekForAll_);
}


static void init_SMB_receiveAvailableData() {
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10780 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10779 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10780);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10781 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10778 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10779, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10780, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10781, (Optr)&t_method_return);
    Method PMethod10777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10778, 2, PAssign10779, PSend10781);
    
    MethodClosure MC_SMB_receiveAvailableData = new_MethodClosure((Method)PMethod10777, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveAvailableData, MC_SMB_receiveAvailableData);
}


static void init_SMB_autoFlush_() {
    Symbol SMB_autoFlush_ = new_Symbol(L"autoFlush:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10783 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10785 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10784 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10785, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10782 = new_Method_with(PArray10783, empty_Array, empty_Array, PThreadedCode10784, 2, PAssign10785, self);
    
    MethodClosure MC_SMB_autoFlush_ = new_MethodClosure((Method)PMethod10782, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush_, MC_SMB_autoFlush_);
}


static void init_SMB_nextLineCrLf() {
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10788 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend10789 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend10788);
    Array PThreadedCode10787 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10788, (Optr)&t_send1, (Optr)PSend10789, (Optr)&t_method_return);
    Method PMethod10786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10787, 1, PSend10789);
    
    MethodClosure MC_SMB_nextLineCrLf = new_MethodClosure((Method)PMethod10786, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineCrLf, MC_SMB_nextLineCrLf);
}


static void init_SMB_isStream() {
    Symbol SMB_isStream = new_Symbol(L"isStream");
    Array PThreadedCode10791 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod10790 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10791, 1, true_Const);
    
    MethodClosure MC_SMB_isStream = new_MethodClosure((Method)PMethod10790, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isStream, MC_SMB_isStream);
}


static void init_SMB_receiveData_() {
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    Variable VAR_nBytes_0_0 = new_Variable_named(L"nBytes", 0);
    Array PArray10793 = new_Array_with(1, (Optr)VAR_nBytes_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10797 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10798 = new_Send((Optr)PSend10797, SMB_not, 0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10801 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10802 = new_Send((Optr)VAR_nBytes_0_0, SMB__gt_, 1, (Optr)PSend10801);
    Array PThreadedCode10800 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_nBytes_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10801, (Optr)&t_send1, (Optr)PSend10802, (Optr)&t_block_return);
    Block PBlock10799 = new_Block_with(empty_Array, empty_Array, PThreadedCode10800, 1, PSend10802);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10803 = new_Send((Optr)PSend10798, SMB_and_, 1, (Optr)PBlock10799);
    Array PThreadedCode10796 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10797, (Optr)&t_send0, (Optr)PSend10798, (Optr)&t_push_closure, (Optr)PBlock10799, (Optr)&t_send1, (Optr)PSend10803, (Optr)&t_block_return);
    Block PBlock10795 = new_Block_with(empty_Array, empty_Array, PThreadedCode10796, 1, PSend10803);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10806 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10805 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10806, (Optr)&t_block_return);
    Block PBlock10804 = new_Block_with(empty_Array, empty_Array, PThreadedCode10805, 1, PSend10806);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10807 = new_Send((Optr)PBlock10795, SMB_whileTrue_, 1, (Optr)PBlock10804);
    Array PThreadedCode10794 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock10795, (Optr)&t_push_closure, (Optr)PBlock10804, (Optr)&t_send1, (Optr)PSend10807, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10792 = new_Method_with(PArray10793, empty_Array, empty_Array, PThreadedCode10794, 2, PSend10807, self);
    
    MethodClosure MC_SMB_receiveData_ = new_MethodClosure((Method)PMethod10792, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData_, MC_SMB_receiveData_);
}


static void init_SMB_streamBuffer_() {
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray10809 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend10811 = new_Send((Optr)self, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode10814 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ByteArray_classReference, (Optr)&t_block_return);
    Block PBlock10813 = new_Block_with(empty_Array, empty_Array, PThreadedCode10814, 1, ByteArray_classReference);
    Array PThreadedCode10816 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_block_return);
    Block PBlock10815 = new_Block_with(empty_Array, empty_Array, PThreadedCode10816, 1, String_classReference);
    // ifTrue:ifFalse:. 
    Send PSend10812 = new_Send((Optr)PSend10811, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10813, (Optr)PBlock10815);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend10817 = new_Send((Optr)PSend10812, SMB_new_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode10810 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10811, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10812, (Optr)PBlock10813, (Optr)PBlock10815, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend10817, (Optr)&t_method_return);
    Method PMethod10808 = new_Method_with(PArray10809, empty_Array, empty_Array, PThreadedCode10810, 1, PSend10817);
    
    MethodClosure MC_SMB_streamBuffer_ = new_MethodClosure((Method)PMethod10808, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_streamBuffer_, MC_SMB_streamBuffer_);
}


static void init_SMB_socket_() {
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray10819 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Assign PAssign10821 = new_Assign((Optr)slot_IO_SocketStream_socket, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode10820 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10821, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10818 = new_Method_with(PArray10819, empty_Array, empty_Array, PThreadedCode10820, 2, PAssign10821, self);
    
    MethodClosure MC_SMB_socket_ = new_MethodClosure((Method)PMethod10818, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket_, MC_SMB_socket_);
}


static void init_SMB_ascii() {
    Symbol SMB_ascii = new_Symbol(L"ascii");
    Assign PAssign10824 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)false_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10825 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10823 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10824, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10825, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10823, 3, PAssign10824, PSend10825, self);
    
    MethodClosure MC_SMB_ascii = new_MethodClosure((Method)PMethod10822, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ascii, MC_SMB_ascii);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray10827 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Assign PAssign10829 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)VAR_seconds_0_0);
    Array PThreadedCode10828 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10829, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10826 = new_Method_with(PArray10827, empty_Array, empty_Array, PThreadedCode10828, 2, PAssign10829, self);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod10826, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_shouldTimeout() {
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend10832 = new_Send((Optr)self, SMB_timeout, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10833 = new_Send((Optr)PSend10832, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode10831 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10832, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10833, (Optr)&t_method_return);
    Method PMethod10830 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10831, 1, PSend10833);
    
    MethodClosure MC_SMB_shouldTimeout = new_MethodClosure((Method)PMethod10830, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldTimeout, MC_SMB_shouldTimeout);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10837 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10839 = new_String(L"SocketStream>>peek");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10839_Const = new_Constant((Optr)string_10839);
    // warn:. 
    Send PSend10840 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10839_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10841 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10845 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10844 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10845, (Optr)&t_block_return);
    Block PBlock10843 = new_Block_with(empty_Array, empty_Array, PThreadedCode10844, 1, PSend10845);
    // ifTrue:. 
    Send PSend10842 = new_Send((Optr)PSend10841, SMB_ifTrue_, 1, (Optr)PBlock10843);
    String string_10846 = new_String(L"SocketStream>>peek: not at end");
    Constant string_10846_Const = new_Constant((Optr)string_10846);
    // warn:. 
    Send PSend10847 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10846_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10848 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    String string_10852 = new_String(L"SocketStream>>peek: in buffer is empty");
    Constant string_10852_Const = new_Constant((Optr)string_10852);
    // warn:. 
    Send PSend10853 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10852_Const);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10854 = new_Send((Optr)self, SMB_receiveData, 0);
    String string_10855 = new_String(L"SocketStream>>peek: recevied data");
    Constant string_10855_Const = new_Constant((Optr)string_10855);
    // warn:. 
    Send PSend10856 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10855_Const);
    // atEnd. 
    Send PSend10857 = new_Send((Optr)self, SMB_atEnd, 0);
    String string_10861 = new_String(L"SocketStream>>peek: at end");
    Constant string_10861_Const = new_Constant((Optr)string_10861);
    // warn:. 
    Send PSend10862 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10861_Const);
    // escape:. 
    Send PSend10863 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10860 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10861, (Optr)&t_send1, (Optr)PSend10862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10863, (Optr)&t_block_return);
    Block PBlock10859 = new_Block_with(empty_Array, empty_Array, PThreadedCode10860, 2, PSend10862, PSend10863);
    // ifTrue:. 
    Send PSend10858 = new_Send((Optr)PSend10857, SMB_ifTrue_, 1, (Optr)PBlock10859);
    Array PThreadedCode10851 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10852, (Optr)&t_send1, (Optr)PSend10853, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10854, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10855, (Optr)&t_send1, (Optr)PSend10856, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10857, (Optr)&t_send_ifTrue_, (Optr)PSend10858, (Optr)PBlock10859, (Optr)&t_block_return);
    Block PBlock10850 = new_Block_with(empty_Array, empty_Array, PThreadedCode10851, 4, PSend10853, PSend10854, PSend10856, PSend10858);
    // ifTrue:. 
    Send PSend10849 = new_Send((Optr)PSend10848, SMB_ifTrue_, 1, (Optr)PBlock10850);
    String string_10864 = new_String(L"SocketStream>>peek: return...");
    Constant string_10864_Const = new_Constant((Optr)string_10864);
    // warn:. 
    Send PSend10865 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10864_Const);
    String string_10866 = new_String(L"SocketStream>>peek: in buffer is");
    Constant string_10866_Const = new_Constant((Optr)string_10866);
    // warn:. 
    Send PSend10867 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10866_Const);
    // warn:. 
    Send PSend10868 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    String string_10869 = new_String(L"SocketStream>>peek: last read is");
    Constant string_10869_Const = new_Constant((Optr)string_10869);
    // warn:. 
    Send PSend10870 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10869_Const);
    // warn:. 
    Send PSend10871 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10872 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10873 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)PSend10872);
    Array PThreadedCode10838 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10839, (Optr)&t_send1, (Optr)PSend10840, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10841, (Optr)&t_send_ifTrue_, (Optr)PSend10842, (Optr)PBlock10843, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10846, (Optr)&t_send1, (Optr)PSend10847, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10848, (Optr)&t_send_ifTrue_, (Optr)PSend10849, (Optr)PBlock10850, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10864, (Optr)&t_send1, (Optr)PSend10865, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10866, (Optr)&t_send1, (Optr)PSend10867, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend10868, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10869, (Optr)&t_send1, (Optr)PSend10870, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10871, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10872, (Optr)&t_send1, (Optr)PSend10873, (Optr)&t_method_return);
    Block PBlock10836 = new_Block_with(PArray10837, empty_Array, PThreadedCode10838, 10, PSend10840, PSend10842, PSend10847, PSend10849, PSend10865, PSend10867, PSend10868, PSend10870, PSend10871, PSend10873);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10874 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10836);
    Array PThreadedCode10835 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10836, (Optr)&t_send1, (Optr)PSend10874, (Optr)&t_method_return);
    Method PMethod10834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10835, 1, PSend10874);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod10834, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_shouldSignal() {
    Symbol SMB_shouldSignal = new_Symbol(L"shouldSignal");
    Array PThreadedCode10876 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_method_return);
    Method PMethod10875 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10876, 1, slot_IO_SocketStream_shouldSignal);
    
    MethodClosure MC_SMB_shouldSignal = new_MethodClosure((Method)PMethod10875, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal, MC_SMB_shouldSignal);
}


static void init_SMB_bufferSize() {
    Symbol SMB_bufferSize = new_Symbol(L"bufferSize");
    Array PThreadedCode10878 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_method_return);
    Method PMethod10877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10878, 1, slot_IO_SocketStream_bufferSize);
    
    MethodClosure MC_SMB_bufferSize = new_MethodClosure((Method)PMethod10877, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize, MC_SMB_bufferSize);
}


static void init_SMB_nextPutAllFlush_() {
    Symbol SMB_nextPutAllFlush_ = new_Symbol(L"nextPutAllFlush:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10880 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10881 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10887 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10886 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10887, (Optr)&t_block_return);
    Block PBlock10885 = new_Block_with(empty_Array, empty_Array, PThreadedCode10886, 1, PSend10887);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10890 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10889 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10890, (Optr)&t_block_return);
    Block PBlock10888 = new_Block_with(empty_Array, empty_Array, PThreadedCode10889, 1, PSend10890);
    // ifTrue:ifFalse:. 
    Send PSend10884 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10885, (Optr)PBlock10888);
    Assign PAssign10883 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10884);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10891 = new_Send((Optr)self, SMB_flush, 0);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend10892 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10898 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend10899 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)VAR_toPut_0_1, (Optr)PSend10898);
    Array PThreadedCode10897 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10898, (Optr)&t_send2, (Optr)PSend10899, (Optr)&t_block_return);
    Block PBlock10896 = new_Block_with(empty_Array, empty_Array, PThreadedCode10897, 1, PSend10899);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray10901 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode10905 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock10904 = new_Block_with(empty_Array, empty_Array, PThreadedCode10905, 0);
    // ifFalse:. 
    Send PSend10903 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock10904);
    Array PThreadedCode10902 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend10903, (Optr)PBlock10904, (Optr)&t_method_return);
    Block PBlock10900 = new_Block_with(PArray10901, empty_Array, PThreadedCode10902, 1, PSend10903);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10906 = new_Send((Optr)PBlock10896, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock10900);
    Array PThreadedCode10895 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock10896, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock10900, (Optr)&t_send2, (Optr)PSend10906, (Optr)&t_block_return);
    Block PBlock10894 = new_Block_with(empty_Array, empty_Array, PThreadedCode10895, 1, PSend10906);
    // ifFalse:. 
    Send PSend10893 = new_Send((Optr)PSend10892, SMB_ifFalse_, 1, (Optr)PBlock10894);
    Array PThreadedCode10882 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign10883, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10884, (Optr)PBlock10885, (Optr)PBlock10888, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10891, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10892, (Optr)&t_send_ifFalse_, (Optr)PSend10893, (Optr)PBlock10894, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10879 = new_Method_with(PArray10880, PArray10881, empty_Array, PThreadedCode10882, 4, PAssign10883, PSend10891, PSend10893, self);
    
    MethodClosure MC_SMB_nextPutAllFlush_ = new_MethodClosure((Method)PMethod10879, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAllFlush_, MC_SMB_nextPutAllFlush_);
}


static void init_SMB_outBufferSize() {
    Symbol SMB_outBufferSize = new_Symbol(L"outBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10909 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10908 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10909, (Optr)&t_method_return);
    Method PMethod10907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10908, 1, PSend10909);
    
    MethodClosure MC_SMB_outBufferSize = new_MethodClosure((Method)PMethod10907, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_outBufferSize, MC_SMB_outBufferSize);
}


static void init_SMB_sendCommand_() {
    Symbol SMB_sendCommand_ = new_Symbol(L"sendCommand:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10911 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray10914 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10916 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10917 = new_Send((Optr)VAR_aString_0_0, SMB__append_, 1, (Optr)PSend10916);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10918 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)PSend10917);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10919 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Array PThreadedCode10915 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10916, (Optr)&t_send1, (Optr)PSend10917, (Optr)&t_send1, (Optr)PSend10918, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend10919, (Optr)&t_method_return);
    Block PBlock10913 = new_Block_with(PArray10914, empty_Array, PThreadedCode10915, 2, PSend10918, PSend10919);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10920 = new_Send((Optr)PBlock10913, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10912 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock10913, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10910 = new_Method_with(PArray10911, empty_Array, empty_Array, PThreadedCode10912, 2, PSend10920, self);
    
    MethodClosure MC_SMB_sendCommand_ = new_MethodClosure((Method)PMethod10910, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_sendCommand_, MC_SMB_sendCommand_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10923 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10926 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10927 = new_Send((Optr)PSend10926, SMB_not, 0);
    Array PThreadedCode10925 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10926, (Optr)&t_send0, (Optr)PSend10927, (Optr)&t_block_return);
    Block PBlock10924 = new_Block_with(empty_Array, empty_Array, PThreadedCode10925, 1, PSend10927);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10928 = new_Send((Optr)PSend10923, SMB_and_, 1, (Optr)PBlock10924);
    Array PThreadedCode10922 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10923, (Optr)&t_push_closure, (Optr)PBlock10924, (Optr)&t_send1, (Optr)PSend10928, (Optr)&t_method_return);
    Method PMethod10921 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10922, 1, PSend10928);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod10921, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_checkFlush() {
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10933 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Array PThreadedCode10932 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend10933, (Optr)&t_block_return);
    Block PBlock10931 = new_Block_with(empty_Array, empty_Array, PThreadedCode10932, 1, PSend10933);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10934 = new_Send((Optr)slot_IO_SocketStream_autoFlush, SMB_and_, 1, (Optr)PBlock10931);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10938 = new_Send((Optr)self, SMB_flush, 0);
    Array PThreadedCode10937 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10938, (Optr)&t_block_return);
    Block PBlock10936 = new_Block_with(empty_Array, empty_Array, PThreadedCode10937, 1, PSend10938);
    // ifTrue:. 
    Send PSend10935 = new_Send((Optr)PSend10934, SMB_ifTrue_, 1, (Optr)PBlock10936);
    Array PThreadedCode10930 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_push_closure, (Optr)PBlock10931, (Optr)&t_send1, (Optr)PSend10934, (Optr)&t_send_ifTrue_, (Optr)PSend10935, (Optr)PBlock10936, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10930, 2, PSend10935, self);
    
    MethodClosure MC_SMB_checkFlush = new_MethodClosure((Method)PMethod10929, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_checkFlush, MC_SMB_checkFlush);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10940 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10941 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10943 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10945 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10944 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10945);
    // +. 
    Send PSend10948 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10949 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10947 = new_Send((Optr)PSend10948, SMB_min_, 1, (Optr)PSend10949);
    Assign PAssign10946 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10947);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10950 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10942 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10943, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10944, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10945, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10946, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10948, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10949, (Optr)&t_send1, (Optr)PSend10947, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend10950, (Optr)&t_method_return);
    Method PMethod10939 = new_Method_with(PArray10940, PArray10941, empty_Array, PThreadedCode10942, 4, PSend10943, PAssign10944, PAssign10946, PSend10950);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod10939, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_socket() {
    Symbol SMB_socket = new_Symbol(L"socket");
    Array PThreadedCode10952 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_method_return);
    Method PMethod10951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10952, 1, slot_IO_SocketStream_socket);
    
    MethodClosure MC_SMB_socket = new_MethodClosure((Method)PMethod10951, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket, MC_SMB_socket);
}


static void init_SMB_adjustInBuffer_() {
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    Variable VAR_bytesRead_0_0 = new_Variable_named(L"bytesRead", 0);
    Array PArray10954 = new_Array_with(1, (Optr)VAR_bytesRead_0_0);
    Variable VAR_old_0_1 = new_Variable_named(L"old", 0);
    Array PArray10955 = new_Array_with(1, (Optr)VAR_old_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10958 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10960 = new_String(L"SocketStream>>adjustInBuffer:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10960_Const = new_Constant((Optr)string_10960);
    // warn:. 
    Send PSend10961 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10960_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10962 = new_Send((Optr)VAR_bytesRead_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10966 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10965 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10966, (Optr)&t_block_return);
    Block PBlock10964 = new_Block_with(empty_Array, empty_Array, PThreadedCode10965, 1, PSend10966);
    // ifTrue:. 
    Send PSend10963 = new_Send((Optr)PSend10962, SMB_ifTrue_, 1, (Optr)PBlock10964);
    Assign PAssign10967 = new_Assign((Optr)VAR_old_0_1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10969 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__plus_, 1, (Optr)VAR_bytesRead_0_0);
    Assign PAssign10968 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10969);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10970 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10971 = new_Send((Optr)PSend10970, SMB__minus_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10972 = new_Send((Optr)PSend10971, SMB__lt_, 1, (Optr)int_1024_Const);
    SmallInt int_512 = new_SmallInt(512);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_512_Const = new_Constant((Optr)int_512);
    // >. 
    Send PSend10976 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__gt_, 1, (Optr)int_512_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    // moveInBufferDown. 
    Send PSend10980 = new_Send((Optr)self, SMB_moveInBufferDown, 0);
    // -. 
    Send PSend10981 = new_Send((Optr)VAR_old_0_1, SMB__minus_, 1, (Optr)PSend10980);
    // escape:. 
    Send PSend10982 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10981);
    Array PThreadedCode10979 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10980, (Optr)&t_send1, (Optr)PSend10981, (Optr)&t_send1, (Optr)PSend10982, (Optr)&t_block_return);
    Block PBlock10978 = new_Block_with(empty_Array, empty_Array, PThreadedCode10979, 1, PSend10982);
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    // growInBuffer. 
    Send PSend10985 = new_Send((Optr)self, SMB_growInBuffer, 0);
    Array PThreadedCode10984 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10985, (Optr)&t_block_return);
    Block PBlock10983 = new_Block_with(empty_Array, empty_Array, PThreadedCode10984, 1, PSend10985);
    // ifTrue:ifFalse:. 
    Send PSend10977 = new_Send((Optr)PSend10976, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10978, (Optr)PBlock10983);
    Array PThreadedCode10975 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push1, (Optr)int_512, (Optr)&t_send1, (Optr)PSend10976, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10977, (Optr)PBlock10978, (Optr)PBlock10983, (Optr)&t_block_return);
    Block PBlock10974 = new_Block_with(empty_Array, empty_Array, PThreadedCode10975, 1, PSend10977);
    // ifTrue:. 
    Send PSend10973 = new_Send((Optr)PSend10972, SMB_ifTrue_, 1, (Optr)PBlock10974);
    Array PThreadedCode10959 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10960, (Optr)&t_send1, (Optr)PSend10961, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10962, (Optr)&t_send_ifTrue_, (Optr)PSend10963, (Optr)PBlock10964, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10967, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10968, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_send1, (Optr)PSend10969, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10970, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10971, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10972, (Optr)&t_send_ifTrue_, (Optr)PSend10973, (Optr)PBlock10974, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_method_return);
    Block PBlock10957 = new_Block_with(PArray10958, empty_Array, PThreadedCode10959, 6, PSend10961, PSend10963, PAssign10967, PAssign10968, PSend10973, VAR_old_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10986 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10957);
    Array PThreadedCode10956 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10957, (Optr)&t_send1, (Optr)PSend10986, (Optr)&t_method_return);
    Method PMethod10953 = new_Method_with(PArray10954, PArray10955, empty_Array, PThreadedCode10956, 1, PSend10986);
    
    MethodClosure MC_SMB_adjustInBuffer_ = new_MethodClosure((Method)PMethod10953, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustInBuffer_, MC_SMB_adjustInBuffer_);
}


static void init_SMB_ifStale_() {
    Symbol SMB_ifStale_ = new_Symbol(L"ifStale:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray10988 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10990 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend10994 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode10993 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend10994, (Optr)&t_block_return);
    Block PBlock10992 = new_Block_with(empty_Array, empty_Array, PThreadedCode10993, 1, PSend10994);
    // ifFalse:. 
    Send PSend10991 = new_Send((Optr)PSend10990, SMB_ifFalse_, 1, (Optr)PBlock10992);
    Array PThreadedCode10989 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10990, (Optr)&t_send_ifFalse_, (Optr)PSend10991, (Optr)PBlock10992, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10987 = new_Method_with(PArray10988, empty_Array, empty_Array, PThreadedCode10989, 2, PSend10991, self);
    
    MethodClosure MC_SMB_ifStale_ = new_MethodClosure((Method)PMethod10987, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ifStale_, MC_SMB_ifStale_);
}


static void init_SMB_nextAvailable() {
    Symbol SMB_nextAvailable = new_Symbol(L"nextAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10998 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11000 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11004 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11005 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11004);
    Array PThreadedCode11003 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11004, (Optr)&t_send1, (Optr)PSend11005, (Optr)&t_block_return);
    Block PBlock11002 = new_Block_with(empty_Array, empty_Array, PThreadedCode11003, 1, PSend11005);
    // ifFalse:. 
    Send PSend11001 = new_Send((Optr)PSend11000, SMB_ifFalse_, 1, (Optr)PBlock11002);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11006 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11010 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11009 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11010, (Optr)&t_block_return);
    Block PBlock11008 = new_Block_with(empty_Array, empty_Array, PThreadedCode11009, 1, PSend11010);
    // ifTrue:. 
    Send PSend11007 = new_Send((Optr)PSend11006, SMB_ifTrue_, 1, (Optr)PBlock11008);
    // nextAllInBuffer. 
    Send PSend11011 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode10999 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11000, (Optr)&t_send_ifFalse_, (Optr)PSend11001, (Optr)PBlock11002, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11006, (Optr)&t_send_ifTrue_, (Optr)PSend11007, (Optr)PBlock11008, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11011, (Optr)&t_method_return);
    Block PBlock10997 = new_Block_with(PArray10998, empty_Array, PThreadedCode10999, 3, PSend11001, PSend11007, PSend11011);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11012 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10997);
    Array PThreadedCode10996 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10997, (Optr)&t_send1, (Optr)PSend11012, (Optr)&t_method_return);
    Method PMethod10995 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10996, 1, PSend11012);
    
    MethodClosure MC_SMB_nextAvailable = new_MethodClosure((Method)PMethod10995, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable, MC_SMB_nextAvailable);
}


static void init_SMB_resizeInBuffer_() {
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    Variable VAR_newSize_0_0 = new_Variable_named(L"newSize", 0);
    Array PArray11014 = new_Array_with(1, (Optr)VAR_newSize_0_0);
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11018 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)VAR_newSize_0_0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11019 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // replaceFrom:to:with:startingAt:. 
    Send PSend11017 = new_Send((Optr)PSend11018, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend11019, (Optr)slot_IO_SocketStream_inBuffer, (Optr)int_1_Const);
    Assign PAssign11016 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11017);
    Array PThreadedCode11015 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign11016, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newSize_0_0, (Optr)&t_send1, (Optr)PSend11018, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11019, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend11017, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11013 = new_Method_with(PArray11014, empty_Array, empty_Array, PThreadedCode11015, 2, PAssign11016, self);
    
    MethodClosure MC_SMB_resizeInBuffer_ = new_MethodClosure((Method)PMethod11013, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resizeInBuffer_, MC_SMB_resizeInBuffer_);
}


static void init_SMB_bufferSize_() {
    Symbol SMB_bufferSize_ = new_Symbol(L"bufferSize:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray11021 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign11023 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)VAR_anInt_0_0);
    Array PThreadedCode11022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11023, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11020 = new_Method_with(PArray11021, empty_Array, empty_Array, PThreadedCode11022, 2, PAssign11023, self);
    
    MethodClosure MC_SMB_bufferSize_ = new_MethodClosure((Method)PMethod11020, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize_, MC_SMB_bufferSize_);
}


static void init_SMB_isDataAvailable() {
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11027 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11029 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11033 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode11032 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11033, (Optr)&t_block_return);
    Block PBlock11031 = new_Block_with(empty_Array, empty_Array, PThreadedCode11032, 1, PSend11033);
    // ifFalse:. 
    Send PSend11030 = new_Send((Optr)PSend11029, SMB_ifFalse_, 1, (Optr)PBlock11031);
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    // dataAvailable. 
    Send PSend11034 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_dataAvailable, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Array PThreadedCode11037 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock11036 = new_Block_with(empty_Array, empty_Array, PThreadedCode11037, 1, false_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11041 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend11043 = new_Send((Optr)VAR__receiver__2_0, SMB_receiveDataIfAvailable, 0);
    // isDataAvailable. 
    Send PSend11044 = new_Send((Optr)VAR__receiver__2_0, SMB_isDataAvailable, 0);
    Array PThreadedCode11042 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11043, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11044, (Optr)&t_method_return);
    Block PBlock11040 = new_Block_with(PArray11041, empty_Array, PThreadedCode11042, 2, PSend11043, PSend11044);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11045 = new_Send((Optr)PBlock11040, SMB_value_, 1, (Optr)self);
    Array PThreadedCode11039 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock11040, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend11045, (Optr)&t_block_return);
    Block PBlock11038 = new_Block_with(empty_Array, empty_Array, PThreadedCode11039, 1, PSend11045);
    // ifFalse:ifTrue:. 
    Send PSend11035 = new_Send((Optr)PSend11034, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11036, (Optr)PBlock11038);
    Array PThreadedCode11028 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11029, (Optr)&t_send_ifFalse_, (Optr)PSend11030, (Optr)PBlock11031, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11034, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11035, (Optr)PBlock11036, (Optr)PBlock11038, (Optr)&t_method_return);
    Block PBlock11026 = new_Block_with(PArray11027, empty_Array, PThreadedCode11028, 2, PSend11030, PSend11035);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11046 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11026);
    Array PThreadedCode11025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11026, (Optr)&t_send1, (Optr)PSend11046, (Optr)&t_method_return);
    Method PMethod11024 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11025, 1, PSend11046);
    
    MethodClosure MC_SMB_isDataAvailable = new_MethodClosure((Method)PMethod11024, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isDataAvailable, MC_SMB_isDataAvailable);
}


static void init_SMB_adjustOutBuffer_() {
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    Variable VAR_bytesToWrite_0_0 = new_Variable_named(L"bytesToWrite", 0);
    Array PArray11048 = new_Array_with(1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11050 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11051 = new_Send((Optr)PSend11050, SMB__minus_, 1, (Optr)slot_IO_SocketStream_outNextToWrite);
    // -. 
    Send PSend11052 = new_Send((Optr)PSend11051, SMB__minus_, 1, (Optr)VAR_bytesToWrite_0_0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend11053 = new_Send((Optr)PSend11052, SMB__lt_, 1, (Optr)int_1024_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // size. 
    Send PSend11062 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend11061 = new_Send((Optr)PSend11062, SMB_max_, 1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend11060 = new_Send((Optr)PSend11061, SMB__times_, 1, (Optr)int_2_Const);
    // streamBuffer:. 
    Send PSend11059 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)PSend11060);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // size. 
    Send PSend11063 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // replaceFrom:to:with:startingAt:. 
    Send PSend11058 = new_Send((Optr)PSend11059, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend11063, (Optr)slot_IO_SocketStream_outBuffer, (Optr)int_1_Const);
    Assign PAssign11057 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11058);
    Array PThreadedCode11056 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11057, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11062, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend11061, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend11060, (Optr)&t_send1, (Optr)PSend11059, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11063, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend11058, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11055 = new_Block_with(empty_Array, empty_Array, PThreadedCode11056, 1, PAssign11057);
    // ifTrue:. 
    Send PSend11054 = new_Send((Optr)PSend11053, SMB_ifTrue_, 1, (Optr)PBlock11055);
    Array PThreadedCode11049 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11050, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_send1, (Optr)PSend11051, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend11052, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11053, (Optr)&t_send_ifTrue_, (Optr)PSend11054, (Optr)PBlock11055, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11047 = new_Method_with(PArray11048, empty_Array, empty_Array, PThreadedCode11049, 2, PSend11054, self);
    
    MethodClosure MC_SMB_adjustOutBuffer_ = new_MethodClosure((Method)PMethod11047, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustOutBuffer_, MC_SMB_adjustOutBuffer_);
}


static void init_SMB_nextAllInBuffer() {
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11066 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11067 = new_Send((Optr)PSend11066, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend11068 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11067);
    Array PThreadedCode11065 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11066, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11067, (Optr)&t_send1, (Optr)PSend11068, (Optr)&t_method_return);
    Method PMethod11064 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11065, 1, PSend11068);
    
    MethodClosure MC_SMB_nextAllInBuffer = new_MethodClosure((Method)PMethod11064, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAllInBuffer, MC_SMB_nextAllInBuffer);
}


static void init_SMB_skip_() {
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11070 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11072 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11075 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11076 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11074 = new_Send((Optr)PSend11075, SMB_min_, 1, (Optr)PSend11076);
    Assign PAssign11073 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11074);
    Array PThreadedCode11071 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11072, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11073, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11075, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11076, (Optr)&t_send1, (Optr)PSend11074, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11069 = new_Method_with(PArray11070, empty_Array, empty_Array, PThreadedCode11071, 3, PSend11072, PAssign11073, self);
    
    MethodClosure MC_SMB_skip_ = new_MethodClosure((Method)PMethod11069, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_skip_, MC_SMB_skip_);
}


static void init_SMB_nextAvailable_() {
    Symbol SMB_nextAvailable_ = new_Symbol(L"nextAvailable:");
    Variable VAR_howMany_0_0 = new_Variable_named(L"howMany", 0);
    Array PArray11078 = new_Array_with(1, (Optr)VAR_howMany_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11081 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11083 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend11087 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11088 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11087);
    Array PThreadedCode11086 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend11087, (Optr)&t_send1, (Optr)PSend11088, (Optr)&t_block_return);
    Block PBlock11085 = new_Block_with(empty_Array, empty_Array, PThreadedCode11086, 1, PSend11088);
    // ifFalse:. 
    Send PSend11084 = new_Send((Optr)PSend11083, SMB_ifFalse_, 1, (Optr)PBlock11085);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11089 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11093 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11092 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11093, (Optr)&t_block_return);
    Block PBlock11091 = new_Block_with(empty_Array, empty_Array, PThreadedCode11092, 1, PSend11093);
    // ifTrue:. 
    Send PSend11090 = new_Send((Optr)PSend11089, SMB_ifTrue_, 1, (Optr)PBlock11091);
    // nextInBuffer:. 
    Send PSend11094 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Array PThreadedCode11082 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11083, (Optr)&t_send_ifFalse_, (Optr)PSend11084, (Optr)PBlock11085, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11089, (Optr)&t_send_ifTrue_, (Optr)PSend11090, (Optr)PBlock11091, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend11094, (Optr)&t_method_return);
    Block PBlock11080 = new_Block_with(PArray11081, empty_Array, PThreadedCode11082, 3, PSend11084, PSend11090, PSend11094);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11095 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11080);
    Array PThreadedCode11079 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11080, (Optr)&t_send1, (Optr)PSend11095, (Optr)&t_method_return);
    Method PMethod11077 = new_Method_with(PArray11078, empty_Array, empty_Array, PThreadedCode11079, 1, PSend11095);
    
    MethodClosure MC_SMB_nextAvailable_ = new_MethodClosure((Method)PMethod11077, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable_, MC_SMB_nextAvailable_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend11098 = new_Send((Optr)self, SMB_flush, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // closeAndDestroy:. 
    Send PSend11099 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_closeAndDestroy_, 1, (Optr)int_30_Const);
    Array PThreadedCode11097 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11098, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend11099, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11096 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11097, 3, PSend11098, PSend11099, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod11096, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_inBufferSize() {
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11102 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11103 = new_Send((Optr)PSend11102, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode11101 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11102, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11103, (Optr)&t_method_return);
    Method PMethod11100 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11101, 1, PSend11103);
    
    MethodClosure MC_SMB_inBufferSize = new_MethodClosure((Method)PMethod11100, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_inBufferSize, MC_SMB_inBufferSize);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11105 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11107 = new_Send((Optr)VAR_anObject_0_0, SMB_printOn_, 1, (Optr)self);
    Array PThreadedCode11106 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend11107, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11104 = new_Method_with(PArray11105, empty_Array, empty_Array, PThreadedCode11106, 2, PSend11107, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod11104, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11111 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11113 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11117 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode11116 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend11117, (Optr)&t_block_return);
    Block PBlock11115 = new_Block_with(empty_Array, empty_Array, PThreadedCode11116, 1, PSend11117);
    // ifTrue:. 
    Send PSend11114 = new_Send((Optr)PSend11113, SMB_ifTrue_, 1, (Optr)PBlock11115);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11118 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11122 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend11123 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend11127 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode11126 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend11127, (Optr)&t_block_return);
    Block PBlock11125 = new_Block_with(empty_Array, empty_Array, PThreadedCode11126, 1, PSend11127);
    // ifTrue:. 
    Send PSend11124 = new_Send((Optr)PSend11123, SMB_ifTrue_, 1, (Optr)PBlock11125);
    Array PThreadedCode11121 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11122, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11123, (Optr)&t_send_ifTrue_, (Optr)PSend11124, (Optr)PBlock11125, (Optr)&t_block_return);
    Block PBlock11120 = new_Block_with(empty_Array, empty_Array, PThreadedCode11121, 2, PSend11122, PSend11124);
    // ifTrue:. 
    Send PSend11119 = new_Send((Optr)PSend11118, SMB_ifTrue_, 1, (Optr)PBlock11120);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11129 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11128 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11129);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11130 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11112 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11113, (Optr)&t_send_ifTrue_, (Optr)PSend11114, (Optr)PBlock11115, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11118, (Optr)&t_send_ifTrue_, (Optr)PSend11119, (Optr)PBlock11120, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11128, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11130, (Optr)&t_method_return);
    Block PBlock11110 = new_Block_with(PArray11111, empty_Array, PThreadedCode11112, 4, PSend11114, PSend11119, PAssign11128, PSend11130);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11131 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11110);
    Array PThreadedCode11109 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11110, (Optr)&t_send1, (Optr)PSend11131, (Optr)&t_method_return);
    Method PMethod11108 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11109, 1, PSend11131);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod11108, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    // standardTimeout. 
    Send PSend11137 = new_Send((Optr)PSocket_classReference, SMB_standardTimeout, 0);
    Assign PAssign11136 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)PSend11137);
    Array PThreadedCode11135 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11136, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11137, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11134 = new_Block_with(empty_Array, empty_Array, PThreadedCode11135, 1, PAssign11136);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend11138 = new_Send((Optr)slot_IO_SocketStream_timeout, SMB_ifNil_, 1, (Optr)PBlock11134);
    Array PThreadedCode11133 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_closure, (Optr)PBlock11134, (Optr)&t_send1, (Optr)PSend11138, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_method_return);
    Method PMethod11132 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11133, 2, PSend11138, slot_IO_SocketStream_timeout);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod11132, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_upToAll_() {
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Variable VAR_aStringOrByteArray_0_0 = new_Variable_named(L"aStringOrByteArray", 0);
    Array PArray11140 = new_Array_with(1, (Optr)VAR_aStringOrByteArray_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_sz_0_2 = new_Variable_named(L"sz", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_4 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_5 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11141 = new_Array_with(5, (Optr)VAR_index_0_1, (Optr)VAR_sz_0_2, (Optr)VAR_result_0_3, (Optr)VAR_lastRecentlyRead_0_4, (Optr)VAR_searchedSoFar_0_5);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11144 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11146 = new_String(L"SocketStream>>upToAll:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11146_Const = new_Constant((Optr)string_11146);
    // warn:. 
    Send PSend11147 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11146_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11149 = new_Send((Optr)VAR_aStringOrByteArray_0_0, SMB_size, 0);
    Assign PAssign11148 = new_Assign((Optr)VAR_sz_0_2, (Optr)PSend11149);
    String string_11150 = new_String(L"SocketStream>>upToAll: sz is ");
    Constant string_11150_Const = new_Constant((Optr)string_11150);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11151 = new_Send((Optr)string_11150_Const, SMB__append_, 1, (Optr)VAR_sz_0_2);
    // warn:. 
    Send PSend11152 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11151);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11153 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)int_0_Const);
    Assign PAssign11154 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)int_0_Const);
    Assign PAssign11155 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    String string_11156 = new_String(L"SocketStream>>upToAll: temps initialized");
    Constant string_11156_Const = new_Constant((Optr)string_11156);
    // warn:. 
    Send PSend11157 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11156_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11160 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11161 = new_Send((Optr)PSend11160, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11164 = new_Send((Optr)VAR_lastRecentlyRead_0_4, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11167 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11168 = new_Send((Optr)PSend11167, SMB_not, 0);
    Array PThreadedCode11166 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11167, (Optr)&t_send0, (Optr)PSend11168, (Optr)&t_block_return);
    Block PBlock11165 = new_Block_with(empty_Array, empty_Array, PThreadedCode11166, 1, PSend11168);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11169 = new_Send((Optr)PSend11164, SMB_and_, 1, (Optr)PBlock11165);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11172 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11173 = new_Send((Optr)PSend11172, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11171 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11172, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11173, (Optr)&t_block_return);
    Block PBlock11170 = new_Block_with(empty_Array, empty_Array, PThreadedCode11171, 1, PSend11173);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11174 = new_Send((Optr)PSend11169, SMB_or_, 1, (Optr)PBlock11170);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_11178 = new_String(L"SocketStream>>upToAll: we need to read data");
    Constant string_11178_Const = new_Constant((Optr)string_11178);
    // warn:. 
    Send PSend11179 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11178_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11183 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_5);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11182 = new_Send((Optr)PSend11183, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOfSubCollection:startingAt:. 
    Send PSend11181 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_aStringOrByteArray_0_0, (Optr)PSend11182);
    Assign PAssign11180 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11181);
    String string_11184 = new_String(L"SocketStream>>upToAll: searched for a bit.");
    Constant string_11184_Const = new_Constant((Optr)string_11184);
    // warn:. 
    Send PSend11185 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11184_Const);
    // inBufferSize. 
    Send PSend11187 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11186 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)PSend11187);
    String string_11188 = new_String(L"SocketStream>>upToAll: this far we searched until");
    Constant string_11188_Const = new_Constant((Optr)string_11188);
    // warn:. 
    Send PSend11189 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11188_Const);
    // warn:. 
    Send PSend11190 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_searchedSoFar_0_5);
    // >. 
    Send PSend11191 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11194 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)VAR_sz_0_2);
    // >. 
    Send PSend11195 = new_Send((Optr)PSend11194, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11193 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11194, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11195, (Optr)&t_block_return);
    Block PBlock11192 = new_Block_with(empty_Array, empty_Array, PThreadedCode11193, 1, PSend11195);
    // and:. 
    Send PSend11196 = new_Send((Optr)PSend11191, SMB_and_, 1, (Optr)PBlock11192);
    Assign PAssign11200 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11199 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11200, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11198 = new_Block_with(empty_Array, empty_Array, PThreadedCode11199, 1, PAssign11200);
    // ifTrue:. 
    Send PSend11197 = new_Send((Optr)PSend11196, SMB_ifTrue_, 1, (Optr)PBlock11198);
    Array PThreadedCode11177 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11178, (Optr)&t_send1, (Optr)PSend11179, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11180, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend11183, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11182, (Optr)&t_send2, (Optr)PSend11181, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11184, (Optr)&t_send1, (Optr)PSend11185, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11186, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11187, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11188, (Optr)&t_send1, (Optr)PSend11189, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend11190, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11191, (Optr)&t_push_closure, (Optr)PBlock11192, (Optr)&t_send1, (Optr)PSend11196, (Optr)&t_send_ifTrue_, (Optr)PSend11197, (Optr)PBlock11198, (Optr)&t_block_return);
    Block PBlock11176 = new_Block_with(empty_Array, empty_Array, PThreadedCode11177, 7, PSend11179, PAssign11180, PSend11185, PAssign11186, PSend11189, PSend11190, PSend11197);
    // ifTrue:. 
    Send PSend11175 = new_Send((Optr)PSend11174, SMB_ifTrue_, 1, (Optr)PBlock11176);
    // =. 
    Send PSend11201 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11163 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_4, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11164, (Optr)&t_push_closure, (Optr)PBlock11165, (Optr)&t_send1, (Optr)PSend11169, (Optr)&t_push_closure, (Optr)PBlock11170, (Optr)&t_send1, (Optr)PSend11174, (Optr)&t_send_ifTrue_, (Optr)PSend11175, (Optr)PBlock11176, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11201, (Optr)&t_block_return);
    Block PBlock11162 = new_Block_with(empty_Array, empty_Array, PThreadedCode11163, 2, PSend11175, PSend11201);
    // and:. 
    Send PSend11202 = new_Send((Optr)PSend11161, SMB_and_, 1, (Optr)PBlock11162);
    Array PThreadedCode11159 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11160, (Optr)&t_send0, (Optr)PSend11161, (Optr)&t_push_closure, (Optr)PBlock11162, (Optr)&t_send1, (Optr)PSend11202, (Optr)&t_block_return);
    Block PBlock11158 = new_Block_with(empty_Array, empty_Array, PThreadedCode11159, 1, PSend11202);
    // =. 
    Send PSend11205 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11209 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11208 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11209, (Optr)&t_block_return);
    Block PBlock11207 = new_Block_with(empty_Array, empty_Array, PThreadedCode11208, 1, PSend11209);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11212 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11211 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11212, (Optr)&t_block_return);
    Block PBlock11210 = new_Block_with(empty_Array, empty_Array, PThreadedCode11211, 1, PSend11212);
    // ifTrue:ifFalse:. 
    Send PSend11206 = new_Send((Optr)PSend11205, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11207, (Optr)PBlock11210);
    Assign PAssign11213 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11204 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11205, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11206, (Optr)PBlock11207, (Optr)PBlock11210, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11213, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11203 = new_Block_with(empty_Array, empty_Array, PThreadedCode11204, 2, PSend11206, PAssign11213);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11214 = new_Send((Optr)PBlock11158, SMB_whileTrue_, 1, (Optr)PBlock11203);
    // >. 
    Send PSend11215 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11222 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11221 = new_Send((Optr)PSend11222, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11220 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11221);
    Assign PAssign11219 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend11220);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11223 = new_Send((Optr)self, SMB_skip_, 1, (Optr)VAR_sz_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11224 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_3);
    Array PThreadedCode11218 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign11219, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11222, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11221, (Optr)&t_send1, (Optr)PSend11220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11223, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_send1, (Optr)PSend11224, (Optr)&t_block_return);
    Block PBlock11217 = new_Block_with(empty_Array, empty_Array, PThreadedCode11218, 3, PAssign11219, PSend11223, PSend11224);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11227 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11228 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11227);
    Array PThreadedCode11226 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11227, (Optr)&t_send1, (Optr)PSend11228, (Optr)&t_block_return);
    Block PBlock11225 = new_Block_with(empty_Array, empty_Array, PThreadedCode11226, 1, PSend11228);
    // ifTrue:ifFalse:. 
    Send PSend11216 = new_Send((Optr)PSend11215, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11217, (Optr)PBlock11225);
    Array PThreadedCode11145 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11146, (Optr)&t_send1, (Optr)PSend11147, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11148, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_send0, (Optr)PSend11149, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11150, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11151, (Optr)&t_send1, (Optr)PSend11152, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11153, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11154, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11155, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11156, (Optr)&t_send1, (Optr)PSend11157, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11158, (Optr)&t_push_closure, (Optr)PBlock11203, (Optr)&t_send1, (Optr)PSend11214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11215, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11216, (Optr)PBlock11217, (Optr)PBlock11225, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11143 = new_Block_with(PArray11144, empty_Array, PThreadedCode11145, 10, PSend11147, PAssign11148, PSend11152, PAssign11153, PAssign11154, PAssign11155, PSend11157, PSend11214, PSend11216, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11229 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11143);
    Array PThreadedCode11142 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11143, (Optr)&t_send1, (Optr)PSend11229, (Optr)&t_method_return);
    Method PMethod11139 = new_Method_with(PArray11140, PArray11141, empty_Array, PThreadedCode11142, 1, PSend11229);
    
    MethodClosure MC_SMB_upToAll_ = new_MethodClosure((Method)PMethod11139, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToAll_, MC_SMB_upToAll_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray11231 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend11233 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode11232 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend11233, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11230 = new_Method_with(PArray11231, empty_Array, empty_Array, PThreadedCode11232, 2, PSend11233, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod11230, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_growInBuffer() {
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11236 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend11237 = new_Send((Optr)PSend11236, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    // resizeInBuffer:. 
    Send PSend11238 = new_Send((Optr)self, SMB_resizeInBuffer_, 1, (Optr)PSend11237);
    Array PThreadedCode11235 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11236, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend11237, (Optr)&t_send1, (Optr)PSend11238, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11235, 2, PSend11238, self);
    
    MethodClosure MC_SMB_growInBuffer = new_MethodClosure((Method)PMethod11234, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_growInBuffer, MC_SMB_growInBuffer);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11240 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11242 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11243 = new_Send((Optr)PSend11242, SMB_name, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11244 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend11243);
    String string_11247 = new_String(L"[inbuf:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11248 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // /. 
    Send PSend11249 = new_Send((Optr)PSend11248, SMB__divide_, 1, (Optr)int_1024_Const);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend11250 = new_Send((Optr)PSend11249, SMB_rounded, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11251 = new_Send((Optr)PSend11250, SMB_asString, 0);
    Constant string_11247_Const = new_Constant((Optr)string_11247);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11252 = new_Send((Optr)string_11247_Const, SMB__append_, 1, (Optr)PSend11251);
    String string_11253 = new_String(L"kb/outbuf:");
    Constant string_11253_Const = new_Constant((Optr)string_11253);
    // ,. 
    Send PSend11254 = new_Send((Optr)PSend11252, SMB__append_, 1, (Optr)string_11253_Const);
    // size. 
    Send PSend11255 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // /. 
    Send PSend11256 = new_Send((Optr)PSend11255, SMB__divide_, 1, (Optr)int_1024_Const);
    // rounded. 
    Send PSend11257 = new_Send((Optr)PSend11256, SMB_rounded, 0);
    // asString. 
    Send PSend11258 = new_Send((Optr)PSend11257, SMB_asString, 0);
    // ,. 
    Send PSend11259 = new_Send((Optr)PSend11254, SMB__append_, 1, (Optr)PSend11258);
    String string_11260 = new_String(L"kb]");
    Constant string_11260_Const = new_Constant((Optr)string_11260);
    // ,. 
    Send PSend11261 = new_Send((Optr)PSend11259, SMB__append_, 1, (Optr)string_11260_Const);
    // nextPutAll:. 
    Send PSend11262 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend11261);
    Array PThreadedCode11246 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11247, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11248, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11249, (Optr)&t_send0, (Optr)PSend11250, (Optr)&t_send0, (Optr)PSend11251, (Optr)&t_send1, (Optr)PSend11252, (Optr)&t_push1, (Optr)string_11253, (Optr)&t_send1, (Optr)PSend11254, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11255, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11256, (Optr)&t_send0, (Optr)PSend11257, (Optr)&t_send0, (Optr)PSend11258, (Optr)&t_send1, (Optr)PSend11259, (Optr)&t_push1, (Optr)string_11260, (Optr)&t_send1, (Optr)PSend11261, (Optr)&t_send1, (Optr)PSend11262, (Optr)&t_block_return);
    Block PBlock11245 = new_Block_with(empty_Array, empty_Array, PThreadedCode11246, 1, PSend11262);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend11263 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_ifNotNil_, 1, (Optr)PBlock11245);
    Array PThreadedCode11241 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11242, (Optr)&t_send0, (Optr)PSend11243, (Optr)&t_send1, (Optr)PSend11244, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_closure, (Optr)PBlock11245, (Optr)&t_send1, (Optr)PSend11263, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11239 = new_Method_with(PArray11240, empty_Array, empty_Array, PThreadedCode11241, 3, PSend11244, PSend11263, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod11239, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_autoFlush() {
    Symbol SMB_autoFlush = new_Symbol(L"autoFlush");
    Array PThreadedCode11265 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_method_return);
    Method PMethod11264 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11265, 1, slot_IO_SocketStream_autoFlush);
    
    MethodClosure MC_SMB_autoFlush = new_MethodClosure((Method)PMethod11264, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush, MC_SMB_autoFlush);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11267 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11268 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend11274 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode11273 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11274, (Optr)&t_block_return);
    Block PBlock11272 = new_Block_with(empty_Array, empty_Array, PThreadedCode11273, 1, PSend11274);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11277 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode11276 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11277, (Optr)&t_block_return);
    Block PBlock11275 = new_Block_with(empty_Array, empty_Array, PThreadedCode11276, 1, PSend11277);
    // ifTrue:ifFalse:. 
    Send PSend11271 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11272, (Optr)PBlock11275);
    Assign PAssign11270 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11271);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11278 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    // adjustOutBuffer:. 
    Send PSend11279 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)PSend11278);
    // size. 
    Send PSend11280 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11281 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11280);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11282 = new_Send((Optr)PSend11281, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11283 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11282, (Optr)VAR_toPut_0_1, (Optr)int_1_Const);
    // size. 
    Send PSend11286 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    // +. 
    Send PSend11285 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11286);
    Assign PAssign11284 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11285);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11287 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11269 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign11270, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11271, (Optr)PBlock11272, (Optr)PBlock11275, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11278, (Optr)&t_send1, (Optr)PSend11279, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11280, (Optr)&t_send1, (Optr)PSend11281, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11282, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend11283, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11284, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11286, (Optr)&t_send1, (Optr)PSend11285, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11287, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11266 = new_Method_with(PArray11267, PArray11268, empty_Array, PThreadedCode11269, 6, PAssign11270, PSend11279, PSend11283, PAssign11284, PSend11287, self);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod11266, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_receiveDataIfAvailable() {
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    // receiveSomeDataInto:startingAt:. 
    Send PSend11291 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveSomeDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign11290 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend11291);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend11292 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11289 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign11290, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend11291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend11292, (Optr)&t_method_return);
    Method PMethod11288 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11289, 2, PAssign11290, PSend11292);
    
    MethodClosure MC_SMB_receiveDataIfAvailable = new_MethodClosure((Method)PMethod11288, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveDataIfAvailable, MC_SMB_receiveDataIfAvailable);
}


static void init_SMB_isInBufferEmpty() {
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    String string_11295 = new_String(L"SocketStream>>isInBufferEmpty:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11295_Const = new_Constant((Optr)string_11295);
    // warn:. 
    Send PSend11296 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11295_Const);
    String string_11297 = new_String(L"-Last Read:");
    Constant string_11297_Const = new_Constant((Optr)string_11297);
    // warn:. 
    Send PSend11298 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11297_Const);
    // warn:. 
    Send PSend11299 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    String string_11300 = new_String(L"-Index Next To Write:");
    Constant string_11300_Const = new_Constant((Optr)string_11300);
    // warn:. 
    Send PSend11301 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11300_Const);
    // warn:. 
    Send PSend11302 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11303 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11304 = new_Send((Optr)PSend11303, SMB__equals_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11294 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11295, (Optr)&t_send1, (Optr)PSend11296, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11297, (Optr)&t_send1, (Optr)PSend11298, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11299, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11300, (Optr)&t_send1, (Optr)PSend11301, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11302, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11303, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11304, (Optr)&t_method_return);
    Method PMethod11293 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11294, 6, PSend11296, PSend11298, PSend11299, PSend11301, PSend11302, PSend11304);
    
    MethodClosure MC_SMB_isInBufferEmpty = new_MethodClosure((Method)PMethod11293, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isInBufferEmpty, MC_SMB_isInBufferEmpty);
}


static void init_SMB_peek_() {
    Symbol SMB_peek_ = new_Symbol(L"peek:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11306 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray11307 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11309 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11311 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11310 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11311);
    // +. 
    Send PSend11312 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11313 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend11314 = new_Send((Optr)PSend11312, SMB_min_, 1, (Optr)PSend11313);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11315 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend11314);
    Array PThreadedCode11308 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11309, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11310, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11311, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11312, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11313, (Optr)&t_send1, (Optr)PSend11314, (Optr)&t_send2, (Optr)PSend11315, (Optr)&t_method_return);
    Method PMethod11305 = new_Method_with(PArray11306, PArray11307, empty_Array, PThreadedCode11308, 3, PSend11309, PAssign11310, PSend11315);
    
    MethodClosure MC_SMB_peek_ = new_MethodClosure((Method)PMethod11305, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek_, MC_SMB_peek_);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11318 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11319 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend11318);
    Array PThreadedCode11317 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11318, (Optr)&t_send1, (Optr)PSend11319, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11316 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11317, 2, PSend11319, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod11316, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_moveInBufferDown() {
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    Variable VAR_sz_0_0 = new_Variable_named(L"sz", 0);
    Variable VAR_distanceMoved_0_1 = new_Variable_named(L"distanceMoved", 0);
    Array PArray11321 = new_Array_with(2, (Optr)VAR_sz_0_0, (Optr)VAR_distanceMoved_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11325 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11324 = new_Send((Optr)PSend11325, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign11323 = new_Assign((Optr)VAR_sz_0_0, (Optr)PSend11324);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11326 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11327 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_sz_0_0, (Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11326);
    Assign PAssign11328 = new_Assign((Optr)VAR_distanceMoved_0_1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11329 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    // +. 
    Send PSend11331 = new_Send((Optr)VAR_sz_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11330 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend11331);
    Array PThreadedCode11322 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign11323, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11325, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11324, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11326, (Optr)&t_send4, (Optr)PSend11327, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11328, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11329, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11330, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11331, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_distanceMoved_0_1, (Optr)&t_method_return);
    Method PMethod11320 = new_Method_with(empty_Array, PArray11321, empty_Array, PThreadedCode11322, 6, PAssign11323, PSend11327, PAssign11328, PAssign11329, PAssign11330, VAR_distanceMoved_0_1);
    
    MethodClosure MC_SMB_moveInBufferDown = new_MethodClosure((Method)PMethod11320, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_moveInBufferDown, MC_SMB_moveInBufferDown);
}


static void init_SMB_nextLineLf() {
    Symbol SMB_nextLineLf = new_Symbol(L"nextLineLf");
    Variable VAR_nextLine_0_0 = new_Variable_named(L"nextLine", 0);
    Array PArray11333 = new_Array_with(1, (Optr)VAR_nextLine_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend11337 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // upToAll:. 
    Send PSend11336 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend11337);
    Assign PAssign11335 = new_Assign((Optr)VAR_nextLine_0_0, (Optr)PSend11336);
    Array PThreadedCode11334 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11335, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11337, (Optr)&t_send1, (Optr)PSend11336, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_0, (Optr)&t_method_return);
    Method PMethod11332 = new_Method_with(empty_Array, PArray11333, empty_Array, PThreadedCode11334, 2, PAssign11335, VAR_nextLine_0_0);
    
    MethodClosure MC_SMB_nextLineLf = new_MethodClosure((Method)PMethod11332, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineLf, MC_SMB_nextLineLf);
}


static void init_SMB_nextInBuffer_() {
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11339 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_amount_0_2 = new_Variable_named(L"amount", 0);
    Array PArray11340 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_amount_0_2);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11345 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11344 = new_Send((Optr)PSend11345, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11343 = new_Send((Optr)VAR_anInteger_0_0, SMB_min_, 1, (Optr)PSend11344);
    Assign PAssign11342 = new_Assign((Optr)VAR_amount_0_2, (Optr)PSend11343);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11347 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11346 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11347);
    // +. 
    Send PSend11349 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_amount_0_2);
    Assign PAssign11348 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11349);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11350 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11341 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign11342, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11345, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11344, (Optr)&t_send1, (Optr)PSend11343, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11346, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11348, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_amount_0_2, (Optr)&t_send1, (Optr)PSend11349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend11350, (Optr)&t_method_return);
    Method PMethod11338 = new_Method_with(PArray11339, PArray11340, empty_Array, PThreadedCode11341, 4, PAssign11342, PAssign11346, PAssign11348, PSend11350);
    
    MethodClosure MC_SMB_nextInBuffer_ = new_MethodClosure((Method)PMethod11338, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextInBuffer_, MC_SMB_nextInBuffer_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11354 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11356 = new_String(L"SocketStream>>atEnd");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11356_Const = new_Constant((Optr)string_11356);
    // warn:. 
    Send PSend11357 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11356_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11358 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11362 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode11361 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11362, (Optr)&t_block_return);
    Block PBlock11360 = new_Block_with(empty_Array, empty_Array, PThreadedCode11361, 1, PSend11362);
    // ifFalse:. 
    Send PSend11359 = new_Send((Optr)PSend11358, SMB_ifFalse_, 1, (Optr)PBlock11360);
    String string_11363 = new_String(L"SocketStream>>atEnd: Buffer is Empty");
    Constant string_11363_Const = new_Constant((Optr)string_11363);
    // warn:. 
    Send PSend11364 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11363_Const);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend11365 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11366 = new_Send((Optr)PSend11365, SMB_not, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11369 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    // not. 
    Send PSend11370 = new_Send((Optr)PSend11369, SMB_not, 0);
    Array PThreadedCode11368 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11369, (Optr)&t_send0, (Optr)PSend11370, (Optr)&t_block_return);
    Block PBlock11367 = new_Block_with(empty_Array, empty_Array, PThreadedCode11368, 1, PSend11370);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11371 = new_Send((Optr)PSend11366, SMB_and_, 1, (Optr)PBlock11367);
    Array PThreadedCode11355 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11356, (Optr)&t_send1, (Optr)PSend11357, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11358, (Optr)&t_send_ifFalse_, (Optr)PSend11359, (Optr)PBlock11360, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11363, (Optr)&t_send1, (Optr)PSend11364, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11365, (Optr)&t_send0, (Optr)PSend11366, (Optr)&t_push_closure, (Optr)PBlock11367, (Optr)&t_send1, (Optr)PSend11371, (Optr)&t_method_return);
    Block PBlock11353 = new_Block_with(PArray11354, empty_Array, PThreadedCode11355, 4, PSend11357, PSend11359, PSend11364, PSend11371);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11372 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11353);
    Array PThreadedCode11352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11353, (Optr)&t_send1, (Optr)PSend11372, (Optr)&t_method_return);
    Method PMethod11351 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11352, 1, PSend11372);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod11351, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray11374 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11375 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend11381 = new_Send((Optr)VAR_char_0_0, SMB_asInteger, 0);
    Array PThreadedCode11380 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11381, (Optr)&t_block_return);
    Block PBlock11379 = new_Block_with(empty_Array, empty_Array, PThreadedCode11380, 1, PSend11381);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend11384 = new_Send((Optr)VAR_char_0_0, SMB_asCharacter, 0);
    Array PThreadedCode11383 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11384, (Optr)&t_block_return);
    Block PBlock11382 = new_Block_with(empty_Array, empty_Array, PThreadedCode11383, 1, PSend11384);
    // ifTrue:ifFalse:. 
    Send PSend11378 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11379, (Optr)PBlock11382);
    Assign PAssign11377 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11378);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // adjustOutBuffer:. 
    Send PSend11385 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend11386 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_at_put_, 2, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)VAR_toPut_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11388 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11387 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11388);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11389 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11376 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign11377, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11378, (Optr)PBlock11379, (Optr)PBlock11382, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11385, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send2, (Optr)PSend11386, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11387, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11389, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_method_return);
    Method PMethod11373 = new_Method_with(PArray11374, PArray11375, empty_Array, PThreadedCode11376, 6, PAssign11377, PSend11385, PSend11386, PAssign11387, PSend11389, VAR_char_0_0);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod11373, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    String string_11392 = new_String(L"SocketStream>>isConnected");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11392_Const = new_Constant((Optr)string_11392);
    // warn:. 
    Send PSend11393 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11392_Const);
    // isConnected. 
    Send PSend11394 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isConnected, 0);
    Array PThreadedCode11391 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11392, (Optr)&t_send1, (Optr)PSend11393, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11394, (Optr)&t_method_return);
    Method PMethod11390 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11391, 2, PSend11393, PSend11394);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod11390, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend11397 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend11398 = new_Send((Optr)self, SMB_nextPut_, 1, (Optr)PSend11397);
    Array PThreadedCode11396 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend11397, (Optr)&t_send1, (Optr)PSend11398, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11396, 2, PSend11398, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod11395, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend11401 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11404 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11405 = new_Send((Optr)PSend11404, SMB_not, 0);
    Array PThreadedCode11403 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11404, (Optr)&t_send0, (Optr)PSend11405, (Optr)&t_block_return);
    Block PBlock11402 = new_Block_with(empty_Array, empty_Array, PThreadedCode11403, 1, PSend11405);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11406 = new_Send((Optr)PSend11401, SMB_and_, 1, (Optr)PBlock11402);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11412 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend11413 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11412);
    Array PThreadedCode11411 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11412, (Optr)&t_send2, (Optr)PSend11413, (Optr)&t_block_return);
    Block PBlock11410 = new_Block_with(empty_Array, empty_Array, PThreadedCode11411, 1, PSend11413);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11415 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Array PThreadedCode11419 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11418 = new_Block_with(empty_Array, empty_Array, PThreadedCode11419, 0);
    // ifFalse:. 
    Send PSend11417 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock11418);
    Array PThreadedCode11416 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend11417, (Optr)PBlock11418, (Optr)&t_method_return);
    Block PBlock11414 = new_Block_with(PArray11415, empty_Array, PThreadedCode11416, 1, PSend11417);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11420 = new_Send((Optr)PBlock11410, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock11414);
    Assign PAssign11421 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11409 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11410, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock11414, (Optr)&t_send2, (Optr)PSend11420, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11421, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11408 = new_Block_with(empty_Array, empty_Array, PThreadedCode11409, 2, PSend11420, PAssign11421);
    // ifTrue:. 
    Send PSend11407 = new_Send((Optr)PSend11406, SMB_ifTrue_, 1, (Optr)PBlock11408);
    Array PThreadedCode11400 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11401, (Optr)&t_push_closure, (Optr)PBlock11402, (Optr)&t_send1, (Optr)PSend11406, (Optr)&t_send_ifTrue_, (Optr)PSend11407, (Optr)PBlock11408, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11399 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11400, 2, PSend11407, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod11399, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_isOtherEndConnected() {
    Symbol SMB_isOtherEndConnected = new_Symbol(L"isOtherEndConnected");
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11424 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11425 = new_Send((Optr)PSend11424, SMB_not, 0);
    Array PThreadedCode11423 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11424, (Optr)&t_send0, (Optr)PSend11425, (Optr)&t_method_return);
    Method PMethod11422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11423, 1, PSend11425);
    
    MethodClosure MC_SMB_isOtherEndConnected = new_MethodClosure((Method)PMethod11422, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isOtherEndConnected, MC_SMB_isOtherEndConnected);
}


static void init_SMB_resetBuffers() {
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11429 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11428 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11429);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11430 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign11431 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)int_1_Const);
    // streamBuffer:. 
    Send PSend11433 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11432 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11433);
    Assign PAssign11434 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11427 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign11428, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11429, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11430, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11431, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11432, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11433, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11434, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11427, 6, PAssign11428, PAssign11430, PAssign11431, PAssign11432, PAssign11434, self);
    
    MethodClosure MC_SMB_resetBuffers = new_MethodClosure((Method)PMethod11426, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resetBuffers, MC_SMB_resetBuffers);
}


static void init_SMB_debug() {
    Symbol SMB_debug = new_Symbol(L"debug");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Array PArray11436 = new_Array_with(1, (Optr)VAR_data_0_0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11439 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11438 = new_Assign((Optr)VAR_data_0_0, (Optr)PSend11439);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11441 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11444 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_11446 = new_String(L"Buffer size: ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11447 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11448 = new_Send((Optr)PSend11447, SMB_asString, 0);
    Constant string_11446_Const = new_Constant((Optr)string_11446);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11449 = new_Send((Optr)string_11446_Const, SMB__append_, 1, (Optr)PSend11448);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11450 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11449);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11451 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11452 = new_String(L"InBuffer data size: ");
    // asString. 
    Send PSend11453 = new_Send((Optr)VAR_data_0_0, SMB_asString, 0);
    Constant string_11452_Const = new_Constant((Optr)string_11452);
    // ,. 
    Send PSend11454 = new_Send((Optr)string_11452_Const, SMB__append_, 1, (Optr)PSend11453);
    // nextPutAll:. 
    Send PSend11455 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11454);
    // cr. 
    Send PSend11456 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11457 = new_String(L"In data (20):");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11458 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend11459 = new_Send((Optr)VAR_data_0_0, SMB_min_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend11460 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)PSend11459);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11461 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)PSend11458, (Optr)PSend11460);
    Constant string_11457_Const = new_Constant((Optr)string_11457);
    // ,. 
    Send PSend11462 = new_Send((Optr)string_11457_Const, SMB__append_, 1, (Optr)PSend11461);
    // nextPutAll:. 
    Send PSend11463 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11462);
    // cr. 
    Send PSend11464 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11465 = new_String(L"OutBuffer data size: ");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11466 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // asString. 
    Send PSend11467 = new_Send((Optr)PSend11466, SMB_asString, 0);
    Constant string_11465_Const = new_Constant((Optr)string_11465);
    // ,. 
    Send PSend11468 = new_Send((Optr)string_11465_Const, SMB__append_, 1, (Optr)PSend11467);
    // nextPutAll:. 
    Send PSend11469 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11468);
    // cr. 
    Send PSend11470 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11471 = new_String(L"Out data (20):");
    // -. 
    Send PSend11472 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11473 = new_Send((Optr)PSend11472, SMB_min_, 1, (Optr)int_20_Const);
    // copyFrom:to:. 
    Send PSend11474 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend11473);
    Constant string_11471_Const = new_Constant((Optr)string_11471);
    // ,. 
    Send PSend11475 = new_Send((Optr)string_11471_Const, SMB__append_, 1, (Optr)PSend11474);
    // nextPutAll:. 
    Send PSend11476 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11475);
    // cr. 
    Send PSend11477 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11445 = instantiate_Array_with(ThreadedCode_Class, 0, 120, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11446, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11447, (Optr)&t_send0, (Optr)PSend11448, (Optr)&t_send1, (Optr)PSend11449, (Optr)&t_send1, (Optr)PSend11450, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11451, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11452, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send0, (Optr)PSend11453, (Optr)&t_send1, (Optr)PSend11454, (Optr)&t_send1, (Optr)PSend11455, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11456, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11457, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11458, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11459, (Optr)&t_send1, (Optr)PSend11460, (Optr)&t_send2, (Optr)PSend11461, (Optr)&t_send1, (Optr)PSend11462, (Optr)&t_send1, (Optr)PSend11463, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11464, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11465, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11466, (Optr)&t_send0, (Optr)PSend11467, (Optr)&t_send1, (Optr)PSend11468, (Optr)&t_send1, (Optr)PSend11469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11470, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11471, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11472, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11473, (Optr)&t_send2, (Optr)PSend11474, (Optr)&t_send1, (Optr)PSend11475, (Optr)&t_send1, (Optr)PSend11476, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11477, (Optr)&t_method_return);
    Block PBlock11443 = new_Block_with(PArray11444, empty_Array, PThreadedCode11445, 10, PSend11450, PSend11451, PSend11455, PSend11456, PSend11463, PSend11464, PSend11469, PSend11470, PSend11476, PSend11477);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11478 = new_Send((Optr)PBlock11443, SMB_value_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11442 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11443, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11478, (Optr)&t_method_return);
    Block PBlock11440 = new_Block_with(PArray11441, empty_Array, PThreadedCode11442, 1, PSend11478);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend11479 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock11440);
    Array PThreadedCode11437 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11438, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11439, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock11440, (Optr)&t_send1, (Optr)PSend11479, (Optr)&t_method_return);
    Method PMethod11435 = new_Method_with(empty_Array, PArray11436, empty_Array, PThreadedCode11437, 2, PAssign11438, PSend11479);
    
    MethodClosure MC_SMB_debug = new_MethodClosure((Method)PMethod11435, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_debug, MC_SMB_debug);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray11481 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_3 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_4 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11482 = new_Array_with(4, (Optr)VAR_index_0_1, (Optr)VAR_result_0_2, (Optr)VAR_lastRecentlyRead_0_3, (Optr)VAR_searchedSoFar_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11485 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11487 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)int_0_Const);
    Assign PAssign11488 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)int_0_Const);
    Assign PAssign11489 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11492 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11493 = new_Send((Optr)PSend11492, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11496 = new_Send((Optr)VAR_lastRecentlyRead_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11499 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11500 = new_Send((Optr)PSend11499, SMB_not, 0);
    Array PThreadedCode11498 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11499, (Optr)&t_send0, (Optr)PSend11500, (Optr)&t_block_return);
    Block PBlock11497 = new_Block_with(empty_Array, empty_Array, PThreadedCode11498, 1, PSend11500);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11501 = new_Send((Optr)PSend11496, SMB_and_, 1, (Optr)PBlock11497);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11504 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11505 = new_Send((Optr)PSend11504, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11503 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11504, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11505, (Optr)&t_block_return);
    Block PBlock11502 = new_Block_with(empty_Array, empty_Array, PThreadedCode11503, 1, PSend11505);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11506 = new_Send((Optr)PSend11501, SMB_or_, 1, (Optr)PBlock11502);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11513 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11512 = new_Send((Optr)PSend11513, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOf:startingAt:. 
    Send PSend11511 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOf_startingAt_, 2, (Optr)VAR_aCharacterOrByte_0_0, (Optr)PSend11512);
    Assign PAssign11510 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11511);
    // inBufferSize. 
    Send PSend11515 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11514 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)PSend11515);
    // >. 
    Send PSend11516 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11519 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // >. 
    Send PSend11520 = new_Send((Optr)PSend11519, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11518 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11519, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11520, (Optr)&t_block_return);
    Block PBlock11517 = new_Block_with(empty_Array, empty_Array, PThreadedCode11518, 1, PSend11520);
    // and:. 
    Send PSend11521 = new_Send((Optr)PSend11516, SMB_and_, 1, (Optr)PBlock11517);
    Assign PAssign11525 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11524 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11525, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11523 = new_Block_with(empty_Array, empty_Array, PThreadedCode11524, 1, PAssign11525);
    // ifTrue:. 
    Send PSend11522 = new_Send((Optr)PSend11521, SMB_ifTrue_, 1, (Optr)PBlock11523);
    Array PThreadedCode11509 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11510, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_4, (Optr)&t_send1, (Optr)PSend11513, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11512, (Optr)&t_send2, (Optr)PSend11511, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11514, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11515, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11516, (Optr)&t_push_closure, (Optr)PBlock11517, (Optr)&t_send1, (Optr)PSend11521, (Optr)&t_send_ifTrue_, (Optr)PSend11522, (Optr)PBlock11523, (Optr)&t_block_return);
    Block PBlock11508 = new_Block_with(empty_Array, empty_Array, PThreadedCode11509, 3, PAssign11510, PAssign11514, PSend11522);
    // ifTrue:. 
    Send PSend11507 = new_Send((Optr)PSend11506, SMB_ifTrue_, 1, (Optr)PBlock11508);
    // =. 
    Send PSend11526 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11495 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11496, (Optr)&t_push_closure, (Optr)PBlock11497, (Optr)&t_send1, (Optr)PSend11501, (Optr)&t_push_closure, (Optr)PBlock11502, (Optr)&t_send1, (Optr)PSend11506, (Optr)&t_send_ifTrue_, (Optr)PSend11507, (Optr)PBlock11508, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11526, (Optr)&t_block_return);
    Block PBlock11494 = new_Block_with(empty_Array, empty_Array, PThreadedCode11495, 2, PSend11507, PSend11526);
    // and:. 
    Send PSend11527 = new_Send((Optr)PSend11493, SMB_and_, 1, (Optr)PBlock11494);
    Array PThreadedCode11491 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11492, (Optr)&t_send0, (Optr)PSend11493, (Optr)&t_push_closure, (Optr)PBlock11494, (Optr)&t_send1, (Optr)PSend11527, (Optr)&t_block_return);
    Block PBlock11490 = new_Block_with(empty_Array, empty_Array, PThreadedCode11491, 1, PSend11527);
    String string_11530 = new_String(L"Buffer: ");
    Constant string_11530_Const = new_Constant((Optr)string_11530);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11531 = new_Send((Optr)string_11530_Const, SMB__append_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend11532 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11531);
    // =. 
    Send PSend11533 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11537 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11536 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11537, (Optr)&t_block_return);
    Block PBlock11535 = new_Block_with(empty_Array, empty_Array, PThreadedCode11536, 1, PSend11537);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11540 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11539 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11540, (Optr)&t_block_return);
    Block PBlock11538 = new_Block_with(empty_Array, empty_Array, PThreadedCode11539, 1, PSend11540);
    // ifTrue:ifFalse:. 
    Send PSend11534 = new_Send((Optr)PSend11533, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11535, (Optr)PBlock11538);
    Assign PAssign11541 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11529 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11530, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend11531, (Optr)&t_send1, (Optr)PSend11532, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11533, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11534, (Optr)PBlock11535, (Optr)PBlock11538, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11541, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11528 = new_Block_with(empty_Array, empty_Array, PThreadedCode11529, 3, PSend11532, PSend11534, PAssign11541);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11542 = new_Send((Optr)PBlock11490, SMB_whileTrue_, 1, (Optr)PBlock11528);
    // >. 
    Send PSend11543 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11550 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11549 = new_Send((Optr)PSend11550, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11548 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11549);
    Assign PAssign11547 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend11548);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11551 = new_Send((Optr)self, SMB_skip_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11552 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode11546 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11547, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11550, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11549, (Optr)&t_send1, (Optr)PSend11548, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11551, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend11552, (Optr)&t_block_return);
    Block PBlock11545 = new_Block_with(empty_Array, empty_Array, PThreadedCode11546, 3, PAssign11547, PSend11551, PSend11552);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11555 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11556 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11555);
    Array PThreadedCode11554 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11555, (Optr)&t_send1, (Optr)PSend11556, (Optr)&t_block_return);
    Block PBlock11553 = new_Block_with(empty_Array, empty_Array, PThreadedCode11554, 1, PSend11556);
    // ifTrue:ifFalse:. 
    Send PSend11544 = new_Send((Optr)PSend11543, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11545, (Optr)PBlock11553);
    Array PThreadedCode11486 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11487, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11488, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11489, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11490, (Optr)&t_push_closure, (Optr)PBlock11528, (Optr)&t_send1, (Optr)PSend11542, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11543, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11544, (Optr)PBlock11545, (Optr)PBlock11553, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11484 = new_Block_with(PArray11485, empty_Array, PThreadedCode11486, 6, PAssign11487, PAssign11488, PAssign11489, PSend11542, PSend11544, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11557 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11484);
    Array PThreadedCode11483 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11484, (Optr)&t_send1, (Optr)PSend11557, (Optr)&t_method_return);
    Method PMethod11480 = new_Method_with(PArray11481, PArray11482, empty_Array, PThreadedCode11483, 1, PSend11557);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod11480, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11564 = new_Send((Optr)self, SMB_atEnd, 0);
    Array PThreadedCode11563 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11564, (Optr)&t_block_return);
    Block PBlock11562 = new_Block_with(empty_Array, empty_Array, PThreadedCode11563, 1, PSend11564);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11567 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11566 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11567, (Optr)&t_block_return);
    Block PBlock11565 = new_Block_with(empty_Array, empty_Array, PThreadedCode11566, 1, PSend11567);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend11568 = new_Send((Optr)PBlock11562, SMB_whileFalse_, 1, (Optr)PBlock11565);
    Array PThreadedCode11561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11562, (Optr)&t_push_closure, (Optr)PBlock11565, (Optr)&t_send1, (Optr)PSend11568, (Optr)&t_block_return);
    Block PBlock11560 = new_Block_with(empty_Array, empty_Array, PThreadedCode11561, 1, PSend11568);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11570 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode11571 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock11569 = new_Block_with(PArray11570, empty_Array, PThreadedCode11571, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11572 = new_Send((Optr)PBlock11560, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock11569);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11573 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode11559 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock11560, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock11569, (Optr)&t_send2, (Optr)PSend11572, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11573, (Optr)&t_method_return);
    Method PMethod11558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11559, 2, PSend11572, PSend11573);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod11558, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_recentlyRead() {
    Symbol SMB_recentlyRead = new_Symbol(L"recentlyRead");
    Array PThreadedCode11575 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_method_return);
    Method PMethod11574 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11575, 1, slot_IO_SocketStream_recentlyRead);
    
    MethodClosure MC_SMB_recentlyRead = new_MethodClosure((Method)PMethod11574, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_recentlyRead, MC_SMB_recentlyRead);
}


static void init_class_SMB_openConnectionToHostNamed_port_() {
    Symbol SMB_openConnectionToHostNamed_port_ = new_Symbol(L"openConnectionToHostNamed:port:");
    Variable VAR_hostName_0_0 = new_Variable_named(L"hostName", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11577 = new_Array_with(2, (Optr)VAR_hostName_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_hostIP_0_2 = new_Variable_named(L"hostIP", 0);
    Array PArray11578 = new_Array_with(1, (Optr)VAR_hostIP_0_2);
    Symbol SMB_addressForName_timeout_ = new_Symbol(L"addressForName:timeout:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // addressForName:timeout:. 
    Send PSend11581 = new_Send((Optr)NetNameResolver_classReference, SMB_addressForName_timeout_, 2, (Optr)VAR_hostName_0_0, (Optr)int_20_Const);
    Assign PAssign11580 = new_Assign((Optr)VAR_hostIP_0_2, (Optr)PSend11581);
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    // openConnectionToHost:port:. 
    Send PSend11582 = new_Send((Optr)self, SMB_openConnectionToHost_port_, 2, (Optr)VAR_hostIP_0_2, (Optr)VAR_portNumber_0_1);
    Array PThreadedCode11579 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign11580, (Optr)&t_push_class_reference, (Optr)NetNameResolver_classReference, (Optr)&t_push_variable, (Optr)VAR_hostName_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send2, (Optr)PSend11581, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_2, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11582, (Optr)&t_method_return);
    Method PMethod11576 = new_Method_with(PArray11577, PArray11578, empty_Array, PThreadedCode11579, 2, PAssign11580, PSend11582);
    
    MethodClosure MC_SMB_openConnectionToHostNamed_port_ = new_MethodClosure((Method)PMethod11576, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHostNamed_port_, MC_SMB_openConnectionToHostNamed_port_);
}


static void init_class_SMB_openConnectionToHost_port_() {
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    Variable VAR_hostIP_0_0 = new_Variable_named(L"hostIP", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11584 = new_Array_with(2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_socket_0_2 = new_Variable_named(L"socket", 0);
    Array PArray11585 = new_Array_with(1, (Optr)VAR_socket_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11588 = new_Send((Optr)PSocket_classReference, SMB_new, 0);
    Assign PAssign11587 = new_Assign((Optr)VAR_socket_0_2, (Optr)PSend11588);
    Symbol SMB_connectTo_port_ = new_Symbol(L"connectTo:port:");
    // connectTo:port:. 
    Send PSend11589 = new_Send((Optr)VAR_socket_0_2, SMB_connectTo_port_, 2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11590 = new_Send((Optr)self, SMB_on_, 1, (Optr)VAR_socket_0_2);
    Array PThreadedCode11586 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign11587, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11588, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_0, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11589, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_send1, (Optr)PSend11590, (Optr)&t_method_return);
    Method PMethod11583 = new_Method_with(PArray11584, PArray11585, empty_Array, PThreadedCode11586, 3, PAssign11587, PSend11589, PSend11590);
    
    MethodClosure MC_SMB_openConnectionToHost_port_ = new_MethodClosure((Method)PMethod11583, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHost_port_, MC_SMB_openConnectionToHost_port_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode11592 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod11591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11592, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod11591, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_socket_0_0 = new_Variable_named(L"socket", 0);
    Array PArray11594 = new_Array_with(1, (Optr)VAR_socket_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11596 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    // socket:. 
    Send PSend11597 = new_Send((Optr)PSend11596, SMB_socket_, 1, (Optr)VAR_socket_0_0);
    Array PThreadedCode11595 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11596, (Optr)&t_push_variable, (Optr)VAR_socket_0_0, (Optr)&t_send1, (Optr)PSend11597, (Optr)&t_method_return);
    Method PMethod11593 = new_Method_with(PArray11594, empty_Array, empty_Array, PThreadedCode11595, 1, PSend11597);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod11593, HEADER(IO_SocketStream_Class));
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