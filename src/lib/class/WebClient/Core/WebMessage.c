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
    String string_23311 = new_String(L"Content-Type");
    String string_23314 = new_String(L"application/octet-stream");
    Array PThreadedCode23313 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23314, (Optr)&t_block_return);
    Constant string_23314_Const = new_Constant((Optr)string_23314);
    Block PBlock23312 = new_Block_with(empty_Array, empty_Array, PThreadedCode23313, 1, string_23314_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23311_Const = new_Constant((Optr)string_23311);
    // headerAt:ifAbsent:. 
    Send PSend23315 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23311_Const, (Optr)PBlock23312);
    Array PThreadedCode23310 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23311, (Optr)&t_push_closure, (Optr)PBlock23312, (Optr)&t_send2, (Optr)PSend23315, (Optr)&t_method_return);
    Method PMethod23309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23310, 1, PSend23315);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod23309, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23320 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode23319 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23320, (Optr)&t_block_return);
    Block PBlock23318 = new_Block_with(empty_Array, empty_Array, PThreadedCode23319, 1, PSend23320);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23321 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23318);
    Array PThreadedCode23317 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23318, (Optr)&t_send1, (Optr)PSend23321, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23316 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23317, 2, PSend23321, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod23316, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode23323 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23322 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23323, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod23322, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23327 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend23329 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23333 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23332 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23333, (Optr)&t_block_return);
    Block PBlock23331 = new_Block_with(empty_Array, empty_Array, PThreadedCode23332, 1, PSend23333);
    // ifFalse:. 
    Send PSend23330 = new_Send((Optr)PSend23329, SMB_ifFalse_, 1, (Optr)PBlock23331);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend23334 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend23335 = new_Send((Optr)PSend23334, SMB_remoteAddress, 0);
    Array PThreadedCode23328 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend23329, (Optr)&t_send_ifFalse_, (Optr)PSend23330, (Optr)PBlock23331, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23334, (Optr)&t_send0, (Optr)PSend23335, (Optr)&t_method_return);
    Block PBlock23326 = new_Block_with(PArray23327, empty_Array, PThreadedCode23328, 2, PSend23330, PSend23335);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23336 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23326);
    Array PThreadedCode23325 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23326, (Optr)&t_send1, (Optr)PSend23336, (Optr)&t_method_return);
    Method PMethod23324 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23325, 1, PSend23336);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod23324, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23338 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign23340 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23339 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23340, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23337 = new_Method_with(PArray23338, empty_Array, empty_Array, PThreadedCode23339, 2, PAssign23340, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod23337, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23342 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray23343 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23346 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23345 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend23346);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray23348 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23350 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode23349 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend23350, (Optr)&t_method_return);
    Block PBlock23347 = new_Block_with(PArray23348, empty_Array, PThreadedCode23349, 1, PSend23350);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23351 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23347);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23352 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23355 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23354 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23355, (Optr)&t_block_return);
    Block PBlock23353 = new_Block_with(empty_Array, empty_Array, PThreadedCode23354, 1, PSend23355);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend23356 = new_Send((Optr)PSend23352, SMB_ifEmpty_, 1, (Optr)PBlock23353);
    Array PThreadedCode23344 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign23345, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23346, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23347, (Optr)&t_send2, (Optr)PSend23351, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend23352, (Optr)&t_push_closure, (Optr)PBlock23353, (Optr)&t_send1, (Optr)PSend23356, (Optr)&t_method_return);
    Method PMethod23341 = new_Method_with(PArray23342, PArray23343, empty_Array, PThreadedCode23344, 3, PAssign23345, PSend23351, PSend23356);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod23341, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23358 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_23362 = new_String(L"");
    Array PThreadedCode23361 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23362, (Optr)&t_block_return);
    Constant string_23362_Const = new_Constant((Optr)string_23362);
    Block PBlock23360 = new_Block_with(empty_Array, empty_Array, PThreadedCode23361, 1, string_23362_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend23363 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23360);
    Array PThreadedCode23359 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23360, (Optr)&t_send2, (Optr)PSend23363, (Optr)&t_method_return);
    Method PMethod23357 = new_Method_with(PArray23358, empty_Array, empty_Array, PThreadedCode23359, 1, PSend23363);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod23357, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray23365 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray23366 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign23368 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23370 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign23369 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23370);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend23374 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign23373 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend23374);
    String string_23378 = new_String(L"16r");
    Constant string_23378_Const = new_Constant((Optr)string_23378);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend23379 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend23377 = new_Send((Optr)string_23378_Const, SMB__append_, 1, (Optr)PSend23379);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend23376 = new_Send((Optr)PSend23377, SMB_asNumber, 0);
    Assign PAssign23375 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend23376);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23380 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode23372 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign23373, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend23374, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23375, (Optr)&t_push1, (Optr)string_23378, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend23379, (Optr)&t_send1, (Optr)PSend23377, (Optr)&t_send0, (Optr)PSend23376, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23380, (Optr)&t_block_return);
    Block PBlock23371 = new_Block_with(empty_Array, empty_Array, PThreadedCode23372, 3, PAssign23373, PAssign23375, PSend23380);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23385 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23384 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23385, (Optr)&t_block_return);
    Block PBlock23383 = new_Block_with(empty_Array, empty_Array, PThreadedCode23384, 1, PSend23385);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23386 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23383);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23387 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend23388 = new_Send((Optr)PSend23387, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23394 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23393 = new_Send((Optr)PSend23394, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23392 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23393);
    Array PThreadedCode23391 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23392, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23394, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23393, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23390 = new_Block_with(empty_Array, empty_Array, PThreadedCode23391, 1, PAssign23392);
    // ifFalse:. 
    Send PSend23389 = new_Send((Optr)PSend23388, SMB_ifFalse_, 1, (Optr)PBlock23390);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23396 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign23395 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23396);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23397 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend23398 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend23400 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23399 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend23400);
    Array PThreadedCode23382 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23383, (Optr)&t_send1, (Optr)PSend23386, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23387, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23388, (Optr)&t_send_ifFalse_, (Optr)PSend23389, (Optr)PBlock23390, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23395, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23396, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend23397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23398, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23399, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23400, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23381 = new_Block_with(empty_Array, empty_Array, PThreadedCode23382, 6, PSend23386, PSend23389, PAssign23395, PSend23397, PSend23398, PAssign23399);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23401 = new_Send((Optr)PBlock23371, SMB_whileFalse_, 1, (Optr)PBlock23381);
    // skip:. 
    Send PSend23402 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23403 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23406 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23405 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23406, (Optr)&t_block_return);
    Block PBlock23404 = new_Block_with(empty_Array, empty_Array, PThreadedCode23405, 1, PSend23406);
    // ifNotNil:. 
    Send PSend23407 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23404);
    Array PThreadedCode23367 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23368, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23369, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23370, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23371, (Optr)&t_push_closure, (Optr)PBlock23381, (Optr)&t_send1, (Optr)PSend23401, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23403, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23404, (Optr)&t_send1, (Optr)PSend23407, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23364 = new_Method_with(PArray23365, PArray23366, empty_Array, PThreadedCode23367, 7, PAssign23368, PAssign23369, PSend23401, PSend23402, PSend23403, PSend23407, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod23364, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23409 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23412 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23414 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23415 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23416 = new_Send((Optr)PSend23414, SMB__equals_, 1, (Optr)PSend23415);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23420 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode23419 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23420, (Optr)&t_block_return);
    Block PBlock23418 = new_Block_with(empty_Array, empty_Array, PThreadedCode23419, 1, PSend23420);
    // ifTrue:. 
    Send PSend23417 = new_Send((Optr)PSend23416, SMB_ifTrue_, 1, (Optr)PBlock23418);
    Array PThreadedCode23413 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend23414, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend23415, (Optr)&t_send1, (Optr)PSend23416, (Optr)&t_send_ifTrue_, (Optr)PSend23417, (Optr)PBlock23418, (Optr)&t_method_return);
    Block PBlock23411 = new_Block_with(PArray23412, empty_Array, PThreadedCode23413, 1, PSend23417);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23421 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23411);
    Array PThreadedCode23410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23411, (Optr)&t_send1, (Optr)PSend23421, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23408 = new_Method_with(PArray23409, empty_Array, empty_Array, PThreadedCode23410, 2, PSend23421, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod23408, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23423 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23425 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23426 = new_Send((Optr)PSend23425, SMB_name, 0);
    // printOn:. 
    Send PSend23427 = new_Send((Optr)PSend23426, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend23428 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23429 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend23430 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode23424 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23425, (Optr)&t_send0, (Optr)PSend23426, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23427, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend23428, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend23430, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23422 = new_Method_with(PArray23423, empty_Array, empty_Array, PThreadedCode23424, 5, PSend23427, PSend23428, PSend23429, PSend23430, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod23422, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23434 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23436 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23439 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23438 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23439, (Optr)&t_block_return);
    Block PBlock23437 = new_Block_with(empty_Array, empty_Array, PThreadedCode23438, 1, PSend23439);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23436_Const = new_Constant((Optr)string_23436);
    // headerAt:ifAbsent:. 
    Send PSend23440 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23436_Const, (Optr)PBlock23437);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23441 = new_Send((Optr)PSend23440, SMB_asInteger, 0);
    Array PThreadedCode23435 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23436, (Optr)&t_push_closure, (Optr)PBlock23437, (Optr)&t_send2, (Optr)PSend23440, (Optr)&t_send0, (Optr)PSend23441, (Optr)&t_method_return);
    Block PBlock23433 = new_Block_with(PArray23434, empty_Array, PThreadedCode23435, 1, PSend23441);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23442 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23433);
    Array PThreadedCode23432 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23433, (Optr)&t_send1, (Optr)PSend23442, (Optr)&t_method_return);
    Method PMethod23431 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23432, 1, PSend23442);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23431, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23444 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23448 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23449 = new_Send((Optr)PSend23448, SMB_asArray, 0);
    Array PThreadedCode23447 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23448, (Optr)&t_send0, (Optr)PSend23449, (Optr)&t_block_return);
    Block PBlock23446 = new_Block_with(empty_Array, empty_Array, PThreadedCode23447, 1, PSend23449);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23450 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23446);
    Array PThreadedCode23445 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23446, (Optr)&t_send2, (Optr)PSend23450, (Optr)&t_method_return);
    Method PMethod23443 = new_Method_with(PArray23444, empty_Array, empty_Array, PThreadedCode23445, 1, PSend23450);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23443, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23452 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23454 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23453 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23454, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23451 = new_Method_with(PArray23452, empty_Array, empty_Array, PThreadedCode23453, 2, PAssign23454, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23451, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23456 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23458 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23458_Const = new_Constant((Optr)string_23458);
    // headerAt:put:. 
    Send PSend23459 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23458_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23457 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23458, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23459, (Optr)&t_method_return);
    Method PMethod23455 = new_Method_with(PArray23456, empty_Array, empty_Array, PThreadedCode23457, 1, PSend23459);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23455, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23461 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23462 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23465 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23467 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23467_Const = new_Constant((Optr)string_23467);
    // headerAt:. 
    Send PSend23468 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23467_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23470 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23472 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23472_Const = new_Constant((Optr)string_23472);
    // =. 
    Send PSend23473 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23472_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23477 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23478 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23477);
    Array PThreadedCode23476 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23477, (Optr)&t_send1, (Optr)PSend23478, (Optr)&t_block_return);
    Block PBlock23475 = new_Block_with(empty_Array, empty_Array, PThreadedCode23476, 1, PSend23478);
    String string_23481 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23481_Const = new_Constant((Optr)string_23481);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23482 = new_Send((Optr)string_23481_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23483 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23482);
    Array PThreadedCode23480 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23481, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23482, (Optr)&t_send1, (Optr)PSend23483, (Optr)&t_block_return);
    Block PBlock23479 = new_Block_with(empty_Array, empty_Array, PThreadedCode23480, 1, PSend23483);
    // ifTrue:ifFalse:. 
    Send PSend23474 = new_Send((Optr)PSend23473, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23475, (Optr)PBlock23479);
    Array PThreadedCode23471 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23472, (Optr)&t_send1, (Optr)PSend23473, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23474, (Optr)PBlock23475, (Optr)PBlock23479, (Optr)&t_method_return);
    Block PBlock23469 = new_Block_with(PArray23470, empty_Array, PThreadedCode23471, 1, PSend23474);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23484 = new_Send((Optr)PSend23468, SMB_ifNotEmpty_, 1, (Optr)PBlock23469);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23485 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23489 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23488 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23489, (Optr)&t_block_return);
    Block PBlock23487 = new_Block_with(empty_Array, empty_Array, PThreadedCode23488, 1, PSend23489);
    // ifTrue:. 
    Send PSend23486 = new_Send((Optr)PSend23485, SMB_ifTrue_, 1, (Optr)PBlock23487);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23491 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23490 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23491);
    Assign PAssign23492 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23496 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23495 = new_Block_with(empty_Array, empty_Array, PThreadedCode23496, 1, int_0_Const);
    // ifNil:. 
    Send PSend23494 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23495);
    Assign PAssign23493 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23494);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23499 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23502 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23503 = new_Send((Optr)PSend23502, SMB_not, 0);
    Array PThreadedCode23501 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23502, (Optr)&t_send0, (Optr)PSend23503, (Optr)&t_block_return);
    Block PBlock23500 = new_Block_with(empty_Array, empty_Array, PThreadedCode23501, 1, PSend23503);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23504 = new_Send((Optr)PSend23499, SMB_and_, 1, (Optr)PBlock23500);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23507 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23506 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23507, (Optr)&t_block_return);
    Block PBlock23505 = new_Block_with(empty_Array, empty_Array, PThreadedCode23506, 1, PSend23507);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23508 = new_Send((Optr)PSend23504, SMB_or_, 1, (Optr)PBlock23505);
    Array PThreadedCode23498 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23499, (Optr)&t_push_closure, (Optr)PBlock23500, (Optr)&t_send1, (Optr)PSend23504, (Optr)&t_push_closure, (Optr)PBlock23505, (Optr)&t_send1, (Optr)PSend23508, (Optr)&t_block_return);
    Block PBlock23497 = new_Block_with(empty_Array, empty_Array, PThreadedCode23498, 1, PSend23508);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23513 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23512 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23513, (Optr)&t_block_return);
    Block PBlock23511 = new_Block_with(empty_Array, empty_Array, PThreadedCode23512, 1, PSend23513);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23514 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23511);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23518 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23517 = new_Block_with(empty_Array, empty_Array, PThreadedCode23518, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23521 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23520 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23521, (Optr)&t_block_return);
    Block PBlock23519 = new_Block_with(empty_Array, empty_Array, PThreadedCode23520, 1, PSend23521);
    // ifNil:ifNotNil:. 
    Send PSend23516 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23517, (Optr)PBlock23519);
    Assign PAssign23515 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23516);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23522 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23523 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23522);
    // size. 
    Send PSend23528 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23527 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23528);
    Array PThreadedCode23526 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23527, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23528, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23525 = new_Block_with(empty_Array, empty_Array, PThreadedCode23526, 1, PAssign23527);
    // ifTrue:. 
    Send PSend23524 = new_Send((Optr)PSend23523, SMB_ifTrue_, 1, (Optr)PBlock23525);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23530 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23529 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23530);
    // size. 
    Send PSend23531 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23532 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23531);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23536 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23535 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23536, (Optr)&t_block_return);
    Block PBlock23534 = new_Block_with(empty_Array, empty_Array, PThreadedCode23535, 1, PSend23536);
    Array PThreadedCode23538 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23537 = new_Block_with(empty_Array, empty_Array, PThreadedCode23538, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23533 = new_Send((Optr)PSend23532, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23534, (Optr)PBlock23537);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23539 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23533);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23542 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23541 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23542);
    Assign PAssign23540 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23541);
    Array PThreadedCode23510 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23511, (Optr)&t_send1, (Optr)PSend23514, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23515, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23517, (Optr)&t_push_closure, (Optr)PBlock23519, (Optr)&t_send2, (Optr)PSend23516, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23522, (Optr)&t_send1, (Optr)PSend23523, (Optr)&t_send_ifTrue_, (Optr)PSend23524, (Optr)PBlock23525, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23529, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23530, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23531, (Optr)&t_send1, (Optr)PSend23532, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23533, (Optr)PBlock23534, (Optr)PBlock23537, (Optr)&t_send1, (Optr)PSend23539, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23540, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23542, (Optr)&t_send1, (Optr)PSend23541, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23509 = new_Block_with(empty_Array, empty_Array, PThreadedCode23510, 6, PSend23514, PAssign23515, PSend23524, PAssign23529, PSend23539, PAssign23540);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23543 = new_Send((Optr)PBlock23497, SMB_whileTrue_, 1, (Optr)PBlock23509);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23544 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23547 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23546 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23547, (Optr)&t_block_return);
    Block PBlock23545 = new_Block_with(empty_Array, empty_Array, PThreadedCode23546, 1, PSend23547);
    // ifNotNil:. 
    Send PSend23548 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23545);
    Array PThreadedCode23466 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23467, (Optr)&t_send1, (Optr)PSend23468, (Optr)&t_push_closure, (Optr)PBlock23469, (Optr)&t_send1, (Optr)PSend23484, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23485, (Optr)&t_send_ifTrue_, (Optr)PSend23486, (Optr)PBlock23487, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23490, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23492, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23493, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23495, (Optr)&t_send1, (Optr)PSend23494, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23497, (Optr)&t_push_closure, (Optr)PBlock23509, (Optr)&t_send1, (Optr)PSend23543, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23545, (Optr)&t_send1, (Optr)PSend23548, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23464 = new_Block_with(PArray23465, empty_Array, PThreadedCode23466, 9, PSend23484, PSend23486, PAssign23490, PAssign23492, PAssign23493, PSend23543, PSend23544, PSend23548, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23549 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23464);
    Array PThreadedCode23463 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23464, (Optr)&t_send1, (Optr)PSend23549, (Optr)&t_method_return);
    Method PMethod23460 = new_Method_with(PArray23461, PArray23462, empty_Array, PThreadedCode23463, 1, PSend23549);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23460, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23553 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23555 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23554 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23555, (Optr)&t_method_return);
    Block PBlock23552 = new_Block_with(PArray23553, empty_Array, PThreadedCode23554, 1, PSend23555);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23556 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23552);
    Array PThreadedCode23551 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23552, (Optr)&t_send1, (Optr)PSend23556, (Optr)&t_method_return);
    Method PMethod23550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23551, 1, PSend23556);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23550, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23558 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23561 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23564 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23563 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23564);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23569 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23568 = new_Block_with(empty_Array, empty_Array, PThreadedCode23569, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23567 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23568);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23571 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23573 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23572 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23573, (Optr)&t_method_return);
    Block PBlock23570 = new_Block_with(PArray23571, empty_Array, PThreadedCode23572, 1, PSend23573);
    // new:streamContents:. 
    Send PSend23566 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23567, (Optr)PBlock23570);
    Assign PAssign23565 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23566);
    Array PThreadedCode23562 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23563, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23565, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23568, (Optr)&t_send1, (Optr)PSend23567, (Optr)&t_push_closure, (Optr)PBlock23570, (Optr)&t_send2, (Optr)PSend23566, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23560 = new_Block_with(empty_Array, PArray23561, PThreadedCode23562, 2, PAssign23563, PAssign23565);
    // ifNil:. 
    Send PSend23574 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23560);
    Array PThreadedCode23559 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23560, (Optr)&t_send1, (Optr)PSend23574, (Optr)&t_method_return);
    Method PMethod23557 = new_Method_with(PArray23558, empty_Array, empty_Array, PThreadedCode23559, 1, PSend23574);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23557, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23576 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23575 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23576, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23575, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23578 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23578, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23577, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23580 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23583 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23586 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23588 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23588_Const = new_Constant((Optr)string_23588);
    // ,. 
    Send PSend23589 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23588_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23590 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23591 = new_Send((Optr)PSend23589, SMB__append_, 1, (Optr)PSend23590);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23592 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23591);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23593 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23587 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23588, (Optr)&t_send1, (Optr)PSend23589, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23590, (Optr)&t_send1, (Optr)PSend23591, (Optr)&t_send1, (Optr)PSend23592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23593, (Optr)&t_method_return);
    Block PBlock23585 = new_Block_with(PArray23586, empty_Array, PThreadedCode23587, 2, PSend23592, PSend23593);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23594 = new_Send((Optr)PBlock23585, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23584 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23585, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23594, (Optr)&t_method_return);
    Block PBlock23582 = new_Block_with(PArray23583, empty_Array, PThreadedCode23584, 1, PSend23594);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23595 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23582);
    Array PThreadedCode23581 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23582, (Optr)&t_send1, (Optr)PSend23595, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23579 = new_Method_with(PArray23580, empty_Array, empty_Array, PThreadedCode23581, 2, PSend23595, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23579, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23600 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23599 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23600, (Optr)&t_block_return);
    Block PBlock23598 = new_Block_with(empty_Array, empty_Array, PThreadedCode23599, 1, PSend23600);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23601 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23598);
    Array PThreadedCode23597 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23598, (Optr)&t_send1, (Optr)PSend23601, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23597, 2, PSend23601, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23596, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23603 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23605 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23606 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23604 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23606, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23602 = new_Method_with(PArray23603, empty_Array, empty_Array, PThreadedCode23604, 3, PSend23605, PSend23606, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23602, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23608 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23611 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23613 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23614 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23615 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23613, (Optr)PSend23614);
    Array PThreadedCode23612 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23613, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23614, (Optr)&t_send2, (Optr)PSend23615, (Optr)&t_method_return);
    Block PBlock23610 = new_Block_with(PArray23611, empty_Array, PThreadedCode23612, 1, PSend23615);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23616 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23610);
    Array PThreadedCode23609 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23610, (Optr)&t_send1, (Optr)PSend23616, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23607 = new_Method_with(PArray23608, empty_Array, empty_Array, PThreadedCode23609, 2, PSend23616, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23607, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23618 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23621 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23625 = new_String(L"Content-Type");
    Constant string_23625_Const = new_Constant((Optr)string_23625);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23628 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23627 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23628, (Optr)&t_block_return);
    Block PBlock23626 = new_Block_with(empty_Array, empty_Array, PThreadedCode23627, 1, PSend23628);
    // headerAt:ifAbsent:. 
    Send PSend23624 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23625_Const, (Optr)PBlock23626);
    Assign PAssign23623 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23624);
    String string_23629 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23629_Const = new_Constant((Optr)string_23629);
    // beginsWith:. 
    Send PSend23630 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23629_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23634 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23633 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23634, (Optr)&t_block_return);
    Block PBlock23632 = new_Block_with(empty_Array, empty_Array, PThreadedCode23633, 1, PSend23634);
    // ifFalse:. 
    Send PSend23631 = new_Send((Optr)PSend23630, SMB_ifFalse_, 1, (Optr)PBlock23632);
    String string_23635 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23635_Const = new_Constant((Optr)string_23635);
    // findString:. 
    Send PSend23636 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23635_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23637 = new_Send((Optr)PSend23636, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23638 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23639 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23637, (Optr)PSend23638);
    Array PThreadedCode23622 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23623, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23625, (Optr)&t_push_closure, (Optr)PBlock23626, (Optr)&t_send2, (Optr)PSend23624, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23629, (Optr)&t_send1, (Optr)PSend23630, (Optr)&t_send_ifFalse_, (Optr)PSend23631, (Optr)PBlock23632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23635, (Optr)&t_send1, (Optr)PSend23636, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23637, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23638, (Optr)&t_send2, (Optr)PSend23639, (Optr)&t_method_return);
    Block PBlock23620 = new_Block_with(PArray23621, empty_Array, PThreadedCode23622, 3, PAssign23623, PSend23631, PSend23639);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23640 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23620);
    Array PThreadedCode23619 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23620, (Optr)&t_send1, (Optr)PSend23640, (Optr)&t_method_return);
    Method PMethod23617 = new_Method_with(empty_Array, PArray23618, empty_Array, PThreadedCode23619, 1, PSend23640);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23617, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23643 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23647 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23646 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23647, (Optr)&t_block_return);
    Block PBlock23645 = new_Block_with(empty_Array, empty_Array, PThreadedCode23646, 1, PSend23647);
    // ifFalse:. 
    Send PSend23644 = new_Send((Optr)PSend23643, SMB_ifFalse_, 1, (Optr)PBlock23645);
    Array PThreadedCode23642 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23643, (Optr)&t_send_ifFalse_, (Optr)PSend23644, (Optr)PBlock23645, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23642, 2, PSend23644, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23641, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23649 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23651 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23651_Const = new_Constant((Optr)string_23651);
    // headerAt:put:. 
    Send PSend23652 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23651_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23650 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23651, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23652, (Optr)&t_method_return);
    Method PMethod23648 = new_Method_with(PArray23649, empty_Array, empty_Array, PThreadedCode23650, 1, PSend23652);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23648, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23654 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23657 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23660 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23662 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23663 = new_Send((Optr)PSend23662, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23664 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23665 = new_Send((Optr)PSend23663, SMB__equals_, 1, (Optr)PSend23664);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23669 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23670 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23668 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23670, (Optr)&t_block_return);
    Block PBlock23667 = new_Block_with(empty_Array, empty_Array, PThreadedCode23668, 2, PSend23669, PSend23670);
    // ifTrue:. 
    Send PSend23666 = new_Send((Optr)PSend23665, SMB_ifTrue_, 1, (Optr)PBlock23667);
    Array PThreadedCode23661 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23662, (Optr)&t_send0, (Optr)PSend23663, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23664, (Optr)&t_send1, (Optr)PSend23665, (Optr)&t_send_ifTrue_, (Optr)PSend23666, (Optr)PBlock23667, (Optr)&t_method_return);
    Block PBlock23659 = new_Block_with(PArray23660, empty_Array, PThreadedCode23661, 1, PSend23666);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23671 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23659);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23672 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23658 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23659, (Optr)&t_send1, (Optr)PSend23671, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23672, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23656 = new_Block_with(PArray23657, empty_Array, PThreadedCode23658, 3, PSend23671, PSend23672, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23673 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23656);
    Array PThreadedCode23655 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23656, (Optr)&t_send1, (Optr)PSend23673, (Optr)&t_method_return);
    Method PMethod23653 = new_Method_with(PArray23654, empty_Array, empty_Array, PThreadedCode23655, 1, PSend23673);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23653, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23675 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23678 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23681 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23683 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23683, (Optr)&t_method_return);
    Block PBlock23680 = new_Block_with(PArray23681, empty_Array, PThreadedCode23682, 1, PSend23683);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23684 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23680);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23685 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23679 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23680, (Optr)&t_send2, (Optr)PSend23684, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23685, (Optr)&t_method_return);
    Block PBlock23677 = new_Block_with(PArray23678, empty_Array, PThreadedCode23679, 2, PSend23684, PSend23685);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23686 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23677);
    Array PThreadedCode23676 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23677, (Optr)&t_send1, (Optr)PSend23686, (Optr)&t_method_return);
    Method PMethod23674 = new_Method_with(PArray23675, empty_Array, empty_Array, PThreadedCode23676, 1, PSend23686);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23674, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23692 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23691 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23692);
    Array PThreadedCode23690 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23691, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23692, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23689 = new_Block_with(empty_Array, empty_Array, PThreadedCode23690, 1, PAssign23691);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23693 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23689);
    Array PThreadedCode23688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23689, (Optr)&t_send1, (Optr)PSend23693, (Optr)&t_method_return);
    Method PMethod23687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23688, 1, PSend23693);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23687, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23695 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23698 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23697 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23698);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23702 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23701 = new_Block_with(empty_Array, empty_Array, PThreadedCode23702, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23700 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23701);
    Assign PAssign23699 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23700);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23705 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23704 = new_Send((Optr)PSend23705, SMB_writeStream, 0);
    Assign PAssign23703 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23704);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23706 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23707 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23708 = new_Send((Optr)PSend23707, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23712 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23711 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23712, (Optr)&t_block_return);
    Block PBlock23710 = new_Block_with(empty_Array, empty_Array, PThreadedCode23711, 1, PSend23712);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23715 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23714 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23715, (Optr)&t_block_return);
    Block PBlock23713 = new_Block_with(empty_Array, empty_Array, PThreadedCode23714, 1, PSend23715);
    // ifTrue:ifFalse:. 
    Send PSend23709 = new_Send((Optr)PSend23708, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23710, (Optr)PBlock23713);
    Array PThreadedCode23696 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23697, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23698, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23699, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23701, (Optr)&t_send1, (Optr)PSend23700, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23703, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23705, (Optr)&t_send0, (Optr)PSend23704, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23706, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23707, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23708, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23709, (Optr)PBlock23710, (Optr)PBlock23713, (Optr)&t_method_return);
    Method PMethod23694 = new_Method_with(empty_Array, PArray23695, empty_Array, PThreadedCode23696, 5, PAssign23697, PAssign23699, PAssign23703, PSend23706, PSend23709);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23694, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23719 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23721 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23721_Const = new_Constant((Optr)string_23721);
    // headerAt:. 
    Send PSend23722 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23721_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23723 = new_Send((Optr)PSend23722, SMB_asLowercase, 0);
    String string_23724 = new_String(L"close");
    Constant string_23724_Const = new_Constant((Optr)string_23724);
    // asLowercase. 
    Send PSend23725 = new_Send((Optr)string_23724_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23726 = new_Send((Optr)PSend23723, SMB__equals_, 1, (Optr)PSend23725);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23730 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23729 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23730, (Optr)&t_block_return);
    Block PBlock23728 = new_Block_with(empty_Array, empty_Array, PThreadedCode23729, 1, PSend23730);
    // ifTrue:. 
    Send PSend23727 = new_Send((Optr)PSend23726, SMB_ifTrue_, 1, (Optr)PBlock23728);
    String string_23731 = new_String(L"Connection");
    Constant string_23731_Const = new_Constant((Optr)string_23731);
    // headerAt:. 
    Send PSend23732 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23731_Const);
    // asLowercase. 
    Send PSend23733 = new_Send((Optr)PSend23732, SMB_asLowercase, 0);
    String string_23734 = new_String(L"keep-alive");
    Constant string_23734_Const = new_Constant((Optr)string_23734);
    // asLowercase. 
    Send PSend23735 = new_Send((Optr)string_23734_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23736 = new_Send((Optr)PSend23733, SMB__equals_, 1, (Optr)PSend23735);
    // escape:. 
    Send PSend23740 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23739 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23740, (Optr)&t_block_return);
    Block PBlock23738 = new_Block_with(empty_Array, empty_Array, PThreadedCode23739, 1, PSend23740);
    // ifTrue:. 
    Send PSend23737 = new_Send((Optr)PSend23736, SMB_ifTrue_, 1, (Optr)PBlock23738);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23741 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23742 = new_String(L"HTTP/1.0");
    Constant string_23742_Const = new_Constant((Optr)string_23742);
    // =. 
    Send PSend23743 = new_Send((Optr)PSend23741, SMB__equals_, 1, (Optr)string_23742_Const);
    // escape:. 
    Send PSend23747 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23746 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23747, (Optr)&t_block_return);
    Block PBlock23745 = new_Block_with(empty_Array, empty_Array, PThreadedCode23746, 1, PSend23747);
    // ifTrue:. 
    Send PSend23744 = new_Send((Optr)PSend23743, SMB_ifTrue_, 1, (Optr)PBlock23745);
    // protocol. 
    Send PSend23748 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23749 = new_String(L"HTTP/1.1");
    Constant string_23749_Const = new_Constant((Optr)string_23749);
    // =. 
    Send PSend23750 = new_Send((Optr)PSend23748, SMB__equals_, 1, (Optr)string_23749_Const);
    // escape:. 
    Send PSend23754 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23753 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23754, (Optr)&t_block_return);
    Block PBlock23752 = new_Block_with(empty_Array, empty_Array, PThreadedCode23753, 1, PSend23754);
    // ifTrue:. 
    Send PSend23751 = new_Send((Optr)PSend23750, SMB_ifTrue_, 1, (Optr)PBlock23752);
    Array PThreadedCode23720 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23721, (Optr)&t_send1, (Optr)PSend23722, (Optr)&t_send0, (Optr)PSend23723, (Optr)&t_push1, (Optr)string_23724, (Optr)&t_send0, (Optr)PSend23725, (Optr)&t_send1, (Optr)PSend23726, (Optr)&t_send_ifTrue_, (Optr)PSend23727, (Optr)PBlock23728, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23731, (Optr)&t_send1, (Optr)PSend23732, (Optr)&t_send0, (Optr)PSend23733, (Optr)&t_push1, (Optr)string_23734, (Optr)&t_send0, (Optr)PSend23735, (Optr)&t_send1, (Optr)PSend23736, (Optr)&t_send_ifTrue_, (Optr)PSend23737, (Optr)PBlock23738, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23741, (Optr)&t_push1, (Optr)string_23742, (Optr)&t_send1, (Optr)PSend23743, (Optr)&t_send_ifTrue_, (Optr)PSend23744, (Optr)PBlock23745, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23748, (Optr)&t_push1, (Optr)string_23749, (Optr)&t_send1, (Optr)PSend23750, (Optr)&t_send_ifTrue_, (Optr)PSend23751, (Optr)PBlock23752, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23718 = new_Block_with(PArray23719, empty_Array, PThreadedCode23720, 5, PSend23727, PSend23737, PSend23744, PSend23751, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23755 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23718);
    Array PThreadedCode23717 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23718, (Optr)&t_send1, (Optr)PSend23755, (Optr)&t_method_return);
    Method PMethod23716 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23717, 1, PSend23755);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23716, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23757 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23762 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23764 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23765 = new_Send((Optr)PSend23764, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23766 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23767 = new_Send((Optr)PSend23765, SMB__equals_, 1, (Optr)PSend23766);
    Array PThreadedCode23763 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23764, (Optr)&t_send0, (Optr)PSend23765, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23766, (Optr)&t_send1, (Optr)PSend23767, (Optr)&t_method_return);
    Block PBlock23761 = new_Block_with(PArray23762, empty_Array, PThreadedCode23763, 1, PSend23767);
    // reject:. 
    Send PSend23760 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23761);
    Assign PAssign23759 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23760);
    Array PThreadedCode23758 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23759, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23761, (Optr)&t_send1, (Optr)PSend23760, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23756 = new_Method_with(PArray23757, empty_Array, empty_Array, PThreadedCode23758, 2, PAssign23759, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23756, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23769 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23771 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23772 = new_Send((Optr)PSend23771, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23773 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23772);
    Array PThreadedCode23770 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23771, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23772, (Optr)&t_send1, (Optr)PSend23773, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23768 = new_Method_with(PArray23769, empty_Array, empty_Array, PThreadedCode23770, 2, PSend23773, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23768, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23775 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23777 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23776 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23777, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23774 = new_Method_with(PArray23775, empty_Array, empty_Array, PThreadedCode23776, 2, PAssign23777, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23774, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23779 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23781 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23780 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23781, (Optr)&t_method_return);
    Method PMethod23778 = new_Method_with(PArray23779, empty_Array, empty_Array, PThreadedCode23780, 1, PSend23781);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23778, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23787 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23789 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23789_Const = new_Constant((Optr)string_23789);
    // at:put:. 
    Send PSend23790 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23789_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23791 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23791_Const = new_Constant((Optr)string_23791);
    // at:put:. 
    Send PSend23792 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23791_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23793 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23793_Const = new_Constant((Optr)string_23793);
    // at:put:. 
    Send PSend23794 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23793_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23795 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23795_Const = new_Constant((Optr)string_23795);
    // at:put:. 
    Send PSend23796 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23795_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23797 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23797_Const = new_Constant((Optr)string_23797);
    // at:put:. 
    Send PSend23798 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23797_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23799 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23799_Const = new_Constant((Optr)string_23799);
    // at:put:. 
    Send PSend23800 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23799_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23801 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23801_Const = new_Constant((Optr)string_23801);
    // at:put:. 
    Send PSend23802 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23801_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23803 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23803_Const = new_Constant((Optr)string_23803);
    // at:put:. 
    Send PSend23804 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23803_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23805 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23805_Const = new_Constant((Optr)string_23805);
    // at:put:. 
    Send PSend23806 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23805_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23807 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23807_Const = new_Constant((Optr)string_23807);
    // at:put:. 
    Send PSend23808 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23807_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23809 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23809_Const = new_Constant((Optr)string_23809);
    // at:put:. 
    Send PSend23810 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23809_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23811 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23811_Const = new_Constant((Optr)string_23811);
    // at:put:. 
    Send PSend23812 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23811_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23813 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23813_Const = new_Constant((Optr)string_23813);
    // at:put:. 
    Send PSend23814 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23813_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23815 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23815_Const = new_Constant((Optr)string_23815);
    // at:put:. 
    Send PSend23816 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23815_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23817 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23817_Const = new_Constant((Optr)string_23817);
    // at:put:. 
    Send PSend23818 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23817_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23819 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23819_Const = new_Constant((Optr)string_23819);
    // at:put:. 
    Send PSend23820 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23819_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23821 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23821_Const = new_Constant((Optr)string_23821);
    // at:put:. 
    Send PSend23822 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23821_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23823 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23823_Const = new_Constant((Optr)string_23823);
    // at:put:. 
    Send PSend23824 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23823_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23825 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23825_Const = new_Constant((Optr)string_23825);
    // at:put:. 
    Send PSend23826 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23825_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23827 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23827_Const = new_Constant((Optr)string_23827);
    // at:put:. 
    Send PSend23828 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23827_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23829 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23829_Const = new_Constant((Optr)string_23829);
    // at:put:. 
    Send PSend23830 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23829_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23831 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23831_Const = new_Constant((Optr)string_23831);
    // at:put:. 
    Send PSend23832 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23831_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23833 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23833_Const = new_Constant((Optr)string_23833);
    // at:put:. 
    Send PSend23834 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23833_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23835 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23835_Const = new_Constant((Optr)string_23835);
    // at:put:. 
    Send PSend23836 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23835_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23837 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23837_Const = new_Constant((Optr)string_23837);
    // at:put:. 
    Send PSend23838 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23837_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23839 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23839_Const = new_Constant((Optr)string_23839);
    // at:put:. 
    Send PSend23840 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23839_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23841 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23841_Const = new_Constant((Optr)string_23841);
    // at:put:. 
    Send PSend23842 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23841_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23843 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23843_Const = new_Constant((Optr)string_23843);
    // at:put:. 
    Send PSend23844 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23843_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23845 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23845_Const = new_Constant((Optr)string_23845);
    // at:put:. 
    Send PSend23846 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23845_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23847 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23847_Const = new_Constant((Optr)string_23847);
    // at:put:. 
    Send PSend23848 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23847_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23849 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23849_Const = new_Constant((Optr)string_23849);
    // at:put:. 
    Send PSend23850 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23849_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23851 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23851_Const = new_Constant((Optr)string_23851);
    // at:put:. 
    Send PSend23852 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23851_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23853 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23853_Const = new_Constant((Optr)string_23853);
    // at:put:. 
    Send PSend23854 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23853_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23855 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23855_Const = new_Constant((Optr)string_23855);
    // at:put:. 
    Send PSend23856 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23855_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23857 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23857_Const = new_Constant((Optr)string_23857);
    // at:put:. 
    Send PSend23858 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23857_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23859 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23859_Const = new_Constant((Optr)string_23859);
    // at:put:. 
    Send PSend23860 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23859_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23861 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23861_Const = new_Constant((Optr)string_23861);
    // at:put:. 
    Send PSend23862 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23861_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23863 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23863_Const = new_Constant((Optr)string_23863);
    // at:put:. 
    Send PSend23864 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23863_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23865 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23865_Const = new_Constant((Optr)string_23865);
    // at:put:. 
    Send PSend23866 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23865_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23867 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23867_Const = new_Constant((Optr)string_23867);
    // at:put:. 
    Send PSend23868 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23867_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23869 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23869_Const = new_Constant((Optr)string_23869);
    // at:put:. 
    Send PSend23870 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23869_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23871 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23871_Const = new_Constant((Optr)string_23871);
    // at:put:. 
    Send PSend23872 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23871_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23873 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23873_Const = new_Constant((Optr)string_23873);
    // at:put:. 
    Send PSend23874 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23873_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23875 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23875_Const = new_Constant((Optr)string_23875);
    // at:put:. 
    Send PSend23876 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23875_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23877 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23877_Const = new_Constant((Optr)string_23877);
    // at:put:. 
    Send PSend23878 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23877_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23879 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23879_Const = new_Constant((Optr)string_23879);
    // at:put:. 
    Send PSend23880 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23879_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23881 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23788 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23789, (Optr)&t_send2, (Optr)PSend23790, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23791, (Optr)&t_send2, (Optr)PSend23792, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23793, (Optr)&t_send2, (Optr)PSend23794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23795, (Optr)&t_send2, (Optr)PSend23796, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23797, (Optr)&t_send2, (Optr)PSend23798, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23799, (Optr)&t_send2, (Optr)PSend23800, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23801, (Optr)&t_send2, (Optr)PSend23802, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23803, (Optr)&t_send2, (Optr)PSend23804, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23805, (Optr)&t_send2, (Optr)PSend23806, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23807, (Optr)&t_send2, (Optr)PSend23808, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23809, (Optr)&t_send2, (Optr)PSend23810, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23811, (Optr)&t_send2, (Optr)PSend23812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23813, (Optr)&t_send2, (Optr)PSend23814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23815, (Optr)&t_send2, (Optr)PSend23816, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23817, (Optr)&t_send2, (Optr)PSend23818, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23819, (Optr)&t_send2, (Optr)PSend23820, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23821, (Optr)&t_send2, (Optr)PSend23822, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23823, (Optr)&t_send2, (Optr)PSend23824, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23825, (Optr)&t_send2, (Optr)PSend23826, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23827, (Optr)&t_send2, (Optr)PSend23828, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23829, (Optr)&t_send2, (Optr)PSend23830, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23831, (Optr)&t_send2, (Optr)PSend23832, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23833, (Optr)&t_send2, (Optr)PSend23834, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23835, (Optr)&t_send2, (Optr)PSend23836, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23837, (Optr)&t_send2, (Optr)PSend23838, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23839, (Optr)&t_send2, (Optr)PSend23840, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23841, (Optr)&t_send2, (Optr)PSend23842, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23843, (Optr)&t_send2, (Optr)PSend23844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23845, (Optr)&t_send2, (Optr)PSend23846, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23847, (Optr)&t_send2, (Optr)PSend23848, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23849, (Optr)&t_send2, (Optr)PSend23850, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23851, (Optr)&t_send2, (Optr)PSend23852, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23853, (Optr)&t_send2, (Optr)PSend23854, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23855, (Optr)&t_send2, (Optr)PSend23856, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23857, (Optr)&t_send2, (Optr)PSend23858, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23859, (Optr)&t_send2, (Optr)PSend23860, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23861, (Optr)&t_send2, (Optr)PSend23862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23863, (Optr)&t_send2, (Optr)PSend23864, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23865, (Optr)&t_send2, (Optr)PSend23866, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23867, (Optr)&t_send2, (Optr)PSend23868, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23869, (Optr)&t_send2, (Optr)PSend23870, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23871, (Optr)&t_send2, (Optr)PSend23872, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23873, (Optr)&t_send2, (Optr)PSend23874, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23875, (Optr)&t_send2, (Optr)PSend23876, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23877, (Optr)&t_send2, (Optr)PSend23878, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23879, (Optr)&t_send2, (Optr)PSend23880, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23881, (Optr)&t_method_return);
    Block PBlock23786 = new_Block_with(PArray23787, empty_Array, PThreadedCode23788, 47, PSend23790, PSend23792, PSend23794, PSend23796, PSend23798, PSend23800, PSend23802, PSend23804, PSend23806, PSend23808, PSend23810, PSend23812, PSend23814, PSend23816, PSend23818, PSend23820, PSend23822, PSend23824, PSend23826, PSend23828, PSend23830, PSend23832, PSend23834, PSend23836, PSend23838, PSend23840, PSend23842, PSend23844, PSend23846, PSend23848, PSend23850, PSend23852, PSend23854, PSend23856, PSend23858, PSend23860, PSend23862, PSend23864, PSend23866, PSend23868, PSend23870, PSend23872, PSend23874, PSend23876, PSend23878, PSend23880, PSend23881);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23882 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23785 = new_Send((Optr)PBlock23786, SMB_value_, 1, (Optr)PSend23882);
    Assign PAssign23784 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23785);
    Array PThreadedCode23783 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23784, (Optr)&t_push_closure, (Optr)PBlock23786, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23882, (Optr)&t_send1, (Optr)PSend23785, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23783, 2, PAssign23784, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23782, HEADER(WebClient_Core_WebMessage_Class));
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