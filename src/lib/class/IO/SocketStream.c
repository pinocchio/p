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
    Array PArray10354 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10356 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10355 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10356, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10353 = new_Method_with(PArray10354, empty_Array, empty_Array, PThreadedCode10355, 2, PAssign10356, self);
    
    MethodClosure MC_SMB_shouldSignal_ = new_MethodClosure((Method)PMethod10353, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal_, MC_SMB_shouldSignal_);
}


static void init_SMB_binary() {
    Symbol SMB_binary = new_Symbol(L"binary");
    Assign PAssign10359 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)true_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10360 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10358 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10359, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10357 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10358, 3, PAssign10359, PSend10360, self);
    
    MethodClosure MC_SMB_binary = new_MethodClosure((Method)PMethod10357, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_binary, MC_SMB_binary);
}


static void init_SMB_nextLine() {
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    // nextLineCrLf. 
    Send PSend10363 = new_Send((Optr)self, SMB_nextLineCrLf, 0);
    Array PThreadedCode10362 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10363, (Optr)&t_method_return);
    Method PMethod10361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10362, 1, PSend10363);
    
    MethodClosure MC_SMB_nextLine = new_MethodClosure((Method)PMethod10361, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLine, MC_SMB_nextLine);
}


static void init_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10366 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10367 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10366);
    Array PThreadedCode10365 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10366, (Optr)&t_send1, (Optr)PSend10367, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10364 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10365, 2, PSend10367, self);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod10364, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_crlf, MC_SMB_crlf);
}


static void init_SMB_noTimeout() {
    Symbol SMB_noTimeout = new_Symbol(L"noTimeout");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10370 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)int_0_Const);
    Array PThreadedCode10369 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign10370, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10368 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10369, 2, PAssign10370, self);
    
    MethodClosure MC_SMB_noTimeout = new_MethodClosure((Method)PMethod10368, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_noTimeout, MC_SMB_noTimeout);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    String string_10373 = new_String(L"SocketStream>>receiveData");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10373_Const = new_Constant((Optr)string_10373);
    // warn:. 
    Send PSend10374 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10373_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_10379 = new_String(L"SocketStream>>receiveData: should signal");
    Constant string_10379_Const = new_Constant((Optr)string_10379);
    // warn:. 
    Send PSend10380 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10379_Const);
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    // shouldTimeout. 
    Send PSend10381 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10385 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10385_Const = new_Constant((Optr)string_10385);
    // warn:. 
    Send PSend10386 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10385_Const);
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    // receiveDataSignallingTimeout:into:startingAt:. 
    Send PSend10387 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10384 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10385, (Optr)&t_send1, (Optr)PSend10386, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10387, (Optr)&t_block_return);
    Block PBlock10383 = new_Block_with(empty_Array, empty_Array, PThreadedCode10384, 2, PSend10386, PSend10387);
    String string_10390 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10390_Const = new_Constant((Optr)string_10390);
    // warn:. 
    Send PSend10391 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10390_Const);
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    // receiveDataSignallingClosedInto:startingAt:. 
    Send PSend10392 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingClosedInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10389 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10390, (Optr)&t_send1, (Optr)PSend10391, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10392, (Optr)&t_block_return);
    Block PBlock10388 = new_Block_with(empty_Array, empty_Array, PThreadedCode10389, 2, PSend10391, PSend10392);
    // ifTrue:ifFalse:. 
    Send PSend10382 = new_Send((Optr)PSend10381, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10383, (Optr)PBlock10388);
    Array PThreadedCode10378 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10379, (Optr)&t_send1, (Optr)PSend10380, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10381, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10382, (Optr)PBlock10383, (Optr)PBlock10388, (Optr)&t_block_return);
    Block PBlock10377 = new_Block_with(empty_Array, empty_Array, PThreadedCode10378, 2, PSend10380, PSend10382);
    String string_10395 = new_String(L"SocketStream>>receiveData: should NOT signal");
    Constant string_10395_Const = new_Constant((Optr)string_10395);
    // warn:. 
    Send PSend10396 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10395_Const);
    // shouldTimeout. 
    Send PSend10397 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10401 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10401_Const = new_Constant((Optr)string_10401);
    // warn:. 
    Send PSend10402 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10401_Const);
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    // receiveDataTimeout:into:startingAt:. 
    Send PSend10403 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10400 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10401, (Optr)&t_send1, (Optr)PSend10402, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10403, (Optr)&t_block_return);
    Block PBlock10399 = new_Block_with(empty_Array, empty_Array, PThreadedCode10400, 2, PSend10402, PSend10403);
    String string_10406 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10406_Const = new_Constant((Optr)string_10406);
    // warn:. 
    Send PSend10407 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10406_Const);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10408 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10405 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10406, (Optr)&t_send1, (Optr)PSend10407, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10408, (Optr)&t_block_return);
    Block PBlock10404 = new_Block_with(empty_Array, empty_Array, PThreadedCode10405, 2, PSend10407, PSend10408);
    // ifTrue:ifFalse:. 
    Send PSend10398 = new_Send((Optr)PSend10397, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10399, (Optr)PBlock10404);
    Array PThreadedCode10394 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10395, (Optr)&t_send1, (Optr)PSend10396, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10397, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10398, (Optr)PBlock10399, (Optr)PBlock10404, (Optr)&t_block_return);
    Block PBlock10393 = new_Block_with(empty_Array, empty_Array, PThreadedCode10394, 2, PSend10396, PSend10398);
    // ifTrue:ifFalse:. 
    Send PSend10376 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10377, (Optr)PBlock10393);
    Assign PAssign10375 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10376);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10409 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10372 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10373, (Optr)&t_send1, (Optr)PSend10374, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10375, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10376, (Optr)PBlock10377, (Optr)PBlock10393, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10409, (Optr)&t_method_return);
    Method PMethod10371 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10372, 3, PSend10374, PAssign10375, PSend10409);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod10371, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_isBinary() {
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    Array PThreadedCode10411 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_method_return);
    Method PMethod10410 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10411, 1, slot_IO_SocketStream_binary);
    
    MethodClosure MC_SMB_isBinary = new_MethodClosure((Method)PMethod10410, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isBinary, MC_SMB_isBinary);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper10414 = new_Super(SMB_initialize, 0);
    Assign PAssign10415 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)true_Const);
    Assign PAssign10416 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)true_Const);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10417 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)int_0_Const);
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    Assign PAssign10418 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)int_4096_Const);
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend10419 = new_Send((Optr)self, SMB_ascii, 0);
    Array PThreadedCode10413 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper10414, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10415, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10416, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10417, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10418, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10412 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10413, 7, PSuper10414, PAssign10415, PAssign10416, PAssign10417, PAssign10418, PSend10419, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10412, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_peekFor_() {
    Symbol SMB_peekFor_ = new_Symbol(L"peekFor:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray10421 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_nextObject_0_1 = new_Variable_named(L"nextObject", 0);
    Array PArray10422 = new_Array_with(1, (Optr)VAR_nextObject_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10425 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10427 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10431 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10430 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10431, (Optr)&t_block_return);
    Block PBlock10429 = new_Block_with(empty_Array, empty_Array, PThreadedCode10430, 1, PSend10431);
    // ifTrue:. 
    Send PSend10428 = new_Send((Optr)PSend10427, SMB_ifTrue_, 1, (Optr)PBlock10429);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10432 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10436 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10437 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10441 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10440 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10441, (Optr)&t_block_return);
    Block PBlock10439 = new_Block_with(empty_Array, empty_Array, PThreadedCode10440, 1, PSend10441);
    // ifTrue:. 
    Send PSend10438 = new_Send((Optr)PSend10437, SMB_ifTrue_, 1, (Optr)PBlock10439);
    Array PThreadedCode10435 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10436, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10437, (Optr)&t_send_ifTrue_, (Optr)PSend10438, (Optr)PBlock10439, (Optr)&t_block_return);
    Block PBlock10434 = new_Block_with(empty_Array, empty_Array, PThreadedCode10435, 2, PSend10436, PSend10438);
    // ifTrue:. 
    Send PSend10433 = new_Send((Optr)PSend10432, SMB_ifTrue_, 1, (Optr)PBlock10434);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10443 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Assign PAssign10442 = new_Assign((Optr)VAR_nextObject_0_1, (Optr)PSend10443);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10444 = new_Send((Optr)VAR_nextObject_0_1, SMB__equals_, 1, (Optr)VAR_aCharacterOrByte_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10449 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10448 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10449);
    // escape:. 
    Send PSend10450 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10447 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10448, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10449, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10450, (Optr)&t_block_return);
    Block PBlock10446 = new_Block_with(empty_Array, empty_Array, PThreadedCode10447, 2, PAssign10448, PSend10450);
    // ifTrue:. 
    Send PSend10445 = new_Send((Optr)PSend10444, SMB_ifTrue_, 1, (Optr)PBlock10446);
    Array PThreadedCode10426 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10427, (Optr)&t_send_ifTrue_, (Optr)PSend10428, (Optr)PBlock10429, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10432, (Optr)&t_send_ifTrue_, (Optr)PSend10433, (Optr)PBlock10434, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10442, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10443, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_send1, (Optr)PSend10444, (Optr)&t_send_ifTrue_, (Optr)PSend10445, (Optr)PBlock10446, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock10424 = new_Block_with(PArray10425, empty_Array, PThreadedCode10426, 5, PSend10428, PSend10433, PAssign10442, PSend10445, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10451 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10424);
    Array PThreadedCode10423 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10424, (Optr)&t_send1, (Optr)PSend10451, (Optr)&t_method_return);
    Method PMethod10420 = new_Method_with(PArray10421, PArray10422, empty_Array, PThreadedCode10423, 1, PSend10451);
    
    MethodClosure MC_SMB_peekFor_ = new_MethodClosure((Method)PMethod10420, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekFor_, MC_SMB_peekFor_);
}


static void init_SMB_peekForAll_() {
    Symbol SMB_peekForAll_ = new_Symbol(L"peekForAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10453 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_sz_0_1 = new_Variable_named(L"sz", 0);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray10454 = new_Array_with(2, (Optr)VAR_sz_0_1, (Optr)VAR_start_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10457 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10460 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Assign PAssign10459 = new_Assign((Optr)VAR_sz_0_1, (Optr)PSend10460);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10461 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10462 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10463 = new_Send((Optr)PSend10462, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend10464 = new_Send((Optr)PSend10463, SMB__lt_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10468 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10467 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10468, (Optr)&t_block_return);
    Block PBlock10466 = new_Block_with(empty_Array, empty_Array, PThreadedCode10467, 1, PSend10468);
    // ifTrue:. 
    Send PSend10465 = new_Send((Optr)PSend10464, SMB_ifTrue_, 1, (Optr)PBlock10466);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10470 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10469 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend10470);
    Symbol SMB_findString_startingAt_ = new_Symbol(L"findString:startingAt:");
    // findString:startingAt:. 
    Send PSend10471 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_findString_startingAt_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_start_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10472 = new_Send((Optr)PSend10471, SMB__equals_, 1, (Optr)VAR_start_0_2);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend10476 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10475 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10476, (Optr)&t_block_return);
    Block PBlock10474 = new_Block_with(empty_Array, empty_Array, PThreadedCode10475, 1, PSend10476);
    // ifFalse:. 
    Send PSend10473 = new_Send((Optr)PSend10472, SMB_ifFalse_, 1, (Optr)PBlock10474);
    // +. 
    Send PSend10478 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_sz_0_1);
    Assign PAssign10477 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10478);
    Array PThreadedCode10458 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign10459, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend10460, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10461, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10462, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10463, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10464, (Optr)&t_send_ifTrue_, (Optr)PSend10465, (Optr)PBlock10466, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10469, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10470, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send2, (Optr)PSend10471, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send1, (Optr)PSend10472, (Optr)&t_send_ifFalse_, (Optr)PSend10473, (Optr)PBlock10474, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10477, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10478, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock10456 = new_Block_with(PArray10457, empty_Array, PThreadedCode10458, 7, PAssign10459, PSend10461, PSend10465, PAssign10469, PSend10473, PAssign10477, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10479 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10456);
    Array PThreadedCode10455 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10456, (Optr)&t_send1, (Optr)PSend10479, (Optr)&t_method_return);
    Method PMethod10452 = new_Method_with(PArray10453, PArray10454, empty_Array, PThreadedCode10455, 1, PSend10479);
    
    MethodClosure MC_SMB_peekForAll_ = new_MethodClosure((Method)PMethod10452, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekForAll_, MC_SMB_peekForAll_);
}


