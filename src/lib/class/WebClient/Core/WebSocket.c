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
    Send PSend22562 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22566 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22567 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22566);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22568 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22569 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22568);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22570 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22565 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22566, (Optr)&t_send1, (Optr)PSend22567, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22568, (Optr)&t_send1, (Optr)PSend22569, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22570, (Optr)&t_block_return);
    Block PBlock22564 = new_Block_with(empty_Array, empty_Array, PThreadedCode22565, 3, PSend22567, PSend22569, PSend22570);
    // ifTrue:. 
    Send PSend22563 = new_Send((Optr)PSend22562, SMB_ifTrue_, 1, (Optr)PBlock22564);
    Array PThreadedCode22561 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22562, (Optr)&t_send_ifTrue_, (Optr)PSend22563, (Optr)PBlock22564, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22561, 2, PSend22563, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22560, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22572 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22576 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22577 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22576);
    Array PThreadedCode22575 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22576, (Optr)&t_send1, (Optr)PSend22577, (Optr)&t_block_return);
    Block PBlock22574 = new_Block_with(empty_Array, empty_Array, PThreadedCode22575, 1, PSend22577);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22578 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22574);
    Array PThreadedCode22573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22574, (Optr)&t_send1, (Optr)PSend22578, (Optr)&t_method_return);
    Method PMethod22571 = new_Method_with(PArray22572, empty_Array, empty_Array, PThreadedCode22573, 1, PSend22578);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22571, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22580 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22583 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22587 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22590 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22591 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22589 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22590, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22591, (Optr)&t_block_return);
    Block PBlock22588 = new_Block_with(empty_Array, empty_Array, PThreadedCode22589, 2, PAssign22590, PSend22591);
    // ifNil:. 
    Send PSend22586 = new_Send((Optr)PSend22587, SMB_ifNil_, 1, (Optr)PBlock22588);
    Assign PAssign22585 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22586);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22593 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22592 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22593);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22594 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22600 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22599 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22600);
    Assign PAssign22598 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22599);
    Array PThreadedCode22597 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22598, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22600, (Optr)&t_send1, (Optr)PSend22599, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22596 = new_Block_with(empty_Array, empty_Array, PThreadedCode22597, 1, PAssign22598);
    String string_22603 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22603_Const = new_Constant((Optr)string_22603);
    // error:. 
    Send PSend22604 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22603_Const);
    Array PThreadedCode22602 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22603, (Optr)&t_send1, (Optr)PSend22604, (Optr)&t_block_return);
    Block PBlock22601 = new_Block_with(empty_Array, empty_Array, PThreadedCode22602, 1, PSend22604);
    // ifTrue:ifFalse:. 
    Send PSend22595 = new_Send((Optr)PSend22594, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22596, (Optr)PBlock22601);
    Array PThreadedCode22584 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22585, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22587, (Optr)&t_push_closure, (Optr)PBlock22588, (Optr)&t_send1, (Optr)PSend22586, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22592, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22593, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22594, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22595, (Optr)PBlock22596, (Optr)PBlock22601, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22582 = new_Block_with(PArray22583, empty_Array, PThreadedCode22584, 4, PAssign22585, PAssign22592, PSend22595, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22605 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22582);
    Array PThreadedCode22581 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22582, (Optr)&t_send1, (Optr)PSend22605, (Optr)&t_method_return);
    Method PMethod22579 = new_Method_with(empty_Array, PArray22580, empty_Array, PThreadedCode22581, 1, PSend22605);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22579, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22607 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22609 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22610 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22609);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22611 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22614 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22615 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22616 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22615);
    Array PThreadedCode22613 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22614, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22615, (Optr)&t_send1, (Optr)PSend22616, (Optr)&t_block_return);
    Block PBlock22612 = new_Block_with(empty_Array, empty_Array, PThreadedCode22613, 2, PSend22614, PSend22616);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22618 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22620 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22620_Const = new_Constant((Optr)string_22620);
    // error:. 
    Send PSend22621 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22620_Const);
    Array PThreadedCode22619 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22620, (Optr)&t_send1, (Optr)PSend22621, (Optr)&t_method_return);
    Block PBlock22617 = new_Block_with(empty_Array, PArray22618, PThreadedCode22619, 1, PSend22621);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22622 = new_Send((Optr)PSend22611, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22612, (Optr)PBlock22617);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22623 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22608 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22609, (Optr)&t_send1, (Optr)PSend22610, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22611, (Optr)&t_push_closure, (Optr)PBlock22612, (Optr)&t_push_closure, (Optr)PBlock22617, (Optr)&t_send2, (Optr)PSend22622, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22623, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22606 = new_Method_with(PArray22607, empty_Array, empty_Array, PThreadedCode22608, 4, PSend22610, PSend22622, PSend22623, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22606, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22626 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22625 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22626, (Optr)&t_method_return);
    Method PMethod22624 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22625, 1, PSend22626);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22624, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22630 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22638 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22637 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22638, (Optr)&t_block_return);
    Block PBlock22636 = new_Block_with(empty_Array, empty_Array, PThreadedCode22637, 1, PSend22638);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22641 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22642 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22646 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22647 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22645 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22646, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22647, (Optr)&t_block_return);
    Block PBlock22644 = new_Block_with(empty_Array, empty_Array, PThreadedCode22645, 2, PSend22646, PSend22647);
    // ifTrue:. 
    Send PSend22643 = new_Send((Optr)PSend22642, SMB_ifTrue_, 1, (Optr)PBlock22644);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22648 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22640 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22641, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22642, (Optr)&t_send_ifTrue_, (Optr)PSend22643, (Optr)PBlock22644, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22648, (Optr)&t_block_return);
    Block PBlock22639 = new_Block_with(empty_Array, empty_Array, PThreadedCode22640, 3, PSend22641, PSend22643, PSend22648);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22649 = new_Send((Optr)PBlock22636, SMB_whileTrue_, 1, (Optr)PBlock22639);
    Array PThreadedCode22635 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22636, (Optr)&t_push_closure, (Optr)PBlock22639, (Optr)&t_send1, (Optr)PSend22649, (Optr)&t_block_return);
    Block PBlock22634 = new_Block_with(empty_Array, empty_Array, PThreadedCode22635, 1, PSend22649);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22651 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22653 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22652 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22653, (Optr)&t_method_return);
    Block PBlock22650 = new_Block_with(PArray22651, empty_Array, PThreadedCode22652, 1, PSend22653);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22654 = new_Send((Optr)PBlock22634, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22650);
    Array PThreadedCode22633 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22634, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22650, (Optr)&t_send2, (Optr)PSend22654, (Optr)&t_block_return);
    Block PBlock22632 = new_Block_with(empty_Array, empty_Array, PThreadedCode22633, 1, PSend22654);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22659 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22660 = new_Send((Optr)PSend22659, SMB_destroy, 0);
    Array PThreadedCode22658 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22659, (Optr)&t_send0, (Optr)PSend22660, (Optr)&t_block_return);
    Block PBlock22657 = new_Block_with(empty_Array, empty_Array, PThreadedCode22658, 1, PSend22660);
    Array PArray22662 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22664 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22663 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22664, (Optr)&t_method_return);
    Block PBlock22661 = new_Block_with(PArray22662, empty_Array, PThreadedCode22663, 1, PSend22664);
    // on:do:. 
    Send PSend22665 = new_Send((Optr)PBlock22657, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22661);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22666 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22656 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22657, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22661, (Optr)&t_send2, (Optr)PSend22665, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22666, (Optr)&t_block_return);
    Block PBlock22655 = new_Block_with(empty_Array, empty_Array, PThreadedCode22656, 2, PSend22665, PSend22666);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22667 = new_Send((Optr)PBlock22632, SMB_ensure_, 1, (Optr)PBlock22655);
    Array PThreadedCode22631 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22632, (Optr)&t_push_closure, (Optr)PBlock22655, (Optr)&t_send1, (Optr)PSend22667, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22629 = new_Block_with(PArray22630, empty_Array, PThreadedCode22631, 2, PSend22667, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22668 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22629);
    Array PThreadedCode22628 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22629, (Optr)&t_send1, (Optr)PSend22668, (Optr)&t_method_return);
    Method PMethod22627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22628, 1, PSend22668);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22627, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22670 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22672 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22671 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22672, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22669 = new_Method_with(PArray22670, empty_Array, empty_Array, PThreadedCode22671, 2, PAssign22672, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22669, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22674 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22676 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22675 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22676, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22673 = new_Method_with(PArray22674, empty_Array, empty_Array, PThreadedCode22675, 2, PAssign22676, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22673, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22683 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22682 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22683, (Optr)&t_block_return);
    Block PBlock22681 = new_Block_with(empty_Array, empty_Array, PThreadedCode22682, 1, PSend22683);
    // fork. 
    Send PSend22680 = new_Send((Optr)PBlock22681, SMB_fork, 0);
    Assign PAssign22679 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22680);
    Array PThreadedCode22678 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22679, (Optr)&t_push_closure, (Optr)PBlock22681, (Optr)&t_send0, (Optr)PSend22680, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22677 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22678, 2, PAssign22679, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22677, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22688 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22689 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22688);
    Array PThreadedCode22687 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22688, (Optr)&t_send1, (Optr)PSend22689, (Optr)&t_block_return);
    Block PBlock22686 = new_Block_with(empty_Array, empty_Array, PThreadedCode22687, 1, PSend22689);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22690 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22686);
    Array PThreadedCode22685 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22686, (Optr)&t_send1, (Optr)PSend22690, (Optr)&t_method_return);
    Method PMethod22684 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22685, 1, PSend22690);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22684, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22692 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22694 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22694, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22691 = new_Method_with(PArray22692, empty_Array, empty_Array, PThreadedCode22693, 2, PAssign22694, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22691, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22696 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22698 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22699 = new_Send((Optr)PSend22698, SMB_name, 0);
    // printOn:. 
    Send PSend22700 = new_Send((Optr)PSend22699, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22702 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5738 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5738_Const = new_Constant((Optr)char_5738);
    // <<. 
    Send PSend22704 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5738_Const);
    // <<. 
    Send PSend22705 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend22706 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode22703 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5738, (Optr)&t_send1, (Optr)PSend22704, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22705, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend22706, (Optr)&t_method_return);
    Block PBlock22701 = new_Block_with(PArray22702, empty_Array, PThreadedCode22703, 3, PSend22704, PSend22705, PSend22706);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22707 = new_Send((Optr)PBlock22701, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22697 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22698, (Optr)&t_send0, (Optr)PSend22699, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22700, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22701, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22707, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22695 = new_Method_with(PArray22696, empty_Array, empty_Array, PThreadedCode22697, 3, PSend22700, PSend22707, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22695, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22709 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22713 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22714 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22713);
    Array PThreadedCode22712 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22713, (Optr)&t_send1, (Optr)PSend22714, (Optr)&t_block_return);
    Block PBlock22711 = new_Block_with(empty_Array, empty_Array, PThreadedCode22712, 1, PSend22714);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22715 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22711);
    Array PThreadedCode22710 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22711, (Optr)&t_send1, (Optr)PSend22715, (Optr)&t_method_return);
    Method PMethod22708 = new_Method_with(PArray22709, empty_Array, empty_Array, PThreadedCode22710, 1, PSend22715);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22708, WebClient_Core_WebSocket_Class);
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
    Array PArray22717 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22719 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22725 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22724 = new_Send((Optr)PSend22725, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22723 = new_Send((Optr)PSend22724, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22726 = new_String(L":");
    Constant string_22726_Const = new_Constant((Optr)string_22726);
    // ,. 
    Send PSend22722 = new_Send((Optr)PSend22723, SMB__append_, 1, (Optr)string_22726_Const);
    // socket. 
    Send PSend22728 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22727 = new_Send((Optr)PSend22728, SMB_remotePort, 0);
    // ,. 
    Send PSend22721 = new_Send((Optr)PSend22722, SMB__append_, 1, (Optr)PSend22727);
    Assign PAssign22720 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22721);
    Array PThreadedCode22718 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22719, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22720, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22725, (Optr)&t_send0, (Optr)PSend22724, (Optr)&t_send0, (Optr)PSend22723, (Optr)&t_push1, (Optr)string_22726, (Optr)&t_send1, (Optr)PSend22722, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22728, (Optr)&t_send0, (Optr)PSend22727, (Optr)&t_send1, (Optr)PSend22721, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22716 = new_Method_with(PArray22717, empty_Array, empty_Array, PThreadedCode22718, 3, PAssign22719, PAssign22720, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22716, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22730 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22732 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22731 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22732, (Optr)&t_method_return);
    Method PMethod22729 = new_Method_with(PArray22730, empty_Array, empty_Array, PThreadedCode22731, 1, PSend22732);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22729, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22734 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22736 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22735 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22736, (Optr)&t_method_return);
    Method PMethod22733 = new_Method_with(PArray22734, empty_Array, empty_Array, PThreadedCode22735, 1, PSend22736);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22733, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22738 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22740 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22741 = new_Send((Optr)PSend22740, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22739 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22740, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22741, (Optr)&t_method_return);
    Method PMethod22737 = new_Method_with(PArray22738, empty_Array, empty_Array, PThreadedCode22739, 1, PSend22741);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22737, HEADER(WebClient_Core_WebSocket_Class));
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