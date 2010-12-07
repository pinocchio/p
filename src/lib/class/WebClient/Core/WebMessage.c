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
    String string_23306 = new_String(L"Content-Type");
    String string_23309 = new_String(L"application/octet-stream");
    Array PThreadedCode23308 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23309, (Optr)&t_block_return);
    Constant string_23309_Const = new_Constant((Optr)string_23309);
    Block PBlock23307 = new_Block_with(empty_Array, empty_Array, PThreadedCode23308, 1, string_23309_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23306_Const = new_Constant((Optr)string_23306);
    // headerAt:ifAbsent:. 
    Send PSend23310 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23306_Const, (Optr)PBlock23307);
    Array PThreadedCode23305 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23306, (Optr)&t_push_closure, (Optr)PBlock23307, (Optr)&t_send2, (Optr)PSend23310, (Optr)&t_method_return);
    Method PMethod23304 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23305, 1, PSend23310);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod23304, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23315 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode23314 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23315, (Optr)&t_block_return);
    Block PBlock23313 = new_Block_with(empty_Array, empty_Array, PThreadedCode23314, 1, PSend23315);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23316 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23313);
    Array PThreadedCode23312 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23313, (Optr)&t_send1, (Optr)PSend23316, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23311 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23312, 2, PSend23316, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod23311, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode23318 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23317 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23318, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod23317, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23322 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend23324 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23328 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23327 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23328, (Optr)&t_block_return);
    Block PBlock23326 = new_Block_with(empty_Array, empty_Array, PThreadedCode23327, 1, PSend23328);
    // ifFalse:. 
    Send PSend23325 = new_Send((Optr)PSend23324, SMB_ifFalse_, 1, (Optr)PBlock23326);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend23329 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend23330 = new_Send((Optr)PSend23329, SMB_remoteAddress, 0);
    Array PThreadedCode23323 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend23324, (Optr)&t_send_ifFalse_, (Optr)PSend23325, (Optr)PBlock23326, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23329, (Optr)&t_send0, (Optr)PSend23330, (Optr)&t_method_return);
    Block PBlock23321 = new_Block_with(PArray23322, empty_Array, PThreadedCode23323, 2, PSend23325, PSend23330);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23331 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23321);
    Array PThreadedCode23320 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23321, (Optr)&t_send1, (Optr)PSend23331, (Optr)&t_method_return);
    Method PMethod23319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23320, 1, PSend23331);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod23319, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23333 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign23335 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23334 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23335, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23332 = new_Method_with(PArray23333, empty_Array, empty_Array, PThreadedCode23334, 2, PAssign23335, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod23332, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23337 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray23338 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23341 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23340 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend23341);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray23343 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23345 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode23344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend23345, (Optr)&t_method_return);
    Block PBlock23342 = new_Block_with(PArray23343, empty_Array, PThreadedCode23344, 1, PSend23345);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23346 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23342);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23347 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23350 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23349 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23350, (Optr)&t_block_return);
    Block PBlock23348 = new_Block_with(empty_Array, empty_Array, PThreadedCode23349, 1, PSend23350);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend23351 = new_Send((Optr)PSend23347, SMB_ifEmpty_, 1, (Optr)PBlock23348);
    Array PThreadedCode23339 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign23340, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23341, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23342, (Optr)&t_send2, (Optr)PSend23346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend23347, (Optr)&t_push_closure, (Optr)PBlock23348, (Optr)&t_send1, (Optr)PSend23351, (Optr)&t_method_return);
    Method PMethod23336 = new_Method_with(PArray23337, PArray23338, empty_Array, PThreadedCode23339, 3, PAssign23340, PSend23346, PSend23351);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod23336, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23353 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_23357 = new_String(L"");
    Array PThreadedCode23356 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23357, (Optr)&t_block_return);
    Constant string_23357_Const = new_Constant((Optr)string_23357);
    Block PBlock23355 = new_Block_with(empty_Array, empty_Array, PThreadedCode23356, 1, string_23357_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend23358 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23355);
    Array PThreadedCode23354 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23355, (Optr)&t_send2, (Optr)PSend23358, (Optr)&t_method_return);
    Method PMethod23352 = new_Method_with(PArray23353, empty_Array, empty_Array, PThreadedCode23354, 1, PSend23358);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod23352, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray23360 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray23361 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign23363 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23365 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign23364 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23365);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend23369 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign23368 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend23369);
    String string_23373 = new_String(L"16r");
    Constant string_23373_Const = new_Constant((Optr)string_23373);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend23374 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend23372 = new_Send((Optr)string_23373_Const, SMB__append_, 1, (Optr)PSend23374);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend23371 = new_Send((Optr)PSend23372, SMB_asNumber, 0);
    Assign PAssign23370 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend23371);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23375 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode23367 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign23368, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend23369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23370, (Optr)&t_push1, (Optr)string_23373, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend23374, (Optr)&t_send1, (Optr)PSend23372, (Optr)&t_send0, (Optr)PSend23371, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23375, (Optr)&t_block_return);
    Block PBlock23366 = new_Block_with(empty_Array, empty_Array, PThreadedCode23367, 3, PAssign23368, PAssign23370, PSend23375);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23380 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23379 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23380, (Optr)&t_block_return);
    Block PBlock23378 = new_Block_with(empty_Array, empty_Array, PThreadedCode23379, 1, PSend23380);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23381 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23378);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23382 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend23383 = new_Send((Optr)PSend23382, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23389 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23388 = new_Send((Optr)PSend23389, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23387 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23388);
    Array PThreadedCode23386 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23387, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23389, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23388, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23385 = new_Block_with(empty_Array, empty_Array, PThreadedCode23386, 1, PAssign23387);
    // ifFalse:. 
    Send PSend23384 = new_Send((Optr)PSend23383, SMB_ifFalse_, 1, (Optr)PBlock23385);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23391 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign23390 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23391);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23392 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend23393 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend23395 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23394 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend23395);
    Array PThreadedCode23377 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23378, (Optr)&t_send1, (Optr)PSend23381, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23382, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23383, (Optr)&t_send_ifFalse_, (Optr)PSend23384, (Optr)PBlock23385, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23390, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23391, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend23392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23393, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23394, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23395, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23376 = new_Block_with(empty_Array, empty_Array, PThreadedCode23377, 6, PSend23381, PSend23384, PAssign23390, PSend23392, PSend23393, PAssign23394);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23396 = new_Send((Optr)PBlock23366, SMB_whileFalse_, 1, (Optr)PBlock23376);
    // skip:. 
    Send PSend23397 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23398 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23401 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23400 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23401, (Optr)&t_block_return);
    Block PBlock23399 = new_Block_with(empty_Array, empty_Array, PThreadedCode23400, 1, PSend23401);
    // ifNotNil:. 
    Send PSend23402 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23399);
    Array PThreadedCode23362 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23363, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23364, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23365, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23366, (Optr)&t_push_closure, (Optr)PBlock23376, (Optr)&t_send1, (Optr)PSend23396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23398, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23399, (Optr)&t_send1, (Optr)PSend23402, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23359 = new_Method_with(PArray23360, PArray23361, empty_Array, PThreadedCode23362, 7, PAssign23363, PAssign23364, PSend23396, PSend23397, PSend23398, PSend23402, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod23359, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23404 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23407 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23409 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23410 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23411 = new_Send((Optr)PSend23409, SMB__equals_, 1, (Optr)PSend23410);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23415 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode23414 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23415, (Optr)&t_block_return);
    Block PBlock23413 = new_Block_with(empty_Array, empty_Array, PThreadedCode23414, 1, PSend23415);
    // ifTrue:. 
    Send PSend23412 = new_Send((Optr)PSend23411, SMB_ifTrue_, 1, (Optr)PBlock23413);
    Array PThreadedCode23408 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend23409, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend23410, (Optr)&t_send1, (Optr)PSend23411, (Optr)&t_send_ifTrue_, (Optr)PSend23412, (Optr)PBlock23413, (Optr)&t_method_return);
    Block PBlock23406 = new_Block_with(PArray23407, empty_Array, PThreadedCode23408, 1, PSend23412);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23416 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23406);
    Array PThreadedCode23405 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23406, (Optr)&t_send1, (Optr)PSend23416, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23403 = new_Method_with(PArray23404, empty_Array, empty_Array, PThreadedCode23405, 2, PSend23416, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod23403, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23418 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23420 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23421 = new_Send((Optr)PSend23420, SMB_name, 0);
    // printOn:. 
    Send PSend23422 = new_Send((Optr)PSend23421, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend23423 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23424 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend23425 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode23419 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23420, (Optr)&t_send0, (Optr)PSend23421, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23422, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend23423, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend23425, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23417 = new_Method_with(PArray23418, empty_Array, empty_Array, PThreadedCode23419, 5, PSend23422, PSend23423, PSend23424, PSend23425, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod23417, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23429 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23431 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23434 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23433 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23434, (Optr)&t_block_return);
    Block PBlock23432 = new_Block_with(empty_Array, empty_Array, PThreadedCode23433, 1, PSend23434);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23431_Const = new_Constant((Optr)string_23431);
    // headerAt:ifAbsent:. 
    Send PSend23435 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23431_Const, (Optr)PBlock23432);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23436 = new_Send((Optr)PSend23435, SMB_asInteger, 0);
    Array PThreadedCode23430 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23431, (Optr)&t_push_closure, (Optr)PBlock23432, (Optr)&t_send2, (Optr)PSend23435, (Optr)&t_send0, (Optr)PSend23436, (Optr)&t_method_return);
    Block PBlock23428 = new_Block_with(PArray23429, empty_Array, PThreadedCode23430, 1, PSend23436);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23437 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23428);
    Array PThreadedCode23427 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23428, (Optr)&t_send1, (Optr)PSend23437, (Optr)&t_method_return);
    Method PMethod23426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23427, 1, PSend23437);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23426, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23439 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23443 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23444 = new_Send((Optr)PSend23443, SMB_asArray, 0);
    Array PThreadedCode23442 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23443, (Optr)&t_send0, (Optr)PSend23444, (Optr)&t_block_return);
    Block PBlock23441 = new_Block_with(empty_Array, empty_Array, PThreadedCode23442, 1, PSend23444);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23445 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23441);
    Array PThreadedCode23440 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23441, (Optr)&t_send2, (Optr)PSend23445, (Optr)&t_method_return);
    Method PMethod23438 = new_Method_with(PArray23439, empty_Array, empty_Array, PThreadedCode23440, 1, PSend23445);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23438, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23447 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23449 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23448 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23449, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23446 = new_Method_with(PArray23447, empty_Array, empty_Array, PThreadedCode23448, 2, PAssign23449, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23446, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23451 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23453 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23453_Const = new_Constant((Optr)string_23453);
    // headerAt:put:. 
    Send PSend23454 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23453_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23452 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23453, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23454, (Optr)&t_method_return);
    Method PMethod23450 = new_Method_with(PArray23451, empty_Array, empty_Array, PThreadedCode23452, 1, PSend23454);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23450, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23456 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23457 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23460 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23462 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23462_Const = new_Constant((Optr)string_23462);
    // headerAt:. 
    Send PSend23463 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23462_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23465 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23467 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23467_Const = new_Constant((Optr)string_23467);
    // =. 
    Send PSend23468 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23467_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23472 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23473 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23472);
    Array PThreadedCode23471 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23472, (Optr)&t_send1, (Optr)PSend23473, (Optr)&t_block_return);
    Block PBlock23470 = new_Block_with(empty_Array, empty_Array, PThreadedCode23471, 1, PSend23473);
    String string_23476 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23476_Const = new_Constant((Optr)string_23476);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23477 = new_Send((Optr)string_23476_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23478 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23477);
    Array PThreadedCode23475 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23476, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23477, (Optr)&t_send1, (Optr)PSend23478, (Optr)&t_block_return);
    Block PBlock23474 = new_Block_with(empty_Array, empty_Array, PThreadedCode23475, 1, PSend23478);
    // ifTrue:ifFalse:. 
    Send PSend23469 = new_Send((Optr)PSend23468, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23470, (Optr)PBlock23474);
    Array PThreadedCode23466 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23467, (Optr)&t_send1, (Optr)PSend23468, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23469, (Optr)PBlock23470, (Optr)PBlock23474, (Optr)&t_method_return);
    Block PBlock23464 = new_Block_with(PArray23465, empty_Array, PThreadedCode23466, 1, PSend23469);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23479 = new_Send((Optr)PSend23463, SMB_ifNotEmpty_, 1, (Optr)PBlock23464);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23480 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23484 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23483 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23484, (Optr)&t_block_return);
    Block PBlock23482 = new_Block_with(empty_Array, empty_Array, PThreadedCode23483, 1, PSend23484);
    // ifTrue:. 
    Send PSend23481 = new_Send((Optr)PSend23480, SMB_ifTrue_, 1, (Optr)PBlock23482);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23486 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23485 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23486);
    Assign PAssign23487 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23491 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23490 = new_Block_with(empty_Array, empty_Array, PThreadedCode23491, 1, int_0_Const);
    // ifNil:. 
    Send PSend23489 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23490);
    Assign PAssign23488 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23489);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23494 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23497 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23498 = new_Send((Optr)PSend23497, SMB_not, 0);
    Array PThreadedCode23496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23497, (Optr)&t_send0, (Optr)PSend23498, (Optr)&t_block_return);
    Block PBlock23495 = new_Block_with(empty_Array, empty_Array, PThreadedCode23496, 1, PSend23498);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23499 = new_Send((Optr)PSend23494, SMB_and_, 1, (Optr)PBlock23495);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23502 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23501 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23502, (Optr)&t_block_return);
    Block PBlock23500 = new_Block_with(empty_Array, empty_Array, PThreadedCode23501, 1, PSend23502);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23503 = new_Send((Optr)PSend23499, SMB_or_, 1, (Optr)PBlock23500);
    Array PThreadedCode23493 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23494, (Optr)&t_push_closure, (Optr)PBlock23495, (Optr)&t_send1, (Optr)PSend23499, (Optr)&t_push_closure, (Optr)PBlock23500, (Optr)&t_send1, (Optr)PSend23503, (Optr)&t_block_return);
    Block PBlock23492 = new_Block_with(empty_Array, empty_Array, PThreadedCode23493, 1, PSend23503);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23508 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23507 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23508, (Optr)&t_block_return);
    Block PBlock23506 = new_Block_with(empty_Array, empty_Array, PThreadedCode23507, 1, PSend23508);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23509 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23506);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23513 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23512 = new_Block_with(empty_Array, empty_Array, PThreadedCode23513, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23516 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23515 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23516, (Optr)&t_block_return);
    Block PBlock23514 = new_Block_with(empty_Array, empty_Array, PThreadedCode23515, 1, PSend23516);
    // ifNil:ifNotNil:. 
    Send PSend23511 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23512, (Optr)PBlock23514);
    Assign PAssign23510 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23511);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23517 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23518 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23517);
    // size. 
    Send PSend23523 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23522 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23523);
    Array PThreadedCode23521 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23522, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23523, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23520 = new_Block_with(empty_Array, empty_Array, PThreadedCode23521, 1, PAssign23522);
    // ifTrue:. 
    Send PSend23519 = new_Send((Optr)PSend23518, SMB_ifTrue_, 1, (Optr)PBlock23520);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23525 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23524 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23525);
    // size. 
    Send PSend23526 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23527 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23526);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23531 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23530 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23531, (Optr)&t_block_return);
    Block PBlock23529 = new_Block_with(empty_Array, empty_Array, PThreadedCode23530, 1, PSend23531);
    Array PThreadedCode23533 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23532 = new_Block_with(empty_Array, empty_Array, PThreadedCode23533, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23528 = new_Send((Optr)PSend23527, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23529, (Optr)PBlock23532);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23534 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23528);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23537 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23536 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23537);
    Assign PAssign23535 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23536);
    Array PThreadedCode23505 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23506, (Optr)&t_send1, (Optr)PSend23509, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23510, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23512, (Optr)&t_push_closure, (Optr)PBlock23514, (Optr)&t_send2, (Optr)PSend23511, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23517, (Optr)&t_send1, (Optr)PSend23518, (Optr)&t_send_ifTrue_, (Optr)PSend23519, (Optr)PBlock23520, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23524, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23525, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23526, (Optr)&t_send1, (Optr)PSend23527, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23528, (Optr)PBlock23529, (Optr)PBlock23532, (Optr)&t_send1, (Optr)PSend23534, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23535, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23537, (Optr)&t_send1, (Optr)PSend23536, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23504 = new_Block_with(empty_Array, empty_Array, PThreadedCode23505, 6, PSend23509, PAssign23510, PSend23519, PAssign23524, PSend23534, PAssign23535);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23538 = new_Send((Optr)PBlock23492, SMB_whileTrue_, 1, (Optr)PBlock23504);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23539 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23542 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23541 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23542, (Optr)&t_block_return);
    Block PBlock23540 = new_Block_with(empty_Array, empty_Array, PThreadedCode23541, 1, PSend23542);
    // ifNotNil:. 
    Send PSend23543 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23540);
    Array PThreadedCode23461 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23462, (Optr)&t_send1, (Optr)PSend23463, (Optr)&t_push_closure, (Optr)PBlock23464, (Optr)&t_send1, (Optr)PSend23479, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23480, (Optr)&t_send_ifTrue_, (Optr)PSend23481, (Optr)PBlock23482, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23485, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23486, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23487, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23488, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23490, (Optr)&t_send1, (Optr)PSend23489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23492, (Optr)&t_push_closure, (Optr)PBlock23504, (Optr)&t_send1, (Optr)PSend23538, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23540, (Optr)&t_send1, (Optr)PSend23543, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23459 = new_Block_with(PArray23460, empty_Array, PThreadedCode23461, 9, PSend23479, PSend23481, PAssign23485, PAssign23487, PAssign23488, PSend23538, PSend23539, PSend23543, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23544 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23459);
    Array PThreadedCode23458 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23459, (Optr)&t_send1, (Optr)PSend23544, (Optr)&t_method_return);
    Method PMethod23455 = new_Method_with(PArray23456, PArray23457, empty_Array, PThreadedCode23458, 1, PSend23544);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23455, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23548 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23550 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23549 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23550, (Optr)&t_method_return);
    Block PBlock23547 = new_Block_with(PArray23548, empty_Array, PThreadedCode23549, 1, PSend23550);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23551 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23547);
    Array PThreadedCode23546 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23547, (Optr)&t_send1, (Optr)PSend23551, (Optr)&t_method_return);
    Method PMethod23545 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23546, 1, PSend23551);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23545, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23553 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23556 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23559 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23558 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23559);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23564 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23563 = new_Block_with(empty_Array, empty_Array, PThreadedCode23564, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23562 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23563);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23566 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23568 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23567 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23568, (Optr)&t_method_return);
    Block PBlock23565 = new_Block_with(PArray23566, empty_Array, PThreadedCode23567, 1, PSend23568);
    // new:streamContents:. 
    Send PSend23561 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23562, (Optr)PBlock23565);
    Assign PAssign23560 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23561);
    Array PThreadedCode23557 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23558, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23559, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23560, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23563, (Optr)&t_send1, (Optr)PSend23562, (Optr)&t_push_closure, (Optr)PBlock23565, (Optr)&t_send2, (Optr)PSend23561, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23555 = new_Block_with(empty_Array, PArray23556, PThreadedCode23557, 2, PAssign23558, PAssign23560);
    // ifNil:. 
    Send PSend23569 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23555);
    Array PThreadedCode23554 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23555, (Optr)&t_send1, (Optr)PSend23569, (Optr)&t_method_return);
    Method PMethod23552 = new_Method_with(PArray23553, empty_Array, empty_Array, PThreadedCode23554, 1, PSend23569);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23552, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23571 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23570 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23571, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23570, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23573 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23572 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23573, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23572, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23575 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23578 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23581 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23583 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23583_Const = new_Constant((Optr)string_23583);
    // ,. 
    Send PSend23584 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23583_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23585 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23586 = new_Send((Optr)PSend23584, SMB__append_, 1, (Optr)PSend23585);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23587 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23586);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23588 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23582 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23583, (Optr)&t_send1, (Optr)PSend23584, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23585, (Optr)&t_send1, (Optr)PSend23586, (Optr)&t_send1, (Optr)PSend23587, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23588, (Optr)&t_method_return);
    Block PBlock23580 = new_Block_with(PArray23581, empty_Array, PThreadedCode23582, 2, PSend23587, PSend23588);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23589 = new_Send((Optr)PBlock23580, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23579 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23580, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23589, (Optr)&t_method_return);
    Block PBlock23577 = new_Block_with(PArray23578, empty_Array, PThreadedCode23579, 1, PSend23589);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23590 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23577);
    Array PThreadedCode23576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23577, (Optr)&t_send1, (Optr)PSend23590, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23574 = new_Method_with(PArray23575, empty_Array, empty_Array, PThreadedCode23576, 2, PSend23590, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23574, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23595 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23594 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23595, (Optr)&t_block_return);
    Block PBlock23593 = new_Block_with(empty_Array, empty_Array, PThreadedCode23594, 1, PSend23595);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23596 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23593);
    Array PThreadedCode23592 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23593, (Optr)&t_send1, (Optr)PSend23596, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23592, 2, PSend23596, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23591, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23598 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23600 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23601 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23599 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23601, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23597 = new_Method_with(PArray23598, empty_Array, empty_Array, PThreadedCode23599, 3, PSend23600, PSend23601, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23597, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23603 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23606 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23608 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23609 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23610 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23608, (Optr)PSend23609);
    Array PThreadedCode23607 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23608, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23609, (Optr)&t_send2, (Optr)PSend23610, (Optr)&t_method_return);
    Block PBlock23605 = new_Block_with(PArray23606, empty_Array, PThreadedCode23607, 1, PSend23610);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23611 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23605);
    Array PThreadedCode23604 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23605, (Optr)&t_send1, (Optr)PSend23611, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23602 = new_Method_with(PArray23603, empty_Array, empty_Array, PThreadedCode23604, 2, PSend23611, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23602, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23613 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23616 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23620 = new_String(L"Content-Type");
    Constant string_23620_Const = new_Constant((Optr)string_23620);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23623 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23622 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23623, (Optr)&t_block_return);
    Block PBlock23621 = new_Block_with(empty_Array, empty_Array, PThreadedCode23622, 1, PSend23623);
    // headerAt:ifAbsent:. 
    Send PSend23619 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23620_Const, (Optr)PBlock23621);
    Assign PAssign23618 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23619);
    String string_23624 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23624_Const = new_Constant((Optr)string_23624);
    // beginsWith:. 
    Send PSend23625 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23624_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23629 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23628 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23629, (Optr)&t_block_return);
    Block PBlock23627 = new_Block_with(empty_Array, empty_Array, PThreadedCode23628, 1, PSend23629);
    // ifFalse:. 
    Send PSend23626 = new_Send((Optr)PSend23625, SMB_ifFalse_, 1, (Optr)PBlock23627);
    String string_23630 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23630_Const = new_Constant((Optr)string_23630);
    // findString:. 
    Send PSend23631 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23630_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23632 = new_Send((Optr)PSend23631, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23633 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23634 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23632, (Optr)PSend23633);
    Array PThreadedCode23617 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23618, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23620, (Optr)&t_push_closure, (Optr)PBlock23621, (Optr)&t_send2, (Optr)PSend23619, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23624, (Optr)&t_send1, (Optr)PSend23625, (Optr)&t_send_ifFalse_, (Optr)PSend23626, (Optr)PBlock23627, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23630, (Optr)&t_send1, (Optr)PSend23631, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23632, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23633, (Optr)&t_send2, (Optr)PSend23634, (Optr)&t_method_return);
    Block PBlock23615 = new_Block_with(PArray23616, empty_Array, PThreadedCode23617, 3, PAssign23618, PSend23626, PSend23634);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23635 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23615);
    Array PThreadedCode23614 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23615, (Optr)&t_send1, (Optr)PSend23635, (Optr)&t_method_return);
    Method PMethod23612 = new_Method_with(empty_Array, PArray23613, empty_Array, PThreadedCode23614, 1, PSend23635);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23612, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23638 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23642 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23641 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23642, (Optr)&t_block_return);
    Block PBlock23640 = new_Block_with(empty_Array, empty_Array, PThreadedCode23641, 1, PSend23642);
    // ifFalse:. 
    Send PSend23639 = new_Send((Optr)PSend23638, SMB_ifFalse_, 1, (Optr)PBlock23640);
    Array PThreadedCode23637 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23638, (Optr)&t_send_ifFalse_, (Optr)PSend23639, (Optr)PBlock23640, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23636 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23637, 2, PSend23639, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23636, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23644 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23646 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23646_Const = new_Constant((Optr)string_23646);
    // headerAt:put:. 
    Send PSend23647 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23646_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23645 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23646, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23647, (Optr)&t_method_return);
    Method PMethod23643 = new_Method_with(PArray23644, empty_Array, empty_Array, PThreadedCode23645, 1, PSend23647);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23643, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23649 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23652 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23655 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23657 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23658 = new_Send((Optr)PSend23657, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23659 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23660 = new_Send((Optr)PSend23658, SMB__equals_, 1, (Optr)PSend23659);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23664 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23665 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23663 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23664, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23665, (Optr)&t_block_return);
    Block PBlock23662 = new_Block_with(empty_Array, empty_Array, PThreadedCode23663, 2, PSend23664, PSend23665);
    // ifTrue:. 
    Send PSend23661 = new_Send((Optr)PSend23660, SMB_ifTrue_, 1, (Optr)PBlock23662);
    Array PThreadedCode23656 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23657, (Optr)&t_send0, (Optr)PSend23658, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23659, (Optr)&t_send1, (Optr)PSend23660, (Optr)&t_send_ifTrue_, (Optr)PSend23661, (Optr)PBlock23662, (Optr)&t_method_return);
    Block PBlock23654 = new_Block_with(PArray23655, empty_Array, PThreadedCode23656, 1, PSend23661);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23666 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23654);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23667 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23653 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23654, (Optr)&t_send1, (Optr)PSend23666, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23667, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23651 = new_Block_with(PArray23652, empty_Array, PThreadedCode23653, 3, PSend23666, PSend23667, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23668 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23651);
    Array PThreadedCode23650 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23651, (Optr)&t_send1, (Optr)PSend23668, (Optr)&t_method_return);
    Method PMethod23648 = new_Method_with(PArray23649, empty_Array, empty_Array, PThreadedCode23650, 1, PSend23668);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23648, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23670 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23673 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23676 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23678 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23677 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23678, (Optr)&t_method_return);
    Block PBlock23675 = new_Block_with(PArray23676, empty_Array, PThreadedCode23677, 1, PSend23678);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23679 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23675);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23680 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23674 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23675, (Optr)&t_send2, (Optr)PSend23679, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23680, (Optr)&t_method_return);
    Block PBlock23672 = new_Block_with(PArray23673, empty_Array, PThreadedCode23674, 2, PSend23679, PSend23680);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23681 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23672);
    Array PThreadedCode23671 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23672, (Optr)&t_send1, (Optr)PSend23681, (Optr)&t_method_return);
    Method PMethod23669 = new_Method_with(PArray23670, empty_Array, empty_Array, PThreadedCode23671, 1, PSend23681);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23669, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23687 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23686 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23687);
    Array PThreadedCode23685 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23686, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23687, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23684 = new_Block_with(empty_Array, empty_Array, PThreadedCode23685, 1, PAssign23686);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23688 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23684);
    Array PThreadedCode23683 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23684, (Optr)&t_send1, (Optr)PSend23688, (Optr)&t_method_return);
    Method PMethod23682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23683, 1, PSend23688);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23682, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23690 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23693 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23692 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23693);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23697 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23696 = new_Block_with(empty_Array, empty_Array, PThreadedCode23697, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23695 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23696);
    Assign PAssign23694 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23695);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23700 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23699 = new_Send((Optr)PSend23700, SMB_writeStream, 0);
    Assign PAssign23698 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23699);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23701 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23702 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23703 = new_Send((Optr)PSend23702, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23707 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23706 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23707, (Optr)&t_block_return);
    Block PBlock23705 = new_Block_with(empty_Array, empty_Array, PThreadedCode23706, 1, PSend23707);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23710 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23709 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23710, (Optr)&t_block_return);
    Block PBlock23708 = new_Block_with(empty_Array, empty_Array, PThreadedCode23709, 1, PSend23710);
    // ifTrue:ifFalse:. 
    Send PSend23704 = new_Send((Optr)PSend23703, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23705, (Optr)PBlock23708);
    Array PThreadedCode23691 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23692, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23693, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23694, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23696, (Optr)&t_send1, (Optr)PSend23695, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23698, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23700, (Optr)&t_send0, (Optr)PSend23699, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23701, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23702, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23703, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23704, (Optr)PBlock23705, (Optr)PBlock23708, (Optr)&t_method_return);
    Method PMethod23689 = new_Method_with(empty_Array, PArray23690, empty_Array, PThreadedCode23691, 5, PAssign23692, PAssign23694, PAssign23698, PSend23701, PSend23704);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23689, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23714 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23716 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23716_Const = new_Constant((Optr)string_23716);
    // headerAt:. 
    Send PSend23717 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23716_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23718 = new_Send((Optr)PSend23717, SMB_asLowercase, 0);
    String string_23719 = new_String(L"close");
    Constant string_23719_Const = new_Constant((Optr)string_23719);
    // asLowercase. 
    Send PSend23720 = new_Send((Optr)string_23719_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23721 = new_Send((Optr)PSend23718, SMB__equals_, 1, (Optr)PSend23720);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23725 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23724 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23725, (Optr)&t_block_return);
    Block PBlock23723 = new_Block_with(empty_Array, empty_Array, PThreadedCode23724, 1, PSend23725);
    // ifTrue:. 
    Send PSend23722 = new_Send((Optr)PSend23721, SMB_ifTrue_, 1, (Optr)PBlock23723);
    String string_23726 = new_String(L"Connection");
    Constant string_23726_Const = new_Constant((Optr)string_23726);
    // headerAt:. 
    Send PSend23727 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23726_Const);
    // asLowercase. 
    Send PSend23728 = new_Send((Optr)PSend23727, SMB_asLowercase, 0);
    String string_23729 = new_String(L"keep-alive");
    Constant string_23729_Const = new_Constant((Optr)string_23729);
    // asLowercase. 
    Send PSend23730 = new_Send((Optr)string_23729_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23731 = new_Send((Optr)PSend23728, SMB__equals_, 1, (Optr)PSend23730);
    // escape:. 
    Send PSend23735 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23734 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23735, (Optr)&t_block_return);
    Block PBlock23733 = new_Block_with(empty_Array, empty_Array, PThreadedCode23734, 1, PSend23735);
    // ifTrue:. 
    Send PSend23732 = new_Send((Optr)PSend23731, SMB_ifTrue_, 1, (Optr)PBlock23733);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23736 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23737 = new_String(L"HTTP/1.0");
    Constant string_23737_Const = new_Constant((Optr)string_23737);
    // =. 
    Send PSend23738 = new_Send((Optr)PSend23736, SMB__equals_, 1, (Optr)string_23737_Const);
    // escape:. 
    Send PSend23742 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23741 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23742, (Optr)&t_block_return);
    Block PBlock23740 = new_Block_with(empty_Array, empty_Array, PThreadedCode23741, 1, PSend23742);
    // ifTrue:. 
    Send PSend23739 = new_Send((Optr)PSend23738, SMB_ifTrue_, 1, (Optr)PBlock23740);
    // protocol. 
    Send PSend23743 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23744 = new_String(L"HTTP/1.1");
    Constant string_23744_Const = new_Constant((Optr)string_23744);
    // =. 
    Send PSend23745 = new_Send((Optr)PSend23743, SMB__equals_, 1, (Optr)string_23744_Const);
    // escape:. 
    Send PSend23749 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23748 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23749, (Optr)&t_block_return);
    Block PBlock23747 = new_Block_with(empty_Array, empty_Array, PThreadedCode23748, 1, PSend23749);
    // ifTrue:. 
    Send PSend23746 = new_Send((Optr)PSend23745, SMB_ifTrue_, 1, (Optr)PBlock23747);
    Array PThreadedCode23715 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23716, (Optr)&t_send1, (Optr)PSend23717, (Optr)&t_send0, (Optr)PSend23718, (Optr)&t_push1, (Optr)string_23719, (Optr)&t_send0, (Optr)PSend23720, (Optr)&t_send1, (Optr)PSend23721, (Optr)&t_send_ifTrue_, (Optr)PSend23722, (Optr)PBlock23723, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23726, (Optr)&t_send1, (Optr)PSend23727, (Optr)&t_send0, (Optr)PSend23728, (Optr)&t_push1, (Optr)string_23729, (Optr)&t_send0, (Optr)PSend23730, (Optr)&t_send1, (Optr)PSend23731, (Optr)&t_send_ifTrue_, (Optr)PSend23732, (Optr)PBlock23733, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23736, (Optr)&t_push1, (Optr)string_23737, (Optr)&t_send1, (Optr)PSend23738, (Optr)&t_send_ifTrue_, (Optr)PSend23739, (Optr)PBlock23740, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23743, (Optr)&t_push1, (Optr)string_23744, (Optr)&t_send1, (Optr)PSend23745, (Optr)&t_send_ifTrue_, (Optr)PSend23746, (Optr)PBlock23747, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23713 = new_Block_with(PArray23714, empty_Array, PThreadedCode23715, 5, PSend23722, PSend23732, PSend23739, PSend23746, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23750 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23713);
    Array PThreadedCode23712 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23713, (Optr)&t_send1, (Optr)PSend23750, (Optr)&t_method_return);
    Method PMethod23711 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23712, 1, PSend23750);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23711, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23752 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23757 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23759 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23760 = new_Send((Optr)PSend23759, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23761 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23762 = new_Send((Optr)PSend23760, SMB__equals_, 1, (Optr)PSend23761);
    Array PThreadedCode23758 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23759, (Optr)&t_send0, (Optr)PSend23760, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23761, (Optr)&t_send1, (Optr)PSend23762, (Optr)&t_method_return);
    Block PBlock23756 = new_Block_with(PArray23757, empty_Array, PThreadedCode23758, 1, PSend23762);
    // reject:. 
    Send PSend23755 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23756);
    Assign PAssign23754 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23755);
    Array PThreadedCode23753 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23754, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23756, (Optr)&t_send1, (Optr)PSend23755, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23751 = new_Method_with(PArray23752, empty_Array, empty_Array, PThreadedCode23753, 2, PAssign23754, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23751, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23764 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23766 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23767 = new_Send((Optr)PSend23766, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23768 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23767);
    Array PThreadedCode23765 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23766, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23767, (Optr)&t_send1, (Optr)PSend23768, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23763 = new_Method_with(PArray23764, empty_Array, empty_Array, PThreadedCode23765, 2, PSend23768, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23763, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23770 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23772 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23771 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23772, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23769 = new_Method_with(PArray23770, empty_Array, empty_Array, PThreadedCode23771, 2, PAssign23772, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23769, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23774 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23776 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23775 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23776, (Optr)&t_method_return);
    Method PMethod23773 = new_Method_with(PArray23774, empty_Array, empty_Array, PThreadedCode23775, 1, PSend23776);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23773, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23782 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23784 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23784_Const = new_Constant((Optr)string_23784);
    // at:put:. 
    Send PSend23785 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23784_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23786 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23786_Const = new_Constant((Optr)string_23786);
    // at:put:. 
    Send PSend23787 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23786_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23788 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23788_Const = new_Constant((Optr)string_23788);
    // at:put:. 
    Send PSend23789 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23788_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23790 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23790_Const = new_Constant((Optr)string_23790);
    // at:put:. 
    Send PSend23791 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23790_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23792 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23792_Const = new_Constant((Optr)string_23792);
    // at:put:. 
    Send PSend23793 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23792_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23794 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23794_Const = new_Constant((Optr)string_23794);
    // at:put:. 
    Send PSend23795 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23794_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23796 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23796_Const = new_Constant((Optr)string_23796);
    // at:put:. 
    Send PSend23797 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23796_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23798 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23798_Const = new_Constant((Optr)string_23798);
    // at:put:. 
    Send PSend23799 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23798_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23800 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23800_Const = new_Constant((Optr)string_23800);
    // at:put:. 
    Send PSend23801 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23800_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23802 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23802_Const = new_Constant((Optr)string_23802);
    // at:put:. 
    Send PSend23803 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23802_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23804 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23804_Const = new_Constant((Optr)string_23804);
    // at:put:. 
    Send PSend23805 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23804_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23806 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23806_Const = new_Constant((Optr)string_23806);
    // at:put:. 
    Send PSend23807 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23806_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23808 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23808_Const = new_Constant((Optr)string_23808);
    // at:put:. 
    Send PSend23809 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23808_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23810 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23810_Const = new_Constant((Optr)string_23810);
    // at:put:. 
    Send PSend23811 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23810_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23812 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23812_Const = new_Constant((Optr)string_23812);
    // at:put:. 
    Send PSend23813 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23812_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23814 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23814_Const = new_Constant((Optr)string_23814);
    // at:put:. 
    Send PSend23815 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23814_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23816 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23816_Const = new_Constant((Optr)string_23816);
    // at:put:. 
    Send PSend23817 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23816_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23818 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23818_Const = new_Constant((Optr)string_23818);
    // at:put:. 
    Send PSend23819 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23818_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23820 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23820_Const = new_Constant((Optr)string_23820);
    // at:put:. 
    Send PSend23821 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23820_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23822 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23822_Const = new_Constant((Optr)string_23822);
    // at:put:. 
    Send PSend23823 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23822_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23824 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23824_Const = new_Constant((Optr)string_23824);
    // at:put:. 
    Send PSend23825 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23824_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23826 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23826_Const = new_Constant((Optr)string_23826);
    // at:put:. 
    Send PSend23827 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23826_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23828 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23828_Const = new_Constant((Optr)string_23828);
    // at:put:. 
    Send PSend23829 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23828_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23830 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23830_Const = new_Constant((Optr)string_23830);
    // at:put:. 
    Send PSend23831 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23830_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23832 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23832_Const = new_Constant((Optr)string_23832);
    // at:put:. 
    Send PSend23833 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23832_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23834 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23834_Const = new_Constant((Optr)string_23834);
    // at:put:. 
    Send PSend23835 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23834_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23836 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23836_Const = new_Constant((Optr)string_23836);
    // at:put:. 
    Send PSend23837 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23836_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23838 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23838_Const = new_Constant((Optr)string_23838);
    // at:put:. 
    Send PSend23839 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23838_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23840 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23840_Const = new_Constant((Optr)string_23840);
    // at:put:. 
    Send PSend23841 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23840_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23842 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23842_Const = new_Constant((Optr)string_23842);
    // at:put:. 
    Send PSend23843 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23842_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23844 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23844_Const = new_Constant((Optr)string_23844);
    // at:put:. 
    Send PSend23845 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23844_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23846 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23846_Const = new_Constant((Optr)string_23846);
    // at:put:. 
    Send PSend23847 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23846_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23848 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23848_Const = new_Constant((Optr)string_23848);
    // at:put:. 
    Send PSend23849 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23848_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23850 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23850_Const = new_Constant((Optr)string_23850);
    // at:put:. 
    Send PSend23851 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23850_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23852 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23852_Const = new_Constant((Optr)string_23852);
    // at:put:. 
    Send PSend23853 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23852_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23854 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23854_Const = new_Constant((Optr)string_23854);
    // at:put:. 
    Send PSend23855 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23854_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23856 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23856_Const = new_Constant((Optr)string_23856);
    // at:put:. 
    Send PSend23857 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23856_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23858 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23858_Const = new_Constant((Optr)string_23858);
    // at:put:. 
    Send PSend23859 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23858_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23860 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23860_Const = new_Constant((Optr)string_23860);
    // at:put:. 
    Send PSend23861 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23860_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23862 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23862_Const = new_Constant((Optr)string_23862);
    // at:put:. 
    Send PSend23863 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23862_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23864 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23864_Const = new_Constant((Optr)string_23864);
    // at:put:. 
    Send PSend23865 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23864_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23866 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23866_Const = new_Constant((Optr)string_23866);
    // at:put:. 
    Send PSend23867 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23866_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23868 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23868_Const = new_Constant((Optr)string_23868);
    // at:put:. 
    Send PSend23869 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23868_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23870 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23870_Const = new_Constant((Optr)string_23870);
    // at:put:. 
    Send PSend23871 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23870_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23872 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23872_Const = new_Constant((Optr)string_23872);
    // at:put:. 
    Send PSend23873 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23872_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23874 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23874_Const = new_Constant((Optr)string_23874);
    // at:put:. 
    Send PSend23875 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23874_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23876 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23783 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23784, (Optr)&t_send2, (Optr)PSend23785, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23786, (Optr)&t_send2, (Optr)PSend23787, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23788, (Optr)&t_send2, (Optr)PSend23789, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23790, (Optr)&t_send2, (Optr)PSend23791, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23792, (Optr)&t_send2, (Optr)PSend23793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23794, (Optr)&t_send2, (Optr)PSend23795, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23796, (Optr)&t_send2, (Optr)PSend23797, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23798, (Optr)&t_send2, (Optr)PSend23799, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23800, (Optr)&t_send2, (Optr)PSend23801, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23802, (Optr)&t_send2, (Optr)PSend23803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23804, (Optr)&t_send2, (Optr)PSend23805, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23806, (Optr)&t_send2, (Optr)PSend23807, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23808, (Optr)&t_send2, (Optr)PSend23809, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23810, (Optr)&t_send2, (Optr)PSend23811, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23812, (Optr)&t_send2, (Optr)PSend23813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23814, (Optr)&t_send2, (Optr)PSend23815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23816, (Optr)&t_send2, (Optr)PSend23817, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23818, (Optr)&t_send2, (Optr)PSend23819, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23820, (Optr)&t_send2, (Optr)PSend23821, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23822, (Optr)&t_send2, (Optr)PSend23823, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23824, (Optr)&t_send2, (Optr)PSend23825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23826, (Optr)&t_send2, (Optr)PSend23827, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23828, (Optr)&t_send2, (Optr)PSend23829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23830, (Optr)&t_send2, (Optr)PSend23831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23832, (Optr)&t_send2, (Optr)PSend23833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23834, (Optr)&t_send2, (Optr)PSend23835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23836, (Optr)&t_send2, (Optr)PSend23837, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23838, (Optr)&t_send2, (Optr)PSend23839, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23840, (Optr)&t_send2, (Optr)PSend23841, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23842, (Optr)&t_send2, (Optr)PSend23843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23844, (Optr)&t_send2, (Optr)PSend23845, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23846, (Optr)&t_send2, (Optr)PSend23847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23848, (Optr)&t_send2, (Optr)PSend23849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23850, (Optr)&t_send2, (Optr)PSend23851, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23852, (Optr)&t_send2, (Optr)PSend23853, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23854, (Optr)&t_send2, (Optr)PSend23855, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23856, (Optr)&t_send2, (Optr)PSend23857, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23858, (Optr)&t_send2, (Optr)PSend23859, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23860, (Optr)&t_send2, (Optr)PSend23861, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23862, (Optr)&t_send2, (Optr)PSend23863, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23864, (Optr)&t_send2, (Optr)PSend23865, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23866, (Optr)&t_send2, (Optr)PSend23867, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23868, (Optr)&t_send2, (Optr)PSend23869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23870, (Optr)&t_send2, (Optr)PSend23871, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23872, (Optr)&t_send2, (Optr)PSend23873, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23874, (Optr)&t_send2, (Optr)PSend23875, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23876, (Optr)&t_method_return);
    Block PBlock23781 = new_Block_with(PArray23782, empty_Array, PThreadedCode23783, 47, PSend23785, PSend23787, PSend23789, PSend23791, PSend23793, PSend23795, PSend23797, PSend23799, PSend23801, PSend23803, PSend23805, PSend23807, PSend23809, PSend23811, PSend23813, PSend23815, PSend23817, PSend23819, PSend23821, PSend23823, PSend23825, PSend23827, PSend23829, PSend23831, PSend23833, PSend23835, PSend23837, PSend23839, PSend23841, PSend23843, PSend23845, PSend23847, PSend23849, PSend23851, PSend23853, PSend23855, PSend23857, PSend23859, PSend23861, PSend23863, PSend23865, PSend23867, PSend23869, PSend23871, PSend23873, PSend23875, PSend23876);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23877 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23780 = new_Send((Optr)PBlock23781, SMB_value_, 1, (Optr)PSend23877);
    Assign PAssign23779 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23780);
    Array PThreadedCode23778 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23779, (Optr)&t_push_closure, (Optr)PBlock23781, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23877, (Optr)&t_send1, (Optr)PSend23780, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23778, 2, PAssign23779, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23777, HEADER(WebClient_Core_WebMessage_Class));
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