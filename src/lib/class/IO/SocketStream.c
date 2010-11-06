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
    Array PArray10403 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10405 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10404 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10405, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10402 = new_Method_with(PArray10403, empty_Array, empty_Array, PThreadedCode10404, 2, PAssign10405, self);
    
    MethodClosure MC_SMB_shouldSignal_ = new_MethodClosure((Method)PMethod10402, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal_, MC_SMB_shouldSignal_);
}


static void init_SMB_binary() {
    Symbol SMB_binary = new_Symbol(L"binary");
    Assign PAssign10408 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)true_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10409 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10407 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10408, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10409, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10406 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10407, 3, PAssign10408, PSend10409, self);
    
    MethodClosure MC_SMB_binary = new_MethodClosure((Method)PMethod10406, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_binary, MC_SMB_binary);
}


static void init_SMB_nextLine() {
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    // nextLineCrLf. 
    Send PSend10412 = new_Send((Optr)self, SMB_nextLineCrLf, 0);
    Array PThreadedCode10411 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10412, (Optr)&t_method_return);
    Method PMethod10410 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10411, 1, PSend10412);
    
    MethodClosure MC_SMB_nextLine = new_MethodClosure((Method)PMethod10410, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLine, MC_SMB_nextLine);
}


static void init_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10415 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10416 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10415);
    Array PThreadedCode10414 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10415, (Optr)&t_send1, (Optr)PSend10416, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10414, 2, PSend10416, self);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod10413, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_crlf, MC_SMB_crlf);
}


static void init_SMB_noTimeout() {
    Symbol SMB_noTimeout = new_Symbol(L"noTimeout");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10419 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)int_0_Const);
    Array PThreadedCode10418 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign10419, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10417 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10418, 2, PAssign10419, self);
    
    MethodClosure MC_SMB_noTimeout = new_MethodClosure((Method)PMethod10417, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_noTimeout, MC_SMB_noTimeout);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    String string_10422 = new_String(L"SocketStream>>receiveData");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10422_Const = new_Constant((Optr)string_10422);
    // warn:. 
    Send PSend10423 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10422_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_10428 = new_String(L"SocketStream>>receiveData: should signal");
    Constant string_10428_Const = new_Constant((Optr)string_10428);
    // warn:. 
    Send PSend10429 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10428_Const);
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    // shouldTimeout. 
    Send PSend10430 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10434 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10434_Const = new_Constant((Optr)string_10434);
    // warn:. 
    Send PSend10435 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10434_Const);
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    // receiveDataSignallingTimeout:into:startingAt:. 
    Send PSend10436 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10433 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10434, (Optr)&t_send1, (Optr)PSend10435, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10436, (Optr)&t_block_return);
    Block PBlock10432 = new_Block_with(empty_Array, empty_Array, PThreadedCode10433, 2, PSend10435, PSend10436);
    String string_10439 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10439_Const = new_Constant((Optr)string_10439);
    // warn:. 
    Send PSend10440 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10439_Const);
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    // receiveDataSignallingClosedInto:startingAt:. 
    Send PSend10441 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingClosedInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10438 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10439, (Optr)&t_send1, (Optr)PSend10440, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10441, (Optr)&t_block_return);
    Block PBlock10437 = new_Block_with(empty_Array, empty_Array, PThreadedCode10438, 2, PSend10440, PSend10441);
    // ifTrue:ifFalse:. 
    Send PSend10431 = new_Send((Optr)PSend10430, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10432, (Optr)PBlock10437);
    Array PThreadedCode10427 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10428, (Optr)&t_send1, (Optr)PSend10429, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10430, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10431, (Optr)PBlock10432, (Optr)PBlock10437, (Optr)&t_block_return);
    Block PBlock10426 = new_Block_with(empty_Array, empty_Array, PThreadedCode10427, 2, PSend10429, PSend10431);
    String string_10444 = new_String(L"SocketStream>>receiveData: should NOT signal");
    Constant string_10444_Const = new_Constant((Optr)string_10444);
    // warn:. 
    Send PSend10445 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10444_Const);
    // shouldTimeout. 
    Send PSend10446 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10450 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10450_Const = new_Constant((Optr)string_10450);
    // warn:. 
    Send PSend10451 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10450_Const);
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    // receiveDataTimeout:into:startingAt:. 
    Send PSend10452 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10449 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10450, (Optr)&t_send1, (Optr)PSend10451, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10452, (Optr)&t_block_return);
    Block PBlock10448 = new_Block_with(empty_Array, empty_Array, PThreadedCode10449, 2, PSend10451, PSend10452);
    String string_10455 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10455_Const = new_Constant((Optr)string_10455);
    // warn:. 
    Send PSend10456 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10455_Const);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10457 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10454 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10455, (Optr)&t_send1, (Optr)PSend10456, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10457, (Optr)&t_block_return);
    Block PBlock10453 = new_Block_with(empty_Array, empty_Array, PThreadedCode10454, 2, PSend10456, PSend10457);
    // ifTrue:ifFalse:. 
    Send PSend10447 = new_Send((Optr)PSend10446, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10448, (Optr)PBlock10453);
    Array PThreadedCode10443 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10444, (Optr)&t_send1, (Optr)PSend10445, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10446, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10447, (Optr)PBlock10448, (Optr)PBlock10453, (Optr)&t_block_return);
    Block PBlock10442 = new_Block_with(empty_Array, empty_Array, PThreadedCode10443, 2, PSend10445, PSend10447);
    // ifTrue:ifFalse:. 
    Send PSend10425 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10426, (Optr)PBlock10442);
    Assign PAssign10424 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10425);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10458 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10421 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10422, (Optr)&t_send1, (Optr)PSend10423, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10424, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10425, (Optr)PBlock10426, (Optr)PBlock10442, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10458, (Optr)&t_method_return);
    Method PMethod10420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10421, 3, PSend10423, PAssign10424, PSend10458);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod10420, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_isBinary() {
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    Array PThreadedCode10460 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_method_return);
    Method PMethod10459 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10460, 1, slot_IO_SocketStream_binary);
    
    MethodClosure MC_SMB_isBinary = new_MethodClosure((Method)PMethod10459, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isBinary, MC_SMB_isBinary);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper10463 = new_Super(SMB_initialize, 0);
    Assign PAssign10464 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)true_Const);
    Assign PAssign10465 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)true_Const);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10466 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)int_0_Const);
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    Assign PAssign10467 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)int_4096_Const);
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend10468 = new_Send((Optr)self, SMB_ascii, 0);
    Array PThreadedCode10462 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper10463, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10464, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10465, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10466, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10467, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10468, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10462, 7, PSuper10463, PAssign10464, PAssign10465, PAssign10466, PAssign10467, PSend10468, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10461, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_peekFor_() {
    Symbol SMB_peekFor_ = new_Symbol(L"peekFor:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray10470 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_nextObject_0_1 = new_Variable_named(L"nextObject", 0);
    Array PArray10471 = new_Array_with(1, (Optr)VAR_nextObject_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10474 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10476 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10480 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10479 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10480, (Optr)&t_block_return);
    Block PBlock10478 = new_Block_with(empty_Array, empty_Array, PThreadedCode10479, 1, PSend10480);
    // ifTrue:. 
    Send PSend10477 = new_Send((Optr)PSend10476, SMB_ifTrue_, 1, (Optr)PBlock10478);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10481 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10485 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10486 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10490 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10489 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10490, (Optr)&t_block_return);
    Block PBlock10488 = new_Block_with(empty_Array, empty_Array, PThreadedCode10489, 1, PSend10490);
    // ifTrue:. 
    Send PSend10487 = new_Send((Optr)PSend10486, SMB_ifTrue_, 1, (Optr)PBlock10488);
    Array PThreadedCode10484 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10485, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10486, (Optr)&t_send_ifTrue_, (Optr)PSend10487, (Optr)PBlock10488, (Optr)&t_block_return);
    Block PBlock10483 = new_Block_with(empty_Array, empty_Array, PThreadedCode10484, 2, PSend10485, PSend10487);
    // ifTrue:. 
    Send PSend10482 = new_Send((Optr)PSend10481, SMB_ifTrue_, 1, (Optr)PBlock10483);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10492 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Assign PAssign10491 = new_Assign((Optr)VAR_nextObject_0_1, (Optr)PSend10492);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10493 = new_Send((Optr)VAR_nextObject_0_1, SMB__equals_, 1, (Optr)VAR_aCharacterOrByte_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10498 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10497 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10498);
    // escape:. 
    Send PSend10499 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10496 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10497, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10498, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10499, (Optr)&t_block_return);
    Block PBlock10495 = new_Block_with(empty_Array, empty_Array, PThreadedCode10496, 2, PAssign10497, PSend10499);
    // ifTrue:. 
    Send PSend10494 = new_Send((Optr)PSend10493, SMB_ifTrue_, 1, (Optr)PBlock10495);
    Array PThreadedCode10475 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10476, (Optr)&t_send_ifTrue_, (Optr)PSend10477, (Optr)PBlock10478, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10481, (Optr)&t_send_ifTrue_, (Optr)PSend10482, (Optr)PBlock10483, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10491, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10492, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_send1, (Optr)PSend10493, (Optr)&t_send_ifTrue_, (Optr)PSend10494, (Optr)PBlock10495, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock10473 = new_Block_with(PArray10474, empty_Array, PThreadedCode10475, 5, PSend10477, PSend10482, PAssign10491, PSend10494, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10500 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10473);
    Array PThreadedCode10472 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10473, (Optr)&t_send1, (Optr)PSend10500, (Optr)&t_method_return);
    Method PMethod10469 = new_Method_with(PArray10470, PArray10471, empty_Array, PThreadedCode10472, 1, PSend10500);
    
    MethodClosure MC_SMB_peekFor_ = new_MethodClosure((Method)PMethod10469, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekFor_, MC_SMB_peekFor_);
}


static void init_SMB_peekForAll_() {
    Symbol SMB_peekForAll_ = new_Symbol(L"peekForAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10502 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_sz_0_1 = new_Variable_named(L"sz", 0);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray10503 = new_Array_with(2, (Optr)VAR_sz_0_1, (Optr)VAR_start_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10506 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10509 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Assign PAssign10508 = new_Assign((Optr)VAR_sz_0_1, (Optr)PSend10509);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10510 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10511 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10512 = new_Send((Optr)PSend10511, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend10513 = new_Send((Optr)PSend10512, SMB__lt_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10517 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10516 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10517, (Optr)&t_block_return);
    Block PBlock10515 = new_Block_with(empty_Array, empty_Array, PThreadedCode10516, 1, PSend10517);
    // ifTrue:. 
    Send PSend10514 = new_Send((Optr)PSend10513, SMB_ifTrue_, 1, (Optr)PBlock10515);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10519 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10518 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend10519);
    Symbol SMB_findString_startingAt_ = new_Symbol(L"findString:startingAt:");
    // findString:startingAt:. 
    Send PSend10520 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_findString_startingAt_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_start_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10521 = new_Send((Optr)PSend10520, SMB__equals_, 1, (Optr)VAR_start_0_2);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend10525 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10524 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10525, (Optr)&t_block_return);
    Block PBlock10523 = new_Block_with(empty_Array, empty_Array, PThreadedCode10524, 1, PSend10525);
    // ifFalse:. 
    Send PSend10522 = new_Send((Optr)PSend10521, SMB_ifFalse_, 1, (Optr)PBlock10523);
    // +. 
    Send PSend10527 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_sz_0_1);
    Assign PAssign10526 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10527);
    Array PThreadedCode10507 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign10508, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend10509, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10510, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10511, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10512, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10513, (Optr)&t_send_ifTrue_, (Optr)PSend10514, (Optr)PBlock10515, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10518, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10519, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send2, (Optr)PSend10520, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send1, (Optr)PSend10521, (Optr)&t_send_ifFalse_, (Optr)PSend10522, (Optr)PBlock10523, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10526, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10527, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock10505 = new_Block_with(PArray10506, empty_Array, PThreadedCode10507, 7, PAssign10508, PSend10510, PSend10514, PAssign10518, PSend10522, PAssign10526, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10528 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10505);
    Array PThreadedCode10504 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10505, (Optr)&t_send1, (Optr)PSend10528, (Optr)&t_method_return);
    Method PMethod10501 = new_Method_with(PArray10502, PArray10503, empty_Array, PThreadedCode10504, 1, PSend10528);
    
    MethodClosure MC_SMB_peekForAll_ = new_MethodClosure((Method)PMethod10501, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekForAll_, MC_SMB_peekForAll_);
}