static void init_SMB_receiveAvailableData() {
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10483 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10482 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10483);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10484 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10481 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10482, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10483, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10484, (Optr)&t_method_return);
    Method PMethod10480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10481, 2, PAssign10482, PSend10484);
    
    MethodClosure MC_SMB_receiveAvailableData = new_MethodClosure((Method)PMethod10480, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveAvailableData, MC_SMB_receiveAvailableData);
}


static void init_SMB_autoFlush_() {
    Symbol SMB_autoFlush_ = new_Symbol(L"autoFlush:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10486 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10488 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10487 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10488, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10485 = new_Method_with(PArray10486, empty_Array, empty_Array, PThreadedCode10487, 2, PAssign10488, self);
    
    MethodClosure MC_SMB_autoFlush_ = new_MethodClosure((Method)PMethod10485, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush_, MC_SMB_autoFlush_);
}


static void init_SMB_nextLineCrLf() {
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10491 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend10492 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend10491);
    Array PThreadedCode10490 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10491, (Optr)&t_send1, (Optr)PSend10492, (Optr)&t_method_return);
    Method PMethod10489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10490, 1, PSend10492);
    
    MethodClosure MC_SMB_nextLineCrLf = new_MethodClosure((Method)PMethod10489, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineCrLf, MC_SMB_nextLineCrLf);
}


static void init_SMB_isStream() {
    Symbol SMB_isStream = new_Symbol(L"isStream");
    Array PThreadedCode10494 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod10493 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10494, 1, true_Const);
    
    MethodClosure MC_SMB_isStream = new_MethodClosure((Method)PMethod10493, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isStream, MC_SMB_isStream);
}


static void init_SMB_receiveData_() {
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    Variable VAR_nBytes_0_0 = new_Variable_named(L"nBytes", 0);
    Array PArray10496 = new_Array_with(1, (Optr)VAR_nBytes_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10500 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10501 = new_Send((Optr)PSend10500, SMB_not, 0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10504 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10505 = new_Send((Optr)VAR_nBytes_0_0, SMB__gt_, 1, (Optr)PSend10504);
    Array PThreadedCode10503 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_nBytes_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10504, (Optr)&t_send1, (Optr)PSend10505, (Optr)&t_block_return);
    Block PBlock10502 = new_Block_with(empty_Array, empty_Array, PThreadedCode10503, 1, PSend10505);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10506 = new_Send((Optr)PSend10501, SMB_and_, 1, (Optr)PBlock10502);
    Array PThreadedCode10499 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10500, (Optr)&t_send0, (Optr)PSend10501, (Optr)&t_push_closure, (Optr)PBlock10502, (Optr)&t_send1, (Optr)PSend10506, (Optr)&t_block_return);
    Block PBlock10498 = new_Block_with(empty_Array, empty_Array, PThreadedCode10499, 1, PSend10506);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10509 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10508 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10509, (Optr)&t_block_return);
    Block PBlock10507 = new_Block_with(empty_Array, empty_Array, PThreadedCode10508, 1, PSend10509);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10510 = new_Send((Optr)PBlock10498, SMB_whileTrue_, 1, (Optr)PBlock10507);
    Array PThreadedCode10497 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock10498, (Optr)&t_push_closure, (Optr)PBlock10507, (Optr)&t_send1, (Optr)PSend10510, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10495 = new_Method_with(PArray10496, empty_Array, empty_Array, PThreadedCode10497, 2, PSend10510, self);
    
    MethodClosure MC_SMB_receiveData_ = new_MethodClosure((Method)PMethod10495, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData_, MC_SMB_receiveData_);
}


static void init_SMB_streamBuffer_() {
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray10512 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend10514 = new_Send((Optr)self, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode10517 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ByteArray_classReference, (Optr)&t_block_return);
    Block PBlock10516 = new_Block_with(empty_Array, empty_Array, PThreadedCode10517, 1, ByteArray_classReference);
    Array PThreadedCode10519 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_block_return);
    Block PBlock10518 = new_Block_with(empty_Array, empty_Array, PThreadedCode10519, 1, String_classReference);
    // ifTrue:ifFalse:. 
    Send PSend10515 = new_Send((Optr)PSend10514, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10516, (Optr)PBlock10518);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend10520 = new_Send((Optr)PSend10515, SMB_new_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode10513 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10514, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10515, (Optr)PBlock10516, (Optr)PBlock10518, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend10520, (Optr)&t_method_return);
    Method PMethod10511 = new_Method_with(PArray10512, empty_Array, empty_Array, PThreadedCode10513, 1, PSend10520);
    
    MethodClosure MC_SMB_streamBuffer_ = new_MethodClosure((Method)PMethod10511, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_streamBuffer_, MC_SMB_streamBuffer_);
}


static void init_SMB_socket_() {
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray10522 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Assign PAssign10524 = new_Assign((Optr)slot_IO_SocketStream_socket, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode10523 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10524, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10521 = new_Method_with(PArray10522, empty_Array, empty_Array, PThreadedCode10523, 2, PAssign10524, self);
    
    MethodClosure MC_SMB_socket_ = new_MethodClosure((Method)PMethod10521, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket_, MC_SMB_socket_);
}


static void init_SMB_ascii() {
    Symbol SMB_ascii = new_Symbol(L"ascii");
    Assign PAssign10527 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)false_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10528 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10526 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10527, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10528, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10525 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10526, 3, PAssign10527, PSend10528, self);
    
    MethodClosure MC_SMB_ascii = new_MethodClosure((Method)PMethod10525, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ascii, MC_SMB_ascii);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray10530 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Assign PAssign10532 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)VAR_seconds_0_0);
    Array PThreadedCode10531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10532, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10529 = new_Method_with(PArray10530, empty_Array, empty_Array, PThreadedCode10531, 2, PAssign10532, self);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod10529, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_shouldTimeout() {
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend10535 = new_Send((Optr)self, SMB_timeout, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10536 = new_Send((Optr)PSend10535, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode10534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10535, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10536, (Optr)&t_method_return);
    Method PMethod10533 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10534, 1, PSend10536);
    
    MethodClosure MC_SMB_shouldTimeout = new_MethodClosure((Method)PMethod10533, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldTimeout, MC_SMB_shouldTimeout);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10540 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10542 = new_String(L"SocketStream>>peek");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10542_Const = new_Constant((Optr)string_10542);
    // warn:. 
    Send PSend10543 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10542_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10544 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10548 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10547 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10548, (Optr)&t_block_return);
    Block PBlock10546 = new_Block_with(empty_Array, empty_Array, PThreadedCode10547, 1, PSend10548);
    // ifTrue:. 
    Send PSend10545 = new_Send((Optr)PSend10544, SMB_ifTrue_, 1, (Optr)PBlock10546);
    String string_10549 = new_String(L"SocketStream>>peek: not at end");
    Constant string_10549_Const = new_Constant((Optr)string_10549);
    // warn:. 
    Send PSend10550 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10549_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10551 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    String string_10555 = new_String(L"SocketStream>>peek: in buffer is empty");
    Constant string_10555_Const = new_Constant((Optr)string_10555);
    // warn:. 
    Send PSend10556 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10555_Const);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10557 = new_Send((Optr)self, SMB_receiveData, 0);
    String string_10558 = new_String(L"SocketStream>>peek: recevied data");
    Constant string_10558_Const = new_Constant((Optr)string_10558);
    // warn:. 
    Send PSend10559 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10558_Const);
    // atEnd. 
    Send PSend10560 = new_Send((Optr)self, SMB_atEnd, 0);
    String string_10564 = new_String(L"SocketStream>>peek: at end");
    Constant string_10564_Const = new_Constant((Optr)string_10564);
    // warn:. 
    Send PSend10565 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10564_Const);
    // escape:. 
    Send PSend10566 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10563 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10564, (Optr)&t_send1, (Optr)PSend10565, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10566, (Optr)&t_block_return);
    Block PBlock10562 = new_Block_with(empty_Array, empty_Array, PThreadedCode10563, 2, PSend10565, PSend10566);
    // ifTrue:. 
    Send PSend10561 = new_Send((Optr)PSend10560, SMB_ifTrue_, 1, (Optr)PBlock10562);
    Array PThreadedCode10554 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10555, (Optr)&t_send1, (Optr)PSend10556, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10557, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10558, (Optr)&t_send1, (Optr)PSend10559, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10560, (Optr)&t_send_ifTrue_, (Optr)PSend10561, (Optr)PBlock10562, (Optr)&t_block_return);
    Block PBlock10553 = new_Block_with(empty_Array, empty_Array, PThreadedCode10554, 4, PSend10556, PSend10557, PSend10559, PSend10561);
    // ifTrue:. 
    Send PSend10552 = new_Send((Optr)PSend10551, SMB_ifTrue_, 1, (Optr)PBlock10553);
    String string_10567 = new_String(L"SocketStream>>peek: return...");
    Constant string_10567_Const = new_Constant((Optr)string_10567);
    // warn:. 
    Send PSend10568 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10567_Const);
    String string_10569 = new_String(L"SocketStream>>peek: in buffer is");
    Constant string_10569_Const = new_Constant((Optr)string_10569);
    // warn:. 
    Send PSend10570 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10569_Const);
    // warn:. 
    Send PSend10571 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    String string_10572 = new_String(L"SocketStream>>peek: last read is");
    Constant string_10572_Const = new_Constant((Optr)string_10572);
    // warn:. 
    Send PSend10573 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10572_Const);
    // warn:. 
    Send PSend10574 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10575 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10576 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)PSend10575);
    Array PThreadedCode10541 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10542, (Optr)&t_send1, (Optr)PSend10543, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10544, (Optr)&t_send_ifTrue_, (Optr)PSend10545, (Optr)PBlock10546, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10549, (Optr)&t_send1, (Optr)PSend10550, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10551, (Optr)&t_send_ifTrue_, (Optr)PSend10552, (Optr)PBlock10553, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10567, (Optr)&t_send1, (Optr)PSend10568, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10569, (Optr)&t_send1, (Optr)PSend10570, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend10571, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10572, (Optr)&t_send1, (Optr)PSend10573, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10574, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10575, (Optr)&t_send1, (Optr)PSend10576, (Optr)&t_method_return);
    Block PBlock10539 = new_Block_with(PArray10540, empty_Array, PThreadedCode10541, 10, PSend10543, PSend10545, PSend10550, PSend10552, PSend10568, PSend10570, PSend10571, PSend10573, PSend10574, PSend10576);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10577 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10539);
    Array PThreadedCode10538 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10539, (Optr)&t_send1, (Optr)PSend10577, (Optr)&t_method_return);
    Method PMethod10537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10538, 1, PSend10577);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod10537, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_shouldSignal() {
    Symbol SMB_shouldSignal = new_Symbol(L"shouldSignal");
    Array PThreadedCode10579 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_method_return);
    Method PMethod10578 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10579, 1, slot_IO_SocketStream_shouldSignal);
    
    MethodClosure MC_SMB_shouldSignal = new_MethodClosure((Method)PMethod10578, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal, MC_SMB_shouldSignal);
}


static void init_SMB_bufferSize() {
    Symbol SMB_bufferSize = new_Symbol(L"bufferSize");
    Array PThreadedCode10581 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_method_return);
    Method PMethod10580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10581, 1, slot_IO_SocketStream_bufferSize);
    
    MethodClosure MC_SMB_bufferSize = new_MethodClosure((Method)PMethod10580, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize, MC_SMB_bufferSize);
}


