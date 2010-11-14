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
    Array PArray10592 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10594 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10593 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10594, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10591 = new_Method_with(PArray10592, empty_Array, empty_Array, PThreadedCode10593, 2, PAssign10594, self);
    
    MethodClosure MC_SMB_shouldSignal_ = new_MethodClosure((Method)PMethod10591, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal_, MC_SMB_shouldSignal_);
}


static void init_SMB_binary() {
    Symbol SMB_binary = new_Symbol(L"binary");
    Assign PAssign10597 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)true_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10598 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10596 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10597, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10598, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10595 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10596, 3, PAssign10597, PSend10598, self);
    
    MethodClosure MC_SMB_binary = new_MethodClosure((Method)PMethod10595, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_binary, MC_SMB_binary);
}


static void init_SMB_nextLine() {
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    // nextLineCrLf. 
    Send PSend10601 = new_Send((Optr)self, SMB_nextLineCrLf, 0);
    Array PThreadedCode10600 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10601, (Optr)&t_method_return);
    Method PMethod10599 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10600, 1, PSend10601);
    
    MethodClosure MC_SMB_nextLine = new_MethodClosure((Method)PMethod10599, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLine, MC_SMB_nextLine);
}


static void init_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10604 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10605 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10604);
    Array PThreadedCode10603 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10604, (Optr)&t_send1, (Optr)PSend10605, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10602 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10603, 2, PSend10605, self);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod10602, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_crlf, MC_SMB_crlf);
}


static void init_SMB_noTimeout() {
    Symbol SMB_noTimeout = new_Symbol(L"noTimeout");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10608 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)int_0_Const);
    Array PThreadedCode10607 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign10608, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10607, 2, PAssign10608, self);
    
    MethodClosure MC_SMB_noTimeout = new_MethodClosure((Method)PMethod10606, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_noTimeout, MC_SMB_noTimeout);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    String string_10611 = new_String(L"SocketStream>>receiveData");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10611_Const = new_Constant((Optr)string_10611);
    // warn:. 
    Send PSend10612 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10611_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_10617 = new_String(L"SocketStream>>receiveData: should signal");
    Constant string_10617_Const = new_Constant((Optr)string_10617);
    // warn:. 
    Send PSend10618 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10617_Const);
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    // shouldTimeout. 
    Send PSend10619 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10623 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10623_Const = new_Constant((Optr)string_10623);
    // warn:. 
    Send PSend10624 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10623_Const);
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    // receiveDataSignallingTimeout:into:startingAt:. 
    Send PSend10625 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10622 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10623, (Optr)&t_send1, (Optr)PSend10624, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10625, (Optr)&t_block_return);
    Block PBlock10621 = new_Block_with(empty_Array, empty_Array, PThreadedCode10622, 2, PSend10624, PSend10625);
    String string_10628 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10628_Const = new_Constant((Optr)string_10628);
    // warn:. 
    Send PSend10629 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10628_Const);
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    // receiveDataSignallingClosedInto:startingAt:. 
    Send PSend10630 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingClosedInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10627 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10628, (Optr)&t_send1, (Optr)PSend10629, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10630, (Optr)&t_block_return);
    Block PBlock10626 = new_Block_with(empty_Array, empty_Array, PThreadedCode10627, 2, PSend10629, PSend10630);
    // ifTrue:ifFalse:. 
    Send PSend10620 = new_Send((Optr)PSend10619, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10621, (Optr)PBlock10626);
    Array PThreadedCode10616 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10617, (Optr)&t_send1, (Optr)PSend10618, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10619, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10620, (Optr)PBlock10621, (Optr)PBlock10626, (Optr)&t_block_return);
    Block PBlock10615 = new_Block_with(empty_Array, empty_Array, PThreadedCode10616, 2, PSend10618, PSend10620);
    String string_10633 = new_String(L"SocketStream>>receiveData: should NOT signal");
    Constant string_10633_Const = new_Constant((Optr)string_10633);
    // warn:. 
    Send PSend10634 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10633_Const);
    // shouldTimeout. 
    Send PSend10635 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10639 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10639_Const = new_Constant((Optr)string_10639);
    // warn:. 
    Send PSend10640 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10639_Const);
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    // receiveDataTimeout:into:startingAt:. 
    Send PSend10641 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10638 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10639, (Optr)&t_send1, (Optr)PSend10640, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10641, (Optr)&t_block_return);
    Block PBlock10637 = new_Block_with(empty_Array, empty_Array, PThreadedCode10638, 2, PSend10640, PSend10641);
    String string_10644 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10644_Const = new_Constant((Optr)string_10644);
    // warn:. 
    Send PSend10645 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10644_Const);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10646 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10643 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10644, (Optr)&t_send1, (Optr)PSend10645, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10646, (Optr)&t_block_return);
    Block PBlock10642 = new_Block_with(empty_Array, empty_Array, PThreadedCode10643, 2, PSend10645, PSend10646);
    // ifTrue:ifFalse:. 
    Send PSend10636 = new_Send((Optr)PSend10635, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10637, (Optr)PBlock10642);
    Array PThreadedCode10632 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10633, (Optr)&t_send1, (Optr)PSend10634, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10635, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10636, (Optr)PBlock10637, (Optr)PBlock10642, (Optr)&t_block_return);
    Block PBlock10631 = new_Block_with(empty_Array, empty_Array, PThreadedCode10632, 2, PSend10634, PSend10636);
    // ifTrue:ifFalse:. 
    Send PSend10614 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10615, (Optr)PBlock10631);
    Assign PAssign10613 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10614);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10647 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10610 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10611, (Optr)&t_send1, (Optr)PSend10612, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10613, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10614, (Optr)PBlock10615, (Optr)PBlock10631, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10647, (Optr)&t_method_return);
    Method PMethod10609 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10610, 3, PSend10612, PAssign10613, PSend10647);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod10609, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_isBinary() {
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    Array PThreadedCode10649 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_method_return);
    Method PMethod10648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10649, 1, slot_IO_SocketStream_binary);
    
    MethodClosure MC_SMB_isBinary = new_MethodClosure((Method)PMethod10648, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isBinary, MC_SMB_isBinary);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper10652 = new_Super(SMB_initialize, 0);
    Assign PAssign10653 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)true_Const);
    Assign PAssign10654 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)true_Const);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10655 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)int_0_Const);
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    Assign PAssign10656 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)int_4096_Const);
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend10657 = new_Send((Optr)self, SMB_ascii, 0);
    Array PThreadedCode10651 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper10652, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10653, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10654, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10655, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10656, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10657, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10650 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10651, 7, PSuper10652, PAssign10653, PAssign10654, PAssign10655, PAssign10656, PSend10657, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10650, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_peekFor_() {
    Symbol SMB_peekFor_ = new_Symbol(L"peekFor:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray10659 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_nextObject_0_1 = new_Variable_named(L"nextObject", 0);
    Array PArray10660 = new_Array_with(1, (Optr)VAR_nextObject_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10663 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10665 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10669 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10668 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10669, (Optr)&t_block_return);
    Block PBlock10667 = new_Block_with(empty_Array, empty_Array, PThreadedCode10668, 1, PSend10669);
    // ifTrue:. 
    Send PSend10666 = new_Send((Optr)PSend10665, SMB_ifTrue_, 1, (Optr)PBlock10667);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10670 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10674 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10675 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10679 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10678 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10679, (Optr)&t_block_return);
    Block PBlock10677 = new_Block_with(empty_Array, empty_Array, PThreadedCode10678, 1, PSend10679);
    // ifTrue:. 
    Send PSend10676 = new_Send((Optr)PSend10675, SMB_ifTrue_, 1, (Optr)PBlock10677);
    Array PThreadedCode10673 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10674, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10675, (Optr)&t_send_ifTrue_, (Optr)PSend10676, (Optr)PBlock10677, (Optr)&t_block_return);
    Block PBlock10672 = new_Block_with(empty_Array, empty_Array, PThreadedCode10673, 2, PSend10674, PSend10676);
    // ifTrue:. 
    Send PSend10671 = new_Send((Optr)PSend10670, SMB_ifTrue_, 1, (Optr)PBlock10672);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10681 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Assign PAssign10680 = new_Assign((Optr)VAR_nextObject_0_1, (Optr)PSend10681);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10682 = new_Send((Optr)VAR_nextObject_0_1, SMB__equals_, 1, (Optr)VAR_aCharacterOrByte_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10687 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10686 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10687);
    // escape:. 
    Send PSend10688 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10685 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10686, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10687, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10688, (Optr)&t_block_return);
    Block PBlock10684 = new_Block_with(empty_Array, empty_Array, PThreadedCode10685, 2, PAssign10686, PSend10688);
    // ifTrue:. 
    Send PSend10683 = new_Send((Optr)PSend10682, SMB_ifTrue_, 1, (Optr)PBlock10684);
    Array PThreadedCode10664 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10665, (Optr)&t_send_ifTrue_, (Optr)PSend10666, (Optr)PBlock10667, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10670, (Optr)&t_send_ifTrue_, (Optr)PSend10671, (Optr)PBlock10672, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10680, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10681, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_send1, (Optr)PSend10682, (Optr)&t_send_ifTrue_, (Optr)PSend10683, (Optr)PBlock10684, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock10662 = new_Block_with(PArray10663, empty_Array, PThreadedCode10664, 5, PSend10666, PSend10671, PAssign10680, PSend10683, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10689 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10662);
    Array PThreadedCode10661 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10662, (Optr)&t_send1, (Optr)PSend10689, (Optr)&t_method_return);
    Method PMethod10658 = new_Method_with(PArray10659, PArray10660, empty_Array, PThreadedCode10661, 1, PSend10689);
    
    MethodClosure MC_SMB_peekFor_ = new_MethodClosure((Method)PMethod10658, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekFor_, MC_SMB_peekFor_);
}


static void init_SMB_peekForAll_() {
    Symbol SMB_peekForAll_ = new_Symbol(L"peekForAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10691 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_sz_0_1 = new_Variable_named(L"sz", 0);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray10692 = new_Array_with(2, (Optr)VAR_sz_0_1, (Optr)VAR_start_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10695 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10698 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Assign PAssign10697 = new_Assign((Optr)VAR_sz_0_1, (Optr)PSend10698);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10699 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10700 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10701 = new_Send((Optr)PSend10700, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend10702 = new_Send((Optr)PSend10701, SMB__lt_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10706 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10705 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10706, (Optr)&t_block_return);
    Block PBlock10704 = new_Block_with(empty_Array, empty_Array, PThreadedCode10705, 1, PSend10706);
    // ifTrue:. 
    Send PSend10703 = new_Send((Optr)PSend10702, SMB_ifTrue_, 1, (Optr)PBlock10704);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10708 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10707 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend10708);
    Symbol SMB_findString_startingAt_ = new_Symbol(L"findString:startingAt:");
    // findString:startingAt:. 
    Send PSend10709 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_findString_startingAt_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_start_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10710 = new_Send((Optr)PSend10709, SMB__equals_, 1, (Optr)VAR_start_0_2);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend10714 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10713 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10714, (Optr)&t_block_return);
    Block PBlock10712 = new_Block_with(empty_Array, empty_Array, PThreadedCode10713, 1, PSend10714);
    // ifFalse:. 
    Send PSend10711 = new_Send((Optr)PSend10710, SMB_ifFalse_, 1, (Optr)PBlock10712);
    // +. 
    Send PSend10716 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_sz_0_1);
    Assign PAssign10715 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10716);
    Array PThreadedCode10696 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign10697, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend10698, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10699, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10700, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10701, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10702, (Optr)&t_send_ifTrue_, (Optr)PSend10703, (Optr)PBlock10704, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10707, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10708, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send2, (Optr)PSend10709, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send1, (Optr)PSend10710, (Optr)&t_send_ifFalse_, (Optr)PSend10711, (Optr)PBlock10712, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10715, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10716, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock10694 = new_Block_with(PArray10695, empty_Array, PThreadedCode10696, 7, PAssign10697, PSend10699, PSend10703, PAssign10707, PSend10711, PAssign10715, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10717 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10694);
    Array PThreadedCode10693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10694, (Optr)&t_send1, (Optr)PSend10717, (Optr)&t_method_return);
    Method PMethod10690 = new_Method_with(PArray10691, PArray10692, empty_Array, PThreadedCode10693, 1, PSend10717);
    
    MethodClosure MC_SMB_peekForAll_ = new_MethodClosure((Method)PMethod10690, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekForAll_, MC_SMB_peekForAll_);
}


