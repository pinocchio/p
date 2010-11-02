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
    Array PArray10330 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10332 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10332, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10329 = new_Method_with(PArray10330, empty_Array, empty_Array, PThreadedCode10331, 2, PAssign10332, self);
    
    MethodClosure MC_SMB_shouldSignal_ = new_MethodClosure((Method)PMethod10329, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal_, MC_SMB_shouldSignal_);
}


static void init_SMB_binary() {
    Symbol SMB_binary = new_Symbol(L"binary");
    Assign PAssign10335 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)true_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10336 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10334 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10335, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10336, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10334, 3, PAssign10335, PSend10336, self);
    
    MethodClosure MC_SMB_binary = new_MethodClosure((Method)PMethod10333, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_binary, MC_SMB_binary);
}


static void init_SMB_nextLine() {
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    // nextLineCrLf. 
    Send PSend10339 = new_Send((Optr)self, SMB_nextLineCrLf, 0);
    Array PThreadedCode10338 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10339, (Optr)&t_method_return);
    Method PMethod10337 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10338, 1, PSend10339);
    
    MethodClosure MC_SMB_nextLine = new_MethodClosure((Method)PMethod10337, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLine, MC_SMB_nextLine);
}


static void init_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10342 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10343 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10342);
    Array PThreadedCode10341 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10342, (Optr)&t_send1, (Optr)PSend10343, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10341, 2, PSend10343, self);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod10340, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_crlf, MC_SMB_crlf);
}


static void init_SMB_noTimeout() {
    Symbol SMB_noTimeout = new_Symbol(L"noTimeout");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10346 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)int_0_Const);
    Array PThreadedCode10345 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign10346, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10344 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10345, 2, PAssign10346, self);
    
    MethodClosure MC_SMB_noTimeout = new_MethodClosure((Method)PMethod10344, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_noTimeout, MC_SMB_noTimeout);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    String string_10349 = new_String(L"SocketStream>>receiveData");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10349_Const = new_Constant((Optr)string_10349);
    // warn:. 
    Send PSend10350 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10349_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_10355 = new_String(L"SocketStream>>receiveData: should signal");
    Constant string_10355_Const = new_Constant((Optr)string_10355);
    // warn:. 
    Send PSend10356 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10355_Const);
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    // shouldTimeout. 
    Send PSend10357 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10361 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10361_Const = new_Constant((Optr)string_10361);
    // warn:. 
    Send PSend10362 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10361_Const);
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    // receiveDataSignallingTimeout:into:startingAt:. 
    Send PSend10363 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10360 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10361, (Optr)&t_send1, (Optr)PSend10362, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10363, (Optr)&t_block_return);
    Block PBlock10359 = new_Block_with(empty_Array, empty_Array, PThreadedCode10360, 2, PSend10362, PSend10363);
    String string_10366 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10366_Const = new_Constant((Optr)string_10366);
    // warn:. 
    Send PSend10367 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10366_Const);
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    // receiveDataSignallingClosedInto:startingAt:. 
    Send PSend10368 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingClosedInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10365 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10366, (Optr)&t_send1, (Optr)PSend10367, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10368, (Optr)&t_block_return);
    Block PBlock10364 = new_Block_with(empty_Array, empty_Array, PThreadedCode10365, 2, PSend10367, PSend10368);
    // ifTrue:ifFalse:. 
    Send PSend10358 = new_Send((Optr)PSend10357, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10359, (Optr)PBlock10364);
    Array PThreadedCode10354 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10355, (Optr)&t_send1, (Optr)PSend10356, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10357, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10358, (Optr)PBlock10359, (Optr)PBlock10364, (Optr)&t_block_return);
    Block PBlock10353 = new_Block_with(empty_Array, empty_Array, PThreadedCode10354, 2, PSend10356, PSend10358);
    String string_10371 = new_String(L"SocketStream>>receiveData: should NOT signal");
    Constant string_10371_Const = new_Constant((Optr)string_10371);
    // warn:. 
    Send PSend10372 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10371_Const);
    // shouldTimeout. 
    Send PSend10373 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10377 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10377_Const = new_Constant((Optr)string_10377);
    // warn:. 
    Send PSend10378 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10377_Const);
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    // receiveDataTimeout:into:startingAt:. 
    Send PSend10379 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10376 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10377, (Optr)&t_send1, (Optr)PSend10378, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10379, (Optr)&t_block_return);
    Block PBlock10375 = new_Block_with(empty_Array, empty_Array, PThreadedCode10376, 2, PSend10378, PSend10379);
    String string_10382 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10382_Const = new_Constant((Optr)string_10382);
    // warn:. 
    Send PSend10383 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10382_Const);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10384 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10381 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10382, (Optr)&t_send1, (Optr)PSend10383, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10384, (Optr)&t_block_return);
    Block PBlock10380 = new_Block_with(empty_Array, empty_Array, PThreadedCode10381, 2, PSend10383, PSend10384);
    // ifTrue:ifFalse:. 
    Send PSend10374 = new_Send((Optr)PSend10373, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10375, (Optr)PBlock10380);
    Array PThreadedCode10370 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10371, (Optr)&t_send1, (Optr)PSend10372, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10373, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10374, (Optr)PBlock10375, (Optr)PBlock10380, (Optr)&t_block_return);
    Block PBlock10369 = new_Block_with(empty_Array, empty_Array, PThreadedCode10370, 2, PSend10372, PSend10374);
    // ifTrue:ifFalse:. 
    Send PSend10352 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10353, (Optr)PBlock10369);
    Assign PAssign10351 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10352);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10385 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10348 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10349, (Optr)&t_send1, (Optr)PSend10350, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10351, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10352, (Optr)PBlock10353, (Optr)PBlock10369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10385, (Optr)&t_method_return);
    Method PMethod10347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10348, 3, PSend10350, PAssign10351, PSend10385);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod10347, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_isBinary() {
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    Array PThreadedCode10387 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_method_return);
    Method PMethod10386 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10387, 1, slot_IO_SocketStream_binary);
    
    MethodClosure MC_SMB_isBinary = new_MethodClosure((Method)PMethod10386, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isBinary, MC_SMB_isBinary);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper10390 = new_Super(SMB_initialize, 0);
    Assign PAssign10391 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)true_Const);
    Assign PAssign10392 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)true_Const);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10393 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)int_0_Const);
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    Assign PAssign10394 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)int_4096_Const);
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend10395 = new_Send((Optr)self, SMB_ascii, 0);
    Array PThreadedCode10389 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper10390, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10391, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10392, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10393, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10394, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10395, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10389, 7, PSuper10390, PAssign10391, PAssign10392, PAssign10393, PAssign10394, PSend10395, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10388, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_peekFor_() {
    Symbol SMB_peekFor_ = new_Symbol(L"peekFor:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray10397 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_nextObject_0_1 = new_Variable_named(L"nextObject", 0);
    Array PArray10398 = new_Array_with(1, (Optr)VAR_nextObject_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10401 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10403 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10407 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10406 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10407, (Optr)&t_block_return);
    Block PBlock10405 = new_Block_with(empty_Array, empty_Array, PThreadedCode10406, 1, PSend10407);
    // ifTrue:. 
    Send PSend10404 = new_Send((Optr)PSend10403, SMB_ifTrue_, 1, (Optr)PBlock10405);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10408 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10412 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10413 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10417 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10416 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10417, (Optr)&t_block_return);
    Block PBlock10415 = new_Block_with(empty_Array, empty_Array, PThreadedCode10416, 1, PSend10417);
    // ifTrue:. 
    Send PSend10414 = new_Send((Optr)PSend10413, SMB_ifTrue_, 1, (Optr)PBlock10415);
    Array PThreadedCode10411 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10412, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10413, (Optr)&t_send_ifTrue_, (Optr)PSend10414, (Optr)PBlock10415, (Optr)&t_block_return);
    Block PBlock10410 = new_Block_with(empty_Array, empty_Array, PThreadedCode10411, 2, PSend10412, PSend10414);
    // ifTrue:. 
    Send PSend10409 = new_Send((Optr)PSend10408, SMB_ifTrue_, 1, (Optr)PBlock10410);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10419 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Assign PAssign10418 = new_Assign((Optr)VAR_nextObject_0_1, (Optr)PSend10419);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10420 = new_Send((Optr)VAR_nextObject_0_1, SMB__equals_, 1, (Optr)VAR_aCharacterOrByte_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10425 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10424 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10425);
    // escape:. 
    Send PSend10426 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10423 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10424, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10426, (Optr)&t_block_return);
    Block PBlock10422 = new_Block_with(empty_Array, empty_Array, PThreadedCode10423, 2, PAssign10424, PSend10426);
    // ifTrue:. 
    Send PSend10421 = new_Send((Optr)PSend10420, SMB_ifTrue_, 1, (Optr)PBlock10422);
    Array PThreadedCode10402 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10403, (Optr)&t_send_ifTrue_, (Optr)PSend10404, (Optr)PBlock10405, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10408, (Optr)&t_send_ifTrue_, (Optr)PSend10409, (Optr)PBlock10410, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10418, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10419, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_send1, (Optr)PSend10420, (Optr)&t_send_ifTrue_, (Optr)PSend10421, (Optr)PBlock10422, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock10400 = new_Block_with(PArray10401, empty_Array, PThreadedCode10402, 5, PSend10404, PSend10409, PAssign10418, PSend10421, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10427 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10400);
    Array PThreadedCode10399 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10400, (Optr)&t_send1, (Optr)PSend10427, (Optr)&t_method_return);
    Method PMethod10396 = new_Method_with(PArray10397, PArray10398, empty_Array, PThreadedCode10399, 1, PSend10427);
    
    MethodClosure MC_SMB_peekFor_ = new_MethodClosure((Method)PMethod10396, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekFor_, MC_SMB_peekFor_);
}


static void init_SMB_peekForAll_() {
    Symbol SMB_peekForAll_ = new_Symbol(L"peekForAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10429 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_sz_0_1 = new_Variable_named(L"sz", 0);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray10430 = new_Array_with(2, (Optr)VAR_sz_0_1, (Optr)VAR_start_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10433 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10436 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Assign PAssign10435 = new_Assign((Optr)VAR_sz_0_1, (Optr)PSend10436);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10437 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10438 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10439 = new_Send((Optr)PSend10438, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend10440 = new_Send((Optr)PSend10439, SMB__lt_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10444 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10443 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10444, (Optr)&t_block_return);
    Block PBlock10442 = new_Block_with(empty_Array, empty_Array, PThreadedCode10443, 1, PSend10444);
    // ifTrue:. 
    Send PSend10441 = new_Send((Optr)PSend10440, SMB_ifTrue_, 1, (Optr)PBlock10442);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10446 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10445 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend10446);
    Symbol SMB_findString_startingAt_ = new_Symbol(L"findString:startingAt:");
    // findString:startingAt:. 
    Send PSend10447 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_findString_startingAt_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_start_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10448 = new_Send((Optr)PSend10447, SMB__equals_, 1, (Optr)VAR_start_0_2);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend10452 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10451 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10452, (Optr)&t_block_return);
    Block PBlock10450 = new_Block_with(empty_Array, empty_Array, PThreadedCode10451, 1, PSend10452);
    // ifFalse:. 
    Send PSend10449 = new_Send((Optr)PSend10448, SMB_ifFalse_, 1, (Optr)PBlock10450);
    // +. 
    Send PSend10454 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_sz_0_1);
    Assign PAssign10453 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10454);
    Array PThreadedCode10434 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign10435, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend10436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10437, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10438, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10439, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10440, (Optr)&t_send_ifTrue_, (Optr)PSend10441, (Optr)PBlock10442, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10445, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10446, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send2, (Optr)PSend10447, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send1, (Optr)PSend10448, (Optr)&t_send_ifFalse_, (Optr)PSend10449, (Optr)PBlock10450, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10453, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10454, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock10432 = new_Block_with(PArray10433, empty_Array, PThreadedCode10434, 7, PAssign10435, PSend10437, PSend10441, PAssign10445, PSend10449, PAssign10453, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10455 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10432);
    Array PThreadedCode10431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10432, (Optr)&t_send1, (Optr)PSend10455, (Optr)&t_method_return);
    Method PMethod10428 = new_Method_with(PArray10429, PArray10430, empty_Array, PThreadedCode10431, 1, PSend10455);
    
    MethodClosure MC_SMB_peekForAll_ = new_MethodClosure((Method)PMethod10428, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekForAll_, MC_SMB_peekForAll_);
}