static void init_SMB_nextPutAllFlush_() {
    Symbol SMB_nextPutAllFlush_ = new_Symbol(L"nextPutAllFlush:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10583 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10584 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10590 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10589 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10590, (Optr)&t_block_return);
    Block PBlock10588 = new_Block_with(empty_Array, empty_Array, PThreadedCode10589, 1, PSend10590);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10593 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10592 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10593, (Optr)&t_block_return);
    Block PBlock10591 = new_Block_with(empty_Array, empty_Array, PThreadedCode10592, 1, PSend10593);
    // ifTrue:ifFalse:. 
    Send PSend10587 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10588, (Optr)PBlock10591);
    Assign PAssign10586 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10587);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10594 = new_Send((Optr)self, SMB_flush, 0);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend10595 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10601 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend10602 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)VAR_toPut_0_1, (Optr)PSend10601);
    Array PThreadedCode10600 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10601, (Optr)&t_send2, (Optr)PSend10602, (Optr)&t_block_return);
    Block PBlock10599 = new_Block_with(empty_Array, empty_Array, PThreadedCode10600, 1, PSend10602);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray10604 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode10608 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock10607 = new_Block_with(empty_Array, empty_Array, PThreadedCode10608, 0);
    // ifFalse:. 
    Send PSend10606 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock10607);
    Array PThreadedCode10605 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend10606, (Optr)PBlock10607, (Optr)&t_method_return);
    Block PBlock10603 = new_Block_with(PArray10604, empty_Array, PThreadedCode10605, 1, PSend10606);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10609 = new_Send((Optr)PBlock10599, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock10603);
    Array PThreadedCode10598 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock10599, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock10603, (Optr)&t_send2, (Optr)PSend10609, (Optr)&t_block_return);
    Block PBlock10597 = new_Block_with(empty_Array, empty_Array, PThreadedCode10598, 1, PSend10609);
    // ifFalse:. 
    Send PSend10596 = new_Send((Optr)PSend10595, SMB_ifFalse_, 1, (Optr)PBlock10597);
    Array PThreadedCode10585 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign10586, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10587, (Optr)PBlock10588, (Optr)PBlock10591, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10594, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10595, (Optr)&t_send_ifFalse_, (Optr)PSend10596, (Optr)PBlock10597, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10582 = new_Method_with(PArray10583, PArray10584, empty_Array, PThreadedCode10585, 4, PAssign10586, PSend10594, PSend10596, self);
    
    MethodClosure MC_SMB_nextPutAllFlush_ = new_MethodClosure((Method)PMethod10582, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAllFlush_, MC_SMB_nextPutAllFlush_);
}


static void init_SMB_outBufferSize() {
    Symbol SMB_outBufferSize = new_Symbol(L"outBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10612 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10611 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10612, (Optr)&t_method_return);
    Method PMethod10610 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10611, 1, PSend10612);
    
    MethodClosure MC_SMB_outBufferSize = new_MethodClosure((Method)PMethod10610, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_outBufferSize, MC_SMB_outBufferSize);
}


static void init_SMB_sendCommand_() {
    Symbol SMB_sendCommand_ = new_Symbol(L"sendCommand:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10614 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray10617 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10619 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10620 = new_Send((Optr)VAR_aString_0_0, SMB__append_, 1, (Optr)PSend10619);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10621 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)PSend10620);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10622 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Array PThreadedCode10618 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10619, (Optr)&t_send1, (Optr)PSend10620, (Optr)&t_send1, (Optr)PSend10621, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend10622, (Optr)&t_method_return);
    Block PBlock10616 = new_Block_with(PArray10617, empty_Array, PThreadedCode10618, 2, PSend10621, PSend10622);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10623 = new_Send((Optr)PBlock10616, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock10616, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10623, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10613 = new_Method_with(PArray10614, empty_Array, empty_Array, PThreadedCode10615, 2, PSend10623, self);
    
    MethodClosure MC_SMB_sendCommand_ = new_MethodClosure((Method)PMethod10613, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_sendCommand_, MC_SMB_sendCommand_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10626 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10629 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10630 = new_Send((Optr)PSend10629, SMB_not, 0);
    Array PThreadedCode10628 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10629, (Optr)&t_send0, (Optr)PSend10630, (Optr)&t_block_return);
    Block PBlock10627 = new_Block_with(empty_Array, empty_Array, PThreadedCode10628, 1, PSend10630);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10631 = new_Send((Optr)PSend10626, SMB_and_, 1, (Optr)PBlock10627);
    Array PThreadedCode10625 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10626, (Optr)&t_push_closure, (Optr)PBlock10627, (Optr)&t_send1, (Optr)PSend10631, (Optr)&t_method_return);
    Method PMethod10624 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10625, 1, PSend10631);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod10624, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_checkFlush() {
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10636 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Array PThreadedCode10635 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend10636, (Optr)&t_block_return);
    Block PBlock10634 = new_Block_with(empty_Array, empty_Array, PThreadedCode10635, 1, PSend10636);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10637 = new_Send((Optr)slot_IO_SocketStream_autoFlush, SMB_and_, 1, (Optr)PBlock10634);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10641 = new_Send((Optr)self, SMB_flush, 0);
    Array PThreadedCode10640 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10641, (Optr)&t_block_return);
    Block PBlock10639 = new_Block_with(empty_Array, empty_Array, PThreadedCode10640, 1, PSend10641);
    // ifTrue:. 
    Send PSend10638 = new_Send((Optr)PSend10637, SMB_ifTrue_, 1, (Optr)PBlock10639);
    Array PThreadedCode10633 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_push_closure, (Optr)PBlock10634, (Optr)&t_send1, (Optr)PSend10637, (Optr)&t_send_ifTrue_, (Optr)PSend10638, (Optr)PBlock10639, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10633, 2, PSend10638, self);
    
    MethodClosure MC_SMB_checkFlush = new_MethodClosure((Method)PMethod10632, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_checkFlush, MC_SMB_checkFlush);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10643 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10644 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10646 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10648 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10647 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10648);
    // +. 
    Send PSend10651 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10652 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10650 = new_Send((Optr)PSend10651, SMB_min_, 1, (Optr)PSend10652);
    Assign PAssign10649 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10650);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10653 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10645 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10646, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10647, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10648, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10649, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10651, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10652, (Optr)&t_send1, (Optr)PSend10650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend10653, (Optr)&t_method_return);
    Method PMethod10642 = new_Method_with(PArray10643, PArray10644, empty_Array, PThreadedCode10645, 4, PSend10646, PAssign10647, PAssign10649, PSend10653);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod10642, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_socket() {
    Symbol SMB_socket = new_Symbol(L"socket");
    Array PThreadedCode10655 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_method_return);
    Method PMethod10654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10655, 1, slot_IO_SocketStream_socket);
    
    MethodClosure MC_SMB_socket = new_MethodClosure((Method)PMethod10654, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket, MC_SMB_socket);
}


static void init_SMB_adjustInBuffer_() {
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    Variable VAR_bytesRead_0_0 = new_Variable_named(L"bytesRead", 0);
    Array PArray10657 = new_Array_with(1, (Optr)VAR_bytesRead_0_0);
    Variable VAR_old_0_1 = new_Variable_named(L"old", 0);
    Array PArray10658 = new_Array_with(1, (Optr)VAR_old_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10661 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10663 = new_String(L"SocketStream>>adjustInBuffer:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10663_Const = new_Constant((Optr)string_10663);
    // warn:. 
    Send PSend10664 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10663_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10665 = new_Send((Optr)VAR_bytesRead_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10669 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10668 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10669, (Optr)&t_block_return);
    Block PBlock10667 = new_Block_with(empty_Array, empty_Array, PThreadedCode10668, 1, PSend10669);
    // ifTrue:. 
    Send PSend10666 = new_Send((Optr)PSend10665, SMB_ifTrue_, 1, (Optr)PBlock10667);
    Assign PAssign10670 = new_Assign((Optr)VAR_old_0_1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10672 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__plus_, 1, (Optr)VAR_bytesRead_0_0);
    Assign PAssign10671 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10672);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10673 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10674 = new_Send((Optr)PSend10673, SMB__minus_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10675 = new_Send((Optr)PSend10674, SMB__lt_, 1, (Optr)int_1024_Const);
    SmallInt int_512 = new_SmallInt(512);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_512_Const = new_Constant((Optr)int_512);
    // >. 
    Send PSend10679 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__gt_, 1, (Optr)int_512_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    // moveInBufferDown. 
    Send PSend10683 = new_Send((Optr)self, SMB_moveInBufferDown, 0);
    // -. 
    Send PSend10684 = new_Send((Optr)VAR_old_0_1, SMB__minus_, 1, (Optr)PSend10683);
    // escape:. 
    Send PSend10685 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10684);
    Array PThreadedCode10682 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10683, (Optr)&t_send1, (Optr)PSend10684, (Optr)&t_send1, (Optr)PSend10685, (Optr)&t_block_return);
    Block PBlock10681 = new_Block_with(empty_Array, empty_Array, PThreadedCode10682, 1, PSend10685);
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    // growInBuffer. 
    Send PSend10688 = new_Send((Optr)self, SMB_growInBuffer, 0);
    Array PThreadedCode10687 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10688, (Optr)&t_block_return);
    Block PBlock10686 = new_Block_with(empty_Array, empty_Array, PThreadedCode10687, 1, PSend10688);
    // ifTrue:ifFalse:. 
    Send PSend10680 = new_Send((Optr)PSend10679, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10681, (Optr)PBlock10686);
    Array PThreadedCode10678 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push1, (Optr)int_512, (Optr)&t_send1, (Optr)PSend10679, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10680, (Optr)PBlock10681, (Optr)PBlock10686, (Optr)&t_block_return);
    Block PBlock10677 = new_Block_with(empty_Array, empty_Array, PThreadedCode10678, 1, PSend10680);
    // ifTrue:. 
    Send PSend10676 = new_Send((Optr)PSend10675, SMB_ifTrue_, 1, (Optr)PBlock10677);
    Array PThreadedCode10662 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10663, (Optr)&t_send1, (Optr)PSend10664, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10665, (Optr)&t_send_ifTrue_, (Optr)PSend10666, (Optr)PBlock10667, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10670, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10671, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_send1, (Optr)PSend10672, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10673, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10674, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10675, (Optr)&t_send_ifTrue_, (Optr)PSend10676, (Optr)PBlock10677, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_method_return);
    Block PBlock10660 = new_Block_with(PArray10661, empty_Array, PThreadedCode10662, 6, PSend10664, PSend10666, PAssign10670, PAssign10671, PSend10676, VAR_old_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10689 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10660);
    Array PThreadedCode10659 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10660, (Optr)&t_send1, (Optr)PSend10689, (Optr)&t_method_return);
    Method PMethod10656 = new_Method_with(PArray10657, PArray10658, empty_Array, PThreadedCode10659, 1, PSend10689);
    
    MethodClosure MC_SMB_adjustInBuffer_ = new_MethodClosure((Method)PMethod10656, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustInBuffer_, MC_SMB_adjustInBuffer_);
}


