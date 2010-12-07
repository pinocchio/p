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
    Send PSend22422 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22426 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22427 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22426);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22428 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22429 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22428);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22430 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22425 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22426, (Optr)&t_send1, (Optr)PSend22427, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22428, (Optr)&t_send1, (Optr)PSend22429, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22430, (Optr)&t_block_return);
    Block PBlock22424 = new_Block_with(empty_Array, empty_Array, PThreadedCode22425, 3, PSend22427, PSend22429, PSend22430);
    // ifTrue:. 
    Send PSend22423 = new_Send((Optr)PSend22422, SMB_ifTrue_, 1, (Optr)PBlock22424);
    Array PThreadedCode22421 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22422, (Optr)&t_send_ifTrue_, (Optr)PSend22423, (Optr)PBlock22424, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22421, 2, PSend22423, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22420, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22432 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22436 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22437 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22436);
    Array PThreadedCode22435 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22436, (Optr)&t_send1, (Optr)PSend22437, (Optr)&t_block_return);
    Block PBlock22434 = new_Block_with(empty_Array, empty_Array, PThreadedCode22435, 1, PSend22437);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22438 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22434);
    Array PThreadedCode22433 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22434, (Optr)&t_send1, (Optr)PSend22438, (Optr)&t_method_return);
    Method PMethod22431 = new_Method_with(PArray22432, empty_Array, empty_Array, PThreadedCode22433, 1, PSend22438);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22431, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22440 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22443 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22447 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22450 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22451 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22449 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22450, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22451, (Optr)&t_block_return);
    Block PBlock22448 = new_Block_with(empty_Array, empty_Array, PThreadedCode22449, 2, PAssign22450, PSend22451);
    // ifNil:. 
    Send PSend22446 = new_Send((Optr)PSend22447, SMB_ifNil_, 1, (Optr)PBlock22448);
    Assign PAssign22445 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22446);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22453 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22452 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22453);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22454 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22460 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22459 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22460);
    Assign PAssign22458 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22459);
    Array PThreadedCode22457 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22458, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22460, (Optr)&t_send1, (Optr)PSend22459, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22456 = new_Block_with(empty_Array, empty_Array, PThreadedCode22457, 1, PAssign22458);
    String string_22463 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22463_Const = new_Constant((Optr)string_22463);
    // error:. 
    Send PSend22464 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22463_Const);
    Array PThreadedCode22462 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22463, (Optr)&t_send1, (Optr)PSend22464, (Optr)&t_block_return);
    Block PBlock22461 = new_Block_with(empty_Array, empty_Array, PThreadedCode22462, 1, PSend22464);
    // ifTrue:ifFalse:. 
    Send PSend22455 = new_Send((Optr)PSend22454, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22456, (Optr)PBlock22461);
    Array PThreadedCode22444 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22445, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22447, (Optr)&t_push_closure, (Optr)PBlock22448, (Optr)&t_send1, (Optr)PSend22446, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22452, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22454, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22455, (Optr)PBlock22456, (Optr)PBlock22461, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22442 = new_Block_with(PArray22443, empty_Array, PThreadedCode22444, 4, PAssign22445, PAssign22452, PSend22455, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22465 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22442);
    Array PThreadedCode22441 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22442, (Optr)&t_send1, (Optr)PSend22465, (Optr)&t_method_return);
    Method PMethod22439 = new_Method_with(empty_Array, PArray22440, empty_Array, PThreadedCode22441, 1, PSend22465);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22439, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22467 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22469 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22470 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22469);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22471 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22474 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22475 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22476 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22475);
    Array PThreadedCode22473 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22474, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22475, (Optr)&t_send1, (Optr)PSend22476, (Optr)&t_block_return);
    Block PBlock22472 = new_Block_with(empty_Array, empty_Array, PThreadedCode22473, 2, PSend22474, PSend22476);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22478 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22480 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22480_Const = new_Constant((Optr)string_22480);
    // error:. 
    Send PSend22481 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22480_Const);
    Array PThreadedCode22479 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22480, (Optr)&t_send1, (Optr)PSend22481, (Optr)&t_method_return);
    Block PBlock22477 = new_Block_with(empty_Array, PArray22478, PThreadedCode22479, 1, PSend22481);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22482 = new_Send((Optr)PSend22471, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22472, (Optr)PBlock22477);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22483 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22468 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22469, (Optr)&t_send1, (Optr)PSend22470, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22471, (Optr)&t_push_closure, (Optr)PBlock22472, (Optr)&t_push_closure, (Optr)PBlock22477, (Optr)&t_send2, (Optr)PSend22482, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22483, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22466 = new_Method_with(PArray22467, empty_Array, empty_Array, PThreadedCode22468, 4, PSend22470, PSend22482, PSend22483, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22466, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22486 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22485 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22486, (Optr)&t_method_return);
    Method PMethod22484 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22485, 1, PSend22486);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22484, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22490 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22498 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22497 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22498, (Optr)&t_block_return);
    Block PBlock22496 = new_Block_with(empty_Array, empty_Array, PThreadedCode22497, 1, PSend22498);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22501 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22502 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22506 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22507 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22505 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22506, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22507, (Optr)&t_block_return);
    Block PBlock22504 = new_Block_with(empty_Array, empty_Array, PThreadedCode22505, 2, PSend22506, PSend22507);
    // ifTrue:. 
    Send PSend22503 = new_Send((Optr)PSend22502, SMB_ifTrue_, 1, (Optr)PBlock22504);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22508 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22500 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22501, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22502, (Optr)&t_send_ifTrue_, (Optr)PSend22503, (Optr)PBlock22504, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22508, (Optr)&t_block_return);
    Block PBlock22499 = new_Block_with(empty_Array, empty_Array, PThreadedCode22500, 3, PSend22501, PSend22503, PSend22508);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22509 = new_Send((Optr)PBlock22496, SMB_whileTrue_, 1, (Optr)PBlock22499);
    Array PThreadedCode22495 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22496, (Optr)&t_push_closure, (Optr)PBlock22499, (Optr)&t_send1, (Optr)PSend22509, (Optr)&t_block_return);
    Block PBlock22494 = new_Block_with(empty_Array, empty_Array, PThreadedCode22495, 1, PSend22509);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22511 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22513 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22512 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22513, (Optr)&t_method_return);
    Block PBlock22510 = new_Block_with(PArray22511, empty_Array, PThreadedCode22512, 1, PSend22513);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22514 = new_Send((Optr)PBlock22494, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22510);
    Array PThreadedCode22493 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22494, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22510, (Optr)&t_send2, (Optr)PSend22514, (Optr)&t_block_return);
    Block PBlock22492 = new_Block_with(empty_Array, empty_Array, PThreadedCode22493, 1, PSend22514);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22519 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22520 = new_Send((Optr)PSend22519, SMB_destroy, 0);
    Array PThreadedCode22518 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22519, (Optr)&t_send0, (Optr)PSend22520, (Optr)&t_block_return);
    Block PBlock22517 = new_Block_with(empty_Array, empty_Array, PThreadedCode22518, 1, PSend22520);
    Array PArray22522 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22524 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22523 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22524, (Optr)&t_method_return);
    Block PBlock22521 = new_Block_with(PArray22522, empty_Array, PThreadedCode22523, 1, PSend22524);
    // on:do:. 
    Send PSend22525 = new_Send((Optr)PBlock22517, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22521);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22526 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22516 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22517, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22521, (Optr)&t_send2, (Optr)PSend22525, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22526, (Optr)&t_block_return);
    Block PBlock22515 = new_Block_with(empty_Array, empty_Array, PThreadedCode22516, 2, PSend22525, PSend22526);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22527 = new_Send((Optr)PBlock22492, SMB_ensure_, 1, (Optr)PBlock22515);
    Array PThreadedCode22491 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22492, (Optr)&t_push_closure, (Optr)PBlock22515, (Optr)&t_send1, (Optr)PSend22527, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22489 = new_Block_with(PArray22490, empty_Array, PThreadedCode22491, 2, PSend22527, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22528 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22489);
    Array PThreadedCode22488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22489, (Optr)&t_send1, (Optr)PSend22528, (Optr)&t_method_return);
    Method PMethod22487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22488, 1, PSend22528);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22487, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22530 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22532 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22532, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22529 = new_Method_with(PArray22530, empty_Array, empty_Array, PThreadedCode22531, 2, PAssign22532, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22529, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22534 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22536 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22535 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22536, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22533 = new_Method_with(PArray22534, empty_Array, empty_Array, PThreadedCode22535, 2, PAssign22536, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22533, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22543 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22542 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22543, (Optr)&t_block_return);
    Block PBlock22541 = new_Block_with(empty_Array, empty_Array, PThreadedCode22542, 1, PSend22543);
    // fork. 
    Send PSend22540 = new_Send((Optr)PBlock22541, SMB_fork, 0);
    Assign PAssign22539 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22540);
    Array PThreadedCode22538 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22539, (Optr)&t_push_closure, (Optr)PBlock22541, (Optr)&t_send0, (Optr)PSend22540, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22538, 2, PAssign22539, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22537, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22548 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22549 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22548);
    Array PThreadedCode22547 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22548, (Optr)&t_send1, (Optr)PSend22549, (Optr)&t_block_return);
    Block PBlock22546 = new_Block_with(empty_Array, empty_Array, PThreadedCode22547, 1, PSend22549);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22550 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22546);
    Array PThreadedCode22545 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22546, (Optr)&t_send1, (Optr)PSend22550, (Optr)&t_method_return);
    Method PMethod22544 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22545, 1, PSend22550);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22544, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22552 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22554 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22554, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22551 = new_Method_with(PArray22552, empty_Array, empty_Array, PThreadedCode22553, 2, PAssign22554, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22551, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22556 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22558 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22559 = new_Send((Optr)PSend22558, SMB_name, 0);
    // printOn:. 
    Send PSend22560 = new_Send((Optr)PSend22559, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22562 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22564 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // <<. 
    Send PSend22565 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22566 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22563 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22564, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22565, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22566, (Optr)&t_method_return);
    Block PBlock22561 = new_Block_with(PArray22562, empty_Array, PThreadedCode22563, 3, PSend22564, PSend22565, PSend22566);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22567 = new_Send((Optr)PBlock22561, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22557 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22558, (Optr)&t_send0, (Optr)PSend22559, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22560, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22561, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22567, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22555 = new_Method_with(PArray22556, empty_Array, empty_Array, PThreadedCode22557, 3, PSend22560, PSend22567, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22555, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22569 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22573 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22574 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22573);
    Array PThreadedCode22572 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22573, (Optr)&t_send1, (Optr)PSend22574, (Optr)&t_block_return);
    Block PBlock22571 = new_Block_with(empty_Array, empty_Array, PThreadedCode22572, 1, PSend22574);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22575 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22571);
    Array PThreadedCode22570 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22571, (Optr)&t_send1, (Optr)PSend22575, (Optr)&t_method_return);
    Method PMethod22568 = new_Method_with(PArray22569, empty_Array, empty_Array, PThreadedCode22570, 1, PSend22575);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22568, WebClient_Core_WebSocket_Class);
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
    Array PArray22577 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22579 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22585 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22584 = new_Send((Optr)PSend22585, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22583 = new_Send((Optr)PSend22584, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22586 = new_String(L":");
    Constant string_22586_Const = new_Constant((Optr)string_22586);
    // ,. 
    Send PSend22582 = new_Send((Optr)PSend22583, SMB__append_, 1, (Optr)string_22586_Const);
    // socket. 
    Send PSend22588 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22587 = new_Send((Optr)PSend22588, SMB_remotePort, 0);
    // ,. 
    Send PSend22581 = new_Send((Optr)PSend22582, SMB__append_, 1, (Optr)PSend22587);
    Assign PAssign22580 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22581);
    Array PThreadedCode22578 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22579, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22580, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22585, (Optr)&t_send0, (Optr)PSend22584, (Optr)&t_send0, (Optr)PSend22583, (Optr)&t_push1, (Optr)string_22586, (Optr)&t_send1, (Optr)PSend22582, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22588, (Optr)&t_send0, (Optr)PSend22587, (Optr)&t_send1, (Optr)PSend22581, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22576 = new_Method_with(PArray22577, empty_Array, empty_Array, PThreadedCode22578, 3, PAssign22579, PAssign22580, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22576, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22590 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22592 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22591 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22592, (Optr)&t_method_return);
    Method PMethod22589 = new_Method_with(PArray22590, empty_Array, empty_Array, PThreadedCode22591, 1, PSend22592);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22589, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22594 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22596 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22595 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22596, (Optr)&t_method_return);
    Method PMethod22593 = new_Method_with(PArray22594, empty_Array, empty_Array, PThreadedCode22595, 1, PSend22596);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22593, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22598 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22600 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22601 = new_Send((Optr)PSend22600, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22599 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22600, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22601, (Optr)&t_method_return);
    Method PMethod22597 = new_Method_with(PArray22598, empty_Array, empty_Array, PThreadedCode22599, 1, PSend22601);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22597, HEADER(WebClient_Core_WebSocket_Class));
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