static void init_SMB_receiveAvailableData() {
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10459 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10458 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10459);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10460 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10457 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10458, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10459, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10460, (Optr)&t_method_return);
    Method PMethod10456 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10457, 2, PAssign10458, PSend10460);
    
    MethodClosure MC_SMB_receiveAvailableData = new_MethodClosure((Method)PMethod10456, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveAvailableData, MC_SMB_receiveAvailableData);
}


static void init_SMB_autoFlush_() {
    Symbol SMB_autoFlush_ = new_Symbol(L"autoFlush:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10462 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10464 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10463 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10464, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10461 = new_Method_with(PArray10462, empty_Array, empty_Array, PThreadedCode10463, 2, PAssign10464, self);
    
    MethodClosure MC_SMB_autoFlush_ = new_MethodClosure((Method)PMethod10461, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush_, MC_SMB_autoFlush_);
}


static void init_SMB_nextLineCrLf() {
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10467 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend10468 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend10467);
    Array PThreadedCode10466 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10467, (Optr)&t_send1, (Optr)PSend10468, (Optr)&t_method_return);
    Method PMethod10465 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10466, 1, PSend10468);
    
    MethodClosure MC_SMB_nextLineCrLf = new_MethodClosure((Method)PMethod10465, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineCrLf, MC_SMB_nextLineCrLf);
}


static void init_SMB_isStream() {
    Symbol SMB_isStream = new_Symbol(L"isStream");
    Array PThreadedCode10470 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod10469 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10470, 1, true_Const);
    
    MethodClosure MC_SMB_isStream = new_MethodClosure((Method)PMethod10469, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isStream, MC_SMB_isStream);
}


static void init_SMB_receiveData_() {
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    Variable VAR_nBytes_0_0 = new_Variable_named(L"nBytes", 0);
    Array PArray10472 = new_Array_with(1, (Optr)VAR_nBytes_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10476 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10477 = new_Send((Optr)PSend10476, SMB_not, 0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10480 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10481 = new_Send((Optr)VAR_nBytes_0_0, SMB__gt_, 1, (Optr)PSend10480);
    Array PThreadedCode10479 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_nBytes_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10480, (Optr)&t_send1, (Optr)PSend10481, (Optr)&t_block_return);
    Block PBlock10478 = new_Block_with(empty_Array, empty_Array, PThreadedCode10479, 1, PSend10481);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10482 = new_Send((Optr)PSend10477, SMB_and_, 1, (Optr)PBlock10478);
    Array PThreadedCode10475 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10476, (Optr)&t_send0, (Optr)PSend10477, (Optr)&t_push_closure, (Optr)PBlock10478, (Optr)&t_send1, (Optr)PSend10482, (Optr)&t_block_return);
    Block PBlock10474 = new_Block_with(empty_Array, empty_Array, PThreadedCode10475, 1, PSend10482);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10485 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10484 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10485, (Optr)&t_block_return);
    Block PBlock10483 = new_Block_with(empty_Array, empty_Array, PThreadedCode10484, 1, PSend10485);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10486 = new_Send((Optr)PBlock10474, SMB_whileTrue_, 1, (Optr)PBlock10483);
    Array PThreadedCode10473 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock10474, (Optr)&t_push_closure, (Optr)PBlock10483, (Optr)&t_send1, (Optr)PSend10486, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10471 = new_Method_with(PArray10472, empty_Array, empty_Array, PThreadedCode10473, 2, PSend10486, self);
    
    MethodClosure MC_SMB_receiveData_ = new_MethodClosure((Method)PMethod10471, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData_, MC_SMB_receiveData_);
}


static void init_SMB_streamBuffer_() {
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray10488 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend10490 = new_Send((Optr)self, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode10493 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ByteArray_classReference, (Optr)&t_block_return);
    Block PBlock10492 = new_Block_with(empty_Array, empty_Array, PThreadedCode10493, 1, ByteArray_classReference);
    Array PThreadedCode10495 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_block_return);
    Block PBlock10494 = new_Block_with(empty_Array, empty_Array, PThreadedCode10495, 1, String_classReference);
    // ifTrue:ifFalse:. 
    Send PSend10491 = new_Send((Optr)PSend10490, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10492, (Optr)PBlock10494);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend10496 = new_Send((Optr)PSend10491, SMB_new_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode10489 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10490, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10491, (Optr)PBlock10492, (Optr)PBlock10494, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend10496, (Optr)&t_method_return);
    Method PMethod10487 = new_Method_with(PArray10488, empty_Array, empty_Array, PThreadedCode10489, 1, PSend10496);
    
    MethodClosure MC_SMB_streamBuffer_ = new_MethodClosure((Method)PMethod10487, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_streamBuffer_, MC_SMB_streamBuffer_);
}


static void init_SMB_socket_() {
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray10498 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Assign PAssign10500 = new_Assign((Optr)slot_IO_SocketStream_socket, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode10499 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10500, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10497 = new_Method_with(PArray10498, empty_Array, empty_Array, PThreadedCode10499, 2, PAssign10500, self);
    
    MethodClosure MC_SMB_socket_ = new_MethodClosure((Method)PMethod10497, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket_, MC_SMB_socket_);
}


static void init_SMB_ascii() {
    Symbol SMB_ascii = new_Symbol(L"ascii");
    Assign PAssign10503 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)false_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10504 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10502 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10503, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10504, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10501 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10502, 3, PAssign10503, PSend10504, self);
    
    MethodClosure MC_SMB_ascii = new_MethodClosure((Method)PMethod10501, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ascii, MC_SMB_ascii);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray10506 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Assign PAssign10508 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)VAR_seconds_0_0);
    Array PThreadedCode10507 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10508, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10505 = new_Method_with(PArray10506, empty_Array, empty_Array, PThreadedCode10507, 2, PAssign10508, self);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod10505, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_shouldTimeout() {
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend10511 = new_Send((Optr)self, SMB_timeout, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10512 = new_Send((Optr)PSend10511, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode10510 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10511, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10512, (Optr)&t_method_return);
    Method PMethod10509 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10510, 1, PSend10512);
    
    MethodClosure MC_SMB_shouldTimeout = new_MethodClosure((Method)PMethod10509, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldTimeout, MC_SMB_shouldTimeout);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10516 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10518 = new_String(L"SocketStream>>peek");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10518_Const = new_Constant((Optr)string_10518);
    // warn:. 
    Send PSend10519 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10518_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10520 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10524 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10523 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10524, (Optr)&t_block_return);
    Block PBlock10522 = new_Block_with(empty_Array, empty_Array, PThreadedCode10523, 1, PSend10524);
    // ifTrue:. 
    Send PSend10521 = new_Send((Optr)PSend10520, SMB_ifTrue_, 1, (Optr)PBlock10522);
    String string_10525 = new_String(L"SocketStream>>peek: not at end");
    Constant string_10525_Const = new_Constant((Optr)string_10525);
    // warn:. 
    Send PSend10526 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10525_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10527 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    String string_10531 = new_String(L"SocketStream>>peek: in buffer is empty");
    Constant string_10531_Const = new_Constant((Optr)string_10531);
    // warn:. 
    Send PSend10532 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10531_Const);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10533 = new_Send((Optr)self, SMB_receiveData, 0);
    String string_10534 = new_String(L"SocketStream>>peek: recevied data");
    Constant string_10534_Const = new_Constant((Optr)string_10534);
    // warn:. 
    Send PSend10535 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10534_Const);
    // atEnd. 
    Send PSend10536 = new_Send((Optr)self, SMB_atEnd, 0);
    String string_10540 = new_String(L"SocketStream>>peek: at end");
    Constant string_10540_Const = new_Constant((Optr)string_10540);
    // warn:. 
    Send PSend10541 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10540_Const);
    // escape:. 
    Send PSend10542 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10539 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10540, (Optr)&t_send1, (Optr)PSend10541, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10542, (Optr)&t_block_return);
    Block PBlock10538 = new_Block_with(empty_Array, empty_Array, PThreadedCode10539, 2, PSend10541, PSend10542);
    // ifTrue:. 
    Send PSend10537 = new_Send((Optr)PSend10536, SMB_ifTrue_, 1, (Optr)PBlock10538);
    Array PThreadedCode10530 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10531, (Optr)&t_send1, (Optr)PSend10532, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10533, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10534, (Optr)&t_send1, (Optr)PSend10535, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10536, (Optr)&t_send_ifTrue_, (Optr)PSend10537, (Optr)PBlock10538, (Optr)&t_block_return);
    Block PBlock10529 = new_Block_with(empty_Array, empty_Array, PThreadedCode10530, 4, PSend10532, PSend10533, PSend10535, PSend10537);
    // ifTrue:. 
    Send PSend10528 = new_Send((Optr)PSend10527, SMB_ifTrue_, 1, (Optr)PBlock10529);
    String string_10543 = new_String(L"SocketStream>>peek: return...");
    Constant string_10543_Const = new_Constant((Optr)string_10543);
    // warn:. 
    Send PSend10544 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10543_Const);
    String string_10545 = new_String(L"SocketStream>>peek: in buffer is");
    Constant string_10545_Const = new_Constant((Optr)string_10545);
    // warn:. 
    Send PSend10546 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10545_Const);
    // warn:. 
    Send PSend10547 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    String string_10548 = new_String(L"SocketStream>>peek: last read is");
    Constant string_10548_Const = new_Constant((Optr)string_10548);
    // warn:. 
    Send PSend10549 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10548_Const);
    // warn:. 
    Send PSend10550 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10551 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10552 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)PSend10551);
    Array PThreadedCode10517 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10518, (Optr)&t_send1, (Optr)PSend10519, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10520, (Optr)&t_send_ifTrue_, (Optr)PSend10521, (Optr)PBlock10522, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10525, (Optr)&t_send1, (Optr)PSend10526, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10527, (Optr)&t_send_ifTrue_, (Optr)PSend10528, (Optr)PBlock10529, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10543, (Optr)&t_send1, (Optr)PSend10544, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10545, (Optr)&t_send1, (Optr)PSend10546, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend10547, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10548, (Optr)&t_send1, (Optr)PSend10549, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10550, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10551, (Optr)&t_send1, (Optr)PSend10552, (Optr)&t_method_return);
    Block PBlock10515 = new_Block_with(PArray10516, empty_Array, PThreadedCode10517, 10, PSend10519, PSend10521, PSend10526, PSend10528, PSend10544, PSend10546, PSend10547, PSend10549, PSend10550, PSend10552);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10553 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10515);
    Array PThreadedCode10514 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10515, (Optr)&t_send1, (Optr)PSend10553, (Optr)&t_method_return);
    Method PMethod10513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10514, 1, PSend10553);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod10513, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_shouldSignal() {
    Symbol SMB_shouldSignal = new_Symbol(L"shouldSignal");
    Array PThreadedCode10555 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_method_return);
    Method PMethod10554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10555, 1, slot_IO_SocketStream_shouldSignal);
    
    MethodClosure MC_SMB_shouldSignal = new_MethodClosure((Method)PMethod10554, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal, MC_SMB_shouldSignal);
}


static void init_SMB_bufferSize() {
    Symbol SMB_bufferSize = new_Symbol(L"bufferSize");
    Array PThreadedCode10557 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_method_return);
    Method PMethod10556 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10557, 1, slot_IO_SocketStream_bufferSize);
    
    MethodClosure MC_SMB_bufferSize = new_MethodClosure((Method)PMethod10556, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize, MC_SMB_bufferSize);
}