static void init_SMB_receiveAvailableData() {
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10532 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10531 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10532);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10533 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10530 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10531, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10532, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10533, (Optr)&t_method_return);
    Method PMethod10529 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10530, 2, PAssign10531, PSend10533);
    
    MethodClosure MC_SMB_receiveAvailableData = new_MethodClosure((Method)PMethod10529, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveAvailableData, MC_SMB_receiveAvailableData);
}


static void init_SMB_autoFlush_() {
    Symbol SMB_autoFlush_ = new_Symbol(L"autoFlush:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10535 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10537 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10536 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10537, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10534 = new_Method_with(PArray10535, empty_Array, empty_Array, PThreadedCode10536, 2, PAssign10537, self);
    
    MethodClosure MC_SMB_autoFlush_ = new_MethodClosure((Method)PMethod10534, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush_, MC_SMB_autoFlush_);
}


static void init_SMB_nextLineCrLf() {
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10540 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend10541 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend10540);
    Array PThreadedCode10539 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10540, (Optr)&t_send1, (Optr)PSend10541, (Optr)&t_method_return);
    Method PMethod10538 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10539, 1, PSend10541);
    
    MethodClosure MC_SMB_nextLineCrLf = new_MethodClosure((Method)PMethod10538, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineCrLf, MC_SMB_nextLineCrLf);
}


static void init_SMB_isStream() {
    Symbol SMB_isStream = new_Symbol(L"isStream");
    Array PThreadedCode10543 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod10542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10543, 1, true_Const);
    
    MethodClosure MC_SMB_isStream = new_MethodClosure((Method)PMethod10542, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isStream, MC_SMB_isStream);
}


static void init_SMB_receiveData_() {
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    Variable VAR_nBytes_0_0 = new_Variable_named(L"nBytes", 0);
    Array PArray10545 = new_Array_with(1, (Optr)VAR_nBytes_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10549 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10550 = new_Send((Optr)PSend10549, SMB_not, 0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10553 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10554 = new_Send((Optr)VAR_nBytes_0_0, SMB__gt_, 1, (Optr)PSend10553);
    Array PThreadedCode10552 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_nBytes_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10553, (Optr)&t_send1, (Optr)PSend10554, (Optr)&t_block_return);
    Block PBlock10551 = new_Block_with(empty_Array, empty_Array, PThreadedCode10552, 1, PSend10554);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10555 = new_Send((Optr)PSend10550, SMB_and_, 1, (Optr)PBlock10551);
    Array PThreadedCode10548 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10549, (Optr)&t_send0, (Optr)PSend10550, (Optr)&t_push_closure, (Optr)PBlock10551, (Optr)&t_send1, (Optr)PSend10555, (Optr)&t_block_return);
    Block PBlock10547 = new_Block_with(empty_Array, empty_Array, PThreadedCode10548, 1, PSend10555);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10558 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10557 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10558, (Optr)&t_block_return);
    Block PBlock10556 = new_Block_with(empty_Array, empty_Array, PThreadedCode10557, 1, PSend10558);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10559 = new_Send((Optr)PBlock10547, SMB_whileTrue_, 1, (Optr)PBlock10556);
    Array PThreadedCode10546 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock10547, (Optr)&t_push_closure, (Optr)PBlock10556, (Optr)&t_send1, (Optr)PSend10559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10544 = new_Method_with(PArray10545, empty_Array, empty_Array, PThreadedCode10546, 2, PSend10559, self);
    
    MethodClosure MC_SMB_receiveData_ = new_MethodClosure((Method)PMethod10544, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData_, MC_SMB_receiveData_);
}


static void init_SMB_streamBuffer_() {
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray10561 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend10563 = new_Send((Optr)self, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode10566 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ByteArray_classReference, (Optr)&t_block_return);
    Block PBlock10565 = new_Block_with(empty_Array, empty_Array, PThreadedCode10566, 1, ByteArray_classReference);
    Array PThreadedCode10568 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_block_return);
    Block PBlock10567 = new_Block_with(empty_Array, empty_Array, PThreadedCode10568, 1, String_classReference);
    // ifTrue:ifFalse:. 
    Send PSend10564 = new_Send((Optr)PSend10563, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10565, (Optr)PBlock10567);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend10569 = new_Send((Optr)PSend10564, SMB_new_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode10562 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10563, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10564, (Optr)PBlock10565, (Optr)PBlock10567, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend10569, (Optr)&t_method_return);
    Method PMethod10560 = new_Method_with(PArray10561, empty_Array, empty_Array, PThreadedCode10562, 1, PSend10569);
    
    MethodClosure MC_SMB_streamBuffer_ = new_MethodClosure((Method)PMethod10560, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_streamBuffer_, MC_SMB_streamBuffer_);
}


static void init_SMB_socket_() {
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray10571 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Assign PAssign10573 = new_Assign((Optr)slot_IO_SocketStream_socket, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode10572 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10573, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10570 = new_Method_with(PArray10571, empty_Array, empty_Array, PThreadedCode10572, 2, PAssign10573, self);
    
    MethodClosure MC_SMB_socket_ = new_MethodClosure((Method)PMethod10570, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket_, MC_SMB_socket_);
}


static void init_SMB_ascii() {
    Symbol SMB_ascii = new_Symbol(L"ascii");
    Assign PAssign10576 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)false_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10577 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10575 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10576, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10577, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10574 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10575, 3, PAssign10576, PSend10577, self);
    
    MethodClosure MC_SMB_ascii = new_MethodClosure((Method)PMethod10574, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ascii, MC_SMB_ascii);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray10579 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Assign PAssign10581 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)VAR_seconds_0_0);
    Array PThreadedCode10580 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10581, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10578 = new_Method_with(PArray10579, empty_Array, empty_Array, PThreadedCode10580, 2, PAssign10581, self);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod10578, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_shouldTimeout() {
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend10584 = new_Send((Optr)self, SMB_timeout, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10585 = new_Send((Optr)PSend10584, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode10583 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10584, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10585, (Optr)&t_method_return);
    Method PMethod10582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10583, 1, PSend10585);
    
    MethodClosure MC_SMB_shouldTimeout = new_MethodClosure((Method)PMethod10582, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldTimeout, MC_SMB_shouldTimeout);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10589 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10591 = new_String(L"SocketStream>>peek");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10591_Const = new_Constant((Optr)string_10591);
    // warn:. 
    Send PSend10592 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10591_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10593 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10597 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10596 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10597, (Optr)&t_block_return);
    Block PBlock10595 = new_Block_with(empty_Array, empty_Array, PThreadedCode10596, 1, PSend10597);
    // ifTrue:. 
    Send PSend10594 = new_Send((Optr)PSend10593, SMB_ifTrue_, 1, (Optr)PBlock10595);
    String string_10598 = new_String(L"SocketStream>>peek: not at end");
    Constant string_10598_Const = new_Constant((Optr)string_10598);
    // warn:. 
    Send PSend10599 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10598_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10600 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    String string_10604 = new_String(L"SocketStream>>peek: in buffer is empty");
    Constant string_10604_Const = new_Constant((Optr)string_10604);
    // warn:. 
    Send PSend10605 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10604_Const);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10606 = new_Send((Optr)self, SMB_receiveData, 0);
    String string_10607 = new_String(L"SocketStream>>peek: recevied data");
    Constant string_10607_Const = new_Constant((Optr)string_10607);
    // warn:. 
    Send PSend10608 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10607_Const);
    // atEnd. 
    Send PSend10609 = new_Send((Optr)self, SMB_atEnd, 0);
    String string_10613 = new_String(L"SocketStream>>peek: at end");
    Constant string_10613_Const = new_Constant((Optr)string_10613);
    // warn:. 
    Send PSend10614 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10613_Const);
    // escape:. 
    Send PSend10615 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10612 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10613, (Optr)&t_send1, (Optr)PSend10614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10615, (Optr)&t_block_return);
    Block PBlock10611 = new_Block_with(empty_Array, empty_Array, PThreadedCode10612, 2, PSend10614, PSend10615);
    // ifTrue:. 
    Send PSend10610 = new_Send((Optr)PSend10609, SMB_ifTrue_, 1, (Optr)PBlock10611);
    Array PThreadedCode10603 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10604, (Optr)&t_send1, (Optr)PSend10605, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10606, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10607, (Optr)&t_send1, (Optr)PSend10608, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10609, (Optr)&t_send_ifTrue_, (Optr)PSend10610, (Optr)PBlock10611, (Optr)&t_block_return);
    Block PBlock10602 = new_Block_with(empty_Array, empty_Array, PThreadedCode10603, 4, PSend10605, PSend10606, PSend10608, PSend10610);
    // ifTrue:. 
    Send PSend10601 = new_Send((Optr)PSend10600, SMB_ifTrue_, 1, (Optr)PBlock10602);
    String string_10616 = new_String(L"SocketStream>>peek: return...");
    Constant string_10616_Const = new_Constant((Optr)string_10616);
    // warn:. 
    Send PSend10617 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10616_Const);
    String string_10618 = new_String(L"SocketStream>>peek: in buffer is");
    Constant string_10618_Const = new_Constant((Optr)string_10618);
    // warn:. 
    Send PSend10619 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10618_Const);
    // warn:. 
    Send PSend10620 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    String string_10621 = new_String(L"SocketStream>>peek: last read is");
    Constant string_10621_Const = new_Constant((Optr)string_10621);
    // warn:. 
    Send PSend10622 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10621_Const);
    // warn:. 
    Send PSend10623 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10624 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10625 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)PSend10624);
    Array PThreadedCode10590 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10591, (Optr)&t_send1, (Optr)PSend10592, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10593, (Optr)&t_send_ifTrue_, (Optr)PSend10594, (Optr)PBlock10595, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10598, (Optr)&t_send1, (Optr)PSend10599, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10600, (Optr)&t_send_ifTrue_, (Optr)PSend10601, (Optr)PBlock10602, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10616, (Optr)&t_send1, (Optr)PSend10617, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10618, (Optr)&t_send1, (Optr)PSend10619, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend10620, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10621, (Optr)&t_send1, (Optr)PSend10622, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10623, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10624, (Optr)&t_send1, (Optr)PSend10625, (Optr)&t_method_return);
    Block PBlock10588 = new_Block_with(PArray10589, empty_Array, PThreadedCode10590, 10, PSend10592, PSend10594, PSend10599, PSend10601, PSend10617, PSend10619, PSend10620, PSend10622, PSend10623, PSend10625);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10626 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10588);
    Array PThreadedCode10587 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10588, (Optr)&t_send1, (Optr)PSend10626, (Optr)&t_method_return);
    Method PMethod10586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10587, 1, PSend10626);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod10586, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_shouldSignal() {
    Symbol SMB_shouldSignal = new_Symbol(L"shouldSignal");
    Array PThreadedCode10628 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_method_return);
    Method PMethod10627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10628, 1, slot_IO_SocketStream_shouldSignal);
    
    MethodClosure MC_SMB_shouldSignal = new_MethodClosure((Method)PMethod10627, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal, MC_SMB_shouldSignal);
}


static void init_SMB_bufferSize() {
    Symbol SMB_bufferSize = new_Symbol(L"bufferSize");
    Array PThreadedCode10630 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_method_return);
    Method PMethod10629 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10630, 1, slot_IO_SocketStream_bufferSize);
    
    MethodClosure MC_SMB_bufferSize = new_MethodClosure((Method)PMethod10629, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize, MC_SMB_bufferSize);
}


