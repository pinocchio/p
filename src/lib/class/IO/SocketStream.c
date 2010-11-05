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
    Array PArray10319 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10321 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10320 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10321, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10318 = new_Method_with(PArray10319, empty_Array, empty_Array, PThreadedCode10320, 2, PAssign10321, self);
    
    MethodClosure MC_SMB_shouldSignal_ = new_MethodClosure((Method)PMethod10318, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal_, MC_SMB_shouldSignal_);
}


static void init_SMB_binary() {
    Symbol SMB_binary = new_Symbol(L"binary");
    Assign PAssign10324 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)true_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10325 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10323 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10324, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10325, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10322 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10323, 3, PAssign10324, PSend10325, self);
    
    MethodClosure MC_SMB_binary = new_MethodClosure((Method)PMethod10322, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_binary, MC_SMB_binary);
}


static void init_SMB_nextLine() {
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    // nextLineCrLf. 
    Send PSend10328 = new_Send((Optr)self, SMB_nextLineCrLf, 0);
    Array PThreadedCode10327 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10328, (Optr)&t_method_return);
    Method PMethod10326 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10327, 1, PSend10328);
    
    MethodClosure MC_SMB_nextLine = new_MethodClosure((Method)PMethod10326, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLine, MC_SMB_nextLine);
}


static void init_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10331 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10332 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10331);
    Array PThreadedCode10330 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10331, (Optr)&t_send1, (Optr)PSend10332, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10330, 2, PSend10332, self);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod10329, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_crlf, MC_SMB_crlf);
}


static void init_SMB_noTimeout() {
    Symbol SMB_noTimeout = new_Symbol(L"noTimeout");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10335 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)int_0_Const);
    Array PThreadedCode10334 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign10335, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10334, 2, PAssign10335, self);
    
    MethodClosure MC_SMB_noTimeout = new_MethodClosure((Method)PMethod10333, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_noTimeout, MC_SMB_noTimeout);
}


static void init_SMB_receiveData() {
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    String string_10338 = new_String(L"SocketStream>>receiveData");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10338_Const = new_Constant((Optr)string_10338);
    // warn:. 
    Send PSend10339 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10338_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_10344 = new_String(L"SocketStream>>receiveData: should signal");
    Constant string_10344_Const = new_Constant((Optr)string_10344);
    // warn:. 
    Send PSend10345 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10344_Const);
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    // shouldTimeout. 
    Send PSend10346 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10350 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10350_Const = new_Constant((Optr)string_10350);
    // warn:. 
    Send PSend10351 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10350_Const);
    Symbol SMB_receiveDataSignallingTimeout_into_startingAt_ = new_Symbol(L"receiveDataSignallingTimeout:into:startingAt:");
    // receiveDataSignallingTimeout:into:startingAt:. 
    Send PSend10352 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10349 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10350, (Optr)&t_send1, (Optr)PSend10351, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10352, (Optr)&t_block_return);
    Block PBlock10348 = new_Block_with(empty_Array, empty_Array, PThreadedCode10349, 2, PSend10351, PSend10352);
    String string_10355 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10355_Const = new_Constant((Optr)string_10355);
    // warn:. 
    Send PSend10356 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10355_Const);
    Symbol SMB_receiveDataSignallingClosedInto_startingAt_ = new_Symbol(L"receiveDataSignallingClosedInto:startingAt:");
    // receiveDataSignallingClosedInto:startingAt:. 
    Send PSend10357 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataSignallingClosedInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10354 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10355, (Optr)&t_send1, (Optr)PSend10356, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10357, (Optr)&t_block_return);
    Block PBlock10353 = new_Block_with(empty_Array, empty_Array, PThreadedCode10354, 2, PSend10356, PSend10357);
    // ifTrue:ifFalse:. 
    Send PSend10347 = new_Send((Optr)PSend10346, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10348, (Optr)PBlock10353);
    Array PThreadedCode10343 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10344, (Optr)&t_send1, (Optr)PSend10345, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10346, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10347, (Optr)PBlock10348, (Optr)PBlock10353, (Optr)&t_block_return);
    Block PBlock10342 = new_Block_with(empty_Array, empty_Array, PThreadedCode10343, 2, PSend10345, PSend10347);
    String string_10360 = new_String(L"SocketStream>>receiveData: should NOT signal");
    Constant string_10360_Const = new_Constant((Optr)string_10360);
    // warn:. 
    Send PSend10361 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10360_Const);
    // shouldTimeout. 
    Send PSend10362 = new_Send((Optr)self, SMB_shouldTimeout, 0);
    String string_10366 = new_String(L"SocketStream>>receiveData: should timeout");
    Constant string_10366_Const = new_Constant((Optr)string_10366);
    // warn:. 
    Send PSend10367 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10366_Const);
    Symbol SMB_receiveDataTimeout_into_startingAt_ = new_Symbol(L"receiveDataTimeout:into:startingAt:");
    // receiveDataTimeout:into:startingAt:. 
    Send PSend10368 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataTimeout_into_startingAt_, 3, (Optr)slot_IO_SocketStream_timeout, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10365 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10366, (Optr)&t_send1, (Optr)PSend10367, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send3, (Optr)PSend10368, (Optr)&t_block_return);
    Block PBlock10364 = new_Block_with(empty_Array, empty_Array, PThreadedCode10365, 2, PSend10367, PSend10368);
    String string_10371 = new_String(L"SocketStream>>receiveData: should NOT timeout");
    Constant string_10371_Const = new_Constant((Optr)string_10371);
    // warn:. 
    Send PSend10372 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10371_Const);
    Symbol SMB_receiveDataInto_startingAt_ = new_Symbol(L"receiveDataInto:startingAt:");
    // receiveDataInto:startingAt:. 
    Send PSend10373 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10370 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10371, (Optr)&t_send1, (Optr)PSend10372, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10373, (Optr)&t_block_return);
    Block PBlock10369 = new_Block_with(empty_Array, empty_Array, PThreadedCode10370, 2, PSend10372, PSend10373);
    // ifTrue:ifFalse:. 
    Send PSend10363 = new_Send((Optr)PSend10362, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10364, (Optr)PBlock10369);
    Array PThreadedCode10359 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10360, (Optr)&t_send1, (Optr)PSend10361, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10362, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10363, (Optr)PBlock10364, (Optr)PBlock10369, (Optr)&t_block_return);
    Block PBlock10358 = new_Block_with(empty_Array, empty_Array, PThreadedCode10359, 2, PSend10361, PSend10363);
    // ifTrue:ifFalse:. 
    Send PSend10341 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10342, (Optr)PBlock10358);
    Assign PAssign10340 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10341);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10374 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10337 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10338, (Optr)&t_send1, (Optr)PSend10339, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10340, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10341, (Optr)PBlock10342, (Optr)PBlock10358, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10374, (Optr)&t_method_return);
    Method PMethod10336 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10337, 3, PSend10339, PAssign10340, PSend10374);
    
    MethodClosure MC_SMB_receiveData = new_MethodClosure((Method)PMethod10336, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData, MC_SMB_receiveData);
}


static void init_SMB_isBinary() {
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    Array PThreadedCode10376 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_method_return);
    Method PMethod10375 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10376, 1, slot_IO_SocketStream_binary);
    
    MethodClosure MC_SMB_isBinary = new_MethodClosure((Method)PMethod10375, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isBinary, MC_SMB_isBinary);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper10379 = new_Super(SMB_initialize, 0);
    Assign PAssign10380 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)true_Const);
    Assign PAssign10381 = new_Assign((Optr)slot_IO_SocketStream_shouldSignal, (Optr)true_Const);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10382 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)int_0_Const);
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    Assign PAssign10383 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)int_4096_Const);
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend10384 = new_Send((Optr)self, SMB_ascii, 0);
    Array PThreadedCode10378 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper10379, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10380, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10381, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10382, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10383, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10384, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10377 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10378, 7, PSuper10379, PAssign10380, PAssign10381, PAssign10382, PAssign10383, PSend10384, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod10377, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_peekFor_() {
    Symbol SMB_peekFor_ = new_Symbol(L"peekFor:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray10386 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_nextObject_0_1 = new_Variable_named(L"nextObject", 0);
    Array PArray10387 = new_Array_with(1, (Optr)VAR_nextObject_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10390 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10392 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10396 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10395 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10396, (Optr)&t_block_return);
    Block PBlock10394 = new_Block_with(empty_Array, empty_Array, PThreadedCode10395, 1, PSend10396);
    // ifTrue:. 
    Send PSend10393 = new_Send((Optr)PSend10392, SMB_ifTrue_, 1, (Optr)PBlock10394);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10397 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10401 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10402 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10406 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10405 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10406, (Optr)&t_block_return);
    Block PBlock10404 = new_Block_with(empty_Array, empty_Array, PThreadedCode10405, 1, PSend10406);
    // ifTrue:. 
    Send PSend10403 = new_Send((Optr)PSend10402, SMB_ifTrue_, 1, (Optr)PBlock10404);
    Array PThreadedCode10400 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10401, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10402, (Optr)&t_send_ifTrue_, (Optr)PSend10403, (Optr)PBlock10404, (Optr)&t_block_return);
    Block PBlock10399 = new_Block_with(empty_Array, empty_Array, PThreadedCode10400, 2, PSend10401, PSend10403);
    // ifTrue:. 
    Send PSend10398 = new_Send((Optr)PSend10397, SMB_ifTrue_, 1, (Optr)PBlock10399);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10408 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Assign PAssign10407 = new_Assign((Optr)VAR_nextObject_0_1, (Optr)PSend10408);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10409 = new_Send((Optr)VAR_nextObject_0_1, SMB__equals_, 1, (Optr)VAR_aCharacterOrByte_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10414 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10413 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10414);
    // escape:. 
    Send PSend10415 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10412 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign10413, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10414, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10415, (Optr)&t_block_return);
    Block PBlock10411 = new_Block_with(empty_Array, empty_Array, PThreadedCode10412, 2, PAssign10413, PSend10415);
    // ifTrue:. 
    Send PSend10410 = new_Send((Optr)PSend10409, SMB_ifTrue_, 1, (Optr)PBlock10411);
    Array PThreadedCode10391 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10392, (Optr)&t_send_ifTrue_, (Optr)PSend10393, (Optr)PBlock10394, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10397, (Optr)&t_send_ifTrue_, (Optr)PSend10398, (Optr)PBlock10399, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10407, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10408, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_send1, (Optr)PSend10409, (Optr)&t_send_ifTrue_, (Optr)PSend10410, (Optr)PBlock10411, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock10389 = new_Block_with(PArray10390, empty_Array, PThreadedCode10391, 5, PSend10393, PSend10398, PAssign10407, PSend10410, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10416 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10389);
    Array PThreadedCode10388 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10389, (Optr)&t_send1, (Optr)PSend10416, (Optr)&t_method_return);
    Method PMethod10385 = new_Method_with(PArray10386, PArray10387, empty_Array, PThreadedCode10388, 1, PSend10416);
    
    MethodClosure MC_SMB_peekFor_ = new_MethodClosure((Method)PMethod10385, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekFor_, MC_SMB_peekFor_);
}


static void init_SMB_peekForAll_() {
    Symbol SMB_peekForAll_ = new_Symbol(L"peekForAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10418 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_sz_0_1 = new_Variable_named(L"sz", 0);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray10419 = new_Array_with(2, (Optr)VAR_sz_0_1, (Optr)VAR_start_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10422 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10425 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Assign PAssign10424 = new_Assign((Optr)VAR_sz_0_1, (Optr)PSend10425);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10426 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10427 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10428 = new_Send((Optr)PSend10427, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend10429 = new_Send((Optr)PSend10428, SMB__lt_, 1, (Optr)VAR_sz_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10433 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10432 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10433, (Optr)&t_block_return);
    Block PBlock10431 = new_Block_with(empty_Array, empty_Array, PThreadedCode10432, 1, PSend10433);
    // ifTrue:. 
    Send PSend10430 = new_Send((Optr)PSend10429, SMB_ifTrue_, 1, (Optr)PBlock10431);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10435 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10434 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend10435);
    Symbol SMB_findString_startingAt_ = new_Symbol(L"findString:startingAt:");
    // findString:startingAt:. 
    Send PSend10436 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_findString_startingAt_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_start_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10437 = new_Send((Optr)PSend10436, SMB__equals_, 1, (Optr)VAR_start_0_2);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend10441 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode10440 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend10441, (Optr)&t_block_return);
    Block PBlock10439 = new_Block_with(empty_Array, empty_Array, PThreadedCode10440, 1, PSend10441);
    // ifFalse:. 
    Send PSend10438 = new_Send((Optr)PSend10437, SMB_ifFalse_, 1, (Optr)PBlock10439);
    // +. 
    Send PSend10443 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_sz_0_1);
    Assign PAssign10442 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10443);
    Array PThreadedCode10423 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign10424, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend10425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10426, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10427, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10428, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10429, (Optr)&t_send_ifTrue_, (Optr)PSend10430, (Optr)PBlock10431, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10434, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10435, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send2, (Optr)PSend10436, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_send1, (Optr)PSend10437, (Optr)&t_send_ifFalse_, (Optr)PSend10438, (Optr)PBlock10439, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10442, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_sz_0_1, (Optr)&t_send1, (Optr)PSend10443, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock10421 = new_Block_with(PArray10422, empty_Array, PThreadedCode10423, 7, PAssign10424, PSend10426, PSend10430, PAssign10434, PSend10438, PAssign10442, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10444 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10421);
    Array PThreadedCode10420 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10421, (Optr)&t_send1, (Optr)PSend10444, (Optr)&t_method_return);
    Method PMethod10417 = new_Method_with(PArray10418, PArray10419, empty_Array, PThreadedCode10420, 1, PSend10444);
    
    MethodClosure MC_SMB_peekForAll_ = new_MethodClosure((Method)PMethod10417, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peekForAll_, MC_SMB_peekForAll_);
}


