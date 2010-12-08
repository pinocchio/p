#include <lib/class/WebClient/Core/WebMessage.h>


Optr slot_WebClient_Core_WebMessage_Class_class_statusCodes;
Optr layout_WebClient_Core_WebMessage_Class_class;
Optr slot_WebClient_Core_WebMessage_stream;
Optr slot_WebClient_Core_WebMessage_protocol;
Optr slot_WebClient_Core_WebMessage_headers;
Optr slot_WebClient_Core_WebMessage_content;
Optr layout_WebClient_Core_WebMessage;


static void init_SMB_contentType() {
    Symbol SMB_contentType = new_Symbol(L"contentType");
    String string_23408 = new_String(L"Content-Type");
    String string_23411 = new_String(L"application/octet-stream");
    Array PThreadedCode23410 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23411, (Optr)&t_block_return);
    Constant string_23411_Const = new_Constant((Optr)string_23411);
    Block PBlock23409 = new_Block_with(empty_Array, empty_Array, PThreadedCode23410, 1, string_23411_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23408_Const = new_Constant((Optr)string_23408);
    // headerAt:ifAbsent:. 
    Send PSend23412 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23408_Const, (Optr)PBlock23409);
    Array PThreadedCode23407 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23408, (Optr)&t_push_closure, (Optr)PBlock23409, (Optr)&t_send2, (Optr)PSend23412, (Optr)&t_method_return);
    Method PMethod23406 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23407, 1, PSend23412);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod23406, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23417 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode23416 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23417, (Optr)&t_block_return);
    Block PBlock23415 = new_Block_with(empty_Array, empty_Array, PThreadedCode23416, 1, PSend23417);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23418 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23415);
    Array PThreadedCode23414 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23415, (Optr)&t_send1, (Optr)PSend23418, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23414, 2, PSend23418, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod23413, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode23420 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23419 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23420, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod23419, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23424 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend23426 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23430 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23429 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23430, (Optr)&t_block_return);
    Block PBlock23428 = new_Block_with(empty_Array, empty_Array, PThreadedCode23429, 1, PSend23430);
    // ifFalse:. 
    Send PSend23427 = new_Send((Optr)PSend23426, SMB_ifFalse_, 1, (Optr)PBlock23428);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend23431 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend23432 = new_Send((Optr)PSend23431, SMB_remoteAddress, 0);
    Array PThreadedCode23425 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend23426, (Optr)&t_send_ifFalse_, (Optr)PSend23427, (Optr)PBlock23428, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23431, (Optr)&t_send0, (Optr)PSend23432, (Optr)&t_method_return);
    Block PBlock23423 = new_Block_with(PArray23424, empty_Array, PThreadedCode23425, 2, PSend23427, PSend23432);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23433 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23423);
    Array PThreadedCode23422 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23423, (Optr)&t_send1, (Optr)PSend23433, (Optr)&t_method_return);
    Method PMethod23421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23422, 1, PSend23433);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod23421, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23435 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign23437 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23436 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23437, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23434 = new_Method_with(PArray23435, empty_Array, empty_Array, PThreadedCode23436, 2, PAssign23437, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod23434, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23439 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray23440 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23443 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23442 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend23443);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray23445 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23447 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode23446 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend23447, (Optr)&t_method_return);
    Block PBlock23444 = new_Block_with(PArray23445, empty_Array, PThreadedCode23446, 1, PSend23447);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23448 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23444);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23449 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23452 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23451 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23452, (Optr)&t_block_return);
    Block PBlock23450 = new_Block_with(empty_Array, empty_Array, PThreadedCode23451, 1, PSend23452);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend23453 = new_Send((Optr)PSend23449, SMB_ifEmpty_, 1, (Optr)PBlock23450);
    Array PThreadedCode23441 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign23442, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23443, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23444, (Optr)&t_send2, (Optr)PSend23448, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend23449, (Optr)&t_push_closure, (Optr)PBlock23450, (Optr)&t_send1, (Optr)PSend23453, (Optr)&t_method_return);
    Method PMethod23438 = new_Method_with(PArray23439, PArray23440, empty_Array, PThreadedCode23441, 3, PAssign23442, PSend23448, PSend23453);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod23438, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23455 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_23459 = new_String(L"");
    Array PThreadedCode23458 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23459, (Optr)&t_block_return);
    Constant string_23459_Const = new_Constant((Optr)string_23459);
    Block PBlock23457 = new_Block_with(empty_Array, empty_Array, PThreadedCode23458, 1, string_23459_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend23460 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23457);
    Array PThreadedCode23456 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23457, (Optr)&t_send2, (Optr)PSend23460, (Optr)&t_method_return);
    Method PMethod23454 = new_Method_with(PArray23455, empty_Array, empty_Array, PThreadedCode23456, 1, PSend23460);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod23454, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray23462 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray23463 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign23465 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23467 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign23466 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23467);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend23471 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign23470 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend23471);
    String string_23475 = new_String(L"16r");
    Constant string_23475_Const = new_Constant((Optr)string_23475);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend23476 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend23474 = new_Send((Optr)string_23475_Const, SMB__append_, 1, (Optr)PSend23476);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend23473 = new_Send((Optr)PSend23474, SMB_asNumber, 0);
    Assign PAssign23472 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend23473);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23477 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode23469 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign23470, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend23471, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23472, (Optr)&t_push1, (Optr)string_23475, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend23476, (Optr)&t_send1, (Optr)PSend23474, (Optr)&t_send0, (Optr)PSend23473, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23477, (Optr)&t_block_return);
    Block PBlock23468 = new_Block_with(empty_Array, empty_Array, PThreadedCode23469, 3, PAssign23470, PAssign23472, PSend23477);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23482 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23481 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23482, (Optr)&t_block_return);
    Block PBlock23480 = new_Block_with(empty_Array, empty_Array, PThreadedCode23481, 1, PSend23482);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23483 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23480);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23484 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend23485 = new_Send((Optr)PSend23484, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23491 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23490 = new_Send((Optr)PSend23491, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23489 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23490);
    Array PThreadedCode23488 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23489, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23491, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23490, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23487 = new_Block_with(empty_Array, empty_Array, PThreadedCode23488, 1, PAssign23489);
    // ifFalse:. 
    Send PSend23486 = new_Send((Optr)PSend23485, SMB_ifFalse_, 1, (Optr)PBlock23487);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23493 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign23492 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23493);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23494 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend23495 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend23497 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23496 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend23497);
    Array PThreadedCode23479 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23480, (Optr)&t_send1, (Optr)PSend23483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23484, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23485, (Optr)&t_send_ifFalse_, (Optr)PSend23486, (Optr)PBlock23487, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23492, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend23494, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23495, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23496, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23497, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23478 = new_Block_with(empty_Array, empty_Array, PThreadedCode23479, 6, PSend23483, PSend23486, PAssign23492, PSend23494, PSend23495, PAssign23496);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23498 = new_Send((Optr)PBlock23468, SMB_whileFalse_, 1, (Optr)PBlock23478);
    // skip:. 
    Send PSend23499 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23500 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23503 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23502 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23503, (Optr)&t_block_return);
    Block PBlock23501 = new_Block_with(empty_Array, empty_Array, PThreadedCode23502, 1, PSend23503);
    // ifNotNil:. 
    Send PSend23504 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23501);
    Array PThreadedCode23464 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23465, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23466, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23467, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23468, (Optr)&t_push_closure, (Optr)PBlock23478, (Optr)&t_send1, (Optr)PSend23498, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23499, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23500, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23501, (Optr)&t_send1, (Optr)PSend23504, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23461 = new_Method_with(PArray23462, PArray23463, empty_Array, PThreadedCode23464, 7, PAssign23465, PAssign23466, PSend23498, PSend23499, PSend23500, PSend23504, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod23461, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23506 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23509 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23511 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23512 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23513 = new_Send((Optr)PSend23511, SMB__equals_, 1, (Optr)PSend23512);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23517 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode23516 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23517, (Optr)&t_block_return);
    Block PBlock23515 = new_Block_with(empty_Array, empty_Array, PThreadedCode23516, 1, PSend23517);
    // ifTrue:. 
    Send PSend23514 = new_Send((Optr)PSend23513, SMB_ifTrue_, 1, (Optr)PBlock23515);
    Array PThreadedCode23510 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend23511, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend23512, (Optr)&t_send1, (Optr)PSend23513, (Optr)&t_send_ifTrue_, (Optr)PSend23514, (Optr)PBlock23515, (Optr)&t_method_return);
    Block PBlock23508 = new_Block_with(PArray23509, empty_Array, PThreadedCode23510, 1, PSend23514);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23518 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23508);
    Array PThreadedCode23507 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23508, (Optr)&t_send1, (Optr)PSend23518, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23505 = new_Method_with(PArray23506, empty_Array, empty_Array, PThreadedCode23507, 2, PSend23518, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod23505, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23520 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23522 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23523 = new_Send((Optr)PSend23522, SMB_name, 0);
    // printOn:. 
    Send PSend23524 = new_Send((Optr)PSend23523, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5738 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5738_Const = new_Constant((Optr)char_5738);
    // <<. 
    Send PSend23525 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5738_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23526 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend23527 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode23521 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23522, (Optr)&t_send0, (Optr)PSend23523, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23524, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5738, (Optr)&t_send1, (Optr)PSend23525, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23526, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend23527, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23519 = new_Method_with(PArray23520, empty_Array, empty_Array, PThreadedCode23521, 5, PSend23524, PSend23525, PSend23526, PSend23527, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod23519, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23531 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23533 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23536 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23535 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23536, (Optr)&t_block_return);
    Block PBlock23534 = new_Block_with(empty_Array, empty_Array, PThreadedCode23535, 1, PSend23536);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23533_Const = new_Constant((Optr)string_23533);
    // headerAt:ifAbsent:. 
    Send PSend23537 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23533_Const, (Optr)PBlock23534);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23538 = new_Send((Optr)PSend23537, SMB_asInteger, 0);
    Array PThreadedCode23532 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23533, (Optr)&t_push_closure, (Optr)PBlock23534, (Optr)&t_send2, (Optr)PSend23537, (Optr)&t_send0, (Optr)PSend23538, (Optr)&t_method_return);
    Block PBlock23530 = new_Block_with(PArray23531, empty_Array, PThreadedCode23532, 1, PSend23538);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23539 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23530);
    Array PThreadedCode23529 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23530, (Optr)&t_send1, (Optr)PSend23539, (Optr)&t_method_return);
    Method PMethod23528 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23529, 1, PSend23539);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23528, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23541 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23545 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23546 = new_Send((Optr)PSend23545, SMB_asArray, 0);
    Array PThreadedCode23544 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23545, (Optr)&t_send0, (Optr)PSend23546, (Optr)&t_block_return);
    Block PBlock23543 = new_Block_with(empty_Array, empty_Array, PThreadedCode23544, 1, PSend23546);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23547 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23543);
    Array PThreadedCode23542 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23543, (Optr)&t_send2, (Optr)PSend23547, (Optr)&t_method_return);
    Method PMethod23540 = new_Method_with(PArray23541, empty_Array, empty_Array, PThreadedCode23542, 1, PSend23547);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23540, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23549 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23551 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23550 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23551, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23548 = new_Method_with(PArray23549, empty_Array, empty_Array, PThreadedCode23550, 2, PAssign23551, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23548, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23553 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23555 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23555_Const = new_Constant((Optr)string_23555);
    // headerAt:put:. 
    Send PSend23556 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23555_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23554 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23555, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23556, (Optr)&t_method_return);
    Method PMethod23552 = new_Method_with(PArray23553, empty_Array, empty_Array, PThreadedCode23554, 1, PSend23556);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23552, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23558 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23559 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23562 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23564 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23564_Const = new_Constant((Optr)string_23564);
    // headerAt:. 
    Send PSend23565 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23564_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23567 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23569 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23569_Const = new_Constant((Optr)string_23569);
    // =. 
    Send PSend23570 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23569_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23574 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23575 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23574);
    Array PThreadedCode23573 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23574, (Optr)&t_send1, (Optr)PSend23575, (Optr)&t_block_return);
    Block PBlock23572 = new_Block_with(empty_Array, empty_Array, PThreadedCode23573, 1, PSend23575);
    String string_23578 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23578_Const = new_Constant((Optr)string_23578);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23579 = new_Send((Optr)string_23578_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23580 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23579);
    Array PThreadedCode23577 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23578, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23579, (Optr)&t_send1, (Optr)PSend23580, (Optr)&t_block_return);
    Block PBlock23576 = new_Block_with(empty_Array, empty_Array, PThreadedCode23577, 1, PSend23580);
    // ifTrue:ifFalse:. 
    Send PSend23571 = new_Send((Optr)PSend23570, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23572, (Optr)PBlock23576);
    Array PThreadedCode23568 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23569, (Optr)&t_send1, (Optr)PSend23570, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23571, (Optr)PBlock23572, (Optr)PBlock23576, (Optr)&t_method_return);
    Block PBlock23566 = new_Block_with(PArray23567, empty_Array, PThreadedCode23568, 1, PSend23571);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23581 = new_Send((Optr)PSend23565, SMB_ifNotEmpty_, 1, (Optr)PBlock23566);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23582 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23586 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23585 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23586, (Optr)&t_block_return);
    Block PBlock23584 = new_Block_with(empty_Array, empty_Array, PThreadedCode23585, 1, PSend23586);
    // ifTrue:. 
    Send PSend23583 = new_Send((Optr)PSend23582, SMB_ifTrue_, 1, (Optr)PBlock23584);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23588 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23587 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23588);
    Assign PAssign23589 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23593 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23592 = new_Block_with(empty_Array, empty_Array, PThreadedCode23593, 1, int_0_Const);
    // ifNil:. 
    Send PSend23591 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23592);
    Assign PAssign23590 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23591);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23596 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23599 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23600 = new_Send((Optr)PSend23599, SMB_not, 0);
    Array PThreadedCode23598 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23599, (Optr)&t_send0, (Optr)PSend23600, (Optr)&t_block_return);
    Block PBlock23597 = new_Block_with(empty_Array, empty_Array, PThreadedCode23598, 1, PSend23600);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23601 = new_Send((Optr)PSend23596, SMB_and_, 1, (Optr)PBlock23597);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23604 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23603 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23604, (Optr)&t_block_return);
    Block PBlock23602 = new_Block_with(empty_Array, empty_Array, PThreadedCode23603, 1, PSend23604);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23605 = new_Send((Optr)PSend23601, SMB_or_, 1, (Optr)PBlock23602);
    Array PThreadedCode23595 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23596, (Optr)&t_push_closure, (Optr)PBlock23597, (Optr)&t_send1, (Optr)PSend23601, (Optr)&t_push_closure, (Optr)PBlock23602, (Optr)&t_send1, (Optr)PSend23605, (Optr)&t_block_return);
    Block PBlock23594 = new_Block_with(empty_Array, empty_Array, PThreadedCode23595, 1, PSend23605);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23610 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23609 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23610, (Optr)&t_block_return);
    Block PBlock23608 = new_Block_with(empty_Array, empty_Array, PThreadedCode23609, 1, PSend23610);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23611 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23608);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23615 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23614 = new_Block_with(empty_Array, empty_Array, PThreadedCode23615, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23618 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23617 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23618, (Optr)&t_block_return);
    Block PBlock23616 = new_Block_with(empty_Array, empty_Array, PThreadedCode23617, 1, PSend23618);
    // ifNil:ifNotNil:. 
    Send PSend23613 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23614, (Optr)PBlock23616);
    Assign PAssign23612 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23613);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23619 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23620 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23619);
    // size. 
    Send PSend23625 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23624 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23625);
    Array PThreadedCode23623 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23624, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23625, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23622 = new_Block_with(empty_Array, empty_Array, PThreadedCode23623, 1, PAssign23624);
    // ifTrue:. 
    Send PSend23621 = new_Send((Optr)PSend23620, SMB_ifTrue_, 1, (Optr)PBlock23622);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23627 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23626 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23627);
    // size. 
    Send PSend23628 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23629 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23628);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23633 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23632 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23633, (Optr)&t_block_return);
    Block PBlock23631 = new_Block_with(empty_Array, empty_Array, PThreadedCode23632, 1, PSend23633);
    Array PThreadedCode23635 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23634 = new_Block_with(empty_Array, empty_Array, PThreadedCode23635, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23630 = new_Send((Optr)PSend23629, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23631, (Optr)PBlock23634);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23636 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23630);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23639 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23638 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23639);
    Assign PAssign23637 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23638);
    Array PThreadedCode23607 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23608, (Optr)&t_send1, (Optr)PSend23611, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23612, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23614, (Optr)&t_push_closure, (Optr)PBlock23616, (Optr)&t_send2, (Optr)PSend23613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23619, (Optr)&t_send1, (Optr)PSend23620, (Optr)&t_send_ifTrue_, (Optr)PSend23621, (Optr)PBlock23622, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23626, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23627, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23628, (Optr)&t_send1, (Optr)PSend23629, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23630, (Optr)PBlock23631, (Optr)PBlock23634, (Optr)&t_send1, (Optr)PSend23636, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23637, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23639, (Optr)&t_send1, (Optr)PSend23638, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23606 = new_Block_with(empty_Array, empty_Array, PThreadedCode23607, 6, PSend23611, PAssign23612, PSend23621, PAssign23626, PSend23636, PAssign23637);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23640 = new_Send((Optr)PBlock23594, SMB_whileTrue_, 1, (Optr)PBlock23606);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23641 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23644 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23643 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23644, (Optr)&t_block_return);
    Block PBlock23642 = new_Block_with(empty_Array, empty_Array, PThreadedCode23643, 1, PSend23644);
    // ifNotNil:. 
    Send PSend23645 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23642);
    Array PThreadedCode23563 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23564, (Optr)&t_send1, (Optr)PSend23565, (Optr)&t_push_closure, (Optr)PBlock23566, (Optr)&t_send1, (Optr)PSend23581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23582, (Optr)&t_send_ifTrue_, (Optr)PSend23583, (Optr)PBlock23584, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23587, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23588, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23589, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23590, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23592, (Optr)&t_send1, (Optr)PSend23591, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23594, (Optr)&t_push_closure, (Optr)PBlock23606, (Optr)&t_send1, (Optr)PSend23640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23641, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23642, (Optr)&t_send1, (Optr)PSend23645, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23561 = new_Block_with(PArray23562, empty_Array, PThreadedCode23563, 9, PSend23581, PSend23583, PAssign23587, PAssign23589, PAssign23590, PSend23640, PSend23641, PSend23645, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23646 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23561);
    Array PThreadedCode23560 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23561, (Optr)&t_send1, (Optr)PSend23646, (Optr)&t_method_return);
    Method PMethod23557 = new_Method_with(PArray23558, PArray23559, empty_Array, PThreadedCode23560, 1, PSend23646);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23557, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23650 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23652 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23651 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23652, (Optr)&t_method_return);
    Block PBlock23649 = new_Block_with(PArray23650, empty_Array, PThreadedCode23651, 1, PSend23652);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23653 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23649);
    Array PThreadedCode23648 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23649, (Optr)&t_send1, (Optr)PSend23653, (Optr)&t_method_return);
    Method PMethod23647 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23648, 1, PSend23653);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23647, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23655 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23658 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23661 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23660 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23661);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23666 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23665 = new_Block_with(empty_Array, empty_Array, PThreadedCode23666, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23664 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23665);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23668 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23670 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23669 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23670, (Optr)&t_method_return);
    Block PBlock23667 = new_Block_with(PArray23668, empty_Array, PThreadedCode23669, 1, PSend23670);
    // new:streamContents:. 
    Send PSend23663 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23664, (Optr)PBlock23667);
    Assign PAssign23662 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23663);
    Array PThreadedCode23659 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23660, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23661, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23662, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23665, (Optr)&t_send1, (Optr)PSend23664, (Optr)&t_push_closure, (Optr)PBlock23667, (Optr)&t_send2, (Optr)PSend23663, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23657 = new_Block_with(empty_Array, PArray23658, PThreadedCode23659, 2, PAssign23660, PAssign23662);
    // ifNil:. 
    Send PSend23671 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23657);
    Array PThreadedCode23656 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23657, (Optr)&t_send1, (Optr)PSend23671, (Optr)&t_method_return);
    Method PMethod23654 = new_Method_with(PArray23655, empty_Array, empty_Array, PThreadedCode23656, 1, PSend23671);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23654, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23673 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23673, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23672, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23675 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23675, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23674, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23677 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23680 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23683 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23685 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23685_Const = new_Constant((Optr)string_23685);
    // ,. 
    Send PSend23686 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23685_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23687 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23688 = new_Send((Optr)PSend23686, SMB__append_, 1, (Optr)PSend23687);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23689 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23688);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23690 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23684 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23685, (Optr)&t_send1, (Optr)PSend23686, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23687, (Optr)&t_send1, (Optr)PSend23688, (Optr)&t_send1, (Optr)PSend23689, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23690, (Optr)&t_method_return);
    Block PBlock23682 = new_Block_with(PArray23683, empty_Array, PThreadedCode23684, 2, PSend23689, PSend23690);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23691 = new_Send((Optr)PBlock23682, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23681 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23682, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23691, (Optr)&t_method_return);
    Block PBlock23679 = new_Block_with(PArray23680, empty_Array, PThreadedCode23681, 1, PSend23691);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23692 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23679);
    Array PThreadedCode23678 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23679, (Optr)&t_send1, (Optr)PSend23692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23676 = new_Method_with(PArray23677, empty_Array, empty_Array, PThreadedCode23678, 2, PSend23692, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23676, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23697 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23696 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23697, (Optr)&t_block_return);
    Block PBlock23695 = new_Block_with(empty_Array, empty_Array, PThreadedCode23696, 1, PSend23697);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23698 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23695);
    Array PThreadedCode23694 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23695, (Optr)&t_send1, (Optr)PSend23698, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23694, 2, PSend23698, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23693, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23700 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23702 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23703 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23701 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23703, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23699 = new_Method_with(PArray23700, empty_Array, empty_Array, PThreadedCode23701, 3, PSend23702, PSend23703, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23699, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23705 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23708 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23710 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23711 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23712 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23710, (Optr)PSend23711);
    Array PThreadedCode23709 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23710, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23711, (Optr)&t_send2, (Optr)PSend23712, (Optr)&t_method_return);
    Block PBlock23707 = new_Block_with(PArray23708, empty_Array, PThreadedCode23709, 1, PSend23712);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23713 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23707);
    Array PThreadedCode23706 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23707, (Optr)&t_send1, (Optr)PSend23713, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23704 = new_Method_with(PArray23705, empty_Array, empty_Array, PThreadedCode23706, 2, PSend23713, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23704, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23715 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23718 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23722 = new_String(L"Content-Type");
    Constant string_23722_Const = new_Constant((Optr)string_23722);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23725 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23724 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23725, (Optr)&t_block_return);
    Block PBlock23723 = new_Block_with(empty_Array, empty_Array, PThreadedCode23724, 1, PSend23725);
    // headerAt:ifAbsent:. 
    Send PSend23721 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23722_Const, (Optr)PBlock23723);
    Assign PAssign23720 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23721);
    String string_23726 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23726_Const = new_Constant((Optr)string_23726);
    // beginsWith:. 
    Send PSend23727 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23726_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23731 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23730 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23731, (Optr)&t_block_return);
    Block PBlock23729 = new_Block_with(empty_Array, empty_Array, PThreadedCode23730, 1, PSend23731);
    // ifFalse:. 
    Send PSend23728 = new_Send((Optr)PSend23727, SMB_ifFalse_, 1, (Optr)PBlock23729);
    String string_23732 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23732_Const = new_Constant((Optr)string_23732);
    // findString:. 
    Send PSend23733 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23732_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23734 = new_Send((Optr)PSend23733, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23735 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23736 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23734, (Optr)PSend23735);
    Array PThreadedCode23719 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23720, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23722, (Optr)&t_push_closure, (Optr)PBlock23723, (Optr)&t_send2, (Optr)PSend23721, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23726, (Optr)&t_send1, (Optr)PSend23727, (Optr)&t_send_ifFalse_, (Optr)PSend23728, (Optr)PBlock23729, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23732, (Optr)&t_send1, (Optr)PSend23733, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23734, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23735, (Optr)&t_send2, (Optr)PSend23736, (Optr)&t_method_return);
    Block PBlock23717 = new_Block_with(PArray23718, empty_Array, PThreadedCode23719, 3, PAssign23720, PSend23728, PSend23736);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23737 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23717);
    Array PThreadedCode23716 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23717, (Optr)&t_send1, (Optr)PSend23737, (Optr)&t_method_return);
    Method PMethod23714 = new_Method_with(empty_Array, PArray23715, empty_Array, PThreadedCode23716, 1, PSend23737);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23714, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23740 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23744 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23743 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23744, (Optr)&t_block_return);
    Block PBlock23742 = new_Block_with(empty_Array, empty_Array, PThreadedCode23743, 1, PSend23744);
    // ifFalse:. 
    Send PSend23741 = new_Send((Optr)PSend23740, SMB_ifFalse_, 1, (Optr)PBlock23742);
    Array PThreadedCode23739 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23740, (Optr)&t_send_ifFalse_, (Optr)PSend23741, (Optr)PBlock23742, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23738 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23739, 2, PSend23741, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23738, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23746 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23748 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23748_Const = new_Constant((Optr)string_23748);
    // headerAt:put:. 
    Send PSend23749 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23748_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23747 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23748, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23749, (Optr)&t_method_return);
    Method PMethod23745 = new_Method_with(PArray23746, empty_Array, empty_Array, PThreadedCode23747, 1, PSend23749);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23745, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23751 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23754 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23757 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23759 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23760 = new_Send((Optr)PSend23759, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23761 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23762 = new_Send((Optr)PSend23760, SMB__equals_, 1, (Optr)PSend23761);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23766 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23767 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23765 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23767, (Optr)&t_block_return);
    Block PBlock23764 = new_Block_with(empty_Array, empty_Array, PThreadedCode23765, 2, PSend23766, PSend23767);
    // ifTrue:. 
    Send PSend23763 = new_Send((Optr)PSend23762, SMB_ifTrue_, 1, (Optr)PBlock23764);
    Array PThreadedCode23758 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23759, (Optr)&t_send0, (Optr)PSend23760, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23761, (Optr)&t_send1, (Optr)PSend23762, (Optr)&t_send_ifTrue_, (Optr)PSend23763, (Optr)PBlock23764, (Optr)&t_method_return);
    Block PBlock23756 = new_Block_with(PArray23757, empty_Array, PThreadedCode23758, 1, PSend23763);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23768 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23756);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23769 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23755 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23756, (Optr)&t_send1, (Optr)PSend23768, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23769, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23753 = new_Block_with(PArray23754, empty_Array, PThreadedCode23755, 3, PSend23768, PSend23769, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23770 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23753);
    Array PThreadedCode23752 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23753, (Optr)&t_send1, (Optr)PSend23770, (Optr)&t_method_return);
    Method PMethod23750 = new_Method_with(PArray23751, empty_Array, empty_Array, PThreadedCode23752, 1, PSend23770);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23750, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23772 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23775 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23778 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23780 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23779 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23780, (Optr)&t_method_return);
    Block PBlock23777 = new_Block_with(PArray23778, empty_Array, PThreadedCode23779, 1, PSend23780);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23781 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23777);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23782 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23776 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23777, (Optr)&t_send2, (Optr)PSend23781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23782, (Optr)&t_method_return);
    Block PBlock23774 = new_Block_with(PArray23775, empty_Array, PThreadedCode23776, 2, PSend23781, PSend23782);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23783 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23774);
    Array PThreadedCode23773 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23774, (Optr)&t_send1, (Optr)PSend23783, (Optr)&t_method_return);
    Method PMethod23771 = new_Method_with(PArray23772, empty_Array, empty_Array, PThreadedCode23773, 1, PSend23783);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23771, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23789 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23788 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23789);
    Array PThreadedCode23787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23788, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23789, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23786 = new_Block_with(empty_Array, empty_Array, PThreadedCode23787, 1, PAssign23788);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23790 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23786);
    Array PThreadedCode23785 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23786, (Optr)&t_send1, (Optr)PSend23790, (Optr)&t_method_return);
    Method PMethod23784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23785, 1, PSend23790);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23784, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23792 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23795 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23794 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23795);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23799 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23798 = new_Block_with(empty_Array, empty_Array, PThreadedCode23799, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23797 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23798);
    Assign PAssign23796 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23797);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23802 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23801 = new_Send((Optr)PSend23802, SMB_writeStream, 0);
    Assign PAssign23800 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23801);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23803 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23804 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23805 = new_Send((Optr)PSend23804, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23809 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23808 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23809, (Optr)&t_block_return);
    Block PBlock23807 = new_Block_with(empty_Array, empty_Array, PThreadedCode23808, 1, PSend23809);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23812 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23811 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23812, (Optr)&t_block_return);
    Block PBlock23810 = new_Block_with(empty_Array, empty_Array, PThreadedCode23811, 1, PSend23812);
    // ifTrue:ifFalse:. 
    Send PSend23806 = new_Send((Optr)PSend23805, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23807, (Optr)PBlock23810);
    Array PThreadedCode23793 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23794, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23795, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23796, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23798, (Optr)&t_send1, (Optr)PSend23797, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23800, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23802, (Optr)&t_send0, (Optr)PSend23801, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23804, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23805, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23806, (Optr)PBlock23807, (Optr)PBlock23810, (Optr)&t_method_return);
    Method PMethod23791 = new_Method_with(empty_Array, PArray23792, empty_Array, PThreadedCode23793, 5, PAssign23794, PAssign23796, PAssign23800, PSend23803, PSend23806);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23791, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23816 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23818 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23818_Const = new_Constant((Optr)string_23818);
    // headerAt:. 
    Send PSend23819 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23818_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23820 = new_Send((Optr)PSend23819, SMB_asLowercase, 0);
    String string_23821 = new_String(L"close");
    Constant string_23821_Const = new_Constant((Optr)string_23821);
    // asLowercase. 
    Send PSend23822 = new_Send((Optr)string_23821_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23823 = new_Send((Optr)PSend23820, SMB__equals_, 1, (Optr)PSend23822);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23827 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23826 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23827, (Optr)&t_block_return);
    Block PBlock23825 = new_Block_with(empty_Array, empty_Array, PThreadedCode23826, 1, PSend23827);
    // ifTrue:. 
    Send PSend23824 = new_Send((Optr)PSend23823, SMB_ifTrue_, 1, (Optr)PBlock23825);
    String string_23828 = new_String(L"Connection");
    Constant string_23828_Const = new_Constant((Optr)string_23828);
    // headerAt:. 
    Send PSend23829 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23828_Const);
    // asLowercase. 
    Send PSend23830 = new_Send((Optr)PSend23829, SMB_asLowercase, 0);
    String string_23831 = new_String(L"keep-alive");
    Constant string_23831_Const = new_Constant((Optr)string_23831);
    // asLowercase. 
    Send PSend23832 = new_Send((Optr)string_23831_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23833 = new_Send((Optr)PSend23830, SMB__equals_, 1, (Optr)PSend23832);
    // escape:. 
    Send PSend23837 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23836 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23837, (Optr)&t_block_return);
    Block PBlock23835 = new_Block_with(empty_Array, empty_Array, PThreadedCode23836, 1, PSend23837);
    // ifTrue:. 
    Send PSend23834 = new_Send((Optr)PSend23833, SMB_ifTrue_, 1, (Optr)PBlock23835);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23838 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23839 = new_String(L"HTTP/1.0");
    Constant string_23839_Const = new_Constant((Optr)string_23839);
    // =. 
    Send PSend23840 = new_Send((Optr)PSend23838, SMB__equals_, 1, (Optr)string_23839_Const);
    // escape:. 
    Send PSend23844 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23843 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23844, (Optr)&t_block_return);
    Block PBlock23842 = new_Block_with(empty_Array, empty_Array, PThreadedCode23843, 1, PSend23844);
    // ifTrue:. 
    Send PSend23841 = new_Send((Optr)PSend23840, SMB_ifTrue_, 1, (Optr)PBlock23842);
    // protocol. 
    Send PSend23845 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23846 = new_String(L"HTTP/1.1");
    Constant string_23846_Const = new_Constant((Optr)string_23846);
    // =. 
    Send PSend23847 = new_Send((Optr)PSend23845, SMB__equals_, 1, (Optr)string_23846_Const);
    // escape:. 
    Send PSend23851 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23850 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23851, (Optr)&t_block_return);
    Block PBlock23849 = new_Block_with(empty_Array, empty_Array, PThreadedCode23850, 1, PSend23851);
    // ifTrue:. 
    Send PSend23848 = new_Send((Optr)PSend23847, SMB_ifTrue_, 1, (Optr)PBlock23849);
    Array PThreadedCode23817 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23818, (Optr)&t_send1, (Optr)PSend23819, (Optr)&t_send0, (Optr)PSend23820, (Optr)&t_push1, (Optr)string_23821, (Optr)&t_send0, (Optr)PSend23822, (Optr)&t_send1, (Optr)PSend23823, (Optr)&t_send_ifTrue_, (Optr)PSend23824, (Optr)PBlock23825, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23828, (Optr)&t_send1, (Optr)PSend23829, (Optr)&t_send0, (Optr)PSend23830, (Optr)&t_push1, (Optr)string_23831, (Optr)&t_send0, (Optr)PSend23832, (Optr)&t_send1, (Optr)PSend23833, (Optr)&t_send_ifTrue_, (Optr)PSend23834, (Optr)PBlock23835, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23838, (Optr)&t_push1, (Optr)string_23839, (Optr)&t_send1, (Optr)PSend23840, (Optr)&t_send_ifTrue_, (Optr)PSend23841, (Optr)PBlock23842, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23845, (Optr)&t_push1, (Optr)string_23846, (Optr)&t_send1, (Optr)PSend23847, (Optr)&t_send_ifTrue_, (Optr)PSend23848, (Optr)PBlock23849, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23815 = new_Block_with(PArray23816, empty_Array, PThreadedCode23817, 5, PSend23824, PSend23834, PSend23841, PSend23848, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23852 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23815);
    Array PThreadedCode23814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23815, (Optr)&t_send1, (Optr)PSend23852, (Optr)&t_method_return);
    Method PMethod23813 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23814, 1, PSend23852);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23813, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23854 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23859 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23861 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23862 = new_Send((Optr)PSend23861, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23863 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23864 = new_Send((Optr)PSend23862, SMB__equals_, 1, (Optr)PSend23863);
    Array PThreadedCode23860 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23861, (Optr)&t_send0, (Optr)PSend23862, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23863, (Optr)&t_send1, (Optr)PSend23864, (Optr)&t_method_return);
    Block PBlock23858 = new_Block_with(PArray23859, empty_Array, PThreadedCode23860, 1, PSend23864);
    // reject:. 
    Send PSend23857 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23858);
    Assign PAssign23856 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23857);
    Array PThreadedCode23855 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23856, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23858, (Optr)&t_send1, (Optr)PSend23857, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23853 = new_Method_with(PArray23854, empty_Array, empty_Array, PThreadedCode23855, 2, PAssign23856, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23853, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23866 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23868 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23869 = new_Send((Optr)PSend23868, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23870 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23869);
    Array PThreadedCode23867 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23868, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23869, (Optr)&t_send1, (Optr)PSend23870, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23865 = new_Method_with(PArray23866, empty_Array, empty_Array, PThreadedCode23867, 2, PSend23870, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23865, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23872 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23874 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23873 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23874, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23871 = new_Method_with(PArray23872, empty_Array, empty_Array, PThreadedCode23873, 2, PAssign23874, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23871, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23876 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23878 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23877 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23878, (Optr)&t_method_return);
    Method PMethod23875 = new_Method_with(PArray23876, empty_Array, empty_Array, PThreadedCode23877, 1, PSend23878);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23875, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23884 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23886 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23886_Const = new_Constant((Optr)string_23886);
    // at:put:. 
    Send PSend23887 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23886_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23888 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23888_Const = new_Constant((Optr)string_23888);
    // at:put:. 
    Send PSend23889 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23888_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23890 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23890_Const = new_Constant((Optr)string_23890);
    // at:put:. 
    Send PSend23891 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23890_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23892 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23892_Const = new_Constant((Optr)string_23892);
    // at:put:. 
    Send PSend23893 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23892_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23894 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23894_Const = new_Constant((Optr)string_23894);
    // at:put:. 
    Send PSend23895 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23894_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23896 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23896_Const = new_Constant((Optr)string_23896);
    // at:put:. 
    Send PSend23897 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23896_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23898 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23898_Const = new_Constant((Optr)string_23898);
    // at:put:. 
    Send PSend23899 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23898_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23900 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23900_Const = new_Constant((Optr)string_23900);
    // at:put:. 
    Send PSend23901 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23900_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23902 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23902_Const = new_Constant((Optr)string_23902);
    // at:put:. 
    Send PSend23903 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23902_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23904 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23904_Const = new_Constant((Optr)string_23904);
    // at:put:. 
    Send PSend23905 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23904_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23906 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23906_Const = new_Constant((Optr)string_23906);
    // at:put:. 
    Send PSend23907 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23906_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23908 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23908_Const = new_Constant((Optr)string_23908);
    // at:put:. 
    Send PSend23909 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23908_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23910 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23910_Const = new_Constant((Optr)string_23910);
    // at:put:. 
    Send PSend23911 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23910_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23912 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23912_Const = new_Constant((Optr)string_23912);
    // at:put:. 
    Send PSend23913 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23912_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23914 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23914_Const = new_Constant((Optr)string_23914);
    // at:put:. 
    Send PSend23915 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23914_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23916 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23916_Const = new_Constant((Optr)string_23916);
    // at:put:. 
    Send PSend23917 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23916_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23918 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23918_Const = new_Constant((Optr)string_23918);
    // at:put:. 
    Send PSend23919 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23918_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23920 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23920_Const = new_Constant((Optr)string_23920);
    // at:put:. 
    Send PSend23921 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23920_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23922 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23922_Const = new_Constant((Optr)string_23922);
    // at:put:. 
    Send PSend23923 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23922_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23924 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23924_Const = new_Constant((Optr)string_23924);
    // at:put:. 
    Send PSend23925 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23924_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23926 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23926_Const = new_Constant((Optr)string_23926);
    // at:put:. 
    Send PSend23927 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23926_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23928 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23928_Const = new_Constant((Optr)string_23928);
    // at:put:. 
    Send PSend23929 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23928_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23930 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23930_Const = new_Constant((Optr)string_23930);
    // at:put:. 
    Send PSend23931 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23930_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23932 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23932_Const = new_Constant((Optr)string_23932);
    // at:put:. 
    Send PSend23933 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23932_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23934 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23934_Const = new_Constant((Optr)string_23934);
    // at:put:. 
    Send PSend23935 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23934_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23936 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23936_Const = new_Constant((Optr)string_23936);
    // at:put:. 
    Send PSend23937 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23936_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23938 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23938_Const = new_Constant((Optr)string_23938);
    // at:put:. 
    Send PSend23939 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23938_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23940 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23940_Const = new_Constant((Optr)string_23940);
    // at:put:. 
    Send PSend23941 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23940_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23942 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23942_Const = new_Constant((Optr)string_23942);
    // at:put:. 
    Send PSend23943 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23942_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23944 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23944_Const = new_Constant((Optr)string_23944);
    // at:put:. 
    Send PSend23945 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23944_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23946 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23946_Const = new_Constant((Optr)string_23946);
    // at:put:. 
    Send PSend23947 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23946_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23948 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23948_Const = new_Constant((Optr)string_23948);
    // at:put:. 
    Send PSend23949 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23948_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23950 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23950_Const = new_Constant((Optr)string_23950);
    // at:put:. 
    Send PSend23951 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23950_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23952 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23952_Const = new_Constant((Optr)string_23952);
    // at:put:. 
    Send PSend23953 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23952_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23954 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23954_Const = new_Constant((Optr)string_23954);
    // at:put:. 
    Send PSend23955 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23954_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23956 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23956_Const = new_Constant((Optr)string_23956);
    // at:put:. 
    Send PSend23957 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23956_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23958 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23958_Const = new_Constant((Optr)string_23958);
    // at:put:. 
    Send PSend23959 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23958_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23960 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23960_Const = new_Constant((Optr)string_23960);
    // at:put:. 
    Send PSend23961 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23960_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23962 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23962_Const = new_Constant((Optr)string_23962);
    // at:put:. 
    Send PSend23963 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23962_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23964 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23964_Const = new_Constant((Optr)string_23964);
    // at:put:. 
    Send PSend23965 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23964_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23966 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23966_Const = new_Constant((Optr)string_23966);
    // at:put:. 
    Send PSend23967 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23966_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23968 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23968_Const = new_Constant((Optr)string_23968);
    // at:put:. 
    Send PSend23969 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23968_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23970 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23970_Const = new_Constant((Optr)string_23970);
    // at:put:. 
    Send PSend23971 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23970_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23972 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23972_Const = new_Constant((Optr)string_23972);
    // at:put:. 
    Send PSend23973 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23972_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23974 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23974_Const = new_Constant((Optr)string_23974);
    // at:put:. 
    Send PSend23975 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23974_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23976 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23976_Const = new_Constant((Optr)string_23976);
    // at:put:. 
    Send PSend23977 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23976_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23978 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23885 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23886, (Optr)&t_send2, (Optr)PSend23887, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23888, (Optr)&t_send2, (Optr)PSend23889, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23890, (Optr)&t_send2, (Optr)PSend23891, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23892, (Optr)&t_send2, (Optr)PSend23893, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23894, (Optr)&t_send2, (Optr)PSend23895, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23896, (Optr)&t_send2, (Optr)PSend23897, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23898, (Optr)&t_send2, (Optr)PSend23899, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23900, (Optr)&t_send2, (Optr)PSend23901, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23902, (Optr)&t_send2, (Optr)PSend23903, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23904, (Optr)&t_send2, (Optr)PSend23905, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23906, (Optr)&t_send2, (Optr)PSend23907, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23908, (Optr)&t_send2, (Optr)PSend23909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23910, (Optr)&t_send2, (Optr)PSend23911, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23912, (Optr)&t_send2, (Optr)PSend23913, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23914, (Optr)&t_send2, (Optr)PSend23915, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23916, (Optr)&t_send2, (Optr)PSend23917, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23918, (Optr)&t_send2, (Optr)PSend23919, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23920, (Optr)&t_send2, (Optr)PSend23921, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23922, (Optr)&t_send2, (Optr)PSend23923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23924, (Optr)&t_send2, (Optr)PSend23925, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23926, (Optr)&t_send2, (Optr)PSend23927, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23928, (Optr)&t_send2, (Optr)PSend23929, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23930, (Optr)&t_send2, (Optr)PSend23931, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23932, (Optr)&t_send2, (Optr)PSend23933, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23934, (Optr)&t_send2, (Optr)PSend23935, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23936, (Optr)&t_send2, (Optr)PSend23937, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23938, (Optr)&t_send2, (Optr)PSend23939, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23940, (Optr)&t_send2, (Optr)PSend23941, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23942, (Optr)&t_send2, (Optr)PSend23943, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23944, (Optr)&t_send2, (Optr)PSend23945, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23946, (Optr)&t_send2, (Optr)PSend23947, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23948, (Optr)&t_send2, (Optr)PSend23949, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23950, (Optr)&t_send2, (Optr)PSend23951, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23952, (Optr)&t_send2, (Optr)PSend23953, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23954, (Optr)&t_send2, (Optr)PSend23955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23956, (Optr)&t_send2, (Optr)PSend23957, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23958, (Optr)&t_send2, (Optr)PSend23959, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23960, (Optr)&t_send2, (Optr)PSend23961, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23962, (Optr)&t_send2, (Optr)PSend23963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23964, (Optr)&t_send2, (Optr)PSend23965, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23966, (Optr)&t_send2, (Optr)PSend23967, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23968, (Optr)&t_send2, (Optr)PSend23969, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23970, (Optr)&t_send2, (Optr)PSend23971, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23972, (Optr)&t_send2, (Optr)PSend23973, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23974, (Optr)&t_send2, (Optr)PSend23975, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23976, (Optr)&t_send2, (Optr)PSend23977, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23978, (Optr)&t_method_return);
    Block PBlock23883 = new_Block_with(PArray23884, empty_Array, PThreadedCode23885, 47, PSend23887, PSend23889, PSend23891, PSend23893, PSend23895, PSend23897, PSend23899, PSend23901, PSend23903, PSend23905, PSend23907, PSend23909, PSend23911, PSend23913, PSend23915, PSend23917, PSend23919, PSend23921, PSend23923, PSend23925, PSend23927, PSend23929, PSend23931, PSend23933, PSend23935, PSend23937, PSend23939, PSend23941, PSend23943, PSend23945, PSend23947, PSend23949, PSend23951, PSend23953, PSend23955, PSend23957, PSend23959, PSend23961, PSend23963, PSend23965, PSend23967, PSend23969, PSend23971, PSend23973, PSend23975, PSend23977, PSend23978);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23979 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23882 = new_Send((Optr)PBlock23883, SMB_value_, 1, (Optr)PSend23979);
    Assign PAssign23881 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23882);
    Array PThreadedCode23880 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23881, (Optr)&t_push_closure, (Optr)PBlock23883, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23979, (Optr)&t_send1, (Optr)PSend23882, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23880, 2, PAssign23881, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23879, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_initialize, MC_SMB_initialize);
}