static void init_SMB_nextPutAllFlush_() {
    Symbol SMB_nextPutAllFlush_ = new_Symbol(L"nextPutAllFlush:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10632 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10633 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10639 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10638 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10639, (Optr)&t_block_return);
    Block PBlock10637 = new_Block_with(empty_Array, empty_Array, PThreadedCode10638, 1, PSend10639);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10642 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10641 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10642, (Optr)&t_block_return);
    Block PBlock10640 = new_Block_with(empty_Array, empty_Array, PThreadedCode10641, 1, PSend10642);
    // ifTrue:ifFalse:. 
    Send PSend10636 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10637, (Optr)PBlock10640);
    Assign PAssign10635 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10636);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10643 = new_Send((Optr)self, SMB_flush, 0);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend10644 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10650 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend10651 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)VAR_toPut_0_1, (Optr)PSend10650);
    Array PThreadedCode10649 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10650, (Optr)&t_send2, (Optr)PSend10651, (Optr)&t_block_return);
    Block PBlock10648 = new_Block_with(empty_Array, empty_Array, PThreadedCode10649, 1, PSend10651);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray10653 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode10657 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock10656 = new_Block_with(empty_Array, empty_Array, PThreadedCode10657, 0);
    // ifFalse:. 
    Send PSend10655 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock10656);
    Array PThreadedCode10654 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend10655, (Optr)PBlock10656, (Optr)&t_method_return);
    Block PBlock10652 = new_Block_with(PArray10653, empty_Array, PThreadedCode10654, 1, PSend10655);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10658 = new_Send((Optr)PBlock10648, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock10652);
    Array PThreadedCode10647 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock10648, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock10652, (Optr)&t_send2, (Optr)PSend10658, (Optr)&t_block_return);
    Block PBlock10646 = new_Block_with(empty_Array, empty_Array, PThreadedCode10647, 1, PSend10658);
    // ifFalse:. 
    Send PSend10645 = new_Send((Optr)PSend10644, SMB_ifFalse_, 1, (Optr)PBlock10646);
    Array PThreadedCode10634 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign10635, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10636, (Optr)PBlock10637, (Optr)PBlock10640, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10643, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10644, (Optr)&t_send_ifFalse_, (Optr)PSend10645, (Optr)PBlock10646, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10631 = new_Method_with(PArray10632, PArray10633, empty_Array, PThreadedCode10634, 4, PAssign10635, PSend10643, PSend10645, self);
    
    MethodClosure MC_SMB_nextPutAllFlush_ = new_MethodClosure((Method)PMethod10631, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAllFlush_, MC_SMB_nextPutAllFlush_);
}


static void init_SMB_outBufferSize() {
    Symbol SMB_outBufferSize = new_Symbol(L"outBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10661 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10660 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10661, (Optr)&t_method_return);
    Method PMethod10659 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10660, 1, PSend10661);
    
    MethodClosure MC_SMB_outBufferSize = new_MethodClosure((Method)PMethod10659, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_outBufferSize, MC_SMB_outBufferSize);
}


static void init_SMB_sendCommand_() {
    Symbol SMB_sendCommand_ = new_Symbol(L"sendCommand:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10663 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray10666 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10668 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10669 = new_Send((Optr)VAR_aString_0_0, SMB__append_, 1, (Optr)PSend10668);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10670 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)PSend10669);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10671 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Array PThreadedCode10667 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10668, (Optr)&t_send1, (Optr)PSend10669, (Optr)&t_send1, (Optr)PSend10670, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend10671, (Optr)&t_method_return);
    Block PBlock10665 = new_Block_with(PArray10666, empty_Array, PThreadedCode10667, 2, PSend10670, PSend10671);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10672 = new_Send((Optr)PBlock10665, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10664 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock10665, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10672, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10662 = new_Method_with(PArray10663, empty_Array, empty_Array, PThreadedCode10664, 2, PSend10672, self);
    
    MethodClosure MC_SMB_sendCommand_ = new_MethodClosure((Method)PMethod10662, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_sendCommand_, MC_SMB_sendCommand_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10675 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10678 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10679 = new_Send((Optr)PSend10678, SMB_not, 0);
    Array PThreadedCode10677 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10678, (Optr)&t_send0, (Optr)PSend10679, (Optr)&t_block_return);
    Block PBlock10676 = new_Block_with(empty_Array, empty_Array, PThreadedCode10677, 1, PSend10679);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10680 = new_Send((Optr)PSend10675, SMB_and_, 1, (Optr)PBlock10676);
    Array PThreadedCode10674 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10675, (Optr)&t_push_closure, (Optr)PBlock10676, (Optr)&t_send1, (Optr)PSend10680, (Optr)&t_method_return);
    Method PMethod10673 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10674, 1, PSend10680);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod10673, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_checkFlush() {
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10685 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Array PThreadedCode10684 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend10685, (Optr)&t_block_return);
    Block PBlock10683 = new_Block_with(empty_Array, empty_Array, PThreadedCode10684, 1, PSend10685);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10686 = new_Send((Optr)slot_IO_SocketStream_autoFlush, SMB_and_, 1, (Optr)PBlock10683);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10690 = new_Send((Optr)self, SMB_flush, 0);
    Array PThreadedCode10689 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10690, (Optr)&t_block_return);
    Block PBlock10688 = new_Block_with(empty_Array, empty_Array, PThreadedCode10689, 1, PSend10690);
    // ifTrue:. 
    Send PSend10687 = new_Send((Optr)PSend10686, SMB_ifTrue_, 1, (Optr)PBlock10688);
    Array PThreadedCode10682 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_push_closure, (Optr)PBlock10683, (Optr)&t_send1, (Optr)PSend10686, (Optr)&t_send_ifTrue_, (Optr)PSend10687, (Optr)PBlock10688, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10682, 2, PSend10687, self);
    
    MethodClosure MC_SMB_checkFlush = new_MethodClosure((Method)PMethod10681, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_checkFlush, MC_SMB_checkFlush);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10692 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10693 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10695 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10697 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10696 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10697);
    // +. 
    Send PSend10700 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10701 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10699 = new_Send((Optr)PSend10700, SMB_min_, 1, (Optr)PSend10701);
    Assign PAssign10698 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10699);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10702 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10694 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10695, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10696, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10697, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10698, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10700, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10701, (Optr)&t_send1, (Optr)PSend10699, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend10702, (Optr)&t_method_return);
    Method PMethod10691 = new_Method_with(PArray10692, PArray10693, empty_Array, PThreadedCode10694, 4, PSend10695, PAssign10696, PAssign10698, PSend10702);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod10691, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_socket() {
    Symbol SMB_socket = new_Symbol(L"socket");
    Array PThreadedCode10704 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_method_return);
    Method PMethod10703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10704, 1, slot_IO_SocketStream_socket);
    
    MethodClosure MC_SMB_socket = new_MethodClosure((Method)PMethod10703, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket, MC_SMB_socket);
}


static void init_SMB_adjustInBuffer_() {
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    Variable VAR_bytesRead_0_0 = new_Variable_named(L"bytesRead", 0);
    Array PArray10706 = new_Array_with(1, (Optr)VAR_bytesRead_0_0);
    Variable VAR_old_0_1 = new_Variable_named(L"old", 0);
    Array PArray10707 = new_Array_with(1, (Optr)VAR_old_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10710 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10712 = new_String(L"SocketStream>>adjustInBuffer:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10712_Const = new_Constant((Optr)string_10712);
    // warn:. 
    Send PSend10713 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10712_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10714 = new_Send((Optr)VAR_bytesRead_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10718 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10717 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10718, (Optr)&t_block_return);
    Block PBlock10716 = new_Block_with(empty_Array, empty_Array, PThreadedCode10717, 1, PSend10718);
    // ifTrue:. 
    Send PSend10715 = new_Send((Optr)PSend10714, SMB_ifTrue_, 1, (Optr)PBlock10716);
    Assign PAssign10719 = new_Assign((Optr)VAR_old_0_1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10721 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__plus_, 1, (Optr)VAR_bytesRead_0_0);
    Assign PAssign10720 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10721);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10722 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10723 = new_Send((Optr)PSend10722, SMB__minus_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10724 = new_Send((Optr)PSend10723, SMB__lt_, 1, (Optr)int_1024_Const);
    SmallInt int_512 = new_SmallInt(512);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_512_Const = new_Constant((Optr)int_512);
    // >. 
    Send PSend10728 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__gt_, 1, (Optr)int_512_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    // moveInBufferDown. 
    Send PSend10732 = new_Send((Optr)self, SMB_moveInBufferDown, 0);
    // -. 
    Send PSend10733 = new_Send((Optr)VAR_old_0_1, SMB__minus_, 1, (Optr)PSend10732);
    // escape:. 
    Send PSend10734 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10733);
    Array PThreadedCode10731 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10732, (Optr)&t_send1, (Optr)PSend10733, (Optr)&t_send1, (Optr)PSend10734, (Optr)&t_block_return);
    Block PBlock10730 = new_Block_with(empty_Array, empty_Array, PThreadedCode10731, 1, PSend10734);
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    // growInBuffer. 
    Send PSend10737 = new_Send((Optr)self, SMB_growInBuffer, 0);
    Array PThreadedCode10736 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10737, (Optr)&t_block_return);
    Block PBlock10735 = new_Block_with(empty_Array, empty_Array, PThreadedCode10736, 1, PSend10737);
    // ifTrue:ifFalse:. 
    Send PSend10729 = new_Send((Optr)PSend10728, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10730, (Optr)PBlock10735);
    Array PThreadedCode10727 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push1, (Optr)int_512, (Optr)&t_send1, (Optr)PSend10728, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10729, (Optr)PBlock10730, (Optr)PBlock10735, (Optr)&t_block_return);
    Block PBlock10726 = new_Block_with(empty_Array, empty_Array, PThreadedCode10727, 1, PSend10729);
    // ifTrue:. 
    Send PSend10725 = new_Send((Optr)PSend10724, SMB_ifTrue_, 1, (Optr)PBlock10726);
    Array PThreadedCode10711 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10712, (Optr)&t_send1, (Optr)PSend10713, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10714, (Optr)&t_send_ifTrue_, (Optr)PSend10715, (Optr)PBlock10716, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10719, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10720, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_send1, (Optr)PSend10721, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10722, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10723, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10724, (Optr)&t_send_ifTrue_, (Optr)PSend10725, (Optr)PBlock10726, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_method_return);
    Block PBlock10709 = new_Block_with(PArray10710, empty_Array, PThreadedCode10711, 6, PSend10713, PSend10715, PAssign10719, PAssign10720, PSend10725, VAR_old_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10738 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10709);
    Array PThreadedCode10708 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10709, (Optr)&t_send1, (Optr)PSend10738, (Optr)&t_method_return);
    Method PMethod10705 = new_Method_with(PArray10706, PArray10707, empty_Array, PThreadedCode10708, 1, PSend10738);
    
    MethodClosure MC_SMB_adjustInBuffer_ = new_MethodClosure((Method)PMethod10705, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustInBuffer_, MC_SMB_adjustInBuffer_);
}