static void init_SMB_receiveAvailableData() {
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    Symbol SMB_receiveAvailableDataInto_startingAt_ = new_Symbol(L"receiveAvailableDataInto:startingAt:");
    // receiveAvailableDataInto:startingAt:. 
    Send PSend10448 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveAvailableDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10447 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10448);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10449 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10446 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10447, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10448, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10449, (Optr)&t_method_return);
    Method PMethod10445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10446, 2, PAssign10447, PSend10449);
    
    MethodClosure MC_SMB_receiveAvailableData = new_MethodClosure((Method)PMethod10445, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveAvailableData, MC_SMB_receiveAvailableData);
}


static void init_SMB_autoFlush_() {
    Symbol SMB_autoFlush_ = new_Symbol(L"autoFlush:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray10451 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign10453 = new_Assign((Optr)slot_IO_SocketStream_autoFlush, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode10452 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10453, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10450 = new_Method_with(PArray10451, empty_Array, empty_Array, PThreadedCode10452, 2, PAssign10453, self);
    
    MethodClosure MC_SMB_autoFlush_ = new_MethodClosure((Method)PMethod10450, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush_, MC_SMB_autoFlush_);
}


static void init_SMB_nextLineCrLf() {
    Symbol SMB_nextLineCrLf = new_Symbol(L"nextLineCrLf");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10456 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend10457 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend10456);
    Array PThreadedCode10455 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10456, (Optr)&t_send1, (Optr)PSend10457, (Optr)&t_method_return);
    Method PMethod10454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10455, 1, PSend10457);
    
    MethodClosure MC_SMB_nextLineCrLf = new_MethodClosure((Method)PMethod10454, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineCrLf, MC_SMB_nextLineCrLf);
}


static void init_SMB_isStream() {
    Symbol SMB_isStream = new_Symbol(L"isStream");
    Array PThreadedCode10459 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod10458 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10459, 1, true_Const);
    
    MethodClosure MC_SMB_isStream = new_MethodClosure((Method)PMethod10458, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isStream, MC_SMB_isStream);
}


static void init_SMB_receiveData_() {
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    Variable VAR_nBytes_0_0 = new_Variable_named(L"nBytes", 0);
    Array PArray10461 = new_Array_with(1, (Optr)VAR_nBytes_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10465 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10466 = new_Send((Optr)PSend10465, SMB_not, 0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10469 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10470 = new_Send((Optr)VAR_nBytes_0_0, SMB__gt_, 1, (Optr)PSend10469);
    Array PThreadedCode10468 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_nBytes_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10469, (Optr)&t_send1, (Optr)PSend10470, (Optr)&t_block_return);
    Block PBlock10467 = new_Block_with(empty_Array, empty_Array, PThreadedCode10468, 1, PSend10470);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10471 = new_Send((Optr)PSend10466, SMB_and_, 1, (Optr)PBlock10467);
    Array PThreadedCode10464 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10465, (Optr)&t_send0, (Optr)PSend10466, (Optr)&t_push_closure, (Optr)PBlock10467, (Optr)&t_send1, (Optr)PSend10471, (Optr)&t_block_return);
    Block PBlock10463 = new_Block_with(empty_Array, empty_Array, PThreadedCode10464, 1, PSend10471);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10474 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10473 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10474, (Optr)&t_block_return);
    Block PBlock10472 = new_Block_with(empty_Array, empty_Array, PThreadedCode10473, 1, PSend10474);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10475 = new_Send((Optr)PBlock10463, SMB_whileTrue_, 1, (Optr)PBlock10472);
    Array PThreadedCode10462 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock10463, (Optr)&t_push_closure, (Optr)PBlock10472, (Optr)&t_send1, (Optr)PSend10475, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10460 = new_Method_with(PArray10461, empty_Array, empty_Array, PThreadedCode10462, 2, PSend10475, self);
    
    MethodClosure MC_SMB_receiveData_ = new_MethodClosure((Method)PMethod10460, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveData_, MC_SMB_receiveData_);
}


static void init_SMB_streamBuffer_() {
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray10477 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend10479 = new_Send((Optr)self, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode10482 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ByteArray_classReference, (Optr)&t_block_return);
    Block PBlock10481 = new_Block_with(empty_Array, empty_Array, PThreadedCode10482, 1, ByteArray_classReference);
    Array PThreadedCode10484 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_block_return);
    Block PBlock10483 = new_Block_with(empty_Array, empty_Array, PThreadedCode10484, 1, String_classReference);
    // ifTrue:ifFalse:. 
    Send PSend10480 = new_Send((Optr)PSend10479, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10481, (Optr)PBlock10483);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend10485 = new_Send((Optr)PSend10480, SMB_new_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode10478 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10479, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10480, (Optr)PBlock10481, (Optr)PBlock10483, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend10485, (Optr)&t_method_return);
    Method PMethod10476 = new_Method_with(PArray10477, empty_Array, empty_Array, PThreadedCode10478, 1, PSend10485);
    
    MethodClosure MC_SMB_streamBuffer_ = new_MethodClosure((Method)PMethod10476, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_streamBuffer_, MC_SMB_streamBuffer_);
}


static void init_SMB_socket_() {
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray10487 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Assign PAssign10489 = new_Assign((Optr)slot_IO_SocketStream_socket, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode10488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10489, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10486 = new_Method_with(PArray10487, empty_Array, empty_Array, PThreadedCode10488, 2, PAssign10489, self);
    
    MethodClosure MC_SMB_socket_ = new_MethodClosure((Method)PMethod10486, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket_, MC_SMB_socket_);
}


static void init_SMB_ascii() {
    Symbol SMB_ascii = new_Symbol(L"ascii");
    Assign PAssign10492 = new_Assign((Optr)slot_IO_SocketStream_binary, (Optr)false_Const);
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    // resetBuffers. 
    Send PSend10493 = new_Send((Optr)self, SMB_resetBuffers, 0);
    Array PThreadedCode10491 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign10492, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10493, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10490 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10491, 3, PAssign10492, PSend10493, self);
    
    MethodClosure MC_SMB_ascii = new_MethodClosure((Method)PMethod10490, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ascii, MC_SMB_ascii);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray10495 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Assign PAssign10497 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)VAR_seconds_0_0);
    Array PThreadedCode10496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10497, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10494 = new_Method_with(PArray10495, empty_Array, empty_Array, PThreadedCode10496, 2, PAssign10497, self);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod10494, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_shouldTimeout() {
    Symbol SMB_shouldTimeout = new_Symbol(L"shouldTimeout");
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend10500 = new_Send((Optr)self, SMB_timeout, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend10501 = new_Send((Optr)PSend10500, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode10499 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10500, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10501, (Optr)&t_method_return);
    Method PMethod10498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10499, 1, PSend10501);
    
    MethodClosure MC_SMB_shouldTimeout = new_MethodClosure((Method)PMethod10498, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldTimeout, MC_SMB_shouldTimeout);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10505 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10507 = new_String(L"SocketStream>>peek");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10507_Const = new_Constant((Optr)string_10507);
    // warn:. 
    Send PSend10508 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10507_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10509 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10513 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10512 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10513, (Optr)&t_block_return);
    Block PBlock10511 = new_Block_with(empty_Array, empty_Array, PThreadedCode10512, 1, PSend10513);
    // ifTrue:. 
    Send PSend10510 = new_Send((Optr)PSend10509, SMB_ifTrue_, 1, (Optr)PBlock10511);
    String string_10514 = new_String(L"SocketStream>>peek: not at end");
    Constant string_10514_Const = new_Constant((Optr)string_10514);
    // warn:. 
    Send PSend10515 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10514_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10516 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    String string_10520 = new_String(L"SocketStream>>peek: in buffer is empty");
    Constant string_10520_Const = new_Constant((Optr)string_10520);
    // warn:. 
    Send PSend10521 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10520_Const);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10522 = new_Send((Optr)self, SMB_receiveData, 0);
    String string_10523 = new_String(L"SocketStream>>peek: recevied data");
    Constant string_10523_Const = new_Constant((Optr)string_10523);
    // warn:. 
    Send PSend10524 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10523_Const);
    // atEnd. 
    Send PSend10525 = new_Send((Optr)self, SMB_atEnd, 0);
    String string_10529 = new_String(L"SocketStream>>peek: at end");
    Constant string_10529_Const = new_Constant((Optr)string_10529);
    // warn:. 
    Send PSend10530 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10529_Const);
    // escape:. 
    Send PSend10531 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10528 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10529, (Optr)&t_send1, (Optr)PSend10530, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10531, (Optr)&t_block_return);
    Block PBlock10527 = new_Block_with(empty_Array, empty_Array, PThreadedCode10528, 2, PSend10530, PSend10531);
    // ifTrue:. 
    Send PSend10526 = new_Send((Optr)PSend10525, SMB_ifTrue_, 1, (Optr)PBlock10527);
    Array PThreadedCode10519 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10520, (Optr)&t_send1, (Optr)PSend10521, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10522, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10523, (Optr)&t_send1, (Optr)PSend10524, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10525, (Optr)&t_send_ifTrue_, (Optr)PSend10526, (Optr)PBlock10527, (Optr)&t_block_return);
    Block PBlock10518 = new_Block_with(empty_Array, empty_Array, PThreadedCode10519, 4, PSend10521, PSend10522, PSend10524, PSend10526);
    // ifTrue:. 
    Send PSend10517 = new_Send((Optr)PSend10516, SMB_ifTrue_, 1, (Optr)PBlock10518);
    String string_10532 = new_String(L"SocketStream>>peek: return...");
    Constant string_10532_Const = new_Constant((Optr)string_10532);
    // warn:. 
    Send PSend10533 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10532_Const);
    String string_10534 = new_String(L"SocketStream>>peek: in buffer is");
    Constant string_10534_Const = new_Constant((Optr)string_10534);
    // warn:. 
    Send PSend10535 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10534_Const);
    // warn:. 
    Send PSend10536 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    String string_10537 = new_String(L"SocketStream>>peek: last read is");
    Constant string_10537_Const = new_Constant((Optr)string_10537);
    // warn:. 
    Send PSend10538 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10537_Const);
    // warn:. 
    Send PSend10539 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10540 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10541 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)PSend10540);
    Array PThreadedCode10506 = instantiate_Array_with(ThreadedCode_Class, 0, 66, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10507, (Optr)&t_send1, (Optr)PSend10508, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10509, (Optr)&t_send_ifTrue_, (Optr)PSend10510, (Optr)PBlock10511, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10514, (Optr)&t_send1, (Optr)PSend10515, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10516, (Optr)&t_send_ifTrue_, (Optr)PSend10517, (Optr)PBlock10518, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10532, (Optr)&t_send1, (Optr)PSend10533, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10534, (Optr)&t_send1, (Optr)PSend10535, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend10536, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10537, (Optr)&t_send1, (Optr)PSend10538, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10539, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10540, (Optr)&t_send1, (Optr)PSend10541, (Optr)&t_method_return);
    Block PBlock10504 = new_Block_with(PArray10505, empty_Array, PThreadedCode10506, 10, PSend10508, PSend10510, PSend10515, PSend10517, PSend10533, PSend10535, PSend10536, PSend10538, PSend10539, PSend10541);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10542 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10504);
    Array PThreadedCode10503 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10504, (Optr)&t_send1, (Optr)PSend10542, (Optr)&t_method_return);
    Method PMethod10502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10503, 1, PSend10542);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod10502, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_shouldSignal() {
    Symbol SMB_shouldSignal = new_Symbol(L"shouldSignal");
    Array PThreadedCode10544 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_method_return);
    Method PMethod10543 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10544, 1, slot_IO_SocketStream_shouldSignal);
    
    MethodClosure MC_SMB_shouldSignal = new_MethodClosure((Method)PMethod10543, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_shouldSignal, MC_SMB_shouldSignal);
}


static void init_SMB_bufferSize() {
    Symbol SMB_bufferSize = new_Symbol(L"bufferSize");
    Array PThreadedCode10546 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_method_return);
    Method PMethod10545 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10546, 1, slot_IO_SocketStream_bufferSize);
    
    MethodClosure MC_SMB_bufferSize = new_MethodClosure((Method)PMethod10545, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize, MC_SMB_bufferSize);
}


static void init_SMB_nextPutAllFlush_() {
    Symbol SMB_nextPutAllFlush_ = new_Symbol(L"nextPutAllFlush:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10548 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10549 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10555 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10554 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10555, (Optr)&t_block_return);
    Block PBlock10553 = new_Block_with(empty_Array, empty_Array, PThreadedCode10554, 1, PSend10555);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10558 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10557 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10558, (Optr)&t_block_return);
    Block PBlock10556 = new_Block_with(empty_Array, empty_Array, PThreadedCode10557, 1, PSend10558);
    // ifTrue:ifFalse:. 
    Send PSend10552 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10553, (Optr)PBlock10556);
    Assign PAssign10551 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10552);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10559 = new_Send((Optr)self, SMB_flush, 0);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend10560 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10566 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend10567 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)VAR_toPut_0_1, (Optr)PSend10566);
    Array PThreadedCode10565 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10566, (Optr)&t_send2, (Optr)PSend10567, (Optr)&t_block_return);
    Block PBlock10564 = new_Block_with(empty_Array, empty_Array, PThreadedCode10565, 1, PSend10567);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray10569 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode10573 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock10572 = new_Block_with(empty_Array, empty_Array, PThreadedCode10573, 0);
    // ifFalse:. 
    Send PSend10571 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock10572);
    Array PThreadedCode10570 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend10571, (Optr)PBlock10572, (Optr)&t_method_return);
    Block PBlock10568 = new_Block_with(PArray10569, empty_Array, PThreadedCode10570, 1, PSend10571);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend10574 = new_Send((Optr)PBlock10564, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock10568);
    Array PThreadedCode10563 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock10564, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock10568, (Optr)&t_send2, (Optr)PSend10574, (Optr)&t_block_return);
    Block PBlock10562 = new_Block_with(empty_Array, empty_Array, PThreadedCode10563, 1, PSend10574);
    // ifFalse:. 
    Send PSend10561 = new_Send((Optr)PSend10560, SMB_ifFalse_, 1, (Optr)PBlock10562);
    Array PThreadedCode10550 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign10551, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10552, (Optr)PBlock10553, (Optr)PBlock10556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10559, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10560, (Optr)&t_send_ifFalse_, (Optr)PSend10561, (Optr)PBlock10562, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10547 = new_Method_with(PArray10548, PArray10549, empty_Array, PThreadedCode10550, 4, PAssign10551, PSend10559, PSend10561, self);
    
    MethodClosure MC_SMB_nextPutAllFlush_ = new_MethodClosure((Method)PMethod10547, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAllFlush_, MC_SMB_nextPutAllFlush_);
}