static void init_SMB_nextPutAllFlush_() {
    Symbol SMB_nextPutAllFlush_ = new_Symbol(L"nextPutAllFlush:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10559 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10560 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10566 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10565 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10566, (Optr)&t_block_return);
    Block PBlock10564 = new_Block_with(empty_Array, empty_Array, PThreadedCode10565, 1, PSend10566);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10569 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10568 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10569, (Optr)&t_block_return);
    Block PBlock10567 = new_Block_with(empty_Array, empty_Array, PThreadedCode10568, 1, PSend10569);
    // ifTrue:ifFalse:. 
    Send PSend10563 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10564, (Optr)PBlock10567);
    Assign PAssign10562 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10563);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10570 = new_Send((Optr)self, SMB_flush, 0);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend10571 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10577 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend10578 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)VAR_toPut_0_1, (Optr)PSend10577);
    Array PThreadedCode10576 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10577, (Optr)&t_send2, (Optr)PSend10578, (Optr)&t_block_return);
    Block PBlock10575 = new_Block_with(empty_Array, empty_Array, PThreadedCode10576, 1, PSend10578);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray10580 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode10584 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock10583 = new_Block_with(empty_Array, empty_Array, PThreadedCode10584, 0);
    // ifFalse:. 
    Send PSend10582 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock10583);
    Array PThreadedCode10581 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend10582, (Optr)PBlock10583, (Optr)&t_method_return);
    Block PBlock10579 = new_Block_with(PArray10580, empty_Array, PThreadedCode10581, 1, PSend10582);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10585 = new_Send((Optr)PBlock10575, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock10579);
    Array PThreadedCode10574 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock10575, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock10579, (Optr)&t_send2, (Optr)PSend10585, (Optr)&t_block_return);
    Block PBlock10573 = new_Block_with(empty_Array, empty_Array, PThreadedCode10574, 1, PSend10585);
    // ifFalse:. 
    Send PSend10572 = new_Send((Optr)PSend10571, SMB_ifFalse_, 1, (Optr)PBlock10573);
    Array PThreadedCode10561 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign10562, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10563, (Optr)PBlock10564, (Optr)PBlock10567, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10570, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10571, (Optr)&t_send_ifFalse_, (Optr)PSend10572, (Optr)PBlock10573, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10558 = new_Method_with(PArray10559, PArray10560, empty_Array, PThreadedCode10561, 4, PAssign10562, PSend10570, PSend10572, self);
    
    MethodClosure MC_SMB_nextPutAllFlush_ = new_MethodClosure((Method)PMethod10558, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAllFlush_, MC_SMB_nextPutAllFlush_);
}


static void init_SMB_outBufferSize() {
    Symbol SMB_outBufferSize = new_Symbol(L"outBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10588 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10587 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10588, (Optr)&t_method_return);
    Method PMethod10586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10587, 1, PSend10588);
    
    MethodClosure MC_SMB_outBufferSize = new_MethodClosure((Method)PMethod10586, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_outBufferSize, MC_SMB_outBufferSize);
}


static void init_SMB_sendCommand_() {
    Symbol SMB_sendCommand_ = new_Symbol(L"sendCommand:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10590 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray10593 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10595 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10596 = new_Send((Optr)VAR_aString_0_0, SMB__append_, 1, (Optr)PSend10595);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10597 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)PSend10596);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10598 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Array PThreadedCode10594 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10595, (Optr)&t_send1, (Optr)PSend10596, (Optr)&t_send1, (Optr)PSend10597, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend10598, (Optr)&t_method_return);
    Block PBlock10592 = new_Block_with(PArray10593, empty_Array, PThreadedCode10594, 2, PSend10597, PSend10598);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10599 = new_Send((Optr)PBlock10592, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10591 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock10592, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10599, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10589 = new_Method_with(PArray10590, empty_Array, empty_Array, PThreadedCode10591, 2, PSend10599, self);
    
    MethodClosure MC_SMB_sendCommand_ = new_MethodClosure((Method)PMethod10589, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_sendCommand_, MC_SMB_sendCommand_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10602 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10605 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10606 = new_Send((Optr)PSend10605, SMB_not, 0);
    Array PThreadedCode10604 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10605, (Optr)&t_send0, (Optr)PSend10606, (Optr)&t_block_return);
    Block PBlock10603 = new_Block_with(empty_Array, empty_Array, PThreadedCode10604, 1, PSend10606);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10607 = new_Send((Optr)PSend10602, SMB_and_, 1, (Optr)PBlock10603);
    Array PThreadedCode10601 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10602, (Optr)&t_push_closure, (Optr)PBlock10603, (Optr)&t_send1, (Optr)PSend10607, (Optr)&t_method_return);
    Method PMethod10600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10601, 1, PSend10607);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod10600, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_checkFlush() {
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10612 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Array PThreadedCode10611 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend10612, (Optr)&t_block_return);
    Block PBlock10610 = new_Block_with(empty_Array, empty_Array, PThreadedCode10611, 1, PSend10612);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10613 = new_Send((Optr)slot_IO_SocketStream_autoFlush, SMB_and_, 1, (Optr)PBlock10610);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10617 = new_Send((Optr)self, SMB_flush, 0);
    Array PThreadedCode10616 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10617, (Optr)&t_block_return);
    Block PBlock10615 = new_Block_with(empty_Array, empty_Array, PThreadedCode10616, 1, PSend10617);
    // ifTrue:. 
    Send PSend10614 = new_Send((Optr)PSend10613, SMB_ifTrue_, 1, (Optr)PBlock10615);
    Array PThreadedCode10609 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_push_closure, (Optr)PBlock10610, (Optr)&t_send1, (Optr)PSend10613, (Optr)&t_send_ifTrue_, (Optr)PSend10614, (Optr)PBlock10615, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10608 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10609, 2, PSend10614, self);
    
    MethodClosure MC_SMB_checkFlush = new_MethodClosure((Method)PMethod10608, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_checkFlush, MC_SMB_checkFlush);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10619 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10620 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10622 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10624 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10623 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10624);
    // +. 
    Send PSend10627 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10628 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10626 = new_Send((Optr)PSend10627, SMB_min_, 1, (Optr)PSend10628);
    Assign PAssign10625 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10626);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10629 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10621 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10622, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10623, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10624, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10625, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10627, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10628, (Optr)&t_send1, (Optr)PSend10626, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend10629, (Optr)&t_method_return);
    Method PMethod10618 = new_Method_with(PArray10619, PArray10620, empty_Array, PThreadedCode10621, 4, PSend10622, PAssign10623, PAssign10625, PSend10629);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod10618, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_socket() {
    Symbol SMB_socket = new_Symbol(L"socket");
    Array PThreadedCode10631 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_method_return);
    Method PMethod10630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10631, 1, slot_IO_SocketStream_socket);
    
    MethodClosure MC_SMB_socket = new_MethodClosure((Method)PMethod10630, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket, MC_SMB_socket);
}


static void init_SMB_adjustInBuffer_() {
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    Variable VAR_bytesRead_0_0 = new_Variable_named(L"bytesRead", 0);
    Array PArray10633 = new_Array_with(1, (Optr)VAR_bytesRead_0_0);
    Variable VAR_old_0_1 = new_Variable_named(L"old", 0);
    Array PArray10634 = new_Array_with(1, (Optr)VAR_old_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10637 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10639 = new_String(L"SocketStream>>adjustInBuffer:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10639_Const = new_Constant((Optr)string_10639);
    // warn:. 
    Send PSend10640 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10639_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10641 = new_Send((Optr)VAR_bytesRead_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10645 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10644 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10645, (Optr)&t_block_return);
    Block PBlock10643 = new_Block_with(empty_Array, empty_Array, PThreadedCode10644, 1, PSend10645);
    // ifTrue:. 
    Send PSend10642 = new_Send((Optr)PSend10641, SMB_ifTrue_, 1, (Optr)PBlock10643);
    Assign PAssign10646 = new_Assign((Optr)VAR_old_0_1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10648 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__plus_, 1, (Optr)VAR_bytesRead_0_0);
    Assign PAssign10647 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10648);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10649 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10650 = new_Send((Optr)PSend10649, SMB__minus_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10651 = new_Send((Optr)PSend10650, SMB__lt_, 1, (Optr)int_1024_Const);
    SmallInt int_512 = new_SmallInt(512);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_512_Const = new_Constant((Optr)int_512);
    // >. 
    Send PSend10655 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__gt_, 1, (Optr)int_512_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    // moveInBufferDown. 
    Send PSend10659 = new_Send((Optr)self, SMB_moveInBufferDown, 0);
    // -. 
    Send PSend10660 = new_Send((Optr)VAR_old_0_1, SMB__minus_, 1, (Optr)PSend10659);
    // escape:. 
    Send PSend10661 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10660);
    Array PThreadedCode10658 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10659, (Optr)&t_send1, (Optr)PSend10660, (Optr)&t_send1, (Optr)PSend10661, (Optr)&t_block_return);
    Block PBlock10657 = new_Block_with(empty_Array, empty_Array, PThreadedCode10658, 1, PSend10661);
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    // growInBuffer. 
    Send PSend10664 = new_Send((Optr)self, SMB_growInBuffer, 0);
    Array PThreadedCode10663 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10664, (Optr)&t_block_return);
    Block PBlock10662 = new_Block_with(empty_Array, empty_Array, PThreadedCode10663, 1, PSend10664);
    // ifTrue:ifFalse:. 
    Send PSend10656 = new_Send((Optr)PSend10655, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10657, (Optr)PBlock10662);
    Array PThreadedCode10654 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push1, (Optr)int_512, (Optr)&t_send1, (Optr)PSend10655, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10656, (Optr)PBlock10657, (Optr)PBlock10662, (Optr)&t_block_return);
    Block PBlock10653 = new_Block_with(empty_Array, empty_Array, PThreadedCode10654, 1, PSend10656);
    // ifTrue:. 
    Send PSend10652 = new_Send((Optr)PSend10651, SMB_ifTrue_, 1, (Optr)PBlock10653);
    Array PThreadedCode10638 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10639, (Optr)&t_send1, (Optr)PSend10640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10641, (Optr)&t_send_ifTrue_, (Optr)PSend10642, (Optr)PBlock10643, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10646, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10647, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_send1, (Optr)PSend10648, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10649, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10650, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10651, (Optr)&t_send_ifTrue_, (Optr)PSend10652, (Optr)PBlock10653, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_method_return);
    Block PBlock10636 = new_Block_with(PArray10637, empty_Array, PThreadedCode10638, 6, PSend10640, PSend10642, PAssign10646, PAssign10647, PSend10652, VAR_old_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10665 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10636);
    Array PThreadedCode10635 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10636, (Optr)&t_send1, (Optr)PSend10665, (Optr)&t_method_return);
    Method PMethod10632 = new_Method_with(PArray10633, PArray10634, empty_Array, PThreadedCode10635, 1, PSend10665);
    
    MethodClosure MC_SMB_adjustInBuffer_ = new_MethodClosure((Method)PMethod10632, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustInBuffer_, MC_SMB_adjustInBuffer_);
}