static void init_SMB_ifStale_() {
    Symbol SMB_ifStale_ = new_Symbol(L"ifStale:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray10691 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10693 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend10697 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode10696 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend10697, (Optr)&t_block_return);
    Block PBlock10695 = new_Block_with(empty_Array, empty_Array, PThreadedCode10696, 1, PSend10697);
    // ifFalse:. 
    Send PSend10694 = new_Send((Optr)PSend10693, SMB_ifFalse_, 1, (Optr)PBlock10695);
    Array PThreadedCode10692 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10693, (Optr)&t_send_ifFalse_, (Optr)PSend10694, (Optr)PBlock10695, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10690 = new_Method_with(PArray10691, empty_Array, empty_Array, PThreadedCode10692, 2, PSend10694, self);
    
    MethodClosure MC_SMB_ifStale_ = new_MethodClosure((Method)PMethod10690, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ifStale_, MC_SMB_ifStale_);
}


static void init_SMB_nextAvailable() {
    Symbol SMB_nextAvailable = new_Symbol(L"nextAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10701 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10703 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10707 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10708 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10707);
    Array PThreadedCode10706 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10707, (Optr)&t_send1, (Optr)PSend10708, (Optr)&t_block_return);
    Block PBlock10705 = new_Block_with(empty_Array, empty_Array, PThreadedCode10706, 1, PSend10708);
    // ifFalse:. 
    Send PSend10704 = new_Send((Optr)PSend10703, SMB_ifFalse_, 1, (Optr)PBlock10705);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10709 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10713 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10712 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10713, (Optr)&t_block_return);
    Block PBlock10711 = new_Block_with(empty_Array, empty_Array, PThreadedCode10712, 1, PSend10713);
    // ifTrue:. 
    Send PSend10710 = new_Send((Optr)PSend10709, SMB_ifTrue_, 1, (Optr)PBlock10711);
    // nextAllInBuffer. 
    Send PSend10714 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode10702 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10703, (Optr)&t_send_ifFalse_, (Optr)PSend10704, (Optr)PBlock10705, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10709, (Optr)&t_send_ifTrue_, (Optr)PSend10710, (Optr)PBlock10711, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10714, (Optr)&t_method_return);
    Block PBlock10700 = new_Block_with(PArray10701, empty_Array, PThreadedCode10702, 3, PSend10704, PSend10710, PSend10714);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10715 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10700);
    Array PThreadedCode10699 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10700, (Optr)&t_send1, (Optr)PSend10715, (Optr)&t_method_return);
    Method PMethod10698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10699, 1, PSend10715);
    
    MethodClosure MC_SMB_nextAvailable = new_MethodClosure((Method)PMethod10698, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable, MC_SMB_nextAvailable);
}


static void init_SMB_resizeInBuffer_() {
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    Variable VAR_newSize_0_0 = new_Variable_named(L"newSize", 0);
    Array PArray10717 = new_Array_with(1, (Optr)VAR_newSize_0_0);
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend10721 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)VAR_newSize_0_0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10722 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10720 = new_Send((Optr)PSend10721, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10722, (Optr)slot_IO_SocketStream_inBuffer, (Optr)int_1_Const);
    Assign PAssign10719 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend10720);
    Array PThreadedCode10718 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign10719, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newSize_0_0, (Optr)&t_send1, (Optr)PSend10721, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10722, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10720, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10716 = new_Method_with(PArray10717, empty_Array, empty_Array, PThreadedCode10718, 2, PAssign10719, self);
    
    MethodClosure MC_SMB_resizeInBuffer_ = new_MethodClosure((Method)PMethod10716, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resizeInBuffer_, MC_SMB_resizeInBuffer_);
}


static void init_SMB_bufferSize_() {
    Symbol SMB_bufferSize_ = new_Symbol(L"bufferSize:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray10724 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign10726 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)VAR_anInt_0_0);
    Array PThreadedCode10725 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10726, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10723 = new_Method_with(PArray10724, empty_Array, empty_Array, PThreadedCode10725, 2, PAssign10726, self);
    
    MethodClosure MC_SMB_bufferSize_ = new_MethodClosure((Method)PMethod10723, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize_, MC_SMB_bufferSize_);
}


static void init_SMB_isDataAvailable() {
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10730 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10732 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10736 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10735 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10736, (Optr)&t_block_return);
    Block PBlock10734 = new_Block_with(empty_Array, empty_Array, PThreadedCode10735, 1, PSend10736);
    // ifFalse:. 
    Send PSend10733 = new_Send((Optr)PSend10732, SMB_ifFalse_, 1, (Optr)PBlock10734);
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    // dataAvailable. 
    Send PSend10737 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_dataAvailable, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Array PThreadedCode10740 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock10739 = new_Block_with(empty_Array, empty_Array, PThreadedCode10740, 1, false_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray10744 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10746 = new_Send((Optr)VAR__receiver__2_0, SMB_receiveDataIfAvailable, 0);
    // isDataAvailable. 
    Send PSend10747 = new_Send((Optr)VAR__receiver__2_0, SMB_isDataAvailable, 0);
    Array PThreadedCode10745 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10746, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10747, (Optr)&t_method_return);
    Block PBlock10743 = new_Block_with(PArray10744, empty_Array, PThreadedCode10745, 2, PSend10746, PSend10747);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10748 = new_Send((Optr)PBlock10743, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10742 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock10743, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10748, (Optr)&t_block_return);
    Block PBlock10741 = new_Block_with(empty_Array, empty_Array, PThreadedCode10742, 1, PSend10748);
    // ifFalse:ifTrue:. 
    Send PSend10738 = new_Send((Optr)PSend10737, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock10739, (Optr)PBlock10741);
    Array PThreadedCode10731 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10732, (Optr)&t_send_ifFalse_, (Optr)PSend10733, (Optr)PBlock10734, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10737, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend10738, (Optr)PBlock10739, (Optr)PBlock10741, (Optr)&t_method_return);
    Block PBlock10729 = new_Block_with(PArray10730, empty_Array, PThreadedCode10731, 2, PSend10733, PSend10738);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10749 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10729);
    Array PThreadedCode10728 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10729, (Optr)&t_send1, (Optr)PSend10749, (Optr)&t_method_return);
    Method PMethod10727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10728, 1, PSend10749);
    
    MethodClosure MC_SMB_isDataAvailable = new_MethodClosure((Method)PMethod10727, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isDataAvailable, MC_SMB_isDataAvailable);
}


static void init_SMB_adjustOutBuffer_() {
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    Variable VAR_bytesToWrite_0_0 = new_Variable_named(L"bytesToWrite", 0);
    Array PArray10751 = new_Array_with(1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10753 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10754 = new_Send((Optr)PSend10753, SMB__minus_, 1, (Optr)slot_IO_SocketStream_outNextToWrite);
    // -. 
    Send PSend10755 = new_Send((Optr)PSend10754, SMB__minus_, 1, (Optr)VAR_bytesToWrite_0_0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10756 = new_Send((Optr)PSend10755, SMB__lt_, 1, (Optr)int_1024_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // size. 
    Send PSend10765 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend10764 = new_Send((Optr)PSend10765, SMB_max_, 1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10763 = new_Send((Optr)PSend10764, SMB__times_, 1, (Optr)int_2_Const);
    // streamBuffer:. 
    Send PSend10762 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)PSend10763);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // size. 
    Send PSend10766 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10761 = new_Send((Optr)PSend10762, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10766, (Optr)slot_IO_SocketStream_outBuffer, (Optr)int_1_Const);
    Assign PAssign10760 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend10761);
    Array PThreadedCode10759 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign10760, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10765, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10764, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10763, (Optr)&t_send1, (Optr)PSend10762, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10766, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10761, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10758 = new_Block_with(empty_Array, empty_Array, PThreadedCode10759, 1, PAssign10760);
    // ifTrue:. 
    Send PSend10757 = new_Send((Optr)PSend10756, SMB_ifTrue_, 1, (Optr)PBlock10758);
    Array PThreadedCode10752 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10753, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_send1, (Optr)PSend10754, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10755, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10756, (Optr)&t_send_ifTrue_, (Optr)PSend10757, (Optr)PBlock10758, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10750 = new_Method_with(PArray10751, empty_Array, empty_Array, PThreadedCode10752, 2, PSend10757, self);
    
    MethodClosure MC_SMB_adjustOutBuffer_ = new_MethodClosure((Method)PMethod10750, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustOutBuffer_, MC_SMB_adjustOutBuffer_);
}


static void init_SMB_nextAllInBuffer() {
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10769 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10770 = new_Send((Optr)PSend10769, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10771 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10770);
    Array PThreadedCode10768 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10769, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10770, (Optr)&t_send1, (Optr)PSend10771, (Optr)&t_method_return);
    Method PMethod10767 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10768, 1, PSend10771);
    
    MethodClosure MC_SMB_nextAllInBuffer = new_MethodClosure((Method)PMethod10767, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAllInBuffer, MC_SMB_nextAllInBuffer);
}


static void init_SMB_skip_() {
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10773 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10775 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10778 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10779 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10777 = new_Send((Optr)PSend10778, SMB_min_, 1, (Optr)PSend10779);
    Assign PAssign10776 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10777);
    Array PThreadedCode10774 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10775, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10776, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10778, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10779, (Optr)&t_send1, (Optr)PSend10777, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10772 = new_Method_with(PArray10773, empty_Array, empty_Array, PThreadedCode10774, 3, PSend10775, PAssign10776, self);
    
    MethodClosure MC_SMB_skip_ = new_MethodClosure((Method)PMethod10772, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_skip_, MC_SMB_skip_);
}


