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
    Send PSend22241 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22245 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22246 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22245);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22247 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22248 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22247);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22249 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22244 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22245, (Optr)&t_send1, (Optr)PSend22246, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22247, (Optr)&t_send1, (Optr)PSend22248, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22249, (Optr)&t_block_return);
    Block PBlock22243 = new_Block_with(empty_Array, empty_Array, PThreadedCode22244, 3, PSend22246, PSend22248, PSend22249);
    // ifTrue:. 
    Send PSend22242 = new_Send((Optr)PSend22241, SMB_ifTrue_, 1, (Optr)PBlock22243);
    Array PThreadedCode22240 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22241, (Optr)&t_send_ifTrue_, (Optr)PSend22242, (Optr)PBlock22243, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22239 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22240, 2, PSend22242, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22239, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22251 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22255 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22256 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22255);
    Array PThreadedCode22254 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22255, (Optr)&t_send1, (Optr)PSend22256, (Optr)&t_block_return);
    Block PBlock22253 = new_Block_with(empty_Array, empty_Array, PThreadedCode22254, 1, PSend22256);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22257 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22253);
    Array PThreadedCode22252 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22253, (Optr)&t_send1, (Optr)PSend22257, (Optr)&t_method_return);
    Method PMethod22250 = new_Method_with(PArray22251, empty_Array, empty_Array, PThreadedCode22252, 1, PSend22257);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22250, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22259 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22262 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22266 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22269 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22270 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22268 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22269, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22270, (Optr)&t_block_return);
    Block PBlock22267 = new_Block_with(empty_Array, empty_Array, PThreadedCode22268, 2, PAssign22269, PSend22270);
    // ifNil:. 
    Send PSend22265 = new_Send((Optr)PSend22266, SMB_ifNil_, 1, (Optr)PBlock22267);
    Assign PAssign22264 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22265);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22272 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22271 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22272);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22273 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22279 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22278 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22279);
    Assign PAssign22277 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22278);
    Array PThreadedCode22276 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22277, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22279, (Optr)&t_send1, (Optr)PSend22278, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22275 = new_Block_with(empty_Array, empty_Array, PThreadedCode22276, 1, PAssign22277);
    String string_22282 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22282_Const = new_Constant((Optr)string_22282);
    // error:. 
    Send PSend22283 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22282_Const);
    Array PThreadedCode22281 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22282, (Optr)&t_send1, (Optr)PSend22283, (Optr)&t_block_return);
    Block PBlock22280 = new_Block_with(empty_Array, empty_Array, PThreadedCode22281, 1, PSend22283);
    // ifTrue:ifFalse:. 
    Send PSend22274 = new_Send((Optr)PSend22273, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22275, (Optr)PBlock22280);
    Array PThreadedCode22263 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22264, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22266, (Optr)&t_push_closure, (Optr)PBlock22267, (Optr)&t_send1, (Optr)PSend22265, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22271, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22272, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22273, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22274, (Optr)PBlock22275, (Optr)PBlock22280, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22261 = new_Block_with(PArray22262, empty_Array, PThreadedCode22263, 4, PAssign22264, PAssign22271, PSend22274, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22284 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22261);
    Array PThreadedCode22260 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22261, (Optr)&t_send1, (Optr)PSend22284, (Optr)&t_method_return);
    Method PMethod22258 = new_Method_with(empty_Array, PArray22259, empty_Array, PThreadedCode22260, 1, PSend22284);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22258, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22286 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22288 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22289 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22288);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22290 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22293 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22294 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22295 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22294);
    Array PThreadedCode22292 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22293, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22294, (Optr)&t_send1, (Optr)PSend22295, (Optr)&t_block_return);
    Block PBlock22291 = new_Block_with(empty_Array, empty_Array, PThreadedCode22292, 2, PSend22293, PSend22295);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22297 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22299 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22299_Const = new_Constant((Optr)string_22299);
    // error:. 
    Send PSend22300 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22299_Const);
    Array PThreadedCode22298 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22299, (Optr)&t_send1, (Optr)PSend22300, (Optr)&t_method_return);
    Block PBlock22296 = new_Block_with(empty_Array, PArray22297, PThreadedCode22298, 1, PSend22300);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22301 = new_Send((Optr)PSend22290, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22291, (Optr)PBlock22296);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22302 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22287 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22288, (Optr)&t_send1, (Optr)PSend22289, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22290, (Optr)&t_push_closure, (Optr)PBlock22291, (Optr)&t_push_closure, (Optr)PBlock22296, (Optr)&t_send2, (Optr)PSend22301, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22302, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22285 = new_Method_with(PArray22286, empty_Array, empty_Array, PThreadedCode22287, 4, PSend22289, PSend22301, PSend22302, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22285, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22305 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22304 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22305, (Optr)&t_method_return);
    Method PMethod22303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22304, 1, PSend22305);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22303, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22309 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22317 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22316 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22317, (Optr)&t_block_return);
    Block PBlock22315 = new_Block_with(empty_Array, empty_Array, PThreadedCode22316, 1, PSend22317);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22320 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22321 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22325 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22326 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22324 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22326, (Optr)&t_block_return);
    Block PBlock22323 = new_Block_with(empty_Array, empty_Array, PThreadedCode22324, 2, PSend22325, PSend22326);
    // ifTrue:. 
    Send PSend22322 = new_Send((Optr)PSend22321, SMB_ifTrue_, 1, (Optr)PBlock22323);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22327 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22319 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22320, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22321, (Optr)&t_send_ifTrue_, (Optr)PSend22322, (Optr)PBlock22323, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22327, (Optr)&t_block_return);
    Block PBlock22318 = new_Block_with(empty_Array, empty_Array, PThreadedCode22319, 3, PSend22320, PSend22322, PSend22327);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22328 = new_Send((Optr)PBlock22315, SMB_whileTrue_, 1, (Optr)PBlock22318);
    Array PThreadedCode22314 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22315, (Optr)&t_push_closure, (Optr)PBlock22318, (Optr)&t_send1, (Optr)PSend22328, (Optr)&t_block_return);
    Block PBlock22313 = new_Block_with(empty_Array, empty_Array, PThreadedCode22314, 1, PSend22328);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22330 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22332 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22331 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22332, (Optr)&t_method_return);
    Block PBlock22329 = new_Block_with(PArray22330, empty_Array, PThreadedCode22331, 1, PSend22332);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22333 = new_Send((Optr)PBlock22313, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22329);
    Array PThreadedCode22312 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22313, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22329, (Optr)&t_send2, (Optr)PSend22333, (Optr)&t_block_return);
    Block PBlock22311 = new_Block_with(empty_Array, empty_Array, PThreadedCode22312, 1, PSend22333);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22338 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22339 = new_Send((Optr)PSend22338, SMB_destroy, 0);
    Array PThreadedCode22337 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22338, (Optr)&t_send0, (Optr)PSend22339, (Optr)&t_block_return);
    Block PBlock22336 = new_Block_with(empty_Array, empty_Array, PThreadedCode22337, 1, PSend22339);
    Array PArray22341 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22343 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22342 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22343, (Optr)&t_method_return);
    Block PBlock22340 = new_Block_with(PArray22341, empty_Array, PThreadedCode22342, 1, PSend22343);
    // on:do:. 
    Send PSend22344 = new_Send((Optr)PBlock22336, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22340);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22345 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22335 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22336, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22340, (Optr)&t_send2, (Optr)PSend22344, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22345, (Optr)&t_block_return);
    Block PBlock22334 = new_Block_with(empty_Array, empty_Array, PThreadedCode22335, 2, PSend22344, PSend22345);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22346 = new_Send((Optr)PBlock22311, SMB_ensure_, 1, (Optr)PBlock22334);
    Array PThreadedCode22310 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22311, (Optr)&t_push_closure, (Optr)PBlock22334, (Optr)&t_send1, (Optr)PSend22346, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22308 = new_Block_with(PArray22309, empty_Array, PThreadedCode22310, 2, PSend22346, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22347 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22308);
    Array PThreadedCode22307 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22308, (Optr)&t_send1, (Optr)PSend22347, (Optr)&t_method_return);
    Method PMethod22306 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22307, 1, PSend22347);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22306, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22349 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22351 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22350 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22351, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22348 = new_Method_with(PArray22349, empty_Array, empty_Array, PThreadedCode22350, 2, PAssign22351, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22348, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22353 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22355 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22354 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22355, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22352 = new_Method_with(PArray22353, empty_Array, empty_Array, PThreadedCode22354, 2, PAssign22355, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22352, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22362 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22361 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22362, (Optr)&t_block_return);
    Block PBlock22360 = new_Block_with(empty_Array, empty_Array, PThreadedCode22361, 1, PSend22362);
    // fork. 
    Send PSend22359 = new_Send((Optr)PBlock22360, SMB_fork, 0);
    Assign PAssign22358 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22359);
    Array PThreadedCode22357 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22358, (Optr)&t_push_closure, (Optr)PBlock22360, (Optr)&t_send0, (Optr)PSend22359, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22356 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22357, 2, PAssign22358, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22356, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22367 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22368 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22367);
    Array PThreadedCode22366 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22367, (Optr)&t_send1, (Optr)PSend22368, (Optr)&t_block_return);
    Block PBlock22365 = new_Block_with(empty_Array, empty_Array, PThreadedCode22366, 1, PSend22368);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22369 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22365);
    Array PThreadedCode22364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22365, (Optr)&t_send1, (Optr)PSend22369, (Optr)&t_method_return);
    Method PMethod22363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22364, 1, PSend22369);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22363, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22371 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22373 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22372 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22373, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22370 = new_Method_with(PArray22371, empty_Array, empty_Array, PThreadedCode22372, 2, PAssign22373, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22370, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22375 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22377 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22378 = new_Send((Optr)PSend22377, SMB_name, 0);
    // printOn:. 
    Send PSend22379 = new_Send((Optr)PSend22378, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22381 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22383 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // <<. 
    Send PSend22384 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22385 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22382 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22383, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22384, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22385, (Optr)&t_method_return);
    Block PBlock22380 = new_Block_with(PArray22381, empty_Array, PThreadedCode22382, 3, PSend22383, PSend22384, PSend22385);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22386 = new_Send((Optr)PBlock22380, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22376 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22377, (Optr)&t_send0, (Optr)PSend22378, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22379, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22380, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22386, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22374 = new_Method_with(PArray22375, empty_Array, empty_Array, PThreadedCode22376, 3, PSend22379, PSend22386, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22374, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22388 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22392 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22393 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22392);
    Array PThreadedCode22391 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22392, (Optr)&t_send1, (Optr)PSend22393, (Optr)&t_block_return);
    Block PBlock22390 = new_Block_with(empty_Array, empty_Array, PThreadedCode22391, 1, PSend22393);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22394 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22390);
    Array PThreadedCode22389 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22390, (Optr)&t_send1, (Optr)PSend22394, (Optr)&t_method_return);
    Method PMethod22387 = new_Method_with(PArray22388, empty_Array, empty_Array, PThreadedCode22389, 1, PSend22394);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22387, WebClient_Core_WebSocket_Class);
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
    Array PArray22396 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22398 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22404 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22403 = new_Send((Optr)PSend22404, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22402 = new_Send((Optr)PSend22403, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22405 = new_String(L":");
    Constant string_22405_Const = new_Constant((Optr)string_22405);
    // ,. 
    Send PSend22401 = new_Send((Optr)PSend22402, SMB__append_, 1, (Optr)string_22405_Const);
    // socket. 
    Send PSend22407 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22406 = new_Send((Optr)PSend22407, SMB_remotePort, 0);
    // ,. 
    Send PSend22400 = new_Send((Optr)PSend22401, SMB__append_, 1, (Optr)PSend22406);
    Assign PAssign22399 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22400);
    Array PThreadedCode22397 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22398, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22399, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22404, (Optr)&t_send0, (Optr)PSend22403, (Optr)&t_send0, (Optr)PSend22402, (Optr)&t_push1, (Optr)string_22405, (Optr)&t_send1, (Optr)PSend22401, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22407, (Optr)&t_send0, (Optr)PSend22406, (Optr)&t_send1, (Optr)PSend22400, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22395 = new_Method_with(PArray22396, empty_Array, empty_Array, PThreadedCode22397, 3, PAssign22398, PAssign22399, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22395, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22409 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22411 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22411, (Optr)&t_method_return);
    Method PMethod22408 = new_Method_with(PArray22409, empty_Array, empty_Array, PThreadedCode22410, 1, PSend22411);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22408, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22413 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22415 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22414 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22415, (Optr)&t_method_return);
    Method PMethod22412 = new_Method_with(PArray22413, empty_Array, empty_Array, PThreadedCode22414, 1, PSend22415);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22412, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22417 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22419 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22420 = new_Send((Optr)PSend22419, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22418 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22419, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22420, (Optr)&t_method_return);
    Method PMethod22416 = new_Method_with(PArray22417, empty_Array, empty_Array, PThreadedCode22418, 1, PSend22420);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22416, HEADER(WebClient_Core_WebSocket_Class));
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