static void init_SMB_ifStale_() {
    Symbol SMB_ifStale_ = new_Symbol(L"ifStale:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray10740 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10742 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend10746 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode10745 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend10746, (Optr)&t_block_return);
    Block PBlock10744 = new_Block_with(empty_Array, empty_Array, PThreadedCode10745, 1, PSend10746);
    // ifFalse:. 
    Send PSend10743 = new_Send((Optr)PSend10742, SMB_ifFalse_, 1, (Optr)PBlock10744);
    Array PThreadedCode10741 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10742, (Optr)&t_send_ifFalse_, (Optr)PSend10743, (Optr)PBlock10744, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10739 = new_Method_with(PArray10740, empty_Array, empty_Array, PThreadedCode10741, 2, PSend10743, self);
    
    MethodClosure MC_SMB_ifStale_ = new_MethodClosure((Method)PMethod10739, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ifStale_, MC_SMB_ifStale_);
}


static void init_SMB_nextAvailable() {
    Symbol SMB_nextAvailable = new_Symbol(L"nextAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10750 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10752 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10756 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10757 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10756);
    Array PThreadedCode10755 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10756, (Optr)&t_send1, (Optr)PSend10757, (Optr)&t_block_return);
    Block PBlock10754 = new_Block_with(empty_Array, empty_Array, PThreadedCode10755, 1, PSend10757);
    // ifFalse:. 
    Send PSend10753 = new_Send((Optr)PSend10752, SMB_ifFalse_, 1, (Optr)PBlock10754);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10758 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10762 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10761 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10762, (Optr)&t_block_return);
    Block PBlock10760 = new_Block_with(empty_Array, empty_Array, PThreadedCode10761, 1, PSend10762);
    // ifTrue:. 
    Send PSend10759 = new_Send((Optr)PSend10758, SMB_ifTrue_, 1, (Optr)PBlock10760);
    // nextAllInBuffer. 
    Send PSend10763 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode10751 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10752, (Optr)&t_send_ifFalse_, (Optr)PSend10753, (Optr)PBlock10754, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10758, (Optr)&t_send_ifTrue_, (Optr)PSend10759, (Optr)PBlock10760, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10763, (Optr)&t_method_return);
    Block PBlock10749 = new_Block_with(PArray10750, empty_Array, PThreadedCode10751, 3, PSend10753, PSend10759, PSend10763);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10764 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10749);
    Array PThreadedCode10748 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10749, (Optr)&t_send1, (Optr)PSend10764, (Optr)&t_method_return);
    Method PMethod10747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10748, 1, PSend10764);
    
    MethodClosure MC_SMB_nextAvailable = new_MethodClosure((Method)PMethod10747, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable, MC_SMB_nextAvailable);
}


static void init_SMB_resizeInBuffer_() {
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    Variable VAR_newSize_0_0 = new_Variable_named(L"newSize", 0);
    Array PArray10766 = new_Array_with(1, (Optr)VAR_newSize_0_0);
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend10770 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)VAR_newSize_0_0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10771 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10769 = new_Send((Optr)PSend10770, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10771, (Optr)slot_IO_SocketStream_inBuffer, (Optr)int_1_Const);
    Assign PAssign10768 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend10769);
    Array PThreadedCode10767 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign10768, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newSize_0_0, (Optr)&t_send1, (Optr)PSend10770, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10771, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10769, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10765 = new_Method_with(PArray10766, empty_Array, empty_Array, PThreadedCode10767, 2, PAssign10768, self);
    
    MethodClosure MC_SMB_resizeInBuffer_ = new_MethodClosure((Method)PMethod10765, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resizeInBuffer_, MC_SMB_resizeInBuffer_);
}


static void init_SMB_bufferSize_() {
    Symbol SMB_bufferSize_ = new_Symbol(L"bufferSize:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray10773 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign10775 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)VAR_anInt_0_0);
    Array PThreadedCode10774 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10775, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10772 = new_Method_with(PArray10773, empty_Array, empty_Array, PThreadedCode10774, 2, PAssign10775, self);
    
    MethodClosure MC_SMB_bufferSize_ = new_MethodClosure((Method)PMethod10772, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize_, MC_SMB_bufferSize_);
}


static void init_SMB_isDataAvailable() {
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10779 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10781 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10785 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10784 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10785, (Optr)&t_block_return);
    Block PBlock10783 = new_Block_with(empty_Array, empty_Array, PThreadedCode10784, 1, PSend10785);
    // ifFalse:. 
    Send PSend10782 = new_Send((Optr)PSend10781, SMB_ifFalse_, 1, (Optr)PBlock10783);
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    // dataAvailable. 
    Send PSend10786 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_dataAvailable, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Array PThreadedCode10789 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock10788 = new_Block_with(empty_Array, empty_Array, PThreadedCode10789, 1, false_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray10793 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10795 = new_Send((Optr)VAR__receiver__2_0, SMB_receiveDataIfAvailable, 0);
    // isDataAvailable. 
    Send PSend10796 = new_Send((Optr)VAR__receiver__2_0, SMB_isDataAvailable, 0);
    Array PThreadedCode10794 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10795, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10796, (Optr)&t_method_return);
    Block PBlock10792 = new_Block_with(PArray10793, empty_Array, PThreadedCode10794, 2, PSend10795, PSend10796);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10797 = new_Send((Optr)PBlock10792, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10791 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock10792, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10797, (Optr)&t_block_return);
    Block PBlock10790 = new_Block_with(empty_Array, empty_Array, PThreadedCode10791, 1, PSend10797);
    // ifFalse:ifTrue:. 
    Send PSend10787 = new_Send((Optr)PSend10786, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock10788, (Optr)PBlock10790);
    Array PThreadedCode10780 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10781, (Optr)&t_send_ifFalse_, (Optr)PSend10782, (Optr)PBlock10783, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10786, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend10787, (Optr)PBlock10788, (Optr)PBlock10790, (Optr)&t_method_return);
    Block PBlock10778 = new_Block_with(PArray10779, empty_Array, PThreadedCode10780, 2, PSend10782, PSend10787);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10798 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10778);
    Array PThreadedCode10777 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10778, (Optr)&t_send1, (Optr)PSend10798, (Optr)&t_method_return);
    Method PMethod10776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10777, 1, PSend10798);
    
    MethodClosure MC_SMB_isDataAvailable = new_MethodClosure((Method)PMethod10776, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isDataAvailable, MC_SMB_isDataAvailable);
}


static void init_SMB_adjustOutBuffer_() {
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    Variable VAR_bytesToWrite_0_0 = new_Variable_named(L"bytesToWrite", 0);
    Array PArray10800 = new_Array_with(1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10802 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10803 = new_Send((Optr)PSend10802, SMB__minus_, 1, (Optr)slot_IO_SocketStream_outNextToWrite);
    // -. 
    Send PSend10804 = new_Send((Optr)PSend10803, SMB__minus_, 1, (Optr)VAR_bytesToWrite_0_0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10805 = new_Send((Optr)PSend10804, SMB__lt_, 1, (Optr)int_1024_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // size. 
    Send PSend10814 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend10813 = new_Send((Optr)PSend10814, SMB_max_, 1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10812 = new_Send((Optr)PSend10813, SMB__times_, 1, (Optr)int_2_Const);
    // streamBuffer:. 
    Send PSend10811 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)PSend10812);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // size. 
    Send PSend10815 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10810 = new_Send((Optr)PSend10811, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10815, (Optr)slot_IO_SocketStream_outBuffer, (Optr)int_1_Const);
    Assign PAssign10809 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend10810);
    Array PThreadedCode10808 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign10809, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10814, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10813, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10812, (Optr)&t_send1, (Optr)PSend10811, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10815, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10810, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10807 = new_Block_with(empty_Array, empty_Array, PThreadedCode10808, 1, PAssign10809);
    // ifTrue:. 
    Send PSend10806 = new_Send((Optr)PSend10805, SMB_ifTrue_, 1, (Optr)PBlock10807);
    Array PThreadedCode10801 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10802, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_send1, (Optr)PSend10803, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10804, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10805, (Optr)&t_send_ifTrue_, (Optr)PSend10806, (Optr)PBlock10807, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10799 = new_Method_with(PArray10800, empty_Array, empty_Array, PThreadedCode10801, 2, PSend10806, self);
    
    MethodClosure MC_SMB_adjustOutBuffer_ = new_MethodClosure((Method)PMethod10799, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustOutBuffer_, MC_SMB_adjustOutBuffer_);
}


static void init_SMB_nextAllInBuffer() {
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10818 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10819 = new_Send((Optr)PSend10818, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10820 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10819);
    Array PThreadedCode10817 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10818, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10819, (Optr)&t_send1, (Optr)PSend10820, (Optr)&t_method_return);
    Method PMethod10816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10817, 1, PSend10820);
    
    MethodClosure MC_SMB_nextAllInBuffer = new_MethodClosure((Method)PMethod10816, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAllInBuffer, MC_SMB_nextAllInBuffer);
}


static void init_SMB_skip_() {
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10822 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10824 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10827 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10828 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10826 = new_Send((Optr)PSend10827, SMB_min_, 1, (Optr)PSend10828);
    Assign PAssign10825 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10826);
    Array PThreadedCode10823 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10824, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10825, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10827, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10828, (Optr)&t_send1, (Optr)PSend10826, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10821 = new_Method_with(PArray10822, empty_Array, empty_Array, PThreadedCode10823, 3, PSend10824, PAssign10825, self);
    
    MethodClosure MC_SMB_skip_ = new_MethodClosure((Method)PMethod10821, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_skip_, MC_SMB_skip_);
}


