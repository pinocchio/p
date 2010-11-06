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
    Send PSend22052 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22056 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22057 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22056);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22058 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22059 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22058);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22060 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22055 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22056, (Optr)&t_send1, (Optr)PSend22057, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22058, (Optr)&t_send1, (Optr)PSend22059, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22060, (Optr)&t_block_return);
    Block PBlock22054 = new_Block_with(empty_Array, empty_Array, PThreadedCode22055, 3, PSend22057, PSend22059, PSend22060);
    // ifTrue:. 
    Send PSend22053 = new_Send((Optr)PSend22052, SMB_ifTrue_, 1, (Optr)PBlock22054);
    Array PThreadedCode22051 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22052, (Optr)&t_send_ifTrue_, (Optr)PSend22053, (Optr)PBlock22054, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22050 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22051, 2, PSend22053, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22050, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22062 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22066 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22067 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22066);
    Array PThreadedCode22065 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22066, (Optr)&t_send1, (Optr)PSend22067, (Optr)&t_block_return);
    Block PBlock22064 = new_Block_with(empty_Array, empty_Array, PThreadedCode22065, 1, PSend22067);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22068 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22064);
    Array PThreadedCode22063 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22064, (Optr)&t_send1, (Optr)PSend22068, (Optr)&t_method_return);
    Method PMethod22061 = new_Method_with(PArray22062, empty_Array, empty_Array, PThreadedCode22063, 1, PSend22068);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22061, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22070 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22073 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22077 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22080 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22081 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22079 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22080, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22081, (Optr)&t_block_return);
    Block PBlock22078 = new_Block_with(empty_Array, empty_Array, PThreadedCode22079, 2, PAssign22080, PSend22081);
    // ifNil:. 
    Send PSend22076 = new_Send((Optr)PSend22077, SMB_ifNil_, 1, (Optr)PBlock22078);
    Assign PAssign22075 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22076);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22083 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22082 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22083);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22084 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22090 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22089 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22090);
    Assign PAssign22088 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22089);
    Array PThreadedCode22087 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22088, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22090, (Optr)&t_send1, (Optr)PSend22089, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22086 = new_Block_with(empty_Array, empty_Array, PThreadedCode22087, 1, PAssign22088);
    String string_22093 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22093_Const = new_Constant((Optr)string_22093);
    // error:. 
    Send PSend22094 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22093_Const);
    Array PThreadedCode22092 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22093, (Optr)&t_send1, (Optr)PSend22094, (Optr)&t_block_return);
    Block PBlock22091 = new_Block_with(empty_Array, empty_Array, PThreadedCode22092, 1, PSend22094);
    // ifTrue:ifFalse:. 
    Send PSend22085 = new_Send((Optr)PSend22084, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22086, (Optr)PBlock22091);
    Array PThreadedCode22074 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22075, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22077, (Optr)&t_push_closure, (Optr)PBlock22078, (Optr)&t_send1, (Optr)PSend22076, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22082, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22084, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22085, (Optr)PBlock22086, (Optr)PBlock22091, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22072 = new_Block_with(PArray22073, empty_Array, PThreadedCode22074, 4, PAssign22075, PAssign22082, PSend22085, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22095 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22072);
    Array PThreadedCode22071 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22072, (Optr)&t_send1, (Optr)PSend22095, (Optr)&t_method_return);
    Method PMethod22069 = new_Method_with(empty_Array, PArray22070, empty_Array, PThreadedCode22071, 1, PSend22095);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22069, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22097 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22099 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22100 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22099);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22101 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22104 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22105 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22106 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22105);
    Array PThreadedCode22103 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22104, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22105, (Optr)&t_send1, (Optr)PSend22106, (Optr)&t_block_return);
    Block PBlock22102 = new_Block_with(empty_Array, empty_Array, PThreadedCode22103, 2, PSend22104, PSend22106);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22108 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22110 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22110_Const = new_Constant((Optr)string_22110);
    // error:. 
    Send PSend22111 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22110_Const);
    Array PThreadedCode22109 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22110, (Optr)&t_send1, (Optr)PSend22111, (Optr)&t_method_return);
    Block PBlock22107 = new_Block_with(empty_Array, PArray22108, PThreadedCode22109, 1, PSend22111);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22112 = new_Send((Optr)PSend22101, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22102, (Optr)PBlock22107);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22113 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22098 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22099, (Optr)&t_send1, (Optr)PSend22100, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22101, (Optr)&t_push_closure, (Optr)PBlock22102, (Optr)&t_push_closure, (Optr)PBlock22107, (Optr)&t_send2, (Optr)PSend22112, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22113, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22096 = new_Method_with(PArray22097, empty_Array, empty_Array, PThreadedCode22098, 4, PSend22100, PSend22112, PSend22113, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22096, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22116 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22115 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22116, (Optr)&t_method_return);
    Method PMethod22114 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22115, 1, PSend22116);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22114, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22120 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22128 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22127 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22128, (Optr)&t_block_return);
    Block PBlock22126 = new_Block_with(empty_Array, empty_Array, PThreadedCode22127, 1, PSend22128);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22131 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22132 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22136 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22137 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22135 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22137, (Optr)&t_block_return);
    Block PBlock22134 = new_Block_with(empty_Array, empty_Array, PThreadedCode22135, 2, PSend22136, PSend22137);
    // ifTrue:. 
    Send PSend22133 = new_Send((Optr)PSend22132, SMB_ifTrue_, 1, (Optr)PBlock22134);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22138 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22130 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22131, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22132, (Optr)&t_send_ifTrue_, (Optr)PSend22133, (Optr)PBlock22134, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22138, (Optr)&t_block_return);
    Block PBlock22129 = new_Block_with(empty_Array, empty_Array, PThreadedCode22130, 3, PSend22131, PSend22133, PSend22138);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22139 = new_Send((Optr)PBlock22126, SMB_whileTrue_, 1, (Optr)PBlock22129);
    Array PThreadedCode22125 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22126, (Optr)&t_push_closure, (Optr)PBlock22129, (Optr)&t_send1, (Optr)PSend22139, (Optr)&t_block_return);
    Block PBlock22124 = new_Block_with(empty_Array, empty_Array, PThreadedCode22125, 1, PSend22139);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22141 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22143 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22142 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22143, (Optr)&t_method_return);
    Block PBlock22140 = new_Block_with(PArray22141, empty_Array, PThreadedCode22142, 1, PSend22143);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22144 = new_Send((Optr)PBlock22124, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22140);
    Array PThreadedCode22123 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22124, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22140, (Optr)&t_send2, (Optr)PSend22144, (Optr)&t_block_return);
    Block PBlock22122 = new_Block_with(empty_Array, empty_Array, PThreadedCode22123, 1, PSend22144);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22149 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22150 = new_Send((Optr)PSend22149, SMB_destroy, 0);
    Array PThreadedCode22148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22149, (Optr)&t_send0, (Optr)PSend22150, (Optr)&t_block_return);
    Block PBlock22147 = new_Block_with(empty_Array, empty_Array, PThreadedCode22148, 1, PSend22150);
    Array PArray22152 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22154 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22153 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22154, (Optr)&t_method_return);
    Block PBlock22151 = new_Block_with(PArray22152, empty_Array, PThreadedCode22153, 1, PSend22154);
    // on:do:. 
    Send PSend22155 = new_Send((Optr)PBlock22147, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22151);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22156 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22146 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22147, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22151, (Optr)&t_send2, (Optr)PSend22155, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22156, (Optr)&t_block_return);
    Block PBlock22145 = new_Block_with(empty_Array, empty_Array, PThreadedCode22146, 2, PSend22155, PSend22156);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22157 = new_Send((Optr)PBlock22122, SMB_ensure_, 1, (Optr)PBlock22145);
    Array PThreadedCode22121 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22122, (Optr)&t_push_closure, (Optr)PBlock22145, (Optr)&t_send1, (Optr)PSend22157, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22119 = new_Block_with(PArray22120, empty_Array, PThreadedCode22121, 2, PSend22157, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22158 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22119);
    Array PThreadedCode22118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22119, (Optr)&t_send1, (Optr)PSend22158, (Optr)&t_method_return);
    Method PMethod22117 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22118, 1, PSend22158);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22117, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22160 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22162 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22161 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22162, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22159 = new_Method_with(PArray22160, empty_Array, empty_Array, PThreadedCode22161, 2, PAssign22162, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22159, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22164 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22166 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22165 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22166, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22163 = new_Method_with(PArray22164, empty_Array, empty_Array, PThreadedCode22165, 2, PAssign22166, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22163, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22173 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22172 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22173, (Optr)&t_block_return);
    Block PBlock22171 = new_Block_with(empty_Array, empty_Array, PThreadedCode22172, 1, PSend22173);
    // fork. 
    Send PSend22170 = new_Send((Optr)PBlock22171, SMB_fork, 0);
    Assign PAssign22169 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22170);
    Array PThreadedCode22168 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22169, (Optr)&t_push_closure, (Optr)PBlock22171, (Optr)&t_send0, (Optr)PSend22170, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22168, 2, PAssign22169, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22167, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22178 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22179 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22178);
    Array PThreadedCode22177 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22178, (Optr)&t_send1, (Optr)PSend22179, (Optr)&t_block_return);
    Block PBlock22176 = new_Block_with(empty_Array, empty_Array, PThreadedCode22177, 1, PSend22179);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22180 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22176);
    Array PThreadedCode22175 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22176, (Optr)&t_send1, (Optr)PSend22180, (Optr)&t_method_return);
    Method PMethod22174 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22175, 1, PSend22180);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22174, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22182 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22184 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22183 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22184, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22181 = new_Method_with(PArray22182, empty_Array, empty_Array, PThreadedCode22183, 2, PAssign22184, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22181, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22186 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22188 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22189 = new_Send((Optr)PSend22188, SMB_name, 0);
    // printOn:. 
    Send PSend22190 = new_Send((Optr)PSend22189, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22192 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend22194 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    // <<. 
    Send PSend22195 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22196 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22193 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend22194, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22195, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22196, (Optr)&t_method_return);
    Block PBlock22191 = new_Block_with(PArray22192, empty_Array, PThreadedCode22193, 3, PSend22194, PSend22195, PSend22196);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22197 = new_Send((Optr)PBlock22191, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22187 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22188, (Optr)&t_send0, (Optr)PSend22189, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22190, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22191, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22197, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22185 = new_Method_with(PArray22186, empty_Array, empty_Array, PThreadedCode22187, 3, PSend22190, PSend22197, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22185, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22199 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22203 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22204 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22203);
    Array PThreadedCode22202 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22203, (Optr)&t_send1, (Optr)PSend22204, (Optr)&t_block_return);
    Block PBlock22201 = new_Block_with(empty_Array, empty_Array, PThreadedCode22202, 1, PSend22204);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22205 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22201);
    Array PThreadedCode22200 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22201, (Optr)&t_send1, (Optr)PSend22205, (Optr)&t_method_return);
    Method PMethod22198 = new_Method_with(PArray22199, empty_Array, empty_Array, PThreadedCode22200, 1, PSend22205);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22198, WebClient_Core_WebSocket_Class);
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
    Array PArray22207 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22209 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22215 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22214 = new_Send((Optr)PSend22215, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22213 = new_Send((Optr)PSend22214, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22216 = new_String(L":");
    Constant string_22216_Const = new_Constant((Optr)string_22216);
    // ,. 
    Send PSend22212 = new_Send((Optr)PSend22213, SMB__append_, 1, (Optr)string_22216_Const);
    // socket. 
    Send PSend22218 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22217 = new_Send((Optr)PSend22218, SMB_remotePort, 0);
    // ,. 
    Send PSend22211 = new_Send((Optr)PSend22212, SMB__append_, 1, (Optr)PSend22217);
    Assign PAssign22210 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22211);
    Array PThreadedCode22208 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22209, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22210, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22215, (Optr)&t_send0, (Optr)PSend22214, (Optr)&t_send0, (Optr)PSend22213, (Optr)&t_push1, (Optr)string_22216, (Optr)&t_send1, (Optr)PSend22212, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22218, (Optr)&t_send0, (Optr)PSend22217, (Optr)&t_send1, (Optr)PSend22211, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22206 = new_Method_with(PArray22207, empty_Array, empty_Array, PThreadedCode22208, 3, PAssign22209, PAssign22210, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22206, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22220 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22222 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22221 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22222, (Optr)&t_method_return);
    Method PMethod22219 = new_Method_with(PArray22220, empty_Array, empty_Array, PThreadedCode22221, 1, PSend22222);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22219, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22224 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22226 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22225 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22226, (Optr)&t_method_return);
    Method PMethod22223 = new_Method_with(PArray22224, empty_Array, empty_Array, PThreadedCode22225, 1, PSend22226);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22223, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22228 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22230 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22231 = new_Send((Optr)PSend22230, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22229 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22230, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22231, (Optr)&t_method_return);
    Method PMethod22227 = new_Method_with(PArray22228, empty_Array, empty_Array, PThreadedCode22229, 1, PSend22231);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22227, HEADER(WebClient_Core_WebSocket_Class));
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