static void init_SMB_receiveAvailableData() {
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10721 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10720 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10721);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10722 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10719 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10720, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10721, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10722, (Optr)&t_method_return);
    Method PMethod10718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10719, 2, PAssign10720, PSend10722);
    
    MethodClosure MC_SMB_receiveAvailableData = new_MethodClosure((Method)PMethod10718, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveAvailableData, MC_SMB_receiveAvailableData);
}


static void init_SMB_autoFlush_() {
    Symbol SMB_autoFlush_ = new_Symbol(L"autoFlush:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10724 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10726 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10725 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10726, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10723 = new_Method_with(PArray10724, empty_Array, empty_Array, PThreadedCode10725, 2, PAssign10726, self);
    
    MethodClosure MC_SMB_autoFlush_ = new_MethodClosure((Method)PMethod10723, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush_, MC_SMB_autoFlush_);
}


static void init_SMB_nextLineCrLf() {
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10729 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend10730 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend10729);
    Array PThreadedCode10728 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10729, (Optr)&t_send1, (Optr)PSend10730, (Optr)&t_method_return);
    Method PMethod10727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10728, 1, PSend10730);
    
    MethodClosure MC_SMB_nextLineCrLf = new_MethodClosure((Method)PMethod10727, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineCrLf, MC_SMB_nextLineCrLf);
}


static void init_SMB_isStream() {
    Symbol SMB_isStream = new_Symbol(L"isStream");
    Array PThreadedCode10732 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod10731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10732, 1, true_Const);
    
    MethodClosure MC_SMB_isStream = new_MethodClosure((Method)PMethod10731, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isStream, MC_SMB_isStream);
}


static void init_SMB_receiveData_() {
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    Variable VAR_nBytes_0_0 = new_Variable_named(L"nBytes", 0);
    Array PArray10734 = new_Array_with(1, (Optr)VAR_nBytes_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10738 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10739 = new_Send((Optr)PSend10738, SMB_not, 0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10742 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10743 = new_Send((Optr)VAR_nBytes_0_0, SMB__gt_, 1, (Optr)PSend10742);
    Array PThreadedCode10741 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_nBytes_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10742, (Optr)&t_send1, (Optr)PSend10743, (Optr)&t_block_return);
    Block PBlock10740 = new_Block_with(empty_Array, empty_Array, PThreadedCode10741, 1, PSend10743);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10744 = new_Send((Optr)PSend10739, SMB_and_, 1, (Optr)PBlock10740);
    Array PThreadedCode10737 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10738, (Optr)&t_send0, (Optr)PSend10739, (Optr)&t_push_closure, (Optr)PBlock10740, (Optr)&t_send1, (Optr)PSend10744, (Optr)&t_block_return);
    Block PBlock10736 = new_Block_with(empty_Array, empty_Array, PThreadedCode10737, 1, PSend10744);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10747 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10746 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10747, (Optr)&t_block_return);
    Block PBlock10745 = new_Block_with(empty_Array, empty_Array, PThreadedCode10746, 1, PSend10747);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10748 = new_Send((Optr)PBlock10736, SMB_whileTrue_, 1, (Optr)PBlock10745);
    Array PThreadedCode10735 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock10736, (Optr)&t_push_closure, (Optr)PBlock10745, (Optr)&t_send1, (Optr)PSend10748, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10733 = new_Method_with(PArray10734, empty_Array, empty_Array, PThreadedCode10735, 2, PSend10748, self);
    
    MethodClosure MC_SMB_receiveData_ = new_MethodClosure((Method)PMethod10733, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData_, MC_SMB_receiveData_);
}


static void init_SMB_streamBuffer_() {
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray10750 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend10752 = new_Send((Optr)self, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode10755 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ByteArray_classReference, (Optr)&t_block_return);
    Block PBlock10754 = new_Block_with(empty_Array, empty_Array, PThreadedCode10755, 1, ByteArray_classReference);
    Array PThreadedCode10757 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_block_return);
    Block PBlock10756 = new_Block_with(empty_Array, empty_Array, PThreadedCode10757, 1, String_classReference);
    // ifTrue:ifFalse:. 
    Send PSend10753 = new_Send((Optr)PSend10752, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10754, (Optr)PBlock10756);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend10758 = new_Send((Optr)PSend10753, SMB_new_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode10751 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10752, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10753, (Optr)PBlock10754, (Optr)PBlock10756, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend10758, (Optr)&t_method_return);
    Method PMethod10749 = new_Method_with(PArray10750, empty_Array, empty_Array, PThreadedCode10751, 1, PSend10758);
    
    MethodClosure MC_SMB_streamBuffer_ = new_MethodClosure((Method)PMethod10749, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_streamBuffer_, MC_SMB_streamBuffer_);
}


static void init_SMB_socket_() {
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray10760 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Assign PAssign10762 = new_Assign((Optr)slot_IO_SocketStream_socket, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode10761 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10762, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10759 = new_Method_with(PArray10760, empty_Array, empty_Array, PThreadedCode10761, 2, PAssign10762, self);
    
    MethodClosure MC_SMB_socket_ = new_MethodClosure((Method)PMethod10759, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket_, MC_SMB_socket_);
}


static void init_SMB_ascii() {
    Symbol SMB_ascii = new_Symbol(L"ascii");
    Assign PAssign10765 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)false_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10766 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10764 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10765, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10766, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10763 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10764, 3, PAssign10765, PSend10766, self);
    
    MethodClosure MC_SMB_ascii = new_MethodClosure((Method)PMethod10763, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ascii, MC_SMB_ascii);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray10768 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Assign PAssign10770 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)VAR_seconds_0_0);
    Array PThreadedCode10769 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10770, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10767 = new_Method_with(PArray10768, empty_Array, empty_Array, PThreadedCode10769, 2, PAssign10770, self);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod10767, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_shouldTimeout() {
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend10773 = new_Send((Optr)self, SMB_timeout, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10774 = new_Send((Optr)PSend10773, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode10772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10773, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10774, (Optr)&t_method_return);
    Method PMethod10771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10772, 1, PSend10774);
    
    MethodClosure MC_SMB_shouldTimeout = new_MethodClosure((Method)PMethod10771, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldTimeout, MC_SMB_shouldTimeout);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10778 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10780 = new_String(L"SocketStream>>peek");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10780_Const = new_Constant((Optr)string_10780);
    // warn:. 
    Send PSend10781 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10780_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10782 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10786 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10785 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10786, (Optr)&t_block_return);
    Block PBlock10784 = new_Block_with(empty_Array, empty_Array, PThreadedCode10785, 1, PSend10786);
    // ifTrue:. 
    Send PSend10783 = new_Send((Optr)PSend10782, SMB_ifTrue_, 1, (Optr)PBlock10784);
    String string_10787 = new_String(L"SocketStream>>peek: not at end");
    Constant string_10787_Const = new_Constant((Optr)string_10787);
    // warn:. 
    Send PSend10788 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10787_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10789 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    String string_10793 = new_String(L"SocketStream>>peek: in buffer is empty");
    Constant string_10793_Const = new_Constant((Optr)string_10793);
    // warn:. 
    Send PSend10794 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10793_Const);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10795 = new_Send((Optr)self, SMB_receiveData, 0);
    String string_10796 = new_String(L"SocketStream>>peek: recevied data");
    Constant string_10796_Const = new_Constant((Optr)string_10796);
    // warn:. 
    Send PSend10797 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10796_Const);
    // atEnd. 
    Send PSend10798 = new_Send((Optr)self, SMB_atEnd, 0);
    String string_10802 = new_String(L"SocketStream>>peek: at end");
    Constant string_10802_Const = new_Constant((Optr)string_10802);
    // warn:. 
    Send PSend10803 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10802_Const);
    // escape:. 
    Send PSend10804 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10801 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10802, (Optr)&t_send1, (Optr)PSend10803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10804, (Optr)&t_block_return);
    Block PBlock10800 = new_Block_with(empty_Array, empty_Array, PThreadedCode10801, 2, PSend10803, PSend10804);
    // ifTrue:. 
    Send PSend10799 = new_Send((Optr)PSend10798, SMB_ifTrue_, 1, (Optr)PBlock10800);
    Array PThreadedCode10792 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10793, (Optr)&t_send1, (Optr)PSend10794, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10795, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10796, (Optr)&t_send1, (Optr)PSend10797, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10798, (Optr)&t_send_ifTrue_, (Optr)PSend10799, (Optr)PBlock10800, (Optr)&t_block_return);
    Block PBlock10791 = new_Block_with(empty_Array, empty_Array, PThreadedCode10792, 4, PSend10794, PSend10795, PSend10797, PSend10799);
    // ifTrue:. 
    Send PSend10790 = new_Send((Optr)PSend10789, SMB_ifTrue_, 1, (Optr)PBlock10791);
    String string_10805 = new_String(L"SocketStream>>peek: return...");
    Constant string_10805_Const = new_Constant((Optr)string_10805);
    // warn:. 
    Send PSend10806 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10805_Const);
    String string_10807 = new_String(L"SocketStream>>peek: in buffer is");
    Constant string_10807_Const = new_Constant((Optr)string_10807);
    // warn:. 
    Send PSend10808 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10807_Const);
    // warn:. 
    Send PSend10809 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    String string_10810 = new_String(L"SocketStream>>peek: last read is");
    Constant string_10810_Const = new_Constant((Optr)string_10810);
    // warn:. 
    Send PSend10811 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10810_Const);
    // warn:. 
    Send PSend10812 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10813 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10814 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)PSend10813);
    Array PThreadedCode10779 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10780, (Optr)&t_send1, (Optr)PSend10781, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10782, (Optr)&t_send_ifTrue_, (Optr)PSend10783, (Optr)PBlock10784, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10787, (Optr)&t_send1, (Optr)PSend10788, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10789, (Optr)&t_send_ifTrue_, (Optr)PSend10790, (Optr)PBlock10791, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10805, (Optr)&t_send1, (Optr)PSend10806, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10807, (Optr)&t_send1, (Optr)PSend10808, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend10809, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10810, (Optr)&t_send1, (Optr)PSend10811, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10812, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10813, (Optr)&t_send1, (Optr)PSend10814, (Optr)&t_method_return);
    Block PBlock10777 = new_Block_with(PArray10778, empty_Array, PThreadedCode10779, 10, PSend10781, PSend10783, PSend10788, PSend10790, PSend10806, PSend10808, PSend10809, PSend10811, PSend10812, PSend10814);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10815 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10777);
    Array PThreadedCode10776 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10777, (Optr)&t_send1, (Optr)PSend10815, (Optr)&t_method_return);
    Method PMethod10775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10776, 1, PSend10815);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod10775, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_shouldSignal() {
    Symbol SMB_shouldSignal = new_Symbol(L"shouldSignal");
    Array PThreadedCode10817 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_method_return);
    Method PMethod10816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10817, 1, slot_IO_SocketStream_shouldSignal);
    
    MethodClosure MC_SMB_shouldSignal = new_MethodClosure((Method)PMethod10816, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal, MC_SMB_shouldSignal);
}


static void init_SMB_bufferSize() {
    Symbol SMB_bufferSize = new_Symbol(L"bufferSize");
    Array PThreadedCode10819 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_method_return);
    Method PMethod10818 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10819, 1, slot_IO_SocketStream_bufferSize);
    
    MethodClosure MC_SMB_bufferSize = new_MethodClosure((Method)PMethod10818, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize, MC_SMB_bufferSize);
}