static void init_SMB_nextAvailable_() {
    Symbol SMB_nextAvailable_ = new_Symbol(L"nextAvailable:");
    Variable VAR_howMany_0_0 = new_Variable_named(L"howMany", 0);
    Array PArray10830 = new_Array_with(1, (Optr)VAR_howMany_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10833 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10835 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10839 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10840 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10839);
    Array PThreadedCode10838 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10839, (Optr)&t_send1, (Optr)PSend10840, (Optr)&t_block_return);
    Block PBlock10837 = new_Block_with(empty_Array, empty_Array, PThreadedCode10838, 1, PSend10840);
    // ifFalse:. 
    Send PSend10836 = new_Send((Optr)PSend10835, SMB_ifFalse_, 1, (Optr)PBlock10837);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10841 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10845 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10844 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10845, (Optr)&t_block_return);
    Block PBlock10843 = new_Block_with(empty_Array, empty_Array, PThreadedCode10844, 1, PSend10845);
    // ifTrue:. 
    Send PSend10842 = new_Send((Optr)PSend10841, SMB_ifTrue_, 1, (Optr)PBlock10843);
    // nextInBuffer:. 
    Send PSend10846 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Array PThreadedCode10834 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10835, (Optr)&t_send_ifFalse_, (Optr)PSend10836, (Optr)PBlock10837, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10841, (Optr)&t_send_ifTrue_, (Optr)PSend10842, (Optr)PBlock10843, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10846, (Optr)&t_method_return);
    Block PBlock10832 = new_Block_with(PArray10833, empty_Array, PThreadedCode10834, 3, PSend10836, PSend10842, PSend10846);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10847 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10832);
    Array PThreadedCode10831 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10832, (Optr)&t_send1, (Optr)PSend10847, (Optr)&t_method_return);
    Method PMethod10829 = new_Method_with(PArray10830, empty_Array, empty_Array, PThreadedCode10831, 1, PSend10847);
    
    MethodClosure MC_SMB_nextAvailable_ = new_MethodClosure((Method)PMethod10829, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable_, MC_SMB_nextAvailable_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10850 = new_Send((Optr)self, SMB_flush, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // closeAndDestroy:. 
    Send PSend10851 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_closeAndDestroy_, 1, (Optr)int_30_Const);
    Array PThreadedCode10849 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10850, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend10851, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10849, 3, PSend10850, PSend10851, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod10848, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_inBufferSize() {
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10854 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10855 = new_Send((Optr)PSend10854, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10853 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10854, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10855, (Optr)&t_method_return);
    Method PMethod10852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10853, 1, PSend10855);
    
    MethodClosure MC_SMB_inBufferSize = new_MethodClosure((Method)PMethod10852, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_inBufferSize, MC_SMB_inBufferSize);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray10857 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend10859 = new_Send((Optr)VAR_anObject_0_0, SMB_printOn_, 1, (Optr)self);
    Array PThreadedCode10858 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10859, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10856 = new_Method_with(PArray10857, empty_Array, empty_Array, PThreadedCode10858, 2, PSend10859, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod10856, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10863 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10865 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10869 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10868 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10869, (Optr)&t_block_return);
    Block PBlock10867 = new_Block_with(empty_Array, empty_Array, PThreadedCode10868, 1, PSend10869);
    // ifTrue:. 
    Send PSend10866 = new_Send((Optr)PSend10865, SMB_ifTrue_, 1, (Optr)PBlock10867);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10870 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10874 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10875 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10879 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10878 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10879, (Optr)&t_block_return);
    Block PBlock10877 = new_Block_with(empty_Array, empty_Array, PThreadedCode10878, 1, PSend10879);
    // ifTrue:. 
    Send PSend10876 = new_Send((Optr)PSend10875, SMB_ifTrue_, 1, (Optr)PBlock10877);
    Array PThreadedCode10873 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10874, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10875, (Optr)&t_send_ifTrue_, (Optr)PSend10876, (Optr)PBlock10877, (Optr)&t_block_return);
    Block PBlock10872 = new_Block_with(empty_Array, empty_Array, PThreadedCode10873, 2, PSend10874, PSend10876);
    // ifTrue:. 
    Send PSend10871 = new_Send((Optr)PSend10870, SMB_ifTrue_, 1, (Optr)PBlock10872);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10881 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10880 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10881);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10882 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10864 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10865, (Optr)&t_send_ifTrue_, (Optr)PSend10866, (Optr)PBlock10867, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10870, (Optr)&t_send_ifTrue_, (Optr)PSend10871, (Optr)PBlock10872, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10880, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10881, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10882, (Optr)&t_method_return);
    Block PBlock10862 = new_Block_with(PArray10863, empty_Array, PThreadedCode10864, 4, PSend10866, PSend10871, PAssign10880, PSend10882);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10883 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10862);
    Array PThreadedCode10861 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10862, (Optr)&t_send1, (Optr)PSend10883, (Optr)&t_method_return);
    Method PMethod10860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10861, 1, PSend10883);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod10860, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    // standardTimeout. 
    Send PSend10889 = new_Send((Optr)PSocket_classReference, SMB_standardTimeout, 0);
    Assign PAssign10888 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)PSend10889);
    Array PThreadedCode10887 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign10888, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend10889, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10886 = new_Block_with(empty_Array, empty_Array, PThreadedCode10887, 1, PAssign10888);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10890 = new_Send((Optr)slot_IO_SocketStream_timeout, SMB_ifNil_, 1, (Optr)PBlock10886);
    Array PThreadedCode10885 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_closure, (Optr)PBlock10886, (Optr)&t_send1, (Optr)PSend10890, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_method_return);
    Method PMethod10884 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10885, 2, PSend10890, slot_IO_SocketStream_timeout);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod10884, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_upToAll_() {
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Variable VAR_aStringOrByteArray_0_0 = new_Variable_named(L"aStringOrByteArray", 0);
    Array PArray10892 = new_Array_with(1, (Optr)VAR_aStringOrByteArray_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_sz_0_2 = new_Variable_named(L"sz", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_4 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_5 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray10893 = new_Array_with(5, (Optr)VAR_index_0_1, (Optr)VAR_sz_0_2, (Optr)VAR_result_0_3, (Optr)VAR_lastRecentlyRead_0_4, (Optr)VAR_searchedSoFar_0_5);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10896 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10898 = new_String(L"SocketStream>>upToAll:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10898_Const = new_Constant((Optr)string_10898);
    // warn:. 
    Send PSend10899 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10898_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10901 = new_Send((Optr)VAR_aStringOrByteArray_0_0, SMB_size, 0);
    Assign PAssign10900 = new_Assign((Optr)VAR_sz_0_2, (Optr)PSend10901);
    String string_10902 = new_String(L"SocketStream>>upToAll: sz is ");
    Constant string_10902_Const = new_Constant((Optr)string_10902);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10903 = new_Send((Optr)string_10902_Const, SMB__append_, 1, (Optr)VAR_sz_0_2);
    // warn:. 
    Send PSend10904 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10903);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10905 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)int_0_Const);
    Assign PAssign10906 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)int_0_Const);
    Assign PAssign10907 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    String string_10908 = new_String(L"SocketStream>>upToAll: temps initialized");
    Constant string_10908_Const = new_Constant((Optr)string_10908);
    // warn:. 
    Send PSend10909 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10908_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10912 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10913 = new_Send((Optr)PSend10912, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10916 = new_Send((Optr)VAR_lastRecentlyRead_0_4, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10919 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend10920 = new_Send((Optr)PSend10919, SMB_not, 0);
    Array PThreadedCode10918 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10919, (Optr)&t_send0, (Optr)PSend10920, (Optr)&t_block_return);
    Block PBlock10917 = new_Block_with(empty_Array, empty_Array, PThreadedCode10918, 1, PSend10920);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10921 = new_Send((Optr)PSend10916, SMB_and_, 1, (Optr)PBlock10917);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10924 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend10925 = new_Send((Optr)PSend10924, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode10923 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10924, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend10925, (Optr)&t_block_return);
    Block PBlock10922 = new_Block_with(empty_Array, empty_Array, PThreadedCode10923, 1, PSend10925);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend10926 = new_Send((Optr)PSend10921, SMB_or_, 1, (Optr)PBlock10922);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10930 = new_String(L"SocketStream>>upToAll: we need to read data");
    Constant string_10930_Const = new_Constant((Optr)string_10930);
    // warn:. 
    Send PSend10931 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10930_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10935 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_5);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10934 = new_Send((Optr)PSend10935, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOfSubCollection:startingAt:. 
    Send PSend10933 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_aStringOrByteArray_0_0, (Optr)PSend10934);
    Assign PAssign10932 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend10933);
    String string_10936 = new_String(L"SocketStream>>upToAll: searched for a bit.");
    Constant string_10936_Const = new_Constant((Optr)string_10936);
    // warn:. 
    Send PSend10937 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10936_Const);
    // inBufferSize. 
    Send PSend10939 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign10938 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)PSend10939);
    String string_10940 = new_String(L"SocketStream>>upToAll: this far we searched until");
    Constant string_10940_Const = new_Constant((Optr)string_10940);
    // warn:. 
    Send PSend10941 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10940_Const);
    // warn:. 
    Send PSend10942 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_searchedSoFar_0_5);
    // >. 
    Send PSend10943 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend10946 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)VAR_sz_0_2);
    // >. 
    Send PSend10947 = new_Send((Optr)PSend10946, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10945 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10946, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10947, (Optr)&t_block_return);
    Block PBlock10944 = new_Block_with(empty_Array, empty_Array, PThreadedCode10945, 1, PSend10947);
    // and:. 
    Send PSend10948 = new_Send((Optr)PSend10943, SMB_and_, 1, (Optr)PBlock10944);
    Assign PAssign10952 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode10951 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10952, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10950 = new_Block_with(empty_Array, empty_Array, PThreadedCode10951, 1, PAssign10952);
    // ifTrue:. 
    Send PSend10949 = new_Send((Optr)PSend10948, SMB_ifTrue_, 1, (Optr)PBlock10950);
    Array PThreadedCode10929 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10930, (Optr)&t_send1, (Optr)PSend10931, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10932, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10935, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10934, (Optr)&t_send2, (Optr)PSend10933, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10936, (Optr)&t_send1, (Optr)PSend10937, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10938, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10939, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10940, (Optr)&t_send1, (Optr)PSend10941, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10942, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10943, (Optr)&t_push_closure, (Optr)PBlock10944, (Optr)&t_send1, (Optr)PSend10948, (Optr)&t_send_ifTrue_, (Optr)PSend10949, (Optr)PBlock10950, (Optr)&t_block_return);
    Block PBlock10928 = new_Block_with(empty_Array, empty_Array, PThreadedCode10929, 7, PSend10931, PAssign10932, PSend10937, PAssign10938, PSend10941, PSend10942, PSend10949);
    // ifTrue:. 
    Send PSend10927 = new_Send((Optr)PSend10926, SMB_ifTrue_, 1, (Optr)PBlock10928);
    // =. 
    Send PSend10953 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode10915 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_4, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10916, (Optr)&t_push_closure, (Optr)PBlock10917, (Optr)&t_send1, (Optr)PSend10921, (Optr)&t_push_closure, (Optr)PBlock10922, (Optr)&t_send1, (Optr)PSend10926, (Optr)&t_send_ifTrue_, (Optr)PSend10927, (Optr)PBlock10928, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10953, (Optr)&t_block_return);
    Block PBlock10914 = new_Block_with(empty_Array, empty_Array, PThreadedCode10915, 2, PSend10927, PSend10953);
    // and:. 
    Send PSend10954 = new_Send((Optr)PSend10913, SMB_and_, 1, (Optr)PBlock10914);
    Array PThreadedCode10911 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10912, (Optr)&t_send0, (Optr)PSend10913, (Optr)&t_push_closure, (Optr)PBlock10914, (Optr)&t_send1, (Optr)PSend10954, (Optr)&t_block_return);
    Block PBlock10910 = new_Block_with(empty_Array, empty_Array, PThreadedCode10911, 1, PSend10954);
    // =. 
    Send PSend10957 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10961 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10960 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10961, (Optr)&t_block_return);
    Block PBlock10959 = new_Block_with(empty_Array, empty_Array, PThreadedCode10960, 1, PSend10961);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend10964 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode10963 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10964, (Optr)&t_block_return);
    Block PBlock10962 = new_Block_with(empty_Array, empty_Array, PThreadedCode10963, 1, PSend10964);
    // ifTrue:ifFalse:. 
    Send PSend10958 = new_Send((Optr)PSend10957, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10959, (Optr)PBlock10962);
    Assign PAssign10965 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10956 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10957, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10958, (Optr)PBlock10959, (Optr)PBlock10962, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10965, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10955 = new_Block_with(empty_Array, empty_Array, PThreadedCode10956, 2, PSend10958, PAssign10965);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10966 = new_Send((Optr)PBlock10910, SMB_whileTrue_, 1, (Optr)PBlock10955);
    // >. 
    Send PSend10967 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10974 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend10973 = new_Send((Optr)PSend10974, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend10972 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10973);
    Assign PAssign10971 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend10972);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend10975 = new_Send((Optr)self, SMB_skip_, 1, (Optr)VAR_sz_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10976 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_3);
    Array PThreadedCode10970 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign10971, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10974, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10973, (Optr)&t_send1, (Optr)PSend10972, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10975, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_send1, (Optr)PSend10976, (Optr)&t_block_return);
    Block PBlock10969 = new_Block_with(empty_Array, empty_Array, PThreadedCode10970, 3, PAssign10971, PSend10975, PSend10976);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10979 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend10980 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10979);
    Array PThreadedCode10978 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10979, (Optr)&t_send1, (Optr)PSend10980, (Optr)&t_block_return);
    Block PBlock10977 = new_Block_with(empty_Array, empty_Array, PThreadedCode10978, 1, PSend10980);
    // ifTrue:ifFalse:. 
    Send PSend10968 = new_Send((Optr)PSend10967, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10969, (Optr)PBlock10977);
    Array PThreadedCode10897 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10898, (Optr)&t_send1, (Optr)PSend10899, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10900, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_send0, (Optr)PSend10901, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10902, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10903, (Optr)&t_send1, (Optr)PSend10904, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10905, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10906, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10907, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10908, (Optr)&t_send1, (Optr)PSend10909, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10910, (Optr)&t_push_closure, (Optr)PBlock10955, (Optr)&t_send1, (Optr)PSend10966, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10967, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10968, (Optr)PBlock10969, (Optr)PBlock10977, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock10895 = new_Block_with(PArray10896, empty_Array, PThreadedCode10897, 10, PSend10899, PAssign10900, PSend10904, PAssign10905, PAssign10906, PAssign10907, PSend10909, PSend10966, PSend10968, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10981 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10895);
    Array PThreadedCode10894 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10895, (Optr)&t_send1, (Optr)PSend10981, (Optr)&t_method_return);
    Method PMethod10891 = new_Method_with(PArray10892, PArray10893, empty_Array, PThreadedCode10894, 1, PSend10981);
    
    MethodClosure MC_SMB_upToAll_ = new_MethodClosure((Method)PMethod10891, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToAll_, MC_SMB_upToAll_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray10983 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend10985 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode10984 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10985, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10982 = new_Method_with(PArray10983, empty_Array, empty_Array, PThreadedCode10984, 2, PSend10985, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod10982, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_growInBuffer() {
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10988 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10989 = new_Send((Optr)PSend10988, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    // resizeInBuffer:. 
    Send PSend10990 = new_Send((Optr)self, SMB_resizeInBuffer_, 1, (Optr)PSend10989);
    Array PThreadedCode10987 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10988, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10989, (Optr)&t_send1, (Optr)PSend10990, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10986 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10987, 2, PSend10990, self);
    
    MethodClosure MC_SMB_growInBuffer = new_MethodClosure((Method)PMethod10986, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_growInBuffer, MC_SMB_growInBuffer);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray10992 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend10994 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend10995 = new_Send((Optr)PSend10994, SMB_name, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10996 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend10995);
    String string_10999 = new_String(L"[inbuf:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11000 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // /. 
    Send PSend11001 = new_Send((Optr)PSend11000, SMB__divide_, 1, (Optr)int_1024_Const);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend11002 = new_Send((Optr)PSend11001, SMB_rounded, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11003 = new_Send((Optr)PSend11002, SMB_asString, 0);
    Constant string_10999_Const = new_Constant((Optr)string_10999);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11004 = new_Send((Optr)string_10999_Const, SMB__append_, 1, (Optr)PSend11003);
    String string_11005 = new_String(L"kb/outbuf:");
    Constant string_11005_Const = new_Constant((Optr)string_11005);
    // ,. 
    Send PSend11006 = new_Send((Optr)PSend11004, SMB__append_, 1, (Optr)string_11005_Const);
    // size. 
    Send PSend11007 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // /. 
    Send PSend11008 = new_Send((Optr)PSend11007, SMB__divide_, 1, (Optr)int_1024_Const);
    // rounded. 
    Send PSend11009 = new_Send((Optr)PSend11008, SMB_rounded, 0);
    // asString. 
    Send PSend11010 = new_Send((Optr)PSend11009, SMB_asString, 0);
    // ,. 
    Send PSend11011 = new_Send((Optr)PSend11006, SMB__append_, 1, (Optr)PSend11010);
    String string_11012 = new_String(L"kb]");
    Constant string_11012_Const = new_Constant((Optr)string_11012);
    // ,. 
    Send PSend11013 = new_Send((Optr)PSend11011, SMB__append_, 1, (Optr)string_11012_Const);
    // nextPutAll:. 
    Send PSend11014 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend11013);
    Array PThreadedCode10998 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_10999, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11000, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11001, (Optr)&t_send0, (Optr)PSend11002, (Optr)&t_send0, (Optr)PSend11003, (Optr)&t_send1, (Optr)PSend11004, (Optr)&t_push1, (Optr)string_11005, (Optr)&t_send1, (Optr)PSend11006, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend11007, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend11008, (Optr)&t_send0, (Optr)PSend11009, (Optr)&t_send0, (Optr)PSend11010, (Optr)&t_send1, (Optr)PSend11011, (Optr)&t_push1, (Optr)string_11012, (Optr)&t_send1, (Optr)PSend11013, (Optr)&t_send1, (Optr)PSend11014, (Optr)&t_block_return);
    Block PBlock10997 = new_Block_with(empty_Array, empty_Array, PThreadedCode10998, 1, PSend11014);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend11015 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_ifNotNil_, 1, (Optr)PBlock10997);
    Array PThreadedCode10993 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10994, (Optr)&t_send0, (Optr)PSend10995, (Optr)&t_send1, (Optr)PSend10996, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_closure, (Optr)PBlock10997, (Optr)&t_send1, (Optr)PSend11015, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10991 = new_Method_with(PArray10992, empty_Array, empty_Array, PThreadedCode10993, 3, PSend10996, PSend11015, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod10991, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_autoFlush() {
    Symbol SMB_autoFlush = new_Symbol(L"autoFlush");
    Array PThreadedCode11017 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_method_return);
    Method PMethod11016 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11017, 1, slot_IO_SocketStream_autoFlush);
    
    MethodClosure MC_SMB_autoFlush = new_MethodClosure((Method)PMethod11016, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush, MC_SMB_autoFlush);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11019 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11020 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend11026 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode11025 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11026, (Optr)&t_block_return);
    Block PBlock11024 = new_Block_with(empty_Array, empty_Array, PThreadedCode11025, 1, PSend11026);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11029 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode11028 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11029, (Optr)&t_block_return);
    Block PBlock11027 = new_Block_with(empty_Array, empty_Array, PThreadedCode11028, 1, PSend11029);
    // ifTrue:ifFalse:. 
    Send PSend11023 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11024, (Optr)PBlock11027);
    Assign PAssign11022 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11023);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11030 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    // adjustOutBuffer:. 
    Send PSend11031 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)PSend11030);
    // size. 
    Send PSend11032 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11033 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11032);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11034 = new_Send((Optr)PSend11033, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11035 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11034, (Optr)VAR_toPut_0_1, (Optr)int_1_Const);
    // size. 
    Send PSend11038 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    // +. 
    Send PSend11037 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11038);
    Assign PAssign11036 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11037);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11039 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11021 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign11022, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11023, (Optr)PBlock11024, (Optr)PBlock11027, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11030, (Optr)&t_send1, (Optr)PSend11031, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11032, (Optr)&t_send1, (Optr)PSend11033, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11034, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend11035, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11036, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11038, (Optr)&t_send1, (Optr)PSend11037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11039, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11018 = new_Method_with(PArray11019, PArray11020, empty_Array, PThreadedCode11021, 6, PAssign11022, PSend11031, PSend11035, PAssign11036, PSend11039, self);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod11018, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_receiveDataIfAvailable() {
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    // receiveSomeDataInto:startingAt:. 
    Send PSend11043 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveSomeDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign11042 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend11043);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend11044 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11041 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign11042, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend11043, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend11044, (Optr)&t_method_return);
    Method PMethod11040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11041, 2, PAssign11042, PSend11044);
    
    MethodClosure MC_SMB_receiveDataIfAvailable = new_MethodClosure((Method)PMethod11040, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveDataIfAvailable, MC_SMB_receiveDataIfAvailable);
}