static void init_SMB_nextAvailable_() {
    Symbol SMB_nextAvailable_ = new_Symbol(L"nextAvailable:");
    Variable VAR_howMany_0_0 = new_Variable_named(L"howMany", 0);
    Array PArray10781 = new_Array_with(1, (Optr)VAR_howMany_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10784 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10786 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10790 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10791 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10790);
    Array PThreadedCode10789 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10790, (Optr)&t_send1, (Optr)PSend10791, (Optr)&t_block_return);
    Block PBlock10788 = new_Block_with(empty_Array, empty_Array, PThreadedCode10789, 1, PSend10791);
    // ifFalse:. 
    Send PSend10787 = new_Send((Optr)PSend10786, SMB_ifFalse_, 1, (Optr)PBlock10788);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10792 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10796 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10795 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10796, (Optr)&t_block_return);
    Block PBlock10794 = new_Block_with(empty_Array, empty_Array, PThreadedCode10795, 1, PSend10796);
    // ifTrue:. 
    Send PSend10793 = new_Send((Optr)PSend10792, SMB_ifTrue_, 1, (Optr)PBlock10794);
    // nextInBuffer:. 
    Send PSend10797 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Array PThreadedCode10785 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10786, (Optr)&t_send_ifFalse_, (Optr)PSend10787, (Optr)PBlock10788, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10792, (Optr)&t_send_ifTrue_, (Optr)PSend10793, (Optr)PBlock10794, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10797, (Optr)&t_method_return);
    Block PBlock10783 = new_Block_with(PArray10784, empty_Array, PThreadedCode10785, 3, PSend10787, PSend10793, PSend10797);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10798 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10783);
    Array PThreadedCode10782 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10783, (Optr)&t_send1, (Optr)PSend10798, (Optr)&t_method_return);
    Method PMethod10780 = new_Method_with(PArray10781, empty_Array, empty_Array, PThreadedCode10782, 1, PSend10798);
    
    MethodClosure MC_SMB_nextAvailable_ = new_MethodClosure((Method)PMethod10780, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable_, MC_SMB_nextAvailable_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10801 = new_Send((Optr)self, SMB_flush, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // closeAndDestroy:. 
    Send PSend10802 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_closeAndDestroy_, 1, (Optr)int_30_Const);
    Array PThreadedCode10800 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10801, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend10802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10799 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10800, 3, PSend10801, PSend10802, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod10799, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_inBufferSize() {
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10805 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10806 = new_Send((Optr)PSend10805, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10804 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10805, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10806, (Optr)&t_method_return);
    Method PMethod10803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10804, 1, PSend10806);
    
    MethodClosure MC_SMB_inBufferSize = new_MethodClosure((Method)PMethod10803, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_inBufferSize, MC_SMB_inBufferSize);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray10808 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend10810 = new_Send((Optr)VAR_anObject_0_0, SMB_printOn_, 1, (Optr)self);
    Array PThreadedCode10809 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10810, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10807 = new_Method_with(PArray10808, empty_Array, empty_Array, PThreadedCode10809, 2, PSend10810, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod10807, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10814 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10816 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10820 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10819 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10820, (Optr)&t_block_return);
    Block PBlock10818 = new_Block_with(empty_Array, empty_Array, PThreadedCode10819, 1, PSend10820);
    // ifTrue:. 
    Send PSend10817 = new_Send((Optr)PSend10816, SMB_ifTrue_, 1, (Optr)PBlock10818);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10821 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10825 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10826 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10830 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10829 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10830, (Optr)&t_block_return);
    Block PBlock10828 = new_Block_with(empty_Array, empty_Array, PThreadedCode10829, 1, PSend10830);
    // ifTrue:. 
    Send PSend10827 = new_Send((Optr)PSend10826, SMB_ifTrue_, 1, (Optr)PBlock10828);
    Array PThreadedCode10824 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10825, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10826, (Optr)&t_send_ifTrue_, (Optr)PSend10827, (Optr)PBlock10828, (Optr)&t_block_return);
    Block PBlock10823 = new_Block_with(empty_Array, empty_Array, PThreadedCode10824, 2, PSend10825, PSend10827);
    // ifTrue:. 
    Send PSend10822 = new_Send((Optr)PSend10821, SMB_ifTrue_, 1, (Optr)PBlock10823);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10832 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10831 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10832);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10833 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10815 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10816, (Optr)&t_send_ifTrue_, (Optr)PSend10817, (Optr)PBlock10818, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10821, (Optr)&t_send_ifTrue_, (Optr)PSend10822, (Optr)PBlock10823, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10831, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10832, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10833, (Optr)&t_method_return);
    Block PBlock10813 = new_Block_with(PArray10814, empty_Array, PThreadedCode10815, 4, PSend10817, PSend10822, PAssign10831, PSend10833);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10834 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10813);
    Array PThreadedCode10812 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10813, (Optr)&t_send1, (Optr)PSend10834, (Optr)&t_method_return);
    Method PMethod10811 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10812, 1, PSend10834);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod10811, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    // standardTimeout. 
    Send PSend10840 = new_Send((Optr)PSocket_classReference, SMB_standardTimeout, 0);
    Assign PAssign10839 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)PSend10840);
    Array PThreadedCode10838 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign10839, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend10840, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10837 = new_Block_with(empty_Array, empty_Array, PThreadedCode10838, 1, PAssign10839);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10841 = new_Send((Optr)slot_IO_SocketStream_timeout, SMB_ifNil_, 1, (Optr)PBlock10837);
    Array PThreadedCode10836 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_closure, (Optr)PBlock10837, (Optr)&t_send1, (Optr)PSend10841, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_method_return);
    Method PMethod10835 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10836, 2, PSend10841, slot_IO_SocketStream_timeout);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod10835, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_upToAll_() {
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Variable VAR_aStringOrByteArray_0_0 = new_Variable_named(L"aStringOrByteArray", 0);
    Array PArray10843 = new_Array_with(1, (Optr)VAR_aStringOrByteArray_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_sz_0_2 = new_Variable_named(L"sz", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_4 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_5 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray10844 = new_Array_with(5, (Optr)VAR_index_0_1, (Optr)VAR_sz_0_2, (Optr)VAR_result_0_3, (Optr)VAR_lastRecentlyRead_0_4, (Optr)VAR_searchedSoFar_0_5);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10847 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10849 = new_String(L"SocketStream>>upToAll:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10849_Const = new_Constant((Optr)string_10849);
    // warn:. 
    Send PSend10850 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10849_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10852 = new_Send((Optr)VAR_aStringOrByteArray_0_0, SMB_size, 0);
    Assign PAssign10851 = new_Assign((Optr)VAR_sz_0_2, (Optr)PSend10852);
    String string_10853 = new_String(L"SocketStream>>upToAll: sz is ");
    Constant string_10853_Const = new_Constant((Optr)string_10853);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10854 = new_Send((Optr)string_10853_Const, SMB__append_, 1, (Optr)VAR_sz_0_2);
    // warn:. 
    Send PSend10855 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10854);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10856 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)int_0_Const);
    Assign PAssign10857 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)int_0_Const);
    Assign PAssign10858 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    String string_10859 = new_String(L"SocketStream>>upToAll: temps initialized");
    Constant string_10859_Const = new_Constant((Optr)string_10859);
    // warn:. 
    Send PSend10860 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10859_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10863 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10864 = new_Send((Optr)PSend10863, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10867 = new_Send((Optr)VAR_lastRecentlyRead_0_4, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10870 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend10871 = new_Send((Optr)PSend10870, SMB_not, 0);
    Array PThreadedCode10869 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10870, (Optr)&t_send0, (Optr)PSend10871, (Optr)&t_block_return);
    Block PBlock10868 = new_Block_with(empty_Array, empty_Array, PThreadedCode10869, 1, PSend10871);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10872 = new_Send((Optr)PSend10867, SMB_and_, 1, (Optr)PBlock10868);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10875 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend10876 = new_Send((Optr)PSend10875, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode10874 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10875, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend10876, (Optr)&t_block_return);
    Block PBlock10873 = new_Block_with(empty_Array, empty_Array, PThreadedCode10874, 1, PSend10876);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend10877 = new_Send((Optr)PSend10872, SMB_or_, 1, (Optr)PBlock10873);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10881 = new_String(L"SocketStream>>upToAll: we need to read data");
    Constant string_10881_Const = new_Constant((Optr)string_10881);
    // warn:. 
    Send PSend10882 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10881_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10886 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_5);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10885 = new_Send((Optr)PSend10886, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOfSubCollection:startingAt:. 
    Send PSend10884 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_aStringOrByteArray_0_0, (Optr)PSend10885);
    Assign PAssign10883 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend10884);
    String string_10887 = new_String(L"SocketStream>>upToAll: searched for a bit.");
    Constant string_10887_Const = new_Constant((Optr)string_10887);
    // warn:. 
    Send PSend10888 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10887_Const);
    // inBufferSize. 
    Send PSend10890 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign10889 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)PSend10890);
    String string_10891 = new_String(L"SocketStream>>upToAll: this far we searched until");
    Constant string_10891_Const = new_Constant((Optr)string_10891);
    // warn:. 
    Send PSend10892 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10891_Const);
    // warn:. 
    Send PSend10893 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_searchedSoFar_0_5);
    // >. 
    Send PSend10894 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend10897 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)VAR_sz_0_2);
    // >. 
    Send PSend10898 = new_Send((Optr)PSend10897, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10896 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10897, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10898, (Optr)&t_block_return);
    Block PBlock10895 = new_Block_with(empty_Array, empty_Array, PThreadedCode10896, 1, PSend10898);
    // and:. 
    Send PSend10899 = new_Send((Optr)PSend10894, SMB_and_, 1, (Optr)PBlock10895);
    Assign PAssign10903 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode10902 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10903, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10901 = new_Block_with(empty_Array, empty_Array, PThreadedCode10902, 1, PAssign10903);
    // ifTrue:. 
    Send PSend10900 = new_Send((Optr)PSend10899, SMB_ifTrue_, 1, (Optr)PBlock10901);
    Array PThreadedCode10880 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10881, (Optr)&t_send1, (Optr)PSend10882, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10883, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10886, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10885, (Optr)&t_send2, (Optr)PSend10884, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10887, (Optr)&t_send1, (Optr)PSend10888, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10889, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10891, (Optr)&t_send1, (Optr)PSend10892, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10893, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10894, (Optr)&t_push_closure, (Optr)PBlock10895, (Optr)&t_send1, (Optr)PSend10899, (Optr)&t_send_ifTrue_, (Optr)PSend10900, (Optr)PBlock10901, (Optr)&t_block_return);
    Block PBlock10879 = new_Block_with(empty_Array, empty_Array, PThreadedCode10880, 7, PSend10882, PAssign10883, PSend10888, PAssign10889, PSend10892, PSend10893, PSend10900);
    // ifTrue:. 
    Send PSend10878 = new_Send((Optr)PSend10877, SMB_ifTrue_, 1, (Optr)PBlock10879);
    // =. 
    Send PSend10904 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode10866 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_4, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10867, (Optr)&t_push_closure, (Optr)PBlock10868, (Optr)&t_send1, (Optr)PSend10872, (Optr)&t_push_closure, (Optr)PBlock10873, (Optr)&t_send1, (Optr)PSend10877, (Optr)&t_send_ifTrue_, (Optr)PSend10878, (Optr)PBlock10879, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10904, (Optr)&t_block_return);
    Block PBlock10865 = new_Block_with(empty_Array, empty_Array, PThreadedCode10866, 2, PSend10878, PSend10904);
    // and:. 
    Send PSend10905 = new_Send((Optr)PSend10864, SMB_and_, 1, (Optr)PBlock10865);
    Array PThreadedCode10862 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10863, (Optr)&t_send0, (Optr)PSend10864, (Optr)&t_push_closure, (Optr)PBlock10865, (Optr)&t_send1, (Optr)PSend10905, (Optr)&t_block_return);
    Block PBlock10861 = new_Block_with(empty_Array, empty_Array, PThreadedCode10862, 1, PSend10905);
    // =. 
    Send PSend10908 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10912 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10911 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10912, (Optr)&t_block_return);
    Block PBlock10910 = new_Block_with(empty_Array, empty_Array, PThreadedCode10911, 1, PSend10912);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend10915 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode10914 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10915, (Optr)&t_block_return);
    Block PBlock10913 = new_Block_with(empty_Array, empty_Array, PThreadedCode10914, 1, PSend10915);
    // ifTrue:ifFalse:. 
    Send PSend10909 = new_Send((Optr)PSend10908, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10910, (Optr)PBlock10913);
    Assign PAssign10916 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10907 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10908, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10909, (Optr)PBlock10910, (Optr)PBlock10913, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10916, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10906 = new_Block_with(empty_Array, empty_Array, PThreadedCode10907, 2, PSend10909, PAssign10916);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10917 = new_Send((Optr)PBlock10861, SMB_whileTrue_, 1, (Optr)PBlock10906);
    // >. 
    Send PSend10918 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10925 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend10924 = new_Send((Optr)PSend10925, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend10923 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10924);
    Assign PAssign10922 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend10923);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend10926 = new_Send((Optr)self, SMB_skip_, 1, (Optr)VAR_sz_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10927 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_3);
    Array PThreadedCode10921 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign10922, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10925, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10924, (Optr)&t_send1, (Optr)PSend10923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10926, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_send1, (Optr)PSend10927, (Optr)&t_block_return);
    Block PBlock10920 = new_Block_with(empty_Array, empty_Array, PThreadedCode10921, 3, PAssign10922, PSend10926, PSend10927);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10930 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend10931 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10930);
    Array PThreadedCode10929 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10930, (Optr)&t_send1, (Optr)PSend10931, (Optr)&t_block_return);
    Block PBlock10928 = new_Block_with(empty_Array, empty_Array, PThreadedCode10929, 1, PSend10931);
    // ifTrue:ifFalse:. 
    Send PSend10919 = new_Send((Optr)PSend10918, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10920, (Optr)PBlock10928);
    Array PThreadedCode10848 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10849, (Optr)&t_send1, (Optr)PSend10850, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10851, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_send0, (Optr)PSend10852, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10853, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10854, (Optr)&t_send1, (Optr)PSend10855, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10856, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10857, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10858, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10859, (Optr)&t_send1, (Optr)PSend10860, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10861, (Optr)&t_push_closure, (Optr)PBlock10906, (Optr)&t_send1, (Optr)PSend10917, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10918, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10919, (Optr)PBlock10920, (Optr)PBlock10928, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock10846 = new_Block_with(PArray10847, empty_Array, PThreadedCode10848, 10, PSend10850, PAssign10851, PSend10855, PAssign10856, PAssign10857, PAssign10858, PSend10860, PSend10917, PSend10919, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10932 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10846);
    Array PThreadedCode10845 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10846, (Optr)&t_send1, (Optr)PSend10932, (Optr)&t_method_return);
    Method PMethod10842 = new_Method_with(PArray10843, PArray10844, empty_Array, PThreadedCode10845, 1, PSend10932);
    
    MethodClosure MC_SMB_upToAll_ = new_MethodClosure((Method)PMethod10842, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToAll_, MC_SMB_upToAll_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray10934 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend10936 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode10935 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10936, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10933 = new_Method_with(PArray10934, empty_Array, empty_Array, PThreadedCode10935, 2, PSend10936, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod10933, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_growInBuffer() {
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10939 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10940 = new_Send((Optr)PSend10939, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    // resizeInBuffer:. 
    Send PSend10941 = new_Send((Optr)self, SMB_resizeInBuffer_, 1, (Optr)PSend10940);
    Array PThreadedCode10938 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10939, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10940, (Optr)&t_send1, (Optr)PSend10941, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10937 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10938, 2, PSend10941, self);
    
    MethodClosure MC_SMB_growInBuffer = new_MethodClosure((Method)PMethod10937, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_growInBuffer, MC_SMB_growInBuffer);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray10943 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend10945 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend10946 = new_Send((Optr)PSend10945, SMB_name, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10947 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend10946);
    String string_10950 = new_String(L"[inbuf:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10951 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // /. 
    Send PSend10952 = new_Send((Optr)PSend10951, SMB__divide_, 1, (Optr)int_1024_Const);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend10953 = new_Send((Optr)PSend10952, SMB_rounded, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10954 = new_Send((Optr)PSend10953, SMB_asString, 0);
    Constant string_10950_Const = new_Constant((Optr)string_10950);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10955 = new_Send((Optr)string_10950_Const, SMB__append_, 1, (Optr)PSend10954);
    String string_10956 = new_String(L"kb/outbuf:");
    Constant string_10956_Const = new_Constant((Optr)string_10956);
    // ,. 
    Send PSend10957 = new_Send((Optr)PSend10955, SMB__append_, 1, (Optr)string_10956_Const);
    // size. 
    Send PSend10958 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // /. 
    Send PSend10959 = new_Send((Optr)PSend10958, SMB__divide_, 1, (Optr)int_1024_Const);
    // rounded. 
    Send PSend10960 = new_Send((Optr)PSend10959, SMB_rounded, 0);
    // asString. 
    Send PSend10961 = new_Send((Optr)PSend10960, SMB_asString, 0);
    // ,. 
    Send PSend10962 = new_Send((Optr)PSend10957, SMB__append_, 1, (Optr)PSend10961);
    String string_10963 = new_String(L"kb]");
    Constant string_10963_Const = new_Constant((Optr)string_10963);
    // ,. 
    Send PSend10964 = new_Send((Optr)PSend10962, SMB__append_, 1, (Optr)string_10963_Const);
    // nextPutAll:. 
    Send PSend10965 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend10964);
    Array PThreadedCode10949 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_10950, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10951, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10952, (Optr)&t_send0, (Optr)PSend10953, (Optr)&t_send0, (Optr)PSend10954, (Optr)&t_send1, (Optr)PSend10955, (Optr)&t_push1, (Optr)string_10956, (Optr)&t_send1, (Optr)PSend10957, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10958, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10959, (Optr)&t_send0, (Optr)PSend10960, (Optr)&t_send0, (Optr)PSend10961, (Optr)&t_send1, (Optr)PSend10962, (Optr)&t_push1, (Optr)string_10963, (Optr)&t_send1, (Optr)PSend10964, (Optr)&t_send1, (Optr)PSend10965, (Optr)&t_block_return);
    Block PBlock10948 = new_Block_with(empty_Array, empty_Array, PThreadedCode10949, 1, PSend10965);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend10966 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_ifNotNil_, 1, (Optr)PBlock10948);
    Array PThreadedCode10944 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10945, (Optr)&t_send0, (Optr)PSend10946, (Optr)&t_send1, (Optr)PSend10947, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_closure, (Optr)PBlock10948, (Optr)&t_send1, (Optr)PSend10966, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10942 = new_Method_with(PArray10943, empty_Array, empty_Array, PThreadedCode10944, 3, PSend10947, PSend10966, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod10942, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_autoFlush() {
    Symbol SMB_autoFlush = new_Symbol(L"autoFlush");
    Array PThreadedCode10968 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_method_return);
    Method PMethod10967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10968, 1, slot_IO_SocketStream_autoFlush);
    
    MethodClosure MC_SMB_autoFlush = new_MethodClosure((Method)PMethod10967, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush, MC_SMB_autoFlush);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10970 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10971 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10977 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10976 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10977, (Optr)&t_block_return);
    Block PBlock10975 = new_Block_with(empty_Array, empty_Array, PThreadedCode10976, 1, PSend10977);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10980 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10979 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10980, (Optr)&t_block_return);
    Block PBlock10978 = new_Block_with(empty_Array, empty_Array, PThreadedCode10979, 1, PSend10980);
    // ifTrue:ifFalse:. 
    Send PSend10974 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10975, (Optr)PBlock10978);
    Assign PAssign10973 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10974);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10981 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    // adjustOutBuffer:. 
    Send PSend10982 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)PSend10981);
    // size. 
    Send PSend10983 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10984 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend10983);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10985 = new_Send((Optr)PSend10984, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend10986 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend10985, (Optr)VAR_toPut_0_1, (Optr)int_1_Const);
    // size. 
    Send PSend10989 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    // +. 
    Send PSend10988 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend10989);
    Assign PAssign10987 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend10988);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend10990 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode10972 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign10973, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10974, (Optr)PBlock10975, (Optr)PBlock10978, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10981, (Optr)&t_send1, (Optr)PSend10982, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10983, (Optr)&t_send1, (Optr)PSend10984, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10985, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10986, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10987, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10989, (Optr)&t_send1, (Optr)PSend10988, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10990, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10969 = new_Method_with(PArray10970, PArray10971, empty_Array, PThreadedCode10972, 6, PAssign10973, PSend10982, PSend10986, PAssign10987, PSend10990, self);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod10969, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_receiveDataIfAvailable() {
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    // receiveSomeDataInto:startingAt:. 
    Send PSend10994 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveSomeDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10993 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10994);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10995 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10992 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10993, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10994, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10995, (Optr)&t_method_return);
    Method PMethod10991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10992, 2, PAssign10993, PSend10995);
    
    MethodClosure MC_SMB_receiveDataIfAvailable = new_MethodClosure((Method)PMethod10991, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveDataIfAvailable, MC_SMB_receiveDataIfAvailable);
}