void init_WebClient_Core_PWebMessage_layout() {
    slot_WebClient_Core_WebMessage_Class_class_statusCodes = (Optr)new_Slot(5, L"statusCodes");
    layout_WebClient_Core_WebMessage_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[5] = slot_WebClient_Core_WebMessage_Class_class_statusCodes; // statusCodes 
    
    Symbol  SMB_WebMessage = new_Symbol(L"WebMessage");
    slot_WebClient_Core_WebMessage_stream = (Optr)new_Slot(0, L"stream");
    slot_WebClient_Core_WebMessage_protocol = (Optr)new_Slot(1, L"protocol");
    slot_WebClient_Core_WebMessage_headers = (Optr)new_Slot(2, L"headers");
    slot_WebClient_Core_WebMessage_content = (Optr)new_Slot(3, L"content");
    layout_WebClient_Core_WebMessage = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_WebClient_Core_WebMessage)->values[0] = slot_WebClient_Core_WebMessage_stream; // stream 
    ((Array)layout_WebClient_Core_WebMessage)->values[1] = slot_WebClient_Core_WebMessage_protocol; // protocol 
    ((Array)layout_WebClient_Core_WebMessage)->values[2] = slot_WebClient_Core_WebMessage_headers; // headers 
    ((Array)layout_WebClient_Core_WebMessage)->values[3] = slot_WebClient_Core_WebMessage_content; // content 
    WebClient_Core_WebMessage_Class = (Class)new_Class(Object_Class, layout_WebClient_Core_WebMessage_Class_class);
    WebClient_Core_WebMessage_Class->layout = layout_WebClient_Core_WebMessage;
    WebClient_Core_WebMessage_Class->name = SMB_WebMessage;
    
}