static void init_SMB_isInBufferEmpty() {
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    String string_11047 = new_String(L"SocketStream>>isInBufferEmpty:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11047_Const = new_Constant((Optr)string_11047);
    // warn:. 
    Send PSend11048 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11047_Const);
    String string_11049 = new_String(L"-Last Read:");
    Constant string_11049_Const = new_Constant((Optr)string_11049);
    // warn:. 
    Send PSend11050 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11049_Const);
    // warn:. 
    Send PSend11051 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    String string_11052 = new_String(L"-Index Next To Write:");
    Constant string_11052_Const = new_Constant((Optr)string_11052);
    // warn:. 
    Send PSend11053 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11052_Const);
    // warn:. 
    Send PSend11054 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11055 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11056 = new_Send((Optr)PSend11055, SMB__equals_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11046 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11047, (Optr)&t_send1, (Optr)PSend11048, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11049, (Optr)&t_send1, (Optr)PSend11050, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11051, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11052, (Optr)&t_send1, (Optr)PSend11053, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11054, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11055, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11056, (Optr)&t_method_return);
    Method PMethod11045 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11046, 6, PSend11048, PSend11050, PSend11051, PSend11053, PSend11054, PSend11056);
    
    MethodClosure MC_SMB_isInBufferEmpty = new_MethodClosure((Method)PMethod11045, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isInBufferEmpty, MC_SMB_isInBufferEmpty);
}