static void init_SMB_isInBufferEmpty() {
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    String string_10998 = new_String(L"SocketStream>>isInBufferEmpty:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10998_Const = new_Constant((Optr)string_10998);
    // warn:. 
    Send PSend10999 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10998_Const);
    String string_11000 = new_String(L"-Last Read:");
    Constant string_11000_Const = new_Constant((Optr)string_11000);
    // warn:. 
    Send PSend11001 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11000_Const);
    // warn:. 
    Send PSend11002 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    String string_11003 = new_String(L"-Index Next To Write:");
    Constant string_11003_Const = new_Constant((Optr)string_11003);
    // warn:. 
    Send PSend11004 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11003_Const);
    // warn:. 
    Send PSend11005 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11006 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11007 = new_Send((Optr)PSend11006, SMB__equals_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10997 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10998, (Optr)&t_send1, (Optr)PSend10999, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11000, (Optr)&t_send1, (Optr)PSend11001, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11002, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11003, (Optr)&t_send1, (Optr)PSend11004, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11005, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11006, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11007, (Optr)&t_method_return);
    Method PMethod10996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10997, 6, PSend10999, PSend11001, PSend11002, PSend11004, PSend11005, PSend11007);
    
    MethodClosure MC_SMB_isInBufferEmpty = new_MethodClosure((Method)PMethod10996, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isInBufferEmpty, MC_SMB_isInBufferEmpty);
}


