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
    Array PArray10392 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10394 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10393 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10394, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10391 = new_Method_with(PArray10392, empty_Array, empty_Array, PThreadedCode10393, 2, PAssign10394, self);
    
    MethodClosure MC_SMB_shouldSignal_ = new_MethodClosure((Method)PMethod10391, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal_, MC_SMB_shouldSignal_);
}


static void init_SMB_binary() {
    Symbol SMB_binary = new_Symbol(L"binary");
    Assign PAssign10397 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)true_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10398 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10396 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10397, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10398, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10396, 3, PAssign10397, PSend10398, self);
    
    MethodClosure MC_SMB_binary = new_MethodClosure((Method)PMethod10395, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_binary, MC_SMB_binary);
}


static void init_SMB_nextLine() {
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    // nextLineCrLf. 
    Send PSend10401 = new_Send((Optr)self, SMB_nextLineCrLf, 0);
    Array PThreadedCode10400 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10401, (Optr)&t_method_return);
    Method PMethod10399 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10400, 1, PSend10401);
    
    MethodClosure MC_SMB_nextLine = new_MethodClosure((Method)PMethod10399, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLine, MC_SMB_nextLine);
}


static void init_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10404 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10405 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10404);
    Array PThreadedCode10403 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10404, (Optr)&t_send1, (Optr)PSend10405, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10403, 2, PSend10405, self);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod10402, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_crlf, MC_SMB_crlf);
}


static void init_SMB_noTimeout() {
    Symbol SMB_noTimeout = new_Symbol(L"noTimeout");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10408 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)int_0_Const);
    Array PThreadedCode10407 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign10408, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10406 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10407, 2, PAssign10408, self);
    
    MethodClosure MC_SMB_noTimeout = new_MethodClosure((Method)PMethod10406, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_noTimeout, MC_SMB_noTimeout);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    String string_10411 = new_String(L"SocketStream>>receiveData");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10411_Const = new_Constant((Optr)string_10411);
    // warn:. 
    Send PSend10412 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10411_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_10417 = new_String(L"SocketStream>>receiveData: should signal");
    Constant string_10417_Const = new_Constant((Optr)string_10417);
    // warn:. 
    Send PSend10418 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10417_Const);
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    // shouldTimeout. 
    Send PSend10419 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10423 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10423_Const = new_Constant((Optr)string_10423);
    // warn:. 
    Send PSend10424 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10423_Const);
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    // receiveDataSignallingTimeout:into:startingAt:. 
    Send PSend10425 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10422 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10423, (Optr)&t_send1, (Optr)PSend10424, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10425, (Optr)&t_block_return);
    Block PBlock10421 = new_Block_with(empty_Array, empty_Array, PThreadedCode10422, 2, PSend10424, PSend10425);
    String string_10428 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10428_Const = new_Constant((Optr)string_10428);
    // warn:. 
    Send PSend10429 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10428_Const);
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    // receiveDataSignallingClosedInto:startingAt:. 
    Send PSend10430 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingClosedInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10427 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10428, (Optr)&t_send1, (Optr)PSend10429, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10430, (Optr)&t_block_return);
    Block PBlock10426 = new_Block_with(empty_Array, empty_Array, PThreadedCode10427, 2, PSend10429, PSend10430);
    // ifTrue:ifFalse:. 
    Send PSend10420 = new_Send((Optr)PSend10419, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10421, (Optr)PBlock10426);
    Array PThreadedCode10416 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10417, (Optr)&t_send1, (Optr)PSend10418, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10419, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10420, (Optr)PBlock10421, (Optr)PBlock10426, (Optr)&t_block_return);
    Block PBlock10415 = new_Block_with(empty_Array, empty_Array, PThreadedCode10416, 2, PSend10418, PSend10420);
    String string_10433 = new_String(L"SocketStream>>receiveData: should NOT signal");
    Constant string_10433_Const = new_Constant((Optr)string_10433);
    // warn:. 
    Send PSend10434 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10433_Const);
    // shouldTimeout. 
    Send PSend10435 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10439 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10439_Const = new_Constant((Optr)string_10439);
    // warn:. 
    Send PSend10440 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10439_Const);
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    // receiveDataTimeout:into:startingAt:. 
    Send PSend10441 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10438 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10439, (Optr)&t_send1, (Optr)PSend10440, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10441, (Optr)&t_block_return);
    Block PBlock10437 = new_Block_with(empty_Array, empty_Array, PThreadedCode10438, 2, PSend10440, PSend10441);
    String string_10444 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10444_Const = new_Constant((Optr)string_10444);
    // warn:. 
    Send PSend10445 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10444_Const);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10446 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10443 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10444, (Optr)&t_send1, (Optr)PSend10445, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10446, (Optr)&t_block_return);
    Block PBlock10442 = new_Block_with(empty_Array, empty_Array, PThreadedCode10443, 2, PSend10445, PSend10446);
    // ifTrue:ifFalse:. 
    Send PSend10436 = new_Send((Optr)PSend10435, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10437, (Optr)PBlock10442);
    Array PThreadedCode10432 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10433, (Optr)&t_send1, (Optr)PSend10434, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10435, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10436, (Optr)PBlock10437, (Optr)PBlock10442, (Optr)&t_block_return);
    Block PBlock10431 = new_Block_with(empty_Array, empty_Array, PThreadedCode10432, 2, PSend10434, PSend10436);
    // ifTrue:ifFalse:. 
    Send PSend10414 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10415, (Optr)PBlock10431);
    Assign PAssign10413 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10414);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10447 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10410 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10411, (Optr)&t_send1, (Optr)PSend10412, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10413, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10414, (Optr)PBlock10415, (Optr)PBlock10431, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10447, (Optr)&t_method_return);
    Method PMethod10409 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10410, 3, PSend10412, PAssign10413, PSend10447);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod10409, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_isBinary() {
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    Array PThreadedCode10449 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_method_return);
    Method PMethod10448 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10449, 1, slot_IO_SocketStream_binary);
    
    MethodClosure MC_SMB_isBinary = new_MethodClosure((Method)PMethod10448, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isBinary, MC_SMB_isBinary);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper10452 = new_Super(SMB_initialize, 0);
    Assign PAssign10453 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)true_Const);
    Assign PAssign10454 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)true_Const);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10455 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)int_0_Const);
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    Assign PAssign10456 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)int_4096_Const);
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend10457 = new_Send((Optr)self, SMB_ascii, 0);
    Array PThreadedCode10451 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper10452, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10453, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10454, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10455, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10456, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10457, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10450 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10451, 7, PSuper10452, PAssign10453, PAssign10454, PAssign10455, PAssign10456, PSend10457, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10450, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_peekFor_() {
    Symbol SMB_peekFor_ = new_Symbol(L"peekFor:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray10459 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_nextObject_0_1 = new_Variable_named(L"nextObject", 0);
    Array PArray10460 = new_Array_with(1, (Optr)VAR_nextObject_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10463 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10465 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10469 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10468 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10469, (Optr)&t_block_return);
    Block PBlock10467 = new_Block_with(empty_Array, empty_Array, PThreadedCode10468, 1, PSend10469);
    // ifTrue:. 
    Send PSend10466 = new_Send((Optr)PSend10465, SMB_ifTrue_, 1, (Optr)PBlock10467);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10470 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10474 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10475 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10479 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10478 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10479, (Optr)&t_block_return);
    Block PBlock10477 = new_Block_with(empty_Array, empty_Array, PThreadedCode10478, 1, PSend10479);
    // ifTrue:. 
    Send PSend10476 = new_Send((Optr)PSend10475, SMB_ifTrue_, 1, (Optr)PBlock10477);
    Array PThreadedCode10473 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10474, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10475, (Optr)&t_send_ifTrue_, (Optr)PSend10476, (Optr)PBlock10477, (Optr)&t_block_return);
    Block PBlock10472 = new_Block_with(empty_Array, empty_Array, PThreadedCode10473, 2, PSend10474, PSend10476);
    // ifTrue:. 
    Send PSend10471 = new_Send((Optr)PSend10470, SMB_ifTrue_, 1, (Optr)PBlock10472);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10481 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Assign PAssign10480 = new_Assign((Optr)VAR_nextObject_0_1, (Optr)PSend10481);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10482 = new_Send((Optr)VAR_nextObject_0_1, SMB__equals_, 1, (Optr)VAR_aCharacterOrByte_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10487 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10486 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10487);
    // escape:. 
    Send PSend10488 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10485 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10486, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10487, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10488, (Optr)&t_block_return);
    Block PBlock10484 = new_Block_with(empty_Array, empty_Array, PThreadedCode10485, 2, PAssign10486, PSend10488);
    // ifTrue:. 
    Send PSend10483 = new_Send((Optr)PSend10482, SMB_ifTrue_, 1, (Optr)PBlock10484);
    Array PThreadedCode10464 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10465, (Optr)&t_send_ifTrue_, (Optr)PSend10466, (Optr)PBlock10467, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10470, (Optr)&t_send_ifTrue_, (Optr)PSend10471, (Optr)PBlock10472, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10480, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10481, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_send1, (Optr)PSend10482, (Optr)&t_send_ifTrue_, (Optr)PSend10483, (Optr)PBlock10484, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock10462 = new_Block_with(PArray10463, empty_Array, PThreadedCode10464, 5, PSend10466, PSend10471, PAssign10480, PSend10483, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10489 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10462);
    Array PThreadedCode10461 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10462, (Optr)&t_send1, (Optr)PSend10489, (Optr)&t_method_return);
    Method PMethod10458 = new_Method_with(PArray10459, PArray10460, empty_Array, PThreadedCode10461, 1, PSend10489);
    
    MethodClosure MC_SMB_peekFor_ = new_MethodClosure((Method)PMethod10458, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekFor_, MC_SMB_peekFor_);
}


static void init_SMB_peekForAll_() {
    Symbol SMB_peekForAll_ = new_Symbol(L"peekForAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10491 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_sz_0_1 = new_Variable_named(L"sz", 0);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray10492 = new_Array_with(2, (Optr)VAR_sz_0_1, (Optr)VAR_start_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10495 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10498 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Assign PAssign10497 = new_Assign((Optr)VAR_sz_0_1, (Optr)PSend10498);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10499 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10500 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10501 = new_Send((Optr)PSend10500, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend10502 = new_Send((Optr)PSend10501, SMB__lt_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10506 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10505 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10506, (Optr)&t_block_return);
    Block PBlock10504 = new_Block_with(empty_Array, empty_Array, PThreadedCode10505, 1, PSend10506);
    // ifTrue:. 
    Send PSend10503 = new_Send((Optr)PSend10502, SMB_ifTrue_, 1, (Optr)PBlock10504);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10508 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10507 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend10508);
    Symbol SMB_findString_startingAt_ = new_Symbol(L"findString:startingAt:");
    // findString:startingAt:. 
    Send PSend10509 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_findString_startingAt_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_start_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10510 = new_Send((Optr)PSend10509, SMB__equals_, 1, (Optr)VAR_start_0_2);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend10514 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10513 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10514, (Optr)&t_block_return);
    Block PBlock10512 = new_Block_with(empty_Array, empty_Array, PThreadedCode10513, 1, PSend10514);
    // ifFalse:. 
    Send PSend10511 = new_Send((Optr)PSend10510, SMB_ifFalse_, 1, (Optr)PBlock10512);
    // +. 
    Send PSend10516 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_sz_0_1);
    Assign PAssign10515 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10516);
    Array PThreadedCode10496 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign10497, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend10498, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10499, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10500, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10501, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10502, (Optr)&t_send_ifTrue_, (Optr)PSend10503, (Optr)PBlock10504, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10507, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10508, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send2, (Optr)PSend10509, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send1, (Optr)PSend10510, (Optr)&t_send_ifFalse_, (Optr)PSend10511, (Optr)PBlock10512, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10515, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10516, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock10494 = new_Block_with(PArray10495, empty_Array, PThreadedCode10496, 7, PAssign10497, PSend10499, PSend10503, PAssign10507, PSend10511, PAssign10515, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10517 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10494);
    Array PThreadedCode10493 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10494, (Optr)&t_send1, (Optr)PSend10517, (Optr)&t_method_return);
    Method PMethod10490 = new_Method_with(PArray10491, PArray10492, empty_Array, PThreadedCode10493, 1, PSend10517);
    
    MethodClosure MC_SMB_peekForAll_ = new_MethodClosure((Method)PMethod10490, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekForAll_, MC_SMB_peekForAll_);
}