static void init_SMB_peek_() {
    Symbol SMB_peek_ = new_Symbol(L"peek:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11058 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray11059 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11061 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11063 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11062 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11063);
    // +. 
    Send PSend11064 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11065 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend11066 = new_Send((Optr)PSend11064, SMB_min_, 1, (Optr)PSend11065);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11067 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend11066);
    Array PThreadedCode11060 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11061, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11062, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11063, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11064, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11065, (Optr)&t_send1, (Optr)PSend11066, (Optr)&t_send2, (Optr)PSend11067, (Optr)&t_method_return);
    Method PMethod11057 = new_Method_with(PArray11058, PArray11059, empty_Array, PThreadedCode11060, 3, PSend11061, PAssign11062, PSend11067);
    
    MethodClosure MC_SMB_peek_ = new_MethodClosure((Method)PMethod11057, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek_, MC_SMB_peek_);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11070 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11071 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend11070);
    Array PThreadedCode11069 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11070, (Optr)&t_send1, (Optr)PSend11071, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11068 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11069, 2, PSend11071, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod11068, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_moveInBufferDown() {
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    Variable VAR_sz_0_0 = new_Variable_named(L"sz", 0);
    Variable VAR_distanceMoved_0_1 = new_Variable_named(L"distanceMoved", 0);
    Array PArray11073 = new_Array_with(2, (Optr)VAR_sz_0_0, (Optr)VAR_distanceMoved_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11077 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11076 = new_Send((Optr)PSend11077, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign11075 = new_Assign((Optr)VAR_sz_0_0, (Optr)PSend11076);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11078 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11079 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_sz_0_0, (Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11078);
    Assign PAssign11080 = new_Assign((Optr)VAR_distanceMoved_0_1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11081 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    // +. 
    Send PSend11083 = new_Send((Optr)VAR_sz_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11082 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend11083);
    Array PThreadedCode11074 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign11075, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11077, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11076, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11078, (Optr)&t_send4, (Optr)PSend11079, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11080, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11081, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11082, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_distanceMoved_0_1, (Optr)&t_method_return);
    Method PMethod11072 = new_Method_with(empty_Array, PArray11073, empty_Array, PThreadedCode11074, 6, PAssign11075, PSend11079, PAssign11080, PAssign11081, PAssign11082, VAR_distanceMoved_0_1);
    
    MethodClosure MC_SMB_moveInBufferDown = new_MethodClosure((Method)PMethod11072, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_moveInBufferDown, MC_SMB_moveInBufferDown);
}


static void init_SMB_nextLineLf() {
    Symbol SMB_nextLineLf = new_Symbol(L"nextLineLf");
    Variable VAR_nextLine_0_0 = new_Variable_named(L"nextLine", 0);
    Array PArray11085 = new_Array_with(1, (Optr)VAR_nextLine_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend11089 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // upToAll:. 
    Send PSend11088 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend11089);
    Assign PAssign11087 = new_Assign((Optr)VAR_nextLine_0_0, (Optr)PSend11088);
    Array PThreadedCode11086 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11087, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11089, (Optr)&t_send1, (Optr)PSend11088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_0, (Optr)&t_method_return);
    Method PMethod11084 = new_Method_with(empty_Array, PArray11085, empty_Array, PThreadedCode11086, 2, PAssign11087, VAR_nextLine_0_0);
    
    MethodClosure MC_SMB_nextLineLf = new_MethodClosure((Method)PMethod11084, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineLf, MC_SMB_nextLineLf);
}


static void init_SMB_nextInBuffer_() {
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11091 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_amount_0_2 = new_Variable_named(L"amount", 0);
    Array PArray11092 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_amount_0_2);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11097 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11096 = new_Send((Optr)PSend11097, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11095 = new_Send((Optr)VAR_anInteger_0_0, SMB_min_, 1, (Optr)PSend11096);
    Assign PAssign11094 = new_Assign((Optr)VAR_amount_0_2, (Optr)PSend11095);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11099 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11098 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11099);
    // +. 
    Send PSend11101 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_amount_0_2);
    Assign PAssign11100 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11101);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11102 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11093 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign11094, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11097, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11096, (Optr)&t_send1, (Optr)PSend11095, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11098, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11099, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11100, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_amount_0_2, (Optr)&t_send1, (Optr)PSend11101, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend11102, (Optr)&t_method_return);
    Method PMethod11090 = new_Method_with(PArray11091, PArray11092, empty_Array, PThreadedCode11093, 4, PAssign11094, PAssign11098, PAssign11100, PSend11102);
    
    MethodClosure MC_SMB_nextInBuffer_ = new_MethodClosure((Method)PMethod11090, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextInBuffer_, MC_SMB_nextInBuffer_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11106 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11108 = new_String(L"SocketStream>>atEnd");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11108_Const = new_Constant((Optr)string_11108);
    // warn:. 
    Send PSend11109 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11108_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11110 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11114 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode11113 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11114, (Optr)&t_block_return);
    Block PBlock11112 = new_Block_with(empty_Array, empty_Array, PThreadedCode11113, 1, PSend11114);
    // ifFalse:. 
    Send PSend11111 = new_Send((Optr)PSend11110, SMB_ifFalse_, 1, (Optr)PBlock11112);
    String string_11115 = new_String(L"SocketStream>>atEnd: Buffer is Empty");
    Constant string_11115_Const = new_Constant((Optr)string_11115);
    // warn:. 
    Send PSend11116 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11115_Const);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend11117 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11118 = new_Send((Optr)PSend11117, SMB_not, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11121 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    // not. 
    Send PSend11122 = new_Send((Optr)PSend11121, SMB_not, 0);
    Array PThreadedCode11120 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11121, (Optr)&t_send0, (Optr)PSend11122, (Optr)&t_block_return);
    Block PBlock11119 = new_Block_with(empty_Array, empty_Array, PThreadedCode11120, 1, PSend11122);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11123 = new_Send((Optr)PSend11118, SMB_and_, 1, (Optr)PBlock11119);
    Array PThreadedCode11107 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11108, (Optr)&t_send1, (Optr)PSend11109, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11110, (Optr)&t_send_ifFalse_, (Optr)PSend11111, (Optr)PBlock11112, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11115, (Optr)&t_send1, (Optr)PSend11116, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11117, (Optr)&t_send0, (Optr)PSend11118, (Optr)&t_push_closure, (Optr)PBlock11119, (Optr)&t_send1, (Optr)PSend11123, (Optr)&t_method_return);
    Block PBlock11105 = new_Block_with(PArray11106, empty_Array, PThreadedCode11107, 4, PSend11109, PSend11111, PSend11116, PSend11123);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11124 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11105);
    Array PThreadedCode11104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11105, (Optr)&t_send1, (Optr)PSend11124, (Optr)&t_method_return);
    Method PMethod11103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11104, 1, PSend11124);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod11103, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray11126 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11127 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend11133 = new_Send((Optr)VAR_char_0_0, SMB_asInteger, 0);
    Array PThreadedCode11132 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11133, (Optr)&t_block_return);
    Block PBlock11131 = new_Block_with(empty_Array, empty_Array, PThreadedCode11132, 1, PSend11133);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend11136 = new_Send((Optr)VAR_char_0_0, SMB_asCharacter, 0);
    Array PThreadedCode11135 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11136, (Optr)&t_block_return);
    Block PBlock11134 = new_Block_with(empty_Array, empty_Array, PThreadedCode11135, 1, PSend11136);
    // ifTrue:ifFalse:. 
    Send PSend11130 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11131, (Optr)PBlock11134);
    Assign PAssign11129 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11130);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // adjustOutBuffer:. 
    Send PSend11137 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend11138 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_at_put_, 2, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)VAR_toPut_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11140 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11139 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11140);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11141 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11128 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign11129, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11130, (Optr)PBlock11131, (Optr)PBlock11134, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11137, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send2, (Optr)PSend11138, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11139, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11140, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11141, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_method_return);
    Method PMethod11125 = new_Method_with(PArray11126, PArray11127, empty_Array, PThreadedCode11128, 6, PAssign11129, PSend11137, PSend11138, PAssign11139, PSend11141, VAR_char_0_0);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod11125, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    String string_11144 = new_String(L"SocketStream>>isConnected");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11144_Const = new_Constant((Optr)string_11144);
    // warn:. 
    Send PSend11145 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11144_Const);
    // isConnected. 
    Send PSend11146 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isConnected, 0);
    Array PThreadedCode11143 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11144, (Optr)&t_send1, (Optr)PSend11145, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11146, (Optr)&t_method_return);
    Method PMethod11142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11143, 2, PSend11145, PSend11146);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod11142, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend11149 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend11150 = new_Send((Optr)self, SMB_nextPut_, 1, (Optr)PSend11149);
    Array PThreadedCode11148 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend11149, (Optr)&t_send1, (Optr)PSend11150, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11148, 2, PSend11150, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod11147, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend11153 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11156 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11157 = new_Send((Optr)PSend11156, SMB_not, 0);
    Array PThreadedCode11155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11156, (Optr)&t_send0, (Optr)PSend11157, (Optr)&t_block_return);
    Block PBlock11154 = new_Block_with(empty_Array, empty_Array, PThreadedCode11155, 1, PSend11157);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11158 = new_Send((Optr)PSend11153, SMB_and_, 1, (Optr)PBlock11154);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11164 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend11165 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11164);
    Array PThreadedCode11163 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11164, (Optr)&t_send2, (Optr)PSend11165, (Optr)&t_block_return);
    Block PBlock11162 = new_Block_with(empty_Array, empty_Array, PThreadedCode11163, 1, PSend11165);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11167 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Array PThreadedCode11171 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11170 = new_Block_with(empty_Array, empty_Array, PThreadedCode11171, 0);
    // ifFalse:. 
    Send PSend11169 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock11170);
    Array PThreadedCode11168 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend11169, (Optr)PBlock11170, (Optr)&t_method_return);
    Block PBlock11166 = new_Block_with(PArray11167, empty_Array, PThreadedCode11168, 1, PSend11169);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11172 = new_Send((Optr)PBlock11162, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock11166);
    Assign PAssign11173 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11161 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11162, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock11166, (Optr)&t_send2, (Optr)PSend11172, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11173, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11160 = new_Block_with(empty_Array, empty_Array, PThreadedCode11161, 2, PSend11172, PAssign11173);
    // ifTrue:. 
    Send PSend11159 = new_Send((Optr)PSend11158, SMB_ifTrue_, 1, (Optr)PBlock11160);
    Array PThreadedCode11152 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11153, (Optr)&t_push_closure, (Optr)PBlock11154, (Optr)&t_send1, (Optr)PSend11158, (Optr)&t_send_ifTrue_, (Optr)PSend11159, (Optr)PBlock11160, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11151 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11152, 2, PSend11159, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod11151, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_isOtherEndConnected() {
    Symbol SMB_isOtherEndConnected = new_Symbol(L"isOtherEndConnected");
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11176 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11177 = new_Send((Optr)PSend11176, SMB_not, 0);
    Array PThreadedCode11175 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11176, (Optr)&t_send0, (Optr)PSend11177, (Optr)&t_method_return);
    Method PMethod11174 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11175, 1, PSend11177);
    
    MethodClosure MC_SMB_isOtherEndConnected = new_MethodClosure((Method)PMethod11174, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isOtherEndConnected, MC_SMB_isOtherEndConnected);
}


static void init_SMB_resetBuffers() {
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11181 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11180 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11181);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11182 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign11183 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)int_1_Const);
    // streamBuffer:. 
    Send PSend11185 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11184 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11185);
    Assign PAssign11186 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11179 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign11180, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11181, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11182, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11183, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11184, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11185, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11186, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11178 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11179, 6, PAssign11180, PAssign11182, PAssign11183, PAssign11184, PAssign11186, self);
    
    MethodClosure MC_SMB_resetBuffers = new_MethodClosure((Method)PMethod11178, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resetBuffers, MC_SMB_resetBuffers);
}


