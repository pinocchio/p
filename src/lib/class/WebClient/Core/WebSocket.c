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
    Send PSend22239 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22243 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22244 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22243);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22245 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22246 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22245);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22247 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22242 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22243, (Optr)&t_send1, (Optr)PSend22244, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22245, (Optr)&t_send1, (Optr)PSend22246, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22247, (Optr)&t_block_return);
    Block PBlock22241 = new_Block_with(empty_Array, empty_Array, PThreadedCode22242, 3, PSend22244, PSend22246, PSend22247);
    // ifTrue:. 
    Send PSend22240 = new_Send((Optr)PSend22239, SMB_ifTrue_, 1, (Optr)PBlock22241);
    Array PThreadedCode22238 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22239, (Optr)&t_send_ifTrue_, (Optr)PSend22240, (Optr)PBlock22241, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22237 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22238, 2, PSend22240, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22237, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22249 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22253 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22254 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22253);
    Array PThreadedCode22252 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22253, (Optr)&t_send1, (Optr)PSend22254, (Optr)&t_block_return);
    Block PBlock22251 = new_Block_with(empty_Array, empty_Array, PThreadedCode22252, 1, PSend22254);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22255 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22251);
    Array PThreadedCode22250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22251, (Optr)&t_send1, (Optr)PSend22255, (Optr)&t_method_return);
    Method PMethod22248 = new_Method_with(PArray22249, empty_Array, empty_Array, PThreadedCode22250, 1, PSend22255);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22248, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22257 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22260 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22264 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22267 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22268 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22266 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22267, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22268, (Optr)&t_block_return);
    Block PBlock22265 = new_Block_with(empty_Array, empty_Array, PThreadedCode22266, 2, PAssign22267, PSend22268);
    // ifNil:. 
    Send PSend22263 = new_Send((Optr)PSend22264, SMB_ifNil_, 1, (Optr)PBlock22265);
    Assign PAssign22262 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22263);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22270 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22269 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22270);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22271 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22277 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22276 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22277);
    Assign PAssign22275 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22276);
    Array PThreadedCode22274 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22275, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22277, (Optr)&t_send1, (Optr)PSend22276, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22273 = new_Block_with(empty_Array, empty_Array, PThreadedCode22274, 1, PAssign22275);
    String string_22280 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22280_Const = new_Constant((Optr)string_22280);
    // error:. 
    Send PSend22281 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22280_Const);
    Array PThreadedCode22279 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22280, (Optr)&t_send1, (Optr)PSend22281, (Optr)&t_block_return);
    Block PBlock22278 = new_Block_with(empty_Array, empty_Array, PThreadedCode22279, 1, PSend22281);
    // ifTrue:ifFalse:. 
    Send PSend22272 = new_Send((Optr)PSend22271, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22273, (Optr)PBlock22278);
    Array PThreadedCode22261 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22262, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22264, (Optr)&t_push_closure, (Optr)PBlock22265, (Optr)&t_send1, (Optr)PSend22263, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22269, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22270, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22271, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22272, (Optr)PBlock22273, (Optr)PBlock22278, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22259 = new_Block_with(PArray22260, empty_Array, PThreadedCode22261, 4, PAssign22262, PAssign22269, PSend22272, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22282 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22259);
    Array PThreadedCode22258 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22259, (Optr)&t_send1, (Optr)PSend22282, (Optr)&t_method_return);
    Method PMethod22256 = new_Method_with(empty_Array, PArray22257, empty_Array, PThreadedCode22258, 1, PSend22282);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22256, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22284 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22286 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22287 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22286);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22288 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22291 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22292 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22293 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22292);
    Array PThreadedCode22290 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22291, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22292, (Optr)&t_send1, (Optr)PSend22293, (Optr)&t_block_return);
    Block PBlock22289 = new_Block_with(empty_Array, empty_Array, PThreadedCode22290, 2, PSend22291, PSend22293);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22295 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22297 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22297_Const = new_Constant((Optr)string_22297);
    // error:. 
    Send PSend22298 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22297_Const);
    Array PThreadedCode22296 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22297, (Optr)&t_send1, (Optr)PSend22298, (Optr)&t_method_return);
    Block PBlock22294 = new_Block_with(empty_Array, PArray22295, PThreadedCode22296, 1, PSend22298);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22299 = new_Send((Optr)PSend22288, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22289, (Optr)PBlock22294);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22300 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22285 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22286, (Optr)&t_send1, (Optr)PSend22287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22288, (Optr)&t_push_closure, (Optr)PBlock22289, (Optr)&t_push_closure, (Optr)PBlock22294, (Optr)&t_send2, (Optr)PSend22299, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22300, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22283 = new_Method_with(PArray22284, empty_Array, empty_Array, PThreadedCode22285, 4, PSend22287, PSend22299, PSend22300, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22283, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22303 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22302 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22303, (Optr)&t_method_return);
    Method PMethod22301 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22302, 1, PSend22303);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22301, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22307 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22315 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22314 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22315, (Optr)&t_block_return);
    Block PBlock22313 = new_Block_with(empty_Array, empty_Array, PThreadedCode22314, 1, PSend22315);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22318 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22319 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22323 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22324 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22322 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22324, (Optr)&t_block_return);
    Block PBlock22321 = new_Block_with(empty_Array, empty_Array, PThreadedCode22322, 2, PSend22323, PSend22324);
    // ifTrue:. 
    Send PSend22320 = new_Send((Optr)PSend22319, SMB_ifTrue_, 1, (Optr)PBlock22321);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22325 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22317 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22318, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22319, (Optr)&t_send_ifTrue_, (Optr)PSend22320, (Optr)PBlock22321, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22325, (Optr)&t_block_return);
    Block PBlock22316 = new_Block_with(empty_Array, empty_Array, PThreadedCode22317, 3, PSend22318, PSend22320, PSend22325);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22326 = new_Send((Optr)PBlock22313, SMB_whileTrue_, 1, (Optr)PBlock22316);
    Array PThreadedCode22312 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22313, (Optr)&t_push_closure, (Optr)PBlock22316, (Optr)&t_send1, (Optr)PSend22326, (Optr)&t_block_return);
    Block PBlock22311 = new_Block_with(empty_Array, empty_Array, PThreadedCode22312, 1, PSend22326);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22328 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22330 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22329 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22330, (Optr)&t_method_return);
    Block PBlock22327 = new_Block_with(PArray22328, empty_Array, PThreadedCode22329, 1, PSend22330);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22331 = new_Send((Optr)PBlock22311, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22327);
    Array PThreadedCode22310 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22311, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22327, (Optr)&t_send2, (Optr)PSend22331, (Optr)&t_block_return);
    Block PBlock22309 = new_Block_with(empty_Array, empty_Array, PThreadedCode22310, 1, PSend22331);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22336 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22337 = new_Send((Optr)PSend22336, SMB_destroy, 0);
    Array PThreadedCode22335 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22336, (Optr)&t_send0, (Optr)PSend22337, (Optr)&t_block_return);
    Block PBlock22334 = new_Block_with(empty_Array, empty_Array, PThreadedCode22335, 1, PSend22337);
    Array PArray22339 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22341 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22340 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22341, (Optr)&t_method_return);
    Block PBlock22338 = new_Block_with(PArray22339, empty_Array, PThreadedCode22340, 1, PSend22341);
    // on:do:. 
    Send PSend22342 = new_Send((Optr)PBlock22334, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22338);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22343 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22333 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22334, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22338, (Optr)&t_send2, (Optr)PSend22342, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22343, (Optr)&t_block_return);
    Block PBlock22332 = new_Block_with(empty_Array, empty_Array, PThreadedCode22333, 2, PSend22342, PSend22343);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22344 = new_Send((Optr)PBlock22309, SMB_ensure_, 1, (Optr)PBlock22332);
    Array PThreadedCode22308 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22309, (Optr)&t_push_closure, (Optr)PBlock22332, (Optr)&t_send1, (Optr)PSend22344, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22306 = new_Block_with(PArray22307, empty_Array, PThreadedCode22308, 2, PSend22344, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22345 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22306);
    Array PThreadedCode22305 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22306, (Optr)&t_send1, (Optr)PSend22345, (Optr)&t_method_return);
    Method PMethod22304 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22305, 1, PSend22345);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22304, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22347 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22349 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22348 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22349, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22346 = new_Method_with(PArray22347, empty_Array, empty_Array, PThreadedCode22348, 2, PAssign22349, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22346, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22351 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22353 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22353, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22350 = new_Method_with(PArray22351, empty_Array, empty_Array, PThreadedCode22352, 2, PAssign22353, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22350, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22360 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22359 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22360, (Optr)&t_block_return);
    Block PBlock22358 = new_Block_with(empty_Array, empty_Array, PThreadedCode22359, 1, PSend22360);
    // fork. 
    Send PSend22357 = new_Send((Optr)PBlock22358, SMB_fork, 0);
    Assign PAssign22356 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22357);
    Array PThreadedCode22355 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22356, (Optr)&t_push_closure, (Optr)PBlock22358, (Optr)&t_send0, (Optr)PSend22357, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22354 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22355, 2, PAssign22356, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22354, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22365 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22366 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22365);
    Array PThreadedCode22364 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22365, (Optr)&t_send1, (Optr)PSend22366, (Optr)&t_block_return);
    Block PBlock22363 = new_Block_with(empty_Array, empty_Array, PThreadedCode22364, 1, PSend22366);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22367 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22363);
    Array PThreadedCode22362 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22363, (Optr)&t_send1, (Optr)PSend22367, (Optr)&t_method_return);
    Method PMethod22361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22362, 1, PSend22367);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22361, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22369 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22371 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22370 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22371, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22368 = new_Method_with(PArray22369, empty_Array, empty_Array, PThreadedCode22370, 2, PAssign22371, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22368, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22373 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22375 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22376 = new_Send((Optr)PSend22375, SMB_name, 0);
    // printOn:. 
    Send PSend22377 = new_Send((Optr)PSend22376, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22379 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22381 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // <<. 
    Send PSend22382 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22383 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22380 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22381, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22383, (Optr)&t_method_return);
    Block PBlock22378 = new_Block_with(PArray22379, empty_Array, PThreadedCode22380, 3, PSend22381, PSend22382, PSend22383);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22384 = new_Send((Optr)PBlock22378, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22374 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22375, (Optr)&t_send0, (Optr)PSend22376, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22377, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22378, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22384, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22372 = new_Method_with(PArray22373, empty_Array, empty_Array, PThreadedCode22374, 3, PSend22377, PSend22384, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22372, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22386 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22390 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22391 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22390);
    Array PThreadedCode22389 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22390, (Optr)&t_send1, (Optr)PSend22391, (Optr)&t_block_return);
    Block PBlock22388 = new_Block_with(empty_Array, empty_Array, PThreadedCode22389, 1, PSend22391);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22392 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22388);
    Array PThreadedCode22387 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22388, (Optr)&t_send1, (Optr)PSend22392, (Optr)&t_method_return);
    Method PMethod22385 = new_Method_with(PArray22386, empty_Array, empty_Array, PThreadedCode22387, 1, PSend22392);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22385, WebClient_Core_WebSocket_Class);
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
    Array PArray22394 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22396 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22402 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22401 = new_Send((Optr)PSend22402, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22400 = new_Send((Optr)PSend22401, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22403 = new_String(L":");
    Constant string_22403_Const = new_Constant((Optr)string_22403);
    // ,. 
    Send PSend22399 = new_Send((Optr)PSend22400, SMB__append_, 1, (Optr)string_22403_Const);
    // socket. 
    Send PSend22405 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22404 = new_Send((Optr)PSend22405, SMB_remotePort, 0);
    // ,. 
    Send PSend22398 = new_Send((Optr)PSend22399, SMB__append_, 1, (Optr)PSend22404);
    Assign PAssign22397 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22398);
    Array PThreadedCode22395 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22396, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22397, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22402, (Optr)&t_send0, (Optr)PSend22401, (Optr)&t_send0, (Optr)PSend22400, (Optr)&t_push1, (Optr)string_22403, (Optr)&t_send1, (Optr)PSend22399, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22405, (Optr)&t_send0, (Optr)PSend22404, (Optr)&t_send1, (Optr)PSend22398, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22393 = new_Method_with(PArray22394, empty_Array, empty_Array, PThreadedCode22395, 3, PAssign22396, PAssign22397, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22393, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22407 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22409 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22409, (Optr)&t_method_return);
    Method PMethod22406 = new_Method_with(PArray22407, empty_Array, empty_Array, PThreadedCode22408, 1, PSend22409);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22406, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22411 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22413 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22412 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22413, (Optr)&t_method_return);
    Method PMethod22410 = new_Method_with(PArray22411, empty_Array, empty_Array, PThreadedCode22412, 1, PSend22413);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22410, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22415 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22417 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22418 = new_Send((Optr)PSend22417, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22416 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22417, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22418, (Optr)&t_method_return);
    Method PMethod22414 = new_Method_with(PArray22415, empty_Array, empty_Array, PThreadedCode22416, 1, PSend22418);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22414, HEADER(WebClient_Core_WebSocket_Class));
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