static void init_SMB_receiveAvailableData() {
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10521 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10520 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10521);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10522 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10519 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10520, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10521, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10522, (Optr)&t_method_return);
    Method PMethod10518 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10519, 2, PAssign10520, PSend10522);
    
    MethodClosure MC_SMB_receiveAvailableData = new_MethodClosure((Method)PMethod10518, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveAvailableData, MC_SMB_receiveAvailableData);
}


static void init_SMB_autoFlush_() {
    Symbol SMB_autoFlush_ = new_Symbol(L"autoFlush:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10524 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10526 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10525 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10526, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10523 = new_Method_with(PArray10524, empty_Array, empty_Array, PThreadedCode10525, 2, PAssign10526, self);
    
    MethodClosure MC_SMB_autoFlush_ = new_MethodClosure((Method)PMethod10523, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush_, MC_SMB_autoFlush_);
}


static void init_SMB_nextLineCrLf() {
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10529 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend10530 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend10529);
    Array PThreadedCode10528 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10529, (Optr)&t_send1, (Optr)PSend10530, (Optr)&t_method_return);
    Method PMethod10527 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10528, 1, PSend10530);
    
    MethodClosure MC_SMB_nextLineCrLf = new_MethodClosure((Method)PMethod10527, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineCrLf, MC_SMB_nextLineCrLf);
}


static void init_SMB_isStream() {
    Symbol SMB_isStream = new_Symbol(L"isStream");
    Array PThreadedCode10532 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod10531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10532, 1, true_Const);
    
    MethodClosure MC_SMB_isStream = new_MethodClosure((Method)PMethod10531, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isStream, MC_SMB_isStream);
}


static void init_SMB_receiveData_() {
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    Variable VAR_nBytes_0_0 = new_Variable_named(L"nBytes", 0);
    Array PArray10534 = new_Array_with(1, (Optr)VAR_nBytes_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10538 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10539 = new_Send((Optr)PSend10538, SMB_not, 0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10542 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10543 = new_Send((Optr)VAR_nBytes_0_0, SMB__gt_, 1, (Optr)PSend10542);
    Array PThreadedCode10541 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_nBytes_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10542, (Optr)&t_send1, (Optr)PSend10543, (Optr)&t_block_return);
    Block PBlock10540 = new_Block_with(empty_Array, empty_Array, PThreadedCode10541, 1, PSend10543);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10544 = new_Send((Optr)PSend10539, SMB_and_, 1, (Optr)PBlock10540);
    Array PThreadedCode10537 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10538, (Optr)&t_send0, (Optr)PSend10539, (Optr)&t_push_closure, (Optr)PBlock10540, (Optr)&t_send1, (Optr)PSend10544, (Optr)&t_block_return);
    Block PBlock10536 = new_Block_with(empty_Array, empty_Array, PThreadedCode10537, 1, PSend10544);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10547 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10546 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10547, (Optr)&t_block_return);
    Block PBlock10545 = new_Block_with(empty_Array, empty_Array, PThreadedCode10546, 1, PSend10547);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10548 = new_Send((Optr)PBlock10536, SMB_whileTrue_, 1, (Optr)PBlock10545);
    Array PThreadedCode10535 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock10536, (Optr)&t_push_closure, (Optr)PBlock10545, (Optr)&t_send1, (Optr)PSend10548, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10533 = new_Method_with(PArray10534, empty_Array, empty_Array, PThreadedCode10535, 2, PSend10548, self);
    
    MethodClosure MC_SMB_receiveData_ = new_MethodClosure((Method)PMethod10533, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData_, MC_SMB_receiveData_);
}


static void init_SMB_streamBuffer_() {
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray10550 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend10552 = new_Send((Optr)self, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode10555 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ByteArray_classReference, (Optr)&t_block_return);
    Block PBlock10554 = new_Block_with(empty_Array, empty_Array, PThreadedCode10555, 1, ByteArray_classReference);
    Array PThreadedCode10557 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_block_return);
    Block PBlock10556 = new_Block_with(empty_Array, empty_Array, PThreadedCode10557, 1, String_classReference);
    // ifTrue:ifFalse:. 
    Send PSend10553 = new_Send((Optr)PSend10552, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10554, (Optr)PBlock10556);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend10558 = new_Send((Optr)PSend10553, SMB_new_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode10551 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10552, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10553, (Optr)PBlock10554, (Optr)PBlock10556, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend10558, (Optr)&t_method_return);
    Method PMethod10549 = new_Method_with(PArray10550, empty_Array, empty_Array, PThreadedCode10551, 1, PSend10558);
    
    MethodClosure MC_SMB_streamBuffer_ = new_MethodClosure((Method)PMethod10549, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_streamBuffer_, MC_SMB_streamBuffer_);
}


static void init_SMB_socket_() {
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray10560 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Assign PAssign10562 = new_Assign((Optr)slot_IO_SocketStream_socket, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode10561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10562, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10559 = new_Method_with(PArray10560, empty_Array, empty_Array, PThreadedCode10561, 2, PAssign10562, self);
    
    MethodClosure MC_SMB_socket_ = new_MethodClosure((Method)PMethod10559, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket_, MC_SMB_socket_);
}


static void init_SMB_ascii() {
    Symbol SMB_ascii = new_Symbol(L"ascii");
    Assign PAssign10565 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)false_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10566 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10564 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10565, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10566, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10563 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10564, 3, PAssign10565, PSend10566, self);
    
    MethodClosure MC_SMB_ascii = new_MethodClosure((Method)PMethod10563, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ascii, MC_SMB_ascii);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray10568 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Assign PAssign10570 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)VAR_seconds_0_0);
    Array PThreadedCode10569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10570, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10567 = new_Method_with(PArray10568, empty_Array, empty_Array, PThreadedCode10569, 2, PAssign10570, self);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod10567, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_shouldTimeout() {
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend10573 = new_Send((Optr)self, SMB_timeout, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10574 = new_Send((Optr)PSend10573, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode10572 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10573, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10574, (Optr)&t_method_return);
    Method PMethod10571 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10572, 1, PSend10574);
    
    MethodClosure MC_SMB_shouldTimeout = new_MethodClosure((Method)PMethod10571, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldTimeout, MC_SMB_shouldTimeout);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10578 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10580 = new_String(L"SocketStream>>peek");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10580_Const = new_Constant((Optr)string_10580);
    // warn:. 
    Send PSend10581 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10580_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10582 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10586 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10585 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10586, (Optr)&t_block_return);
    Block PBlock10584 = new_Block_with(empty_Array, empty_Array, PThreadedCode10585, 1, PSend10586);
    // ifTrue:. 
    Send PSend10583 = new_Send((Optr)PSend10582, SMB_ifTrue_, 1, (Optr)PBlock10584);
    String string_10587 = new_String(L"SocketStream>>peek: not at end");
    Constant string_10587_Const = new_Constant((Optr)string_10587);
    // warn:. 
    Send PSend10588 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10587_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10589 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    String string_10593 = new_String(L"SocketStream>>peek: in buffer is empty");
    Constant string_10593_Const = new_Constant((Optr)string_10593);
    // warn:. 
    Send PSend10594 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10593_Const);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10595 = new_Send((Optr)self, SMB_receiveData, 0);
    String string_10596 = new_String(L"SocketStream>>peek: recevied data");
    Constant string_10596_Const = new_Constant((Optr)string_10596);
    // warn:. 
    Send PSend10597 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10596_Const);
    // atEnd. 
    Send PSend10598 = new_Send((Optr)self, SMB_atEnd, 0);
    String string_10602 = new_String(L"SocketStream>>peek: at end");
    Constant string_10602_Const = new_Constant((Optr)string_10602);
    // warn:. 
    Send PSend10603 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10602_Const);
    // escape:. 
    Send PSend10604 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10601 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10602, (Optr)&t_send1, (Optr)PSend10603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10604, (Optr)&t_block_return);
    Block PBlock10600 = new_Block_with(empty_Array, empty_Array, PThreadedCode10601, 2, PSend10603, PSend10604);
    // ifTrue:. 
    Send PSend10599 = new_Send((Optr)PSend10598, SMB_ifTrue_, 1, (Optr)PBlock10600);
    Array PThreadedCode10592 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10593, (Optr)&t_send1, (Optr)PSend10594, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10595, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10596, (Optr)&t_send1, (Optr)PSend10597, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10598, (Optr)&t_send_ifTrue_, (Optr)PSend10599, (Optr)PBlock10600, (Optr)&t_block_return);
    Block PBlock10591 = new_Block_with(empty_Array, empty_Array, PThreadedCode10592, 4, PSend10594, PSend10595, PSend10597, PSend10599);
    // ifTrue:. 
    Send PSend10590 = new_Send((Optr)PSend10589, SMB_ifTrue_, 1, (Optr)PBlock10591);
    String string_10605 = new_String(L"SocketStream>>peek: return...");
    Constant string_10605_Const = new_Constant((Optr)string_10605);
    // warn:. 
    Send PSend10606 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10605_Const);
    String string_10607 = new_String(L"SocketStream>>peek: in buffer is");
    Constant string_10607_Const = new_Constant((Optr)string_10607);
    // warn:. 
    Send PSend10608 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10607_Const);
    // warn:. 
    Send PSend10609 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    String string_10610 = new_String(L"SocketStream>>peek: last read is");
    Constant string_10610_Const = new_Constant((Optr)string_10610);
    // warn:. 
    Send PSend10611 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10610_Const);
    // warn:. 
    Send PSend10612 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10613 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10614 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)PSend10613);
    Array PThreadedCode10579 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10580, (Optr)&t_send1, (Optr)PSend10581, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10582, (Optr)&t_send_ifTrue_, (Optr)PSend10583, (Optr)PBlock10584, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10587, (Optr)&t_send1, (Optr)PSend10588, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10589, (Optr)&t_send_ifTrue_, (Optr)PSend10590, (Optr)PBlock10591, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10605, (Optr)&t_send1, (Optr)PSend10606, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10607, (Optr)&t_send1, (Optr)PSend10608, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend10609, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10610, (Optr)&t_send1, (Optr)PSend10611, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10612, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10613, (Optr)&t_send1, (Optr)PSend10614, (Optr)&t_method_return);
    Block PBlock10577 = new_Block_with(PArray10578, empty_Array, PThreadedCode10579, 10, PSend10581, PSend10583, PSend10588, PSend10590, PSend10606, PSend10608, PSend10609, PSend10611, PSend10612, PSend10614);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10615 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10577);
    Array PThreadedCode10576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10577, (Optr)&t_send1, (Optr)PSend10615, (Optr)&t_method_return);
    Method PMethod10575 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10576, 1, PSend10615);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod10575, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_shouldSignal() {
    Symbol SMB_shouldSignal = new_Symbol(L"shouldSignal");
    Array PThreadedCode10617 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_method_return);
    Method PMethod10616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10617, 1, slot_IO_SocketStream_shouldSignal);
    
    MethodClosure MC_SMB_shouldSignal = new_MethodClosure((Method)PMethod10616, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal, MC_SMB_shouldSignal);
}


static void init_SMB_bufferSize() {
    Symbol SMB_bufferSize = new_Symbol(L"bufferSize");
    Array PThreadedCode10619 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_method_return);
    Method PMethod10618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10619, 1, slot_IO_SocketStream_bufferSize);
    
    MethodClosure MC_SMB_bufferSize = new_MethodClosure((Method)PMethod10618, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize, MC_SMB_bufferSize);
}