void init_WebClient_Core_PWebMessage_methods() {
    init_SMB_contentType();
    init_SMB_close();
    init_SMB_contentStream();
    init_SMB_remoteHost();
    init_SMB_stream_();
    init_SMB_headersAt_ifAbsent_();
    init_SMB_headerAt_();
    init_SMB_chunkFrom_to_progress_();
    init_SMB_headersAt_do_();
    init_SMB_printOn_();
    init_SMB_contentLength();
    init_SMB_headersAt_();
    init_SMB_protocol_();
    init_SMB_contentLength_();
    init_SMB_streamFrom_to_size_progress_();
    init_SMB_asString();
    init_SMB_contentWithProgress_();
    init_SMB_stream();
    init_SMB_protocol();
    init_SMB_writeHeadersOn_();
    init_SMB_destroy();
    init_SMB_writeOn_();
    init_SMB_headersDo_();
    init_SMB_multipartBoundary();
    init_SMB_closeIfTransient();
    init_SMB_contentType_();
    init_SMB_headerAt_put_();
    init_SMB_headerAt_ifAbsent_();
    init_SMB_content();
    init_SMB_getContent();
    init_SMB_isPersistent();
    init_SMB_removeHeader_();
    init_SMB_addHeader_value_();
    init_SMB_content_();
    init_class_SMB_statusCodeAt_();
    init_class_SMB_initialize();
    
}