static void init_SMB_peek_() {
    Symbol SMB_peek_ = new_Symbol(L"peek:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11009 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray11010 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend11012 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11014 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11013 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11014);
    // +. 
    Send PSend11015 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11016 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend11017 = new_Send((Optr)PSend11015, SMB_min_, 1, (Optr)PSend11016);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11018 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend11017);
    Array PThreadedCode11011 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11012, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11013, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11014, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend11015, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11016, (Optr)&t_send1, (Optr)PSend11017, (Optr)&t_send2, (Optr)PSend11018, (Optr)&t_method_return);
    Method PMethod11008 = new_Method_with(PArray11009, PArray11010, empty_Array, PThreadedCode11011, 3, PSend11012, PAssign11013, PSend11018);
    
    MethodClosure MC_SMB_peek_ = new_MethodClosure((Method)PMethod11008, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek_, MC_SMB_peek_);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11021 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11022 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend11021);
    Array PThreadedCode11020 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11021, (Optr)&t_send1, (Optr)PSend11022, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11019 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11020, 2, PSend11022, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod11019, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_moveInBufferDown() {
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    Variable VAR_sz_0_0 = new_Variable_named(L"sz", 0);
    Variable VAR_distanceMoved_0_1 = new_Variable_named(L"distanceMoved", 0);
    Array PArray11024 = new_Array_with(2, (Optr)VAR_sz_0_0, (Optr)VAR_distanceMoved_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11028 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11027 = new_Send((Optr)PSend11028, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign11026 = new_Assign((Optr)VAR_sz_0_0, (Optr)PSend11027);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11029 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11030 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_sz_0_0, (Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11029);
    Assign PAssign11031 = new_Assign((Optr)VAR_distanceMoved_0_1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11032 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    // +. 
    Send PSend11034 = new_Send((Optr)VAR_sz_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11033 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend11034);
    Array PThreadedCode11025 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign11026, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11028, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11027, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11029, (Optr)&t_send4, (Optr)PSend11030, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11031, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11032, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11033, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11034, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_distanceMoved_0_1, (Optr)&t_method_return);
    Method PMethod11023 = new_Method_with(empty_Array, PArray11024, empty_Array, PThreadedCode11025, 6, PAssign11026, PSend11030, PAssign11031, PAssign11032, PAssign11033, VAR_distanceMoved_0_1);
    
    MethodClosure MC_SMB_moveInBufferDown = new_MethodClosure((Method)PMethod11023, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_moveInBufferDown, MC_SMB_moveInBufferDown);
}


static void init_SMB_nextLineLf() {
    Symbol SMB_nextLineLf = new_Symbol(L"nextLineLf");
    Variable VAR_nextLine_0_0 = new_Variable_named(L"nextLine", 0);
    Array PArray11036 = new_Array_with(1, (Optr)VAR_nextLine_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend11040 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // upToAll:. 
    Send PSend11039 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend11040);
    Assign PAssign11038 = new_Assign((Optr)VAR_nextLine_0_0, (Optr)PSend11039);
    Array PThreadedCode11037 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11038, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11040, (Optr)&t_send1, (Optr)PSend11039, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_0, (Optr)&t_method_return);
    Method PMethod11035 = new_Method_with(empty_Array, PArray11036, empty_Array, PThreadedCode11037, 2, PAssign11038, VAR_nextLine_0_0);
    
    MethodClosure MC_SMB_nextLineLf = new_MethodClosure((Method)PMethod11035, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineLf, MC_SMB_nextLineLf);
}


static void init_SMB_nextInBuffer_() {
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11042 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_amount_0_2 = new_Variable_named(L"amount", 0);
    Array PArray11043 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_amount_0_2);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11048 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11047 = new_Send((Optr)PSend11048, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11046 = new_Send((Optr)VAR_anInteger_0_0, SMB_min_, 1, (Optr)PSend11047);
    Assign PAssign11045 = new_Assign((Optr)VAR_amount_0_2, (Optr)PSend11046);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11050 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11049 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11050);
    // +. 
    Send PSend11052 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_amount_0_2);
    Assign PAssign11051 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11052);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11053 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11044 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign11045, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11048, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11047, (Optr)&t_send1, (Optr)PSend11046, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11049, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11050, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11051, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_amount_0_2, (Optr)&t_send1, (Optr)PSend11052, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend11053, (Optr)&t_method_return);
    Method PMethod11041 = new_Method_with(PArray11042, PArray11043, empty_Array, PThreadedCode11044, 4, PAssign11045, PAssign11049, PAssign11051, PSend11053);
    
    MethodClosure MC_SMB_nextInBuffer_ = new_MethodClosure((Method)PMethod11041, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextInBuffer_, MC_SMB_nextInBuffer_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11057 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11059 = new_String(L"SocketStream>>atEnd");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11059_Const = new_Constant((Optr)string_11059);
    // warn:. 
    Send PSend11060 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11059_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11061 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode11064 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11065, (Optr)&t_block_return);
    Block PBlock11063 = new_Block_with(empty_Array, empty_Array, PThreadedCode11064, 1, PSend11065);
    // ifFalse:. 
    Send PSend11062 = new_Send((Optr)PSend11061, SMB_ifFalse_, 1, (Optr)PBlock11063);
    String string_11066 = new_String(L"SocketStream>>atEnd: Buffer is Empty");
    Constant string_11066_Const = new_Constant((Optr)string_11066);
    // warn:. 
    Send PSend11067 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11066_Const);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend11068 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11069 = new_Send((Optr)PSend11068, SMB_not, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11072 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    // not. 
    Send PSend11073 = new_Send((Optr)PSend11072, SMB_not, 0);
    Array PThreadedCode11071 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11072, (Optr)&t_send0, (Optr)PSend11073, (Optr)&t_block_return);
    Block PBlock11070 = new_Block_with(empty_Array, empty_Array, PThreadedCode11071, 1, PSend11073);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11074 = new_Send((Optr)PSend11069, SMB_and_, 1, (Optr)PBlock11070);
    Array PThreadedCode11058 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11059, (Optr)&t_send1, (Optr)PSend11060, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11061, (Optr)&t_send_ifFalse_, (Optr)PSend11062, (Optr)PBlock11063, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11066, (Optr)&t_send1, (Optr)PSend11067, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11068, (Optr)&t_send0, (Optr)PSend11069, (Optr)&t_push_closure, (Optr)PBlock11070, (Optr)&t_send1, (Optr)PSend11074, (Optr)&t_method_return);
    Block PBlock11056 = new_Block_with(PArray11057, empty_Array, PThreadedCode11058, 4, PSend11060, PSend11062, PSend11067, PSend11074);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11075 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11056);
    Array PThreadedCode11055 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11056, (Optr)&t_send1, (Optr)PSend11075, (Optr)&t_method_return);
    Method PMethod11054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11055, 1, PSend11075);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod11054, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray11077 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11078 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend11084 = new_Send((Optr)VAR_char_0_0, SMB_asInteger, 0);
    Array PThreadedCode11083 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11084, (Optr)&t_block_return);
    Block PBlock11082 = new_Block_with(empty_Array, empty_Array, PThreadedCode11083, 1, PSend11084);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend11087 = new_Send((Optr)VAR_char_0_0, SMB_asCharacter, 0);
    Array PThreadedCode11086 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11087, (Optr)&t_block_return);
    Block PBlock11085 = new_Block_with(empty_Array, empty_Array, PThreadedCode11086, 1, PSend11087);
    // ifTrue:ifFalse:. 
    Send PSend11081 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11082, (Optr)PBlock11085);
    Assign PAssign11080 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11081);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // adjustOutBuffer:. 
    Send PSend11088 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend11089 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_at_put_, 2, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)VAR_toPut_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11091 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11090 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11091);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11092 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11079 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign11080, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11081, (Optr)PBlock11082, (Optr)PBlock11085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11088, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send2, (Optr)PSend11089, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11090, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11091, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11092, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_method_return);
    Method PMethod11076 = new_Method_with(PArray11077, PArray11078, empty_Array, PThreadedCode11079, 6, PAssign11080, PSend11088, PSend11089, PAssign11090, PSend11092, VAR_char_0_0);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod11076, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    String string_11095 = new_String(L"SocketStream>>isConnected");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11095_Const = new_Constant((Optr)string_11095);
    // warn:. 
    Send PSend11096 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11095_Const);
    // isConnected. 
    Send PSend11097 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isConnected, 0);
    Array PThreadedCode11094 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11095, (Optr)&t_send1, (Optr)PSend11096, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11097, (Optr)&t_method_return);
    Method PMethod11093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11094, 2, PSend11096, PSend11097);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod11093, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend11100 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend11101 = new_Send((Optr)self, SMB_nextPut_, 1, (Optr)PSend11100);
    Array PThreadedCode11099 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend11100, (Optr)&t_send1, (Optr)PSend11101, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11098 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11099, 2, PSend11101, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod11098, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend11104 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11107 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11108 = new_Send((Optr)PSend11107, SMB_not, 0);
    Array PThreadedCode11106 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11107, (Optr)&t_send0, (Optr)PSend11108, (Optr)&t_block_return);
    Block PBlock11105 = new_Block_with(empty_Array, empty_Array, PThreadedCode11106, 1, PSend11108);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11109 = new_Send((Optr)PSend11104, SMB_and_, 1, (Optr)PBlock11105);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11115 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend11116 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11115);
    Array PThreadedCode11114 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11115, (Optr)&t_send2, (Optr)PSend11116, (Optr)&t_block_return);
    Block PBlock11113 = new_Block_with(empty_Array, empty_Array, PThreadedCode11114, 1, PSend11116);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11118 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Array PThreadedCode11122 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11121 = new_Block_with(empty_Array, empty_Array, PThreadedCode11122, 0);
    // ifFalse:. 
    Send PSend11120 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock11121);
    Array PThreadedCode11119 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend11120, (Optr)PBlock11121, (Optr)&t_method_return);
    Block PBlock11117 = new_Block_with(PArray11118, empty_Array, PThreadedCode11119, 1, PSend11120);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11123 = new_Send((Optr)PBlock11113, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock11117);
    Assign PAssign11124 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11112 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11113, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock11117, (Optr)&t_send2, (Optr)PSend11123, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11124, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11111 = new_Block_with(empty_Array, empty_Array, PThreadedCode11112, 2, PSend11123, PAssign11124);
    // ifTrue:. 
    Send PSend11110 = new_Send((Optr)PSend11109, SMB_ifTrue_, 1, (Optr)PBlock11111);
    Array PThreadedCode11103 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11104, (Optr)&t_push_closure, (Optr)PBlock11105, (Optr)&t_send1, (Optr)PSend11109, (Optr)&t_send_ifTrue_, (Optr)PSend11110, (Optr)PBlock11111, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11102 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11103, 2, PSend11110, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod11102, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_isOtherEndConnected() {
    Symbol SMB_isOtherEndConnected = new_Symbol(L"isOtherEndConnected");
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11127 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11128 = new_Send((Optr)PSend11127, SMB_not, 0);
    Array PThreadedCode11126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11127, (Optr)&t_send0, (Optr)PSend11128, (Optr)&t_method_return);
    Method PMethod11125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11126, 1, PSend11128);
    
    MethodClosure MC_SMB_isOtherEndConnected = new_MethodClosure((Method)PMethod11125, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isOtherEndConnected, MC_SMB_isOtherEndConnected);
}


static void init_SMB_resetBuffers() {
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11132 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11131 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11132);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11133 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign11134 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)int_1_Const);
    // streamBuffer:. 
    Send PSend11136 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11135 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11136);
    Assign PAssign11137 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11130 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign11131, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11132, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11133, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11134, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11135, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11136, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11137, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11129 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11130, 6, PAssign11131, PAssign11133, PAssign11134, PAssign11135, PAssign11137, self);
    
    MethodClosure MC_SMB_resetBuffers = new_MethodClosure((Method)PMethod11129, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resetBuffers, MC_SMB_resetBuffers);
}