static void init_SMB_nextPutAllFlush_() {
    Symbol SMB_nextPutAllFlush_ = new_Symbol(L"nextPutAllFlush:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10821 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10822 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10828 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10827 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10828, (Optr)&t_block_return);
    Block PBlock10826 = new_Block_with(empty_Array, empty_Array, PThreadedCode10827, 1, PSend10828);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10831 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10830 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10831, (Optr)&t_block_return);
    Block PBlock10829 = new_Block_with(empty_Array, empty_Array, PThreadedCode10830, 1, PSend10831);
    // ifTrue:ifFalse:. 
    Send PSend10825 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10826, (Optr)PBlock10829);
    Assign PAssign10824 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10825);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10832 = new_Send((Optr)self, SMB_flush, 0);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend10833 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10839 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend10840 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)VAR_toPut_0_1, (Optr)PSend10839);
    Array PThreadedCode10838 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10839, (Optr)&t_send2, (Optr)PSend10840, (Optr)&t_block_return);
    Block PBlock10837 = new_Block_with(empty_Array, empty_Array, PThreadedCode10838, 1, PSend10840);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray10842 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode10846 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock10845 = new_Block_with(empty_Array, empty_Array, PThreadedCode10846, 0);
    // ifFalse:. 
    Send PSend10844 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock10845);
    Array PThreadedCode10843 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend10844, (Optr)PBlock10845, (Optr)&t_method_return);
    Block PBlock10841 = new_Block_with(PArray10842, empty_Array, PThreadedCode10843, 1, PSend10844);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10847 = new_Send((Optr)PBlock10837, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock10841);
    Array PThreadedCode10836 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock10837, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock10841, (Optr)&t_send2, (Optr)PSend10847, (Optr)&t_block_return);
    Block PBlock10835 = new_Block_with(empty_Array, empty_Array, PThreadedCode10836, 1, PSend10847);
    // ifFalse:. 
    Send PSend10834 = new_Send((Optr)PSend10833, SMB_ifFalse_, 1, (Optr)PBlock10835);
    Array PThreadedCode10823 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign10824, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10825, (Optr)PBlock10826, (Optr)PBlock10829, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10832, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10833, (Optr)&t_send_ifFalse_, (Optr)PSend10834, (Optr)PBlock10835, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10820 = new_Method_with(PArray10821, PArray10822, empty_Array, PThreadedCode10823, 4, PAssign10824, PSend10832, PSend10834, self);
    
    MethodClosure MC_SMB_nextPutAllFlush_ = new_MethodClosure((Method)PMethod10820, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAllFlush_, MC_SMB_nextPutAllFlush_);
}


static void init_SMB_outBufferSize() {
    Symbol SMB_outBufferSize = new_Symbol(L"outBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10850 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10849 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10850, (Optr)&t_method_return);
    Method PMethod10848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10849, 1, PSend10850);
    
    MethodClosure MC_SMB_outBufferSize = new_MethodClosure((Method)PMethod10848, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_outBufferSize, MC_SMB_outBufferSize);
}


static void init_SMB_sendCommand_() {
    Symbol SMB_sendCommand_ = new_Symbol(L"sendCommand:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10852 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray10855 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10857 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10858 = new_Send((Optr)VAR_aString_0_0, SMB__append_, 1, (Optr)PSend10857);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10859 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)PSend10858);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10860 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Array PThreadedCode10856 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10857, (Optr)&t_send1, (Optr)PSend10858, (Optr)&t_send1, (Optr)PSend10859, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend10860, (Optr)&t_method_return);
    Block PBlock10854 = new_Block_with(PArray10855, empty_Array, PThreadedCode10856, 2, PSend10859, PSend10860);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10861 = new_Send((Optr)PBlock10854, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10853 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock10854, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10861, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10851 = new_Method_with(PArray10852, empty_Array, empty_Array, PThreadedCode10853, 2, PSend10861, self);
    
    MethodClosure MC_SMB_sendCommand_ = new_MethodClosure((Method)PMethod10851, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_sendCommand_, MC_SMB_sendCommand_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10864 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10867 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10868 = new_Send((Optr)PSend10867, SMB_not, 0);
    Array PThreadedCode10866 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10867, (Optr)&t_send0, (Optr)PSend10868, (Optr)&t_block_return);
    Block PBlock10865 = new_Block_with(empty_Array, empty_Array, PThreadedCode10866, 1, PSend10868);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10869 = new_Send((Optr)PSend10864, SMB_and_, 1, (Optr)PBlock10865);
    Array PThreadedCode10863 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10864, (Optr)&t_push_closure, (Optr)PBlock10865, (Optr)&t_send1, (Optr)PSend10869, (Optr)&t_method_return);
    Method PMethod10862 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10863, 1, PSend10869);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod10862, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_checkFlush() {
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10874 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Array PThreadedCode10873 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend10874, (Optr)&t_block_return);
    Block PBlock10872 = new_Block_with(empty_Array, empty_Array, PThreadedCode10873, 1, PSend10874);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10875 = new_Send((Optr)slot_IO_SocketStream_autoFlush, SMB_and_, 1, (Optr)PBlock10872);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10879 = new_Send((Optr)self, SMB_flush, 0);
    Array PThreadedCode10878 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10879, (Optr)&t_block_return);
    Block PBlock10877 = new_Block_with(empty_Array, empty_Array, PThreadedCode10878, 1, PSend10879);
    // ifTrue:. 
    Send PSend10876 = new_Send((Optr)PSend10875, SMB_ifTrue_, 1, (Optr)PBlock10877);
    Array PThreadedCode10871 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_push_closure, (Optr)PBlock10872, (Optr)&t_send1, (Optr)PSend10875, (Optr)&t_send_ifTrue_, (Optr)PSend10876, (Optr)PBlock10877, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10870 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10871, 2, PSend10876, self);
    
    MethodClosure MC_SMB_checkFlush = new_MethodClosure((Method)PMethod10870, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_checkFlush, MC_SMB_checkFlush);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10881 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10882 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10884 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10886 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10885 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10886);
    // +. 
    Send PSend10889 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10890 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10888 = new_Send((Optr)PSend10889, SMB_min_, 1, (Optr)PSend10890);
    Assign PAssign10887 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10888);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10891 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10883 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10884, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10885, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10886, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10887, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10889, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10890, (Optr)&t_send1, (Optr)PSend10888, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend10891, (Optr)&t_method_return);
    Method PMethod10880 = new_Method_with(PArray10881, PArray10882, empty_Array, PThreadedCode10883, 4, PSend10884, PAssign10885, PAssign10887, PSend10891);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod10880, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_socket() {
    Symbol SMB_socket = new_Symbol(L"socket");
    Array PThreadedCode10893 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_method_return);
    Method PMethod10892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10893, 1, slot_IO_SocketStream_socket);
    
    MethodClosure MC_SMB_socket = new_MethodClosure((Method)PMethod10892, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket, MC_SMB_socket);
}


static void init_SMB_adjustInBuffer_() {
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    Variable VAR_bytesRead_0_0 = new_Variable_named(L"bytesRead", 0);
    Array PArray10895 = new_Array_with(1, (Optr)VAR_bytesRead_0_0);
    Variable VAR_old_0_1 = new_Variable_named(L"old", 0);
    Array PArray10896 = new_Array_with(1, (Optr)VAR_old_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10899 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10901 = new_String(L"SocketStream>>adjustInBuffer:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10901_Const = new_Constant((Optr)string_10901);
    // warn:. 
    Send PSend10902 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10901_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10903 = new_Send((Optr)VAR_bytesRead_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10907 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10906 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10907, (Optr)&t_block_return);
    Block PBlock10905 = new_Block_with(empty_Array, empty_Array, PThreadedCode10906, 1, PSend10907);
    // ifTrue:. 
    Send PSend10904 = new_Send((Optr)PSend10903, SMB_ifTrue_, 1, (Optr)PBlock10905);
    Assign PAssign10908 = new_Assign((Optr)VAR_old_0_1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10910 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__plus_, 1, (Optr)VAR_bytesRead_0_0);
    Assign PAssign10909 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10910);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10911 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10912 = new_Send((Optr)PSend10911, SMB__minus_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10913 = new_Send((Optr)PSend10912, SMB__lt_, 1, (Optr)int_1024_Const);
    SmallInt int_512 = new_SmallInt(512);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_512_Const = new_Constant((Optr)int_512);
    // >. 
    Send PSend10917 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__gt_, 1, (Optr)int_512_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    // moveInBufferDown. 
    Send PSend10921 = new_Send((Optr)self, SMB_moveInBufferDown, 0);
    // -. 
    Send PSend10922 = new_Send((Optr)VAR_old_0_1, SMB__minus_, 1, (Optr)PSend10921);
    // escape:. 
    Send PSend10923 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10922);
    Array PThreadedCode10920 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10921, (Optr)&t_send1, (Optr)PSend10922, (Optr)&t_send1, (Optr)PSend10923, (Optr)&t_block_return);
    Block PBlock10919 = new_Block_with(empty_Array, empty_Array, PThreadedCode10920, 1, PSend10923);
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    // growInBuffer. 
    Send PSend10926 = new_Send((Optr)self, SMB_growInBuffer, 0);
    Array PThreadedCode10925 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10926, (Optr)&t_block_return);
    Block PBlock10924 = new_Block_with(empty_Array, empty_Array, PThreadedCode10925, 1, PSend10926);
    // ifTrue:ifFalse:. 
    Send PSend10918 = new_Send((Optr)PSend10917, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10919, (Optr)PBlock10924);
    Array PThreadedCode10916 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push1, (Optr)int_512, (Optr)&t_send1, (Optr)PSend10917, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10918, (Optr)PBlock10919, (Optr)PBlock10924, (Optr)&t_block_return);
    Block PBlock10915 = new_Block_with(empty_Array, empty_Array, PThreadedCode10916, 1, PSend10918);
    // ifTrue:. 
    Send PSend10914 = new_Send((Optr)PSend10913, SMB_ifTrue_, 1, (Optr)PBlock10915);
    Array PThreadedCode10900 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10901, (Optr)&t_send1, (Optr)PSend10902, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10903, (Optr)&t_send_ifTrue_, (Optr)PSend10904, (Optr)PBlock10905, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10908, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10909, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_send1, (Optr)PSend10910, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10911, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10912, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10913, (Optr)&t_send_ifTrue_, (Optr)PSend10914, (Optr)PBlock10915, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_method_return);
    Block PBlock10898 = new_Block_with(PArray10899, empty_Array, PThreadedCode10900, 6, PSend10902, PSend10904, PAssign10908, PAssign10909, PSend10914, VAR_old_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10927 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10898);
    Array PThreadedCode10897 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10898, (Optr)&t_send1, (Optr)PSend10927, (Optr)&t_method_return);
    Method PMethod10894 = new_Method_with(PArray10895, PArray10896, empty_Array, PThreadedCode10897, 1, PSend10927);
    
    MethodClosure MC_SMB_adjustInBuffer_ = new_MethodClosure((Method)PMethod10894, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustInBuffer_, MC_SMB_adjustInBuffer_);
}