static void init_SMB_nextPutAllFlush_() {
    Symbol SMB_nextPutAllFlush_ = new_Symbol(L"nextPutAllFlush:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10621 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10622 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10628 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10627 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10628, (Optr)&t_block_return);
    Block PBlock10626 = new_Block_with(empty_Array, empty_Array, PThreadedCode10627, 1, PSend10628);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10631 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10630 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10631, (Optr)&t_block_return);
    Block PBlock10629 = new_Block_with(empty_Array, empty_Array, PThreadedCode10630, 1, PSend10631);
    // ifTrue:ifFalse:. 
    Send PSend10625 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10626, (Optr)PBlock10629);
    Assign PAssign10624 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10625);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10632 = new_Send((Optr)self, SMB_flush, 0);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend10633 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10639 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend10640 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)VAR_toPut_0_1, (Optr)PSend10639);
    Array PThreadedCode10638 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10639, (Optr)&t_send2, (Optr)PSend10640, (Optr)&t_block_return);
    Block PBlock10637 = new_Block_with(empty_Array, empty_Array, PThreadedCode10638, 1, PSend10640);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray10642 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode10646 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock10645 = new_Block_with(empty_Array, empty_Array, PThreadedCode10646, 0);
    // ifFalse:. 
    Send PSend10644 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock10645);
    Array PThreadedCode10643 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend10644, (Optr)PBlock10645, (Optr)&t_method_return);
    Block PBlock10641 = new_Block_with(PArray10642, empty_Array, PThreadedCode10643, 1, PSend10644);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10647 = new_Send((Optr)PBlock10637, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock10641);
    Array PThreadedCode10636 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock10637, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock10641, (Optr)&t_send2, (Optr)PSend10647, (Optr)&t_block_return);
    Block PBlock10635 = new_Block_with(empty_Array, empty_Array, PThreadedCode10636, 1, PSend10647);
    // ifFalse:. 
    Send PSend10634 = new_Send((Optr)PSend10633, SMB_ifFalse_, 1, (Optr)PBlock10635);
    Array PThreadedCode10623 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign10624, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10625, (Optr)PBlock10626, (Optr)PBlock10629, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10632, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10633, (Optr)&t_send_ifFalse_, (Optr)PSend10634, (Optr)PBlock10635, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10620 = new_Method_with(PArray10621, PArray10622, empty_Array, PThreadedCode10623, 4, PAssign10624, PSend10632, PSend10634, self);
    
    MethodClosure MC_SMB_nextPutAllFlush_ = new_MethodClosure((Method)PMethod10620, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAllFlush_, MC_SMB_nextPutAllFlush_);
}


static void init_SMB_outBufferSize() {
    Symbol SMB_outBufferSize = new_Symbol(L"outBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10650 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10649 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10650, (Optr)&t_method_return);
    Method PMethod10648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10649, 1, PSend10650);
    
    MethodClosure MC_SMB_outBufferSize = new_MethodClosure((Method)PMethod10648, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_outBufferSize, MC_SMB_outBufferSize);
}


static void init_SMB_sendCommand_() {
    Symbol SMB_sendCommand_ = new_Symbol(L"sendCommand:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10652 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray10655 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10657 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10658 = new_Send((Optr)VAR_aString_0_0, SMB__append_, 1, (Optr)PSend10657);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10659 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)PSend10658);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10660 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Array PThreadedCode10656 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10657, (Optr)&t_send1, (Optr)PSend10658, (Optr)&t_send1, (Optr)PSend10659, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend10660, (Optr)&t_method_return);
    Block PBlock10654 = new_Block_with(PArray10655, empty_Array, PThreadedCode10656, 2, PSend10659, PSend10660);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10661 = new_Send((Optr)PBlock10654, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10653 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock10654, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10661, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10651 = new_Method_with(PArray10652, empty_Array, empty_Array, PThreadedCode10653, 2, PSend10661, self);
    
    MethodClosure MC_SMB_sendCommand_ = new_MethodClosure((Method)PMethod10651, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_sendCommand_, MC_SMB_sendCommand_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10664 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10667 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10668 = new_Send((Optr)PSend10667, SMB_not, 0);
    Array PThreadedCode10666 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10667, (Optr)&t_send0, (Optr)PSend10668, (Optr)&t_block_return);
    Block PBlock10665 = new_Block_with(empty_Array, empty_Array, PThreadedCode10666, 1, PSend10668);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10669 = new_Send((Optr)PSend10664, SMB_and_, 1, (Optr)PBlock10665);
    Array PThreadedCode10663 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10664, (Optr)&t_push_closure, (Optr)PBlock10665, (Optr)&t_send1, (Optr)PSend10669, (Optr)&t_method_return);
    Method PMethod10662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10663, 1, PSend10669);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod10662, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_checkFlush() {
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10674 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Array PThreadedCode10673 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend10674, (Optr)&t_block_return);
    Block PBlock10672 = new_Block_with(empty_Array, empty_Array, PThreadedCode10673, 1, PSend10674);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10675 = new_Send((Optr)slot_IO_SocketStream_autoFlush, SMB_and_, 1, (Optr)PBlock10672);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10679 = new_Send((Optr)self, SMB_flush, 0);
    Array PThreadedCode10678 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10679, (Optr)&t_block_return);
    Block PBlock10677 = new_Block_with(empty_Array, empty_Array, PThreadedCode10678, 1, PSend10679);
    // ifTrue:. 
    Send PSend10676 = new_Send((Optr)PSend10675, SMB_ifTrue_, 1, (Optr)PBlock10677);
    Array PThreadedCode10671 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_push_closure, (Optr)PBlock10672, (Optr)&t_send1, (Optr)PSend10675, (Optr)&t_send_ifTrue_, (Optr)PSend10676, (Optr)PBlock10677, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10670 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10671, 2, PSend10676, self);
    
    MethodClosure MC_SMB_checkFlush = new_MethodClosure((Method)PMethod10670, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_checkFlush, MC_SMB_checkFlush);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10681 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10682 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10684 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10686 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10685 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10686);
    // +. 
    Send PSend10689 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10690 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10688 = new_Send((Optr)PSend10689, SMB_min_, 1, (Optr)PSend10690);
    Assign PAssign10687 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10688);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10691 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10683 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10684, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10685, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10686, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10687, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10689, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10690, (Optr)&t_send1, (Optr)PSend10688, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend10691, (Optr)&t_method_return);
    Method PMethod10680 = new_Method_with(PArray10681, PArray10682, empty_Array, PThreadedCode10683, 4, PSend10684, PAssign10685, PAssign10687, PSend10691);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod10680, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_socket() {
    Symbol SMB_socket = new_Symbol(L"socket");
    Array PThreadedCode10693 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_method_return);
    Method PMethod10692 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10693, 1, slot_IO_SocketStream_socket);
    
    MethodClosure MC_SMB_socket = new_MethodClosure((Method)PMethod10692, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket, MC_SMB_socket);
}


static void init_SMB_adjustInBuffer_() {
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    Variable VAR_bytesRead_0_0 = new_Variable_named(L"bytesRead", 0);
    Array PArray10695 = new_Array_with(1, (Optr)VAR_bytesRead_0_0);
    Variable VAR_old_0_1 = new_Variable_named(L"old", 0);
    Array PArray10696 = new_Array_with(1, (Optr)VAR_old_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10699 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10701 = new_String(L"SocketStream>>adjustInBuffer:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10701_Const = new_Constant((Optr)string_10701);
    // warn:. 
    Send PSend10702 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10701_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10703 = new_Send((Optr)VAR_bytesRead_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10707 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10706 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10707, (Optr)&t_block_return);
    Block PBlock10705 = new_Block_with(empty_Array, empty_Array, PThreadedCode10706, 1, PSend10707);
    // ifTrue:. 
    Send PSend10704 = new_Send((Optr)PSend10703, SMB_ifTrue_, 1, (Optr)PBlock10705);
    Assign PAssign10708 = new_Assign((Optr)VAR_old_0_1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10710 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__plus_, 1, (Optr)VAR_bytesRead_0_0);
    Assign PAssign10709 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10710);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10711 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10712 = new_Send((Optr)PSend10711, SMB__minus_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10713 = new_Send((Optr)PSend10712, SMB__lt_, 1, (Optr)int_1024_Const);
    SmallInt int_512 = new_SmallInt(512);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_512_Const = new_Constant((Optr)int_512);
    // >. 
    Send PSend10717 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__gt_, 1, (Optr)int_512_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    // moveInBufferDown. 
    Send PSend10721 = new_Send((Optr)self, SMB_moveInBufferDown, 0);
    // -. 
    Send PSend10722 = new_Send((Optr)VAR_old_0_1, SMB__minus_, 1, (Optr)PSend10721);
    // escape:. 
    Send PSend10723 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10722);
    Array PThreadedCode10720 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10721, (Optr)&t_send1, (Optr)PSend10722, (Optr)&t_send1, (Optr)PSend10723, (Optr)&t_block_return);
    Block PBlock10719 = new_Block_with(empty_Array, empty_Array, PThreadedCode10720, 1, PSend10723);
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    // growInBuffer. 
    Send PSend10726 = new_Send((Optr)self, SMB_growInBuffer, 0);
    Array PThreadedCode10725 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10726, (Optr)&t_block_return);
    Block PBlock10724 = new_Block_with(empty_Array, empty_Array, PThreadedCode10725, 1, PSend10726);
    // ifTrue:ifFalse:. 
    Send PSend10718 = new_Send((Optr)PSend10717, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10719, (Optr)PBlock10724);
    Array PThreadedCode10716 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push1, (Optr)int_512, (Optr)&t_send1, (Optr)PSend10717, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10718, (Optr)PBlock10719, (Optr)PBlock10724, (Optr)&t_block_return);
    Block PBlock10715 = new_Block_with(empty_Array, empty_Array, PThreadedCode10716, 1, PSend10718);
    // ifTrue:. 
    Send PSend10714 = new_Send((Optr)PSend10713, SMB_ifTrue_, 1, (Optr)PBlock10715);
    Array PThreadedCode10700 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10701, (Optr)&t_send1, (Optr)PSend10702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10703, (Optr)&t_send_ifTrue_, (Optr)PSend10704, (Optr)PBlock10705, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10708, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10709, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_send1, (Optr)PSend10710, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10711, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10712, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10713, (Optr)&t_send_ifTrue_, (Optr)PSend10714, (Optr)PBlock10715, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_method_return);
    Block PBlock10698 = new_Block_with(PArray10699, empty_Array, PThreadedCode10700, 6, PSend10702, PSend10704, PAssign10708, PAssign10709, PSend10714, VAR_old_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10727 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10698);
    Array PThreadedCode10697 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10698, (Optr)&t_send1, (Optr)PSend10727, (Optr)&t_method_return);
    Method PMethod10694 = new_Method_with(PArray10695, PArray10696, empty_Array, PThreadedCode10697, 1, PSend10727);
    
    MethodClosure MC_SMB_adjustInBuffer_ = new_MethodClosure((Method)PMethod10694, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustInBuffer_, MC_SMB_adjustInBuffer_);
}