static void init_SMB_ifStale_() {
    Symbol SMB_ifStale_ = new_Symbol(L"ifStale:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray10667 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10669 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend10673 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode10672 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend10673, (Optr)&t_block_return);
    Block PBlock10671 = new_Block_with(empty_Array, empty_Array, PThreadedCode10672, 1, PSend10673);
    // ifFalse:. 
    Send PSend10670 = new_Send((Optr)PSend10669, SMB_ifFalse_, 1, (Optr)PBlock10671);
    Array PThreadedCode10668 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10669, (Optr)&t_send_ifFalse_, (Optr)PSend10670, (Optr)PBlock10671, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10666 = new_Method_with(PArray10667, empty_Array, empty_Array, PThreadedCode10668, 2, PSend10670, self);
    
    MethodClosure MC_SMB_ifStale_ = new_MethodClosure((Method)PMethod10666, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ifStale_, MC_SMB_ifStale_);
}


static void init_SMB_nextAvailable() {
    Symbol SMB_nextAvailable = new_Symbol(L"nextAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10677 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10679 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10683 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10684 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10683);
    Array PThreadedCode10682 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10683, (Optr)&t_send1, (Optr)PSend10684, (Optr)&t_block_return);
    Block PBlock10681 = new_Block_with(empty_Array, empty_Array, PThreadedCode10682, 1, PSend10684);
    // ifFalse:. 
    Send PSend10680 = new_Send((Optr)PSend10679, SMB_ifFalse_, 1, (Optr)PBlock10681);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10685 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10689 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10688 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10689, (Optr)&t_block_return);
    Block PBlock10687 = new_Block_with(empty_Array, empty_Array, PThreadedCode10688, 1, PSend10689);
    // ifTrue:. 
    Send PSend10686 = new_Send((Optr)PSend10685, SMB_ifTrue_, 1, (Optr)PBlock10687);
    // nextAllInBuffer. 
    Send PSend10690 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode10678 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10679, (Optr)&t_send_ifFalse_, (Optr)PSend10680, (Optr)PBlock10681, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10685, (Optr)&t_send_ifTrue_, (Optr)PSend10686, (Optr)PBlock10687, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10690, (Optr)&t_method_return);
    Block PBlock10676 = new_Block_with(PArray10677, empty_Array, PThreadedCode10678, 3, PSend10680, PSend10686, PSend10690);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10691 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10676);
    Array PThreadedCode10675 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10676, (Optr)&t_send1, (Optr)PSend10691, (Optr)&t_method_return);
    Method PMethod10674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10675, 1, PSend10691);
    
    MethodClosure MC_SMB_nextAvailable = new_MethodClosure((Method)PMethod10674, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable, MC_SMB_nextAvailable);
}


static void init_SMB_resizeInBuffer_() {
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    Variable VAR_newSize_0_0 = new_Variable_named(L"newSize", 0);
    Array PArray10693 = new_Array_with(1, (Optr)VAR_newSize_0_0);
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend10697 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)VAR_newSize_0_0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10698 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10696 = new_Send((Optr)PSend10697, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10698, (Optr)slot_IO_SocketStream_inBuffer, (Optr)int_1_Const);
    Assign PAssign10695 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend10696);
    Array PThreadedCode10694 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign10695, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newSize_0_0, (Optr)&t_send1, (Optr)PSend10697, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10698, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10696, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10692 = new_Method_with(PArray10693, empty_Array, empty_Array, PThreadedCode10694, 2, PAssign10695, self);
    
    MethodClosure MC_SMB_resizeInBuffer_ = new_MethodClosure((Method)PMethod10692, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resizeInBuffer_, MC_SMB_resizeInBuffer_);
}


static void init_SMB_bufferSize_() {
    Symbol SMB_bufferSize_ = new_Symbol(L"bufferSize:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray10700 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign10702 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)VAR_anInt_0_0);
    Array PThreadedCode10701 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10702, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10699 = new_Method_with(PArray10700, empty_Array, empty_Array, PThreadedCode10701, 2, PAssign10702, self);
    
    MethodClosure MC_SMB_bufferSize_ = new_MethodClosure((Method)PMethod10699, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize_, MC_SMB_bufferSize_);
}


static void init_SMB_isDataAvailable() {
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10706 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10708 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10712 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10711 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10712, (Optr)&t_block_return);
    Block PBlock10710 = new_Block_with(empty_Array, empty_Array, PThreadedCode10711, 1, PSend10712);
    // ifFalse:. 
    Send PSend10709 = new_Send((Optr)PSend10708, SMB_ifFalse_, 1, (Optr)PBlock10710);
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    // dataAvailable. 
    Send PSend10713 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_dataAvailable, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Array PThreadedCode10716 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock10715 = new_Block_with(empty_Array, empty_Array, PThreadedCode10716, 1, false_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray10720 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10722 = new_Send((Optr)VAR__receiver__2_0, SMB_receiveDataIfAvailable, 0);
    // isDataAvailable. 
    Send PSend10723 = new_Send((Optr)VAR__receiver__2_0, SMB_isDataAvailable, 0);
    Array PThreadedCode10721 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10722, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10723, (Optr)&t_method_return);
    Block PBlock10719 = new_Block_with(PArray10720, empty_Array, PThreadedCode10721, 2, PSend10722, PSend10723);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10724 = new_Send((Optr)PBlock10719, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10718 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock10719, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10724, (Optr)&t_block_return);
    Block PBlock10717 = new_Block_with(empty_Array, empty_Array, PThreadedCode10718, 1, PSend10724);
    // ifFalse:ifTrue:. 
    Send PSend10714 = new_Send((Optr)PSend10713, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock10715, (Optr)PBlock10717);
    Array PThreadedCode10707 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10708, (Optr)&t_send_ifFalse_, (Optr)PSend10709, (Optr)PBlock10710, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10713, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend10714, (Optr)PBlock10715, (Optr)PBlock10717, (Optr)&t_method_return);
    Block PBlock10705 = new_Block_with(PArray10706, empty_Array, PThreadedCode10707, 2, PSend10709, PSend10714);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10725 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10705);
    Array PThreadedCode10704 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10705, (Optr)&t_send1, (Optr)PSend10725, (Optr)&t_method_return);
    Method PMethod10703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10704, 1, PSend10725);
    
    MethodClosure MC_SMB_isDataAvailable = new_MethodClosure((Method)PMethod10703, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isDataAvailable, MC_SMB_isDataAvailable);
}


static void init_SMB_adjustOutBuffer_() {
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    Variable VAR_bytesToWrite_0_0 = new_Variable_named(L"bytesToWrite", 0);
    Array PArray10727 = new_Array_with(1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10729 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10730 = new_Send((Optr)PSend10729, SMB__minus_, 1, (Optr)slot_IO_SocketStream_outNextToWrite);
    // -. 
    Send PSend10731 = new_Send((Optr)PSend10730, SMB__minus_, 1, (Optr)VAR_bytesToWrite_0_0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10732 = new_Send((Optr)PSend10731, SMB__lt_, 1, (Optr)int_1024_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // size. 
    Send PSend10741 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend10740 = new_Send((Optr)PSend10741, SMB_max_, 1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10739 = new_Send((Optr)PSend10740, SMB__times_, 1, (Optr)int_2_Const);
    // streamBuffer:. 
    Send PSend10738 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)PSend10739);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // size. 
    Send PSend10742 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10737 = new_Send((Optr)PSend10738, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10742, (Optr)slot_IO_SocketStream_outBuffer, (Optr)int_1_Const);
    Assign PAssign10736 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend10737);
    Array PThreadedCode10735 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign10736, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10741, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10740, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10739, (Optr)&t_send1, (Optr)PSend10738, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10742, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10737, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10734 = new_Block_with(empty_Array, empty_Array, PThreadedCode10735, 1, PAssign10736);
    // ifTrue:. 
    Send PSend10733 = new_Send((Optr)PSend10732, SMB_ifTrue_, 1, (Optr)PBlock10734);
    Array PThreadedCode10728 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10729, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_send1, (Optr)PSend10730, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10731, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10732, (Optr)&t_send_ifTrue_, (Optr)PSend10733, (Optr)PBlock10734, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10726 = new_Method_with(PArray10727, empty_Array, empty_Array, PThreadedCode10728, 2, PSend10733, self);
    
    MethodClosure MC_SMB_adjustOutBuffer_ = new_MethodClosure((Method)PMethod10726, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustOutBuffer_, MC_SMB_adjustOutBuffer_);
}


static void init_SMB_nextAllInBuffer() {
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10745 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10746 = new_Send((Optr)PSend10745, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10747 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10746);
    Array PThreadedCode10744 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10745, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10746, (Optr)&t_send1, (Optr)PSend10747, (Optr)&t_method_return);
    Method PMethod10743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10744, 1, PSend10747);
    
    MethodClosure MC_SMB_nextAllInBuffer = new_MethodClosure((Method)PMethod10743, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAllInBuffer, MC_SMB_nextAllInBuffer);
}


static void init_SMB_skip_() {
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10749 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10751 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10754 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10755 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10753 = new_Send((Optr)PSend10754, SMB_min_, 1, (Optr)PSend10755);
    Assign PAssign10752 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10753);
    Array PThreadedCode10750 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10751, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10752, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10754, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10755, (Optr)&t_send1, (Optr)PSend10753, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10748 = new_Method_with(PArray10749, empty_Array, empty_Array, PThreadedCode10750, 3, PSend10751, PAssign10752, self);
    
    MethodClosure MC_SMB_skip_ = new_MethodClosure((Method)PMethod10748, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_skip_, MC_SMB_skip_);
}