static void init_SMB_outBufferSize() {
    Symbol SMB_outBufferSize = new_Symbol(L"outBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10577 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10576 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10577, (Optr)&t_method_return);
    Method PMethod10575 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10576, 1, PSend10577);
    
    MethodClosure MC_SMB_outBufferSize = new_MethodClosure((Method)PMethod10575, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_outBufferSize, MC_SMB_outBufferSize);
}


static void init_SMB_sendCommand_() {
    Symbol SMB_sendCommand_ = new_Symbol(L"sendCommand:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray10579 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray10582 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend10584 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10585 = new_Send((Optr)VAR_aString_0_0, SMB__append_, 1, (Optr)PSend10584);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10586 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)PSend10585);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10587 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Array PThreadedCode10583 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10584, (Optr)&t_send1, (Optr)PSend10585, (Optr)&t_send1, (Optr)PSend10586, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend10587, (Optr)&t_method_return);
    Block PBlock10581 = new_Block_with(PArray10582, empty_Array, PThreadedCode10583, 2, PSend10586, PSend10587);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10588 = new_Send((Optr)PBlock10581, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10580 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock10581, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10588, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10578 = new_Method_with(PArray10579, empty_Array, empty_Array, PThreadedCode10580, 2, PSend10588, self);
    
    MethodClosure MC_SMB_sendCommand_ = new_MethodClosure((Method)PMethod10578, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_sendCommand_, MC_SMB_sendCommand_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10591 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10594 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10595 = new_Send((Optr)PSend10594, SMB_not, 0);
    Array PThreadedCode10593 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10594, (Optr)&t_send0, (Optr)PSend10595, (Optr)&t_block_return);
    Block PBlock10592 = new_Block_with(empty_Array, empty_Array, PThreadedCode10593, 1, PSend10595);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10596 = new_Send((Optr)PSend10591, SMB_and_, 1, (Optr)PBlock10592);
    Array PThreadedCode10590 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10591, (Optr)&t_push_closure, (Optr)PBlock10592, (Optr)&t_send1, (Optr)PSend10596, (Optr)&t_method_return);
    Method PMethod10589 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10590, 1, PSend10596);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod10589, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_checkFlush() {
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend10601 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Array PThreadedCode10600 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend10601, (Optr)&t_block_return);
    Block PBlock10599 = new_Block_with(empty_Array, empty_Array, PThreadedCode10600, 1, PSend10601);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10602 = new_Send((Optr)slot_IO_SocketStream_autoFlush, SMB_and_, 1, (Optr)PBlock10599);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10606 = new_Send((Optr)self, SMB_flush, 0);
    Array PThreadedCode10605 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10606, (Optr)&t_block_return);
    Block PBlock10604 = new_Block_with(empty_Array, empty_Array, PThreadedCode10605, 1, PSend10606);
    // ifTrue:. 
    Send PSend10603 = new_Send((Optr)PSend10602, SMB_ifTrue_, 1, (Optr)PBlock10604);
    Array PThreadedCode10598 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_push_closure, (Optr)PBlock10599, (Optr)&t_send1, (Optr)PSend10602, (Optr)&t_send_ifTrue_, (Optr)PSend10603, (Optr)PBlock10604, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10597 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10598, 2, PSend10603, self);
    
    MethodClosure MC_SMB_checkFlush = new_MethodClosure((Method)PMethod10597, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_checkFlush, MC_SMB_checkFlush);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10608 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10609 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10611 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10613 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10612 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10613);
    // +. 
    Send PSend10616 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10617 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10615 = new_Send((Optr)PSend10616, SMB_min_, 1, (Optr)PSend10617);
    Assign PAssign10614 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10615);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10618 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10610 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10611, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10612, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10614, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10616, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10617, (Optr)&t_send1, (Optr)PSend10615, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend10618, (Optr)&t_method_return);
    Method PMethod10607 = new_Method_with(PArray10608, PArray10609, empty_Array, PThreadedCode10610, 4, PSend10611, PAssign10612, PAssign10614, PSend10618);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod10607, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_socket() {
    Symbol SMB_socket = new_Symbol(L"socket");
    Array PThreadedCode10620 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_method_return);
    Method PMethod10619 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10620, 1, slot_IO_SocketStream_socket);
    
    MethodClosure MC_SMB_socket = new_MethodClosure((Method)PMethod10619, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_socket, MC_SMB_socket);
}


static void init_SMB_adjustInBuffer_() {
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    Variable VAR_bytesRead_0_0 = new_Variable_named(L"bytesRead", 0);
    Array PArray10622 = new_Array_with(1, (Optr)VAR_bytesRead_0_0);
    Variable VAR_old_0_1 = new_Variable_named(L"old", 0);
    Array PArray10623 = new_Array_with(1, (Optr)VAR_old_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10626 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10628 = new_String(L"SocketStream>>adjustInBuffer:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10628_Const = new_Constant((Optr)string_10628);
    // warn:. 
    Send PSend10629 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10628_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend10630 = new_Send((Optr)VAR_bytesRead_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10634 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10633 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10634, (Optr)&t_block_return);
    Block PBlock10632 = new_Block_with(empty_Array, empty_Array, PThreadedCode10633, 1, PSend10634);
    // ifTrue:. 
    Send PSend10631 = new_Send((Optr)PSend10630, SMB_ifTrue_, 1, (Optr)PBlock10632);
    Assign PAssign10635 = new_Assign((Optr)VAR_old_0_1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10637 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__plus_, 1, (Optr)VAR_bytesRead_0_0);
    Assign PAssign10636 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10637);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10638 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10639 = new_Send((Optr)PSend10638, SMB__minus_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10640 = new_Send((Optr)PSend10639, SMB__lt_, 1, (Optr)int_1024_Const);
    SmallInt int_512 = new_SmallInt(512);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_512_Const = new_Constant((Optr)int_512);
    // >. 
    Send PSend10644 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__gt_, 1, (Optr)int_512_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    // moveInBufferDown. 
    Send PSend10648 = new_Send((Optr)self, SMB_moveInBufferDown, 0);
    // -. 
    Send PSend10649 = new_Send((Optr)VAR_old_0_1, SMB__minus_, 1, (Optr)PSend10648);
    // escape:. 
    Send PSend10650 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10649);
    Array PThreadedCode10647 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10648, (Optr)&t_send1, (Optr)PSend10649, (Optr)&t_send1, (Optr)PSend10650, (Optr)&t_block_return);
    Block PBlock10646 = new_Block_with(empty_Array, empty_Array, PThreadedCode10647, 1, PSend10650);
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    // growInBuffer. 
    Send PSend10653 = new_Send((Optr)self, SMB_growInBuffer, 0);
    Array PThreadedCode10652 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10653, (Optr)&t_block_return);
    Block PBlock10651 = new_Block_with(empty_Array, empty_Array, PThreadedCode10652, 1, PSend10653);
    // ifTrue:ifFalse:. 
    Send PSend10645 = new_Send((Optr)PSend10644, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10646, (Optr)PBlock10651);
    Array PThreadedCode10643 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push1, (Optr)int_512, (Optr)&t_send1, (Optr)PSend10644, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10645, (Optr)PBlock10646, (Optr)PBlock10651, (Optr)&t_block_return);
    Block PBlock10642 = new_Block_with(empty_Array, empty_Array, PThreadedCode10643, 1, PSend10645);
    // ifTrue:. 
    Send PSend10641 = new_Send((Optr)PSend10640, SMB_ifTrue_, 1, (Optr)PBlock10642);
    Array PThreadedCode10627 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10628, (Optr)&t_send1, (Optr)PSend10629, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10630, (Optr)&t_send_ifTrue_, (Optr)PSend10631, (Optr)PBlock10632, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10635, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10636, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_variable, (Optr)VAR_bytesRead_0_0, (Optr)&t_send1, (Optr)PSend10637, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10638, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10639, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10640, (Optr)&t_send_ifTrue_, (Optr)PSend10641, (Optr)PBlock10642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_old_0_1, (Optr)&t_method_return);
    Block PBlock10625 = new_Block_with(PArray10626, empty_Array, PThreadedCode10627, 6, PSend10629, PSend10631, PAssign10635, PAssign10636, PSend10641, VAR_old_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10654 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10625);
    Array PThreadedCode10624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10625, (Optr)&t_send1, (Optr)PSend10654, (Optr)&t_method_return);
    Method PMethod10621 = new_Method_with(PArray10622, PArray10623, empty_Array, PThreadedCode10624, 1, PSend10654);
    
    MethodClosure MC_SMB_adjustInBuffer_ = new_MethodClosure((Method)PMethod10621, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustInBuffer_, MC_SMB_adjustInBuffer_);
}


static void init_SMB_ifStale_() {
    Symbol SMB_ifStale_ = new_Symbol(L"ifStale:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray10656 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend10658 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend10662 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode10661 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend10662, (Optr)&t_block_return);
    Block PBlock10660 = new_Block_with(empty_Array, empty_Array, PThreadedCode10661, 1, PSend10662);
    // ifFalse:. 
    Send PSend10659 = new_Send((Optr)PSend10658, SMB_ifFalse_, 1, (Optr)PBlock10660);
    Array PThreadedCode10657 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10658, (Optr)&t_send_ifFalse_, (Optr)PSend10659, (Optr)PBlock10660, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10655 = new_Method_with(PArray10656, empty_Array, empty_Array, PThreadedCode10657, 2, PSend10659, self);
    
    MethodClosure MC_SMB_ifStale_ = new_MethodClosure((Method)PMethod10655, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_ifStale_, MC_SMB_ifStale_);
}


static void init_SMB_nextAvailable() {
    Symbol SMB_nextAvailable = new_Symbol(L"nextAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10666 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10668 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10672 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10673 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10672);
    Array PThreadedCode10671 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10672, (Optr)&t_send1, (Optr)PSend10673, (Optr)&t_block_return);
    Block PBlock10670 = new_Block_with(empty_Array, empty_Array, PThreadedCode10671, 1, PSend10673);
    // ifFalse:. 
    Send PSend10669 = new_Send((Optr)PSend10668, SMB_ifFalse_, 1, (Optr)PBlock10670);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10674 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10678 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10677 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10678, (Optr)&t_block_return);
    Block PBlock10676 = new_Block_with(empty_Array, empty_Array, PThreadedCode10677, 1, PSend10678);
    // ifTrue:. 
    Send PSend10675 = new_Send((Optr)PSend10674, SMB_ifTrue_, 1, (Optr)PBlock10676);
    // nextAllInBuffer. 
    Send PSend10679 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode10667 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10668, (Optr)&t_send_ifFalse_, (Optr)PSend10669, (Optr)PBlock10670, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10674, (Optr)&t_send_ifTrue_, (Optr)PSend10675, (Optr)PBlock10676, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10679, (Optr)&t_method_return);
    Block PBlock10665 = new_Block_with(PArray10666, empty_Array, PThreadedCode10667, 3, PSend10669, PSend10675, PSend10679);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10680 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10665);
    Array PThreadedCode10664 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10665, (Optr)&t_send1, (Optr)PSend10680, (Optr)&t_method_return);
    Method PMethod10663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10664, 1, PSend10680);
    
    MethodClosure MC_SMB_nextAvailable = new_MethodClosure((Method)PMethod10663, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable, MC_SMB_nextAvailable);
}


static void init_SMB_resizeInBuffer_() {
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    Variable VAR_newSize_0_0 = new_Variable_named(L"newSize", 0);
    Array PArray10682 = new_Array_with(1, (Optr)VAR_newSize_0_0);
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend10686 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)VAR_newSize_0_0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10687 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10685 = new_Send((Optr)PSend10686, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10687, (Optr)slot_IO_SocketStream_inBuffer, (Optr)int_1_Const);
    Assign PAssign10684 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend10685);
    Array PThreadedCode10683 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign10684, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newSize_0_0, (Optr)&t_send1, (Optr)PSend10686, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10687, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10685, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10681 = new_Method_with(PArray10682, empty_Array, empty_Array, PThreadedCode10683, 2, PAssign10684, self);
    
    MethodClosure MC_SMB_resizeInBuffer_ = new_MethodClosure((Method)PMethod10681, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resizeInBuffer_, MC_SMB_resizeInBuffer_);
}