static void init_SMB_ifStale_() {
    Symbol SMB_ifStale_ = new_Symbol(L"ifStale:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray10729 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10731 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend10735 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode10734 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend10735, (Optr)&t_block_return);
    Block PBlock10733 = new_Block_with(empty_Array, empty_Array, PThreadedCode10734, 1, PSend10735);
    // ifFalse:. 
    Send PSend10732 = new_Send((Optr)PSend10731, SMB_ifFalse_, 1, (Optr)PBlock10733);
    Array PThreadedCode10730 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10731, (Optr)&t_send_ifFalse_, (Optr)PSend10732, (Optr)PBlock10733, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10728 = new_Method_with(PArray10729, empty_Array, empty_Array, PThreadedCode10730, 2, PSend10732, self);
    
    MethodClosure MC_SMB_ifStale_ = new_MethodClosure((Method)PMethod10728, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ifStale_, MC_SMB_ifStale_);
}


static void init_SMB_nextAvailable() {
    Symbol SMB_nextAvailable = new_Symbol(L"nextAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10739 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10741 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10745 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10746 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10745);
    Array PThreadedCode10744 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10745, (Optr)&t_send1, (Optr)PSend10746, (Optr)&t_block_return);
    Block PBlock10743 = new_Block_with(empty_Array, empty_Array, PThreadedCode10744, 1, PSend10746);
    // ifFalse:. 
    Send PSend10742 = new_Send((Optr)PSend10741, SMB_ifFalse_, 1, (Optr)PBlock10743);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10747 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10751 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10750 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10751, (Optr)&t_block_return);
    Block PBlock10749 = new_Block_with(empty_Array, empty_Array, PThreadedCode10750, 1, PSend10751);
    // ifTrue:. 
    Send PSend10748 = new_Send((Optr)PSend10747, SMB_ifTrue_, 1, (Optr)PBlock10749);
    // nextAllInBuffer. 
    Send PSend10752 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode10740 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10741, (Optr)&t_send_ifFalse_, (Optr)PSend10742, (Optr)PBlock10743, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10747, (Optr)&t_send_ifTrue_, (Optr)PSend10748, (Optr)PBlock10749, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10752, (Optr)&t_method_return);
    Block PBlock10738 = new_Block_with(PArray10739, empty_Array, PThreadedCode10740, 3, PSend10742, PSend10748, PSend10752);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10753 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10738);
    Array PThreadedCode10737 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10738, (Optr)&t_send1, (Optr)PSend10753, (Optr)&t_method_return);
    Method PMethod10736 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10737, 1, PSend10753);
    
    MethodClosure MC_SMB_nextAvailable = new_MethodClosure((Method)PMethod10736, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable, MC_SMB_nextAvailable);
}


static void init_SMB_resizeInBuffer_() {
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    Variable VAR_newSize_0_0 = new_Variable_named(L"newSize", 0);
    Array PArray10755 = new_Array_with(1, (Optr)VAR_newSize_0_0);
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend10759 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)VAR_newSize_0_0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10760 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10758 = new_Send((Optr)PSend10759, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10760, (Optr)slot_IO_SocketStream_inBuffer, (Optr)int_1_Const);
    Assign PAssign10757 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend10758);
    Array PThreadedCode10756 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign10757, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newSize_0_0, (Optr)&t_send1, (Optr)PSend10759, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10760, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10758, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10754 = new_Method_with(PArray10755, empty_Array, empty_Array, PThreadedCode10756, 2, PAssign10757, self);
    
    MethodClosure MC_SMB_resizeInBuffer_ = new_MethodClosure((Method)PMethod10754, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resizeInBuffer_, MC_SMB_resizeInBuffer_);
}


static void init_SMB_bufferSize_() {
    Symbol SMB_bufferSize_ = new_Symbol(L"bufferSize:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray10762 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign10764 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)VAR_anInt_0_0);
    Array PThreadedCode10763 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10764, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10761 = new_Method_with(PArray10762, empty_Array, empty_Array, PThreadedCode10763, 2, PAssign10764, self);
    
    MethodClosure MC_SMB_bufferSize_ = new_MethodClosure((Method)PMethod10761, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize_, MC_SMB_bufferSize_);
}


static void init_SMB_isDataAvailable() {
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10768 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10770 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10774 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10773 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10774, (Optr)&t_block_return);
    Block PBlock10772 = new_Block_with(empty_Array, empty_Array, PThreadedCode10773, 1, PSend10774);
    // ifFalse:. 
    Send PSend10771 = new_Send((Optr)PSend10770, SMB_ifFalse_, 1, (Optr)PBlock10772);
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    // dataAvailable. 
    Send PSend10775 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_dataAvailable, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Array PThreadedCode10778 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock10777 = new_Block_with(empty_Array, empty_Array, PThreadedCode10778, 1, false_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray10782 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10784 = new_Send((Optr)VAR__receiver__2_0, SMB_receiveDataIfAvailable, 0);
    // isDataAvailable. 
    Send PSend10785 = new_Send((Optr)VAR__receiver__2_0, SMB_isDataAvailable, 0);
    Array PThreadedCode10783 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10784, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10785, (Optr)&t_method_return);
    Block PBlock10781 = new_Block_with(PArray10782, empty_Array, PThreadedCode10783, 2, PSend10784, PSend10785);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10786 = new_Send((Optr)PBlock10781, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10780 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock10781, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10786, (Optr)&t_block_return);
    Block PBlock10779 = new_Block_with(empty_Array, empty_Array, PThreadedCode10780, 1, PSend10786);
    // ifFalse:ifTrue:. 
    Send PSend10776 = new_Send((Optr)PSend10775, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock10777, (Optr)PBlock10779);
    Array PThreadedCode10769 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10770, (Optr)&t_send_ifFalse_, (Optr)PSend10771, (Optr)PBlock10772, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10775, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend10776, (Optr)PBlock10777, (Optr)PBlock10779, (Optr)&t_method_return);
    Block PBlock10767 = new_Block_with(PArray10768, empty_Array, PThreadedCode10769, 2, PSend10771, PSend10776);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10787 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10767);
    Array PThreadedCode10766 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10767, (Optr)&t_send1, (Optr)PSend10787, (Optr)&t_method_return);
    Method PMethod10765 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10766, 1, PSend10787);
    
    MethodClosure MC_SMB_isDataAvailable = new_MethodClosure((Method)PMethod10765, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isDataAvailable, MC_SMB_isDataAvailable);
}


static void init_SMB_adjustOutBuffer_() {
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    Variable VAR_bytesToWrite_0_0 = new_Variable_named(L"bytesToWrite", 0);
    Array PArray10789 = new_Array_with(1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10791 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10792 = new_Send((Optr)PSend10791, SMB__minus_, 1, (Optr)slot_IO_SocketStream_outNextToWrite);
    // -. 
    Send PSend10793 = new_Send((Optr)PSend10792, SMB__minus_, 1, (Optr)VAR_bytesToWrite_0_0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10794 = new_Send((Optr)PSend10793, SMB__lt_, 1, (Optr)int_1024_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // size. 
    Send PSend10803 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend10802 = new_Send((Optr)PSend10803, SMB_max_, 1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10801 = new_Send((Optr)PSend10802, SMB__times_, 1, (Optr)int_2_Const);
    // streamBuffer:. 
    Send PSend10800 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)PSend10801);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // size. 
    Send PSend10804 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10799 = new_Send((Optr)PSend10800, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10804, (Optr)slot_IO_SocketStream_outBuffer, (Optr)int_1_Const);
    Assign PAssign10798 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend10799);
    Array PThreadedCode10797 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign10798, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10803, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10802, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10801, (Optr)&t_send1, (Optr)PSend10800, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10804, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10799, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10796 = new_Block_with(empty_Array, empty_Array, PThreadedCode10797, 1, PAssign10798);
    // ifTrue:. 
    Send PSend10795 = new_Send((Optr)PSend10794, SMB_ifTrue_, 1, (Optr)PBlock10796);
    Array PThreadedCode10790 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10791, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_send1, (Optr)PSend10792, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10793, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10794, (Optr)&t_send_ifTrue_, (Optr)PSend10795, (Optr)PBlock10796, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10788 = new_Method_with(PArray10789, empty_Array, empty_Array, PThreadedCode10790, 2, PSend10795, self);
    
    MethodClosure MC_SMB_adjustOutBuffer_ = new_MethodClosure((Method)PMethod10788, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustOutBuffer_, MC_SMB_adjustOutBuffer_);
}


static void init_SMB_nextAllInBuffer() {
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10807 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10808 = new_Send((Optr)PSend10807, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10809 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10808);
    Array PThreadedCode10806 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10807, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10808, (Optr)&t_send1, (Optr)PSend10809, (Optr)&t_method_return);
    Method PMethod10805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10806, 1, PSend10809);
    
    MethodClosure MC_SMB_nextAllInBuffer = new_MethodClosure((Method)PMethod10805, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAllInBuffer, MC_SMB_nextAllInBuffer);
}


static void init_SMB_skip_() {
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10811 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10813 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10816 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10817 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10815 = new_Send((Optr)PSend10816, SMB_min_, 1, (Optr)PSend10817);
    Assign PAssign10814 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10815);
    Array PThreadedCode10812 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10813, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10814, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10816, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10817, (Optr)&t_send1, (Optr)PSend10815, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10810 = new_Method_with(PArray10811, empty_Array, empty_Array, PThreadedCode10812, 3, PSend10813, PAssign10814, self);
    
    MethodClosure MC_SMB_skip_ = new_MethodClosure((Method)PMethod10810, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_skip_, MC_SMB_skip_);
}