static void init_SMB_nextAvailable_() {
    Symbol SMB_nextAvailable_ = new_Symbol(L"nextAvailable:");
    Variable VAR_howMany_0_0 = new_Variable_named(L"howMany", 0);
    Array PArray10757 = new_Array_with(1, (Optr)VAR_howMany_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10760 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10762 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10766 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10767 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10766);
    Array PThreadedCode10765 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10766, (Optr)&t_send1, (Optr)PSend10767, (Optr)&t_block_return);
    Block PBlock10764 = new_Block_with(empty_Array, empty_Array, PThreadedCode10765, 1, PSend10767);
    // ifFalse:. 
    Send PSend10763 = new_Send((Optr)PSend10762, SMB_ifFalse_, 1, (Optr)PBlock10764);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10768 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10772 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10771 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10772, (Optr)&t_block_return);
    Block PBlock10770 = new_Block_with(empty_Array, empty_Array, PThreadedCode10771, 1, PSend10772);
    // ifTrue:. 
    Send PSend10769 = new_Send((Optr)PSend10768, SMB_ifTrue_, 1, (Optr)PBlock10770);
    // nextInBuffer:. 
    Send PSend10773 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Array PThreadedCode10761 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10762, (Optr)&t_send_ifFalse_, (Optr)PSend10763, (Optr)PBlock10764, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10768, (Optr)&t_send_ifTrue_, (Optr)PSend10769, (Optr)PBlock10770, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10773, (Optr)&t_method_return);
    Block PBlock10759 = new_Block_with(PArray10760, empty_Array, PThreadedCode10761, 3, PSend10763, PSend10769, PSend10773);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10774 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10759);
    Array PThreadedCode10758 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10759, (Optr)&t_send1, (Optr)PSend10774, (Optr)&t_method_return);
    Method PMethod10756 = new_Method_with(PArray10757, empty_Array, empty_Array, PThreadedCode10758, 1, PSend10774);
    
    MethodClosure MC_SMB_nextAvailable_ = new_MethodClosure((Method)PMethod10756, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable_, MC_SMB_nextAvailable_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10777 = new_Send((Optr)self, SMB_flush, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // closeAndDestroy:. 
    Send PSend10778 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_closeAndDestroy_, 1, (Optr)int_30_Const);
    Array PThreadedCode10776 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10777, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend10778, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10776, 3, PSend10777, PSend10778, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod10775, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_inBufferSize() {
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10781 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10782 = new_Send((Optr)PSend10781, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10780 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10781, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10782, (Optr)&t_method_return);
    Method PMethod10779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10780, 1, PSend10782);
    
    MethodClosure MC_SMB_inBufferSize = new_MethodClosure((Method)PMethod10779, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_inBufferSize, MC_SMB_inBufferSize);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray10784 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend10786 = new_Send((Optr)VAR_anObject_0_0, SMB_printOn_, 1, (Optr)self);
    Array PThreadedCode10785 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10786, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10783 = new_Method_with(PArray10784, empty_Array, empty_Array, PThreadedCode10785, 2, PSend10786, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod10783, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10790 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10792 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10796 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10795 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10796, (Optr)&t_block_return);
    Block PBlock10794 = new_Block_with(empty_Array, empty_Array, PThreadedCode10795, 1, PSend10796);
    // ifTrue:. 
    Send PSend10793 = new_Send((Optr)PSend10792, SMB_ifTrue_, 1, (Optr)PBlock10794);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10797 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10801 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10802 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10806 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10805 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10806, (Optr)&t_block_return);
    Block PBlock10804 = new_Block_with(empty_Array, empty_Array, PThreadedCode10805, 1, PSend10806);
    // ifTrue:. 
    Send PSend10803 = new_Send((Optr)PSend10802, SMB_ifTrue_, 1, (Optr)PBlock10804);
    Array PThreadedCode10800 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10801, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10802, (Optr)&t_send_ifTrue_, (Optr)PSend10803, (Optr)PBlock10804, (Optr)&t_block_return);
    Block PBlock10799 = new_Block_with(empty_Array, empty_Array, PThreadedCode10800, 2, PSend10801, PSend10803);
    // ifTrue:. 
    Send PSend10798 = new_Send((Optr)PSend10797, SMB_ifTrue_, 1, (Optr)PBlock10799);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10808 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10807 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10808);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10809 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10791 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10792, (Optr)&t_send_ifTrue_, (Optr)PSend10793, (Optr)PBlock10794, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10797, (Optr)&t_send_ifTrue_, (Optr)PSend10798, (Optr)PBlock10799, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10807, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10808, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10809, (Optr)&t_method_return);
    Block PBlock10789 = new_Block_with(PArray10790, empty_Array, PThreadedCode10791, 4, PSend10793, PSend10798, PAssign10807, PSend10809);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10810 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10789);
    Array PThreadedCode10788 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10789, (Optr)&t_send1, (Optr)PSend10810, (Optr)&t_method_return);
    Method PMethod10787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10788, 1, PSend10810);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod10787, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    // standardTimeout. 
    Send PSend10816 = new_Send((Optr)PSocket_classReference, SMB_standardTimeout, 0);
    Assign PAssign10815 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)PSend10816);
    Array PThreadedCode10814 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign10815, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend10816, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10813 = new_Block_with(empty_Array, empty_Array, PThreadedCode10814, 1, PAssign10815);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10817 = new_Send((Optr)slot_IO_SocketStream_timeout, SMB_ifNil_, 1, (Optr)PBlock10813);
    Array PThreadedCode10812 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_closure, (Optr)PBlock10813, (Optr)&t_send1, (Optr)PSend10817, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_method_return);
    Method PMethod10811 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10812, 2, PSend10817, slot_IO_SocketStream_timeout);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod10811, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_upToAll_() {
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Variable VAR_aStringOrByteArray_0_0 = new_Variable_named(L"aStringOrByteArray", 0);
    Array PArray10819 = new_Array_with(1, (Optr)VAR_aStringOrByteArray_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_sz_0_2 = new_Variable_named(L"sz", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_4 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_5 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray10820 = new_Array_with(5, (Optr)VAR_index_0_1, (Optr)VAR_sz_0_2, (Optr)VAR_result_0_3, (Optr)VAR_lastRecentlyRead_0_4, (Optr)VAR_searchedSoFar_0_5);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10823 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10825 = new_String(L"SocketStream>>upToAll:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10825_Const = new_Constant((Optr)string_10825);
    // warn:. 
    Send PSend10826 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10825_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10828 = new_Send((Optr)VAR_aStringOrByteArray_0_0, SMB_size, 0);
    Assign PAssign10827 = new_Assign((Optr)VAR_sz_0_2, (Optr)PSend10828);
    String string_10829 = new_String(L"SocketStream>>upToAll: sz is ");
    Constant string_10829_Const = new_Constant((Optr)string_10829);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10830 = new_Send((Optr)string_10829_Const, SMB__append_, 1, (Optr)VAR_sz_0_2);
    // warn:. 
    Send PSend10831 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10830);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10832 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)int_0_Const);
    Assign PAssign10833 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)int_0_Const);
    Assign PAssign10834 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    String string_10835 = new_String(L"SocketStream>>upToAll: temps initialized");
    Constant string_10835_Const = new_Constant((Optr)string_10835);
    // warn:. 
    Send PSend10836 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10835_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10839 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10840 = new_Send((Optr)PSend10839, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10843 = new_Send((Optr)VAR_lastRecentlyRead_0_4, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10846 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend10847 = new_Send((Optr)PSend10846, SMB_not, 0);
    Array PThreadedCode10845 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10846, (Optr)&t_send0, (Optr)PSend10847, (Optr)&t_block_return);
    Block PBlock10844 = new_Block_with(empty_Array, empty_Array, PThreadedCode10845, 1, PSend10847);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10848 = new_Send((Optr)PSend10843, SMB_and_, 1, (Optr)PBlock10844);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10851 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend10852 = new_Send((Optr)PSend10851, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode10850 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10851, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend10852, (Optr)&t_block_return);
    Block PBlock10849 = new_Block_with(empty_Array, empty_Array, PThreadedCode10850, 1, PSend10852);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend10853 = new_Send((Optr)PSend10848, SMB_or_, 1, (Optr)PBlock10849);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10857 = new_String(L"SocketStream>>upToAll: we need to read data");
    Constant string_10857_Const = new_Constant((Optr)string_10857);
    // warn:. 
    Send PSend10858 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10857_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10862 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_5);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10861 = new_Send((Optr)PSend10862, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOfSubCollection:startingAt:. 
    Send PSend10860 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_aStringOrByteArray_0_0, (Optr)PSend10861);
    Assign PAssign10859 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend10860);
    String string_10863 = new_String(L"SocketStream>>upToAll: searched for a bit.");
    Constant string_10863_Const = new_Constant((Optr)string_10863);
    // warn:. 
    Send PSend10864 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10863_Const);
    // inBufferSize. 
    Send PSend10866 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign10865 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)PSend10866);
    String string_10867 = new_String(L"SocketStream>>upToAll: this far we searched until");
    Constant string_10867_Const = new_Constant((Optr)string_10867);
    // warn:. 
    Send PSend10868 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10867_Const);
    // warn:. 
    Send PSend10869 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_searchedSoFar_0_5);
    // >. 
    Send PSend10870 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend10873 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)VAR_sz_0_2);
    // >. 
    Send PSend10874 = new_Send((Optr)PSend10873, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10872 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10873, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10874, (Optr)&t_block_return);
    Block PBlock10871 = new_Block_with(empty_Array, empty_Array, PThreadedCode10872, 1, PSend10874);
    // and:. 
    Send PSend10875 = new_Send((Optr)PSend10870, SMB_and_, 1, (Optr)PBlock10871);
    Assign PAssign10879 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode10878 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10879, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10877 = new_Block_with(empty_Array, empty_Array, PThreadedCode10878, 1, PAssign10879);
    // ifTrue:. 
    Send PSend10876 = new_Send((Optr)PSend10875, SMB_ifTrue_, 1, (Optr)PBlock10877);
    Array PThreadedCode10856 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10857, (Optr)&t_send1, (Optr)PSend10858, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10859, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10862, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10861, (Optr)&t_send2, (Optr)PSend10860, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10863, (Optr)&t_send1, (Optr)PSend10864, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10865, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10866, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10867, (Optr)&t_send1, (Optr)PSend10868, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10870, (Optr)&t_push_closure, (Optr)PBlock10871, (Optr)&t_send1, (Optr)PSend10875, (Optr)&t_send_ifTrue_, (Optr)PSend10876, (Optr)PBlock10877, (Optr)&t_block_return);
    Block PBlock10855 = new_Block_with(empty_Array, empty_Array, PThreadedCode10856, 7, PSend10858, PAssign10859, PSend10864, PAssign10865, PSend10868, PSend10869, PSend10876);
    // ifTrue:. 
    Send PSend10854 = new_Send((Optr)PSend10853, SMB_ifTrue_, 1, (Optr)PBlock10855);
    // =. 
    Send PSend10880 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode10842 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_4, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10843, (Optr)&t_push_closure, (Optr)PBlock10844, (Optr)&t_send1, (Optr)PSend10848, (Optr)&t_push_closure, (Optr)PBlock10849, (Optr)&t_send1, (Optr)PSend10853, (Optr)&t_send_ifTrue_, (Optr)PSend10854, (Optr)PBlock10855, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10880, (Optr)&t_block_return);
    Block PBlock10841 = new_Block_with(empty_Array, empty_Array, PThreadedCode10842, 2, PSend10854, PSend10880);
    // and:. 
    Send PSend10881 = new_Send((Optr)PSend10840, SMB_and_, 1, (Optr)PBlock10841);
    Array PThreadedCode10838 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10839, (Optr)&t_send0, (Optr)PSend10840, (Optr)&t_push_closure, (Optr)PBlock10841, (Optr)&t_send1, (Optr)PSend10881, (Optr)&t_block_return);
    Block PBlock10837 = new_Block_with(empty_Array, empty_Array, PThreadedCode10838, 1, PSend10881);
    // =. 
    Send PSend10884 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10888 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10887 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10888, (Optr)&t_block_return);
    Block PBlock10886 = new_Block_with(empty_Array, empty_Array, PThreadedCode10887, 1, PSend10888);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend10891 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode10890 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10891, (Optr)&t_block_return);
    Block PBlock10889 = new_Block_with(empty_Array, empty_Array, PThreadedCode10890, 1, PSend10891);
    // ifTrue:ifFalse:. 
    Send PSend10885 = new_Send((Optr)PSend10884, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10886, (Optr)PBlock10889);
    Assign PAssign10892 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10883 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10884, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10885, (Optr)PBlock10886, (Optr)PBlock10889, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10892, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10882 = new_Block_with(empty_Array, empty_Array, PThreadedCode10883, 2, PSend10885, PAssign10892);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10893 = new_Send((Optr)PBlock10837, SMB_whileTrue_, 1, (Optr)PBlock10882);
    // >. 
    Send PSend10894 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10901 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend10900 = new_Send((Optr)PSend10901, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend10899 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10900);
    Assign PAssign10898 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend10899);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend10902 = new_Send((Optr)self, SMB_skip_, 1, (Optr)VAR_sz_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10903 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_3);
    Array PThreadedCode10897 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign10898, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10901, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10900, (Optr)&t_send1, (Optr)PSend10899, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10902, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_send1, (Optr)PSend10903, (Optr)&t_block_return);
    Block PBlock10896 = new_Block_with(empty_Array, empty_Array, PThreadedCode10897, 3, PAssign10898, PSend10902, PSend10903);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10906 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend10907 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10906);
    Array PThreadedCode10905 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10906, (Optr)&t_send1, (Optr)PSend10907, (Optr)&t_block_return);
    Block PBlock10904 = new_Block_with(empty_Array, empty_Array, PThreadedCode10905, 1, PSend10907);
    // ifTrue:ifFalse:. 
    Send PSend10895 = new_Send((Optr)PSend10894, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10896, (Optr)PBlock10904);
    Array PThreadedCode10824 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10825, (Optr)&t_send1, (Optr)PSend10826, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10827, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_send0, (Optr)PSend10828, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10829, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10830, (Optr)&t_send1, (Optr)PSend10831, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10832, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10833, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10834, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10835, (Optr)&t_send1, (Optr)PSend10836, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10837, (Optr)&t_push_closure, (Optr)PBlock10882, (Optr)&t_send1, (Optr)PSend10893, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10894, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10895, (Optr)PBlock10896, (Optr)PBlock10904, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock10822 = new_Block_with(PArray10823, empty_Array, PThreadedCode10824, 10, PSend10826, PAssign10827, PSend10831, PAssign10832, PAssign10833, PAssign10834, PSend10836, PSend10893, PSend10895, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10908 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10822);
    Array PThreadedCode10821 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10822, (Optr)&t_send1, (Optr)PSend10908, (Optr)&t_method_return);
    Method PMethod10818 = new_Method_with(PArray10819, PArray10820, empty_Array, PThreadedCode10821, 1, PSend10908);
    
    MethodClosure MC_SMB_upToAll_ = new_MethodClosure((Method)PMethod10818, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToAll_, MC_SMB_upToAll_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray10910 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend10912 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode10911 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10912, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10909 = new_Method_with(PArray10910, empty_Array, empty_Array, PThreadedCode10911, 2, PSend10912, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod10909, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_growInBuffer() {
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10915 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10916 = new_Send((Optr)PSend10915, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    // resizeInBuffer:. 
    Send PSend10917 = new_Send((Optr)self, SMB_resizeInBuffer_, 1, (Optr)PSend10916);
    Array PThreadedCode10914 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10915, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10916, (Optr)&t_send1, (Optr)PSend10917, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10914, 2, PSend10917, self);
    
    MethodClosure MC_SMB_growInBuffer = new_MethodClosure((Method)PMethod10913, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_growInBuffer, MC_SMB_growInBuffer);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray10919 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend10921 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend10922 = new_Send((Optr)PSend10921, SMB_name, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10923 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend10922);
    String string_10926 = new_String(L"[inbuf:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10927 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // /. 
    Send PSend10928 = new_Send((Optr)PSend10927, SMB__divide_, 1, (Optr)int_1024_Const);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend10929 = new_Send((Optr)PSend10928, SMB_rounded, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10930 = new_Send((Optr)PSend10929, SMB_asString, 0);
    Constant string_10926_Const = new_Constant((Optr)string_10926);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10931 = new_Send((Optr)string_10926_Const, SMB__append_, 1, (Optr)PSend10930);
    String string_10932 = new_String(L"kb/outbuf:");
    Constant string_10932_Const = new_Constant((Optr)string_10932);
    // ,. 
    Send PSend10933 = new_Send((Optr)PSend10931, SMB__append_, 1, (Optr)string_10932_Const);
    // size. 
    Send PSend10934 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // /. 
    Send PSend10935 = new_Send((Optr)PSend10934, SMB__divide_, 1, (Optr)int_1024_Const);
    // rounded. 
    Send PSend10936 = new_Send((Optr)PSend10935, SMB_rounded, 0);
    // asString. 
    Send PSend10937 = new_Send((Optr)PSend10936, SMB_asString, 0);
    // ,. 
    Send PSend10938 = new_Send((Optr)PSend10933, SMB__append_, 1, (Optr)PSend10937);
    String string_10939 = new_String(L"kb]");
    Constant string_10939_Const = new_Constant((Optr)string_10939);
    // ,. 
    Send PSend10940 = new_Send((Optr)PSend10938, SMB__append_, 1, (Optr)string_10939_Const);
    // nextPutAll:. 
    Send PSend10941 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend10940);
    Array PThreadedCode10925 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_10926, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10927, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10928, (Optr)&t_send0, (Optr)PSend10929, (Optr)&t_send0, (Optr)PSend10930, (Optr)&t_send1, (Optr)PSend10931, (Optr)&t_push1, (Optr)string_10932, (Optr)&t_send1, (Optr)PSend10933, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10934, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10935, (Optr)&t_send0, (Optr)PSend10936, (Optr)&t_send0, (Optr)PSend10937, (Optr)&t_send1, (Optr)PSend10938, (Optr)&t_push1, (Optr)string_10939, (Optr)&t_send1, (Optr)PSend10940, (Optr)&t_send1, (Optr)PSend10941, (Optr)&t_block_return);
    Block PBlock10924 = new_Block_with(empty_Array, empty_Array, PThreadedCode10925, 1, PSend10941);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend10942 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_ifNotNil_, 1, (Optr)PBlock10924);
    Array PThreadedCode10920 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10921, (Optr)&t_send0, (Optr)PSend10922, (Optr)&t_send1, (Optr)PSend10923, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_closure, (Optr)PBlock10924, (Optr)&t_send1, (Optr)PSend10942, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10918 = new_Method_with(PArray10919, empty_Array, empty_Array, PThreadedCode10920, 3, PSend10923, PSend10942, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod10918, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_autoFlush() {
    Symbol SMB_autoFlush = new_Symbol(L"autoFlush");
    Array PThreadedCode10944 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_method_return);
    Method PMethod10943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10944, 1, slot_IO_SocketStream_autoFlush);
    
    MethodClosure MC_SMB_autoFlush = new_MethodClosure((Method)PMethod10943, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush, MC_SMB_autoFlush);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10946 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10947 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10953 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10952 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10953, (Optr)&t_block_return);
    Block PBlock10951 = new_Block_with(empty_Array, empty_Array, PThreadedCode10952, 1, PSend10953);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10956 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10955 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10956, (Optr)&t_block_return);
    Block PBlock10954 = new_Block_with(empty_Array, empty_Array, PThreadedCode10955, 1, PSend10956);
    // ifTrue:ifFalse:. 
    Send PSend10950 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10951, (Optr)PBlock10954);
    Assign PAssign10949 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10950);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10957 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    // adjustOutBuffer:. 
    Send PSend10958 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)PSend10957);
    // size. 
    Send PSend10959 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10960 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend10959);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10961 = new_Send((Optr)PSend10960, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend10962 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend10961, (Optr)VAR_toPut_0_1, (Optr)int_1_Const);
    // size. 
    Send PSend10965 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    // +. 
    Send PSend10964 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend10965);
    Assign PAssign10963 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend10964);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend10966 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode10948 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign10949, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10950, (Optr)PBlock10951, (Optr)PBlock10954, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10957, (Optr)&t_send1, (Optr)PSend10958, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10959, (Optr)&t_send1, (Optr)PSend10960, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10961, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10962, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10963, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10965, (Optr)&t_send1, (Optr)PSend10964, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10966, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10945 = new_Method_with(PArray10946, PArray10947, empty_Array, PThreadedCode10948, 6, PAssign10949, PSend10958, PSend10962, PAssign10963, PSend10966, self);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod10945, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_receiveDataIfAvailable() {
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    // receiveSomeDataInto:startingAt:. 
    Send PSend10970 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveSomeDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10969 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10970);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10971 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10968 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10969, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10970, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10971, (Optr)&t_method_return);
    Method PMethod10967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10968, 2, PAssign10969, PSend10971);
    
    MethodClosure MC_SMB_receiveDataIfAvailable = new_MethodClosure((Method)PMethod10967, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveDataIfAvailable, MC_SMB_receiveDataIfAvailable);
}