static void init_SMB_ifStale_() {
    Symbol SMB_ifStale_ = new_Symbol(L"ifStale:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray10929 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10931 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend10935 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode10934 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend10935, (Optr)&t_block_return);
    Block PBlock10933 = new_Block_with(empty_Array, empty_Array, PThreadedCode10934, 1, PSend10935);
    // ifFalse:. 
    Send PSend10932 = new_Send((Optr)PSend10931, SMB_ifFalse_, 1, (Optr)PBlock10933);
    Array PThreadedCode10930 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10931, (Optr)&t_send_ifFalse_, (Optr)PSend10932, (Optr)PBlock10933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10928 = new_Method_with(PArray10929, empty_Array, empty_Array, PThreadedCode10930, 2, PSend10932, self);
    
    MethodClosure MC_SMB_ifStale_ = new_MethodClosure((Method)PMethod10928, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ifStale_, MC_SMB_ifStale_);
}


static void init_SMB_nextAvailable() {
    Symbol SMB_nextAvailable = new_Symbol(L"nextAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10939 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10941 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10945 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10946 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10945);
    Array PThreadedCode10944 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10945, (Optr)&t_send1, (Optr)PSend10946, (Optr)&t_block_return);
    Block PBlock10943 = new_Block_with(empty_Array, empty_Array, PThreadedCode10944, 1, PSend10946);
    // ifFalse:. 
    Send PSend10942 = new_Send((Optr)PSend10941, SMB_ifFalse_, 1, (Optr)PBlock10943);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10947 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10951 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10950 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10951, (Optr)&t_block_return);
    Block PBlock10949 = new_Block_with(empty_Array, empty_Array, PThreadedCode10950, 1, PSend10951);
    // ifTrue:. 
    Send PSend10948 = new_Send((Optr)PSend10947, SMB_ifTrue_, 1, (Optr)PBlock10949);
    // nextAllInBuffer. 
    Send PSend10952 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode10940 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10941, (Optr)&t_send_ifFalse_, (Optr)PSend10942, (Optr)PBlock10943, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10947, (Optr)&t_send_ifTrue_, (Optr)PSend10948, (Optr)PBlock10949, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10952, (Optr)&t_method_return);
    Block PBlock10938 = new_Block_with(PArray10939, empty_Array, PThreadedCode10940, 3, PSend10942, PSend10948, PSend10952);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10953 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10938);
    Array PThreadedCode10937 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10938, (Optr)&t_send1, (Optr)PSend10953, (Optr)&t_method_return);
    Method PMethod10936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10937, 1, PSend10953);
    
    MethodClosure MC_SMB_nextAvailable = new_MethodClosure((Method)PMethod10936, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable, MC_SMB_nextAvailable);
}


static void init_SMB_resizeInBuffer_() {
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    Variable VAR_newSize_0_0 = new_Variable_named(L"newSize", 0);
    Array PArray10955 = new_Array_with(1, (Optr)VAR_newSize_0_0);
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend10959 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)VAR_newSize_0_0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10960 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10958 = new_Send((Optr)PSend10959, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10960, (Optr)slot_IO_SocketStream_inBuffer, (Optr)int_1_Const);
    Assign PAssign10957 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend10958);
    Array PThreadedCode10956 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign10957, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newSize_0_0, (Optr)&t_send1, (Optr)PSend10959, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10960, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10958, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10954 = new_Method_with(PArray10955, empty_Array, empty_Array, PThreadedCode10956, 2, PAssign10957, self);
    
    MethodClosure MC_SMB_resizeInBuffer_ = new_MethodClosure((Method)PMethod10954, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resizeInBuffer_, MC_SMB_resizeInBuffer_);
}


static void init_SMB_bufferSize_() {
    Symbol SMB_bufferSize_ = new_Symbol(L"bufferSize:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray10962 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign10964 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)VAR_anInt_0_0);
    Array PThreadedCode10963 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10964, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10961 = new_Method_with(PArray10962, empty_Array, empty_Array, PThreadedCode10963, 2, PAssign10964, self);
    
    MethodClosure MC_SMB_bufferSize_ = new_MethodClosure((Method)PMethod10961, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize_, MC_SMB_bufferSize_);
}


static void init_SMB_isDataAvailable() {
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10968 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10970 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10974 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10973 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10974, (Optr)&t_block_return);
    Block PBlock10972 = new_Block_with(empty_Array, empty_Array, PThreadedCode10973, 1, PSend10974);
    // ifFalse:. 
    Send PSend10971 = new_Send((Optr)PSend10970, SMB_ifFalse_, 1, (Optr)PBlock10972);
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    // dataAvailable. 
    Send PSend10975 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_dataAvailable, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Array PThreadedCode10978 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock10977 = new_Block_with(empty_Array, empty_Array, PThreadedCode10978, 1, false_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray10982 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10984 = new_Send((Optr)VAR__receiver__2_0, SMB_receiveDataIfAvailable, 0);
    // isDataAvailable. 
    Send PSend10985 = new_Send((Optr)VAR__receiver__2_0, SMB_isDataAvailable, 0);
    Array PThreadedCode10983 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10984, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10985, (Optr)&t_method_return);
    Block PBlock10981 = new_Block_with(PArray10982, empty_Array, PThreadedCode10983, 2, PSend10984, PSend10985);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10986 = new_Send((Optr)PBlock10981, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10980 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock10981, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10986, (Optr)&t_block_return);
    Block PBlock10979 = new_Block_with(empty_Array, empty_Array, PThreadedCode10980, 1, PSend10986);
    // ifFalse:ifTrue:. 
    Send PSend10976 = new_Send((Optr)PSend10975, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock10977, (Optr)PBlock10979);
    Array PThreadedCode10969 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10970, (Optr)&t_send_ifFalse_, (Optr)PSend10971, (Optr)PBlock10972, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10975, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend10976, (Optr)PBlock10977, (Optr)PBlock10979, (Optr)&t_method_return);
    Block PBlock10967 = new_Block_with(PArray10968, empty_Array, PThreadedCode10969, 2, PSend10971, PSend10976);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10987 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10967);
    Array PThreadedCode10966 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10967, (Optr)&t_send1, (Optr)PSend10987, (Optr)&t_method_return);
    Method PMethod10965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10966, 1, PSend10987);
    
    MethodClosure MC_SMB_isDataAvailable = new_MethodClosure((Method)PMethod10965, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isDataAvailable, MC_SMB_isDataAvailable);
}


static void init_SMB_adjustOutBuffer_() {
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    Variable VAR_bytesToWrite_0_0 = new_Variable_named(L"bytesToWrite", 0);
    Array PArray10989 = new_Array_with(1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10991 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10992 = new_Send((Optr)PSend10991, SMB__minus_, 1, (Optr)slot_IO_SocketStream_outNextToWrite);
    // -. 
    Send PSend10993 = new_Send((Optr)PSend10992, SMB__minus_, 1, (Optr)VAR_bytesToWrite_0_0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10994 = new_Send((Optr)PSend10993, SMB__lt_, 1, (Optr)int_1024_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // size. 
    Send PSend11003 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend11002 = new_Send((Optr)PSend11003, SMB_max_, 1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend11001 = new_Send((Optr)PSend11002, SMB__times_, 1, (Optr)int_2_Const);
    // streamBuffer:. 
    Send PSend11000 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)PSend11001);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // size. 
    Send PSend11004 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10999 = new_Send((Optr)PSend11000, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend11004, (Optr)slot_IO_SocketStream_outBuffer, (Optr)int_1_Const);
    Assign PAssign10998 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend10999);
    Array PThreadedCode10997 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign10998, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11003, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend11002, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend11001, (Optr)&t_send1, (Optr)PSend11000, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11004, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10999, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10996 = new_Block_with(empty_Array, empty_Array, PThreadedCode10997, 1, PAssign10998);
    // ifTrue:. 
    Send PSend10995 = new_Send((Optr)PSend10994, SMB_ifTrue_, 1, (Optr)PBlock10996);
    Array PThreadedCode10990 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10991, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_send1, (Optr)PSend10992, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10993, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10994, (Optr)&t_send_ifTrue_, (Optr)PSend10995, (Optr)PBlock10996, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10988 = new_Method_with(PArray10989, empty_Array, empty_Array, PThreadedCode10990, 2, PSend10995, self);
    
    MethodClosure MC_SMB_adjustOutBuffer_ = new_MethodClosure((Method)PMethod10988, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustOutBuffer_, MC_SMB_adjustOutBuffer_);
}


static void init_SMB_nextAllInBuffer() {
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11007 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11008 = new_Send((Optr)PSend11007, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend11009 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11008);
    Array PThreadedCode11006 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11007, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11008, (Optr)&t_send1, (Optr)PSend11009, (Optr)&t_method_return);
    Method PMethod11005 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11006, 1, PSend11009);
    
    MethodClosure MC_SMB_nextAllInBuffer = new_MethodClosure((Method)PMethod11005, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAllInBuffer, MC_SMB_nextAllInBuffer);
}


static void init_SMB_skip_() {
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11011 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11013 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11016 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11017 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11015 = new_Send((Optr)PSend11016, SMB_min_, 1, (Optr)PSend11017);
    Assign PAssign11014 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11015);
    Array PThreadedCode11012 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11013, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11014, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11016, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11017, (Optr)&t_send1, (Optr)PSend11015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11010 = new_Method_with(PArray11011, empty_Array, empty_Array, PThreadedCode11012, 3, PSend11013, PAssign11014, self);
    
    MethodClosure MC_SMB_skip_ = new_MethodClosure((Method)PMethod11010, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_skip_, MC_SMB_skip_);
}