static void init_SMB_bufferSize_() {
    Symbol SMB_bufferSize_ = new_Symbol(L"bufferSize:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray10689 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign10691 = new_Assign((Optr)slot_IO_SocketStream_bufferSize, (Optr)VAR_anInt_0_0);
    Array PThreadedCode10690 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign10691, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10688 = new_Method_with(PArray10689, empty_Array, empty_Array, PThreadedCode10690, 2, PAssign10691, self);
    
    MethodClosure MC_SMB_bufferSize_ = new_MethodClosure((Method)PMethod10688, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_bufferSize_, MC_SMB_bufferSize_);
}


static void init_SMB_isDataAvailable() {
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10695 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10697 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10701 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode10700 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend10701, (Optr)&t_block_return);
    Block PBlock10699 = new_Block_with(empty_Array, empty_Array, PThreadedCode10700, 1, PSend10701);
    // ifFalse:. 
    Send PSend10698 = new_Send((Optr)PSend10697, SMB_ifFalse_, 1, (Optr)PBlock10699);
    Symbol SMB_dataAvailable = new_Symbol(L"dataAvailable");
    // dataAvailable. 
    Send PSend10702 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_dataAvailable, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Array PThreadedCode10705 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock10704 = new_Block_with(empty_Array, empty_Array, PThreadedCode10705, 1, false_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray10709 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    // receiveDataIfAvailable. 
    Send PSend10711 = new_Send((Optr)VAR__receiver__2_0, SMB_receiveDataIfAvailable, 0);
    // isDataAvailable. 
    Send PSend10712 = new_Send((Optr)VAR__receiver__2_0, SMB_isDataAvailable, 0);
    Array PThreadedCode10710 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend10712, (Optr)&t_method_return);
    Block PBlock10708 = new_Block_with(PArray10709, empty_Array, PThreadedCode10710, 2, PSend10711, PSend10712);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend10713 = new_Send((Optr)PBlock10708, SMB_value_, 1, (Optr)self);
    Array PThreadedCode10707 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock10708, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10713, (Optr)&t_block_return);
    Block PBlock10706 = new_Block_with(empty_Array, empty_Array, PThreadedCode10707, 1, PSend10713);
    // ifFalse:ifTrue:. 
    Send PSend10703 = new_Send((Optr)PSend10702, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock10704, (Optr)PBlock10706);
    Array PThreadedCode10696 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10697, (Optr)&t_send_ifFalse_, (Optr)PSend10698, (Optr)PBlock10699, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend10702, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend10703, (Optr)PBlock10704, (Optr)PBlock10706, (Optr)&t_method_return);
    Block PBlock10694 = new_Block_with(PArray10695, empty_Array, PThreadedCode10696, 2, PSend10698, PSend10703);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10714 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10694);
    Array PThreadedCode10693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10694, (Optr)&t_send1, (Optr)PSend10714, (Optr)&t_method_return);
    Method PMethod10692 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10693, 1, PSend10714);
    
    MethodClosure MC_SMB_isDataAvailable = new_MethodClosure((Method)PMethod10692, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isDataAvailable, MC_SMB_isDataAvailable);
}


static void init_SMB_adjustOutBuffer_() {
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    Variable VAR_bytesToWrite_0_0 = new_Variable_named(L"bytesToWrite", 0);
    Array PArray10716 = new_Array_with(1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10718 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10719 = new_Send((Optr)PSend10718, SMB__minus_, 1, (Optr)slot_IO_SocketStream_outNextToWrite);
    // -. 
    Send PSend10720 = new_Send((Optr)PSend10719, SMB__minus_, 1, (Optr)VAR_bytesToWrite_0_0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // <. 
    Send PSend10721 = new_Send((Optr)PSend10720, SMB__lt_, 1, (Optr)int_1024_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // size. 
    Send PSend10730 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend10729 = new_Send((Optr)PSend10730, SMB_max_, 1, (Optr)VAR_bytesToWrite_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10728 = new_Send((Optr)PSend10729, SMB__times_, 1, (Optr)int_2_Const);
    // streamBuffer:. 
    Send PSend10727 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)PSend10728);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // size. 
    Send PSend10731 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // replaceFrom:to:with:startingAt:. 
    Send PSend10726 = new_Send((Optr)PSend10727, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend10731, (Optr)slot_IO_SocketStream_outBuffer, (Optr)int_1_Const);
    Assign PAssign10725 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend10726);
    Array PThreadedCode10724 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign10725, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10730, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10729, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10728, (Optr)&t_send1, (Optr)PSend10727, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10731, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10726, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10723 = new_Block_with(empty_Array, empty_Array, PThreadedCode10724, 1, PAssign10725);
    // ifTrue:. 
    Send PSend10722 = new_Send((Optr)PSend10721, SMB_ifTrue_, 1, (Optr)PBlock10723);
    Array PThreadedCode10717 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10718, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_send1, (Optr)PSend10719, (Optr)&t_push_variable, (Optr)VAR_bytesToWrite_0_0, (Optr)&t_send1, (Optr)PSend10720, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10721, (Optr)&t_send_ifTrue_, (Optr)PSend10722, (Optr)PBlock10723, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10715 = new_Method_with(PArray10716, empty_Array, empty_Array, PThreadedCode10717, 2, PSend10722, self);
    
    MethodClosure MC_SMB_adjustOutBuffer_ = new_MethodClosure((Method)PMethod10715, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_adjustOutBuffer_, MC_SMB_adjustOutBuffer_);
}


static void init_SMB_nextAllInBuffer() {
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10734 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10735 = new_Send((Optr)PSend10734, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10736 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10735);
    Array PThreadedCode10733 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10734, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10735, (Optr)&t_send1, (Optr)PSend10736, (Optr)&t_method_return);
    Method PMethod10732 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10733, 1, PSend10736);
    
    MethodClosure MC_SMB_nextAllInBuffer = new_MethodClosure((Method)PMethod10732, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAllInBuffer, MC_SMB_nextAllInBuffer);
}


static void init_SMB_skip_() {
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10738 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10740 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10743 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10744 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend10742 = new_Send((Optr)PSend10743, SMB_min_, 1, (Optr)PSend10744);
    Assign PAssign10741 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10742);
    Array PThreadedCode10739 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10740, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10741, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10743, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10744, (Optr)&t_send1, (Optr)PSend10742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10737 = new_Method_with(PArray10738, empty_Array, empty_Array, PThreadedCode10739, 3, PSend10740, PAssign10741, self);
    
    MethodClosure MC_SMB_skip_ = new_MethodClosure((Method)PMethod10737, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_skip_, MC_SMB_skip_);
}