static void init_SMB_isInBufferEmpty() {
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    String string_10974 = new_String(L"SocketStream>>isInBufferEmpty:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10974_Const = new_Constant((Optr)string_10974);
    // warn:. 
    Send PSend10975 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10974_Const);
    String string_10976 = new_String(L"-Last Read:");
    Constant string_10976_Const = new_Constant((Optr)string_10976);
    // warn:. 
    Send PSend10977 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10976_Const);
    // warn:. 
    Send PSend10978 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    String string_10979 = new_String(L"-Index Next To Write:");
    Constant string_10979_Const = new_Constant((Optr)string_10979);
    // warn:. 
    Send PSend10980 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10979_Const);
    // warn:. 
    Send PSend10981 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10982 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10983 = new_Send((Optr)PSend10982, SMB__equals_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10973 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10974, (Optr)&t_send1, (Optr)PSend10975, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10976, (Optr)&t_send1, (Optr)PSend10977, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10978, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10979, (Optr)&t_send1, (Optr)PSend10980, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10981, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10982, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10983, (Optr)&t_method_return);
    Method PMethod10972 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10973, 6, PSend10975, PSend10977, PSend10978, PSend10980, PSend10981, PSend10983);
    
    MethodClosure MC_SMB_isInBufferEmpty = new_MethodClosure((Method)PMethod10972, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isInBufferEmpty, MC_SMB_isInBufferEmpty);
}


