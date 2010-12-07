#include <lib/class/WebClient/Core/WebSocket.h>


Optr layout_WebClient_Core_WebSocket_Class_class;
Optr slot_WebClient_Core_WebSocket_name;
Optr slot_WebClient_Core_WebSocket_process;
Optr slot_WebClient_Core_WebSocket_stream;
Optr slot_WebClient_Core_WebSocket_frameType;
Optr slot_WebClient_Core_WebSocket_frameData;
Optr slot_WebClient_Core_WebSocket_messageBlock;
Optr slot_WebClient_Core_WebSocket_errorBlock;
Optr slot_WebClient_Core_WebSocket_closeBlock;
Optr layout_WebClient_Core_WebSocket;


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22460 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22464 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22465 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22464);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22466 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22467 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22466);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22468 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22463 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22464, (Optr)&t_send1, (Optr)PSend22465, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22466, (Optr)&t_send1, (Optr)PSend22467, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22468, (Optr)&t_block_return);
    Block PBlock22462 = new_Block_with(empty_Array, empty_Array, PThreadedCode22463, 3, PSend22465, PSend22467, PSend22468);
    // ifTrue:. 
    Send PSend22461 = new_Send((Optr)PSend22460, SMB_ifTrue_, 1, (Optr)PBlock22462);
    Array PThreadedCode22459 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22460, (Optr)&t_send_ifTrue_, (Optr)PSend22461, (Optr)PBlock22462, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22458 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22459, 2, PSend22461, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22458, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22470 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22474 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22475 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22474);
    Array PThreadedCode22473 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22474, (Optr)&t_send1, (Optr)PSend22475, (Optr)&t_block_return);
    Block PBlock22472 = new_Block_with(empty_Array, empty_Array, PThreadedCode22473, 1, PSend22475);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22476 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22472);
    Array PThreadedCode22471 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22472, (Optr)&t_send1, (Optr)PSend22476, (Optr)&t_method_return);
    Method PMethod22469 = new_Method_with(PArray22470, empty_Array, empty_Array, PThreadedCode22471, 1, PSend22476);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22469, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22478 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22481 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22485 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22488 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22489 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22487 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22488, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22489, (Optr)&t_block_return);
    Block PBlock22486 = new_Block_with(empty_Array, empty_Array, PThreadedCode22487, 2, PAssign22488, PSend22489);
    // ifNil:. 
    Send PSend22484 = new_Send((Optr)PSend22485, SMB_ifNil_, 1, (Optr)PBlock22486);
    Assign PAssign22483 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22484);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22491 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22490 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22491);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22492 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22498 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22497 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22498);
    Assign PAssign22496 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22497);
    Array PThreadedCode22495 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22496, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22498, (Optr)&t_send1, (Optr)PSend22497, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22494 = new_Block_with(empty_Array, empty_Array, PThreadedCode22495, 1, PAssign22496);
    String string_22501 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22501_Const = new_Constant((Optr)string_22501);
    // error:. 
    Send PSend22502 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22501_Const);
    Array PThreadedCode22500 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22501, (Optr)&t_send1, (Optr)PSend22502, (Optr)&t_block_return);
    Block PBlock22499 = new_Block_with(empty_Array, empty_Array, PThreadedCode22500, 1, PSend22502);
    // ifTrue:ifFalse:. 
    Send PSend22493 = new_Send((Optr)PSend22492, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22494, (Optr)PBlock22499);
    Array PThreadedCode22482 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22483, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22485, (Optr)&t_push_closure, (Optr)PBlock22486, (Optr)&t_send1, (Optr)PSend22484, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22490, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22492, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22493, (Optr)PBlock22494, (Optr)PBlock22499, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22480 = new_Block_with(PArray22481, empty_Array, PThreadedCode22482, 4, PAssign22483, PAssign22490, PSend22493, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22503 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22480);
    Array PThreadedCode22479 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22480, (Optr)&t_send1, (Optr)PSend22503, (Optr)&t_method_return);
    Method PMethod22477 = new_Method_with(empty_Array, PArray22478, empty_Array, PThreadedCode22479, 1, PSend22503);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22477, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22505 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22507 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22508 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22507);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22509 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22512 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22513 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22514 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22513);
    Array PThreadedCode22511 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22512, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22513, (Optr)&t_send1, (Optr)PSend22514, (Optr)&t_block_return);
    Block PBlock22510 = new_Block_with(empty_Array, empty_Array, PThreadedCode22511, 2, PSend22512, PSend22514);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22516 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22518 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22518_Const = new_Constant((Optr)string_22518);
    // error:. 
    Send PSend22519 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22518_Const);
    Array PThreadedCode22517 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22518, (Optr)&t_send1, (Optr)PSend22519, (Optr)&t_method_return);
    Block PBlock22515 = new_Block_with(empty_Array, PArray22516, PThreadedCode22517, 1, PSend22519);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22520 = new_Send((Optr)PSend22509, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22510, (Optr)PBlock22515);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22521 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22506 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22507, (Optr)&t_send1, (Optr)PSend22508, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22509, (Optr)&t_push_closure, (Optr)PBlock22510, (Optr)&t_push_closure, (Optr)PBlock22515, (Optr)&t_send2, (Optr)PSend22520, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22521, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22504 = new_Method_with(PArray22505, empty_Array, empty_Array, PThreadedCode22506, 4, PSend22508, PSend22520, PSend22521, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22504, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22524 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22523 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22524, (Optr)&t_method_return);
    Method PMethod22522 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22523, 1, PSend22524);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22522, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22528 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22536 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22535 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22536, (Optr)&t_block_return);
    Block PBlock22534 = new_Block_with(empty_Array, empty_Array, PThreadedCode22535, 1, PSend22536);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22539 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22540 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22544 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22545 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22543 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22545, (Optr)&t_block_return);
    Block PBlock22542 = new_Block_with(empty_Array, empty_Array, PThreadedCode22543, 2, PSend22544, PSend22545);
    // ifTrue:. 
    Send PSend22541 = new_Send((Optr)PSend22540, SMB_ifTrue_, 1, (Optr)PBlock22542);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22546 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22538 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22539, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22540, (Optr)&t_send_ifTrue_, (Optr)PSend22541, (Optr)PBlock22542, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22546, (Optr)&t_block_return);
    Block PBlock22537 = new_Block_with(empty_Array, empty_Array, PThreadedCode22538, 3, PSend22539, PSend22541, PSend22546);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22547 = new_Send((Optr)PBlock22534, SMB_whileTrue_, 1, (Optr)PBlock22537);
    Array PThreadedCode22533 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22534, (Optr)&t_push_closure, (Optr)PBlock22537, (Optr)&t_send1, (Optr)PSend22547, (Optr)&t_block_return);
    Block PBlock22532 = new_Block_with(empty_Array, empty_Array, PThreadedCode22533, 1, PSend22547);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22549 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22551 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22550 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22551, (Optr)&t_method_return);
    Block PBlock22548 = new_Block_with(PArray22549, empty_Array, PThreadedCode22550, 1, PSend22551);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22552 = new_Send((Optr)PBlock22532, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22548);
    Array PThreadedCode22531 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22532, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22548, (Optr)&t_send2, (Optr)PSend22552, (Optr)&t_block_return);
    Block PBlock22530 = new_Block_with(empty_Array, empty_Array, PThreadedCode22531, 1, PSend22552);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22557 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22558 = new_Send((Optr)PSend22557, SMB_destroy, 0);
    Array PThreadedCode22556 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22557, (Optr)&t_send0, (Optr)PSend22558, (Optr)&t_block_return);
    Block PBlock22555 = new_Block_with(empty_Array, empty_Array, PThreadedCode22556, 1, PSend22558);
    Array PArray22560 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22562 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22561 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22562, (Optr)&t_method_return);
    Block PBlock22559 = new_Block_with(PArray22560, empty_Array, PThreadedCode22561, 1, PSend22562);
    // on:do:. 
    Send PSend22563 = new_Send((Optr)PBlock22555, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22559);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22564 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22554 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22555, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22559, (Optr)&t_send2, (Optr)PSend22563, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22564, (Optr)&t_block_return);
    Block PBlock22553 = new_Block_with(empty_Array, empty_Array, PThreadedCode22554, 2, PSend22563, PSend22564);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22565 = new_Send((Optr)PBlock22530, SMB_ensure_, 1, (Optr)PBlock22553);
    Array PThreadedCode22529 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22530, (Optr)&t_push_closure, (Optr)PBlock22553, (Optr)&t_send1, (Optr)PSend22565, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22527 = new_Block_with(PArray22528, empty_Array, PThreadedCode22529, 2, PSend22565, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22566 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22527);
    Array PThreadedCode22526 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22527, (Optr)&t_send1, (Optr)PSend22566, (Optr)&t_method_return);
    Method PMethod22525 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22526, 1, PSend22566);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22525, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22568 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22570 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22570, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22567 = new_Method_with(PArray22568, empty_Array, empty_Array, PThreadedCode22569, 2, PAssign22570, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22567, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22572 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22574 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22574, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22571 = new_Method_with(PArray22572, empty_Array, empty_Array, PThreadedCode22573, 2, PAssign22574, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22571, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22581 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22580 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22581, (Optr)&t_block_return);
    Block PBlock22579 = new_Block_with(empty_Array, empty_Array, PThreadedCode22580, 1, PSend22581);
    // fork. 
    Send PSend22578 = new_Send((Optr)PBlock22579, SMB_fork, 0);
    Assign PAssign22577 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22578);
    Array PThreadedCode22576 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22577, (Optr)&t_push_closure, (Optr)PBlock22579, (Optr)&t_send0, (Optr)PSend22578, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22575 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22576, 2, PAssign22577, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22575, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22586 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22587 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22586);
    Array PThreadedCode22585 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22586, (Optr)&t_send1, (Optr)PSend22587, (Optr)&t_block_return);
    Block PBlock22584 = new_Block_with(empty_Array, empty_Array, PThreadedCode22585, 1, PSend22587);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22588 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22584);
    Array PThreadedCode22583 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22584, (Optr)&t_send1, (Optr)PSend22588, (Optr)&t_method_return);
    Method PMethod22582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22583, 1, PSend22588);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22582, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22590 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22592 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22591 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22592, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22589 = new_Method_with(PArray22590, empty_Array, empty_Array, PThreadedCode22591, 2, PAssign22592, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22589, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22594 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22596 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22597 = new_Send((Optr)PSend22596, SMB_name, 0);
    // printOn:. 
    Send PSend22598 = new_Send((Optr)PSend22597, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22600 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22602 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // <<. 
    Send PSend22603 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22604 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22601 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22604, (Optr)&t_method_return);
    Block PBlock22599 = new_Block_with(PArray22600, empty_Array, PThreadedCode22601, 3, PSend22602, PSend22603, PSend22604);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22605 = new_Send((Optr)PBlock22599, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22595 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22596, (Optr)&t_send0, (Optr)PSend22597, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22598, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22599, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22605, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22593 = new_Method_with(PArray22594, empty_Array, empty_Array, PThreadedCode22595, 3, PSend22598, PSend22605, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22593, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22607 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22611 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22612 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22611);
    Array PThreadedCode22610 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22611, (Optr)&t_send1, (Optr)PSend22612, (Optr)&t_block_return);
    Block PBlock22609 = new_Block_with(empty_Array, empty_Array, PThreadedCode22610, 1, PSend22612);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22613 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22609);
    Array PThreadedCode22608 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22609, (Optr)&t_send1, (Optr)PSend22613, (Optr)&t_method_return);
    Method PMethod22606 = new_Method_with(PArray22607, empty_Array, empty_Array, PThreadedCode22608, 1, PSend22613);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22606, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleMessage_type_, MC_SMB_handleMessage_type_);
}


