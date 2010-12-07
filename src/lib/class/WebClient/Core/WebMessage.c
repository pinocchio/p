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
    String string_23268 = new_String(L"Content-Type");
    String string_23271 = new_String(L"application/octet-stream");
    Array PThreadedCode23270 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23271, (Optr)&t_block_return);
    Constant string_23271_Const = new_Constant((Optr)string_23271);
    Block PBlock23269 = new_Block_with(empty_Array, empty_Array, PThreadedCode23270, 1, string_23271_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23268_Const = new_Constant((Optr)string_23268);
    // headerAt:ifAbsent:. 
    Send PSend23272 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23268_Const, (Optr)PBlock23269);
    Array PThreadedCode23267 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23268, (Optr)&t_push_closure, (Optr)PBlock23269, (Optr)&t_send2, (Optr)PSend23272, (Optr)&t_method_return);
    Method PMethod23266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23267, 1, PSend23272);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod23266, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23277 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode23276 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23277, (Optr)&t_block_return);
    Block PBlock23275 = new_Block_with(empty_Array, empty_Array, PThreadedCode23276, 1, PSend23277);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23278 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23275);
    Array PThreadedCode23274 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23275, (Optr)&t_send1, (Optr)PSend23278, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23273 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23274, 2, PSend23278, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod23273, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode23280 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23279 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23280, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod23279, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23284 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend23286 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23290 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23289 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23290, (Optr)&t_block_return);
    Block PBlock23288 = new_Block_with(empty_Array, empty_Array, PThreadedCode23289, 1, PSend23290);
    // ifFalse:. 
    Send PSend23287 = new_Send((Optr)PSend23286, SMB_ifFalse_, 1, (Optr)PBlock23288);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend23291 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend23292 = new_Send((Optr)PSend23291, SMB_remoteAddress, 0);
    Array PThreadedCode23285 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend23286, (Optr)&t_send_ifFalse_, (Optr)PSend23287, (Optr)PBlock23288, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23291, (Optr)&t_send0, (Optr)PSend23292, (Optr)&t_method_return);
    Block PBlock23283 = new_Block_with(PArray23284, empty_Array, PThreadedCode23285, 2, PSend23287, PSend23292);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23293 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23283);
    Array PThreadedCode23282 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23283, (Optr)&t_send1, (Optr)PSend23293, (Optr)&t_method_return);
    Method PMethod23281 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23282, 1, PSend23293);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod23281, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23295 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign23297 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23296 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23297, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23294 = new_Method_with(PArray23295, empty_Array, empty_Array, PThreadedCode23296, 2, PAssign23297, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod23294, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23299 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray23300 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23303 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23302 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend23303);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray23305 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23307 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode23306 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend23307, (Optr)&t_method_return);
    Block PBlock23304 = new_Block_with(PArray23305, empty_Array, PThreadedCode23306, 1, PSend23307);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23308 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23304);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23309 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23312 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23311 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23312, (Optr)&t_block_return);
    Block PBlock23310 = new_Block_with(empty_Array, empty_Array, PThreadedCode23311, 1, PSend23312);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend23313 = new_Send((Optr)PSend23309, SMB_ifEmpty_, 1, (Optr)PBlock23310);
    Array PThreadedCode23301 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign23302, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23303, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23304, (Optr)&t_send2, (Optr)PSend23308, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend23309, (Optr)&t_push_closure, (Optr)PBlock23310, (Optr)&t_send1, (Optr)PSend23313, (Optr)&t_method_return);
    Method PMethod23298 = new_Method_with(PArray23299, PArray23300, empty_Array, PThreadedCode23301, 3, PAssign23302, PSend23308, PSend23313);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod23298, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23315 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_23319 = new_String(L"");
    Array PThreadedCode23318 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23319, (Optr)&t_block_return);
    Constant string_23319_Const = new_Constant((Optr)string_23319);
    Block PBlock23317 = new_Block_with(empty_Array, empty_Array, PThreadedCode23318, 1, string_23319_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend23320 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23317);
    Array PThreadedCode23316 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23317, (Optr)&t_send2, (Optr)PSend23320, (Optr)&t_method_return);
    Method PMethod23314 = new_Method_with(PArray23315, empty_Array, empty_Array, PThreadedCode23316, 1, PSend23320);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod23314, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray23322 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray23323 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign23325 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23327 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign23326 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23327);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend23331 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign23330 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend23331);
    String string_23335 = new_String(L"16r");
    Constant string_23335_Const = new_Constant((Optr)string_23335);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend23336 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend23334 = new_Send((Optr)string_23335_Const, SMB__append_, 1, (Optr)PSend23336);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend23333 = new_Send((Optr)PSend23334, SMB_asNumber, 0);
    Assign PAssign23332 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend23333);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23337 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode23329 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign23330, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend23331, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23332, (Optr)&t_push1, (Optr)string_23335, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend23336, (Optr)&t_send1, (Optr)PSend23334, (Optr)&t_send0, (Optr)PSend23333, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23337, (Optr)&t_block_return);
    Block PBlock23328 = new_Block_with(empty_Array, empty_Array, PThreadedCode23329, 3, PAssign23330, PAssign23332, PSend23337);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23342 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23341 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23342, (Optr)&t_block_return);
    Block PBlock23340 = new_Block_with(empty_Array, empty_Array, PThreadedCode23341, 1, PSend23342);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23343 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23340);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23344 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend23345 = new_Send((Optr)PSend23344, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23351 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23350 = new_Send((Optr)PSend23351, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23349 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23350);
    Array PThreadedCode23348 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23349, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23351, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23350, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23347 = new_Block_with(empty_Array, empty_Array, PThreadedCode23348, 1, PAssign23349);
    // ifFalse:. 
    Send PSend23346 = new_Send((Optr)PSend23345, SMB_ifFalse_, 1, (Optr)PBlock23347);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23353 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign23352 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23353);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23354 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend23355 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend23357 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23356 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend23357);
    Array PThreadedCode23339 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23340, (Optr)&t_send1, (Optr)PSend23343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23344, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23345, (Optr)&t_send_ifFalse_, (Optr)PSend23346, (Optr)PBlock23347, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23352, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23353, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend23354, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23355, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23356, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23357, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23338 = new_Block_with(empty_Array, empty_Array, PThreadedCode23339, 6, PSend23343, PSend23346, PAssign23352, PSend23354, PSend23355, PAssign23356);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23358 = new_Send((Optr)PBlock23328, SMB_whileFalse_, 1, (Optr)PBlock23338);
    // skip:. 
    Send PSend23359 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23360 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23363 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23362 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23363, (Optr)&t_block_return);
    Block PBlock23361 = new_Block_with(empty_Array, empty_Array, PThreadedCode23362, 1, PSend23363);
    // ifNotNil:. 
    Send PSend23364 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23361);
    Array PThreadedCode23324 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23325, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23326, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23327, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23328, (Optr)&t_push_closure, (Optr)PBlock23338, (Optr)&t_send1, (Optr)PSend23358, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23360, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23361, (Optr)&t_send1, (Optr)PSend23364, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23321 = new_Method_with(PArray23322, PArray23323, empty_Array, PThreadedCode23324, 7, PAssign23325, PAssign23326, PSend23358, PSend23359, PSend23360, PSend23364, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod23321, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23366 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23369 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23371 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23372 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23373 = new_Send((Optr)PSend23371, SMB__equals_, 1, (Optr)PSend23372);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23377 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode23376 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23377, (Optr)&t_block_return);
    Block PBlock23375 = new_Block_with(empty_Array, empty_Array, PThreadedCode23376, 1, PSend23377);
    // ifTrue:. 
    Send PSend23374 = new_Send((Optr)PSend23373, SMB_ifTrue_, 1, (Optr)PBlock23375);
    Array PThreadedCode23370 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend23371, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend23372, (Optr)&t_send1, (Optr)PSend23373, (Optr)&t_send_ifTrue_, (Optr)PSend23374, (Optr)PBlock23375, (Optr)&t_method_return);
    Block PBlock23368 = new_Block_with(PArray23369, empty_Array, PThreadedCode23370, 1, PSend23374);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23378 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23368);
    Array PThreadedCode23367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23368, (Optr)&t_send1, (Optr)PSend23378, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23365 = new_Method_with(PArray23366, empty_Array, empty_Array, PThreadedCode23367, 2, PSend23378, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod23365, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23380 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23382 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23383 = new_Send((Optr)PSend23382, SMB_name, 0);
    // printOn:. 
    Send PSend23384 = new_Send((Optr)PSend23383, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend23385 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23386 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend23387 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode23381 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23382, (Optr)&t_send0, (Optr)PSend23383, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23384, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend23385, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23386, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend23387, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23379 = new_Method_with(PArray23380, empty_Array, empty_Array, PThreadedCode23381, 5, PSend23384, PSend23385, PSend23386, PSend23387, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod23379, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23391 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23393 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23396 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23395 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23396, (Optr)&t_block_return);
    Block PBlock23394 = new_Block_with(empty_Array, empty_Array, PThreadedCode23395, 1, PSend23396);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23393_Const = new_Constant((Optr)string_23393);
    // headerAt:ifAbsent:. 
    Send PSend23397 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23393_Const, (Optr)PBlock23394);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23398 = new_Send((Optr)PSend23397, SMB_asInteger, 0);
    Array PThreadedCode23392 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23393, (Optr)&t_push_closure, (Optr)PBlock23394, (Optr)&t_send2, (Optr)PSend23397, (Optr)&t_send0, (Optr)PSend23398, (Optr)&t_method_return);
    Block PBlock23390 = new_Block_with(PArray23391, empty_Array, PThreadedCode23392, 1, PSend23398);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23399 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23390);
    Array PThreadedCode23389 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23390, (Optr)&t_send1, (Optr)PSend23399, (Optr)&t_method_return);
    Method PMethod23388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23389, 1, PSend23399);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23388, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23401 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23405 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23406 = new_Send((Optr)PSend23405, SMB_asArray, 0);
    Array PThreadedCode23404 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23405, (Optr)&t_send0, (Optr)PSend23406, (Optr)&t_block_return);
    Block PBlock23403 = new_Block_with(empty_Array, empty_Array, PThreadedCode23404, 1, PSend23406);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23407 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23403);
    Array PThreadedCode23402 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23403, (Optr)&t_send2, (Optr)PSend23407, (Optr)&t_method_return);
    Method PMethod23400 = new_Method_with(PArray23401, empty_Array, empty_Array, PThreadedCode23402, 1, PSend23407);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23400, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23409 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23411 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23411, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23408 = new_Method_with(PArray23409, empty_Array, empty_Array, PThreadedCode23410, 2, PAssign23411, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23408, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23413 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23415 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23415_Const = new_Constant((Optr)string_23415);
    // headerAt:put:. 
    Send PSend23416 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23415_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23414 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23415, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23416, (Optr)&t_method_return);
    Method PMethod23412 = new_Method_with(PArray23413, empty_Array, empty_Array, PThreadedCode23414, 1, PSend23416);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23412, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23418 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23419 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23422 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23424 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23424_Const = new_Constant((Optr)string_23424);
    // headerAt:. 
    Send PSend23425 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23424_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23427 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23429 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23429_Const = new_Constant((Optr)string_23429);
    // =. 
    Send PSend23430 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23429_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23434 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23435 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23434);
    Array PThreadedCode23433 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23434, (Optr)&t_send1, (Optr)PSend23435, (Optr)&t_block_return);
    Block PBlock23432 = new_Block_with(empty_Array, empty_Array, PThreadedCode23433, 1, PSend23435);
    String string_23438 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23438_Const = new_Constant((Optr)string_23438);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23439 = new_Send((Optr)string_23438_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23440 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23439);
    Array PThreadedCode23437 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23438, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23439, (Optr)&t_send1, (Optr)PSend23440, (Optr)&t_block_return);
    Block PBlock23436 = new_Block_with(empty_Array, empty_Array, PThreadedCode23437, 1, PSend23440);
    // ifTrue:ifFalse:. 
    Send PSend23431 = new_Send((Optr)PSend23430, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23432, (Optr)PBlock23436);
    Array PThreadedCode23428 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23429, (Optr)&t_send1, (Optr)PSend23430, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23431, (Optr)PBlock23432, (Optr)PBlock23436, (Optr)&t_method_return);
    Block PBlock23426 = new_Block_with(PArray23427, empty_Array, PThreadedCode23428, 1, PSend23431);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23441 = new_Send((Optr)PSend23425, SMB_ifNotEmpty_, 1, (Optr)PBlock23426);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23442 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23446 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23445 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23446, (Optr)&t_block_return);
    Block PBlock23444 = new_Block_with(empty_Array, empty_Array, PThreadedCode23445, 1, PSend23446);
    // ifTrue:. 
    Send PSend23443 = new_Send((Optr)PSend23442, SMB_ifTrue_, 1, (Optr)PBlock23444);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23448 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23447 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23448);
    Assign PAssign23449 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23453 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23452 = new_Block_with(empty_Array, empty_Array, PThreadedCode23453, 1, int_0_Const);
    // ifNil:. 
    Send PSend23451 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23452);
    Assign PAssign23450 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23451);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23456 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23459 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23460 = new_Send((Optr)PSend23459, SMB_not, 0);
    Array PThreadedCode23458 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23459, (Optr)&t_send0, (Optr)PSend23460, (Optr)&t_block_return);
    Block PBlock23457 = new_Block_with(empty_Array, empty_Array, PThreadedCode23458, 1, PSend23460);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23461 = new_Send((Optr)PSend23456, SMB_and_, 1, (Optr)PBlock23457);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23464 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23463 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23464, (Optr)&t_block_return);
    Block PBlock23462 = new_Block_with(empty_Array, empty_Array, PThreadedCode23463, 1, PSend23464);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23465 = new_Send((Optr)PSend23461, SMB_or_, 1, (Optr)PBlock23462);
    Array PThreadedCode23455 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23456, (Optr)&t_push_closure, (Optr)PBlock23457, (Optr)&t_send1, (Optr)PSend23461, (Optr)&t_push_closure, (Optr)PBlock23462, (Optr)&t_send1, (Optr)PSend23465, (Optr)&t_block_return);
    Block PBlock23454 = new_Block_with(empty_Array, empty_Array, PThreadedCode23455, 1, PSend23465);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23470 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23469 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23470, (Optr)&t_block_return);
    Block PBlock23468 = new_Block_with(empty_Array, empty_Array, PThreadedCode23469, 1, PSend23470);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23471 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23468);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23475 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23474 = new_Block_with(empty_Array, empty_Array, PThreadedCode23475, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23478 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23477 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23478, (Optr)&t_block_return);
    Block PBlock23476 = new_Block_with(empty_Array, empty_Array, PThreadedCode23477, 1, PSend23478);
    // ifNil:ifNotNil:. 
    Send PSend23473 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23474, (Optr)PBlock23476);
    Assign PAssign23472 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23473);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23479 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23480 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23479);
    // size. 
    Send PSend23485 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23484 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23485);
    Array PThreadedCode23483 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23484, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23485, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23482 = new_Block_with(empty_Array, empty_Array, PThreadedCode23483, 1, PAssign23484);
    // ifTrue:. 
    Send PSend23481 = new_Send((Optr)PSend23480, SMB_ifTrue_, 1, (Optr)PBlock23482);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23487 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23486 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23487);
    // size. 
    Send PSend23488 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23489 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23488);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23493 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23492 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23493, (Optr)&t_block_return);
    Block PBlock23491 = new_Block_with(empty_Array, empty_Array, PThreadedCode23492, 1, PSend23493);
    Array PThreadedCode23495 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23494 = new_Block_with(empty_Array, empty_Array, PThreadedCode23495, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23490 = new_Send((Optr)PSend23489, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23491, (Optr)PBlock23494);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23496 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23490);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23499 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23498 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23499);
    Assign PAssign23497 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23498);
    Array PThreadedCode23467 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23468, (Optr)&t_send1, (Optr)PSend23471, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23472, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23474, (Optr)&t_push_closure, (Optr)PBlock23476, (Optr)&t_send2, (Optr)PSend23473, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23479, (Optr)&t_send1, (Optr)PSend23480, (Optr)&t_send_ifTrue_, (Optr)PSend23481, (Optr)PBlock23482, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23486, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23487, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23488, (Optr)&t_send1, (Optr)PSend23489, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23490, (Optr)PBlock23491, (Optr)PBlock23494, (Optr)&t_send1, (Optr)PSend23496, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23497, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23499, (Optr)&t_send1, (Optr)PSend23498, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23466 = new_Block_with(empty_Array, empty_Array, PThreadedCode23467, 6, PSend23471, PAssign23472, PSend23481, PAssign23486, PSend23496, PAssign23497);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23500 = new_Send((Optr)PBlock23454, SMB_whileTrue_, 1, (Optr)PBlock23466);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23501 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23504 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23503 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23504, (Optr)&t_block_return);
    Block PBlock23502 = new_Block_with(empty_Array, empty_Array, PThreadedCode23503, 1, PSend23504);
    // ifNotNil:. 
    Send PSend23505 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23502);
    Array PThreadedCode23423 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23424, (Optr)&t_send1, (Optr)PSend23425, (Optr)&t_push_closure, (Optr)PBlock23426, (Optr)&t_send1, (Optr)PSend23441, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23442, (Optr)&t_send_ifTrue_, (Optr)PSend23443, (Optr)PBlock23444, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23447, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23448, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23449, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23450, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23452, (Optr)&t_send1, (Optr)PSend23451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23454, (Optr)&t_push_closure, (Optr)PBlock23466, (Optr)&t_send1, (Optr)PSend23500, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23501, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23502, (Optr)&t_send1, (Optr)PSend23505, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23421 = new_Block_with(PArray23422, empty_Array, PThreadedCode23423, 9, PSend23441, PSend23443, PAssign23447, PAssign23449, PAssign23450, PSend23500, PSend23501, PSend23505, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23506 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23421);
    Array PThreadedCode23420 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23421, (Optr)&t_send1, (Optr)PSend23506, (Optr)&t_method_return);
    Method PMethod23417 = new_Method_with(PArray23418, PArray23419, empty_Array, PThreadedCode23420, 1, PSend23506);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23417, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23510 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23512 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23511 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23512, (Optr)&t_method_return);
    Block PBlock23509 = new_Block_with(PArray23510, empty_Array, PThreadedCode23511, 1, PSend23512);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23513 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23509);
    Array PThreadedCode23508 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23509, (Optr)&t_send1, (Optr)PSend23513, (Optr)&t_method_return);
    Method PMethod23507 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23508, 1, PSend23513);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23507, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23515 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23518 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23521 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23520 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23521);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23526 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23525 = new_Block_with(empty_Array, empty_Array, PThreadedCode23526, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23524 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23525);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23528 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23530 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23529 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23530, (Optr)&t_method_return);
    Block PBlock23527 = new_Block_with(PArray23528, empty_Array, PThreadedCode23529, 1, PSend23530);
    // new:streamContents:. 
    Send PSend23523 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23524, (Optr)PBlock23527);
    Assign PAssign23522 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23523);
    Array PThreadedCode23519 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23520, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23521, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23522, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23525, (Optr)&t_send1, (Optr)PSend23524, (Optr)&t_push_closure, (Optr)PBlock23527, (Optr)&t_send2, (Optr)PSend23523, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23517 = new_Block_with(empty_Array, PArray23518, PThreadedCode23519, 2, PAssign23520, PAssign23522);
    // ifNil:. 
    Send PSend23531 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23517);
    Array PThreadedCode23516 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23517, (Optr)&t_send1, (Optr)PSend23531, (Optr)&t_method_return);
    Method PMethod23514 = new_Method_with(PArray23515, empty_Array, empty_Array, PThreadedCode23516, 1, PSend23531);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23514, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23533 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23533, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23532, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23535 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23534 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23535, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23534, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23537 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23540 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23543 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23545 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23545_Const = new_Constant((Optr)string_23545);
    // ,. 
    Send PSend23546 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23545_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23547 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23548 = new_Send((Optr)PSend23546, SMB__append_, 1, (Optr)PSend23547);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23549 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23548);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23550 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23544 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23545, (Optr)&t_send1, (Optr)PSend23546, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23547, (Optr)&t_send1, (Optr)PSend23548, (Optr)&t_send1, (Optr)PSend23549, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23550, (Optr)&t_method_return);
    Block PBlock23542 = new_Block_with(PArray23543, empty_Array, PThreadedCode23544, 2, PSend23549, PSend23550);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23551 = new_Send((Optr)PBlock23542, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23541 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23542, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23551, (Optr)&t_method_return);
    Block PBlock23539 = new_Block_with(PArray23540, empty_Array, PThreadedCode23541, 1, PSend23551);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23552 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23539);
    Array PThreadedCode23538 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23539, (Optr)&t_send1, (Optr)PSend23552, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23536 = new_Method_with(PArray23537, empty_Array, empty_Array, PThreadedCode23538, 2, PSend23552, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23536, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23557 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23556 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23557, (Optr)&t_block_return);
    Block PBlock23555 = new_Block_with(empty_Array, empty_Array, PThreadedCode23556, 1, PSend23557);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23558 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23555);
    Array PThreadedCode23554 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23555, (Optr)&t_send1, (Optr)PSend23558, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23554, 2, PSend23558, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23553, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23560 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23562 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23563 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23561 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23562, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23563, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23559 = new_Method_with(PArray23560, empty_Array, empty_Array, PThreadedCode23561, 3, PSend23562, PSend23563, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23559, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23565 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23568 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23570 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23571 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23572 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23570, (Optr)PSend23571);
    Array PThreadedCode23569 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23570, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23571, (Optr)&t_send2, (Optr)PSend23572, (Optr)&t_method_return);
    Block PBlock23567 = new_Block_with(PArray23568, empty_Array, PThreadedCode23569, 1, PSend23572);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23573 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23567);
    Array PThreadedCode23566 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23567, (Optr)&t_send1, (Optr)PSend23573, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23564 = new_Method_with(PArray23565, empty_Array, empty_Array, PThreadedCode23566, 2, PSend23573, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23564, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23575 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23578 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23582 = new_String(L"Content-Type");
    Constant string_23582_Const = new_Constant((Optr)string_23582);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23585 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23584 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23585, (Optr)&t_block_return);
    Block PBlock23583 = new_Block_with(empty_Array, empty_Array, PThreadedCode23584, 1, PSend23585);
    // headerAt:ifAbsent:. 
    Send PSend23581 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23582_Const, (Optr)PBlock23583);
    Assign PAssign23580 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23581);
    String string_23586 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23586_Const = new_Constant((Optr)string_23586);
    // beginsWith:. 
    Send PSend23587 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23586_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23591 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23590 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23591, (Optr)&t_block_return);
    Block PBlock23589 = new_Block_with(empty_Array, empty_Array, PThreadedCode23590, 1, PSend23591);
    // ifFalse:. 
    Send PSend23588 = new_Send((Optr)PSend23587, SMB_ifFalse_, 1, (Optr)PBlock23589);
    String string_23592 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23592_Const = new_Constant((Optr)string_23592);
    // findString:. 
    Send PSend23593 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23592_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23594 = new_Send((Optr)PSend23593, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23595 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23596 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23594, (Optr)PSend23595);
    Array PThreadedCode23579 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23580, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23582, (Optr)&t_push_closure, (Optr)PBlock23583, (Optr)&t_send2, (Optr)PSend23581, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23586, (Optr)&t_send1, (Optr)PSend23587, (Optr)&t_send_ifFalse_, (Optr)PSend23588, (Optr)PBlock23589, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23592, (Optr)&t_send1, (Optr)PSend23593, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23594, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23595, (Optr)&t_send2, (Optr)PSend23596, (Optr)&t_method_return);
    Block PBlock23577 = new_Block_with(PArray23578, empty_Array, PThreadedCode23579, 3, PAssign23580, PSend23588, PSend23596);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23597 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23577);
    Array PThreadedCode23576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23577, (Optr)&t_send1, (Optr)PSend23597, (Optr)&t_method_return);
    Method PMethod23574 = new_Method_with(empty_Array, PArray23575, empty_Array, PThreadedCode23576, 1, PSend23597);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23574, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23600 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23604 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23603 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23604, (Optr)&t_block_return);
    Block PBlock23602 = new_Block_with(empty_Array, empty_Array, PThreadedCode23603, 1, PSend23604);
    // ifFalse:. 
    Send PSend23601 = new_Send((Optr)PSend23600, SMB_ifFalse_, 1, (Optr)PBlock23602);
    Array PThreadedCode23599 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23600, (Optr)&t_send_ifFalse_, (Optr)PSend23601, (Optr)PBlock23602, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23598 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23599, 2, PSend23601, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23598, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23606 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23608 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23608_Const = new_Constant((Optr)string_23608);
    // headerAt:put:. 
    Send PSend23609 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23608_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23607 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23608, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23609, (Optr)&t_method_return);
    Method PMethod23605 = new_Method_with(PArray23606, empty_Array, empty_Array, PThreadedCode23607, 1, PSend23609);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23605, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23611 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23614 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23617 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23619 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23620 = new_Send((Optr)PSend23619, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23621 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23622 = new_Send((Optr)PSend23620, SMB__equals_, 1, (Optr)PSend23621);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23626 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23627 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23625 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23627, (Optr)&t_block_return);
    Block PBlock23624 = new_Block_with(empty_Array, empty_Array, PThreadedCode23625, 2, PSend23626, PSend23627);
    // ifTrue:. 
    Send PSend23623 = new_Send((Optr)PSend23622, SMB_ifTrue_, 1, (Optr)PBlock23624);
    Array PThreadedCode23618 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23619, (Optr)&t_send0, (Optr)PSend23620, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23621, (Optr)&t_send1, (Optr)PSend23622, (Optr)&t_send_ifTrue_, (Optr)PSend23623, (Optr)PBlock23624, (Optr)&t_method_return);
    Block PBlock23616 = new_Block_with(PArray23617, empty_Array, PThreadedCode23618, 1, PSend23623);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23628 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23616);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23629 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23615 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23616, (Optr)&t_send1, (Optr)PSend23628, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23629, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23613 = new_Block_with(PArray23614, empty_Array, PThreadedCode23615, 3, PSend23628, PSend23629, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23630 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23613);
    Array PThreadedCode23612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23613, (Optr)&t_send1, (Optr)PSend23630, (Optr)&t_method_return);
    Method PMethod23610 = new_Method_with(PArray23611, empty_Array, empty_Array, PThreadedCode23612, 1, PSend23630);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23610, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23632 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23635 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23638 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23640 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23639 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23640, (Optr)&t_method_return);
    Block PBlock23637 = new_Block_with(PArray23638, empty_Array, PThreadedCode23639, 1, PSend23640);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23641 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23637);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23642 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23636 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23637, (Optr)&t_send2, (Optr)PSend23641, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23642, (Optr)&t_method_return);
    Block PBlock23634 = new_Block_with(PArray23635, empty_Array, PThreadedCode23636, 2, PSend23641, PSend23642);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23643 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23634);
    Array PThreadedCode23633 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23634, (Optr)&t_send1, (Optr)PSend23643, (Optr)&t_method_return);
    Method PMethod23631 = new_Method_with(PArray23632, empty_Array, empty_Array, PThreadedCode23633, 1, PSend23643);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23631, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23649 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23648 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23649);
    Array PThreadedCode23647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23648, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23649, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23646 = new_Block_with(empty_Array, empty_Array, PThreadedCode23647, 1, PAssign23648);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23650 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23646);
    Array PThreadedCode23645 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23646, (Optr)&t_send1, (Optr)PSend23650, (Optr)&t_method_return);
    Method PMethod23644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23645, 1, PSend23650);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23644, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23652 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23655 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23654 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23655);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23659 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23658 = new_Block_with(empty_Array, empty_Array, PThreadedCode23659, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23657 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23658);
    Assign PAssign23656 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23657);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23662 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23661 = new_Send((Optr)PSend23662, SMB_writeStream, 0);
    Assign PAssign23660 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23661);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23663 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23664 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23665 = new_Send((Optr)PSend23664, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23669 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23668 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23669, (Optr)&t_block_return);
    Block PBlock23667 = new_Block_with(empty_Array, empty_Array, PThreadedCode23668, 1, PSend23669);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23672 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23671 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23672, (Optr)&t_block_return);
    Block PBlock23670 = new_Block_with(empty_Array, empty_Array, PThreadedCode23671, 1, PSend23672);
    // ifTrue:ifFalse:. 
    Send PSend23666 = new_Send((Optr)PSend23665, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23667, (Optr)PBlock23670);
    Array PThreadedCode23653 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23654, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23655, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23656, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23658, (Optr)&t_send1, (Optr)PSend23657, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23660, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23662, (Optr)&t_send0, (Optr)PSend23661, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23663, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23664, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23665, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23666, (Optr)PBlock23667, (Optr)PBlock23670, (Optr)&t_method_return);
    Method PMethod23651 = new_Method_with(empty_Array, PArray23652, empty_Array, PThreadedCode23653, 5, PAssign23654, PAssign23656, PAssign23660, PSend23663, PSend23666);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23651, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23676 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23678 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23678_Const = new_Constant((Optr)string_23678);
    // headerAt:. 
    Send PSend23679 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23678_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23680 = new_Send((Optr)PSend23679, SMB_asLowercase, 0);
    String string_23681 = new_String(L"close");
    Constant string_23681_Const = new_Constant((Optr)string_23681);
    // asLowercase. 
    Send PSend23682 = new_Send((Optr)string_23681_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23683 = new_Send((Optr)PSend23680, SMB__equals_, 1, (Optr)PSend23682);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23687 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23686 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23687, (Optr)&t_block_return);
    Block PBlock23685 = new_Block_with(empty_Array, empty_Array, PThreadedCode23686, 1, PSend23687);
    // ifTrue:. 
    Send PSend23684 = new_Send((Optr)PSend23683, SMB_ifTrue_, 1, (Optr)PBlock23685);
    String string_23688 = new_String(L"Connection");
    Constant string_23688_Const = new_Constant((Optr)string_23688);
    // headerAt:. 
    Send PSend23689 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23688_Const);
    // asLowercase. 
    Send PSend23690 = new_Send((Optr)PSend23689, SMB_asLowercase, 0);
    String string_23691 = new_String(L"keep-alive");
    Constant string_23691_Const = new_Constant((Optr)string_23691);
    // asLowercase. 
    Send PSend23692 = new_Send((Optr)string_23691_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23693 = new_Send((Optr)PSend23690, SMB__equals_, 1, (Optr)PSend23692);
    // escape:. 
    Send PSend23697 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23696 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23697, (Optr)&t_block_return);
    Block PBlock23695 = new_Block_with(empty_Array, empty_Array, PThreadedCode23696, 1, PSend23697);
    // ifTrue:. 
    Send PSend23694 = new_Send((Optr)PSend23693, SMB_ifTrue_, 1, (Optr)PBlock23695);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23698 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23699 = new_String(L"HTTP/1.0");
    Constant string_23699_Const = new_Constant((Optr)string_23699);
    // =. 
    Send PSend23700 = new_Send((Optr)PSend23698, SMB__equals_, 1, (Optr)string_23699_Const);
    // escape:. 
    Send PSend23704 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23703 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23704, (Optr)&t_block_return);
    Block PBlock23702 = new_Block_with(empty_Array, empty_Array, PThreadedCode23703, 1, PSend23704);
    // ifTrue:. 
    Send PSend23701 = new_Send((Optr)PSend23700, SMB_ifTrue_, 1, (Optr)PBlock23702);
    // protocol. 
    Send PSend23705 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23706 = new_String(L"HTTP/1.1");
    Constant string_23706_Const = new_Constant((Optr)string_23706);
    // =. 
    Send PSend23707 = new_Send((Optr)PSend23705, SMB__equals_, 1, (Optr)string_23706_Const);
    // escape:. 
    Send PSend23711 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23710 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23711, (Optr)&t_block_return);
    Block PBlock23709 = new_Block_with(empty_Array, empty_Array, PThreadedCode23710, 1, PSend23711);
    // ifTrue:. 
    Send PSend23708 = new_Send((Optr)PSend23707, SMB_ifTrue_, 1, (Optr)PBlock23709);
    Array PThreadedCode23677 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23678, (Optr)&t_send1, (Optr)PSend23679, (Optr)&t_send0, (Optr)PSend23680, (Optr)&t_push1, (Optr)string_23681, (Optr)&t_send0, (Optr)PSend23682, (Optr)&t_send1, (Optr)PSend23683, (Optr)&t_send_ifTrue_, (Optr)PSend23684, (Optr)PBlock23685, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23688, (Optr)&t_send1, (Optr)PSend23689, (Optr)&t_send0, (Optr)PSend23690, (Optr)&t_push1, (Optr)string_23691, (Optr)&t_send0, (Optr)PSend23692, (Optr)&t_send1, (Optr)PSend23693, (Optr)&t_send_ifTrue_, (Optr)PSend23694, (Optr)PBlock23695, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23698, (Optr)&t_push1, (Optr)string_23699, (Optr)&t_send1, (Optr)PSend23700, (Optr)&t_send_ifTrue_, (Optr)PSend23701, (Optr)PBlock23702, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23705, (Optr)&t_push1, (Optr)string_23706, (Optr)&t_send1, (Optr)PSend23707, (Optr)&t_send_ifTrue_, (Optr)PSend23708, (Optr)PBlock23709, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23675 = new_Block_with(PArray23676, empty_Array, PThreadedCode23677, 5, PSend23684, PSend23694, PSend23701, PSend23708, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23712 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23675);
    Array PThreadedCode23674 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23675, (Optr)&t_send1, (Optr)PSend23712, (Optr)&t_method_return);
    Method PMethod23673 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23674, 1, PSend23712);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23673, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23714 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23719 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23721 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23722 = new_Send((Optr)PSend23721, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23723 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23724 = new_Send((Optr)PSend23722, SMB__equals_, 1, (Optr)PSend23723);
    Array PThreadedCode23720 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23721, (Optr)&t_send0, (Optr)PSend23722, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23723, (Optr)&t_send1, (Optr)PSend23724, (Optr)&t_method_return);
    Block PBlock23718 = new_Block_with(PArray23719, empty_Array, PThreadedCode23720, 1, PSend23724);
    // reject:. 
    Send PSend23717 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23718);
    Assign PAssign23716 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23717);
    Array PThreadedCode23715 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23716, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23718, (Optr)&t_send1, (Optr)PSend23717, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23713 = new_Method_with(PArray23714, empty_Array, empty_Array, PThreadedCode23715, 2, PAssign23716, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23713, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23726 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23728 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23729 = new_Send((Optr)PSend23728, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23730 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23729);
    Array PThreadedCode23727 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23728, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23729, (Optr)&t_send1, (Optr)PSend23730, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23725 = new_Method_with(PArray23726, empty_Array, empty_Array, PThreadedCode23727, 2, PSend23730, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23725, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23732 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23734 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23733 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23734, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23731 = new_Method_with(PArray23732, empty_Array, empty_Array, PThreadedCode23733, 2, PAssign23734, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23731, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23736 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23738 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23737 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23738, (Optr)&t_method_return);
    Method PMethod23735 = new_Method_with(PArray23736, empty_Array, empty_Array, PThreadedCode23737, 1, PSend23738);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23735, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23744 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23746 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23746_Const = new_Constant((Optr)string_23746);
    // at:put:. 
    Send PSend23747 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23746_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23748 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23748_Const = new_Constant((Optr)string_23748);
    // at:put:. 
    Send PSend23749 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23748_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23750 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23750_Const = new_Constant((Optr)string_23750);
    // at:put:. 
    Send PSend23751 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23750_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23752 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23752_Const = new_Constant((Optr)string_23752);
    // at:put:. 
    Send PSend23753 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23752_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23754 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23754_Const = new_Constant((Optr)string_23754);
    // at:put:. 
    Send PSend23755 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23754_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23756 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23756_Const = new_Constant((Optr)string_23756);
    // at:put:. 
    Send PSend23757 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23756_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23758 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23758_Const = new_Constant((Optr)string_23758);
    // at:put:. 
    Send PSend23759 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23758_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23760 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23760_Const = new_Constant((Optr)string_23760);
    // at:put:. 
    Send PSend23761 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23760_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23762 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23762_Const = new_Constant((Optr)string_23762);
    // at:put:. 
    Send PSend23763 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23762_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23764 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23764_Const = new_Constant((Optr)string_23764);
    // at:put:. 
    Send PSend23765 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23764_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23766 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23766_Const = new_Constant((Optr)string_23766);
    // at:put:. 
    Send PSend23767 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23766_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23768 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23768_Const = new_Constant((Optr)string_23768);
    // at:put:. 
    Send PSend23769 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23768_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23770 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23770_Const = new_Constant((Optr)string_23770);
    // at:put:. 
    Send PSend23771 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23770_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23772 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23772_Const = new_Constant((Optr)string_23772);
    // at:put:. 
    Send PSend23773 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23772_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23774 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23774_Const = new_Constant((Optr)string_23774);
    // at:put:. 
    Send PSend23775 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23774_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23776 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23776_Const = new_Constant((Optr)string_23776);
    // at:put:. 
    Send PSend23777 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23776_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23778 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23778_Const = new_Constant((Optr)string_23778);
    // at:put:. 
    Send PSend23779 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23778_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23780 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23780_Const = new_Constant((Optr)string_23780);
    // at:put:. 
    Send PSend23781 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23780_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23782 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23782_Const = new_Constant((Optr)string_23782);
    // at:put:. 
    Send PSend23783 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23782_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23784 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23784_Const = new_Constant((Optr)string_23784);
    // at:put:. 
    Send PSend23785 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23784_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23786 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23786_Const = new_Constant((Optr)string_23786);
    // at:put:. 
    Send PSend23787 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23786_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23788 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23788_Const = new_Constant((Optr)string_23788);
    // at:put:. 
    Send PSend23789 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23788_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23790 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23790_Const = new_Constant((Optr)string_23790);
    // at:put:. 
    Send PSend23791 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23790_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23792 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23792_Const = new_Constant((Optr)string_23792);
    // at:put:. 
    Send PSend23793 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23792_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23794 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23794_Const = new_Constant((Optr)string_23794);
    // at:put:. 
    Send PSend23795 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23794_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23796 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23796_Const = new_Constant((Optr)string_23796);
    // at:put:. 
    Send PSend23797 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23796_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23798 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23798_Const = new_Constant((Optr)string_23798);
    // at:put:. 
    Send PSend23799 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23798_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23800 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23800_Const = new_Constant((Optr)string_23800);
    // at:put:. 
    Send PSend23801 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23800_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23802 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23802_Const = new_Constant((Optr)string_23802);
    // at:put:. 
    Send PSend23803 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23802_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23804 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23804_Const = new_Constant((Optr)string_23804);
    // at:put:. 
    Send PSend23805 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23804_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23806 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23806_Const = new_Constant((Optr)string_23806);
    // at:put:. 
    Send PSend23807 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23806_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23808 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23808_Const = new_Constant((Optr)string_23808);
    // at:put:. 
    Send PSend23809 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23808_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23810 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23810_Const = new_Constant((Optr)string_23810);
    // at:put:. 
    Send PSend23811 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23810_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23812 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23812_Const = new_Constant((Optr)string_23812);
    // at:put:. 
    Send PSend23813 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23812_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23814 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23814_Const = new_Constant((Optr)string_23814);
    // at:put:. 
    Send PSend23815 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23814_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23816 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23816_Const = new_Constant((Optr)string_23816);
    // at:put:. 
    Send PSend23817 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23816_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23818 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23818_Const = new_Constant((Optr)string_23818);
    // at:put:. 
    Send PSend23819 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23818_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23820 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23820_Const = new_Constant((Optr)string_23820);
    // at:put:. 
    Send PSend23821 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23820_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23822 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23822_Const = new_Constant((Optr)string_23822);
    // at:put:. 
    Send PSend23823 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23822_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23824 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23824_Const = new_Constant((Optr)string_23824);
    // at:put:. 
    Send PSend23825 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23824_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23826 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23826_Const = new_Constant((Optr)string_23826);
    // at:put:. 
    Send PSend23827 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23826_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23828 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23828_Const = new_Constant((Optr)string_23828);
    // at:put:. 
    Send PSend23829 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23828_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23830 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23830_Const = new_Constant((Optr)string_23830);
    // at:put:. 
    Send PSend23831 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23830_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23832 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23832_Const = new_Constant((Optr)string_23832);
    // at:put:. 
    Send PSend23833 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23832_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23834 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23834_Const = new_Constant((Optr)string_23834);
    // at:put:. 
    Send PSend23835 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23834_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23836 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23836_Const = new_Constant((Optr)string_23836);
    // at:put:. 
    Send PSend23837 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23836_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23838 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23745 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23746, (Optr)&t_send2, (Optr)PSend23747, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23748, (Optr)&t_send2, (Optr)PSend23749, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23750, (Optr)&t_send2, (Optr)PSend23751, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23752, (Optr)&t_send2, (Optr)PSend23753, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23754, (Optr)&t_send2, (Optr)PSend23755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23756, (Optr)&t_send2, (Optr)PSend23757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23758, (Optr)&t_send2, (Optr)PSend23759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23760, (Optr)&t_send2, (Optr)PSend23761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23762, (Optr)&t_send2, (Optr)PSend23763, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23764, (Optr)&t_send2, (Optr)PSend23765, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23766, (Optr)&t_send2, (Optr)PSend23767, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23768, (Optr)&t_send2, (Optr)PSend23769, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23770, (Optr)&t_send2, (Optr)PSend23771, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23772, (Optr)&t_send2, (Optr)PSend23773, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23774, (Optr)&t_send2, (Optr)PSend23775, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23776, (Optr)&t_send2, (Optr)PSend23777, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23778, (Optr)&t_send2, (Optr)PSend23779, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23780, (Optr)&t_send2, (Optr)PSend23781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23782, (Optr)&t_send2, (Optr)PSend23783, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23784, (Optr)&t_send2, (Optr)PSend23785, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23786, (Optr)&t_send2, (Optr)PSend23787, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23788, (Optr)&t_send2, (Optr)PSend23789, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23790, (Optr)&t_send2, (Optr)PSend23791, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23792, (Optr)&t_send2, (Optr)PSend23793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23794, (Optr)&t_send2, (Optr)PSend23795, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23796, (Optr)&t_send2, (Optr)PSend23797, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23798, (Optr)&t_send2, (Optr)PSend23799, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23800, (Optr)&t_send2, (Optr)PSend23801, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23802, (Optr)&t_send2, (Optr)PSend23803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23804, (Optr)&t_send2, (Optr)PSend23805, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23806, (Optr)&t_send2, (Optr)PSend23807, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23808, (Optr)&t_send2, (Optr)PSend23809, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23810, (Optr)&t_send2, (Optr)PSend23811, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23812, (Optr)&t_send2, (Optr)PSend23813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23814, (Optr)&t_send2, (Optr)PSend23815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23816, (Optr)&t_send2, (Optr)PSend23817, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23818, (Optr)&t_send2, (Optr)PSend23819, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23820, (Optr)&t_send2, (Optr)PSend23821, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23822, (Optr)&t_send2, (Optr)PSend23823, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23824, (Optr)&t_send2, (Optr)PSend23825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23826, (Optr)&t_send2, (Optr)PSend23827, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23828, (Optr)&t_send2, (Optr)PSend23829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23830, (Optr)&t_send2, (Optr)PSend23831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23832, (Optr)&t_send2, (Optr)PSend23833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23834, (Optr)&t_send2, (Optr)PSend23835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23836, (Optr)&t_send2, (Optr)PSend23837, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23838, (Optr)&t_method_return);
    Block PBlock23743 = new_Block_with(PArray23744, empty_Array, PThreadedCode23745, 47, PSend23747, PSend23749, PSend23751, PSend23753, PSend23755, PSend23757, PSend23759, PSend23761, PSend23763, PSend23765, PSend23767, PSend23769, PSend23771, PSend23773, PSend23775, PSend23777, PSend23779, PSend23781, PSend23783, PSend23785, PSend23787, PSend23789, PSend23791, PSend23793, PSend23795, PSend23797, PSend23799, PSend23801, PSend23803, PSend23805, PSend23807, PSend23809, PSend23811, PSend23813, PSend23815, PSend23817, PSend23819, PSend23821, PSend23823, PSend23825, PSend23827, PSend23829, PSend23831, PSend23833, PSend23835, PSend23837, PSend23838);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23839 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23742 = new_Send((Optr)PBlock23743, SMB_value_, 1, (Optr)PSend23839);
    Assign PAssign23741 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23742);
    Array PThreadedCode23740 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23741, (Optr)&t_push_closure, (Optr)PBlock23743, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23839, (Optr)&t_send1, (Optr)PSend23742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23740, 2, PAssign23741, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23739, HEADER(WebClient_Core_WebMessage_Class));
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