static void init_SMB_nextAvailable_() {
    Symbol SMB_nextAvailable_ = new_Symbol(L"nextAvailable:");
    Variable VAR_howMany_0_0 = new_Variable_named(L"howMany", 0);
    Array PArray10746 = new_Array_with(1, (Optr)VAR_howMany_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10749 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10751 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    // nextInBuffer:. 
    Send PSend10755 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10756 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10755);
    Array PThreadedCode10754 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10755, (Optr)&t_send1, (Optr)PSend10756, (Optr)&t_block_return);
    Block PBlock10753 = new_Block_with(empty_Array, empty_Array, PThreadedCode10754, 1, PSend10756);
    // ifFalse:. 
    Send PSend10752 = new_Send((Optr)PSend10751, SMB_ifFalse_, 1, (Optr)PBlock10753);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend10757 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10761 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10760 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10761, (Optr)&t_block_return);
    Block PBlock10759 = new_Block_with(empty_Array, empty_Array, PThreadedCode10760, 1, PSend10761);
    // ifTrue:. 
    Send PSend10758 = new_Send((Optr)PSend10757, SMB_ifTrue_, 1, (Optr)PBlock10759);
    // nextInBuffer:. 
    Send PSend10762 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)VAR_howMany_0_0);
    Array PThreadedCode10750 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10751, (Optr)&t_send_ifFalse_, (Optr)PSend10752, (Optr)PBlock10753, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10757, (Optr)&t_send_ifTrue_, (Optr)PSend10758, (Optr)PBlock10759, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_howMany_0_0, (Optr)&t_send1, (Optr)PSend10762, (Optr)&t_method_return);
    Block PBlock10748 = new_Block_with(PArray10749, empty_Array, PThreadedCode10750, 3, PSend10752, PSend10758, PSend10762);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10763 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10748);
    Array PThreadedCode10747 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10748, (Optr)&t_send1, (Optr)PSend10763, (Optr)&t_method_return);
    Method PMethod10745 = new_Method_with(PArray10746, empty_Array, empty_Array, PThreadedCode10747, 1, PSend10763);
    
    MethodClosure MC_SMB_nextAvailable_ = new_MethodClosure((Method)PMethod10745, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextAvailable_, MC_SMB_nextAvailable_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend10766 = new_Send((Optr)self, SMB_flush, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_closeAndDestroy_ = new_Symbol(L"closeAndDestroy:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // closeAndDestroy:. 
    Send PSend10767 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_closeAndDestroy_, 1, (Optr)int_30_Const);
    Array PThreadedCode10765 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10766, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend10767, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10764 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10765, 3, PSend10766, PSend10767, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod10764, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_inBufferSize() {
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10770 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10771 = new_Send((Optr)PSend10770, SMB__minus_, 1, (Optr)int_1_Const);
    Array PThreadedCode10769 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10770, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10771, (Optr)&t_method_return);
    Method PMethod10768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10769, 1, PSend10771);
    
    MethodClosure MC_SMB_inBufferSize = new_MethodClosure((Method)PMethod10768, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_inBufferSize, MC_SMB_inBufferSize);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray10773 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend10775 = new_Send((Optr)VAR_anObject_0_0, SMB_printOn_, 1, (Optr)self);
    Array PThreadedCode10774 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10772 = new_Method_with(PArray10773, empty_Array, empty_Array, PThreadedCode10774, 2, PSend10775, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod10772, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10779 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10781 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10785 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10784 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10785, (Optr)&t_block_return);
    Block PBlock10783 = new_Block_with(empty_Array, empty_Array, PThreadedCode10784, 1, PSend10785);
    // ifTrue:. 
    Send PSend10782 = new_Send((Optr)PSend10781, SMB_ifTrue_, 1, (Optr)PBlock10783);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10786 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10790 = new_Send((Optr)self, SMB_receiveData, 0);
    // atEnd. 
    Send PSend10791 = new_Send((Optr)self, SMB_atEnd, 0);
    // escape:. 
    Send PSend10795 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode10794 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend10795, (Optr)&t_block_return);
    Block PBlock10793 = new_Block_with(empty_Array, empty_Array, PThreadedCode10794, 1, PSend10795);
    // ifTrue:. 
    Send PSend10792 = new_Send((Optr)PSend10791, SMB_ifTrue_, 1, (Optr)PBlock10793);
    Array PThreadedCode10789 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10790, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10791, (Optr)&t_send_ifTrue_, (Optr)PSend10792, (Optr)PBlock10793, (Optr)&t_block_return);
    Block PBlock10788 = new_Block_with(empty_Array, empty_Array, PThreadedCode10789, 2, PSend10790, PSend10792);
    // ifTrue:. 
    Send PSend10787 = new_Send((Optr)PSend10786, SMB_ifTrue_, 1, (Optr)PBlock10788);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10797 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10796 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend10797);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend10798 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_at_, 1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode10780 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10781, (Optr)&t_send_ifTrue_, (Optr)PSend10782, (Optr)PBlock10783, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10786, (Optr)&t_send_ifTrue_, (Optr)PSend10787, (Optr)PBlock10788, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10796, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10797, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10798, (Optr)&t_method_return);
    Block PBlock10778 = new_Block_with(PArray10779, empty_Array, PThreadedCode10780, 4, PSend10782, PSend10787, PAssign10796, PSend10798);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10799 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10778);
    Array PThreadedCode10777 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10778, (Optr)&t_send1, (Optr)PSend10799, (Optr)&t_method_return);
    Method PMethod10776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10777, 1, PSend10799);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod10776, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    Symbol SMB_standardTimeout = new_Symbol(L"standardTimeout");
    // standardTimeout. 
    Send PSend10805 = new_Send((Optr)PSocket_classReference, SMB_standardTimeout, 0);
    Assign PAssign10804 = new_Assign((Optr)slot_IO_SocketStream_timeout, (Optr)PSend10805);
    Array PThreadedCode10803 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign10804, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend10805, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10802 = new_Block_with(empty_Array, empty_Array, PThreadedCode10803, 1, PAssign10804);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend10806 = new_Send((Optr)slot_IO_SocketStream_timeout, SMB_ifNil_, 1, (Optr)PBlock10802);
    Array PThreadedCode10801 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_push_closure, (Optr)PBlock10802, (Optr)&t_send1, (Optr)PSend10806, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_timeout, (Optr)&t_method_return);
    Method PMethod10800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10801, 2, PSend10806, slot_IO_SocketStream_timeout);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod10800, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_upToAll_() {
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Variable VAR_aStringOrByteArray_0_0 = new_Variable_named(L"aStringOrByteArray", 0);
    Array PArray10808 = new_Array_with(1, (Optr)VAR_aStringOrByteArray_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_sz_0_2 = new_Variable_named(L"sz", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_4 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_5 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray10809 = new_Array_with(5, (Optr)VAR_index_0_1, (Optr)VAR_sz_0_2, (Optr)VAR_result_0_3, (Optr)VAR_lastRecentlyRead_0_4, (Optr)VAR_searchedSoFar_0_5);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray10812 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_10814 = new_String(L"SocketStream>>upToAll:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10814_Const = new_Constant((Optr)string_10814);
    // warn:. 
    Send PSend10815 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10814_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10817 = new_Send((Optr)VAR_aStringOrByteArray_0_0, SMB_size, 0);
    Assign PAssign10816 = new_Assign((Optr)VAR_sz_0_2, (Optr)PSend10817);
    String string_10818 = new_String(L"SocketStream>>upToAll: sz is ");
    Constant string_10818_Const = new_Constant((Optr)string_10818);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10819 = new_Send((Optr)string_10818_Const, SMB__append_, 1, (Optr)VAR_sz_0_2);
    // warn:. 
    Send PSend10820 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend10819);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10821 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)int_0_Const);
    Assign PAssign10822 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)int_0_Const);
    Assign PAssign10823 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    String string_10824 = new_String(L"SocketStream>>upToAll: temps initialized");
    Constant string_10824_Const = new_Constant((Optr)string_10824);
    // warn:. 
    Send PSend10825 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10824_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend10828 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend10829 = new_Send((Optr)PSend10828, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10832 = new_Send((Optr)VAR_lastRecentlyRead_0_4, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend10835 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    // not. 
    Send PSend10836 = new_Send((Optr)PSend10835, SMB_not, 0);
    Array PThreadedCode10834 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10835, (Optr)&t_send0, (Optr)PSend10836, (Optr)&t_block_return);
    Block PBlock10833 = new_Block_with(empty_Array, empty_Array, PThreadedCode10834, 1, PSend10836);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend10837 = new_Send((Optr)PSend10832, SMB_and_, 1, (Optr)PBlock10833);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend10840 = new_Send((Optr)self, SMB_inBufferSize, 0);
    SmallInt int_100000 = new_SmallInt(100000);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_100000_Const = new_Constant((Optr)int_100000);
    // >. 
    Send PSend10841 = new_Send((Optr)PSend10840, SMB__gt_, 1, (Optr)int_100000_Const);
    Array PThreadedCode10839 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10840, (Optr)&t_push1, (Optr)int_100000, (Optr)&t_send1, (Optr)PSend10841, (Optr)&t_block_return);
    Block PBlock10838 = new_Block_with(empty_Array, empty_Array, PThreadedCode10839, 1, PSend10841);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend10842 = new_Send((Optr)PSend10837, SMB_or_, 1, (Optr)PBlock10838);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_10846 = new_String(L"SocketStream>>upToAll: we need to read data");
    Constant string_10846_Const = new_Constant((Optr)string_10846);
    // warn:. 
    Send PSend10847 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10846_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10851 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_5);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10850 = new_Send((Optr)PSend10851, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOfSubCollection:startingAt:. 
    Send PSend10849 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_aStringOrByteArray_0_0, (Optr)PSend10850);
    Assign PAssign10848 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend10849);
    String string_10852 = new_String(L"SocketStream>>upToAll: searched for a bit.");
    Constant string_10852_Const = new_Constant((Optr)string_10852);
    // warn:. 
    Send PSend10853 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10852_Const);
    // inBufferSize. 
    Send PSend10855 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign10854 = new_Assign((Optr)VAR_searchedSoFar_0_5, (Optr)PSend10855);
    String string_10856 = new_String(L"SocketStream>>upToAll: this far we searched until");
    Constant string_10856_Const = new_Constant((Optr)string_10856);
    // warn:. 
    Send PSend10857 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10856_Const);
    // warn:. 
    Send PSend10858 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_searchedSoFar_0_5);
    // >. 
    Send PSend10859 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend10862 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)VAR_sz_0_2);
    // >. 
    Send PSend10863 = new_Send((Optr)PSend10862, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10861 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10862, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10863, (Optr)&t_block_return);
    Block PBlock10860 = new_Block_with(empty_Array, empty_Array, PThreadedCode10861, 1, PSend10863);
    // and:. 
    Send PSend10864 = new_Send((Optr)PSend10859, SMB_and_, 1, (Optr)PBlock10860);
    Assign PAssign10868 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode10867 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign10868, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10866 = new_Block_with(empty_Array, empty_Array, PThreadedCode10867, 1, PAssign10868);
    // ifTrue:. 
    Send PSend10865 = new_Send((Optr)PSend10864, SMB_ifTrue_, 1, (Optr)PBlock10866);
    Array PThreadedCode10845 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10846, (Optr)&t_send1, (Optr)PSend10847, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10848, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10851, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10850, (Optr)&t_send2, (Optr)PSend10849, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10852, (Optr)&t_send1, (Optr)PSend10853, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10854, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10855, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10856, (Optr)&t_send1, (Optr)PSend10857, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_5, (Optr)&t_send1, (Optr)PSend10858, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10859, (Optr)&t_push_closure, (Optr)PBlock10860, (Optr)&t_send1, (Optr)PSend10864, (Optr)&t_send_ifTrue_, (Optr)PSend10865, (Optr)PBlock10866, (Optr)&t_block_return);
    Block PBlock10844 = new_Block_with(empty_Array, empty_Array, PThreadedCode10845, 7, PSend10847, PAssign10848, PSend10853, PAssign10854, PSend10857, PSend10858, PSend10865);
    // ifTrue:. 
    Send PSend10843 = new_Send((Optr)PSend10842, SMB_ifTrue_, 1, (Optr)PBlock10844);
    // =. 
    Send PSend10869 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode10831 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_4, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10832, (Optr)&t_push_closure, (Optr)PBlock10833, (Optr)&t_send1, (Optr)PSend10837, (Optr)&t_push_closure, (Optr)PBlock10838, (Optr)&t_send1, (Optr)PSend10842, (Optr)&t_send_ifTrue_, (Optr)PSend10843, (Optr)PBlock10844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10869, (Optr)&t_block_return);
    Block PBlock10830 = new_Block_with(empty_Array, empty_Array, PThreadedCode10831, 2, PSend10843, PSend10869);
    // and:. 
    Send PSend10870 = new_Send((Optr)PSend10829, SMB_and_, 1, (Optr)PBlock10830);
    Array PThreadedCode10827 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10828, (Optr)&t_send0, (Optr)PSend10829, (Optr)&t_push_closure, (Optr)PBlock10830, (Optr)&t_send1, (Optr)PSend10870, (Optr)&t_block_return);
    Block PBlock10826 = new_Block_with(empty_Array, empty_Array, PThreadedCode10827, 1, PSend10870);
    // =. 
    Send PSend10873 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend10877 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode10876 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10877, (Optr)&t_block_return);
    Block PBlock10875 = new_Block_with(empty_Array, empty_Array, PThreadedCode10876, 1, PSend10877);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend10880 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode10879 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10880, (Optr)&t_block_return);
    Block PBlock10878 = new_Block_with(empty_Array, empty_Array, PThreadedCode10879, 1, PSend10880);
    // ifTrue:ifFalse:. 
    Send PSend10874 = new_Send((Optr)PSend10873, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10875, (Optr)PBlock10878);
    Assign PAssign10881 = new_Assign((Optr)VAR_lastRecentlyRead_0_4, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10872 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10873, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10874, (Optr)PBlock10875, (Optr)PBlock10878, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10881, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock10871 = new_Block_with(empty_Array, empty_Array, PThreadedCode10872, 2, PSend10874, PAssign10881);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend10882 = new_Send((Optr)PBlock10826, SMB_whileTrue_, 1, (Optr)PBlock10871);
    // >. 
    Send PSend10883 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10890 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend10889 = new_Send((Optr)PSend10890, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend10888 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend10889);
    Assign PAssign10887 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend10888);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend10891 = new_Send((Optr)self, SMB_skip_, 1, (Optr)VAR_sz_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend10892 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_3);
    Array PThreadedCode10886 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign10887, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10890, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10889, (Optr)&t_send1, (Optr)PSend10888, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10891, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_send1, (Optr)PSend10892, (Optr)&t_block_return);
    Block PBlock10885 = new_Block_with(empty_Array, empty_Array, PThreadedCode10886, 3, PAssign10887, PSend10891, PSend10892);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend10895 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend10896 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend10895);
    Array PThreadedCode10894 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10895, (Optr)&t_send1, (Optr)PSend10896, (Optr)&t_block_return);
    Block PBlock10893 = new_Block_with(empty_Array, empty_Array, PThreadedCode10894, 1, PSend10896);
    // ifTrue:ifFalse:. 
    Send PSend10884 = new_Send((Optr)PSend10883, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10885, (Optr)PBlock10893);
    Array PThreadedCode10813 = instantiate_Array_with(ThreadedCode_Class, 0, 63, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10814, (Optr)&t_send1, (Optr)PSend10815, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10816, (Optr)&t_push_variable, (Optr)VAR_aStringOrByteArray_0_0, (Optr)&t_send0, (Optr)PSend10817, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10818, (Optr)&t_push_variable, (Optr)VAR_sz_0_2, (Optr)&t_send1, (Optr)PSend10819, (Optr)&t_send1, (Optr)PSend10820, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10821, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10822, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10823, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10824, (Optr)&t_send1, (Optr)PSend10825, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock10826, (Optr)&t_push_closure, (Optr)PBlock10871, (Optr)&t_send1, (Optr)PSend10882, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend10883, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10884, (Optr)PBlock10885, (Optr)PBlock10893, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock10811 = new_Block_with(PArray10812, empty_Array, PThreadedCode10813, 10, PSend10815, PAssign10816, PSend10820, PAssign10821, PAssign10822, PAssign10823, PSend10825, PSend10882, PSend10884, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend10897 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock10811);
    Array PThreadedCode10810 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock10811, (Optr)&t_send1, (Optr)PSend10897, (Optr)&t_method_return);
    Method PMethod10807 = new_Method_with(PArray10808, PArray10809, empty_Array, PThreadedCode10810, 1, PSend10897);
    
    MethodClosure MC_SMB_upToAll_ = new_MethodClosure((Method)PMethod10807, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToAll_, MC_SMB_upToAll_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray10899 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend10901 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode10900 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend10901, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10898 = new_Method_with(PArray10899, empty_Array, empty_Array, PThreadedCode10900, 2, PSend10901, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod10898, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_growInBuffer() {
    Symbol SMB_growInBuffer = new_Symbol(L"growInBuffer");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10904 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend10905 = new_Send((Optr)PSend10904, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_resizeInBuffer_ = new_Symbol(L"resizeInBuffer:");
    // resizeInBuffer:. 
    Send PSend10906 = new_Send((Optr)self, SMB_resizeInBuffer_, 1, (Optr)PSend10905);
    Array PThreadedCode10903 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10904, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend10905, (Optr)&t_send1, (Optr)PSend10906, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10903, 2, PSend10906, self);
    
    MethodClosure MC_SMB_growInBuffer = new_MethodClosure((Method)PMethod10902, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_growInBuffer, MC_SMB_growInBuffer);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray10908 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend10910 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend10911 = new_Send((Optr)PSend10910, SMB_name, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10912 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend10911);
    String string_10915 = new_String(L"[inbuf:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10916 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    SmallInt int_1024 = new_SmallInt(1024);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // /. 
    Send PSend10917 = new_Send((Optr)PSend10916, SMB__divide_, 1, (Optr)int_1024_Const);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend10918 = new_Send((Optr)PSend10917, SMB_rounded, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10919 = new_Send((Optr)PSend10918, SMB_asString, 0);
    Constant string_10915_Const = new_Constant((Optr)string_10915);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend10920 = new_Send((Optr)string_10915_Const, SMB__append_, 1, (Optr)PSend10919);
    String string_10921 = new_String(L"kb/outbuf:");
    Constant string_10921_Const = new_Constant((Optr)string_10921);
    // ,. 
    Send PSend10922 = new_Send((Optr)PSend10920, SMB__append_, 1, (Optr)string_10921_Const);
    // size. 
    Send PSend10923 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_size, 0);
    // /. 
    Send PSend10924 = new_Send((Optr)PSend10923, SMB__divide_, 1, (Optr)int_1024_Const);
    // rounded. 
    Send PSend10925 = new_Send((Optr)PSend10924, SMB_rounded, 0);
    // asString. 
    Send PSend10926 = new_Send((Optr)PSend10925, SMB_asString, 0);
    // ,. 
    Send PSend10927 = new_Send((Optr)PSend10922, SMB__append_, 1, (Optr)PSend10926);
    String string_10928 = new_String(L"kb]");
    Constant string_10928_Const = new_Constant((Optr)string_10928);
    // ,. 
    Send PSend10929 = new_Send((Optr)PSend10927, SMB__append_, 1, (Optr)string_10928_Const);
    // nextPutAll:. 
    Send PSend10930 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPutAll_, 1, (Optr)PSend10929);
    Array PThreadedCode10914 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_10915, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend10916, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10917, (Optr)&t_send0, (Optr)PSend10918, (Optr)&t_send0, (Optr)PSend10919, (Optr)&t_send1, (Optr)PSend10920, (Optr)&t_push1, (Optr)string_10921, (Optr)&t_send1, (Optr)PSend10922, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_send0, (Optr)PSend10923, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend10924, (Optr)&t_send0, (Optr)PSend10925, (Optr)&t_send0, (Optr)PSend10926, (Optr)&t_send1, (Optr)PSend10927, (Optr)&t_push1, (Optr)string_10928, (Optr)&t_send1, (Optr)PSend10929, (Optr)&t_send1, (Optr)PSend10930, (Optr)&t_block_return);
    Block PBlock10913 = new_Block_with(empty_Array, empty_Array, PThreadedCode10914, 1, PSend10930);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend10931 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_ifNotNil_, 1, (Optr)PBlock10913);
    Array PThreadedCode10909 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10910, (Optr)&t_send0, (Optr)PSend10911, (Optr)&t_send1, (Optr)PSend10912, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_closure, (Optr)PBlock10913, (Optr)&t_send1, (Optr)PSend10931, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10907 = new_Method_with(PArray10908, empty_Array, empty_Array, PThreadedCode10909, 3, PSend10912, PSend10931, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod10907, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_autoFlush() {
    Symbol SMB_autoFlush = new_Symbol(L"autoFlush");
    Array PThreadedCode10933 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_autoFlush, (Optr)&t_method_return);
    Method PMethod10932 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10933, 1, slot_IO_SocketStream_autoFlush);
    
    MethodClosure MC_SMB_autoFlush = new_MethodClosure((Method)PMethod10932, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_autoFlush, MC_SMB_autoFlush);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray10935 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray10936 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asByteArray = new_Symbol(L"asByteArray");
    // asByteArray. 
    Send PSend10942 = new_Send((Optr)VAR_aCollection_0_0, SMB_asByteArray, 0);
    Array PThreadedCode10941 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10942, (Optr)&t_block_return);
    Block PBlock10940 = new_Block_with(empty_Array, empty_Array, PThreadedCode10941, 1, PSend10942);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend10945 = new_Send((Optr)VAR_aCollection_0_0, SMB_asString, 0);
    Array PThreadedCode10944 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend10945, (Optr)&t_block_return);
    Block PBlock10943 = new_Block_with(empty_Array, empty_Array, PThreadedCode10944, 1, PSend10945);
    // ifTrue:ifFalse:. 
    Send PSend10939 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock10940, (Optr)PBlock10943);
    Assign PAssign10938 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend10939);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend10946 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    // adjustOutBuffer:. 
    Send PSend10947 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)PSend10946);
    // size. 
    Send PSend10948 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10949 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend10948);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10950 = new_Send((Optr)PSend10949, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend10951 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend10950, (Optr)VAR_toPut_0_1, (Optr)int_1_Const);
    // size. 
    Send PSend10954 = new_Send((Optr)VAR_toPut_0_1, SMB_size, 0);
    // +. 
    Send PSend10953 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)PSend10954);
    Assign PAssign10952 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend10953);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend10955 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode10937 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign10938, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend10939, (Optr)PBlock10940, (Optr)PBlock10943, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10946, (Optr)&t_send1, (Optr)PSend10947, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10948, (Optr)&t_send1, (Optr)PSend10949, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10950, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend10951, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10952, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send0, (Optr)PSend10954, (Optr)&t_send1, (Optr)PSend10953, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend10955, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10934 = new_Method_with(PArray10935, PArray10936, empty_Array, PThreadedCode10937, 6, PAssign10938, PSend10947, PSend10951, PAssign10952, PSend10955, self);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod10934, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_receiveDataIfAvailable() {
    Symbol SMB_receiveDataIfAvailable = new_Symbol(L"receiveDataIfAvailable");
    Symbol SMB_receiveSomeDataInto_startingAt_ = new_Symbol(L"receiveSomeDataInto:startingAt:");
    // receiveSomeDataInto:startingAt:. 
    Send PSend10959 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_receiveSomeDataInto_startingAt_, 2, (Optr)slot_IO_SocketStream_inBuffer, (Optr)slot_IO_SocketStream_inNextToWrite);
    Assign PAssign10958 = new_Assign((Optr)slot_IO_SocketStream_recentlyRead, (Optr)PSend10959);
    Symbol SMB_adjustInBuffer_ = new_Symbol(L"adjustInBuffer:");
    // adjustInBuffer:. 
    Send PSend10960 = new_Send((Optr)self, SMB_adjustInBuffer_, 1, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode10957 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign10958, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send2, (Optr)PSend10959, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_send1, (Optr)PSend10960, (Optr)&t_method_return);
    Method PMethod10956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10957, 2, PAssign10958, PSend10960);
    
    MethodClosure MC_SMB_receiveDataIfAvailable = new_MethodClosure((Method)PMethod10956, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_receiveDataIfAvailable, MC_SMB_receiveDataIfAvailable);
}