static void init_SMB_nextAvailable_() {
    Symbol SMB_nextAvailable_ = new_Symbol(L"nextAvailable:");
    Variable VAR_howMany_0_0 = new_Variable_named(L"howMany", 0);
    Array PArray11019 = new_Array_with(1, (Optr)VAR_howMany_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11022 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11024 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend11028 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11029 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11028);
    Array PThreadedCode11027 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend11028, (Optr)&t_send1, (Optr)PSend11029, (Optr)&t_block_return);
    Block PBlock11026 = new_Block_with(empty_Array, empty_Array, PThreadedCode11027, 1, PSend11029);
    // ifFalse:. 
    Send PSend11025 = new_Send((Optr)PSend11024, SMB_ifFalse_, 1, (Optr)PBlock11026);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11030 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11034 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11033 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11034, (Optr)&t_block_return);
    Block PBlock11032 = new_Block_with(empty_Array, empty_Array, PThreadedCode11033, 1, PSend11034);
    // ifTrue:. 
    Send PSend11031 = new_Send((Optr)PSend11030, SMB_ifTrue_, 1, (Optr)PBlock11032);
    // nextInBuffer:. 
    Send PSend11035 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Array PThreadedCode11023 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11024, (Optr)&t_send_ifFalse_, (Optr)PSend11025, (Optr)PBlock11026, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11030, (Optr)&t_send_ifTrue_, (Optr)PSend11031, (Optr)PBlock11032, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend11035, (Optr)&t_method_return);
    Block PBlock11021 = new_Block_with(PArray11022, empty_Array, PThreadedCode11023, 3, PSend11025, PSend11031, PSend11035);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11036 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11021);
    Array PThreadedCode11020 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11021, (Optr)&t_send1, (Optr)PSend11036, (Optr)&t_method_return);
    Method PMethod11018 = new_Method_with(PArray11019, empty_Array, empty_Array, PThreadedCode11020, 1, PSend11036);
    
    MethodClosure MC_SMB_nextAvailable_ = new_MethodClosure((Method)PMethod11018, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable_, MC_SMB_nextAvailable_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend11039 = new_Send((Optr)self, SMB_flush, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // closeAndDestroy:. 
    Send PSend11040 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_closeAndDestroy_, 1, (Optr)int_30_Const);
    Array PThreadedCode11038 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11039, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend11040, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11038, 3, PSend11039, PSend11040, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod11037, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_inBufferSize() {
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11043 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11044 = new_Send((Optr)PSend11043, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode11042 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11043, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11044, (Optr)&t_method_return);
    Method PMethod11041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11042, 1, PSend11044);
    
    MethodClosure MC_SMB_inBufferSize = new_MethodClosure((Method)PMethod11041, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_inBufferSize, MC_SMB_inBufferSize);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11046 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11048 = new_Send((Optr)VAR_anObject_0_0, SMB_printOn_, 1, (Optr)self);
    Array PThreadedCode11047 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend11048, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11045 = new_Method_with(PArray11046, empty_Array, empty_Array, PThreadedCode11047, 2, PSend11048, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod11045, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11052 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11054 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11058 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode11057 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend11058, (Optr)&t_block_return);
    Block PBlock11056 = new_Block_with(empty_Array, empty_Array, PThreadedCode11057, 1, PSend11058);
    // ifTrue:. 
    Send PSend11055 = new_Send((Optr)PSend11054, SMB_ifTrue_, 1, (Optr)PBlock11056);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11059 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11063 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend11064 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend11068 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode11067 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend11068, (Optr)&t_block_return);
    Block PBlock11066 = new_Block_with(empty_Array, empty_Array, PThreadedCode11067, 1, PSend11068);
    // ifTrue:. 
    Send PSend11065 = new_Send((Optr)PSend11064, SMB_ifTrue_, 1, (Optr)PBlock11066);
    Array PThreadedCode11062 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11063, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11064, (Optr)&t_send_ifTrue_, (Optr)PSend11065, (Optr)PBlock11066, (Optr)&t_block_return);
    Block PBlock11061 = new_Block_with(empty_Array, empty_Array, PThreadedCode11062, 2, PSend11063, PSend11065);
    // ifTrue:. 
    Send PSend11060 = new_Send((Optr)PSend11059, SMB_ifTrue_, 1, (Optr)PBlock11061);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11070 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11069 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11070);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11071 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11053 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11054, (Optr)&t_send_ifTrue_, (Optr)PSend11055, (Optr)PBlock11056, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11059, (Optr)&t_send_ifTrue_, (Optr)PSend11060, (Optr)PBlock11061, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11069, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11070, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11071, (Optr)&t_method_return);
    Block PBlock11051 = new_Block_with(PArray11052, empty_Array, PThreadedCode11053, 4, PSend11055, PSend11060, PAssign11069, PSend11071);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11072 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11051);
    Array PThreadedCode11050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11051, (Optr)&t_send1, (Optr)PSend11072, (Optr)&t_method_return);
    Method PMethod11049 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11050, 1, PSend11072);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod11049, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    // standardTimeout. 
    Send PSend11078 = new_Send((Optr)PSocket_classReference, SMB_standardTimeout, 0);
    Assign PAssign11077 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)PSend11078);
    Array PThreadedCode11076 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11077, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11078, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11075 = new_Block_with(empty_Array, empty_Array, PThreadedCode11076, 1, PAssign11077);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend11079 = new_Send((Optr)slot_IO_SocketStream_timeout, SMB_ifNil_, 1, (Optr)PBlock11075);
    Array PThreadedCode11074 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_closure, (Optr)PBlock11075, (Optr)&t_send1, (Optr)PSend11079, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_method_return);
    Method PMethod11073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11074, 2, PSend11079, slot_IO_SocketStream_timeout);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod11073, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_upToAll_() {
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Variable VAR_aStringOrByteArray_0_0 = new_Variable_named(L"aStringOrByteArray", 0);
    Array PArray11081 = new_Array_with(1, (Optr)VAR_aStringOrByteArray_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_sz_0_2 = new_Variable_named(L"sz", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_4 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_5 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11082 = new_Array_with(5, (Optr)VAR_index_0_1, (Optr)VAR_sz_0_2, (Optr)VAR_result_0_3, (Optr)VAR_lastRecentlyRead_0_4, (Optr)VAR_searchedSoFar_0_5);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11085 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11087 = new_String(L"SocketStream>>upToAll:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11087_Const = new_Constant((Optr)string_11087);
    // warn:. 
    Send PSend11088 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11087_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11090 = new_Send((Optr)VAR_aStringOrByteArray_0_0, SMB_size, 0);
    Assign PAssign11089 = new_Assign((Optr)VAR_sz_0_2, (Optr)PSend11090);
    String string_11091 = new_String(L"SocketStream>>upToAll: sz is ");
    Constant string_11091_Const = new_Constant((Optr)string_11091);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11092 = new_Send((Optr)string_11091_Const, SMB__append_, 1, (Optr)VAR_sz_0_2);
    // warn:. 
    Send PSend11093 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11092);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11094 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)int_0_Const);
    Assign PAssign11095 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)int_0_Const);
    Assign PAssign11096 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    String string_11097 = new_String(L"SocketStream>>upToAll: temps initialized");
    Constant string_11097_Const = new_Constant((Optr)string_11097);
    // warn:. 
    Send PSend11098 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11097_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11101 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11102 = new_Send((Optr)PSend11101, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11105 = new_Send((Optr)VAR_lastRecentlyRead_0_4, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11108 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11109 = new_Send((Optr)PSend11108, SMB_not, 0);
    Array PThreadedCode11107 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11108, (Optr)&t_send0, (Optr)PSend11109, (Optr)&t_block_return);
    Block PBlock11106 = new_Block_with(empty_Array, empty_Array, PThreadedCode11107, 1, PSend11109);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11110 = new_Send((Optr)PSend11105, SMB_and_, 1, (Optr)PBlock11106);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11113 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11114 = new_Send((Optr)PSend11113, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11112 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11113, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11114, (Optr)&t_block_return);
    Block PBlock11111 = new_Block_with(empty_Array, empty_Array, PThreadedCode11112, 1, PSend11114);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11115 = new_Send((Optr)PSend11110, SMB_or_, 1, (Optr)PBlock11111);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_11119 = new_String(L"SocketStream>>upToAll: we need to read data");
    Constant string_11119_Const = new_Constant((Optr)string_11119);
    // warn:. 
    Send PSend11120 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11119_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11124 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_5);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11123 = new_Send((Optr)PSend11124, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOfSubCollection:startingAt:. 
    Send PSend11122 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_aStringOrByteArray_0_0, (Optr)PSend11123);
    Assign PAssign11121 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11122);
    String string_11125 = new_String(L"SocketStream>>upToAll: searched for a bit.");
    Constant string_11125_Const = new_Constant((Optr)string_11125);
    // warn:. 
    Send PSend11126 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11125_Const);
    // inBufferSize. 
    Send PSend11128 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11127 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)PSend11128);
    String string_11129 = new_String(L"SocketStream>>upToAll: this far we searched until");
    Constant string_11129_Const = new_Constant((Optr)string_11129);
    // warn:. 
    Send PSend11130 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11129_Const);
    // warn:. 
    Send PSend11131 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_searchedSoFar_0_5);
    // >. 
    Send PSend11132 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11135 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)VAR_sz_0_2);
    // >. 
    Send PSend11136 = new_Send((Optr)PSend11135, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11134 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11135, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11136, (Optr)&t_block_return);
    Block PBlock11133 = new_Block_with(empty_Array, empty_Array, PThreadedCode11134, 1, PSend11136);
    // and:. 
    Send PSend11137 = new_Send((Optr)PSend11132, SMB_and_, 1, (Optr)PBlock11133);
    Assign PAssign11141 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11140 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11141, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11139 = new_Block_with(empty_Array, empty_Array, PThreadedCode11140, 1, PAssign11141);
    // ifTrue:. 
    Send PSend11138 = new_Send((Optr)PSend11137, SMB_ifTrue_, 1, (Optr)PBlock11139);
    Array PThreadedCode11118 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11119, (Optr)&t_send1, (Optr)PSend11120, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11121, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend11124, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11123, (Optr)&t_send2, (Optr)PSend11122, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11125, (Optr)&t_send1, (Optr)PSend11126, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11127, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11129, (Optr)&t_send1, (Optr)PSend11130, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend11131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11132, (Optr)&t_push_closure, (Optr)PBlock11133, (Optr)&t_send1, (Optr)PSend11137, (Optr)&t_send_ifTrue_, (Optr)PSend11138, (Optr)PBlock11139, (Optr)&t_block_return);
    Block PBlock11117 = new_Block_with(empty_Array, empty_Array, PThreadedCode11118, 7, PSend11120, PAssign11121, PSend11126, PAssign11127, PSend11130, PSend11131, PSend11138);
    // ifTrue:. 
    Send PSend11116 = new_Send((Optr)PSend11115, SMB_ifTrue_, 1, (Optr)PBlock11117);
    // =. 
    Send PSend11142 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11104 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_4, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11105, (Optr)&t_push_closure, (Optr)PBlock11106, (Optr)&t_send1, (Optr)PSend11110, (Optr)&t_push_closure, (Optr)PBlock11111, (Optr)&t_send1, (Optr)PSend11115, (Optr)&t_send_ifTrue_, (Optr)PSend11116, (Optr)PBlock11117, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11142, (Optr)&t_block_return);
    Block PBlock11103 = new_Block_with(empty_Array, empty_Array, PThreadedCode11104, 2, PSend11116, PSend11142);
    // and:. 
    Send PSend11143 = new_Send((Optr)PSend11102, SMB_and_, 1, (Optr)PBlock11103);
    Array PThreadedCode11100 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11101, (Optr)&t_send0, (Optr)PSend11102, (Optr)&t_push_closure, (Optr)PBlock11103, (Optr)&t_send1, (Optr)PSend11143, (Optr)&t_block_return);
    Block PBlock11099 = new_Block_with(empty_Array, empty_Array, PThreadedCode11100, 1, PSend11143);
    // =. 
    Send PSend11146 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11150 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11149 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11150, (Optr)&t_block_return);
    Block PBlock11148 = new_Block_with(empty_Array, empty_Array, PThreadedCode11149, 1, PSend11150);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11153 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11152 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11153, (Optr)&t_block_return);
    Block PBlock11151 = new_Block_with(empty_Array, empty_Array, PThreadedCode11152, 1, PSend11153);
    // ifTrue:ifFalse:. 
    Send PSend11147 = new_Send((Optr)PSend11146, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11148, (Optr)PBlock11151);
    Assign PAssign11154 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11145 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11146, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11147, (Optr)PBlock11148, (Optr)PBlock11151, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11154, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11144 = new_Block_with(empty_Array, empty_Array, PThreadedCode11145, 2, PSend11147, PAssign11154);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11155 = new_Send((Optr)PBlock11099, SMB_whileTrue_, 1, (Optr)PBlock11144);
    // >. 
    Send PSend11156 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11163 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11162 = new_Send((Optr)PSend11163, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11161 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11162);
    Assign PAssign11160 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend11161);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11164 = new_Send((Optr)self, SMB_skip_, 1, (Optr)VAR_sz_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11165 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_3);
    Array PThreadedCode11159 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign11160, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11163, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11162, (Optr)&t_send1, (Optr)PSend11161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11164, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_send1, (Optr)PSend11165, (Optr)&t_block_return);
    Block PBlock11158 = new_Block_with(empty_Array, empty_Array, PThreadedCode11159, 3, PAssign11160, PSend11164, PSend11165);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11168 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11169 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11168);
    Array PThreadedCode11167 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11168, (Optr)&t_send1, (Optr)PSend11169, (Optr)&t_block_return);
    Block PBlock11166 = new_Block_with(empty_Array, empty_Array, PThreadedCode11167, 1, PSend11169);
    // ifTrue:ifFalse:. 
    Send PSend11157 = new_Send((Optr)PSend11156, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11158, (Optr)PBlock11166);
    Array PThreadedCode11086 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11087, (Optr)&t_send1, (Optr)PSend11088, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11089, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_send0, (Optr)PSend11090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11091, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend11092, (Optr)&t_send1, (Optr)PSend11093, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11094, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11095, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11096, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11097, (Optr)&t_send1, (Optr)PSend11098, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11099, (Optr)&t_push_closure, (Optr)PBlock11144, (Optr)&t_send1, (Optr)PSend11155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11156, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11157, (Optr)PBlock11158, (Optr)PBlock11166, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11084 = new_Block_with(PArray11085, empty_Array, PThreadedCode11086, 10, PSend11088, PAssign11089, PSend11093, PAssign11094, PAssign11095, PAssign11096, PSend11098, PSend11155, PSend11157, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11170 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11084);
    Array PThreadedCode11083 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11084, (Optr)&t_send1, (Optr)PSend11170, (Optr)&t_method_return);
    Method PMethod11080 = new_Method_with(PArray11081, PArray11082, empty_Array, PThreadedCode11083, 1, PSend11170);
    
    MethodClosure MC_SMB_upToAll_ = new_MethodClosure((Method)PMethod11080, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToAll_, MC_SMB_upToAll_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray11172 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend11174 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode11173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend11174, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11171 = new_Method_with(PArray11172, empty_Array, empty_Array, PThreadedCode11173, 2, PSend11174, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod11171, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_growInBuffer() {
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11177 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend11178 = new_Send((Optr)PSend11177, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    // resizeInBuffer:. 
    Send PSend11179 = new_Send((Optr)self, SMB_resizeInBuffer_, 1, (Optr)PSend11178);
    Array PThreadedCode11176 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11177, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend11178, (Optr)&t_send1, (Optr)PSend11179, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11176, 2, PSend11179, self);
    
    MethodClosure MC_SMB_growInBuffer = new_MethodClosure((Method)PMethod11175, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_growInBuffer, MC_SMB_growInBuffer);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11181 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11183 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11184 = new_Send((Optr)PSend11183, SMB_name, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11185 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend11184);
    String string_11188 = new_String(L"[inbuf:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11189 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // /. 
    Send PSend11190 = new_Send((Optr)PSend11189, SMB__divide_, 1, (Optr)int_1024_Const);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend11191 = new_Send((Optr)PSend11190, SMB_rounded, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11192 = new_Send((Optr)PSend11191, SMB_asString, 0);
    Constant string_11188_Const = new_Constant((Optr)string_11188);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11193 = new_Send((Optr)string_11188_Const, SMB__append_, 1, (Optr)PSend11192);
    String string_11194 = new_String(L"kb/outbuf:");
    Constant string_11194_Const = new_Constant((Optr)string_11194);
    // ,. 
    Send PSend11195 = new_Send((Optr)PSend11193, SMB__append_, 1, (Optr)string_11194_Const);
    // size. 
    Send PSend11196 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // /. 
    Send PSend11197 = new_Send((Optr)PSend11196, SMB__divide_, 1, (Optr)int_1024_Const);
    // rounded. 
    Send PSend11198 = new_Send((Optr)PSend11197, SMB_rounded, 0);
    // asString. 
    Send PSend11199 = new_Send((Optr)PSend11198, SMB_asString, 0);
    // ,. 
    Send PSend11200 = new_Send((Optr)PSend11195, SMB__append_, 1, (Optr)PSend11199);
    String string_11201 = new_String(L"kb]");
    Constant string_11201_Const = new_Constant((Optr)string_11201);
    // ,. 
    Send PSend11202 = new_Send((Optr)PSend11200, SMB__append_, 1, (Optr)string_11201_Const);
    // nextPutAll:. 
    Send PSend11203 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend11202);
    Array PThreadedCode11187 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11188, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11189, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11190, (Optr)&t_send0, (Optr)PSend11191, (Optr)&t_send0, (Optr)PSend11192, (Optr)&t_send1, (Optr)PSend11193, (Optr)&t_push1, (Optr)string_11194, (Optr)&t_send1, (Optr)PSend11195, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11196, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11197, (Optr)&t_send0, (Optr)PSend11198, (Optr)&t_send0, (Optr)PSend11199, (Optr)&t_send1, (Optr)PSend11200, (Optr)&t_push1, (Optr)string_11201, (Optr)&t_send1, (Optr)PSend11202, (Optr)&t_send1, (Optr)PSend11203, (Optr)&t_block_return);
    Block PBlock11186 = new_Block_with(empty_Array, empty_Array, PThreadedCode11187, 1, PSend11203);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend11204 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_ifNotNil_, 1, (Optr)PBlock11186);
    Array PThreadedCode11182 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11183, (Optr)&t_send0, (Optr)PSend11184, (Optr)&t_send1, (Optr)PSend11185, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_closure, (Optr)PBlock11186, (Optr)&t_send1, (Optr)PSend11204, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11180 = new_Method_with(PArray11181, empty_Array, empty_Array, PThreadedCode11182, 3, PSend11185, PSend11204, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod11180, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_autoFlush() {
    Symbol SMB_autoFlush = new_Symbol(L"autoFlush");
    Array PThreadedCode11206 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_method_return);
    Method PMethod11205 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11206, 1, slot_IO_SocketStream_autoFlush);
    
    MethodClosure MC_SMB_autoFlush = new_MethodClosure((Method)PMethod11205, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush, MC_SMB_autoFlush);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11208 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11209 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend11215 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode11214 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11215, (Optr)&t_block_return);
    Block PBlock11213 = new_Block_with(empty_Array, empty_Array, PThreadedCode11214, 1, PSend11215);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11218 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode11217 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11218, (Optr)&t_block_return);
    Block PBlock11216 = new_Block_with(empty_Array, empty_Array, PThreadedCode11217, 1, PSend11218);
    // ifTrue:ifFalse:. 
    Send PSend11212 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11213, (Optr)PBlock11216);
    Assign PAssign11211 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11212);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11219 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    // adjustOutBuffer:. 
    Send PSend11220 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)PSend11219);
    // size. 
    Send PSend11221 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11222 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11221);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11223 = new_Send((Optr)PSend11222, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11224 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11223, (Optr)VAR_toPut_0_1, (Optr)int_1_Const);
    // size. 
    Send PSend11227 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    // +. 
    Send PSend11226 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11227);
    Assign PAssign11225 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11226);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11228 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11210 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign11211, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11212, (Optr)PBlock11213, (Optr)PBlock11216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11219, (Optr)&t_send1, (Optr)PSend11220, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11221, (Optr)&t_send1, (Optr)PSend11222, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11223, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend11224, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11225, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11227, (Optr)&t_send1, (Optr)PSend11226, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11228, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11207 = new_Method_with(PArray11208, PArray11209, empty_Array, PThreadedCode11210, 6, PAssign11211, PSend11220, PSend11224, PAssign11225, PSend11228, self);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod11207, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_receiveDataIfAvailable() {
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    // receiveSomeDataInto:startingAt:. 
    Send PSend11232 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveSomeDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign11231 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend11232);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend11233 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11230 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign11231, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend11232, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend11233, (Optr)&t_method_return);
    Method PMethod11229 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11230, 2, PAssign11231, PSend11233);
    
    MethodClosure MC_SMB_receiveDataIfAvailable = new_MethodClosure((Method)PMethod11229, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveDataIfAvailable, MC_SMB_receiveDataIfAvailable);
}