static void init_SMB_debug() {
    Symbol SMB_debug = new_Symbol(L"debug");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Array PArray11139 = new_Array_with(1, (Optr)VAR_data_0_0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11142 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11141 = new_Assign((Optr)VAR_data_0_0, (Optr)PSend11142);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11144 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11147 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_11149 = new_String(L"Buffer size: ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11150 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11151 = new_Send((Optr)PSend11150, SMB_asString, 0);
    Constant string_11149_Const = new_Constant((Optr)string_11149);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11152 = new_Send((Optr)string_11149_Const, SMB__append_, 1, (Optr)PSend11151);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11153 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11152);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11154 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11155 = new_String(L"InBuffer data size: ");
    // asString. 
    Send PSend11156 = new_Send((Optr)VAR_data_0_0, SMB_asString, 0);
    Constant string_11155_Const = new_Constant((Optr)string_11155);
    // ,. 
    Send PSend11157 = new_Send((Optr)string_11155_Const, SMB__append_, 1, (Optr)PSend11156);
    // nextPutAll:. 
    Send PSend11158 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11157);
    // cr. 
    Send PSend11159 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11160 = new_String(L"In data (20):");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11161 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend11162 = new_Send((Optr)VAR_data_0_0, SMB_min_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend11163 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)PSend11162);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11164 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)PSend11161, (Optr)PSend11163);
    Constant string_11160_Const = new_Constant((Optr)string_11160);
    // ,. 
    Send PSend11165 = new_Send((Optr)string_11160_Const, SMB__append_, 1, (Optr)PSend11164);
    // nextPutAll:. 
    Send PSend11166 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11165);
    // cr. 
    Send PSend11167 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11168 = new_String(L"OutBuffer data size: ");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11169 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // asString. 
    Send PSend11170 = new_Send((Optr)PSend11169, SMB_asString, 0);
    Constant string_11168_Const = new_Constant((Optr)string_11168);
    // ,. 
    Send PSend11171 = new_Send((Optr)string_11168_Const, SMB__append_, 1, (Optr)PSend11170);
    // nextPutAll:. 
    Send PSend11172 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11171);
    // cr. 
    Send PSend11173 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11174 = new_String(L"Out data (20):");
    // -. 
    Send PSend11175 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11176 = new_Send((Optr)PSend11175, SMB_min_, 1, (Optr)int_20_Const);
    // copyFrom:to:. 
    Send PSend11177 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend11176);
    Constant string_11174_Const = new_Constant((Optr)string_11174);
    // ,. 
    Send PSend11178 = new_Send((Optr)string_11174_Const, SMB__append_, 1, (Optr)PSend11177);
    // nextPutAll:. 
    Send PSend11179 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11178);
    // cr. 
    Send PSend11180 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11148 = instantiate_Array_with(ThreadedCode_Class, 0, 120, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11149, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11150, (Optr)&t_send0, (Optr)PSend11151, (Optr)&t_send1, (Optr)PSend11152, (Optr)&t_send1, (Optr)PSend11153, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11154, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11155, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send0, (Optr)PSend11156, (Optr)&t_send1, (Optr)PSend11157, (Optr)&t_send1, (Optr)PSend11158, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11159, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11160, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11161, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11162, (Optr)&t_send1, (Optr)PSend11163, (Optr)&t_send2, (Optr)PSend11164, (Optr)&t_send1, (Optr)PSend11165, (Optr)&t_send1, (Optr)PSend11166, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11167, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11168, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11169, (Optr)&t_send0, (Optr)PSend11170, (Optr)&t_send1, (Optr)PSend11171, (Optr)&t_send1, (Optr)PSend11172, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11173, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11174, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11175, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11176, (Optr)&t_send2, (Optr)PSend11177, (Optr)&t_send1, (Optr)PSend11178, (Optr)&t_send1, (Optr)PSend11179, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11180, (Optr)&t_method_return);
    Block PBlock11146 = new_Block_with(PArray11147, empty_Array, PThreadedCode11148, 10, PSend11153, PSend11154, PSend11158, PSend11159, PSend11166, PSend11167, PSend11172, PSend11173, PSend11179, PSend11180);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11181 = new_Send((Optr)PBlock11146, SMB_value_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11145 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11146, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11181, (Optr)&t_method_return);
    Block PBlock11143 = new_Block_with(PArray11144, empty_Array, PThreadedCode11145, 1, PSend11181);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend11182 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock11143);
    Array PThreadedCode11140 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11141, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11142, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock11143, (Optr)&t_send1, (Optr)PSend11182, (Optr)&t_method_return);
    Method PMethod11138 = new_Method_with(empty_Array, PArray11139, empty_Array, PThreadedCode11140, 2, PAssign11141, PSend11182);
    
    MethodClosure MC_SMB_debug = new_MethodClosure((Method)PMethod11138, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_debug, MC_SMB_debug);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray11184 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_3 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_4 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11185 = new_Array_with(4, (Optr)VAR_index_0_1, (Optr)VAR_result_0_2, (Optr)VAR_lastRecentlyRead_0_3, (Optr)VAR_searchedSoFar_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11188 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11190 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)int_0_Const);
    Assign PAssign11191 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)int_0_Const);
    Assign PAssign11192 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11195 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11196 = new_Send((Optr)PSend11195, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11199 = new_Send((Optr)VAR_lastRecentlyRead_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11202 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11203 = new_Send((Optr)PSend11202, SMB_not, 0);
    Array PThreadedCode11201 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11202, (Optr)&t_send0, (Optr)PSend11203, (Optr)&t_block_return);
    Block PBlock11200 = new_Block_with(empty_Array, empty_Array, PThreadedCode11201, 1, PSend11203);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11204 = new_Send((Optr)PSend11199, SMB_and_, 1, (Optr)PBlock11200);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11207 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11208 = new_Send((Optr)PSend11207, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11206 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11207, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11208, (Optr)&t_block_return);
    Block PBlock11205 = new_Block_with(empty_Array, empty_Array, PThreadedCode11206, 1, PSend11208);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11209 = new_Send((Optr)PSend11204, SMB_or_, 1, (Optr)PBlock11205);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11216 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11215 = new_Send((Optr)PSend11216, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOf:startingAt:. 
    Send PSend11214 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOf_startingAt_, 2, (Optr)VAR_aCharacterOrByte_0_0, (Optr)PSend11215);
    Assign PAssign11213 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11214);
    // inBufferSize. 
    Send PSend11218 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11217 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)PSend11218);
    // >. 
    Send PSend11219 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11222 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // >. 
    Send PSend11223 = new_Send((Optr)PSend11222, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11221 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11222, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11223, (Optr)&t_block_return);
    Block PBlock11220 = new_Block_with(empty_Array, empty_Array, PThreadedCode11221, 1, PSend11223);
    // and:. 
    Send PSend11224 = new_Send((Optr)PSend11219, SMB_and_, 1, (Optr)PBlock11220);
    Assign PAssign11228 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11227 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11228, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11226 = new_Block_with(empty_Array, empty_Array, PThreadedCode11227, 1, PAssign11228);
    // ifTrue:. 
    Send PSend11225 = new_Send((Optr)PSend11224, SMB_ifTrue_, 1, (Optr)PBlock11226);
    Array PThreadedCode11212 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11213, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_4, (Optr)&t_send1, (Optr)PSend11216, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11215, (Optr)&t_send2, (Optr)PSend11214, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11217, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11219, (Optr)&t_push_closure, (Optr)PBlock11220, (Optr)&t_send1, (Optr)PSend11224, (Optr)&t_send_ifTrue_, (Optr)PSend11225, (Optr)PBlock11226, (Optr)&t_block_return);
    Block PBlock11211 = new_Block_with(empty_Array, empty_Array, PThreadedCode11212, 3, PAssign11213, PAssign11217, PSend11225);
    // ifTrue:. 
    Send PSend11210 = new_Send((Optr)PSend11209, SMB_ifTrue_, 1, (Optr)PBlock11211);
    // =. 
    Send PSend11229 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11198 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11199, (Optr)&t_push_closure, (Optr)PBlock11200, (Optr)&t_send1, (Optr)PSend11204, (Optr)&t_push_closure, (Optr)PBlock11205, (Optr)&t_send1, (Optr)PSend11209, (Optr)&t_send_ifTrue_, (Optr)PSend11210, (Optr)PBlock11211, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11229, (Optr)&t_block_return);
    Block PBlock11197 = new_Block_with(empty_Array, empty_Array, PThreadedCode11198, 2, PSend11210, PSend11229);
    // and:. 
    Send PSend11230 = new_Send((Optr)PSend11196, SMB_and_, 1, (Optr)PBlock11197);
    Array PThreadedCode11194 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11195, (Optr)&t_send0, (Optr)PSend11196, (Optr)&t_push_closure, (Optr)PBlock11197, (Optr)&t_send1, (Optr)PSend11230, (Optr)&t_block_return);
    Block PBlock11193 = new_Block_with(empty_Array, empty_Array, PThreadedCode11194, 1, PSend11230);
    String string_11233 = new_String(L"Buffer: ");
    Constant string_11233_Const = new_Constant((Optr)string_11233);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11234 = new_Send((Optr)string_11233_Const, SMB__append_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend11235 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11234);
    // =. 
    Send PSend11236 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11240 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11239 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11240, (Optr)&t_block_return);
    Block PBlock11238 = new_Block_with(empty_Array, empty_Array, PThreadedCode11239, 1, PSend11240);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11243 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11242 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11243, (Optr)&t_block_return);
    Block PBlock11241 = new_Block_with(empty_Array, empty_Array, PThreadedCode11242, 1, PSend11243);
    // ifTrue:ifFalse:. 
    Send PSend11237 = new_Send((Optr)PSend11236, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11238, (Optr)PBlock11241);
    Assign PAssign11244 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11232 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11233, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend11234, (Optr)&t_send1, (Optr)PSend11235, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11236, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11237, (Optr)PBlock11238, (Optr)PBlock11241, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11244, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11231 = new_Block_with(empty_Array, empty_Array, PThreadedCode11232, 3, PSend11235, PSend11237, PAssign11244);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11245 = new_Send((Optr)PBlock11193, SMB_whileTrue_, 1, (Optr)PBlock11231);
    // >. 
    Send PSend11246 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11253 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11252 = new_Send((Optr)PSend11253, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11251 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11252);
    Assign PAssign11250 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend11251);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11254 = new_Send((Optr)self, SMB_skip_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11255 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode11249 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11250, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11253, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11252, (Optr)&t_send1, (Optr)PSend11251, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11254, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend11255, (Optr)&t_block_return);
    Block PBlock11248 = new_Block_with(empty_Array, empty_Array, PThreadedCode11249, 3, PAssign11250, PSend11254, PSend11255);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11258 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11259 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11258);
    Array PThreadedCode11257 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11258, (Optr)&t_send1, (Optr)PSend11259, (Optr)&t_block_return);
    Block PBlock11256 = new_Block_with(empty_Array, empty_Array, PThreadedCode11257, 1, PSend11259);
    // ifTrue:ifFalse:. 
    Send PSend11247 = new_Send((Optr)PSend11246, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11248, (Optr)PBlock11256);
    Array PThreadedCode11189 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11190, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11191, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11192, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11193, (Optr)&t_push_closure, (Optr)PBlock11231, (Optr)&t_send1, (Optr)PSend11245, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11246, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11247, (Optr)PBlock11248, (Optr)PBlock11256, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11187 = new_Block_with(PArray11188, empty_Array, PThreadedCode11189, 6, PAssign11190, PAssign11191, PAssign11192, PSend11245, PSend11247, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11260 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11187);
    Array PThreadedCode11186 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11187, (Optr)&t_send1, (Optr)PSend11260, (Optr)&t_method_return);
    Method PMethod11183 = new_Method_with(PArray11184, PArray11185, empty_Array, PThreadedCode11186, 1, PSend11260);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod11183, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11267 = new_Send((Optr)self, SMB_atEnd, 0);
    Array PThreadedCode11266 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11267, (Optr)&t_block_return);
    Block PBlock11265 = new_Block_with(empty_Array, empty_Array, PThreadedCode11266, 1, PSend11267);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11270 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11269 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11270, (Optr)&t_block_return);
    Block PBlock11268 = new_Block_with(empty_Array, empty_Array, PThreadedCode11269, 1, PSend11270);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend11271 = new_Send((Optr)PBlock11265, SMB_whileFalse_, 1, (Optr)PBlock11268);
    Array PThreadedCode11264 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11265, (Optr)&t_push_closure, (Optr)PBlock11268, (Optr)&t_send1, (Optr)PSend11271, (Optr)&t_block_return);
    Block PBlock11263 = new_Block_with(empty_Array, empty_Array, PThreadedCode11264, 1, PSend11271);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11273 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode11274 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock11272 = new_Block_with(PArray11273, empty_Array, PThreadedCode11274, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11275 = new_Send((Optr)PBlock11263, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock11272);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11276 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode11262 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock11263, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock11272, (Optr)&t_send2, (Optr)PSend11275, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11276, (Optr)&t_method_return);
    Method PMethod11261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11262, 2, PSend11275, PSend11276);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod11261, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_recentlyRead() {
    Symbol SMB_recentlyRead = new_Symbol(L"recentlyRead");
    Array PThreadedCode11278 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_method_return);
    Method PMethod11277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11278, 1, slot_IO_SocketStream_recentlyRead);
    
    MethodClosure MC_SMB_recentlyRead = new_MethodClosure((Method)PMethod11277, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_recentlyRead, MC_SMB_recentlyRead);
}


static void init_class_SMB_openConnectionToHostNamed_port_() {
    Symbol SMB_openConnectionToHostNamed_port_ = new_Symbol(L"openConnectionToHostNamed:port:");
    Variable VAR_hostName_0_0 = new_Variable_named(L"hostName", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11280 = new_Array_with(2, (Optr)VAR_hostName_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_hostIP_0_2 = new_Variable_named(L"hostIP", 0);
    Array PArray11281 = new_Array_with(1, (Optr)VAR_hostIP_0_2);
    Symbol SMB_addressForName_timeout_ = new_Symbol(L"addressForName:timeout:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // addressForName:timeout:. 
    Send PSend11284 = new_Send((Optr)NetNameResolver_classReference, SMB_addressForName_timeout_, 2, (Optr)VAR_hostName_0_0, (Optr)int_20_Const);
    Assign PAssign11283 = new_Assign((Optr)VAR_hostIP_0_2, (Optr)PSend11284);
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    // openConnectionToHost:port:. 
    Send PSend11285 = new_Send((Optr)self, SMB_openConnectionToHost_port_, 2, (Optr)VAR_hostIP_0_2, (Optr)VAR_portNumber_0_1);
    Array PThreadedCode11282 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign11283, (Optr)&t_push_class_reference, (Optr)NetNameResolver_classReference, (Optr)&t_push_variable, (Optr)VAR_hostName_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send2, (Optr)PSend11284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_2, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11285, (Optr)&t_method_return);
    Method PMethod11279 = new_Method_with(PArray11280, PArray11281, empty_Array, PThreadedCode11282, 2, PAssign11283, PSend11285);
    
    MethodClosure MC_SMB_openConnectionToHostNamed_port_ = new_MethodClosure((Method)PMethod11279, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHostNamed_port_, MC_SMB_openConnectionToHostNamed_port_);
}


static void init_class_SMB_openConnectionToHost_port_() {
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    Variable VAR_hostIP_0_0 = new_Variable_named(L"hostIP", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11287 = new_Array_with(2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_socket_0_2 = new_Variable_named(L"socket", 0);
    Array PArray11288 = new_Array_with(1, (Optr)VAR_socket_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11291 = new_Send((Optr)PSocket_classReference, SMB_new, 0);
    Assign PAssign11290 = new_Assign((Optr)VAR_socket_0_2, (Optr)PSend11291);
    Symbol SMB_connectTo_port_ = new_Symbol(L"connectTo:port:");
    // connectTo:port:. 
    Send PSend11292 = new_Send((Optr)VAR_socket_0_2, SMB_connectTo_port_, 2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11293 = new_Send((Optr)self, SMB_on_, 1, (Optr)VAR_socket_0_2);
    Array PThreadedCode11289 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign11290, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_0, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11292, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_send1, (Optr)PSend11293, (Optr)&t_method_return);
    Method PMethod11286 = new_Method_with(PArray11287, PArray11288, empty_Array, PThreadedCode11289, 3, PAssign11290, PSend11292, PSend11293);
    
    MethodClosure MC_SMB_openConnectionToHost_port_ = new_MethodClosure((Method)PMethod11286, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHost_port_, MC_SMB_openConnectionToHost_port_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode11295 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod11294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11295, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod11294, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_socket_0_0 = new_Variable_named(L"socket", 0);
    Array PArray11297 = new_Array_with(1, (Optr)VAR_socket_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11299 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    // socket:. 
    Send PSend11300 = new_Send((Optr)PSend11299, SMB_socket_, 1, (Optr)VAR_socket_0_0);
    Array PThreadedCode11298 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11299, (Optr)&t_push_variable, (Optr)VAR_socket_0_0, (Optr)&t_send1, (Optr)PSend11300, (Optr)&t_method_return);
    Method PMethod11296 = new_Method_with(PArray11297, empty_Array, empty_Array, PThreadedCode11298, 1, PSend11300);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod11296, HEADER(IO_SocketStream_Class));
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