static void init_SMB_isInBufferEmpty() {
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    String string_10963 = new_String(L"SocketStream>>isInBufferEmpty:");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_10963_Const = new_Constant((Optr)string_10963);
    // warn:. 
    Send PSend10964 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10963_Const);
    String string_10965 = new_String(L"-Last Read:");
    Constant string_10965_Const = new_Constant((Optr)string_10965);
    // warn:. 
    Send PSend10966 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10965_Const);
    // warn:. 
    Send PSend10967 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_lastRead);
    String string_10968 = new_String(L"-Index Next To Write:");
    Constant string_10968_Const = new_Constant((Optr)string_10968);
    // warn:. 
    Send PSend10969 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_10968_Const);
    // warn:. 
    Send PSend10970 = new_Send((Optr)self, SMB_warn_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10971 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend10972 = new_Send((Optr)PSend10971, SMB__equals_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode10962 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10963, (Optr)&t_send1, (Optr)PSend10964, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10965, (Optr)&t_send1, (Optr)PSend10966, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10967, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_10968, (Optr)&t_send1, (Optr)PSend10969, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10970, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10971, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend10972, (Optr)&t_method_return);
    Method PMethod10961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10962, 6, PSend10964, PSend10966, PSend10967, PSend10969, PSend10970, PSend10972);
    
    MethodClosure MC_SMB_isInBufferEmpty = new_MethodClosure((Method)PMethod10961, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isInBufferEmpty, MC_SMB_isInBufferEmpty);
}


static void init_SMB_peek_() {
    Symbol SMB_peek_ = new_Symbol(L"peek:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray10974 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray10975 = new_Array_with(1, (Optr)VAR_start_0_1);
    Symbol SMB_receiveData_ = new_Symbol(L"receiveData:");
    // receiveData:. 
    Send PSend10977 = new_Send((Optr)self, SMB_receiveData_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend10979 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10978 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend10979);
    // +. 
    Send PSend10980 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10981 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend10982 = new_Send((Optr)PSend10980, SMB_min_, 1, (Optr)PSend10981);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend10983 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend10982);
    Array PThreadedCode10976 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10977, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10978, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10979, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend10980, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10981, (Optr)&t_send1, (Optr)PSend10982, (Optr)&t_send2, (Optr)PSend10983, (Optr)&t_method_return);
    Method PMethod10973 = new_Method_with(PArray10974, PArray10975, empty_Array, PThreadedCode10976, 3, PSend10977, PAssign10978, PSend10983);
    
    MethodClosure MC_SMB_peek_ = new_MethodClosure((Method)PMethod10973, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_peek_, MC_SMB_peek_);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend10986 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend10987 = new_Send((Optr)self, SMB_nextPutAll_, 1, (Optr)PSend10986);
    Array PThreadedCode10985 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend10986, (Optr)&t_send1, (Optr)PSend10987, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod10984 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode10985, 2, PSend10987, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod10984, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_moveInBufferDown() {
    Symbol SMB_moveInBufferDown = new_Symbol(L"moveInBufferDown");
    Variable VAR_sz_0_0 = new_Variable_named(L"sz", 0);
    Variable VAR_distanceMoved_0_1 = new_Variable_named(L"distanceMoved", 0);
    Array PArray10989 = new_Array_with(2, (Optr)VAR_sz_0_0, (Optr)VAR_distanceMoved_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend10993 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend10992 = new_Send((Optr)PSend10993, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign10991 = new_Assign((Optr)VAR_sz_0_0, (Optr)PSend10992);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend10994 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend10995 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_sz_0_0, (Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend10994);
    Assign PAssign10996 = new_Assign((Optr)VAR_distanceMoved_0_1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign10997 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    // +. 
    Send PSend10999 = new_Send((Optr)VAR_sz_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign10998 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)PSend10999);
    Array PThreadedCode10990 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign10991, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend10993, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10992, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10994, (Optr)&t_send4, (Optr)PSend10995, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10996, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10997, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign10998, (Optr)&t_push_variable, (Optr)VAR_sz_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend10999, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_distanceMoved_0_1, (Optr)&t_method_return);
    Method PMethod10988 = new_Method_with(empty_Array, PArray10989, empty_Array, PThreadedCode10990, 6, PAssign10991, PSend10995, PAssign10996, PAssign10997, PAssign10998, VAR_distanceMoved_0_1);
    
    MethodClosure MC_SMB_moveInBufferDown = new_MethodClosure((Method)PMethod10988, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_moveInBufferDown, MC_SMB_moveInBufferDown);
}


static void init_SMB_nextLineLf() {
    Symbol SMB_nextLineLf = new_Symbol(L"nextLineLf");
    Variable VAR_nextLine_0_0 = new_Variable_named(L"nextLine", 0);
    Array PArray11001 = new_Array_with(1, (Optr)VAR_nextLine_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend11005 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // upToAll:. 
    Send PSend11004 = new_Send((Optr)self, SMB_upToAll_, 1, (Optr)PSend11005);
    Assign PAssign11003 = new_Assign((Optr)VAR_nextLine_0_0, (Optr)PSend11004);
    Array PThreadedCode11002 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11003, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend11005, (Optr)&t_send1, (Optr)PSend11004, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_0, (Optr)&t_method_return);
    Method PMethod11000 = new_Method_with(empty_Array, PArray11001, empty_Array, PThreadedCode11002, 2, PAssign11003, VAR_nextLine_0_0);
    
    MethodClosure MC_SMB_nextLineLf = new_MethodClosure((Method)PMethod11000, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextLineLf, MC_SMB_nextLineLf);
}


static void init_SMB_nextInBuffer_() {
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray11007 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_amount_0_2 = new_Variable_named(L"amount", 0);
    Array PArray11008 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_amount_0_2);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11013 = new_Send((Optr)slot_IO_SocketStream_inNextToWrite, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend11012 = new_Send((Optr)PSend11013, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11011 = new_Send((Optr)VAR_anInteger_0_0, SMB_min_, 1, (Optr)PSend11012);
    Assign PAssign11010 = new_Assign((Optr)VAR_amount_0_2, (Optr)PSend11011);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11015 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11014 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend11015);
    // +. 
    Send PSend11017 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_amount_0_2);
    Assign PAssign11016 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)PSend11017);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11018 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)slot_IO_SocketStream_lastRead);
    Array PThreadedCode11009 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign11010, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11013, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11012, (Optr)&t_send1, (Optr)PSend11011, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11014, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11016, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_amount_0_2, (Optr)&t_send1, (Optr)PSend11017, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send2, (Optr)PSend11018, (Optr)&t_method_return);
    Method PMethod11006 = new_Method_with(PArray11007, PArray11008, empty_Array, PThreadedCode11009, 4, PAssign11010, PAssign11014, PAssign11016, PSend11018);
    
    MethodClosure MC_SMB_nextInBuffer_ = new_MethodClosure((Method)PMethod11006, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextInBuffer_, MC_SMB_nextInBuffer_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11022 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_11024 = new_String(L"SocketStream>>atEnd");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11024_Const = new_Constant((Optr)string_11024);
    // warn:. 
    Send PSend11025 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11024_Const);
    Symbol SMB_isInBufferEmpty = new_Symbol(L"isInBufferEmpty");
    // isInBufferEmpty. 
    Send PSend11026 = new_Send((Optr)self, SMB_isInBufferEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11030 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode11029 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11030, (Optr)&t_block_return);
    Block PBlock11028 = new_Block_with(empty_Array, empty_Array, PThreadedCode11029, 1, PSend11030);
    // ifFalse:. 
    Send PSend11027 = new_Send((Optr)PSend11026, SMB_ifFalse_, 1, (Optr)PBlock11028);
    String string_11031 = new_String(L"SocketStream>>atEnd: Buffer is Empty");
    Constant string_11031_Const = new_Constant((Optr)string_11031);
    // warn:. 
    Send PSend11032 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11031_Const);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend11033 = new_Send((Optr)self, SMB_isConnected, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11034 = new_Send((Optr)PSend11033, SMB_not, 0);
    Symbol SMB_isDataAvailable = new_Symbol(L"isDataAvailable");
    // isDataAvailable. 
    Send PSend11037 = new_Send((Optr)self, SMB_isDataAvailable, 0);
    // not. 
    Send PSend11038 = new_Send((Optr)PSend11037, SMB_not, 0);
    Array PThreadedCode11036 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11037, (Optr)&t_send0, (Optr)PSend11038, (Optr)&t_block_return);
    Block PBlock11035 = new_Block_with(empty_Array, empty_Array, PThreadedCode11036, 1, PSend11038);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11039 = new_Send((Optr)PSend11034, SMB_and_, 1, (Optr)PBlock11035);
    Array PThreadedCode11023 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11024, (Optr)&t_send1, (Optr)PSend11025, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11026, (Optr)&t_send_ifFalse_, (Optr)PSend11027, (Optr)PBlock11028, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11031, (Optr)&t_send1, (Optr)PSend11032, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11033, (Optr)&t_send0, (Optr)PSend11034, (Optr)&t_push_closure, (Optr)PBlock11035, (Optr)&t_send1, (Optr)PSend11039, (Optr)&t_method_return);
    Block PBlock11021 = new_Block_with(PArray11022, empty_Array, PThreadedCode11023, 4, PSend11025, PSend11027, PSend11032, PSend11039);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11040 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11021);
    Array PThreadedCode11020 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11021, (Optr)&t_send1, (Optr)PSend11040, (Optr)&t_method_return);
    Method PMethod11019 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11020, 1, PSend11040);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod11019, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray11042 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_toPut_0_1 = new_Variable_named(L"toPut", 0);
    Array PArray11043 = new_Array_with(1, (Optr)VAR_toPut_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend11049 = new_Send((Optr)VAR_char_0_0, SMB_asInteger, 0);
    Array PThreadedCode11048 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11049, (Optr)&t_block_return);
    Block PBlock11047 = new_Block_with(empty_Array, empty_Array, PThreadedCode11048, 1, PSend11049);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend11052 = new_Send((Optr)VAR_char_0_0, SMB_asCharacter, 0);
    Array PThreadedCode11051 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send0, (Optr)PSend11052, (Optr)&t_block_return);
    Block PBlock11050 = new_Block_with(empty_Array, empty_Array, PThreadedCode11051, 1, PSend11052);
    // ifTrue:ifFalse:. 
    Send PSend11046 = new_Send((Optr)slot_IO_SocketStream_binary, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11047, (Optr)PBlock11050);
    Assign PAssign11045 = new_Assign((Optr)VAR_toPut_0_1, (Optr)PSend11046);
    Symbol SMB_adjustOutBuffer_ = new_Symbol(L"adjustOutBuffer:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // adjustOutBuffer:. 
    Send PSend11053 = new_Send((Optr)self, SMB_adjustOutBuffer_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend11054 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_at_put_, 2, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)VAR_toPut_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11056 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign11055 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)PSend11056);
    Symbol SMB_checkFlush = new_Symbol(L"checkFlush");
    // checkFlush. 
    Send PSend11057 = new_Send((Optr)self, SMB_checkFlush, 0);
    Array PThreadedCode11044 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign11045, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_binary, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11046, (Optr)PBlock11047, (Optr)PBlock11050, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11053, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_variable, (Optr)VAR_toPut_0_1, (Optr)&t_send2, (Optr)PSend11054, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11055, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11056, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11057, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_method_return);
    Method PMethod11041 = new_Method_with(PArray11042, PArray11043, empty_Array, PThreadedCode11044, 6, PAssign11045, PSend11053, PSend11054, PAssign11055, PSend11057, VAR_char_0_0);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod11041, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_isConnected() {
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    String string_11060 = new_String(L"SocketStream>>isConnected");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_11060_Const = new_Constant((Optr)string_11060);
    // warn:. 
    Send PSend11061 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_11060_Const);
    // isConnected. 
    Send PSend11062 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isConnected, 0);
    Array PThreadedCode11059 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11060, (Optr)&t_send1, (Optr)PSend11061, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11062, (Optr)&t_method_return);
    Method PMethod11058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11059, 2, PSend11061, PSend11062);
    
    MethodClosure MC_SMB_isConnected = new_MethodClosure((Method)PMethod11058, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isConnected, MC_SMB_isConnected);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend11065 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend11066 = new_Send((Optr)self, SMB_nextPut_, 1, (Optr)PSend11065);
    Array PThreadedCode11064 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend11065, (Optr)&t_send1, (Optr)PSend11066, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11063 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11064, 2, PSend11066, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod11063, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend11069 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11072 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11073 = new_Send((Optr)PSend11072, SMB_not, 0);
    Array PThreadedCode11071 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11072, (Optr)&t_send0, (Optr)PSend11073, (Optr)&t_block_return);
    Block PBlock11070 = new_Block_with(empty_Array, empty_Array, PThreadedCode11071, 1, PSend11073);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11074 = new_Send((Optr)PSend11069, SMB_and_, 1, (Optr)PBlock11070);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11080 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sendData_count_ = new_Symbol(L"sendData:count:");
    // sendData:count:. 
    Send PSend11081 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_sendData_count_, 2, (Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11080);
    Array PThreadedCode11079 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11080, (Optr)&t_send2, (Optr)PSend11081, (Optr)&t_block_return);
    Block PBlock11078 = new_Block_with(empty_Array, empty_Array, PThreadedCode11079, 1, PSend11081);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11083 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Array PThreadedCode11087 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11086 = new_Block_with(empty_Array, empty_Array, PThreadedCode11087, 0);
    // ifFalse:. 
    Send PSend11085 = new_Send((Optr)slot_IO_SocketStream_shouldSignal, SMB_ifFalse_, 1, (Optr)PBlock11086);
    Array PThreadedCode11084 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_shouldSignal, (Optr)&t_send_ifFalse_, (Optr)PSend11085, (Optr)PBlock11086, (Optr)&t_method_return);
    Block PBlock11082 = new_Block_with(PArray11083, empty_Array, PThreadedCode11084, 1, PSend11085);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11088 = new_Send((Optr)PBlock11078, SMB_on_do_, 2, (Optr)ConnectionTimedOut_classReference, (Optr)PBlock11082);
    Assign PAssign11089 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11077 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11078, (Optr)&t_push_class_reference, (Optr)ConnectionTimedOut_classReference, (Optr)&t_push_closure, (Optr)PBlock11082, (Optr)&t_send2, (Optr)PSend11088, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11089, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11076 = new_Block_with(empty_Array, empty_Array, PThreadedCode11077, 2, PSend11088, PAssign11089);
    // ifTrue:. 
    Send PSend11075 = new_Send((Optr)PSend11074, SMB_ifTrue_, 1, (Optr)PBlock11076);
    Array PThreadedCode11068 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11069, (Optr)&t_push_closure, (Optr)PBlock11070, (Optr)&t_send1, (Optr)PSend11074, (Optr)&t_send_ifTrue_, (Optr)PSend11075, (Optr)PBlock11076, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11068, 2, PSend11075, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod11067, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_isOtherEndConnected() {
    Symbol SMB_isOtherEndConnected = new_Symbol(L"isOtherEndConnected");
    Symbol SMB_isOtherEndClosed = new_Symbol(L"isOtherEndClosed");
    // isOtherEndClosed. 
    Send PSend11092 = new_Send((Optr)slot_IO_SocketStream_socket, SMB_isOtherEndClosed, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11093 = new_Send((Optr)PSend11092, SMB_not, 0);
    Array PThreadedCode11091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_socket, (Optr)&t_send0, (Optr)PSend11092, (Optr)&t_send0, (Optr)PSend11093, (Optr)&t_method_return);
    Method PMethod11090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11091, 1, PSend11093);
    
    MethodClosure MC_SMB_isOtherEndConnected = new_MethodClosure((Method)PMethod11090, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_isOtherEndConnected, MC_SMB_isOtherEndConnected);
}