static void init_SMB_peek_() {
    Symbol SMB_peek_ = new_Symbol(L"peek:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10985 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10986 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10988 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10990 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10989 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10990);
    // +. 
    Send PSend10991 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10992 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend10993 = new_Send((Optr)PSend10991, SMB_min_, 1, (Optr)PSend10992);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10994 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend10993);
    Array PThreadedCode10987 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10988, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10989, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10990, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10991, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10992, (Optr)&t_send1, (Optr)PSend10993, (Optr)&t_send2, (Optr)PSend10994, (Optr)&t_method_return);
    Method PMethod10984 = new_Method_with(PArray10985, PArray10986, empty_Array, PThreadedCode10987, 3, PSend10988, PAssign10989, PSend10994);
    
    MethodClosure MC_SMB_peek_ = new_MethodClosure((Method)PMethod10984, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek_, MC_SMB_peek_);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend10997 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10998 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10997);
    Array PThreadedCode10996 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10997, (Optr)&t_send1, (Optr)PSend10998, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10995 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10996, 2, PSend10998, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod10995, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_moveInBufferDown() {
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    Variable VAR_sz_0_0 = new_Variable_named(L"sz", 0);
    Variable VAR_distanceMoved_0_1 = new_Variable_named(L"distanceMoved", 0);
    Array PArray11000 = new_Array_with(2, (Optr)VAR_sz_0_0, (Optr)VAR_distanceMoved_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11004 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11003 = new_Send((Optr)PSend11004, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign11002 = new_Assign((Optr)VAR_sz_0_0, (Optr)PSend11003);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11005 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend11006 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_sz_0_0, (Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11005);
    Assign PAssign11007 = new_Assign((Optr)VAR_distanceMoved_0_1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11008 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    // +. 
    Send PSend11010 = new_Send((Optr)VAR_sz_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11009 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend11010);
    Array PThreadedCode11001 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign11002, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11004, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11003, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11005, (Optr)&t_send4, (Optr)PSend11006, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11007, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11008, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11009, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11010, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_distanceMoved_0_1, (Optr)&t_method_return);
    Method PMethod10999 = new_Method_with(empty_Array, PArray11000, empty_Array, PThreadedCode11001, 6, PAssign11002, PSend11006, PAssign11007, PAssign11008, PAssign11009, VAR_distanceMoved_0_1);
    
    MethodClosure MC_SMB_moveInBufferDown = new_MethodClosure((Method)PMethod10999, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_moveInBufferDown, MC_SMB_moveInBufferDown);
}


static void init_SMB_nextLineLf() {
    Symbol SMB_nextLineLf = new_Symbol(L"nextLineLf");
    Variable VAR_nextLine_0_0 = new_Variable_named(L"nextLine", 0);
    Array PArray11012 = new_Array_with(1, (Optr)VAR_nextLine_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend11016 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // upToAll:. 
    Send PSend11015 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend11016);
    Assign PAssign11014 = new_Assign((Optr)VAR_nextLine_0_0, (Optr)PSend11015);
    Array PThreadedCode11013 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11014, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11016, (Optr)&t_send1, (Optr)PSend11015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_0, (Optr)&t_method_return);
    Method PMethod11011 = new_Method_with(empty_Array, PArray11012, empty_Array, PThreadedCode11013, 2, PAssign11014, VAR_nextLine_0_0);
    
    MethodClosure MC_SMB_nextLineLf = new_MethodClosure((Method)PMethod11011, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineLf, MC_SMB_nextLineLf);
}


static void init_SMB_nextInBuffer_() {
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11018 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_amount_0_2 = new_Variable_named(L"amount", 0);
    Array PArray11019 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_amount_0_2);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11024 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11023 = new_Send((Optr)PSend11024, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11022 = new_Send((Optr)VAR_anInteger_0_0, SMB_min_, 1, (Optr)PSend11023);
    Assign PAssign11021 = new_Assign((Optr)VAR_amount_0_2, (Optr)PSend11022);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11026 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11025 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11026);
    // +. 
    Send PSend11028 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_amount_0_2);
    Assign PAssign11027 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11028);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11029 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11020 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign11021, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11024, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11023, (Optr)&t_send1, (Optr)PSend11022, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11025, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11026, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11027, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_amount_0_2, (Optr)&t_send1, (Optr)PSend11028, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend11029, (Optr)&t_method_return);
    Method PMethod11017 = new_Method_with(PArray11018, PArray11019, empty_Array, PThreadedCode11020, 4, PAssign11021, PAssign11025, PAssign11027, PSend11029);
    
    MethodClosure MC_SMB_nextInBuffer_ = new_MethodClosure((Method)PMethod11017, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextInBuffer_, MC_SMB_nextInBuffer_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11033 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11035 = new_String(L"SocketStream>>atEnd");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11035_Const = new_Constant((Optr)string_11035);
    // warn:. 
    Send PSend11036 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11035_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11037 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11041 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode11040 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11041, (Optr)&t_block_return);
    Block PBlock11039 = new_Block_with(empty_Array, empty_Array, PThreadedCode11040, 1, PSend11041);
    // ifFalse:. 
    Send PSend11038 = new_Send((Optr)PSend11037, SMB_ifFalse_, 1, (Optr)PBlock11039);
    String string_11042 = new_String(L"SocketStream>>atEnd: Buffer is Empty");
    Constant string_11042_Const = new_Constant((Optr)string_11042);
    // warn:. 
    Send PSend11043 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11042_Const);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend11044 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11045 = new_Send((Optr)PSend11044, SMB_not, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11048 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    // not. 
    Send PSend11049 = new_Send((Optr)PSend11048, SMB_not, 0);
    Array PThreadedCode11047 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11048, (Optr)&t_send0, (Optr)PSend11049, (Optr)&t_block_return);
    Block PBlock11046 = new_Block_with(empty_Array, empty_Array, PThreadedCode11047, 1, PSend11049);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11050 = new_Send((Optr)PSend11045, SMB_and_, 1, (Optr)PBlock11046);
    Array PThreadedCode11034 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11035, (Optr)&t_send1, (Optr)PSend11036, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11037, (Optr)&t_send_ifFalse_, (Optr)PSend11038, (Optr)PBlock11039, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11042, (Optr)&t_send1, (Optr)PSend11043, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11044, (Optr)&t_send0, (Optr)PSend11045, (Optr)&t_push_closure, (Optr)PBlock11046, (Optr)&t_send1, (Optr)PSend11050, (Optr)&t_method_return);
    Block PBlock11032 = new_Block_with(PArray11033, empty_Array, PThreadedCode11034, 4, PSend11036, PSend11038, PSend11043, PSend11050);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11051 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11032);
    Array PThreadedCode11031 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11032, (Optr)&t_send1, (Optr)PSend11051, (Optr)&t_method_return);
    Method PMethod11030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11031, 1, PSend11051);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod11030, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray11053 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11054 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend11060 = new_Send((Optr)VAR_char_0_0, SMB_asInteger, 0);
    Array PThreadedCode11059 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11060, (Optr)&t_block_return);
    Block PBlock11058 = new_Block_with(empty_Array, empty_Array, PThreadedCode11059, 1, PSend11060);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend11063 = new_Send((Optr)VAR_char_0_0, SMB_asCharacter, 0);
    Array PThreadedCode11062 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11063, (Optr)&t_block_return);
    Block PBlock11061 = new_Block_with(empty_Array, empty_Array, PThreadedCode11062, 1, PSend11063);
    // ifTrue:ifFalse:. 
    Send PSend11057 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11058, (Optr)PBlock11061);
    Assign PAssign11056 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11057);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // adjustOutBuffer:. 
    Send PSend11064 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend11065 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_at_put_, 2, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)VAR_toPut_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11067 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11066 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11067);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11068 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11055 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign11056, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11057, (Optr)PBlock11058, (Optr)PBlock11061, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11064, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send2, (Optr)PSend11065, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11066, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11068, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_method_return);
    Method PMethod11052 = new_Method_with(PArray11053, PArray11054, empty_Array, PThreadedCode11055, 6, PAssign11056, PSend11064, PSend11065, PAssign11066, PSend11068, VAR_char_0_0);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod11052, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    String string_11071 = new_String(L"SocketStream>>isConnected");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11071_Const = new_Constant((Optr)string_11071);
    // warn:. 
    Send PSend11072 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11071_Const);
    // isConnected. 
    Send PSend11073 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isConnected, 0);
    Array PThreadedCode11070 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11071, (Optr)&t_send1, (Optr)PSend11072, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11073, (Optr)&t_method_return);
    Method PMethod11069 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11070, 2, PSend11072, PSend11073);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod11069, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend11076 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend11077 = new_Send((Optr)self, SMB_nextPut_, 1, (Optr)PSend11076);
    Array PThreadedCode11075 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend11076, (Optr)&t_send1, (Optr)PSend11077, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11074 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11075, 2, PSend11077, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod11074, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend11080 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11083 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11084 = new_Send((Optr)PSend11083, SMB_not, 0);
    Array PThreadedCode11082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11083, (Optr)&t_send0, (Optr)PSend11084, (Optr)&t_block_return);
    Block PBlock11081 = new_Block_with(empty_Array, empty_Array, PThreadedCode11082, 1, PSend11084);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11085 = new_Send((Optr)PSend11080, SMB_and_, 1, (Optr)PBlock11081);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11091 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend11092 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11091);
    Array PThreadedCode11090 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11091, (Optr)&t_send2, (Optr)PSend11092, (Optr)&t_block_return);
    Block PBlock11089 = new_Block_with(empty_Array, empty_Array, PThreadedCode11090, 1, PSend11092);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11094 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Array PThreadedCode11098 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11097 = new_Block_with(empty_Array, empty_Array, PThreadedCode11098, 0);
    // ifFalse:. 
    Send PSend11096 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock11097);
    Array PThreadedCode11095 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend11096, (Optr)PBlock11097, (Optr)&t_method_return);
    Block PBlock11093 = new_Block_with(PArray11094, empty_Array, PThreadedCode11095, 1, PSend11096);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11099 = new_Send((Optr)PBlock11089, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock11093);
    Assign PAssign11100 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11088 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11089, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock11093, (Optr)&t_send2, (Optr)PSend11099, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11100, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11087 = new_Block_with(empty_Array, empty_Array, PThreadedCode11088, 2, PSend11099, PAssign11100);
    // ifTrue:. 
    Send PSend11086 = new_Send((Optr)PSend11085, SMB_ifTrue_, 1, (Optr)PBlock11087);
    Array PThreadedCode11079 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11080, (Optr)&t_push_closure, (Optr)PBlock11081, (Optr)&t_send1, (Optr)PSend11085, (Optr)&t_send_ifTrue_, (Optr)PSend11086, (Optr)PBlock11087, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11079, 2, PSend11086, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod11078, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_isOtherEndConnected() {
    Symbol SMB_isOtherEndConnected = new_Symbol(L"isOtherEndConnected");
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11103 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11104 = new_Send((Optr)PSend11103, SMB_not, 0);
    Array PThreadedCode11102 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11103, (Optr)&t_send0, (Optr)PSend11104, (Optr)&t_method_return);
    Method PMethod11101 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11102, 1, PSend11104);
    
    MethodClosure MC_SMB_isOtherEndConnected = new_MethodClosure((Method)PMethod11101, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isOtherEndConnected, MC_SMB_isOtherEndConnected);
}


static void init_SMB_resetBuffers() {
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11108 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11107 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11108);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11109 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign11110 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)int_1_Const);
    // streamBuffer:. 
    Send PSend11112 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11111 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11112);
    Assign PAssign11113 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11106 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign11107, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11109, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11110, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11111, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11112, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11113, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11105 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11106, 6, PAssign11107, PAssign11109, PAssign11110, PAssign11111, PAssign11113, self);
    
    MethodClosure MC_SMB_resetBuffers = new_MethodClosure((Method)PMethod11105, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resetBuffers, MC_SMB_resetBuffers);
}


