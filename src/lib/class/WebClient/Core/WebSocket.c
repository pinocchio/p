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
    Send PSend22041 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22045 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22046 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22045);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22047 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22048 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22047);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22049 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22044 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22045, (Optr)&t_send1, (Optr)PSend22046, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22047, (Optr)&t_send1, (Optr)PSend22048, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22049, (Optr)&t_block_return);
    Block PBlock22043 = new_Block_with(empty_Array, empty_Array, PThreadedCode22044, 3, PSend22046, PSend22048, PSend22049);
    // ifTrue:. 
    Send PSend22042 = new_Send((Optr)PSend22041, SMB_ifTrue_, 1, (Optr)PBlock22043);
    Array PThreadedCode22040 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22041, (Optr)&t_send_ifTrue_, (Optr)PSend22042, (Optr)PBlock22043, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22040, 2, PSend22042, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22039, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22051 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22055 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22056 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22055);
    Array PThreadedCode22054 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22055, (Optr)&t_send1, (Optr)PSend22056, (Optr)&t_block_return);
    Block PBlock22053 = new_Block_with(empty_Array, empty_Array, PThreadedCode22054, 1, PSend22056);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22057 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22053);
    Array PThreadedCode22052 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22053, (Optr)&t_send1, (Optr)PSend22057, (Optr)&t_method_return);
    Method PMethod22050 = new_Method_with(PArray22051, empty_Array, empty_Array, PThreadedCode22052, 1, PSend22057);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22050, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22059 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22062 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22066 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22069 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22070 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22068 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22069, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22070, (Optr)&t_block_return);
    Block PBlock22067 = new_Block_with(empty_Array, empty_Array, PThreadedCode22068, 2, PAssign22069, PSend22070);
    // ifNil:. 
    Send PSend22065 = new_Send((Optr)PSend22066, SMB_ifNil_, 1, (Optr)PBlock22067);
    Assign PAssign22064 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22065);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22072 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22071 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22072);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22073 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22079 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22078 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22079);
    Assign PAssign22077 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22078);
    Array PThreadedCode22076 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22077, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22079, (Optr)&t_send1, (Optr)PSend22078, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22075 = new_Block_with(empty_Array, empty_Array, PThreadedCode22076, 1, PAssign22077);
    String string_22082 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22082_Const = new_Constant((Optr)string_22082);
    // error:. 
    Send PSend22083 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22082_Const);
    Array PThreadedCode22081 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22082, (Optr)&t_send1, (Optr)PSend22083, (Optr)&t_block_return);
    Block PBlock22080 = new_Block_with(empty_Array, empty_Array, PThreadedCode22081, 1, PSend22083);
    // ifTrue:ifFalse:. 
    Send PSend22074 = new_Send((Optr)PSend22073, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22075, (Optr)PBlock22080);
    Array PThreadedCode22063 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22064, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22066, (Optr)&t_push_closure, (Optr)PBlock22067, (Optr)&t_send1, (Optr)PSend22065, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22071, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22072, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22073, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22074, (Optr)PBlock22075, (Optr)PBlock22080, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22061 = new_Block_with(PArray22062, empty_Array, PThreadedCode22063, 4, PAssign22064, PAssign22071, PSend22074, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22084 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22061);
    Array PThreadedCode22060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22061, (Optr)&t_send1, (Optr)PSend22084, (Optr)&t_method_return);
    Method PMethod22058 = new_Method_with(empty_Array, PArray22059, empty_Array, PThreadedCode22060, 1, PSend22084);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22058, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22086 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22088 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22089 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22088);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22090 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22093 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22094 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22095 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22094);
    Array PThreadedCode22092 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22093, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22094, (Optr)&t_send1, (Optr)PSend22095, (Optr)&t_block_return);
    Block PBlock22091 = new_Block_with(empty_Array, empty_Array, PThreadedCode22092, 2, PSend22093, PSend22095);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22097 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22099 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22099_Const = new_Constant((Optr)string_22099);
    // error:. 
    Send PSend22100 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22099_Const);
    Array PThreadedCode22098 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22099, (Optr)&t_send1, (Optr)PSend22100, (Optr)&t_method_return);
    Block PBlock22096 = new_Block_with(empty_Array, PArray22097, PThreadedCode22098, 1, PSend22100);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22101 = new_Send((Optr)PSend22090, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22091, (Optr)PBlock22096);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22102 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22087 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22088, (Optr)&t_send1, (Optr)PSend22089, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22090, (Optr)&t_push_closure, (Optr)PBlock22091, (Optr)&t_push_closure, (Optr)PBlock22096, (Optr)&t_send2, (Optr)PSend22101, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22102, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22085 = new_Method_with(PArray22086, empty_Array, empty_Array, PThreadedCode22087, 4, PSend22089, PSend22101, PSend22102, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22085, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22105 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22104 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22105, (Optr)&t_method_return);
    Method PMethod22103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22104, 1, PSend22105);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22103, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22109 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22117 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22116 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22117, (Optr)&t_block_return);
    Block PBlock22115 = new_Block_with(empty_Array, empty_Array, PThreadedCode22116, 1, PSend22117);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22120 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22121 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22125 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22126 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22124 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22126, (Optr)&t_block_return);
    Block PBlock22123 = new_Block_with(empty_Array, empty_Array, PThreadedCode22124, 2, PSend22125, PSend22126);
    // ifTrue:. 
    Send PSend22122 = new_Send((Optr)PSend22121, SMB_ifTrue_, 1, (Optr)PBlock22123);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22127 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22119 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22120, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22121, (Optr)&t_send_ifTrue_, (Optr)PSend22122, (Optr)PBlock22123, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22127, (Optr)&t_block_return);
    Block PBlock22118 = new_Block_with(empty_Array, empty_Array, PThreadedCode22119, 3, PSend22120, PSend22122, PSend22127);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22128 = new_Send((Optr)PBlock22115, SMB_whileTrue_, 1, (Optr)PBlock22118);
    Array PThreadedCode22114 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22115, (Optr)&t_push_closure, (Optr)PBlock22118, (Optr)&t_send1, (Optr)PSend22128, (Optr)&t_block_return);
    Block PBlock22113 = new_Block_with(empty_Array, empty_Array, PThreadedCode22114, 1, PSend22128);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22130 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22132 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22131 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22132, (Optr)&t_method_return);
    Block PBlock22129 = new_Block_with(PArray22130, empty_Array, PThreadedCode22131, 1, PSend22132);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22133 = new_Send((Optr)PBlock22113, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22129);
    Array PThreadedCode22112 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22113, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22129, (Optr)&t_send2, (Optr)PSend22133, (Optr)&t_block_return);
    Block PBlock22111 = new_Block_with(empty_Array, empty_Array, PThreadedCode22112, 1, PSend22133);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22138 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22139 = new_Send((Optr)PSend22138, SMB_destroy, 0);
    Array PThreadedCode22137 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22138, (Optr)&t_send0, (Optr)PSend22139, (Optr)&t_block_return);
    Block PBlock22136 = new_Block_with(empty_Array, empty_Array, PThreadedCode22137, 1, PSend22139);
    Array PArray22141 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22143 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22142 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22143, (Optr)&t_method_return);
    Block PBlock22140 = new_Block_with(PArray22141, empty_Array, PThreadedCode22142, 1, PSend22143);
    // on:do:. 
    Send PSend22144 = new_Send((Optr)PBlock22136, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22140);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22145 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22135 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22136, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22140, (Optr)&t_send2, (Optr)PSend22144, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22145, (Optr)&t_block_return);
    Block PBlock22134 = new_Block_with(empty_Array, empty_Array, PThreadedCode22135, 2, PSend22144, PSend22145);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22146 = new_Send((Optr)PBlock22111, SMB_ensure_, 1, (Optr)PBlock22134);
    Array PThreadedCode22110 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22111, (Optr)&t_push_closure, (Optr)PBlock22134, (Optr)&t_send1, (Optr)PSend22146, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22108 = new_Block_with(PArray22109, empty_Array, PThreadedCode22110, 2, PSend22146, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22147 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22108);
    Array PThreadedCode22107 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22108, (Optr)&t_send1, (Optr)PSend22147, (Optr)&t_method_return);
    Method PMethod22106 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22107, 1, PSend22147);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22106, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22149 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22151 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22150 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22151, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22148 = new_Method_with(PArray22149, empty_Array, empty_Array, PThreadedCode22150, 2, PAssign22151, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22148, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22153 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22155 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22154 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22155, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22152 = new_Method_with(PArray22153, empty_Array, empty_Array, PThreadedCode22154, 2, PAssign22155, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22152, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22162 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22161 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22162, (Optr)&t_block_return);
    Block PBlock22160 = new_Block_with(empty_Array, empty_Array, PThreadedCode22161, 1, PSend22162);
    // fork. 
    Send PSend22159 = new_Send((Optr)PBlock22160, SMB_fork, 0);
    Assign PAssign22158 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22159);
    Array PThreadedCode22157 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22158, (Optr)&t_push_closure, (Optr)PBlock22160, (Optr)&t_send0, (Optr)PSend22159, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22157, 2, PAssign22158, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22156, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22167 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22168 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22167);
    Array PThreadedCode22166 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22167, (Optr)&t_send1, (Optr)PSend22168, (Optr)&t_block_return);
    Block PBlock22165 = new_Block_with(empty_Array, empty_Array, PThreadedCode22166, 1, PSend22168);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22169 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22165);
    Array PThreadedCode22164 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22165, (Optr)&t_send1, (Optr)PSend22169, (Optr)&t_method_return);
    Method PMethod22163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22164, 1, PSend22169);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22163, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22171 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22173 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22172 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22173, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22170 = new_Method_with(PArray22171, empty_Array, empty_Array, PThreadedCode22172, 2, PAssign22173, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22170, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22175 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22177 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22178 = new_Send((Optr)PSend22177, SMB_name, 0);
    // printOn:. 
    Send PSend22179 = new_Send((Optr)PSend22178, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22181 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22183 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // <<. 
    Send PSend22184 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend22185 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode22182 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22184, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend22185, (Optr)&t_method_return);
    Block PBlock22180 = new_Block_with(PArray22181, empty_Array, PThreadedCode22182, 3, PSend22183, PSend22184, PSend22185);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22186 = new_Send((Optr)PBlock22180, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22176 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22177, (Optr)&t_send0, (Optr)PSend22178, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22179, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22180, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22186, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22174 = new_Method_with(PArray22175, empty_Array, empty_Array, PThreadedCode22176, 3, PSend22179, PSend22186, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22174, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22188 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22192 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22193 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22192);
    Array PThreadedCode22191 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22192, (Optr)&t_send1, (Optr)PSend22193, (Optr)&t_block_return);
    Block PBlock22190 = new_Block_with(empty_Array, empty_Array, PThreadedCode22191, 1, PSend22193);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22194 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22190);
    Array PThreadedCode22189 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22190, (Optr)&t_send1, (Optr)PSend22194, (Optr)&t_method_return);
    Method PMethod22187 = new_Method_with(PArray22188, empty_Array, empty_Array, PThreadedCode22189, 1, PSend22194);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22187, WebClient_Core_WebSocket_Class);
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
    Array PArray22196 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22198 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22204 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22203 = new_Send((Optr)PSend22204, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22202 = new_Send((Optr)PSend22203, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22205 = new_String(L":");
    Constant string_22205_Const = new_Constant((Optr)string_22205);
    // ,. 
    Send PSend22201 = new_Send((Optr)PSend22202, SMB__append_, 1, (Optr)string_22205_Const);
    // socket. 
    Send PSend22207 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22206 = new_Send((Optr)PSend22207, SMB_remotePort, 0);
    // ,. 
    Send PSend22200 = new_Send((Optr)PSend22201, SMB__append_, 1, (Optr)PSend22206);
    Assign PAssign22199 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22200);
    Array PThreadedCode22197 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22198, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22199, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22204, (Optr)&t_send0, (Optr)PSend22203, (Optr)&t_send0, (Optr)PSend22202, (Optr)&t_push1, (Optr)string_22205, (Optr)&t_send1, (Optr)PSend22201, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22207, (Optr)&t_send0, (Optr)PSend22206, (Optr)&t_send1, (Optr)PSend22200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22195 = new_Method_with(PArray22196, empty_Array, empty_Array, PThreadedCode22197, 3, PAssign22198, PAssign22199, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22195, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22209 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22211 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22210 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22211, (Optr)&t_method_return);
    Method PMethod22208 = new_Method_with(PArray22209, empty_Array, empty_Array, PThreadedCode22210, 1, PSend22211);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22208, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22213 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22215 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22214 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22215, (Optr)&t_method_return);
    Method PMethod22212 = new_Method_with(PArray22213, empty_Array, empty_Array, PThreadedCode22214, 1, PSend22215);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22212, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22217 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22219 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22220 = new_Send((Optr)PSend22219, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22218 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22219, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22220, (Optr)&t_method_return);
    Method PMethod22216 = new_Method_with(PArray22217, empty_Array, empty_Array, PThreadedCode22218, 1, PSend22220);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22216, HEADER(WebClient_Core_WebSocket_Class));
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