static void init_SMB_nextAvailable_() {
    Symbol SMB_nextAvailable_ = new_Symbol(L"nextAvailable:");
    Variable VAR_howMany_0_0 = new_Variable_named(L"howMany", 0);
    Array PArray10819 = new_Array_with(1, (Optr)VAR_howMany_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10822 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10824 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10828 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10829 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10828);
    Array PThreadedCode10827 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10828, (Optr)&t_send1, (Optr)PSend10829, (Optr)&t_block_return);
    Block PBlock10826 = new_Block_with(empty_Array, empty_Array, PThreadedCode10827, 1, PSend10829);
    // ifFalse:. 
    Send PSend10825 = new_Send((Optr)PSend10824, SMB_ifFalse_, 1, (Optr)PBlock10826);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10830 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10834 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10833 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10834, (Optr)&t_block_return);
    Block PBlock10832 = new_Block_with(empty_Array, empty_Array, PThreadedCode10833, 1, PSend10834);
    // ifTrue:. 
    Send PSend10831 = new_Send((Optr)PSend10830, SMB_ifTrue_, 1, (Optr)PBlock10832);
    // nextInBuffer:. 
    Send PSend10835 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Array PThreadedCode10823 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10824, (Optr)&t_send_ifFalse_, (Optr)PSend10825, (Optr)PBlock10826, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10830, (Optr)&t_send_ifTrue_, (Optr)PSend10831, (Optr)PBlock10832, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10835, (Optr)&t_method_return);
    Block PBlock10821 = new_Block_with(PArray10822, empty_Array, PThreadedCode10823, 3, PSend10825, PSend10831, PSend10835);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10836 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10821);
    Array PThreadedCode10820 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10821, (Optr)&t_send1, (Optr)PSend10836, (Optr)&t_method_return);
    Method PMethod10818 = new_Method_with(PArray10819, empty_Array, empty_Array, PThreadedCode10820, 1, PSend10836);
    
    MethodClosure MC_SMB_nextAvailable_ = new_MethodClosure((Method)PMethod10818, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable_, MC_SMB_nextAvailable_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10839 = new_Send((Optr)self, SMB_flush, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // closeAndDestroy:. 
    Send PSend10840 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_closeAndDestroy_, 1, (Optr)int_30_Const);
    Array PThreadedCode10838 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10839, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend10840, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10838, 3, PSend10839, PSend10840, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod10837, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_inBufferSize() {
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10843 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10844 = new_Send((Optr)PSend10843, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10842 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10843, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10844, (Optr)&t_method_return);
    Method PMethod10841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10842, 1, PSend10844);
    
    MethodClosure MC_SMB_inBufferSize = new_MethodClosure((Method)PMethod10841, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_inBufferSize, MC_SMB_inBufferSize);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray10846 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend10848 = new_Send((Optr)VAR_anObject_0_0, SMB_printOn_, 1, (Optr)self);
    Array PThreadedCode10847 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10848, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10845 = new_Method_with(PArray10846, empty_Array, empty_Array, PThreadedCode10847, 2, PSend10848, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod10845, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10852 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10854 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10858 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10857 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10858, (Optr)&t_block_return);
    Block PBlock10856 = new_Block_with(empty_Array, empty_Array, PThreadedCode10857, 1, PSend10858);
    // ifTrue:. 
    Send PSend10855 = new_Send((Optr)PSend10854, SMB_ifTrue_, 1, (Optr)PBlock10856);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10859 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10863 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10864 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10868 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10867 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10868, (Optr)&t_block_return);
    Block PBlock10866 = new_Block_with(empty_Array, empty_Array, PThreadedCode10867, 1, PSend10868);
    // ifTrue:. 
    Send PSend10865 = new_Send((Optr)PSend10864, SMB_ifTrue_, 1, (Optr)PBlock10866);
    Array PThreadedCode10862 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10863, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10864, (Optr)&t_send_ifTrue_, (Optr)PSend10865, (Optr)PBlock10866, (Optr)&t_block_return);
    Block PBlock10861 = new_Block_with(empty_Array, empty_Array, PThreadedCode10862, 2, PSend10863, PSend10865);
    // ifTrue:. 
    Send PSend10860 = new_Send((Optr)PSend10859, SMB_ifTrue_, 1, (Optr)PBlock10861);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10870 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10869 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10870);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10871 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10853 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10854, (Optr)&t_send_ifTrue_, (Optr)PSend10855, (Optr)PBlock10856, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10859, (Optr)&t_send_ifTrue_, (Optr)PSend10860, (Optr)PBlock10861, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10869, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10870, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10871, (Optr)&t_method_return);
    Block PBlock10851 = new_Block_with(PArray10852, empty_Array, PThreadedCode10853, 4, PSend10855, PSend10860, PAssign10869, PSend10871);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10872 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10851);
    Array PThreadedCode10850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10851, (Optr)&t_send1, (Optr)PSend10872, (Optr)&t_method_return);
    Method PMethod10849 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10850, 1, PSend10872);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod10849, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    // standardTimeout. 
    Send PSend10878 = new_Send((Optr)PSocket_classReference, SMB_standardTimeout, 0);
    Assign PAssign10877 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)PSend10878);
    Array PThreadedCode10876 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign10877, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend10878, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10875 = new_Block_with(empty_Array, empty_Array, PThreadedCode10876, 1, PAssign10877);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10879 = new_Send((Optr)slot_IO_SocketStream_timeout, SMB_ifNil_, 1, (Optr)PBlock10875);
    Array PThreadedCode10874 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_closure, (Optr)PBlock10875, (Optr)&t_send1, (Optr)PSend10879, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_method_return);
    Method PMethod10873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10874, 2, PSend10879, slot_IO_SocketStream_timeout);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod10873, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_upToAll_() {
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Variable VAR_aStringOrByteArray_0_0 = new_Variable_named(L"aStringOrByteArray", 0);
    Array PArray10881 = new_Array_with(1, (Optr)VAR_aStringOrByteArray_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_sz_0_2 = new_Variable_named(L"sz", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_4 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_5 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray10882 = new_Array_with(5, (Optr)VAR_index_0_1, (Optr)VAR_sz_0_2, (Optr)VAR_result_0_3, (Optr)VAR_lastRecentlyRead_0_4, (Optr)VAR_searchedSoFar_0_5);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10885 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10887 = new_String(L"SocketStream>>upToAll:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10887_Const = new_Constant((Optr)string_10887);
    // warn:. 
    Send PSend10888 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10887_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10890 = new_Send((Optr)VAR_aStringOrByteArray_0_0, SMB_size, 0);
    Assign PAssign10889 = new_Assign((Optr)VAR_sz_0_2, (Optr)PSend10890);
    String string_10891 = new_String(L"SocketStream>>upToAll: sz is ");
    Constant string_10891_Const = new_Constant((Optr)string_10891);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10892 = new_Send((Optr)string_10891_Const, SMB__append_, 1, (Optr)VAR_sz_0_2);
    // warn:. 
    Send PSend10893 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10892);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10894 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)int_0_Const);
    Assign PAssign10895 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)int_0_Const);
    Assign PAssign10896 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    String string_10897 = new_String(L"SocketStream>>upToAll: temps initialized");
    Constant string_10897_Const = new_Constant((Optr)string_10897);
    // warn:. 
    Send PSend10898 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10897_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10901 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10902 = new_Send((Optr)PSend10901, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10905 = new_Send((Optr)VAR_lastRecentlyRead_0_4, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10908 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend10909 = new_Send((Optr)PSend10908, SMB_not, 0);
    Array PThreadedCode10907 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10908, (Optr)&t_send0, (Optr)PSend10909, (Optr)&t_block_return);
    Block PBlock10906 = new_Block_with(empty_Array, empty_Array, PThreadedCode10907, 1, PSend10909);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10910 = new_Send((Optr)PSend10905, SMB_and_, 1, (Optr)PBlock10906);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10913 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend10914 = new_Send((Optr)PSend10913, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode10912 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10913, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend10914, (Optr)&t_block_return);
    Block PBlock10911 = new_Block_with(empty_Array, empty_Array, PThreadedCode10912, 1, PSend10914);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend10915 = new_Send((Optr)PSend10910, SMB_or_, 1, (Optr)PBlock10911);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10919 = new_String(L"SocketStream>>upToAll: we need to read data");
    Constant string_10919_Const = new_Constant((Optr)string_10919);
    // warn:. 
    Send PSend10920 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10919_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10924 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_5);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10923 = new_Send((Optr)PSend10924, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOfSubCollection:startingAt:. 
    Send PSend10922 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_aStringOrByteArray_0_0, (Optr)PSend10923);
    Assign PAssign10921 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend10922);
    String string_10925 = new_String(L"SocketStream>>upToAll: searched for a bit.");
    Constant string_10925_Const = new_Constant((Optr)string_10925);
    // warn:. 
    Send PSend10926 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10925_Const);
    // inBufferSize. 
    Send PSend10928 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign10927 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)PSend10928);
    String string_10929 = new_String(L"SocketStream>>upToAll: this far we searched until");
    Constant string_10929_Const = new_Constant((Optr)string_10929);
    // warn:. 
    Send PSend10930 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10929_Const);
    // warn:. 
    Send PSend10931 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_searchedSoFar_0_5);
    // >. 
    Send PSend10932 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend10935 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)VAR_sz_0_2);
    // >. 
    Send PSend10936 = new_Send((Optr)PSend10935, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10934 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10935, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10936, (Optr)&t_block_return);
    Block PBlock10933 = new_Block_with(empty_Array, empty_Array, PThreadedCode10934, 1, PSend10936);
    // and:. 
    Send PSend10937 = new_Send((Optr)PSend10932, SMB_and_, 1, (Optr)PBlock10933);
    Assign PAssign10941 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode10940 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10941, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10939 = new_Block_with(empty_Array, empty_Array, PThreadedCode10940, 1, PAssign10941);
    // ifTrue:. 
    Send PSend10938 = new_Send((Optr)PSend10937, SMB_ifTrue_, 1, (Optr)PBlock10939);
    Array PThreadedCode10918 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10919, (Optr)&t_send1, (Optr)PSend10920, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10921, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10924, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10923, (Optr)&t_send2, (Optr)PSend10922, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10925, (Optr)&t_send1, (Optr)PSend10926, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10927, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10928, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10929, (Optr)&t_send1, (Optr)PSend10930, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10931, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10932, (Optr)&t_push_closure, (Optr)PBlock10933, (Optr)&t_send1, (Optr)PSend10937, (Optr)&t_send_ifTrue_, (Optr)PSend10938, (Optr)PBlock10939, (Optr)&t_block_return);
    Block PBlock10917 = new_Block_with(empty_Array, empty_Array, PThreadedCode10918, 7, PSend10920, PAssign10921, PSend10926, PAssign10927, PSend10930, PSend10931, PSend10938);
    // ifTrue:. 
    Send PSend10916 = new_Send((Optr)PSend10915, SMB_ifTrue_, 1, (Optr)PBlock10917);
    // =. 
    Send PSend10942 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode10904 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_4, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10905, (Optr)&t_push_closure, (Optr)PBlock10906, (Optr)&t_send1, (Optr)PSend10910, (Optr)&t_push_closure, (Optr)PBlock10911, (Optr)&t_send1, (Optr)PSend10915, (Optr)&t_send_ifTrue_, (Optr)PSend10916, (Optr)PBlock10917, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10942, (Optr)&t_block_return);
    Block PBlock10903 = new_Block_with(empty_Array, empty_Array, PThreadedCode10904, 2, PSend10916, PSend10942);
    // and:. 
    Send PSend10943 = new_Send((Optr)PSend10902, SMB_and_, 1, (Optr)PBlock10903);
    Array PThreadedCode10900 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10901, (Optr)&t_send0, (Optr)PSend10902, (Optr)&t_push_closure, (Optr)PBlock10903, (Optr)&t_send1, (Optr)PSend10943, (Optr)&t_block_return);
    Block PBlock10899 = new_Block_with(empty_Array, empty_Array, PThreadedCode10900, 1, PSend10943);
    // =. 
    Send PSend10946 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10950 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10949 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10950, (Optr)&t_block_return);
    Block PBlock10948 = new_Block_with(empty_Array, empty_Array, PThreadedCode10949, 1, PSend10950);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend10953 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode10952 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10953, (Optr)&t_block_return);
    Block PBlock10951 = new_Block_with(empty_Array, empty_Array, PThreadedCode10952, 1, PSend10953);
    // ifTrue:ifFalse:. 
    Send PSend10947 = new_Send((Optr)PSend10946, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10948, (Optr)PBlock10951);
    Assign PAssign10954 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10945 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10946, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10947, (Optr)PBlock10948, (Optr)PBlock10951, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10954, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10944 = new_Block_with(empty_Array, empty_Array, PThreadedCode10945, 2, PSend10947, PAssign10954);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10955 = new_Send((Optr)PBlock10899, SMB_whileTrue_, 1, (Optr)PBlock10944);
    // >. 
    Send PSend10956 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10963 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend10962 = new_Send((Optr)PSend10963, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend10961 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10962);
    Assign PAssign10960 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend10961);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend10964 = new_Send((Optr)self, SMB_skip_, 1, (Optr)VAR_sz_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10965 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_3);
    Array PThreadedCode10959 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign10960, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10963, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10962, (Optr)&t_send1, (Optr)PSend10961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_send1, (Optr)PSend10965, (Optr)&t_block_return);
    Block PBlock10958 = new_Block_with(empty_Array, empty_Array, PThreadedCode10959, 3, PAssign10960, PSend10964, PSend10965);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10968 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend10969 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10968);
    Array PThreadedCode10967 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10968, (Optr)&t_send1, (Optr)PSend10969, (Optr)&t_block_return);
    Block PBlock10966 = new_Block_with(empty_Array, empty_Array, PThreadedCode10967, 1, PSend10969);
    // ifTrue:ifFalse:. 
    Send PSend10957 = new_Send((Optr)PSend10956, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10958, (Optr)PBlock10966);
    Array PThreadedCode10886 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10887, (Optr)&t_send1, (Optr)PSend10888, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10889, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_send0, (Optr)PSend10890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10891, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10892, (Optr)&t_send1, (Optr)PSend10893, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10894, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10895, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10896, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10897, (Optr)&t_send1, (Optr)PSend10898, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10899, (Optr)&t_push_closure, (Optr)PBlock10944, (Optr)&t_send1, (Optr)PSend10955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10956, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10957, (Optr)PBlock10958, (Optr)PBlock10966, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock10884 = new_Block_with(PArray10885, empty_Array, PThreadedCode10886, 10, PSend10888, PAssign10889, PSend10893, PAssign10894, PAssign10895, PAssign10896, PSend10898, PSend10955, PSend10957, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10970 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10884);
    Array PThreadedCode10883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10884, (Optr)&t_send1, (Optr)PSend10970, (Optr)&t_method_return);
    Method PMethod10880 = new_Method_with(PArray10881, PArray10882, empty_Array, PThreadedCode10883, 1, PSend10970);
    
    MethodClosure MC_SMB_upToAll_ = new_MethodClosure((Method)PMethod10880, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToAll_, MC_SMB_upToAll_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray10972 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend10974 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode10973 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10974, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10971 = new_Method_with(PArray10972, empty_Array, empty_Array, PThreadedCode10973, 2, PSend10974, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod10971, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_growInBuffer() {
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10977 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10978 = new_Send((Optr)PSend10977, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    // resizeInBuffer:. 
    Send PSend10979 = new_Send((Optr)self, SMB_resizeInBuffer_, 1, (Optr)PSend10978);
    Array PThreadedCode10976 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10977, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10978, (Optr)&t_send1, (Optr)PSend10979, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10976, 2, PSend10979, self);
    
    MethodClosure MC_SMB_growInBuffer = new_MethodClosure((Method)PMethod10975, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_growInBuffer, MC_SMB_growInBuffer);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray10981 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend10983 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend10984 = new_Send((Optr)PSend10983, SMB_name, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10985 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend10984);
    String string_10988 = new_String(L"[inbuf:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10989 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // /. 
    Send PSend10990 = new_Send((Optr)PSend10989, SMB__divide_, 1, (Optr)int_1024_Const);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend10991 = new_Send((Optr)PSend10990, SMB_rounded, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10992 = new_Send((Optr)PSend10991, SMB_asString, 0);
    Constant string_10988_Const = new_Constant((Optr)string_10988);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10993 = new_Send((Optr)string_10988_Const, SMB__append_, 1, (Optr)PSend10992);
    String string_10994 = new_String(L"kb/outbuf:");
    Constant string_10994_Const = new_Constant((Optr)string_10994);
    // ,. 
    Send PSend10995 = new_Send((Optr)PSend10993, SMB__append_, 1, (Optr)string_10994_Const);
    // size. 
    Send PSend10996 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // /. 
    Send PSend10997 = new_Send((Optr)PSend10996, SMB__divide_, 1, (Optr)int_1024_Const);
    // rounded. 
    Send PSend10998 = new_Send((Optr)PSend10997, SMB_rounded, 0);
    // asString. 
    Send PSend10999 = new_Send((Optr)PSend10998, SMB_asString, 0);
    // ,. 
    Send PSend11000 = new_Send((Optr)PSend10995, SMB__append_, 1, (Optr)PSend10999);
    String string_11001 = new_String(L"kb]");
    Constant string_11001_Const = new_Constant((Optr)string_11001);
    // ,. 
    Send PSend11002 = new_Send((Optr)PSend11000, SMB__append_, 1, (Optr)string_11001_Const);
    // nextPutAll:. 
    Send PSend11003 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend11002);
    Array PThreadedCode10987 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_10988, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10989, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10990, (Optr)&t_send0, (Optr)PSend10991, (Optr)&t_send0, (Optr)PSend10992, (Optr)&t_send1, (Optr)PSend10993, (Optr)&t_push1, (Optr)string_10994, (Optr)&t_send1, (Optr)PSend10995, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10996, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10997, (Optr)&t_send0, (Optr)PSend10998, (Optr)&t_send0, (Optr)PSend10999, (Optr)&t_send1, (Optr)PSend11000, (Optr)&t_push1, (Optr)string_11001, (Optr)&t_send1, (Optr)PSend11002, (Optr)&t_send1, (Optr)PSend11003, (Optr)&t_block_return);
    Block PBlock10986 = new_Block_with(empty_Array, empty_Array, PThreadedCode10987, 1, PSend11003);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend11004 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_ifNotNil_, 1, (Optr)PBlock10986);
    Array PThreadedCode10982 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10983, (Optr)&t_send0, (Optr)PSend10984, (Optr)&t_send1, (Optr)PSend10985, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_closure, (Optr)PBlock10986, (Optr)&t_send1, (Optr)PSend11004, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10980 = new_Method_with(PArray10981, empty_Array, empty_Array, PThreadedCode10982, 3, PSend10985, PSend11004, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod10980, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_autoFlush() {
    Symbol SMB_autoFlush = new_Symbol(L"autoFlush");
    Array PThreadedCode11006 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_method_return);
    Method PMethod11005 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11006, 1, slot_IO_SocketStream_autoFlush);
    
    MethodClosure MC_SMB_autoFlush = new_MethodClosure((Method)PMethod11005, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush, MC_SMB_autoFlush);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11008 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11009 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend11015 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode11014 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11015, (Optr)&t_block_return);
    Block PBlock11013 = new_Block_with(empty_Array, empty_Array, PThreadedCode11014, 1, PSend11015);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11018 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode11017 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend11018, (Optr)&t_block_return);
    Block PBlock11016 = new_Block_with(empty_Array, empty_Array, PThreadedCode11017, 1, PSend11018);
    // ifTrue:ifFalse:. 
    Send PSend11012 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11013, (Optr)PBlock11016);
    Assign PAssign11011 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11012);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11019 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    // adjustOutBuffer:. 
    Send PSend11020 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)PSend11019);
    // size. 
    Send PSend11021 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11022 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11021);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11023 = new_Send((Optr)PSend11022, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11024 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11023, (Optr)VAR_toPut_0_1, (Optr)int_1_Const);
    // size. 
    Send PSend11027 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    // +. 
    Send PSend11026 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend11027);
    Assign PAssign11025 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11026);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11028 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11010 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign11011, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11012, (Optr)PBlock11013, (Optr)PBlock11016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11019, (Optr)&t_send1, (Optr)PSend11020, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11021, (Optr)&t_send1, (Optr)PSend11022, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11023, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend11024, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11025, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend11027, (Optr)&t_send1, (Optr)PSend11026, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11007 = new_Method_with(PArray11008, PArray11009, empty_Array, PThreadedCode11010, 6, PAssign11011, PSend11020, PSend11024, PAssign11025, PSend11028, self);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod11007, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_receiveDataIfAvailable() {
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    // receiveSomeDataInto:startingAt:. 
    Send PSend11032 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveSomeDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign11031 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend11032);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend11033 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11030 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign11031, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend11032, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend11033, (Optr)&t_method_return);
    Method PMethod11029 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11030, 2, PAssign11031, PSend11033);
    
    MethodClosure MC_SMB_receiveDataIfAvailable = new_MethodClosure((Method)PMethod11029, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveDataIfAvailable, MC_SMB_receiveDataIfAvailable);
}