static void init_SMB_isInBufferEmpty() {
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    String string_11236 = new_String(L"SocketStream>>isInBufferEmpty:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11236_Const = new_Constant((Optr)string_11236);
    // warn:. 
    Send PSend11237 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11236_Const);
    String string_11238 = new_String(L"-Last Read:");
    Constant string_11238_Const = new_Constant((Optr)string_11238);
    // warn:. 
    Send PSend11239 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11238_Const);
    // warn:. 
    Send PSend11240 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    String string_11241 = new_String(L"-Index Next To Write:");
    Constant string_11241_Const = new_Constant((Optr)string_11241);
    // warn:. 
    Send PSend11242 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11241_Const);
    // warn:. 
    Send PSend11243 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11244 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11245 = new_Send((Optr)PSend11244, SMB__equals_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11235 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11236, (Optr)&t_send1, (Optr)PSend11237, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11238, (Optr)&t_send1, (Optr)PSend11239, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11240, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11241, (Optr)&t_send1, (Optr)PSend11242, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11243, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11244, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11245, (Optr)&t_method_return);
    Method PMethod11234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11235, 6, PSend11237, PSend11239, PSend11240, PSend11242, PSend11243, PSend11245);
    
    MethodClosure MC_SMB_isInBufferEmpty = new_MethodClosure((Method)PMethod11234, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isInBufferEmpty, MC_SMB_isInBufferEmpty);
}