static void init_SMB_debug() {
    Symbol SMB_debug = new_Symbol(L"debug");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Array PArray11188 = new_Array_with(1, (Optr)VAR_data_0_0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11191 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11190 = new_Assign((Optr)VAR_data_0_0, (Optr)PSend11191);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11193 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11196 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_11198 = new_String(L"Buffer size: ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11199 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11200 = new_Send((Optr)PSend11199, SMB_asString, 0);
    Constant string_11198_Const = new_Constant((Optr)string_11198);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11201 = new_Send((Optr)string_11198_Const, SMB__append_, 1, (Optr)PSend11200);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11202 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11201);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11203 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11204 = new_String(L"InBuffer data size: ");
    // asString. 
    Send PSend11205 = new_Send((Optr)VAR_data_0_0, SMB_asString, 0);
    Constant string_11204_Const = new_Constant((Optr)string_11204);
    // ,. 
    Send PSend11206 = new_Send((Optr)string_11204_Const, SMB__append_, 1, (Optr)PSend11205);
    // nextPutAll:. 
    Send PSend11207 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11206);
    // cr. 
    Send PSend11208 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11209 = new_String(L"In data (20):");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11210 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend11211 = new_Send((Optr)VAR_data_0_0, SMB_min_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend11212 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)PSend11211);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11213 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)PSend11210, (Optr)PSend11212);
    Constant string_11209_Const = new_Constant((Optr)string_11209);
    // ,. 
    Send PSend11214 = new_Send((Optr)string_11209_Const, SMB__append_, 1, (Optr)PSend11213);
    // nextPutAll:. 
    Send PSend11215 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11214);
    // cr. 
    Send PSend11216 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11217 = new_String(L"OutBuffer data size: ");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11218 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // asString. 
    Send PSend11219 = new_Send((Optr)PSend11218, SMB_asString, 0);
    Constant string_11217_Const = new_Constant((Optr)string_11217);
    // ,. 
    Send PSend11220 = new_Send((Optr)string_11217_Const, SMB__append_, 1, (Optr)PSend11219);
    // nextPutAll:. 
    Send PSend11221 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11220);
    // cr. 
    Send PSend11222 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11223 = new_String(L"Out data (20):");
    // -. 
    Send PSend11224 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11225 = new_Send((Optr)PSend11224, SMB_min_, 1, (Optr)int_20_Const);
    // copyFrom:to:. 
    Send PSend11226 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend11225);
    Constant string_11223_Const = new_Constant((Optr)string_11223);
    // ,. 
    Send PSend11227 = new_Send((Optr)string_11223_Const, SMB__append_, 1, (Optr)PSend11226);
    // nextPutAll:. 
    Send PSend11228 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11227);
    // cr. 
    Send PSend11229 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11197 = instantiate_Array_with(ThreadedCode_Class, 0, 120, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11198, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11199, (Optr)&t_send0, (Optr)PSend11200, (Optr)&t_send1, (Optr)PSend11201, (Optr)&t_send1, (Optr)PSend11202, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11203, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11204, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send0, (Optr)PSend11205, (Optr)&t_send1, (Optr)PSend11206, (Optr)&t_send1, (Optr)PSend11207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11209, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11210, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11211, (Optr)&t_send1, (Optr)PSend11212, (Optr)&t_send2, (Optr)PSend11213, (Optr)&t_send1, (Optr)PSend11214, (Optr)&t_send1, (Optr)PSend11215, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11216, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11217, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11218, (Optr)&t_send0, (Optr)PSend11219, (Optr)&t_send1, (Optr)PSend11220, (Optr)&t_send1, (Optr)PSend11221, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11223, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11224, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11225, (Optr)&t_send2, (Optr)PSend11226, (Optr)&t_send1, (Optr)PSend11227, (Optr)&t_send1, (Optr)PSend11228, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11229, (Optr)&t_method_return);
    Block PBlock11195 = new_Block_with(PArray11196, empty_Array, PThreadedCode11197, 10, PSend11202, PSend11203, PSend11207, PSend11208, PSend11215, PSend11216, PSend11221, PSend11222, PSend11228, PSend11229);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11230 = new_Send((Optr)PBlock11195, SMB_value_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11194 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11195, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11230, (Optr)&t_method_return);
    Block PBlock11192 = new_Block_with(PArray11193, empty_Array, PThreadedCode11194, 1, PSend11230);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend11231 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock11192);
    Array PThreadedCode11189 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11190, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11191, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock11192, (Optr)&t_send1, (Optr)PSend11231, (Optr)&t_method_return);
    Method PMethod11187 = new_Method_with(empty_Array, PArray11188, empty_Array, PThreadedCode11189, 2, PAssign11190, PSend11231);
    
    MethodClosure MC_SMB_debug = new_MethodClosure((Method)PMethod11187, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_debug, MC_SMB_debug);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray11233 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_3 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_4 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11234 = new_Array_with(4, (Optr)VAR_index_0_1, (Optr)VAR_result_0_2, (Optr)VAR_lastRecentlyRead_0_3, (Optr)VAR_searchedSoFar_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11237 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11239 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)int_0_Const);
    Assign PAssign11240 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)int_0_Const);
    Assign PAssign11241 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11244 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11245 = new_Send((Optr)PSend11244, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11248 = new_Send((Optr)VAR_lastRecentlyRead_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11251 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11252 = new_Send((Optr)PSend11251, SMB_not, 0);
    Array PThreadedCode11250 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11251, (Optr)&t_send0, (Optr)PSend11252, (Optr)&t_block_return);
    Block PBlock11249 = new_Block_with(empty_Array, empty_Array, PThreadedCode11250, 1, PSend11252);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11253 = new_Send((Optr)PSend11248, SMB_and_, 1, (Optr)PBlock11249);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11256 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11257 = new_Send((Optr)PSend11256, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11255 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11256, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11257, (Optr)&t_block_return);
    Block PBlock11254 = new_Block_with(empty_Array, empty_Array, PThreadedCode11255, 1, PSend11257);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11258 = new_Send((Optr)PSend11253, SMB_or_, 1, (Optr)PBlock11254);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11265 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11264 = new_Send((Optr)PSend11265, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOf:startingAt:. 
    Send PSend11263 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOf_startingAt_, 2, (Optr)VAR_aCharacterOrByte_0_0, (Optr)PSend11264);
    Assign PAssign11262 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11263);
    // inBufferSize. 
    Send PSend11267 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11266 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)PSend11267);
    // >. 
    Send PSend11268 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11271 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // >. 
    Send PSend11272 = new_Send((Optr)PSend11271, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11270 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11271, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11272, (Optr)&t_block_return);
    Block PBlock11269 = new_Block_with(empty_Array, empty_Array, PThreadedCode11270, 1, PSend11272);
    // and:. 
    Send PSend11273 = new_Send((Optr)PSend11268, SMB_and_, 1, (Optr)PBlock11269);
    Assign PAssign11277 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11276 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11277, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11275 = new_Block_with(empty_Array, empty_Array, PThreadedCode11276, 1, PAssign11277);
    // ifTrue:. 
    Send PSend11274 = new_Send((Optr)PSend11273, SMB_ifTrue_, 1, (Optr)PBlock11275);
    Array PThreadedCode11261 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11262, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_4, (Optr)&t_send1, (Optr)PSend11265, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11264, (Optr)&t_send2, (Optr)PSend11263, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11266, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11268, (Optr)&t_push_closure, (Optr)PBlock11269, (Optr)&t_send1, (Optr)PSend11273, (Optr)&t_send_ifTrue_, (Optr)PSend11274, (Optr)PBlock11275, (Optr)&t_block_return);
    Block PBlock11260 = new_Block_with(empty_Array, empty_Array, PThreadedCode11261, 3, PAssign11262, PAssign11266, PSend11274);
    // ifTrue:. 
    Send PSend11259 = new_Send((Optr)PSend11258, SMB_ifTrue_, 1, (Optr)PBlock11260);
    // =. 
    Send PSend11278 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11247 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11248, (Optr)&t_push_closure, (Optr)PBlock11249, (Optr)&t_send1, (Optr)PSend11253, (Optr)&t_push_closure, (Optr)PBlock11254, (Optr)&t_send1, (Optr)PSend11258, (Optr)&t_send_ifTrue_, (Optr)PSend11259, (Optr)PBlock11260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11278, (Optr)&t_block_return);
    Block PBlock11246 = new_Block_with(empty_Array, empty_Array, PThreadedCode11247, 2, PSend11259, PSend11278);
    // and:. 
    Send PSend11279 = new_Send((Optr)PSend11245, SMB_and_, 1, (Optr)PBlock11246);
    Array PThreadedCode11243 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11244, (Optr)&t_send0, (Optr)PSend11245, (Optr)&t_push_closure, (Optr)PBlock11246, (Optr)&t_send1, (Optr)PSend11279, (Optr)&t_block_return);
    Block PBlock11242 = new_Block_with(empty_Array, empty_Array, PThreadedCode11243, 1, PSend11279);
    String string_11282 = new_String(L"Buffer: ");
    Constant string_11282_Const = new_Constant((Optr)string_11282);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11283 = new_Send((Optr)string_11282_Const, SMB__append_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend11284 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11283);
    // =. 
    Send PSend11285 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11289 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11288 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11289, (Optr)&t_block_return);
    Block PBlock11287 = new_Block_with(empty_Array, empty_Array, PThreadedCode11288, 1, PSend11289);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11292 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11291 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11292, (Optr)&t_block_return);
    Block PBlock11290 = new_Block_with(empty_Array, empty_Array, PThreadedCode11291, 1, PSend11292);
    // ifTrue:ifFalse:. 
    Send PSend11286 = new_Send((Optr)PSend11285, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11287, (Optr)PBlock11290);
    Assign PAssign11293 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11281 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11282, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend11283, (Optr)&t_send1, (Optr)PSend11284, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11285, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11286, (Optr)PBlock11287, (Optr)PBlock11290, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11293, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11280 = new_Block_with(empty_Array, empty_Array, PThreadedCode11281, 3, PSend11284, PSend11286, PAssign11293);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11294 = new_Send((Optr)PBlock11242, SMB_whileTrue_, 1, (Optr)PBlock11280);
    // >. 
    Send PSend11295 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11302 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11301 = new_Send((Optr)PSend11302, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11300 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11301);
    Assign PAssign11299 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend11300);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11303 = new_Send((Optr)self, SMB_skip_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11304 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode11298 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11299, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11302, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11301, (Optr)&t_send1, (Optr)PSend11300, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend11304, (Optr)&t_block_return);
    Block PBlock11297 = new_Block_with(empty_Array, empty_Array, PThreadedCode11298, 3, PAssign11299, PSend11303, PSend11304);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11307 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11308 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11307);
    Array PThreadedCode11306 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11307, (Optr)&t_send1, (Optr)PSend11308, (Optr)&t_block_return);
    Block PBlock11305 = new_Block_with(empty_Array, empty_Array, PThreadedCode11306, 1, PSend11308);
    // ifTrue:ifFalse:. 
    Send PSend11296 = new_Send((Optr)PSend11295, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11297, (Optr)PBlock11305);
    Array PThreadedCode11238 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11239, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11240, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11241, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11242, (Optr)&t_push_closure, (Optr)PBlock11280, (Optr)&t_send1, (Optr)PSend11294, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11295, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11296, (Optr)PBlock11297, (Optr)PBlock11305, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11236 = new_Block_with(PArray11237, empty_Array, PThreadedCode11238, 6, PAssign11239, PAssign11240, PAssign11241, PSend11294, PSend11296, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11309 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11236);
    Array PThreadedCode11235 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11236, (Optr)&t_send1, (Optr)PSend11309, (Optr)&t_method_return);
    Method PMethod11232 = new_Method_with(PArray11233, PArray11234, empty_Array, PThreadedCode11235, 1, PSend11309);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod11232, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11316 = new_Send((Optr)self, SMB_atEnd, 0);
    Array PThreadedCode11315 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11316, (Optr)&t_block_return);
    Block PBlock11314 = new_Block_with(empty_Array, empty_Array, PThreadedCode11315, 1, PSend11316);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11319 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11318 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11319, (Optr)&t_block_return);
    Block PBlock11317 = new_Block_with(empty_Array, empty_Array, PThreadedCode11318, 1, PSend11319);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend11320 = new_Send((Optr)PBlock11314, SMB_whileFalse_, 1, (Optr)PBlock11317);
    Array PThreadedCode11313 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11314, (Optr)&t_push_closure, (Optr)PBlock11317, (Optr)&t_send1, (Optr)PSend11320, (Optr)&t_block_return);
    Block PBlock11312 = new_Block_with(empty_Array, empty_Array, PThreadedCode11313, 1, PSend11320);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11322 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode11323 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock11321 = new_Block_with(PArray11322, empty_Array, PThreadedCode11323, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11324 = new_Send((Optr)PBlock11312, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock11321);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11325 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode11311 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock11312, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock11321, (Optr)&t_send2, (Optr)PSend11324, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11325, (Optr)&t_method_return);
    Method PMethod11310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11311, 2, PSend11324, PSend11325);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod11310, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_recentlyRead() {
    Symbol SMB_recentlyRead = new_Symbol(L"recentlyRead");
    Array PThreadedCode11327 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_method_return);
    Method PMethod11326 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11327, 1, slot_IO_SocketStream_recentlyRead);
    
    MethodClosure MC_SMB_recentlyRead = new_MethodClosure((Method)PMethod11326, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_recentlyRead, MC_SMB_recentlyRead);
}


static void init_class_SMB_openConnectionToHostNamed_port_() {
    Symbol SMB_openConnectionToHostNamed_port_ = new_Symbol(L"openConnectionToHostNamed:port:");
    Variable VAR_hostName_0_0 = new_Variable_named(L"hostName", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11329 = new_Array_with(2, (Optr)VAR_hostName_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_hostIP_0_2 = new_Variable_named(L"hostIP", 0);
    Array PArray11330 = new_Array_with(1, (Optr)VAR_hostIP_0_2);
    Symbol SMB_addressForName_timeout_ = new_Symbol(L"addressForName:timeout:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // addressForName:timeout:. 
    Send PSend11333 = new_Send((Optr)NetNameResolver_classReference, SMB_addressForName_timeout_, 2, (Optr)VAR_hostName_0_0, (Optr)int_20_Const);
    Assign PAssign11332 = new_Assign((Optr)VAR_hostIP_0_2, (Optr)PSend11333);
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    // openConnectionToHost:port:. 
    Send PSend11334 = new_Send((Optr)self, SMB_openConnectionToHost_port_, 2, (Optr)VAR_hostIP_0_2, (Optr)VAR_portNumber_0_1);
    Array PThreadedCode11331 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign11332, (Optr)&t_push_class_reference, (Optr)NetNameResolver_classReference, (Optr)&t_push_variable, (Optr)VAR_hostName_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send2, (Optr)PSend11333, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_2, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11334, (Optr)&t_method_return);
    Method PMethod11328 = new_Method_with(PArray11329, PArray11330, empty_Array, PThreadedCode11331, 2, PAssign11332, PSend11334);
    
    MethodClosure MC_SMB_openConnectionToHostNamed_port_ = new_MethodClosure((Method)PMethod11328, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHostNamed_port_, MC_SMB_openConnectionToHostNamed_port_);
}


static void init_class_SMB_openConnectionToHost_port_() {
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    Variable VAR_hostIP_0_0 = new_Variable_named(L"hostIP", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11336 = new_Array_with(2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_socket_0_2 = new_Variable_named(L"socket", 0);
    Array PArray11337 = new_Array_with(1, (Optr)VAR_socket_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11340 = new_Send((Optr)PSocket_classReference, SMB_new, 0);
    Assign PAssign11339 = new_Assign((Optr)VAR_socket_0_2, (Optr)PSend11340);
    Symbol SMB_connectTo_port_ = new_Symbol(L"connectTo:port:");
    // connectTo:port:. 
    Send PSend11341 = new_Send((Optr)VAR_socket_0_2, SMB_connectTo_port_, 2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11342 = new_Send((Optr)self, SMB_on_, 1, (Optr)VAR_socket_0_2);
    Array PThreadedCode11338 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign11339, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_0, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11341, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_send1, (Optr)PSend11342, (Optr)&t_method_return);
    Method PMethod11335 = new_Method_with(PArray11336, PArray11337, empty_Array, PThreadedCode11338, 3, PAssign11339, PSend11341, PSend11342);
    
    MethodClosure MC_SMB_openConnectionToHost_port_ = new_MethodClosure((Method)PMethod11335, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHost_port_, MC_SMB_openConnectionToHost_port_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode11344 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod11343 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11344, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod11343, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_socket_0_0 = new_Variable_named(L"socket", 0);
    Array PArray11346 = new_Array_with(1, (Optr)VAR_socket_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11348 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    // socket:. 
    Send PSend11349 = new_Send((Optr)PSend11348, SMB_socket_, 1, (Optr)VAR_socket_0_0);
    Array PThreadedCode11347 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11348, (Optr)&t_push_variable, (Optr)VAR_socket_0_0, (Optr)&t_send1, (Optr)PSend11349, (Optr)&t_method_return);
    Method PMethod11345 = new_Method_with(PArray11346, empty_Array, empty_Array, PThreadedCode11347, 1, PSend11349);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod11345, HEADER(IO_SocketStream_Class));
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