static void init_SMB_isInBufferEmpty() {
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    String string_11036 = new_String(L"SocketStream>>isInBufferEmpty:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11036_Const = new_Constant((Optr)string_11036);
    // warn:. 
    Send PSend11037 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11036_Const);
    String string_11038 = new_String(L"-Last Read:");
    Constant string_11038_Const = new_Constant((Optr)string_11038);
    // warn:. 
    Send PSend11039 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11038_Const);
    // warn:. 
    Send PSend11040 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    String string_11041 = new_String(L"-Index Next To Write:");
    Constant string_11041_Const = new_Constant((Optr)string_11041);
    // warn:. 
    Send PSend11042 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11041_Const);
    // warn:. 
    Send PSend11043 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11044 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11045 = new_Send((Optr)PSend11044, SMB__equals_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11035 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11036, (Optr)&t_send1, (Optr)PSend11037, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11038, (Optr)&t_send1, (Optr)PSend11039, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11040, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11041, (Optr)&t_send1, (Optr)PSend11042, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11043, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11044, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11045, (Optr)&t_method_return);
    Method PMethod11034 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11035, 6, PSend11037, PSend11039, PSend11040, PSend11042, PSend11043, PSend11045);
    
    MethodClosure MC_SMB_isInBufferEmpty = new_MethodClosure((Method)PMethod11034, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isInBufferEmpty, MC_SMB_isInBufferEmpty);
}