static void init_SMB_debug() {
    Symbol SMB_debug = new_Symbol(L"debug");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Array PArray11115 = new_Array_with(1, (Optr)VAR_data_0_0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11118 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11117 = new_Assign((Optr)VAR_data_0_0, (Optr)PSend11118);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11120 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11123 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_11125 = new_String(L"Buffer size: ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11126 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11127 = new_Send((Optr)PSend11126, SMB_asString, 0);
    Constant string_11125_Const = new_Constant((Optr)string_11125);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11128 = new_Send((Optr)string_11125_Const, SMB__append_, 1, (Optr)PSend11127);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11129 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11128);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11130 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11131 = new_String(L"InBuffer data size: ");
    // asString. 
    Send PSend11132 = new_Send((Optr)VAR_data_0_0, SMB_asString, 0);
    Constant string_11131_Const = new_Constant((Optr)string_11131);
    // ,. 
    Send PSend11133 = new_Send((Optr)string_11131_Const, SMB__append_, 1, (Optr)PSend11132);
    // nextPutAll:. 
    Send PSend11134 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11133);
    // cr. 
    Send PSend11135 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11136 = new_String(L"In data (20):");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11137 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend11138 = new_Send((Optr)VAR_data_0_0, SMB_min_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend11139 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)PSend11138);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11140 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)PSend11137, (Optr)PSend11139);
    Constant string_11136_Const = new_Constant((Optr)string_11136);
    // ,. 
    Send PSend11141 = new_Send((Optr)string_11136_Const, SMB__append_, 1, (Optr)PSend11140);
    // nextPutAll:. 
    Send PSend11142 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11141);
    // cr. 
    Send PSend11143 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11144 = new_String(L"OutBuffer data size: ");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11145 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // asString. 
    Send PSend11146 = new_Send((Optr)PSend11145, SMB_asString, 0);
    Constant string_11144_Const = new_Constant((Optr)string_11144);
    // ,. 
    Send PSend11147 = new_Send((Optr)string_11144_Const, SMB__append_, 1, (Optr)PSend11146);
    // nextPutAll:. 
    Send PSend11148 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11147);
    // cr. 
    Send PSend11149 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11150 = new_String(L"Out data (20):");
    // -. 
    Send PSend11151 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11152 = new_Send((Optr)PSend11151, SMB_min_, 1, (Optr)int_20_Const);
    // copyFrom:to:. 
    Send PSend11153 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend11152);
    Constant string_11150_Const = new_Constant((Optr)string_11150);
    // ,. 
    Send PSend11154 = new_Send((Optr)string_11150_Const, SMB__append_, 1, (Optr)PSend11153);
    // nextPutAll:. 
    Send PSend11155 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11154);
    // cr. 
    Send PSend11156 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11124 = instantiate_Array_with(ThreadedCode_Class, 0, 120, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11125, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11126, (Optr)&t_send0, (Optr)PSend11127, (Optr)&t_send1, (Optr)PSend11128, (Optr)&t_send1, (Optr)PSend11129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11131, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send0, (Optr)PSend11132, (Optr)&t_send1, (Optr)PSend11133, (Optr)&t_send1, (Optr)PSend11134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11136, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11137, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11138, (Optr)&t_send1, (Optr)PSend11139, (Optr)&t_send2, (Optr)PSend11140, (Optr)&t_send1, (Optr)PSend11141, (Optr)&t_send1, (Optr)PSend11142, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11143, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11144, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11145, (Optr)&t_send0, (Optr)PSend11146, (Optr)&t_send1, (Optr)PSend11147, (Optr)&t_send1, (Optr)PSend11148, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11149, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11150, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11151, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11152, (Optr)&t_send2, (Optr)PSend11153, (Optr)&t_send1, (Optr)PSend11154, (Optr)&t_send1, (Optr)PSend11155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11156, (Optr)&t_method_return);
    Block PBlock11122 = new_Block_with(PArray11123, empty_Array, PThreadedCode11124, 10, PSend11129, PSend11130, PSend11134, PSend11135, PSend11142, PSend11143, PSend11148, PSend11149, PSend11155, PSend11156);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11157 = new_Send((Optr)PBlock11122, SMB_value_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11121 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11122, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11157, (Optr)&t_method_return);
    Block PBlock11119 = new_Block_with(PArray11120, empty_Array, PThreadedCode11121, 1, PSend11157);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend11158 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock11119);
    Array PThreadedCode11116 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11117, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11118, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock11119, (Optr)&t_send1, (Optr)PSend11158, (Optr)&t_method_return);
    Method PMethod11114 = new_Method_with(empty_Array, PArray11115, empty_Array, PThreadedCode11116, 2, PAssign11117, PSend11158);
    
    MethodClosure MC_SMB_debug = new_MethodClosure((Method)PMethod11114, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_debug, MC_SMB_debug);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray11160 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_3 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_4 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11161 = new_Array_with(4, (Optr)VAR_index_0_1, (Optr)VAR_result_0_2, (Optr)VAR_lastRecentlyRead_0_3, (Optr)VAR_searchedSoFar_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11164 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11166 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)int_0_Const);
    Assign PAssign11167 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)int_0_Const);
    Assign PAssign11168 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11171 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11172 = new_Send((Optr)PSend11171, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11175 = new_Send((Optr)VAR_lastRecentlyRead_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11178 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend11179 = new_Send((Optr)PSend11178, SMB_not, 0);
    Array PThreadedCode11177 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11178, (Optr)&t_send0, (Optr)PSend11179, (Optr)&t_block_return);
    Block PBlock11176 = new_Block_with(empty_Array, empty_Array, PThreadedCode11177, 1, PSend11179);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11180 = new_Send((Optr)PSend11175, SMB_and_, 1, (Optr)PBlock11176);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11183 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend11184 = new_Send((Optr)PSend11183, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode11182 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11183, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend11184, (Optr)&t_block_return);
    Block PBlock11181 = new_Block_with(empty_Array, empty_Array, PThreadedCode11182, 1, PSend11184);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend11185 = new_Send((Optr)PSend11180, SMB_or_, 1, (Optr)PBlock11181);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11192 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11191 = new_Send((Optr)PSend11192, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOf:startingAt:. 
    Send PSend11190 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOf_startingAt_, 2, (Optr)VAR_aCharacterOrByte_0_0, (Optr)PSend11191);
    Assign PAssign11189 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11190);
    // inBufferSize. 
    Send PSend11194 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11193 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)PSend11194);
    // >. 
    Send PSend11195 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11198 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // >. 
    Send PSend11199 = new_Send((Optr)PSend11198, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11197 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11198, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11199, (Optr)&t_block_return);
    Block PBlock11196 = new_Block_with(empty_Array, empty_Array, PThreadedCode11197, 1, PSend11199);
    // and:. 
    Send PSend11200 = new_Send((Optr)PSend11195, SMB_and_, 1, (Optr)PBlock11196);
    Assign PAssign11204 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11203 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11204, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11202 = new_Block_with(empty_Array, empty_Array, PThreadedCode11203, 1, PAssign11204);
    // ifTrue:. 
    Send PSend11201 = new_Send((Optr)PSend11200, SMB_ifTrue_, 1, (Optr)PBlock11202);
    Array PThreadedCode11188 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11189, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_4, (Optr)&t_send1, (Optr)PSend11192, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11191, (Optr)&t_send2, (Optr)PSend11190, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11193, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11194, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11195, (Optr)&t_push_closure, (Optr)PBlock11196, (Optr)&t_send1, (Optr)PSend11200, (Optr)&t_send_ifTrue_, (Optr)PSend11201, (Optr)PBlock11202, (Optr)&t_block_return);
    Block PBlock11187 = new_Block_with(empty_Array, empty_Array, PThreadedCode11188, 3, PAssign11189, PAssign11193, PSend11201);
    // ifTrue:. 
    Send PSend11186 = new_Send((Optr)PSend11185, SMB_ifTrue_, 1, (Optr)PBlock11187);
    // =. 
    Send PSend11205 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11174 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11175, (Optr)&t_push_closure, (Optr)PBlock11176, (Optr)&t_send1, (Optr)PSend11180, (Optr)&t_push_closure, (Optr)PBlock11181, (Optr)&t_send1, (Optr)PSend11185, (Optr)&t_send_ifTrue_, (Optr)PSend11186, (Optr)PBlock11187, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11205, (Optr)&t_block_return);
    Block PBlock11173 = new_Block_with(empty_Array, empty_Array, PThreadedCode11174, 2, PSend11186, PSend11205);
    // and:. 
    Send PSend11206 = new_Send((Optr)PSend11172, SMB_and_, 1, (Optr)PBlock11173);
    Array PThreadedCode11170 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11171, (Optr)&t_send0, (Optr)PSend11172, (Optr)&t_push_closure, (Optr)PBlock11173, (Optr)&t_send1, (Optr)PSend11206, (Optr)&t_block_return);
    Block PBlock11169 = new_Block_with(empty_Array, empty_Array, PThreadedCode11170, 1, PSend11206);
    String string_11209 = new_String(L"Buffer: ");
    Constant string_11209_Const = new_Constant((Optr)string_11209);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11210 = new_Send((Optr)string_11209_Const, SMB__append_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend11211 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11210);
    // =. 
    Send PSend11212 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11216 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11215 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11216, (Optr)&t_block_return);
    Block PBlock11214 = new_Block_with(empty_Array, empty_Array, PThreadedCode11215, 1, PSend11216);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11219 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11218 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11219, (Optr)&t_block_return);
    Block PBlock11217 = new_Block_with(empty_Array, empty_Array, PThreadedCode11218, 1, PSend11219);
    // ifTrue:ifFalse:. 
    Send PSend11213 = new_Send((Optr)PSend11212, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11214, (Optr)PBlock11217);
    Assign PAssign11220 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11208 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11209, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend11210, (Optr)&t_send1, (Optr)PSend11211, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11212, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11213, (Optr)PBlock11214, (Optr)PBlock11217, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11220, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11207 = new_Block_with(empty_Array, empty_Array, PThreadedCode11208, 3, PSend11211, PSend11213, PAssign11220);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11221 = new_Send((Optr)PBlock11169, SMB_whileTrue_, 1, (Optr)PBlock11207);
    // >. 
    Send PSend11222 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11229 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11228 = new_Send((Optr)PSend11229, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11227 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11228);
    Assign PAssign11226 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend11227);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11230 = new_Send((Optr)self, SMB_skip_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11231 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode11225 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11226, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11229, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11228, (Optr)&t_send1, (Optr)PSend11227, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11230, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend11231, (Optr)&t_block_return);
    Block PBlock11224 = new_Block_with(empty_Array, empty_Array, PThreadedCode11225, 3, PAssign11226, PSend11230, PSend11231);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11234 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11235 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11234);
    Array PThreadedCode11233 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11234, (Optr)&t_send1, (Optr)PSend11235, (Optr)&t_block_return);
    Block PBlock11232 = new_Block_with(empty_Array, empty_Array, PThreadedCode11233, 1, PSend11235);
    // ifTrue:ifFalse:. 
    Send PSend11223 = new_Send((Optr)PSend11222, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11224, (Optr)PBlock11232);
    Array PThreadedCode11165 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11166, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11167, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11168, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11169, (Optr)&t_push_closure, (Optr)PBlock11207, (Optr)&t_send1, (Optr)PSend11221, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11222, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11223, (Optr)PBlock11224, (Optr)PBlock11232, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11163 = new_Block_with(PArray11164, empty_Array, PThreadedCode11165, 6, PAssign11166, PAssign11167, PAssign11168, PSend11221, PSend11223, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11236 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11163);
    Array PThreadedCode11162 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11163, (Optr)&t_send1, (Optr)PSend11236, (Optr)&t_method_return);
    Method PMethod11159 = new_Method_with(PArray11160, PArray11161, empty_Array, PThreadedCode11162, 1, PSend11236);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod11159, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11243 = new_Send((Optr)self, SMB_atEnd, 0);
    Array PThreadedCode11242 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11243, (Optr)&t_block_return);
    Block PBlock11241 = new_Block_with(empty_Array, empty_Array, PThreadedCode11242, 1, PSend11243);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11246 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11245 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11246, (Optr)&t_block_return);
    Block PBlock11244 = new_Block_with(empty_Array, empty_Array, PThreadedCode11245, 1, PSend11246);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend11247 = new_Send((Optr)PBlock11241, SMB_whileFalse_, 1, (Optr)PBlock11244);
    Array PThreadedCode11240 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11241, (Optr)&t_push_closure, (Optr)PBlock11244, (Optr)&t_send1, (Optr)PSend11247, (Optr)&t_block_return);
    Block PBlock11239 = new_Block_with(empty_Array, empty_Array, PThreadedCode11240, 1, PSend11247);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11249 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode11250 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock11248 = new_Block_with(PArray11249, empty_Array, PThreadedCode11250, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11251 = new_Send((Optr)PBlock11239, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock11248);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11252 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode11238 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock11239, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock11248, (Optr)&t_send2, (Optr)PSend11251, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11252, (Optr)&t_method_return);
    Method PMethod11237 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11238, 2, PSend11251, PSend11252);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod11237, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_recentlyRead() {
    Symbol SMB_recentlyRead = new_Symbol(L"recentlyRead");
    Array PThreadedCode11254 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_method_return);
    Method PMethod11253 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11254, 1, slot_IO_SocketStream_recentlyRead);
    
    MethodClosure MC_SMB_recentlyRead = new_MethodClosure((Method)PMethod11253, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_recentlyRead, MC_SMB_recentlyRead);
}


static void init_class_SMB_openConnectionToHostNamed_port_() {
    Symbol SMB_openConnectionToHostNamed_port_ = new_Symbol(L"openConnectionToHostNamed:port:");
    Variable VAR_hostName_0_0 = new_Variable_named(L"hostName", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11256 = new_Array_with(2, (Optr)VAR_hostName_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_hostIP_0_2 = new_Variable_named(L"hostIP", 0);
    Array PArray11257 = new_Array_with(1, (Optr)VAR_hostIP_0_2);
    Symbol SMB_addressForName_timeout_ = new_Symbol(L"addressForName:timeout:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // addressForName:timeout:. 
    Send PSend11260 = new_Send((Optr)NetNameResolver_classReference, SMB_addressForName_timeout_, 2, (Optr)VAR_hostName_0_0, (Optr)int_20_Const);
    Assign PAssign11259 = new_Assign((Optr)VAR_hostIP_0_2, (Optr)PSend11260);
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    // openConnectionToHost:port:. 
    Send PSend11261 = new_Send((Optr)self, SMB_openConnectionToHost_port_, 2, (Optr)VAR_hostIP_0_2, (Optr)VAR_portNumber_0_1);
    Array PThreadedCode11258 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign11259, (Optr)&t_push_class_reference, (Optr)NetNameResolver_classReference, (Optr)&t_push_variable, (Optr)VAR_hostName_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send2, (Optr)PSend11260, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_2, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11261, (Optr)&t_method_return);
    Method PMethod11255 = new_Method_with(PArray11256, PArray11257, empty_Array, PThreadedCode11258, 2, PAssign11259, PSend11261);
    
    MethodClosure MC_SMB_openConnectionToHostNamed_port_ = new_MethodClosure((Method)PMethod11255, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHostNamed_port_, MC_SMB_openConnectionToHostNamed_port_);
}


static void init_class_SMB_openConnectionToHost_port_() {
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    Variable VAR_hostIP_0_0 = new_Variable_named(L"hostIP", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11263 = new_Array_with(2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_socket_0_2 = new_Variable_named(L"socket", 0);
    Array PArray11264 = new_Array_with(1, (Optr)VAR_socket_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11267 = new_Send((Optr)PSocket_classReference, SMB_new, 0);
    Assign PAssign11266 = new_Assign((Optr)VAR_socket_0_2, (Optr)PSend11267);
    Symbol SMB_connectTo_port_ = new_Symbol(L"connectTo:port:");
    // connectTo:port:. 
    Send PSend11268 = new_Send((Optr)VAR_socket_0_2, SMB_connectTo_port_, 2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11269 = new_Send((Optr)self, SMB_on_, 1, (Optr)VAR_socket_0_2);
    Array PThreadedCode11265 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign11266, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_0, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11268, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_send1, (Optr)PSend11269, (Optr)&t_method_return);
    Method PMethod11262 = new_Method_with(PArray11263, PArray11264, empty_Array, PThreadedCode11265, 3, PAssign11266, PSend11268, PSend11269);
    
    MethodClosure MC_SMB_openConnectionToHost_port_ = new_MethodClosure((Method)PMethod11262, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHost_port_, MC_SMB_openConnectionToHost_port_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode11271 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod11270 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11271, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod11270, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_socket_0_0 = new_Variable_named(L"socket", 0);
    Array PArray11273 = new_Array_with(1, (Optr)VAR_socket_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11275 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    // socket:. 
    Send PSend11276 = new_Send((Optr)PSend11275, SMB_socket_, 1, (Optr)VAR_socket_0_0);
    Array PThreadedCode11274 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11275, (Optr)&t_push_variable, (Optr)VAR_socket_0_0, (Optr)&t_send1, (Optr)PSend11276, (Optr)&t_method_return);
    Method PMethod11272 = new_Method_with(PArray11273, empty_Array, empty_Array, PThreadedCode11274, 1, PSend11276);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod11272, HEADER(IO_SocketStream_Class));
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