static void init_SMB_peek_() {
    Symbol SMB_peek_ = new_Symbol(L"peek:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11247 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray11248 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11250 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11252 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11251 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11252);
    // +. 
    Send PSend11253 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11254 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend11255 = new_Send((Optr)PSend11253, SMB_min_, 1, (Optr)PSend11254);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11256 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend11255);
    Array PThreadedCode11249 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11250, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11251, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11252, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11253, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11254, (Optr)&t_send1, (Optr)PSend11255, (Optr)&t_send2, (Optr)PSend11256, (Optr)&t_method_return);
    Method PMethod11246 = new_Method_with(PArray11247, PArray11248, empty_Array, PThreadedCode11249, 3, PSend11250, PAssign11251, PSend11256);
    
    MethodClosure MC_SMB_peek_ = new_MethodClosure((Method)PMethod11246, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek_, MC_SMB_peek_);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11259 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11260 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend11259);
    Array PThreadedCode11258 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11259, (Optr)&t_send1, (Optr)PSend11260, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11257 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11258, 2, PSend11260, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod11257, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_moveInBufferDown() {
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    Variable VAR_sz_0_0 = new_Variable_named(L"sz", 0);
    Variable VAR_distanceMoved_0_1 = new_Variable_named(L"distanceMoved", 0);
    Array PArray11262 = new_Array_with(2, (Optr)VAR_sz_0_0, (Optr)VAR_distanceMoved_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11266 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11265 = new_Send((Optr)PSend11266, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign11264 = new_Assign((Optr)VAR_sz_0_0, (Optr)PSend11265);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11267 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11268 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_sz_0_0, (Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11267);
    Assign PAssign11269 = new_Assign((Optr)VAR_distanceMoved_0_1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11270 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    // +. 
    Send PSend11272 = new_Send((Optr)VAR_sz_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11271 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend11272);
    Array PThreadedCode11263 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign11264, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11266, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11265, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11267, (Optr)&t_send4, (Optr)PSend11268, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11269, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11270, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11271, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11272, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_distanceMoved_0_1, (Optr)&t_method_return);
    Method PMethod11261 = new_Method_with(empty_Array, PArray11262, empty_Array, PThreadedCode11263, 6, PAssign11264, PSend11268, PAssign11269, PAssign11270, PAssign11271, VAR_distanceMoved_0_1);
    
    MethodClosure MC_SMB_moveInBufferDown = new_MethodClosure((Method)PMethod11261, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_moveInBufferDown, MC_SMB_moveInBufferDown);
}


static void init_SMB_nextLineLf() {
    Symbol SMB_nextLineLf = new_Symbol(L"nextLineLf");
    Variable VAR_nextLine_0_0 = new_Variable_named(L"nextLine", 0);
    Array PArray11274 = new_Array_with(1, (Optr)VAR_nextLine_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend11278 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // upToAll:. 
    Send PSend11277 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend11278);
    Assign PAssign11276 = new_Assign((Optr)VAR_nextLine_0_0, (Optr)PSend11277);
    Array PThreadedCode11275 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11276, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11278, (Optr)&t_send1, (Optr)PSend11277, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_0, (Optr)&t_method_return);
    Method PMethod11273 = new_Method_with(empty_Array, PArray11274, empty_Array, PThreadedCode11275, 2, PAssign11276, VAR_nextLine_0_0);
    
    MethodClosure MC_SMB_nextLineLf = new_MethodClosure((Method)PMethod11273, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineLf, MC_SMB_nextLineLf);
}


static void init_SMB_nextInBuffer_() {
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11280 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_amount_0_2 = new_Variable_named(L"amount", 0);
    Array PArray11281 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_amount_0_2);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11286 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11285 = new_Send((Optr)PSend11286, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11284 = new_Send((Optr)VAR_anInteger_0_0, SMB_min_, 1, (Optr)PSend11285);
    Assign PAssign11283 = new_Assign((Optr)VAR_amount_0_2, (Optr)PSend11284);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11288 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11287 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11288);
    // +. 
    Send PSend11290 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_amount_0_2);
    Assign PAssign11289 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11290);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11291 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11282 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign11283, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11286, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11285, (Optr)&t_send1, (Optr)PSend11284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11287, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11288, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11289, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_amount_0_2, (Optr)&t_send1, (Optr)PSend11290, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend11291, (Optr)&t_method_return);
    Method PMethod11279 = new_Method_with(PArray11280, PArray11281, empty_Array, PThreadedCode11282, 4, PAssign11283, PAssign11287, PAssign11289, PSend11291);
    
    MethodClosure MC_SMB_nextInBuffer_ = new_MethodClosure((Method)PMethod11279, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextInBuffer_, MC_SMB_nextInBuffer_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11295 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11297 = new_String(L"SocketStream>>atEnd");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11297_Const = new_Constant((Optr)string_11297);
    // warn:. 
    Send PSend11298 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11297_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11299 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11303 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode11302 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11303, (Optr)&t_block_return);
    Block PBlock11301 = new_Block_with(empty_Array, empty_Array, PThreadedCode11302, 1, PSend11303);
    // ifFalse:. 
    Send PSend11300 = new_Send((Optr)PSend11299, SMB_ifFalse_, 1, (Optr)PBlock11301);
    String string_11304 = new_String(L"SocketStream>>atEnd: Buffer is Empty");
    Constant string_11304_Const = new_Constant((Optr)string_11304);
    // warn:. 
    Send PSend11305 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11304_Const);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend11306 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11307 = new_Send((Optr)PSend11306, SMB_not, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11310 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    // not. 
    Send PSend11311 = new_Send((Optr)PSend11310, SMB_not, 0);
    Array PThreadedCode11309 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11310, (Optr)&t_send0, (Optr)PSend11311, (Optr)&t_block_return);
    Block PBlock11308 = new_Block_with(empty_Array, empty_Array, PThreadedCode11309, 1, PSend11311);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11312 = new_Send((Optr)PSend11307, SMB_and_, 1, (Optr)PBlock11308);
    Array PThreadedCode11296 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11297, (Optr)&t_send1, (Optr)PSend11298, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11299, (Optr)&t_send_ifFalse_, (Optr)PSend11300, (Optr)PBlock11301, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11304, (Optr)&t_send1, (Optr)PSend11305, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11306, (Optr)&t_send0, (Optr)PSend11307, (Optr)&t_push_closure, (Optr)PBlock11308, (Optr)&t_send1, (Optr)PSend11312, (Optr)&t_method_return);
    Block PBlock11294 = new_Block_with(PArray11295, empty_Array, PThreadedCode11296, 4, PSend11298, PSend11300, PSend11305, PSend11312);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11313 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11294);
    Array PThreadedCode11293 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11294, (Optr)&t_send1, (Optr)PSend11313, (Optr)&t_method_return);
    Method PMethod11292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11293, 1, PSend11313);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod11292, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray11315 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11316 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend11322 = new_Send((Optr)VAR_char_0_0, SMB_asInteger, 0);
    Array PThreadedCode11321 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11322, (Optr)&t_block_return);
    Block PBlock11320 = new_Block_with(empty_Array, empty_Array, PThreadedCode11321, 1, PSend11322);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend11325 = new_Send((Optr)VAR_char_0_0, SMB_asCharacter, 0);
    Array PThreadedCode11324 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11325, (Optr)&t_block_return);
    Block PBlock11323 = new_Block_with(empty_Array, empty_Array, PThreadedCode11324, 1, PSend11325);
    // ifTrue:ifFalse:. 
    Send PSend11319 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11320, (Optr)PBlock11323);
    Assign PAssign11318 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11319);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // adjustOutBuffer:. 
    Send PSend11326 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend11327 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_at_put_, 2, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)VAR_toPut_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11329 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11328 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11329);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11330 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11317 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign11318, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11319, (Optr)PBlock11320, (Optr)PBlock11323, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11326, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send2, (Optr)PSend11327, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11328, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11329, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11330, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_method_return);
    Method PMethod11314 = new_Method_with(PArray11315, PArray11316, empty_Array, PThreadedCode11317, 6, PAssign11318, PSend11326, PSend11327, PAssign11328, PSend11330, VAR_char_0_0);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod11314, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    String string_11333 = new_String(L"SocketStream>>isConnected");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11333_Const = new_Constant((Optr)string_11333);
    // warn:. 
    Send PSend11334 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11333_Const);
    // isConnected. 
    Send PSend11335 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isConnected, 0);
    Array PThreadedCode11332 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11333, (Optr)&t_send1, (Optr)PSend11334, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11335, (Optr)&t_method_return);
    Method PMethod11331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11332, 2, PSend11334, PSend11335);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod11331, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend11338 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend11339 = new_Send((Optr)self, SMB_nextPut_, 1, (Optr)PSend11338);
    Array PThreadedCode11337 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend11338, (Optr)&t_send1, (Optr)PSend11339, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11336 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11337, 2, PSend11339, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod11336, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend11342 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11345 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11346 = new_Send((Optr)PSend11345, SMB_not, 0);
    Array PThreadedCode11344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11345, (Optr)&t_send0, (Optr)PSend11346, (Optr)&t_block_return);
    Block PBlock11343 = new_Block_with(empty_Array, empty_Array, PThreadedCode11344, 1, PSend11346);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11347 = new_Send((Optr)PSend11342, SMB_and_, 1, (Optr)PBlock11343);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11353 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend11354 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11353);
    Array PThreadedCode11352 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11353, (Optr)&t_send2, (Optr)PSend11354, (Optr)&t_block_return);
    Block PBlock11351 = new_Block_with(empty_Array, empty_Array, PThreadedCode11352, 1, PSend11354);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11356 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Array PThreadedCode11360 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11359 = new_Block_with(empty_Array, empty_Array, PThreadedCode11360, 0);
    // ifFalse:. 
    Send PSend11358 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock11359);
    Array PThreadedCode11357 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend11358, (Optr)PBlock11359, (Optr)&t_method_return);
    Block PBlock11355 = new_Block_with(PArray11356, empty_Array, PThreadedCode11357, 1, PSend11358);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11361 = new_Send((Optr)PBlock11351, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock11355);
    Assign PAssign11362 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11350 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11351, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock11355, (Optr)&t_send2, (Optr)PSend11361, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11362, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11349 = new_Block_with(empty_Array, empty_Array, PThreadedCode11350, 2, PSend11361, PAssign11362);
    // ifTrue:. 
    Send PSend11348 = new_Send((Optr)PSend11347, SMB_ifTrue_, 1, (Optr)PBlock11349);
    Array PThreadedCode11341 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11342, (Optr)&t_push_closure, (Optr)PBlock11343, (Optr)&t_send1, (Optr)PSend11347, (Optr)&t_send_ifTrue_, (Optr)PSend11348, (Optr)PBlock11349, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11341, 2, PSend11348, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod11340, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_isOtherEndConnected() {
    Symbol SMB_isOtherEndConnected = new_Symbol(L"isOtherEndConnected");
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11365 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11366 = new_Send((Optr)PSend11365, SMB_not, 0);
    Array PThreadedCode11364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11365, (Optr)&t_send0, (Optr)PSend11366, (Optr)&t_method_return);
    Method PMethod11363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11364, 1, PSend11366);
    
    MethodClosure MC_SMB_isOtherEndConnected = new_MethodClosure((Method)PMethod11363, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isOtherEndConnected, MC_SMB_isOtherEndConnected);
}


static void init_SMB_resetBuffers() {
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11370 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11369 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11370);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11371 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign11372 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)int_1_Const);
    // streamBuffer:. 
    Send PSend11374 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11373 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11374);
    Assign PAssign11375 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11368 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign11369, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11370, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11371, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11372, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11373, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11374, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11375, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11367 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11368, 6, PAssign11369, PAssign11371, PAssign11372, PAssign11373, PAssign11375, self);
    
    MethodClosure MC_SMB_resetBuffers = new_MethodClosure((Method)PMethod11367, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resetBuffers, MC_SMB_resetBuffers);
}