static void init_SMB_peek_() {
    Symbol SMB_peek_ = new_Symbol(L"peek:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11047 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray11048 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11050 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11052 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11051 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11052);
    // +. 
    Send PSend11053 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11054 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend11055 = new_Send((Optr)PSend11053, SMB_min_, 1, (Optr)PSend11054);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11056 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend11055);
    Array PThreadedCode11049 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11050, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11051, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11052, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11053, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11054, (Optr)&t_send1, (Optr)PSend11055, (Optr)&t_send2, (Optr)PSend11056, (Optr)&t_method_return);
    Method PMethod11046 = new_Method_with(PArray11047, PArray11048, empty_Array, PThreadedCode11049, 3, PSend11050, PAssign11051, PSend11056);
    
    MethodClosure MC_SMB_peek_ = new_MethodClosure((Method)PMethod11046, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek_, MC_SMB_peek_);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11059 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11060 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend11059);
    Array PThreadedCode11058 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11059, (Optr)&t_send1, (Optr)PSend11060, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11057 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11058, 2, PSend11060, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod11057, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_moveInBufferDown() {
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    Variable VAR_sz_0_0 = new_Variable_named(L"sz", 0);
    Variable VAR_distanceMoved_0_1 = new_Variable_named(L"distanceMoved", 0);
    Array PArray11062 = new_Array_with(2, (Optr)VAR_sz_0_0, (Optr)VAR_distanceMoved_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11066 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11065 = new_Send((Optr)PSend11066, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign11064 = new_Assign((Optr)VAR_sz_0_0, (Optr)PSend11065);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11067 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11068 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_sz_0_0, (Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11067);
    Assign PAssign11069 = new_Assign((Optr)VAR_distanceMoved_0_1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11070 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    // +. 
    Send PSend11072 = new_Send((Optr)VAR_sz_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11071 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend11072);
    Array PThreadedCode11063 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign11064, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11066, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11065, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11067, (Optr)&t_send4, (Optr)PSend11068, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11069, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11070, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11071, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11072, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_distanceMoved_0_1, (Optr)&t_method_return);
    Method PMethod11061 = new_Method_with(empty_Array, PArray11062, empty_Array, PThreadedCode11063, 6, PAssign11064, PSend11068, PAssign11069, PAssign11070, PAssign11071, VAR_distanceMoved_0_1);
    
    MethodClosure MC_SMB_moveInBufferDown = new_MethodClosure((Method)PMethod11061, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_moveInBufferDown, MC_SMB_moveInBufferDown);
}


static void init_SMB_nextLineLf() {
    Symbol SMB_nextLineLf = new_Symbol(L"nextLineLf");
    Variable VAR_nextLine_0_0 = new_Variable_named(L"nextLine", 0);
    Array PArray11074 = new_Array_with(1, (Optr)VAR_nextLine_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend11078 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // upToAll:. 
    Send PSend11077 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend11078);
    Assign PAssign11076 = new_Assign((Optr)VAR_nextLine_0_0, (Optr)PSend11077);
    Array PThreadedCode11075 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11076, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11078, (Optr)&t_send1, (Optr)PSend11077, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_0, (Optr)&t_method_return);
    Method PMethod11073 = new_Method_with(empty_Array, PArray11074, empty_Array, PThreadedCode11075, 2, PAssign11076, VAR_nextLine_0_0);
    
    MethodClosure MC_SMB_nextLineLf = new_MethodClosure((Method)PMethod11073, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineLf, MC_SMB_nextLineLf);
}


static void init_SMB_nextInBuffer_() {
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11080 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_amount_0_2 = new_Variable_named(L"amount", 0);
    Array PArray11081 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_amount_0_2);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11086 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11085 = new_Send((Optr)PSend11086, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11084 = new_Send((Optr)VAR_anInteger_0_0, SMB_min_, 1, (Optr)PSend11085);
    Assign PAssign11083 = new_Assign((Optr)VAR_amount_0_2, (Optr)PSend11084);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11088 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11087 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11088);
    // +. 
    Send PSend11090 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_amount_0_2);
    Assign PAssign11089 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11090);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11091 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11082 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign11083, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11086, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11085, (Optr)&t_send1, (Optr)PSend11084, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11087, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11089, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_amount_0_2, (Optr)&t_send1, (Optr)PSend11090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend11091, (Optr)&t_method_return);
    Method PMethod11079 = new_Method_with(PArray11080, PArray11081, empty_Array, PThreadedCode11082, 4, PAssign11083, PAssign11087, PAssign11089, PSend11091);
    
    MethodClosure MC_SMB_nextInBuffer_ = new_MethodClosure((Method)PMethod11079, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextInBuffer_, MC_SMB_nextInBuffer_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11095 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11097 = new_String(L"SocketStream>>atEnd");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11097_Const = new_Constant((Optr)string_11097);
    // warn:. 
    Send PSend11098 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11097_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11099 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11103 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode11102 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11103, (Optr)&t_block_return);
    Block PBlock11101 = new_Block_with(empty_Array, empty_Array, PThreadedCode11102, 1, PSend11103);
    // ifFalse:. 
    Send PSend11100 = new_Send((Optr)PSend11099, SMB_ifFalse_, 1, (Optr)PBlock11101);
    String string_11104 = new_String(L"SocketStream>>atEnd: Buffer is Empty");
    Constant string_11104_Const = new_Constant((Optr)string_11104);
    // warn:. 
    Send PSend11105 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11104_Const);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend11106 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11107 = new_Send((Optr)PSend11106, SMB_not, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11110 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    // not. 
    Send PSend11111 = new_Send((Optr)PSend11110, SMB_not, 0);
    Array PThreadedCode11109 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11110, (Optr)&t_send0, (Optr)PSend11111, (Optr)&t_block_return);
    Block PBlock11108 = new_Block_with(empty_Array, empty_Array, PThreadedCode11109, 1, PSend11111);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11112 = new_Send((Optr)PSend11107, SMB_and_, 1, (Optr)PBlock11108);
    Array PThreadedCode11096 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11097, (Optr)&t_send1, (Optr)PSend11098, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11099, (Optr)&t_send_ifFalse_, (Optr)PSend11100, (Optr)PBlock11101, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11104, (Optr)&t_send1, (Optr)PSend11105, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11106, (Optr)&t_send0, (Optr)PSend11107, (Optr)&t_push_closure, (Optr)PBlock11108, (Optr)&t_send1, (Optr)PSend11112, (Optr)&t_method_return);
    Block PBlock11094 = new_Block_with(PArray11095, empty_Array, PThreadedCode11096, 4, PSend11098, PSend11100, PSend11105, PSend11112);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11113 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11094);
    Array PThreadedCode11093 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11094, (Optr)&t_send1, (Optr)PSend11113, (Optr)&t_method_return);
    Method PMethod11092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11093, 1, PSend11113);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod11092, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray11115 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11116 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend11122 = new_Send((Optr)VAR_char_0_0, SMB_asInteger, 0);
    Array PThreadedCode11121 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11122, (Optr)&t_block_return);
    Block PBlock11120 = new_Block_with(empty_Array, empty_Array, PThreadedCode11121, 1, PSend11122);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend11125 = new_Send((Optr)VAR_char_0_0, SMB_asCharacter, 0);
    Array PThreadedCode11124 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11125, (Optr)&t_block_return);
    Block PBlock11123 = new_Block_with(empty_Array, empty_Array, PThreadedCode11124, 1, PSend11125);
    // ifTrue:ifFalse:. 
    Send PSend11119 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11120, (Optr)PBlock11123);
    Assign PAssign11118 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11119);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // adjustOutBuffer:. 
    Send PSend11126 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend11127 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_at_put_, 2, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)VAR_toPut_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11129 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11128 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11129);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11130 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11117 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign11118, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11119, (Optr)PBlock11120, (Optr)PBlock11123, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11126, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send2, (Optr)PSend11127, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11128, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_method_return);
    Method PMethod11114 = new_Method_with(PArray11115, PArray11116, empty_Array, PThreadedCode11117, 6, PAssign11118, PSend11126, PSend11127, PAssign11128, PSend11130, VAR_char_0_0);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod11114, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    String string_11133 = new_String(L"SocketStream>>isConnected");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11133_Const = new_Constant((Optr)string_11133);
    // warn:. 
    Send PSend11134 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11133_Const);
    // isConnected. 
    Send PSend11135 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isConnected, 0);
    Array PThreadedCode11132 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11133, (Optr)&t_send1, (Optr)PSend11134, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11135, (Optr)&t_method_return);
    Method PMethod11131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11132, 2, PSend11134, PSend11135);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod11131, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend11138 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend11139 = new_Send((Optr)self, SMB_nextPut_, 1, (Optr)PSend11138);
    Array PThreadedCode11137 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend11138, (Optr)&t_send1, (Optr)PSend11139, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11136 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11137, 2, PSend11139, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod11136, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend11142 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11145 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11146 = new_Send((Optr)PSend11145, SMB_not, 0);
    Array PThreadedCode11144 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11145, (Optr)&t_send0, (Optr)PSend11146, (Optr)&t_block_return);
    Block PBlock11143 = new_Block_with(empty_Array, empty_Array, PThreadedCode11144, 1, PSend11146);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11147 = new_Send((Optr)PSend11142, SMB_and_, 1, (Optr)PBlock11143);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11153 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend11154 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11153);
    Array PThreadedCode11152 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11153, (Optr)&t_send2, (Optr)PSend11154, (Optr)&t_block_return);
    Block PBlock11151 = new_Block_with(empty_Array, empty_Array, PThreadedCode11152, 1, PSend11154);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11156 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Array PThreadedCode11160 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11159 = new_Block_with(empty_Array, empty_Array, PThreadedCode11160, 0);
    // ifFalse:. 
    Send PSend11158 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock11159);
    Array PThreadedCode11157 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend11158, (Optr)PBlock11159, (Optr)&t_method_return);
    Block PBlock11155 = new_Block_with(PArray11156, empty_Array, PThreadedCode11157, 1, PSend11158);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11161 = new_Send((Optr)PBlock11151, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock11155);
    Assign PAssign11162 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11150 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11151, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock11155, (Optr)&t_send2, (Optr)PSend11161, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11162, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11149 = new_Block_with(empty_Array, empty_Array, PThreadedCode11150, 2, PSend11161, PAssign11162);
    // ifTrue:. 
    Send PSend11148 = new_Send((Optr)PSend11147, SMB_ifTrue_, 1, (Optr)PBlock11149);
    Array PThreadedCode11141 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11142, (Optr)&t_push_closure, (Optr)PBlock11143, (Optr)&t_send1, (Optr)PSend11147, (Optr)&t_send_ifTrue_, (Optr)PSend11148, (Optr)PBlock11149, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11140 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11141, 2, PSend11148, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod11140, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_isOtherEndConnected() {
    Symbol SMB_isOtherEndConnected = new_Symbol(L"isOtherEndConnected");
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11165 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11166 = new_Send((Optr)PSend11165, SMB_not, 0);
    Array PThreadedCode11164 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11165, (Optr)&t_send0, (Optr)PSend11166, (Optr)&t_method_return);
    Method PMethod11163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11164, 1, PSend11166);
    
    MethodClosure MC_SMB_isOtherEndConnected = new_MethodClosure((Method)PMethod11163, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isOtherEndConnected, MC_SMB_isOtherEndConnected);
}


static void init_SMB_resetBuffers() {
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11170 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11169 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11170);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11171 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign11172 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)int_1_Const);
    // streamBuffer:. 
    Send PSend11174 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11173 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11174);
    Assign PAssign11175 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11168 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign11169, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11170, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11171, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11172, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11173, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11174, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11175, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11168, 6, PAssign11169, PAssign11171, PAssign11172, PAssign11173, PAssign11175, self);
    
    MethodClosure MC_SMB_resetBuffers = new_MethodClosure((Method)PMethod11167, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resetBuffers, MC_SMB_resetBuffers);
}