static void init_SMB_resetBuffers() {
    Symbol SMB_resetBuffers = new_Symbol(L"resetBuffers");
    Symbol SMB_streamBuffer_ = new_Symbol(L"streamBuffer:");
    // streamBuffer:. 
    Send PSend11097 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11096 = new_Assign((Optr)slot_IO_SocketStream_inBuffer, (Optr)PSend11097);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11098 = new_Assign((Optr)slot_IO_SocketStream_lastRead, (Optr)int_0_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign11099 = new_Assign((Optr)slot_IO_SocketStream_inNextToWrite, (Optr)int_1_Const);
    // streamBuffer:. 
    Send PSend11101 = new_Send((Optr)self, SMB_streamBuffer_, 1, (Optr)slot_IO_SocketStream_bufferSize);
    Assign PAssign11100 = new_Assign((Optr)slot_IO_SocketStream_outBuffer, (Optr)PSend11101);
    Assign PAssign11102 = new_Assign((Optr)slot_IO_SocketStream_outNextToWrite, (Optr)int_1_Const);
    Array PThreadedCode11095 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign11096, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11097, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11098, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11099, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11100, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_bufferSize, (Optr)&t_send1, (Optr)PSend11101, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11102, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11094 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11095, 6, PAssign11096, PAssign11098, PAssign11099, PAssign11100, PAssign11102, self);
    
    MethodClosure MC_SMB_resetBuffers = new_MethodClosure((Method)PMethod11094, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_resetBuffers, MC_SMB_resetBuffers);
}


