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
    Send PSend22077 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22081 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22082 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22081);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend22083 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22084 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22083);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22085 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22080 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22081, (Optr)&t_send1, (Optr)PSend22082, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22083, (Optr)&t_send1, (Optr)PSend22084, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22085, (Optr)&t_block_return);
    Block PBlock22079 = new_Block_with(empty_Array, empty_Array, PThreadedCode22080, 3, PSend22082, PSend22084, PSend22085);
    // ifTrue:. 
    Send PSend22078 = new_Send((Optr)PSend22077, SMB_ifTrue_, 1, (Optr)PBlock22079);
    Array PThreadedCode22076 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22077, (Optr)&t_send_ifTrue_, (Optr)PSend22078, (Optr)PBlock22079, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22076, 2, PSend22078, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22075, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray22087 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22091 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22092 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22091);
    Array PThreadedCode22090 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend22091, (Optr)&t_send1, (Optr)PSend22092, (Optr)&t_block_return);
    Block PBlock22089 = new_Block_with(empty_Array, empty_Array, PThreadedCode22090, 1, PSend22092);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22093 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock22089);
    Array PThreadedCode22088 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock22089, (Optr)&t_send1, (Optr)PSend22093, (Optr)&t_method_return);
    Method PMethod22086 = new_Method_with(PArray22087, empty_Array, empty_Array, PThreadedCode22088, 1, PSend22093);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod22086, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray22095 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22098 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend22102 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign22105 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22106 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22104 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22105, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22106, (Optr)&t_block_return);
    Block PBlock22103 = new_Block_with(empty_Array, empty_Array, PThreadedCode22104, 2, PAssign22105, PSend22106);
    // ifNil:. 
    Send PSend22101 = new_Send((Optr)PSend22102, SMB_ifNil_, 1, (Optr)PBlock22103);
    Assign PAssign22100 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend22101);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22108 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign22107 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend22108);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22109 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22115 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22114 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22115);
    Assign PAssign22113 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22114);
    Array PThreadedCode22112 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22113, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22115, (Optr)&t_send1, (Optr)PSend22114, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22111 = new_Block_with(empty_Array, empty_Array, PThreadedCode22112, 1, PAssign22113);
    String string_22118 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22118_Const = new_Constant((Optr)string_22118);
    // error:. 
    Send PSend22119 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22118_Const);
    Array PThreadedCode22117 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22118, (Optr)&t_send1, (Optr)PSend22119, (Optr)&t_block_return);
    Block PBlock22116 = new_Block_with(empty_Array, empty_Array, PThreadedCode22117, 1, PSend22119);
    // ifTrue:ifFalse:. 
    Send PSend22110 = new_Send((Optr)PSend22109, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22111, (Optr)PBlock22116);
    Array PThreadedCode22099 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign22100, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22102, (Optr)&t_push_closure, (Optr)PBlock22103, (Optr)&t_send1, (Optr)PSend22101, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22107, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend22108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22109, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22110, (Optr)PBlock22111, (Optr)PBlock22116, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22097 = new_Block_with(PArray22098, empty_Array, PThreadedCode22099, 4, PAssign22100, PAssign22107, PSend22110, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22120 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22097);
    Array PThreadedCode22096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22097, (Optr)&t_send1, (Optr)PSend22120, (Optr)&t_method_return);
    Method PMethod22094 = new_Method_with(empty_Array, PArray22095, empty_Array, PThreadedCode22096, 1, PSend22120);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod22094, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22122 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22124 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22125 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22124);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22126 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22129 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22130 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22131 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22130);
    Array PThreadedCode22128 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22129, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22130, (Optr)&t_send1, (Optr)PSend22131, (Optr)&t_block_return);
    Block PBlock22127 = new_Block_with(empty_Array, empty_Array, PThreadedCode22128, 2, PSend22129, PSend22131);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22133 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22135 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22135_Const = new_Constant((Optr)string_22135);
    // error:. 
    Send PSend22136 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22135_Const);
    Array PThreadedCode22134 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22135, (Optr)&t_send1, (Optr)PSend22136, (Optr)&t_method_return);
    Block PBlock22132 = new_Block_with(empty_Array, PArray22133, PThreadedCode22134, 1, PSend22136);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22137 = new_Send((Optr)PSend22126, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22127, (Optr)PBlock22132);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22138 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22123 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22124, (Optr)&t_send1, (Optr)PSend22125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22126, (Optr)&t_push_closure, (Optr)PBlock22127, (Optr)&t_push_closure, (Optr)PBlock22132, (Optr)&t_send2, (Optr)PSend22137, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22138, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22121 = new_Method_with(PArray22122, empty_Array, empty_Array, PThreadedCode22123, 4, PSend22125, PSend22137, PSend22138, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22121, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22141 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22140 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22141, (Optr)&t_method_return);
    Method PMethod22139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22140, 1, PSend22141);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22139, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22145 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22153 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22152 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22153, (Optr)&t_block_return);
    Block PBlock22151 = new_Block_with(empty_Array, empty_Array, PThreadedCode22152, 1, PSend22153);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22156 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22157 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22161 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22162 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22160 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22161, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22162, (Optr)&t_block_return);
    Block PBlock22159 = new_Block_with(empty_Array, empty_Array, PThreadedCode22160, 2, PSend22161, PSend22162);
    // ifTrue:. 
    Send PSend22158 = new_Send((Optr)PSend22157, SMB_ifTrue_, 1, (Optr)PBlock22159);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22163 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22155 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22156, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22157, (Optr)&t_send_ifTrue_, (Optr)PSend22158, (Optr)PBlock22159, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22163, (Optr)&t_block_return);
    Block PBlock22154 = new_Block_with(empty_Array, empty_Array, PThreadedCode22155, 3, PSend22156, PSend22158, PSend22163);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22164 = new_Send((Optr)PBlock22151, SMB_whileTrue_, 1, (Optr)PBlock22154);
    Array PThreadedCode22150 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22151, (Optr)&t_push_closure, (Optr)PBlock22154, (Optr)&t_send1, (Optr)PSend22164, (Optr)&t_block_return);
    Block PBlock22149 = new_Block_with(empty_Array, empty_Array, PThreadedCode22150, 1, PSend22164);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22166 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22168 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22167 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22168, (Optr)&t_method_return);
    Block PBlock22165 = new_Block_with(PArray22166, empty_Array, PThreadedCode22167, 1, PSend22168);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22169 = new_Send((Optr)PBlock22149, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22165);
    Array PThreadedCode22148 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22149, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22165, (Optr)&t_send2, (Optr)PSend22169, (Optr)&t_block_return);
    Block PBlock22147 = new_Block_with(empty_Array, empty_Array, PThreadedCode22148, 1, PSend22169);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22174 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22175 = new_Send((Optr)PSend22174, SMB_destroy, 0);
    Array PThreadedCode22173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22174, (Optr)&t_send0, (Optr)PSend22175, (Optr)&t_block_return);
    Block PBlock22172 = new_Block_with(empty_Array, empty_Array, PThreadedCode22173, 1, PSend22175);
    Array PArray22177 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22179 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22178 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22179, (Optr)&t_method_return);
    Block PBlock22176 = new_Block_with(PArray22177, empty_Array, PThreadedCode22178, 1, PSend22179);
    // on:do:. 
    Send PSend22180 = new_Send((Optr)PBlock22172, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22176);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22181 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22171 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22172, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22176, (Optr)&t_send2, (Optr)PSend22180, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22181, (Optr)&t_block_return);
    Block PBlock22170 = new_Block_with(empty_Array, empty_Array, PThreadedCode22171, 2, PSend22180, PSend22181);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22182 = new_Send((Optr)PBlock22147, SMB_ensure_, 1, (Optr)PBlock22170);
    Array PThreadedCode22146 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22147, (Optr)&t_push_closure, (Optr)PBlock22170, (Optr)&t_send1, (Optr)PSend22182, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22144 = new_Block_with(PArray22145, empty_Array, PThreadedCode22146, 2, PSend22182, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22183 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22144);
    Array PThreadedCode22143 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22144, (Optr)&t_send1, (Optr)PSend22183, (Optr)&t_method_return);
    Method PMethod22142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22143, 1, PSend22183);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22142, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22185 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22187 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22186 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22187, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22184 = new_Method_with(PArray22185, empty_Array, empty_Array, PThreadedCode22186, 2, PAssign22187, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22184, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22189 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22191 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22190 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22191, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22188 = new_Method_with(PArray22189, empty_Array, empty_Array, PThreadedCode22190, 2, PAssign22191, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22188, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22198 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22197 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22198, (Optr)&t_block_return);
    Block PBlock22196 = new_Block_with(empty_Array, empty_Array, PThreadedCode22197, 1, PSend22198);
    // fork. 
    Send PSend22195 = new_Send((Optr)PBlock22196, SMB_fork, 0);
    Assign PAssign22194 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22195);
    Array PThreadedCode22193 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22194, (Optr)&t_push_closure, (Optr)PBlock22196, (Optr)&t_send0, (Optr)PSend22195, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22192 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22193, 2, PAssign22194, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22192, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22203 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22204 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22203);
    Array PThreadedCode22202 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22203, (Optr)&t_send1, (Optr)PSend22204, (Optr)&t_block_return);
    Block PBlock22201 = new_Block_with(empty_Array, empty_Array, PThreadedCode22202, 1, PSend22204);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22205 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22201);
    Array PThreadedCode22200 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22201, (Optr)&t_send1, (Optr)PSend22205, (Optr)&t_method_return);
    Method PMethod22199 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22200, 1, PSend22205);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22199, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22207 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22209 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22208 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22209, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22206 = new_Method_with(PArray22207, empty_Array, empty_Array, PThreadedCode22208, 2, PAssign22209, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22206, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22211 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22213 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22214 = new_Send((Optr)PSend22213, SMB_name, 0);
    // printOn:. 
    Send PSend22215 = new_Send((Optr)PSend22214, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22217 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22219 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // <<. 
    Send PSend22220 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend22221 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode22218 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend22221, (Optr)&t_method_return);
    Block PBlock22216 = new_Block_with(PArray22217, empty_Array, PThreadedCode22218, 3, PSend22219, PSend22220, PSend22221);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22222 = new_Send((Optr)PBlock22216, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22212 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22213, (Optr)&t_send0, (Optr)PSend22214, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22215, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22216, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22222, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22210 = new_Method_with(PArray22211, empty_Array, empty_Array, PThreadedCode22212, 3, PSend22215, PSend22222, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22210, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22224 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22228 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22229 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22228);
    Array PThreadedCode22227 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22228, (Optr)&t_send1, (Optr)PSend22229, (Optr)&t_block_return);
    Block PBlock22226 = new_Block_with(empty_Array, empty_Array, PThreadedCode22227, 1, PSend22229);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22230 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22226);
    Array PThreadedCode22225 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22226, (Optr)&t_send1, (Optr)PSend22230, (Optr)&t_method_return);
    Method PMethod22223 = new_Method_with(PArray22224, empty_Array, empty_Array, PThreadedCode22225, 1, PSend22230);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22223, WebClient_Core_WebSocket_Class);
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
    Array PArray22232 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22234 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22240 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22239 = new_Send((Optr)PSend22240, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22238 = new_Send((Optr)PSend22239, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22241 = new_String(L":");
    Constant string_22241_Const = new_Constant((Optr)string_22241);
    // ,. 
    Send PSend22237 = new_Send((Optr)PSend22238, SMB__append_, 1, (Optr)string_22241_Const);
    // socket. 
    Send PSend22243 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22242 = new_Send((Optr)PSend22243, SMB_remotePort, 0);
    // ,. 
    Send PSend22236 = new_Send((Optr)PSend22237, SMB__append_, 1, (Optr)PSend22242);
    Assign PAssign22235 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22236);
    Array PThreadedCode22233 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22234, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22235, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22240, (Optr)&t_send0, (Optr)PSend22239, (Optr)&t_send0, (Optr)PSend22238, (Optr)&t_push1, (Optr)string_22241, (Optr)&t_send1, (Optr)PSend22237, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22243, (Optr)&t_send0, (Optr)PSend22242, (Optr)&t_send1, (Optr)PSend22236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22231 = new_Method_with(PArray22232, empty_Array, empty_Array, PThreadedCode22233, 3, PAssign22234, PAssign22235, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22231, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22245 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22247 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22246 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22247, (Optr)&t_method_return);
    Method PMethod22244 = new_Method_with(PArray22245, empty_Array, empty_Array, PThreadedCode22246, 1, PSend22247);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22244, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22249 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22251 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22251, (Optr)&t_method_return);
    Method PMethod22248 = new_Method_with(PArray22249, empty_Array, empty_Array, PThreadedCode22250, 1, PSend22251);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22248, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22253 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22255 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22256 = new_Send((Optr)PSend22255, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22254 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22255, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22256, (Optr)&t_method_return);
    Method PMethod22252 = new_Method_with(PArray22253, empty_Array, empty_Array, PThreadedCode22254, 1, PSend22256);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22252, HEADER(WebClient_Core_WebSocket_Class));
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