static void init_SMB_debug() {
    Symbol SMB_debug = new_Symbol(L"debug");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Array PArray11177 = new_Array_with(1, (Optr)VAR_data_0_0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11180 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11179 = new_Assign((Optr)VAR_data_0_0, (Optr)PSend11180);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11182 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11185 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_11187 = new_String(L"Buffer size: ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11188 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11189 = new_Send((Optr)PSend11188, SMB_asString, 0);
    Constant string_11187_Const = new_Constant((Optr)string_11187);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11190 = new_Send((Optr)string_11187_Const, SMB__append_, 1, (Optr)PSend11189);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11191 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11190);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11192 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11193 = new_String(L"InBuffer data size: ");
    // asString. 
    Send PSend11194 = new_Send((Optr)VAR_data_0_0, SMB_asString, 0);
    Constant string_11193_Const = new_Constant((Optr)string_11193);
    // ,. 
    Send PSend11195 = new_Send((Optr)string_11193_Const, SMB__append_, 1, (Optr)PSend11194);
    // nextPutAll:. 
    Send PSend11196 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11195);
    // cr. 
    Send PSend11197 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11198 = new_String(L"In data (20):");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11199 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend11200 = new_Send((Optr)VAR_data_0_0, SMB_min_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend11201 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)PSend11200);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11202 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)PSend11199, (Optr)PSend11201);
    Constant string_11198_Const = new_Constant((Optr)string_11198);
    // ,. 
    Send PSend11203 = new_Send((Optr)string_11198_Const, SMB__append_, 1, (Optr)PSend11202);
    // nextPutAll:. 
    Send PSend11204 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11203);
    // cr. 
    Send PSend11205 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11206 = new_String(L"OutBuffer data size: ");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11207 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // asString. 
    Send PSend11208 = new_Send((Optr)PSend11207, SMB_asString, 0);
    Constant string_11206_Const = new_Constant((Optr)string_11206);
    // ,. 
    Send PSend11209 = new_Send((Optr)string_11206_Const, SMB__append_, 1, (Optr)PSend11208);
    // nextPutAll:. 
    Send PSend11210 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11209);
    // cr. 
    Send PSend11211 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11212 = new_String(L"Out data (20):");
    // -. 
    Send PSend11213 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11214 = new_Send((Optr)PSend11213, SMB_min_, 1, (Optr)int_20_Const);
    // copyFrom:to:. 
    Send PSend11215 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend11214);
    Constant string_11212_Const = new_Constant((Optr)string_11212);
    // ,. 
    Send PSend11216 = new_Send((Optr)string_11212_Const, SMB__append_, 1, (Optr)PSend11215);
    // nextPutAll:. 
    Send PSend11217 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11216);
    // cr. 
    Send PSend11218 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11186 = instantiate_Array_with(ThreadedCode_Class, 0, 120, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11187, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11188, (Optr)&t_send0, (Optr)PSend11189, (Optr)&t_send1, (Optr)PSend11190, (Optr)&t_send1, (Optr)PSend11191, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11193, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send0, (Optr)PSend11194, (Optr)&t_send1, (Optr)PSend11195, (Optr)&t_send1, (Optr)PSend11196, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11197, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11198, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11199, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11200, (Optr)&t_send1, (Optr)PSend11201, (Optr)&t_send2, (Optr)PSend11202, (Optr)&t_send1, (Optr)PSend11203, (Optr)&t_send1, (Optr)PSend11204, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11205, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11206, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11207, (Optr)&t_send0, (Optr)PSend11208, (Optr)&t_send1, (Optr)PSend11209, (Optr)&t_send1, (Optr)PSend11210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11211, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11212, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11213, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11214, (Optr)&t_send2, (Optr)PSend11215, (Optr)&t_send1, (Optr)PSend11216, (Optr)&t_send1, (Optr)PSend11217, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11218, (Optr)&t_method_return);
    Block PBlock11184 = new_Block_with(PArray11185, empty_Array, PThreadedCode11186, 10, PSend11191, PSend11192, PSend11196, PSend11197, PSend11204, PSend11205, PSend11210, PSend11211, PSend11217, PSend11218);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11219 = new_Send((Optr)PBlock11184, SMB_value_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11183 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11184, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11219, (Optr)&t_method_return);
    Block PBlock11181 = new_Block_with(PArray11182, empty_Array, PThreadedCode11183, 1, PSend11219);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend11220 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock11181);
    Array PThreadedCode11178 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11179, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11180, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock11181, (Optr)&t_send1, (Optr)PSend11220, (Optr)&t_method_return);
    Method PMethod11176 = new_Method_with(empty_Array, PArray11177, empty_Array, PThreadedCode11178, 2, PAssign11179, PSend11220);
    
    MethodClosure MC_SMB_debug = new_MethodClosure((Method)PMethod11176, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_debug, MC_SMB_debug);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray11222 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_3 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_4 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11223 = new_Array_with(4, (Optr)VAR_index_0_1, (Optr)VAR_result_0_2, (Optr)VAR_lastRecentlyRead_0_3, (Optr)VAR_searchedSoFar_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11226 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11228 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)int_0_Const);
    Assign PAssign11229 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)int_0_Const);
    Assign PAssign11230 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11233 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11234 = new_Send((Optr)PSend11233, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11237 = new_Send((Optr)VAR_lastRecentlyRead_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11240 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11241 = new_Send((Optr)PSend11240, SMB_not, 0);
    Array PThreadedCode11239 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11240, (Optr)&t_send0, (Optr)PSend11241, (Optr)&t_block_return);
    Block PBlock11238 = new_Block_with(empty_Array, empty_Array, PThreadedCode11239, 1, PSend11241);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11242 = new_Send((Optr)PSend11237, SMB_and_, 1, (Optr)PBlock11238);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11245 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11246 = new_Send((Optr)PSend11245, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11244 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11245, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11246, (Optr)&t_block_return);
    Block PBlock11243 = new_Block_with(empty_Array, empty_Array, PThreadedCode11244, 1, PSend11246);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11247 = new_Send((Optr)PSend11242, SMB_or_, 1, (Optr)PBlock11243);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11254 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11253 = new_Send((Optr)PSend11254, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOf:startingAt:. 
    Send PSend11252 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOf_startingAt_, 2, (Optr)VAR_aCharacterOrByte_0_0, (Optr)PSend11253);
    Assign PAssign11251 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11252);
    // inBufferSize. 
    Send PSend11256 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11255 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)PSend11256);
    // >. 
    Send PSend11257 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11260 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // >. 
    Send PSend11261 = new_Send((Optr)PSend11260, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11259 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11260, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11261, (Optr)&t_block_return);
    Block PBlock11258 = new_Block_with(empty_Array, empty_Array, PThreadedCode11259, 1, PSend11261);
    // and:. 
    Send PSend11262 = new_Send((Optr)PSend11257, SMB_and_, 1, (Optr)PBlock11258);
    Assign PAssign11266 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11265 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11266, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11264 = new_Block_with(empty_Array, empty_Array, PThreadedCode11265, 1, PAssign11266);
    // ifTrue:. 
    Send PSend11263 = new_Send((Optr)PSend11262, SMB_ifTrue_, 1, (Optr)PBlock11264);
    Array PThreadedCode11250 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11251, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_4, (Optr)&t_send1, (Optr)PSend11254, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11253, (Optr)&t_send2, (Optr)PSend11252, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11255, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11256, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11257, (Optr)&t_push_closure, (Optr)PBlock11258, (Optr)&t_send1, (Optr)PSend11262, (Optr)&t_send_ifTrue_, (Optr)PSend11263, (Optr)PBlock11264, (Optr)&t_block_return);
    Block PBlock11249 = new_Block_with(empty_Array, empty_Array, PThreadedCode11250, 3, PAssign11251, PAssign11255, PSend11263);
    // ifTrue:. 
    Send PSend11248 = new_Send((Optr)PSend11247, SMB_ifTrue_, 1, (Optr)PBlock11249);
    // =. 
    Send PSend11267 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11236 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11237, (Optr)&t_push_closure, (Optr)PBlock11238, (Optr)&t_send1, (Optr)PSend11242, (Optr)&t_push_closure, (Optr)PBlock11243, (Optr)&t_send1, (Optr)PSend11247, (Optr)&t_send_ifTrue_, (Optr)PSend11248, (Optr)PBlock11249, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11267, (Optr)&t_block_return);
    Block PBlock11235 = new_Block_with(empty_Array, empty_Array, PThreadedCode11236, 2, PSend11248, PSend11267);
    // and:. 
    Send PSend11268 = new_Send((Optr)PSend11234, SMB_and_, 1, (Optr)PBlock11235);
    Array PThreadedCode11232 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11233, (Optr)&t_send0, (Optr)PSend11234, (Optr)&t_push_closure, (Optr)PBlock11235, (Optr)&t_send1, (Optr)PSend11268, (Optr)&t_block_return);
    Block PBlock11231 = new_Block_with(empty_Array, empty_Array, PThreadedCode11232, 1, PSend11268);
    String string_11271 = new_String(L"Buffer: ");
    Constant string_11271_Const = new_Constant((Optr)string_11271);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11272 = new_Send((Optr)string_11271_Const, SMB__append_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend11273 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11272);
    // =. 
    Send PSend11274 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11278 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11277 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11278, (Optr)&t_block_return);
    Block PBlock11276 = new_Block_with(empty_Array, empty_Array, PThreadedCode11277, 1, PSend11278);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11281 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11280 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11281, (Optr)&t_block_return);
    Block PBlock11279 = new_Block_with(empty_Array, empty_Array, PThreadedCode11280, 1, PSend11281);
    // ifTrue:ifFalse:. 
    Send PSend11275 = new_Send((Optr)PSend11274, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11276, (Optr)PBlock11279);
    Assign PAssign11282 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11270 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11271, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend11272, (Optr)&t_send1, (Optr)PSend11273, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11274, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11275, (Optr)PBlock11276, (Optr)PBlock11279, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11282, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11269 = new_Block_with(empty_Array, empty_Array, PThreadedCode11270, 3, PSend11273, PSend11275, PAssign11282);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11283 = new_Send((Optr)PBlock11231, SMB_whileTrue_, 1, (Optr)PBlock11269);
    // >. 
    Send PSend11284 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11291 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11290 = new_Send((Optr)PSend11291, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11289 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11290);
    Assign PAssign11288 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend11289);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11292 = new_Send((Optr)self, SMB_skip_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11293 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode11287 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11288, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11291, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11290, (Optr)&t_send1, (Optr)PSend11289, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11292, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend11293, (Optr)&t_block_return);
    Block PBlock11286 = new_Block_with(empty_Array, empty_Array, PThreadedCode11287, 3, PAssign11288, PSend11292, PSend11293);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11296 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11297 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11296);
    Array PThreadedCode11295 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11296, (Optr)&t_send1, (Optr)PSend11297, (Optr)&t_block_return);
    Block PBlock11294 = new_Block_with(empty_Array, empty_Array, PThreadedCode11295, 1, PSend11297);
    // ifTrue:ifFalse:. 
    Send PSend11285 = new_Send((Optr)PSend11284, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11286, (Optr)PBlock11294);
    Array PThreadedCode11227 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11228, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11229, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11230, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11231, (Optr)&t_push_closure, (Optr)PBlock11269, (Optr)&t_send1, (Optr)PSend11283, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11284, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11285, (Optr)PBlock11286, (Optr)PBlock11294, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11225 = new_Block_with(PArray11226, empty_Array, PThreadedCode11227, 6, PAssign11228, PAssign11229, PAssign11230, PSend11283, PSend11285, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11298 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11225);
    Array PThreadedCode11224 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11225, (Optr)&t_send1, (Optr)PSend11298, (Optr)&t_method_return);
    Method PMethod11221 = new_Method_with(PArray11222, PArray11223, empty_Array, PThreadedCode11224, 1, PSend11298);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod11221, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11305 = new_Send((Optr)self, SMB_atEnd, 0);
    Array PThreadedCode11304 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11305, (Optr)&t_block_return);
    Block PBlock11303 = new_Block_with(empty_Array, empty_Array, PThreadedCode11304, 1, PSend11305);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11308 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11307 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11308, (Optr)&t_block_return);
    Block PBlock11306 = new_Block_with(empty_Array, empty_Array, PThreadedCode11307, 1, PSend11308);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend11309 = new_Send((Optr)PBlock11303, SMB_whileFalse_, 1, (Optr)PBlock11306);
    Array PThreadedCode11302 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11303, (Optr)&t_push_closure, (Optr)PBlock11306, (Optr)&t_send1, (Optr)PSend11309, (Optr)&t_block_return);
    Block PBlock11301 = new_Block_with(empty_Array, empty_Array, PThreadedCode11302, 1, PSend11309);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11311 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode11312 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock11310 = new_Block_with(PArray11311, empty_Array, PThreadedCode11312, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11313 = new_Send((Optr)PBlock11301, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock11310);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11314 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode11300 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock11301, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock11310, (Optr)&t_send2, (Optr)PSend11313, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11314, (Optr)&t_method_return);
    Method PMethod11299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11300, 2, PSend11313, PSend11314);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod11299, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_recentlyRead() {
    Symbol SMB_recentlyRead = new_Symbol(L"recentlyRead");
    Array PThreadedCode11316 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_method_return);
    Method PMethod11315 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11316, 1, slot_IO_SocketStream_recentlyRead);
    
    MethodClosure MC_SMB_recentlyRead = new_MethodClosure((Method)PMethod11315, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_recentlyRead, MC_SMB_recentlyRead);
}


static void init_class_SMB_openConnectionToHostNamed_port_() {
    Symbol SMB_openConnectionToHostNamed_port_ = new_Symbol(L"openConnectionToHostNamed:port:");
    Variable VAR_hostName_0_0 = new_Variable_named(L"hostName", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11318 = new_Array_with(2, (Optr)VAR_hostName_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_hostIP_0_2 = new_Variable_named(L"hostIP", 0);
    Array PArray11319 = new_Array_with(1, (Optr)VAR_hostIP_0_2);
    Symbol SMB_addressForName_timeout_ = new_Symbol(L"addressForName:timeout:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // addressForName:timeout:. 
    Send PSend11322 = new_Send((Optr)NetNameResolver_classReference, SMB_addressForName_timeout_, 2, (Optr)VAR_hostName_0_0, (Optr)int_20_Const);
    Assign PAssign11321 = new_Assign((Optr)VAR_hostIP_0_2, (Optr)PSend11322);
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    // openConnectionToHost:port:. 
    Send PSend11323 = new_Send((Optr)self, SMB_openConnectionToHost_port_, 2, (Optr)VAR_hostIP_0_2, (Optr)VAR_portNumber_0_1);
    Array PThreadedCode11320 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign11321, (Optr)&t_push_class_reference, (Optr)NetNameResolver_classReference, (Optr)&t_push_variable, (Optr)VAR_hostName_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send2, (Optr)PSend11322, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_2, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11323, (Optr)&t_method_return);
    Method PMethod11317 = new_Method_with(PArray11318, PArray11319, empty_Array, PThreadedCode11320, 2, PAssign11321, PSend11323);
    
    MethodClosure MC_SMB_openConnectionToHostNamed_port_ = new_MethodClosure((Method)PMethod11317, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHostNamed_port_, MC_SMB_openConnectionToHostNamed_port_);
}


static void init_class_SMB_openConnectionToHost_port_() {
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    Variable VAR_hostIP_0_0 = new_Variable_named(L"hostIP", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11325 = new_Array_with(2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_socket_0_2 = new_Variable_named(L"socket", 0);
    Array PArray11326 = new_Array_with(1, (Optr)VAR_socket_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11329 = new_Send((Optr)PSocket_classReference, SMB_new, 0);
    Assign PAssign11328 = new_Assign((Optr)VAR_socket_0_2, (Optr)PSend11329);
    Symbol SMB_connectTo_port_ = new_Symbol(L"connectTo:port:");
    // connectTo:port:. 
    Send PSend11330 = new_Send((Optr)VAR_socket_0_2, SMB_connectTo_port_, 2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11331 = new_Send((Optr)self, SMB_on_, 1, (Optr)VAR_socket_0_2);
    Array PThreadedCode11327 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign11328, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11329, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_0, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11330, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_send1, (Optr)PSend11331, (Optr)&t_method_return);
    Method PMethod11324 = new_Method_with(PArray11325, PArray11326, empty_Array, PThreadedCode11327, 3, PAssign11328, PSend11330, PSend11331);
    
    MethodClosure MC_SMB_openConnectionToHost_port_ = new_MethodClosure((Method)PMethod11324, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHost_port_, MC_SMB_openConnectionToHost_port_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode11333 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod11332 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11333, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod11332, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_socket_0_0 = new_Variable_named(L"socket", 0);
    Array PArray11335 = new_Array_with(1, (Optr)VAR_socket_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11337 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    // socket:. 
    Send PSend11338 = new_Send((Optr)PSend11337, SMB_socket_, 1, (Optr)VAR_socket_0_0);
    Array PThreadedCode11336 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11337, (Optr)&t_push_variable, (Optr)VAR_socket_0_0, (Optr)&t_send1, (Optr)PSend11338, (Optr)&t_method_return);
    Method PMethod11334 = new_Method_with(PArray11335, empty_Array, empty_Array, PThreadedCode11336, 1, PSend11338);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod11334, HEADER(IO_SocketStream_Class));
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