static void init_SMB_on_() {
    /*
    on: aStream
// 	"Create a new WebSocket instance using the given SocketStream"
// 
// 	^self new on: aStream
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22615 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22617 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22623 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22622 = new_Send((Optr)PSend22623, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22621 = new_Send((Optr)PSend22622, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22624 = new_String(L":");
    Constant string_22624_Const = new_Constant((Optr)string_22624);
    // ,. 
    Send PSend22620 = new_Send((Optr)PSend22621, SMB__append_, 1, (Optr)string_22624_Const);
    // socket. 
    Send PSend22626 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22625 = new_Send((Optr)PSend22626, SMB_remotePort, 0);
    // ,. 
    Send PSend22619 = new_Send((Optr)PSend22620, SMB__append_, 1, (Optr)PSend22625);
    Assign PAssign22618 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22619);
    Array PThreadedCode22616 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22617, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22618, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22623, (Optr)&t_send0, (Optr)PSend22622, (Optr)&t_send0, (Optr)PSend22621, (Optr)&t_push1, (Optr)string_22624, (Optr)&t_send1, (Optr)PSend22620, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22626, (Optr)&t_send0, (Optr)PSend22625, (Optr)&t_send1, (Optr)PSend22619, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22614 = new_Method_with(PArray22615, empty_Array, empty_Array, PThreadedCode22616, 3, PAssign22617, PAssign22618, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22614, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22628 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22630 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22629 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22630, (Optr)&t_method_return);
    Method PMethod22627 = new_Method_with(PArray22628, empty_Array, empty_Array, PThreadedCode22629, 1, PSend22630);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22627, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22632 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22634 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22633 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22634, (Optr)&t_method_return);
    Method PMethod22631 = new_Method_with(PArray22632, empty_Array, empty_Array, PThreadedCode22633, 1, PSend22634);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22631, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22636 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22638 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22639 = new_Send((Optr)PSend22638, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22637 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22638, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22639, (Optr)&t_method_return);
    Method PMethod22635 = new_Method_with(PArray22636, empty_Array, empty_Array, PThreadedCode22637, 1, PSend22639);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22635, HEADER(WebClient_Core_WebSocket_Class));
    store_method(HEADER(WebClient_Core_WebSocket_Class), SMB_on_, MC_SMB_on_);
}

void init_WebClient_Core_PWebSocket_layout() {
    layout_WebClient_Core_WebSocket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_WebSocket = new_Symbol(L"WebSocket");
    slot_WebClient_Core_WebSocket_name = (Optr)new_Slot(0, L"name");
    slot_WebClient_Core_WebSocket_process = (Optr)new_Slot(1, L"process");
    slot_WebClient_Core_WebSocket_stream = (Optr)new_Slot(2, L"stream");
    slot_WebClient_Core_WebSocket_frameType = (Optr)new_Slot(3, L"frameType");
    slot_WebClient_Core_WebSocket_frameData = (Optr)new_Slot(4, L"frameData");
    slot_WebClient_Core_WebSocket_messageBlock = (Optr)new_Slot(5, L"messageBlock");
    slot_WebClient_Core_WebSocket_errorBlock = (Optr)new_Slot(6, L"errorBlock");
    slot_WebClient_Core_WebSocket_closeBlock = (Optr)new_Slot(7, L"closeBlock");
    layout_WebClient_Core_WebSocket = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_WebClient_Core_WebSocket)->values[0] = slot_WebClient_Core_WebSocket_name; // name 
    ((Array)layout_WebClient_Core_WebSocket)->values[1] = slot_WebClient_Core_WebSocket_process; // process 
    ((Array)layout_WebClient_Core_WebSocket)->values[2] = slot_WebClient_Core_WebSocket_stream; // stream 
    ((Array)layout_WebClient_Core_WebSocket)->values[3] = slot_WebClient_Core_WebSocket_frameType; // frameType 
    ((Array)layout_WebClient_Core_WebSocket)->values[4] = slot_WebClient_Core_WebSocket_frameData; // frameData 
    ((Array)layout_WebClient_Core_WebSocket)->values[5] = slot_WebClient_Core_WebSocket_messageBlock; // messageBlock 
    ((Array)layout_WebClient_Core_WebSocket)->values[6] = slot_WebClient_Core_WebSocket_errorBlock; // errorBlock 
    ((Array)layout_WebClient_Core_WebSocket)->values[7] = slot_WebClient_Core_WebSocket_closeBlock; // closeBlock 
    WebClient_Core_WebSocket_Class = (Class)new_Class(Object_Class, layout_WebClient_Core_WebSocket_Class_class);
    WebClient_Core_WebSocket_Class->layout = layout_WebClient_Core_WebSocket;
    WebClient_Core_WebSocket_Class->name = SMB_WebSocket;
    
}

void init_WebClient_Core_PWebSocket_methods() {
    init_SMB_close();
    init_SMB_handleError_();
    init_SMB_readMessage();
    init_SMB_send_type_();
    init_SMB_timeout();
    init_SMB_run();
    init_SMB_onMessage_();
    init_SMB_onError_();
    init_SMB_fork();
    init_SMB_handleClose();
    init_SMB_onClose_();
    init_SMB_printOn_();
    init_SMB_handleMessage_type_();
    init_SMB_on_();
    init_SMB_timeout_();
    init_SMB_send_();
    init_class_SMB_on_();
    
}