static void init_SMB_debug() {
    Symbol SMB_debug = new_Symbol(L"debug");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Array PArray11377 = new_Array_with(1, (Optr)VAR_data_0_0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11380 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11379 = new_Assign((Optr)VAR_data_0_0, (Optr)PSend11380);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11382 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11385 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_11387 = new_String(L"Buffer size: ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11388 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11389 = new_Send((Optr)PSend11388, SMB_asString, 0);
    Constant string_11387_Const = new_Constant((Optr)string_11387);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11390 = new_Send((Optr)string_11387_Const, SMB__append_, 1, (Optr)PSend11389);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11391 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11390);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11392 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11393 = new_String(L"InBuffer data size: ");
    // asString. 
    Send PSend11394 = new_Send((Optr)VAR_data_0_0, SMB_asString, 0);
    Constant string_11393_Const = new_Constant((Optr)string_11393);
    // ,. 
    Send PSend11395 = new_Send((Optr)string_11393_Const, SMB__append_, 1, (Optr)PSend11394);
    // nextPutAll:. 
    Send PSend11396 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11395);
    // cr. 
    Send PSend11397 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11398 = new_String(L"In data (20):");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11399 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend11400 = new_Send((Optr)VAR_data_0_0, SMB_min_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend11401 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)PSend11400);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11402 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)PSend11399, (Optr)PSend11401);
    Constant string_11398_Const = new_Constant((Optr)string_11398);
    // ,. 
    Send PSend11403 = new_Send((Optr)string_11398_Const, SMB__append_, 1, (Optr)PSend11402);
    // nextPutAll:. 
    Send PSend11404 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11403);
    // cr. 
    Send PSend11405 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11406 = new_String(L"OutBuffer data size: ");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11407 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // asString. 
    Send PSend11408 = new_Send((Optr)PSend11407, SMB_asString, 0);
    Constant string_11406_Const = new_Constant((Optr)string_11406);
    // ,. 
    Send PSend11409 = new_Send((Optr)string_11406_Const, SMB__append_, 1, (Optr)PSend11408);
    // nextPutAll:. 
    Send PSend11410 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11409);
    // cr. 
    Send PSend11411 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11412 = new_String(L"Out data (20):");
    // -. 
    Send PSend11413 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11414 = new_Send((Optr)PSend11413, SMB_min_, 1, (Optr)int_20_Const);
    // copyFrom:to:. 
    Send PSend11415 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend11414);
    Constant string_11412_Const = new_Constant((Optr)string_11412);
    // ,. 
    Send PSend11416 = new_Send((Optr)string_11412_Const, SMB__append_, 1, (Optr)PSend11415);
    // nextPutAll:. 
    Send PSend11417 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11416);
    // cr. 
    Send PSend11418 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11386 = instantiate_Array_with(ThreadedCode_Class, 0, 120, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11387, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11388, (Optr)&t_send0, (Optr)PSend11389, (Optr)&t_send1, (Optr)PSend11390, (Optr)&t_send1, (Optr)PSend11391, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11393, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send0, (Optr)PSend11394, (Optr)&t_send1, (Optr)PSend11395, (Optr)&t_send1, (Optr)PSend11396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11398, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11399, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11400, (Optr)&t_send1, (Optr)PSend11401, (Optr)&t_send2, (Optr)PSend11402, (Optr)&t_send1, (Optr)PSend11403, (Optr)&t_send1, (Optr)PSend11404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11405, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11406, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11407, (Optr)&t_send0, (Optr)PSend11408, (Optr)&t_send1, (Optr)PSend11409, (Optr)&t_send1, (Optr)PSend11410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11411, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11412, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11413, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11414, (Optr)&t_send2, (Optr)PSend11415, (Optr)&t_send1, (Optr)PSend11416, (Optr)&t_send1, (Optr)PSend11417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11418, (Optr)&t_method_return);
    Block PBlock11384 = new_Block_with(PArray11385, empty_Array, PThreadedCode11386, 10, PSend11391, PSend11392, PSend11396, PSend11397, PSend11404, PSend11405, PSend11410, PSend11411, PSend11417, PSend11418);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11419 = new_Send((Optr)PBlock11384, SMB_value_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11383 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11384, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11419, (Optr)&t_method_return);
    Block PBlock11381 = new_Block_with(PArray11382, empty_Array, PThreadedCode11383, 1, PSend11419);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend11420 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock11381);
    Array PThreadedCode11378 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11379, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock11381, (Optr)&t_send1, (Optr)PSend11420, (Optr)&t_method_return);
    Method PMethod11376 = new_Method_with(empty_Array, PArray11377, empty_Array, PThreadedCode11378, 2, PAssign11379, PSend11420);
    
    MethodClosure MC_SMB_debug = new_MethodClosure((Method)PMethod11376, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_debug, MC_SMB_debug);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray11422 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_3 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_4 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11423 = new_Array_with(4, (Optr)VAR_index_0_1, (Optr)VAR_result_0_2, (Optr)VAR_lastRecentlyRead_0_3, (Optr)VAR_searchedSoFar_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11426 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11428 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)int_0_Const);
    Assign PAssign11429 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)int_0_Const);
    Assign PAssign11430 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11433 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11434 = new_Send((Optr)PSend11433, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11437 = new_Send((Optr)VAR_lastRecentlyRead_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11440 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11441 = new_Send((Optr)PSend11440, SMB_not, 0);
    Array PThreadedCode11439 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11440, (Optr)&t_send0, (Optr)PSend11441, (Optr)&t_block_return);
    Block PBlock11438 = new_Block_with(empty_Array, empty_Array, PThreadedCode11439, 1, PSend11441);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11442 = new_Send((Optr)PSend11437, SMB_and_, 1, (Optr)PBlock11438);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11445 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11446 = new_Send((Optr)PSend11445, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11444 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11445, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11446, (Optr)&t_block_return);
    Block PBlock11443 = new_Block_with(empty_Array, empty_Array, PThreadedCode11444, 1, PSend11446);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11447 = new_Send((Optr)PSend11442, SMB_or_, 1, (Optr)PBlock11443);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11454 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11453 = new_Send((Optr)PSend11454, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOf:startingAt:. 
    Send PSend11452 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOf_startingAt_, 2, (Optr)VAR_aCharacterOrByte_0_0, (Optr)PSend11453);
    Assign PAssign11451 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11452);
    // inBufferSize. 
    Send PSend11456 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11455 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)PSend11456);
    // >. 
    Send PSend11457 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11460 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // >. 
    Send PSend11461 = new_Send((Optr)PSend11460, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11459 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11460, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11461, (Optr)&t_block_return);
    Block PBlock11458 = new_Block_with(empty_Array, empty_Array, PThreadedCode11459, 1, PSend11461);
    // and:. 
    Send PSend11462 = new_Send((Optr)PSend11457, SMB_and_, 1, (Optr)PBlock11458);
    Assign PAssign11466 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11465 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11466, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11464 = new_Block_with(empty_Array, empty_Array, PThreadedCode11465, 1, PAssign11466);
    // ifTrue:. 
    Send PSend11463 = new_Send((Optr)PSend11462, SMB_ifTrue_, 1, (Optr)PBlock11464);
    Array PThreadedCode11450 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11451, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_4, (Optr)&t_send1, (Optr)PSend11454, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11453, (Optr)&t_send2, (Optr)PSend11452, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11455, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11456, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11457, (Optr)&t_push_closure, (Optr)PBlock11458, (Optr)&t_send1, (Optr)PSend11462, (Optr)&t_send_ifTrue_, (Optr)PSend11463, (Optr)PBlock11464, (Optr)&t_block_return);
    Block PBlock11449 = new_Block_with(empty_Array, empty_Array, PThreadedCode11450, 3, PAssign11451, PAssign11455, PSend11463);
    // ifTrue:. 
    Send PSend11448 = new_Send((Optr)PSend11447, SMB_ifTrue_, 1, (Optr)PBlock11449);
    // =. 
    Send PSend11467 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11436 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11437, (Optr)&t_push_closure, (Optr)PBlock11438, (Optr)&t_send1, (Optr)PSend11442, (Optr)&t_push_closure, (Optr)PBlock11443, (Optr)&t_send1, (Optr)PSend11447, (Optr)&t_send_ifTrue_, (Optr)PSend11448, (Optr)PBlock11449, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11467, (Optr)&t_block_return);
    Block PBlock11435 = new_Block_with(empty_Array, empty_Array, PThreadedCode11436, 2, PSend11448, PSend11467);
    // and:. 
    Send PSend11468 = new_Send((Optr)PSend11434, SMB_and_, 1, (Optr)PBlock11435);
    Array PThreadedCode11432 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11433, (Optr)&t_send0, (Optr)PSend11434, (Optr)&t_push_closure, (Optr)PBlock11435, (Optr)&t_send1, (Optr)PSend11468, (Optr)&t_block_return);
    Block PBlock11431 = new_Block_with(empty_Array, empty_Array, PThreadedCode11432, 1, PSend11468);
    String string_11471 = new_String(L"Buffer: ");
    Constant string_11471_Const = new_Constant((Optr)string_11471);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11472 = new_Send((Optr)string_11471_Const, SMB__append_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend11473 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11472);
    // =. 
    Send PSend11474 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11478 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11477 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11478, (Optr)&t_block_return);
    Block PBlock11476 = new_Block_with(empty_Array, empty_Array, PThreadedCode11477, 1, PSend11478);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11481 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11480 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11481, (Optr)&t_block_return);
    Block PBlock11479 = new_Block_with(empty_Array, empty_Array, PThreadedCode11480, 1, PSend11481);
    // ifTrue:ifFalse:. 
    Send PSend11475 = new_Send((Optr)PSend11474, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11476, (Optr)PBlock11479);
    Assign PAssign11482 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11470 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11471, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend11472, (Optr)&t_send1, (Optr)PSend11473, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11474, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11475, (Optr)PBlock11476, (Optr)PBlock11479, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11482, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11469 = new_Block_with(empty_Array, empty_Array, PThreadedCode11470, 3, PSend11473, PSend11475, PAssign11482);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11483 = new_Send((Optr)PBlock11431, SMB_whileTrue_, 1, (Optr)PBlock11469);
    // >. 
    Send PSend11484 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11491 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11490 = new_Send((Optr)PSend11491, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11489 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11490);
    Assign PAssign11488 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend11489);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11492 = new_Send((Optr)self, SMB_skip_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11493 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode11487 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11488, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11491, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11490, (Optr)&t_send1, (Optr)PSend11489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11492, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend11493, (Optr)&t_block_return);
    Block PBlock11486 = new_Block_with(empty_Array, empty_Array, PThreadedCode11487, 3, PAssign11488, PSend11492, PSend11493);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11496 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11497 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11496);
    Array PThreadedCode11495 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11496, (Optr)&t_send1, (Optr)PSend11497, (Optr)&t_block_return);
    Block PBlock11494 = new_Block_with(empty_Array, empty_Array, PThreadedCode11495, 1, PSend11497);
    // ifTrue:ifFalse:. 
    Send PSend11485 = new_Send((Optr)PSend11484, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11486, (Optr)PBlock11494);
    Array PThreadedCode11427 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11428, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11429, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11430, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11431, (Optr)&t_push_closure, (Optr)PBlock11469, (Optr)&t_send1, (Optr)PSend11483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11484, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11485, (Optr)PBlock11486, (Optr)PBlock11494, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11425 = new_Block_with(PArray11426, empty_Array, PThreadedCode11427, 6, PAssign11428, PAssign11429, PAssign11430, PSend11483, PSend11485, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11498 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11425);
    Array PThreadedCode11424 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11425, (Optr)&t_send1, (Optr)PSend11498, (Optr)&t_method_return);
    Method PMethod11421 = new_Method_with(PArray11422, PArray11423, empty_Array, PThreadedCode11424, 1, PSend11498);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod11421, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11505 = new_Send((Optr)self, SMB_atEnd, 0);
    Array PThreadedCode11504 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11505, (Optr)&t_block_return);
    Block PBlock11503 = new_Block_with(empty_Array, empty_Array, PThreadedCode11504, 1, PSend11505);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11508 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11507 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11508, (Optr)&t_block_return);
    Block PBlock11506 = new_Block_with(empty_Array, empty_Array, PThreadedCode11507, 1, PSend11508);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend11509 = new_Send((Optr)PBlock11503, SMB_whileFalse_, 1, (Optr)PBlock11506);
    Array PThreadedCode11502 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11503, (Optr)&t_push_closure, (Optr)PBlock11506, (Optr)&t_send1, (Optr)PSend11509, (Optr)&t_block_return);
    Block PBlock11501 = new_Block_with(empty_Array, empty_Array, PThreadedCode11502, 1, PSend11509);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11511 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode11512 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock11510 = new_Block_with(PArray11511, empty_Array, PThreadedCode11512, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11513 = new_Send((Optr)PBlock11501, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock11510);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11514 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode11500 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock11501, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock11510, (Optr)&t_send2, (Optr)PSend11513, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11514, (Optr)&t_method_return);
    Method PMethod11499 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11500, 2, PSend11513, PSend11514);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod11499, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_recentlyRead() {
    Symbol SMB_recentlyRead = new_Symbol(L"recentlyRead");
    Array PThreadedCode11516 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_method_return);
    Method PMethod11515 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11516, 1, slot_IO_SocketStream_recentlyRead);
    
    MethodClosure MC_SMB_recentlyRead = new_MethodClosure((Method)PMethod11515, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_recentlyRead, MC_SMB_recentlyRead);
}


static void init_class_SMB_openConnectionToHostNamed_port_() {
    Symbol SMB_openConnectionToHostNamed_port_ = new_Symbol(L"openConnectionToHostNamed:port:");
    Variable VAR_hostName_0_0 = new_Variable_named(L"hostName", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11518 = new_Array_with(2, (Optr)VAR_hostName_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_hostIP_0_2 = new_Variable_named(L"hostIP", 0);
    Array PArray11519 = new_Array_with(1, (Optr)VAR_hostIP_0_2);
    Symbol SMB_addressForName_timeout_ = new_Symbol(L"addressForName:timeout:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // addressForName:timeout:. 
    Send PSend11522 = new_Send((Optr)NetNameResolver_classReference, SMB_addressForName_timeout_, 2, (Optr)VAR_hostName_0_0, (Optr)int_20_Const);
    Assign PAssign11521 = new_Assign((Optr)VAR_hostIP_0_2, (Optr)PSend11522);
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    // openConnectionToHost:port:. 
    Send PSend11523 = new_Send((Optr)self, SMB_openConnectionToHost_port_, 2, (Optr)VAR_hostIP_0_2, (Optr)VAR_portNumber_0_1);
    Array PThreadedCode11520 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign11521, (Optr)&t_push_class_reference, (Optr)NetNameResolver_classReference, (Optr)&t_push_variable, (Optr)VAR_hostName_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send2, (Optr)PSend11522, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_2, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11523, (Optr)&t_method_return);
    Method PMethod11517 = new_Method_with(PArray11518, PArray11519, empty_Array, PThreadedCode11520, 2, PAssign11521, PSend11523);
    
    MethodClosure MC_SMB_openConnectionToHostNamed_port_ = new_MethodClosure((Method)PMethod11517, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHostNamed_port_, MC_SMB_openConnectionToHostNamed_port_);
}


static void init_class_SMB_openConnectionToHost_port_() {
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    Variable VAR_hostIP_0_0 = new_Variable_named(L"hostIP", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11525 = new_Array_with(2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_socket_0_2 = new_Variable_named(L"socket", 0);
    Array PArray11526 = new_Array_with(1, (Optr)VAR_socket_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11529 = new_Send((Optr)PSocket_classReference, SMB_new, 0);
    Assign PAssign11528 = new_Assign((Optr)VAR_socket_0_2, (Optr)PSend11529);
    Symbol SMB_connectTo_port_ = new_Symbol(L"connectTo:port:");
    // connectTo:port:. 
    Send PSend11530 = new_Send((Optr)VAR_socket_0_2, SMB_connectTo_port_, 2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11531 = new_Send((Optr)self, SMB_on_, 1, (Optr)VAR_socket_0_2);
    Array PThreadedCode11527 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign11528, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_0, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11530, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_send1, (Optr)PSend11531, (Optr)&t_method_return);
    Method PMethod11524 = new_Method_with(PArray11525, PArray11526, empty_Array, PThreadedCode11527, 3, PAssign11528, PSend11530, PSend11531);
    
    MethodClosure MC_SMB_openConnectionToHost_port_ = new_MethodClosure((Method)PMethod11524, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHost_port_, MC_SMB_openConnectionToHost_port_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode11533 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod11532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11533, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod11532, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_socket_0_0 = new_Variable_named(L"socket", 0);
    Array PArray11535 = new_Array_with(1, (Optr)VAR_socket_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11537 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    // socket:. 
    Send PSend11538 = new_Send((Optr)PSend11537, SMB_socket_, 1, (Optr)VAR_socket_0_0);
    Array PThreadedCode11536 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11537, (Optr)&t_push_variable, (Optr)VAR_socket_0_0, (Optr)&t_send1, (Optr)PSend11538, (Optr)&t_method_return);
    Method PMethod11534 = new_Method_with(PArray11535, empty_Array, empty_Array, PThreadedCode11536, 1, PSend11538);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod11534, HEADER(IO_SocketStream_Class));
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