static void init_SMB_debug() {
    Symbol SMB_debug = new_Symbol(L"debug");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Array PArray11104 = new_Array_with(1, (Optr)VAR_data_0_0);
    Symbol SMB_inBufferSize = new_Symbol(L"inBufferSize");
    // inBufferSize. 
    Send PSend11107 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11106 = new_Assign((Optr)VAR_data_0_0, (Optr)PSend11107);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11109 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11112 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_11114 = new_String(L"Buffer size: ");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11115 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend11116 = new_Send((Optr)PSend11115, SMB_asString, 0);
    Constant string_11114_Const = new_Constant((Optr)string_11114);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11117 = new_Send((Optr)string_11114_Const, SMB__append_, 1, (Optr)PSend11116);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11118 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11117);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11119 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11120 = new_String(L"InBuffer data size: ");
    // asString. 
    Send PSend11121 = new_Send((Optr)VAR_data_0_0, SMB_asString, 0);
    Constant string_11120_Const = new_Constant((Optr)string_11120);
    // ,. 
    Send PSend11122 = new_Send((Optr)string_11120_Const, SMB__append_, 1, (Optr)PSend11121);
    // nextPutAll:. 
    Send PSend11123 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11122);
    // cr. 
    Send PSend11124 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11125 = new_String(L"In data (20):");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11126 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_min_ = new_Symbol(L"min:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend11127 = new_Send((Optr)VAR_data_0_0, SMB_min_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend11128 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)PSend11127);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend11129 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_copyFrom_to_, 2, (Optr)PSend11126, (Optr)PSend11128);
    Constant string_11125_Const = new_Constant((Optr)string_11125);
    // ,. 
    Send PSend11130 = new_Send((Optr)string_11125_Const, SMB__append_, 1, (Optr)PSend11129);
    // nextPutAll:. 
    Send PSend11131 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11130);
    // cr. 
    Send PSend11132 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11133 = new_String(L"OutBuffer data size: ");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11134 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // asString. 
    Send PSend11135 = new_Send((Optr)PSend11134, SMB_asString, 0);
    Constant string_11133_Const = new_Constant((Optr)string_11133);
    // ,. 
    Send PSend11136 = new_Send((Optr)string_11133_Const, SMB__append_, 1, (Optr)PSend11135);
    // nextPutAll:. 
    Send PSend11137 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11136);
    // cr. 
    Send PSend11138 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    String string_11139 = new_String(L"Out data (20):");
    // -. 
    Send PSend11140 = new_Send((Optr)slot_IO_SocketStream_outNextToWrite, SMB__minus_, 1, (Optr)int_1_Const);
    // min:. 
    Send PSend11141 = new_Send((Optr)PSend11140, SMB_min_, 1, (Optr)int_20_Const);
    // copyFrom:to:. 
    Send PSend11142 = new_Send((Optr)slot_IO_SocketStream_outBuffer, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend11141);
    Constant string_11139_Const = new_Constant((Optr)string_11139);
    // ,. 
    Send PSend11143 = new_Send((Optr)string_11139_Const, SMB__append_, 1, (Optr)PSend11142);
    // nextPutAll:. 
    Send PSend11144 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend11143);
    // cr. 
    Send PSend11145 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11113 = instantiate_Array_with(ThreadedCode_Class, 0, 120, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11114, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send0, (Optr)PSend11115, (Optr)&t_send0, (Optr)PSend11116, (Optr)&t_send1, (Optr)PSend11117, (Optr)&t_send1, (Optr)PSend11118, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11120, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send0, (Optr)PSend11121, (Optr)&t_send1, (Optr)PSend11122, (Optr)&t_send1, (Optr)PSend11123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11125, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11126, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11127, (Optr)&t_send1, (Optr)PSend11128, (Optr)&t_send2, (Optr)PSend11129, (Optr)&t_send1, (Optr)PSend11130, (Optr)&t_send1, (Optr)PSend11131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11132, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11133, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11134, (Optr)&t_send0, (Optr)PSend11135, (Optr)&t_send1, (Optr)PSend11136, (Optr)&t_send1, (Optr)PSend11137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11138, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_11139, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outBuffer, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_outNextToWrite, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11140, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend11141, (Optr)&t_send2, (Optr)PSend11142, (Optr)&t_send1, (Optr)PSend11143, (Optr)&t_send1, (Optr)PSend11144, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11145, (Optr)&t_method_return);
    Block PBlock11111 = new_Block_with(PArray11112, empty_Array, PThreadedCode11113, 10, PSend11118, PSend11119, PSend11123, PSend11124, PSend11131, PSend11132, PSend11137, PSend11138, PSend11144, PSend11145);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11146 = new_Send((Optr)PBlock11111, SMB_value_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11111, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11146, (Optr)&t_method_return);
    Block PBlock11108 = new_Block_with(PArray11109, empty_Array, PThreadedCode11110, 1, PSend11146);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend11147 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock11108);
    Array PThreadedCode11105 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign11106, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11107, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock11108, (Optr)&t_send1, (Optr)PSend11147, (Optr)&t_method_return);
    Method PMethod11103 = new_Method_with(empty_Array, PArray11104, empty_Array, PThreadedCode11105, 2, PAssign11106, PSend11147);
    
    MethodClosure MC_SMB_debug = new_MethodClosure((Method)PMethod11103, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_debug, MC_SMB_debug);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_aCharacterOrByte_0_0 = new_Variable_named(L"aCharacterOrByte", 0);
    Array PArray11149 = new_Array_with(1, (Optr)VAR_aCharacterOrByte_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_lastRecentlyRead_0_3 = new_Variable_named(L"lastRecentlyRead", 0);
    Variable VAR_searchedSoFar_0_4 = new_Variable_named(L"searchedSoFar", 0);
    Array PArray11150 = new_Array_with(4, (Optr)VAR_index_0_1, (Optr)VAR_result_0_2, (Optr)VAR_lastRecentlyRead_0_3, (Optr)VAR_searchedSoFar_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11153 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign11155 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)int_0_Const);
    Assign PAssign11156 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)int_0_Const);
    Assign PAssign11157 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11160 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11161 = new_Send((Optr)PSend11160, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11164 = new_Send((Optr)VAR_lastRecentlyRead_0_3, SMB__equals_, 1, (Optr)int_0_Const);
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
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11181 = new_Send((Optr)slot_IO_SocketStream_lastRead, SMB__plus_, 1, (Optr)VAR_searchedSoFar_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend11180 = new_Send((Optr)PSend11181, SMB__plus_, 1, (Optr)int_1_Const);
    // indexOf:startingAt:. 
    Send PSend11179 = new_Send((Optr)slot_IO_SocketStream_inBuffer, SMB_indexOf_startingAt_, 2, (Optr)VAR_aCharacterOrByte_0_0, (Optr)PSend11180);
    Assign PAssign11178 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend11179);
    // inBufferSize. 
    Send PSend11183 = new_Send((Optr)self, SMB_inBufferSize, 0);
    Assign PAssign11182 = new_Assign((Optr)VAR_searchedSoFar_0_4, (Optr)PSend11183);
    // >. 
    Send PSend11184 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    // +. 
    Send PSend11187 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // >. 
    Send PSend11188 = new_Send((Optr)PSend11187, SMB__gt_, 1, (Optr)slot_IO_SocketStream_inNextToWrite);
    Array PThreadedCode11186 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11187, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inNextToWrite, (Optr)&t_send1, (Optr)PSend11188, (Optr)&t_block_return);
    Block PBlock11185 = new_Block_with(empty_Array, empty_Array, PThreadedCode11186, 1, PSend11188);
    // and:. 
    Send PSend11189 = new_Send((Optr)PSend11184, SMB_and_, 1, (Optr)PBlock11185);
    Assign PAssign11193 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Array PThreadedCode11192 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign11193, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11191 = new_Block_with(empty_Array, empty_Array, PThreadedCode11192, 1, PAssign11193);
    // ifTrue:. 
    Send PSend11190 = new_Send((Optr)PSend11189, SMB_ifTrue_, 1, (Optr)PBlock11191);
    Array PThreadedCode11177 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11178, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_push_variable, (Optr)VAR_aCharacterOrByte_0_0, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_push_variable, (Optr)VAR_searchedSoFar_0_4, (Optr)&t_send1, (Optr)PSend11181, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11180, (Optr)&t_send2, (Optr)PSend11179, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11182, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11183, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11184, (Optr)&t_push_closure, (Optr)PBlock11185, (Optr)&t_send1, (Optr)PSend11189, (Optr)&t_send_ifTrue_, (Optr)PSend11190, (Optr)PBlock11191, (Optr)&t_block_return);
    Block PBlock11176 = new_Block_with(empty_Array, empty_Array, PThreadedCode11177, 3, PAssign11178, PAssign11182, PSend11190);
    // ifTrue:. 
    Send PSend11175 = new_Send((Optr)PSend11174, SMB_ifTrue_, 1, (Optr)PBlock11176);
    // =. 
    Send PSend11194 = new_Send((Optr)VAR_index_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode11163 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_lastRecentlyRead_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11164, (Optr)&t_push_closure, (Optr)PBlock11165, (Optr)&t_send1, (Optr)PSend11169, (Optr)&t_push_closure, (Optr)PBlock11170, (Optr)&t_send1, (Optr)PSend11174, (Optr)&t_send_ifTrue_, (Optr)PSend11175, (Optr)PBlock11176, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11194, (Optr)&t_block_return);
    Block PBlock11162 = new_Block_with(empty_Array, empty_Array, PThreadedCode11163, 2, PSend11175, PSend11194);
    // and:. 
    Send PSend11195 = new_Send((Optr)PSend11161, SMB_and_, 1, (Optr)PBlock11162);
    Array PThreadedCode11159 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11160, (Optr)&t_send0, (Optr)PSend11161, (Optr)&t_push_closure, (Optr)PBlock11162, (Optr)&t_send1, (Optr)PSend11195, (Optr)&t_block_return);
    Block PBlock11158 = new_Block_with(empty_Array, empty_Array, PThreadedCode11159, 1, PSend11195);
    String string_11198 = new_String(L"Buffer: ");
    Constant string_11198_Const = new_Constant((Optr)string_11198);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11199 = new_Send((Optr)string_11198_Const, SMB__append_, 1, (Optr)slot_IO_SocketStream_inBuffer);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend11200 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend11199);
    // =. 
    Send PSend11201 = new_Send((Optr)slot_IO_SocketStream_recentlyRead, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11205 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11204 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11205, (Optr)&t_block_return);
    Block PBlock11203 = new_Block_with(empty_Array, empty_Array, PThreadedCode11204, 1, PSend11205);
    Symbol SMB_receiveAvailableData = new_Symbol(L"receiveAvailableData");
    // receiveAvailableData. 
    Send PSend11208 = new_Send((Optr)self, SMB_receiveAvailableData, 0);
    Array PThreadedCode11207 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11208, (Optr)&t_block_return);
    Block PBlock11206 = new_Block_with(empty_Array, empty_Array, PThreadedCode11207, 1, PSend11208);
    // ifTrue:ifFalse:. 
    Send PSend11202 = new_Send((Optr)PSend11201, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11203, (Optr)PBlock11206);
    Assign PAssign11209 = new_Assign((Optr)VAR_lastRecentlyRead_0_3, (Optr)slot_IO_SocketStream_recentlyRead);
    Array PThreadedCode11197 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_11198, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_inBuffer, (Optr)&t_send1, (Optr)PSend11199, (Optr)&t_send1, (Optr)PSend11200, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11201, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11202, (Optr)PBlock11203, (Optr)PBlock11206, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11209, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11196 = new_Block_with(empty_Array, empty_Array, PThreadedCode11197, 3, PSend11200, PSend11202, PAssign11209);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend11210 = new_Send((Optr)PBlock11158, SMB_whileTrue_, 1, (Optr)PBlock11196);
    // >. 
    Send PSend11211 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_nextInBuffer_ = new_Symbol(L"nextInBuffer:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend11218 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)slot_IO_SocketStream_lastRead);
    // -. 
    Send PSend11217 = new_Send((Optr)PSend11218, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInBuffer:. 
    Send PSend11216 = new_Send((Optr)self, SMB_nextInBuffer_, 1, (Optr)PSend11217);
    Assign PAssign11215 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend11216);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    // skip:. 
    Send PSend11219 = new_Send((Optr)self, SMB_skip_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11220 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode11214 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign11215, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_lastRead, (Optr)&t_send1, (Optr)PSend11218, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11217, (Optr)&t_send1, (Optr)PSend11216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend11219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend11220, (Optr)&t_block_return);
    Block PBlock11213 = new_Block_with(empty_Array, empty_Array, PThreadedCode11214, 3, PAssign11215, PSend11219, PSend11220);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11223 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    // escape:. 
    Send PSend11224 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11223);
    Array PThreadedCode11222 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11223, (Optr)&t_send1, (Optr)PSend11224, (Optr)&t_block_return);
    Block PBlock11221 = new_Block_with(empty_Array, empty_Array, PThreadedCode11222, 1, PSend11224);
    // ifTrue:ifFalse:. 
    Send PSend11212 = new_Send((Optr)PSend11211, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock11213, (Optr)PBlock11221);
    Array PThreadedCode11154 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11155, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11156, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11157, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11158, (Optr)&t_push_closure, (Optr)PBlock11196, (Optr)&t_send1, (Optr)PSend11210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11211, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend11212, (Optr)PBlock11213, (Optr)PBlock11221, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock11152 = new_Block_with(PArray11153, empty_Array, PThreadedCode11154, 6, PAssign11155, PAssign11156, PAssign11157, PSend11210, PSend11212, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11225 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11152);
    Array PThreadedCode11151 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11152, (Optr)&t_send1, (Optr)PSend11225, (Optr)&t_method_return);
    Method PMethod11148 = new_Method_with(PArray11149, PArray11150, empty_Array, PThreadedCode11151, 1, PSend11225);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod11148, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend11232 = new_Send((Optr)self, SMB_atEnd, 0);
    Array PThreadedCode11231 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11232, (Optr)&t_block_return);
    Block PBlock11230 = new_Block_with(empty_Array, empty_Array, PThreadedCode11231, 1, PSend11232);
    Symbol SMB_receiveData = new_Symbol(L"receiveData");
    // receiveData. 
    Send PSend11235 = new_Send((Optr)self, SMB_receiveData, 0);
    Array PThreadedCode11234 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11235, (Optr)&t_block_return);
    Block PBlock11233 = new_Block_with(empty_Array, empty_Array, PThreadedCode11234, 1, PSend11235);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend11236 = new_Send((Optr)PBlock11230, SMB_whileFalse_, 1, (Optr)PBlock11233);
    Array PThreadedCode11229 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11230, (Optr)&t_push_closure, (Optr)PBlock11233, (Optr)&t_send1, (Optr)PSend11236, (Optr)&t_block_return);
    Block PBlock11228 = new_Block_with(empty_Array, empty_Array, PThreadedCode11229, 1, PSend11236);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray11238 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Array PThreadedCode11239 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock11237 = new_Block_with(PArray11238, empty_Array, PThreadedCode11239, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11240 = new_Send((Optr)PBlock11228, SMB_on_do_, 2, (Optr)ConnectionClosed_classReference, (Optr)PBlock11237);
    Symbol SMB_nextAllInBuffer = new_Symbol(L"nextAllInBuffer");
    // nextAllInBuffer. 
    Send PSend11241 = new_Send((Optr)self, SMB_nextAllInBuffer, 0);
    Array PThreadedCode11227 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock11228, (Optr)&t_push_class_reference, (Optr)ConnectionClosed_classReference, (Optr)&t_push_closure, (Optr)PBlock11237, (Optr)&t_send2, (Optr)PSend11240, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11241, (Optr)&t_method_return);
    Method PMethod11226 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11227, 2, PSend11240, PSend11241);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod11226, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_recentlyRead() {
    Symbol SMB_recentlyRead = new_Symbol(L"recentlyRead");
    Array PThreadedCode11243 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_SocketStream_recentlyRead, (Optr)&t_method_return);
    Method PMethod11242 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11243, 1, slot_IO_SocketStream_recentlyRead);
    
    MethodClosure MC_SMB_recentlyRead = new_MethodClosure((Method)PMethod11242, IO_SocketStream_Class);
    store_method(IO_SocketStream_Class, SMB_recentlyRead, MC_SMB_recentlyRead);
}


static void init_class_SMB_openConnectionToHostNamed_port_() {
    Symbol SMB_openConnectionToHostNamed_port_ = new_Symbol(L"openConnectionToHostNamed:port:");
    Variable VAR_hostName_0_0 = new_Variable_named(L"hostName", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11245 = new_Array_with(2, (Optr)VAR_hostName_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_hostIP_0_2 = new_Variable_named(L"hostIP", 0);
    Array PArray11246 = new_Array_with(1, (Optr)VAR_hostIP_0_2);
    Symbol SMB_addressForName_timeout_ = new_Symbol(L"addressForName:timeout:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // addressForName:timeout:. 
    Send PSend11249 = new_Send((Optr)NetNameResolver_classReference, SMB_addressForName_timeout_, 2, (Optr)VAR_hostName_0_0, (Optr)int_20_Const);
    Assign PAssign11248 = new_Assign((Optr)VAR_hostIP_0_2, (Optr)PSend11249);
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    // openConnectionToHost:port:. 
    Send PSend11250 = new_Send((Optr)self, SMB_openConnectionToHost_port_, 2, (Optr)VAR_hostIP_0_2, (Optr)VAR_portNumber_0_1);
    Array PThreadedCode11247 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign11248, (Optr)&t_push_class_reference, (Optr)NetNameResolver_classReference, (Optr)&t_push_variable, (Optr)VAR_hostName_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send2, (Optr)PSend11249, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_2, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11250, (Optr)&t_method_return);
    Method PMethod11244 = new_Method_with(PArray11245, PArray11246, empty_Array, PThreadedCode11247, 2, PAssign11248, PSend11250);
    
    MethodClosure MC_SMB_openConnectionToHostNamed_port_ = new_MethodClosure((Method)PMethod11244, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHostNamed_port_, MC_SMB_openConnectionToHostNamed_port_);
}


static void init_class_SMB_openConnectionToHost_port_() {
    Symbol SMB_openConnectionToHost_port_ = new_Symbol(L"openConnectionToHost:port:");
    Variable VAR_hostIP_0_0 = new_Variable_named(L"hostIP", 0);
    Variable VAR_portNumber_0_1 = new_Variable_named(L"portNumber", 0);
    Array PArray11252 = new_Array_with(2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Variable VAR_socket_0_2 = new_Variable_named(L"socket", 0);
    Array PArray11253 = new_Array_with(1, (Optr)VAR_socket_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11256 = new_Send((Optr)PSocket_classReference, SMB_new, 0);
    Assign PAssign11255 = new_Assign((Optr)VAR_socket_0_2, (Optr)PSend11256);
    Symbol SMB_connectTo_port_ = new_Symbol(L"connectTo:port:");
    // connectTo:port:. 
    Send PSend11257 = new_Send((Optr)VAR_socket_0_2, SMB_connectTo_port_, 2, (Optr)VAR_hostIP_0_0, (Optr)VAR_portNumber_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11258 = new_Send((Optr)self, SMB_on_, 1, (Optr)VAR_socket_0_2);
    Array PThreadedCode11254 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign11255, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend11256, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_push_variable, (Optr)VAR_hostIP_0_0, (Optr)&t_push_variable, (Optr)VAR_portNumber_0_1, (Optr)&t_send2, (Optr)PSend11257, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_socket_0_2, (Optr)&t_send1, (Optr)PSend11258, (Optr)&t_method_return);
    Method PMethod11251 = new_Method_with(PArray11252, PArray11253, empty_Array, PThreadedCode11254, 3, PAssign11255, PSend11257, PSend11258);
    
    MethodClosure MC_SMB_openConnectionToHost_port_ = new_MethodClosure((Method)PMethod11251, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_openConnectionToHost_port_, MC_SMB_openConnectionToHost_port_);
}


static void init_class_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_100 = new_SmallInt(100);
    Array PThreadedCode11260 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_100, (Optr)&t_method_return);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Method PMethod11259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11260, 1, int_100_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod11259, HEADER(IO_SocketStream_Class));
    store_method(HEADER(IO_SocketStream_Class), SMB_test, MC_SMB_test);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_socket_0_0 = new_Variable_named(L"socket", 0);
    Array PArray11262 = new_Array_with(1, (Optr)VAR_socket_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11264 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_socket_ = new_Symbol(L"socket:");
    // socket:. 
    Send PSend11265 = new_Send((Optr)PSend11264, SMB_socket_, 1, (Optr)VAR_socket_0_0);
    Array PThreadedCode11263 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11264, (Optr)&t_push_variable, (Optr)VAR_socket_0_0, (Optr)&t_send1, (Optr)PSend11265, (Optr)&t_method_return);
    Method PMethod11261 = new_Method_with(PArray11262, empty_Array, empty_Array, PThreadedCode11263, 1, PSend11265);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod11261, HEADER(IO_SocketStream_Class));
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