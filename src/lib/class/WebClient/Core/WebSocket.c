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
    Send PSend22465 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22469 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22470 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22469);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22471 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22472 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22471);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22473 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22468 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22469, (Optr)&t_send1, (Optr)PSend22470, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22471, (Optr)&t_send1, (Optr)PSend22472, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22473, (Optr)&t_block_return);
    Block PBlock22467 = new_Block_with(empty_Array, empty_Array, PThreadedCode22468, 3, PSend22470, PSend22472, PSend22473);
    // ifTrue:. 
    Send PSend22466 = new_Send((Optr)PSend22465, SMB_ifTrue_, 1, (Optr)PBlock22467);
    Array PThreadedCode22464 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22465, (Optr)&t_send_ifTrue_, (Optr)PSend22466, (Optr)PBlock22467, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22463 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22464, 2, PSend22466, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22463, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22475 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22479 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22480 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22479);
    Array PThreadedCode22478 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22479, (Optr)&t_send1, (Optr)PSend22480, (Optr)&t_block_return);
    Block PBlock22477 = new_Block_with(empty_Array, empty_Array, PThreadedCode22478, 1, PSend22480);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22481 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22477);
    Array PThreadedCode22476 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22477, (Optr)&t_send1, (Optr)PSend22481, (Optr)&t_method_return);
    Method PMethod22474 = new_Method_with(PArray22475, empty_Array, empty_Array, PThreadedCode22476, 1, PSend22481);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22474, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22483 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22486 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22490 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22493 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22494 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22492 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22493, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22494, (Optr)&t_block_return);
    Block PBlock22491 = new_Block_with(empty_Array, empty_Array, PThreadedCode22492, 2, PAssign22493, PSend22494);
    // ifNil:. 
    Send PSend22489 = new_Send((Optr)PSend22490, SMB_ifNil_, 1, (Optr)PBlock22491);
    Assign PAssign22488 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22489);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22496 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22495 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22496);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22497 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22503 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22502 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22503);
    Assign PAssign22501 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22502);
    Array PThreadedCode22500 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22501, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22503, (Optr)&t_send1, (Optr)PSend22502, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22499 = new_Block_with(empty_Array, empty_Array, PThreadedCode22500, 1, PAssign22501);
    String string_22506 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22506_Const = new_Constant((Optr)string_22506);
    // error:. 
    Send PSend22507 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22506_Const);
    Array PThreadedCode22505 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22506, (Optr)&t_send1, (Optr)PSend22507, (Optr)&t_block_return);
    Block PBlock22504 = new_Block_with(empty_Array, empty_Array, PThreadedCode22505, 1, PSend22507);
    // ifTrue:ifFalse:. 
    Send PSend22498 = new_Send((Optr)PSend22497, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22499, (Optr)PBlock22504);
    Array PThreadedCode22487 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22488, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22490, (Optr)&t_push_closure, (Optr)PBlock22491, (Optr)&t_send1, (Optr)PSend22489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22495, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22496, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22497, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22498, (Optr)PBlock22499, (Optr)PBlock22504, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22485 = new_Block_with(PArray22486, empty_Array, PThreadedCode22487, 4, PAssign22488, PAssign22495, PSend22498, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22508 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22485);
    Array PThreadedCode22484 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22485, (Optr)&t_send1, (Optr)PSend22508, (Optr)&t_method_return);
    Method PMethod22482 = new_Method_with(empty_Array, PArray22483, empty_Array, PThreadedCode22484, 1, PSend22508);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22482, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22510 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22512 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22513 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22512);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22514 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22517 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22518 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22519 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22518);
    Array PThreadedCode22516 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22517, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22518, (Optr)&t_send1, (Optr)PSend22519, (Optr)&t_block_return);
    Block PBlock22515 = new_Block_with(empty_Array, empty_Array, PThreadedCode22516, 2, PSend22517, PSend22519);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22521 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22523 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22523_Const = new_Constant((Optr)string_22523);
    // error:. 
    Send PSend22524 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22523_Const);
    Array PThreadedCode22522 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22523, (Optr)&t_send1, (Optr)PSend22524, (Optr)&t_method_return);
    Block PBlock22520 = new_Block_with(empty_Array, PArray22521, PThreadedCode22522, 1, PSend22524);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22525 = new_Send((Optr)PSend22514, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22515, (Optr)PBlock22520);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22526 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22511 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22512, (Optr)&t_send1, (Optr)PSend22513, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22514, (Optr)&t_push_closure, (Optr)PBlock22515, (Optr)&t_push_closure, (Optr)PBlock22520, (Optr)&t_send2, (Optr)PSend22525, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22526, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22509 = new_Method_with(PArray22510, empty_Array, empty_Array, PThreadedCode22511, 4, PSend22513, PSend22525, PSend22526, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22509, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22529 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22528 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22529, (Optr)&t_method_return);
    Method PMethod22527 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22528, 1, PSend22529);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22527, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22533 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22541 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22540 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22541, (Optr)&t_block_return);
    Block PBlock22539 = new_Block_with(empty_Array, empty_Array, PThreadedCode22540, 1, PSend22541);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22544 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22545 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22549 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22550 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22548 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22549, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22550, (Optr)&t_block_return);
    Block PBlock22547 = new_Block_with(empty_Array, empty_Array, PThreadedCode22548, 2, PSend22549, PSend22550);
    // ifTrue:. 
    Send PSend22546 = new_Send((Optr)PSend22545, SMB_ifTrue_, 1, (Optr)PBlock22547);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22551 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22543 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22544, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22545, (Optr)&t_send_ifTrue_, (Optr)PSend22546, (Optr)PBlock22547, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22551, (Optr)&t_block_return);
    Block PBlock22542 = new_Block_with(empty_Array, empty_Array, PThreadedCode22543, 3, PSend22544, PSend22546, PSend22551);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22552 = new_Send((Optr)PBlock22539, SMB_whileTrue_, 1, (Optr)PBlock22542);
    Array PThreadedCode22538 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22539, (Optr)&t_push_closure, (Optr)PBlock22542, (Optr)&t_send1, (Optr)PSend22552, (Optr)&t_block_return);
    Block PBlock22537 = new_Block_with(empty_Array, empty_Array, PThreadedCode22538, 1, PSend22552);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22554 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22556 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22555 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22556, (Optr)&t_method_return);
    Block PBlock22553 = new_Block_with(PArray22554, empty_Array, PThreadedCode22555, 1, PSend22556);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22557 = new_Send((Optr)PBlock22537, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22553);
    Array PThreadedCode22536 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22537, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22553, (Optr)&t_send2, (Optr)PSend22557, (Optr)&t_block_return);
    Block PBlock22535 = new_Block_with(empty_Array, empty_Array, PThreadedCode22536, 1, PSend22557);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22562 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22563 = new_Send((Optr)PSend22562, SMB_destroy, 0);
    Array PThreadedCode22561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22562, (Optr)&t_send0, (Optr)PSend22563, (Optr)&t_block_return);
    Block PBlock22560 = new_Block_with(empty_Array, empty_Array, PThreadedCode22561, 1, PSend22563);
    Array PArray22565 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22567 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22566 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22567, (Optr)&t_method_return);
    Block PBlock22564 = new_Block_with(PArray22565, empty_Array, PThreadedCode22566, 1, PSend22567);
    // on:do:. 
    Send PSend22568 = new_Send((Optr)PBlock22560, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22564);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22569 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22559 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22560, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22564, (Optr)&t_send2, (Optr)PSend22568, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22569, (Optr)&t_block_return);
    Block PBlock22558 = new_Block_with(empty_Array, empty_Array, PThreadedCode22559, 2, PSend22568, PSend22569);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22570 = new_Send((Optr)PBlock22535, SMB_ensure_, 1, (Optr)PBlock22558);
    Array PThreadedCode22534 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22535, (Optr)&t_push_closure, (Optr)PBlock22558, (Optr)&t_send1, (Optr)PSend22570, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22532 = new_Block_with(PArray22533, empty_Array, PThreadedCode22534, 2, PSend22570, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22571 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22532);
    Array PThreadedCode22531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22532, (Optr)&t_send1, (Optr)PSend22571, (Optr)&t_method_return);
    Method PMethod22530 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22531, 1, PSend22571);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22530, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22573 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22575 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22574 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22575, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22572 = new_Method_with(PArray22573, empty_Array, empty_Array, PThreadedCode22574, 2, PAssign22575, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22572, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22577 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22579 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22578 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22579, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22576 = new_Method_with(PArray22577, empty_Array, empty_Array, PThreadedCode22578, 2, PAssign22579, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22576, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22586 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22585 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22586, (Optr)&t_block_return);
    Block PBlock22584 = new_Block_with(empty_Array, empty_Array, PThreadedCode22585, 1, PSend22586);
    // fork. 
    Send PSend22583 = new_Send((Optr)PBlock22584, SMB_fork, 0);
    Assign PAssign22582 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22583);
    Array PThreadedCode22581 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22582, (Optr)&t_push_closure, (Optr)PBlock22584, (Optr)&t_send0, (Optr)PSend22583, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22581, 2, PAssign22582, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22580, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22591 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22592 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22591);
    Array PThreadedCode22590 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22591, (Optr)&t_send1, (Optr)PSend22592, (Optr)&t_block_return);
    Block PBlock22589 = new_Block_with(empty_Array, empty_Array, PThreadedCode22590, 1, PSend22592);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22593 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22589);
    Array PThreadedCode22588 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22589, (Optr)&t_send1, (Optr)PSend22593, (Optr)&t_method_return);
    Method PMethod22587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22588, 1, PSend22593);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22587, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22595 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22597 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22596 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22597, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22594 = new_Method_with(PArray22595, empty_Array, empty_Array, PThreadedCode22596, 2, PAssign22597, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22594, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22599 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22601 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22602 = new_Send((Optr)PSend22601, SMB_name, 0);
    // printOn:. 
    Send PSend22603 = new_Send((Optr)PSend22602, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22605 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22607 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // <<. 
    Send PSend22608 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22609 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22606 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22607, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22608, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22609, (Optr)&t_method_return);
    Block PBlock22604 = new_Block_with(PArray22605, empty_Array, PThreadedCode22606, 3, PSend22607, PSend22608, PSend22609);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22610 = new_Send((Optr)PBlock22604, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22600 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22601, (Optr)&t_send0, (Optr)PSend22602, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22603, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22604, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22610, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22598 = new_Method_with(PArray22599, empty_Array, empty_Array, PThreadedCode22600, 3, PSend22603, PSend22610, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22598, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22612 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22616 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22617 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22616);
    Array PThreadedCode22615 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22616, (Optr)&t_send1, (Optr)PSend22617, (Optr)&t_block_return);
    Block PBlock22614 = new_Block_with(empty_Array, empty_Array, PThreadedCode22615, 1, PSend22617);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22618 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22614);
    Array PThreadedCode22613 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22614, (Optr)&t_send1, (Optr)PSend22618, (Optr)&t_method_return);
    Method PMethod22611 = new_Method_with(PArray22612, empty_Array, empty_Array, PThreadedCode22613, 1, PSend22618);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22611, WebClient_Core_WebSocket_Class);
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
    Array PArray22620 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22622 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22628 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22627 = new_Send((Optr)PSend22628, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22626 = new_Send((Optr)PSend22627, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22629 = new_String(L":");
    Constant string_22629_Const = new_Constant((Optr)string_22629);
    // ,. 
    Send PSend22625 = new_Send((Optr)PSend22626, SMB__append_, 1, (Optr)string_22629_Const);
    // socket. 
    Send PSend22631 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22630 = new_Send((Optr)PSend22631, SMB_remotePort, 0);
    // ,. 
    Send PSend22624 = new_Send((Optr)PSend22625, SMB__append_, 1, (Optr)PSend22630);
    Assign PAssign22623 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22624);
    Array PThreadedCode22621 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22622, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22623, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22628, (Optr)&t_send0, (Optr)PSend22627, (Optr)&t_send0, (Optr)PSend22626, (Optr)&t_push1, (Optr)string_22629, (Optr)&t_send1, (Optr)PSend22625, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22631, (Optr)&t_send0, (Optr)PSend22630, (Optr)&t_send1, (Optr)PSend22624, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22619 = new_Method_with(PArray22620, empty_Array, empty_Array, PThreadedCode22621, 3, PAssign22622, PAssign22623, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22619, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22633 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22635 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22634 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22635, (Optr)&t_method_return);
    Method PMethod22632 = new_Method_with(PArray22633, empty_Array, empty_Array, PThreadedCode22634, 1, PSend22635);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22632, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22637 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22639 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22638 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22639, (Optr)&t_method_return);
    Method PMethod22636 = new_Method_with(PArray22637, empty_Array, empty_Array, PThreadedCode22638, 1, PSend22639);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22636, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22641 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22643 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22644 = new_Send((Optr)PSend22643, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22642 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22643, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22644, (Optr)&t_method_return);
    Method PMethod22640 = new_Method_with(PArray22641, empty_Array, empty_Array, PThreadedCode22642, 1, PSend22644);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22640, HEADER(WebClient_Core_WebSocket_Class));
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