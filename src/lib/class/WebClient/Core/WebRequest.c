#include <lib/class/WebClient/Core/WebRequest.h>


Optr layout_WebClient_Core_WebRequest_Class_class;
Optr slot_WebClient_Core_WebRequest_method;
Optr slot_WebClient_Core_WebRequest_request;
Optr slot_WebClient_Core_WebRequest_rawUrl;
Optr slot_WebClient_Core_WebRequest_server;
Optr layout_WebClient_Core_WebRequest;


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray23300 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23303 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23304 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23302 = new_Block_with(PArray23303, empty_Array, PThreadedCode23304, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend23305 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock23302);
    Array PThreadedCode23301 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23302, (Optr)&t_send4, (Optr)PSend23305, (Optr)&t_method_return);
    Method PMethod23299 = new_Method_with(PArray23300, empty_Array, empty_Array, PThreadedCode23301, 1, PSend23305);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod23299, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_readFrom_() {
    /*
    readFrom: aStream
// 	"Create a WebRequest from a given stream"
// 
// 	^self new readFrom: aStream
    */
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23307 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23308 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23311 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23313 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23314 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23318 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23317 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23318, (Optr)&t_block_return);
    Block PBlock23316 = new_Block_with(empty_Array, empty_Array, PThreadedCode23317, 1, PSend23318);
    // ifTrue:. 
    Send PSend23315 = new_Send((Optr)PSend23314, SMB_ifTrue_, 1, (Optr)PBlock23316);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23321 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23320 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23321);
    Assign PAssign23319 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23320);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23324 = new_String(L" ");
    Constant string_23324_Const = new_Constant((Optr)string_23324);
    // findTokens:. 
    Send PSend23323 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23324_Const);
    Assign PAssign23322 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23323);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23325 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23326 = new_Send((Optr)PSend23325, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23330 = new_String(L"Invalid HTTP request: ");
    Constant string_23330_Const = new_Constant((Optr)string_23330);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23331 = new_Send((Optr)string_23330_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23332 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23331);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23333 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23332);
    Array PThreadedCode23329 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23330, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23331, (Optr)&t_send1, (Optr)PSend23332, (Optr)&t_send1, (Optr)PSend23333, (Optr)&t_block_return);
    Block PBlock23328 = new_Block_with(empty_Array, empty_Array, PThreadedCode23329, 1, PSend23333);
    // ifTrue:. 
    Send PSend23327 = new_Send((Optr)PSend23326, SMB_ifTrue_, 1, (Optr)PBlock23328);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23335 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23334 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23335);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23337 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23336 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23337);
    // size. 
    Send PSend23338 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23339 = new_Send((Optr)PSend23338, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23344 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23343 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23344);
    Array PThreadedCode23342 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23343, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23344, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23341 = new_Block_with(empty_Array, empty_Array, PThreadedCode23342, 1, PAssign23343);
    String string_23348 = new_String(L"HTTP/1.0");
    Constant string_23348_Const = new_Constant((Optr)string_23348);
    Assign PAssign23347 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23348_Const);
    Array PThreadedCode23346 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23347, (Optr)&t_push1, (Optr)string_23348, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23345 = new_Block_with(empty_Array, empty_Array, PThreadedCode23346, 1, PAssign23347);
    // ifTrue:ifFalse:. 
    Send PSend23340 = new_Send((Optr)PSend23339, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23341, (Optr)PBlock23345);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23350 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23349 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23350);
    Array PThreadedCode23312 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23313, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23314, (Optr)&t_send_ifTrue_, (Optr)PSend23315, (Optr)PBlock23316, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23319, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23321, (Optr)&t_send1, (Optr)PSend23320, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23322, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23324, (Optr)&t_send1, (Optr)PSend23323, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23325, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23326, (Optr)&t_send_ifTrue_, (Optr)PSend23327, (Optr)PBlock23328, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23334, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23335, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23336, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23337, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23338, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23339, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23340, (Optr)PBlock23341, (Optr)PBlock23345, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23349, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23350, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23310 = new_Block_with(PArray23311, empty_Array, PThreadedCode23312, 10, PAssign23313, PSend23315, PAssign23319, PAssign23322, PSend23327, PAssign23334, PAssign23336, PSend23340, PAssign23349, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23351 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23310);
    Array PThreadedCode23309 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23310, (Optr)&t_send1, (Optr)PSend23351, (Optr)&t_method_return);
    Method PMethod23306 = new_Method_with(PArray23307, PArray23308, empty_Array, PThreadedCode23309, 1, PSend23351);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23306, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23353 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23356 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23357 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23355 = new_Block_with(PArray23356, empty_Array, PThreadedCode23357, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend23358 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23355);
    Array PThreadedCode23354 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23355, (Optr)&t_send2, (Optr)PSend23358, (Optr)&t_method_return);
    Method PMethod23352 = new_Method_with(PArray23353, empty_Array, empty_Array, PThreadedCode23354, 1, PSend23358);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod23352, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23361 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23364 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23365 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23365_Const = new_Constant((Optr)string_23365);
    // =. 
    Send PSend23366 = new_Send((Optr)PSend23364, SMB__equals_, 1, (Optr)string_23365_Const);
    Array PThreadedCode23363 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23364, (Optr)&t_push1, (Optr)string_23365, (Optr)&t_send1, (Optr)PSend23366, (Optr)&t_block_return);
    Block PBlock23362 = new_Block_with(empty_Array, empty_Array, PThreadedCode23363, 1, PSend23366);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23367 = new_Send((Optr)PSend23361, SMB_and_, 1, (Optr)PBlock23362);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23371 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23372 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend23371, (Optr)true_Const);
    Array PThreadedCode23370 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23371, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend23372, (Optr)&t_block_return);
    Block PBlock23369 = new_Block_with(empty_Array, empty_Array, PThreadedCode23370, 1, PSend23372);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23375 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23374 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23375, (Optr)&t_block_return);
    Block PBlock23373 = new_Block_with(empty_Array, empty_Array, PThreadedCode23374, 1, PSend23375);
    // ifTrue:ifFalse:. 
    Send PSend23368 = new_Send((Optr)PSend23367, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23369, (Optr)PBlock23373);
    Array PThreadedCode23360 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23361, (Optr)&t_push_closure, (Optr)PBlock23362, (Optr)&t_send1, (Optr)PSend23367, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23368, (Optr)PBlock23369, (Optr)PBlock23373, (Optr)&t_method_return);
    Method PMethod23359 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23360, 1, PSend23368);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod23359, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper23378 = new_Super(SMB_initialize, 0);
    String string_23380 = new_String(L"GET");
    Constant string_23380_Const = new_Constant((Optr)string_23380);
    Assign PAssign23379 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23380_Const);
    String string_23382 = new_String(L"HTTP/1.1");
    Constant string_23382_Const = new_Constant((Optr)string_23382);
    Assign PAssign23381 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23382_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23384 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23383 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23384);
    Array PThreadedCode23377 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23378, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23379, (Optr)&t_push1, (Optr)string_23380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23381, (Optr)&t_push1, (Optr)string_23382, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23383, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23376 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23377, 5, PSuper23378, PAssign23379, PAssign23381, PAssign23383, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23376, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23386 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23390 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23390_Const = new_Constant((Optr)string_23390);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23391 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23391_Const = new_Constant((Optr)string_23391);
    // ,. 
    Send PSend23389 = new_Send((Optr)string_23390_Const, SMB__append_, 1, (Optr)string_23391_Const);
    Assign PAssign23388 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23389);
    SmallInt int_400 = new_SmallInt(400);
    String string_23392 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23392_Const = new_Constant((Optr)string_23392);
    // sendResponseCode:content:type:close:. 
    Send PSend23393 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23392_Const, (Optr)true_Const);
    Array PThreadedCode23387 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23388, (Optr)&t_push1, (Optr)string_23390, (Optr)&t_push1, (Optr)string_23391, (Optr)&t_send1, (Optr)PSend23389, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23392, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23393, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23385 = new_Method_with(empty_Array, PArray23386, empty_Array, PThreadedCode23387, 3, PAssign23388, PSend23393, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23385, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23397 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23399 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23400 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23398 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23399, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23400, (Optr)&t_method_return);
    Block PBlock23396 = new_Block_with(PArray23397, empty_Array, PThreadedCode23398, 2, PSend23399, PSend23400);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23401 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23402 = new_Send((Optr)PBlock23396, SMB_value_, 1, (Optr)PSend23401);
    Array PThreadedCode23395 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23396, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23401, (Optr)&t_send1, (Optr)PSend23402, (Optr)&t_method_return);
    Method PMethod23394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23395, 1, PSend23402);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23394, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray23404 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23407 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23408 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23406 = new_Block_with(PArray23407, empty_Array, PThreadedCode23408, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend23409 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock23406);
    Array PThreadedCode23405 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock23406, (Optr)&t_send3, (Optr)PSend23409, (Optr)&t_method_return);
    Method PMethod23403 = new_Method_with(PArray23404, empty_Array, empty_Array, PThreadedCode23405, 1, PSend23409);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod23403, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray23411 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23412 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23416 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23417 = new_String(L"HTTP/1.1");
    Constant string_23417_Const = new_Constant((Optr)string_23417);
    // protocol:code:. 
    Send PSend23415 = new_Send((Optr)PSend23416, SMB_protocol_code_, 2, (Optr)string_23417_Const, (Optr)VAR_code_0_0);
    Assign PAssign23414 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23415);
    String string_23418 = new_String(L"Transfer-Encoding");
    String string_23419 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23418_Const = new_Constant((Optr)string_23418);
    Constant string_23419_Const = new_Constant((Optr)string_23419);
    // headerAt:put:. 
    Send PSend23420 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23418_Const, (Optr)string_23419_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23421 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray23423 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend23425 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend23426 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23428 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23430 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23430_Const = new_Constant((Optr)string_23430);
    // nextPutAll:. 
    Send PSend23431 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_23430_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23432 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend23433 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23434 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode23429 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_23430, (Optr)&t_send1, (Optr)PSend23431, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23432, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23433, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23434, (Optr)&t_method_return);
    Block PBlock23427 = new_Block_with(PArray23428, empty_Array, PThreadedCode23429, 4, PSend23431, PSend23432, PSend23433, PSend23434);
    // value:. 
    Send PSend23435 = new_Send((Optr)PBlock23427, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode23424 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23425, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23426, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23427, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23435, (Optr)&t_method_return);
    Block PBlock23422 = new_Block_with(PArray23423, empty_Array, PThreadedCode23424, 3, PSend23425, PSend23426, PSend23435);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23436 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock23422);
    Array PThreadedCode23413 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23414, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23416, (Optr)&t_push1, (Optr)string_23417, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23415, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23418, (Optr)&t_push1, (Optr)string_23419, (Optr)&t_send2, (Optr)PSend23420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23421, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock23422, (Optr)&t_send2, (Optr)PSend23436, (Optr)&t_method_return);
    Method PMethod23410 = new_Method_with(PArray23411, PArray23412, empty_Array, PThreadedCode23413, 4, PAssign23414, PSend23420, PSend23421, PSend23436);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod23410, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23439 = new_Send((Optr)self, SMB_method, 0);
    String string_23440 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23440_Const = new_Constant((Optr)string_23440);
    // =. 
    Send PSend23441 = new_Send((Optr)PSend23439, SMB__equals_, 1, (Optr)string_23440_Const);
    Array PThreadedCode23438 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23439, (Optr)&t_push1, (Optr)string_23440, (Optr)&t_send1, (Optr)PSend23441, (Optr)&t_method_return);
    Method PMethod23437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23438, 1, PSend23441);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23437, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23444 = new_Send((Optr)self, SMB_method, 0);
    String string_23445 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23445_Const = new_Constant((Optr)string_23445);
    // =. 
    Send PSend23446 = new_Send((Optr)PSend23444, SMB__equals_, 1, (Optr)string_23445_Const);
    Array PThreadedCode23443 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23444, (Optr)&t_push1, (Optr)string_23445, (Optr)&t_send1, (Optr)PSend23446, (Optr)&t_method_return);
    Method PMethod23442 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23443, 1, PSend23446);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod23442, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23448 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23451 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23450 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23451);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend23452 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray23454 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23456 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23455 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23456, (Optr)&t_method_return);
    Block PBlock23453 = new_Block_with(PArray23454, empty_Array, PThreadedCode23455, 1, PSend23456);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend23457 = new_Send((Optr)PSend23452, SMB_associationsDo_, 1, (Optr)PBlock23453);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend23458 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray23460 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23462 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23461 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23462, (Optr)&t_method_return);
    Block PBlock23459 = new_Block_with(PArray23460, empty_Array, PThreadedCode23461, 1, PSend23462);
    // associationsDo:. 
    Send PSend23463 = new_Send((Optr)PSend23458, SMB_associationsDo_, 1, (Optr)PBlock23459);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend23464 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray23466 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23468 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23467 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23468, (Optr)&t_method_return);
    Block PBlock23465 = new_Block_with(PArray23466, empty_Array, PThreadedCode23467, 1, PSend23468);
    // associationsDo:. 
    Send PSend23469 = new_Send((Optr)PSend23464, SMB_associationsDo_, 1, (Optr)PBlock23465);
    Array PThreadedCode23449 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23450, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23452, (Optr)&t_push_closure, (Optr)PBlock23453, (Optr)&t_send1, (Optr)PSend23457, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23458, (Optr)&t_push_closure, (Optr)PBlock23459, (Optr)&t_send1, (Optr)PSend23463, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23464, (Optr)&t_push_closure, (Optr)PBlock23465, (Optr)&t_send1, (Optr)PSend23469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23447 = new_Method_with(empty_Array, PArray23448, empty_Array, PThreadedCode23449, 5, PAssign23450, PSend23457, PSend23463, PSend23469, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod23447, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_23472 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23473 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_23472_Const = new_Constant((Optr)string_23472);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23474 = new_Send((Optr)string_23472_Const, SMB__append_, 1, (Optr)PSend23473);
    String string_23475 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_23475_Const = new_Constant((Optr)string_23475);
    // ,. 
    Send PSend23476 = new_Send((Optr)PSend23474, SMB__append_, 1, (Optr)string_23475_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend23477 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend23476);
    Array PThreadedCode23471 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23472, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23473, (Optr)&t_send1, (Optr)PSend23474, (Optr)&t_push1, (Optr)string_23475, (Optr)&t_send1, (Optr)PSend23476, (Optr)&t_send1, (Optr)PSend23477, (Optr)&t_method_return);
    Method PMethod23470 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23471, 1, PSend23477);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod23470, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode23479 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod23478 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23479, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod23478, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray23481 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23484 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23485 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23483 = new_Block_with(PArray23484, empty_Array, PThreadedCode23485, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend23486 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock23483);
    Array PThreadedCode23482 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock23483, (Optr)&t_send3, (Optr)PSend23486, (Optr)&t_method_return);
    Method PMethod23480 = new_Method_with(PArray23481, empty_Array, empty_Array, PThreadedCode23482, 1, PSend23486);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod23480, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23488 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23490 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend23491 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend23490);
    Array PThreadedCode23489 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23490, (Optr)&t_send2, (Optr)PSend23491, (Optr)&t_method_return);
    Method PMethod23487 = new_Method_with(PArray23488, empty_Array, empty_Array, PThreadedCode23489, 1, PSend23491);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod23487, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray23493 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_23497 = new_String(L"Connection");
    String string_23498 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23497_Const = new_Constant((Optr)string_23497);
    Constant string_23498_Const = new_Constant((Optr)string_23498);
    // headerAt:put:. 
    Send PSend23499 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23497_Const, (Optr)string_23498_Const);
    Array PThreadedCode23496 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23497, (Optr)&t_push1, (Optr)string_23498, (Optr)&t_send2, (Optr)PSend23499, (Optr)&t_block_return);
    Block PBlock23495 = new_Block_with(empty_Array, empty_Array, PThreadedCode23496, 1, PSend23499);
    String string_23502 = new_String(L"Content-Length");
    Constant string_23502_Const = new_Constant((Optr)string_23502);
    // headerAt:put:. 
    Send PSend23503 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23502_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode23501 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23502, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend23503, (Optr)&t_block_return);
    Block PBlock23500 = new_Block_with(empty_Array, empty_Array, PThreadedCode23501, 1, PSend23503);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23504 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23495, (Optr)PBlock23500);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray23506 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23508 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode23507 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23508, (Optr)&t_method_return);
    Block PBlock23505 = new_Block_with(PArray23506, empty_Array, PThreadedCode23507, 1, PSend23508);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23509 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23505);
    Array PThreadedCode23494 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock23495, (Optr)&t_push_closure, (Optr)PBlock23500, (Optr)&t_send2, (Optr)PSend23504, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23505, (Optr)&t_send2, (Optr)PSend23509, (Optr)&t_method_return);
    Method PMethod23492 = new_Method_with(PArray23493, empty_Array, empty_Array, PThreadedCode23494, 2, PSend23504, PSend23509);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod23492, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray23511 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign23513 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode23512 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23513, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23510 = new_Method_with(PArray23511, empty_Array, empty_Array, PThreadedCode23512, 2, PAssign23513, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod23510, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23515 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23518 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23519 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23517 = new_Block_with(PArray23518, empty_Array, PThreadedCode23519, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23520 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23517);
    Array PThreadedCode23516 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23517, (Optr)&t_send2, (Optr)PSend23520, (Optr)&t_method_return);
    Method PMethod23514 = new_Method_with(PArray23515, empty_Array, empty_Array, PThreadedCode23516, 1, PSend23520);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23514, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode23522 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod23521 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23522, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod23521, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_getFields() {
    Symbol SMB_getFields = new_Symbol(L"getFields");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray23524 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23527 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23532 = new_Character(L'?');
    Constant char_23532_Const = new_Constant((Optr)char_23532);
    // copyAfter:. 
    Send PSend23531 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23532_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23535 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23536 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23535);
    Array PThreadedCode23534 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23535, (Optr)&t_send1, (Optr)PSend23536, (Optr)&t_block_return);
    Block PBlock23533 = new_Block_with(empty_Array, empty_Array, PThreadedCode23534, 1, PSend23536);
    // ifEmpty:. 
    Send PSend23530 = new_Send((Optr)PSend23531, SMB_ifEmpty_, 1, (Optr)PBlock23533);
    Assign PAssign23529 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23530);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23537 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23528 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23529, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23532, (Optr)&t_send1, (Optr)PSend23531, (Optr)&t_push_closure, (Optr)PBlock23533, (Optr)&t_send1, (Optr)PSend23530, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23537, (Optr)&t_method_return);
    Block PBlock23526 = new_Block_with(PArray23527, empty_Array, PThreadedCode23528, 2, PAssign23529, PSend23537);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23538 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23526);
    Array PThreadedCode23525 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23526, (Optr)&t_send1, (Optr)PSend23538, (Optr)&t_method_return);
    Method PMethod23523 = new_Method_with(empty_Array, PArray23524, empty_Array, PThreadedCode23525, 1, PSend23538);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23523, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23540 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23542 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23545 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23546 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23546_Const = new_Constant((Optr)string_23546);
    // beginsWith:. 
    Send PSend23547 = new_Send((Optr)PSend23545, SMB_beginsWith_, 1, (Optr)string_23546_Const);
    Array PThreadedCode23544 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23545, (Optr)&t_push1, (Optr)string_23546, (Optr)&t_send1, (Optr)PSend23547, (Optr)&t_block_return);
    Block PBlock23543 = new_Block_with(empty_Array, empty_Array, PThreadedCode23544, 1, PSend23547);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23548 = new_Send((Optr)PSend23542, SMB_and_, 1, (Optr)PBlock23543);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23552 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23553 = new_Send((Optr)PSend23552, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend23554 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend23555 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend23553, (Optr)PSend23554, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23551 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23552, (Optr)&t_send0, (Optr)PSend23553, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23554, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend23555, (Optr)&t_block_return);
    Block PBlock23550 = new_Block_with(empty_Array, empty_Array, PThreadedCode23551, 1, PSend23555);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23558 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23557 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23558, (Optr)&t_block_return);
    Block PBlock23556 = new_Block_with(empty_Array, empty_Array, PThreadedCode23557, 1, PSend23558);
    // ifTrue:ifFalse:. 
    Send PSend23549 = new_Send((Optr)PSend23548, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23550, (Optr)PBlock23556);
    Array PThreadedCode23541 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23542, (Optr)&t_push_closure, (Optr)PBlock23543, (Optr)&t_send1, (Optr)PSend23548, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23549, (Optr)PBlock23550, (Optr)PBlock23556, (Optr)&t_method_return);
    Method PMethod23539 = new_Method_with(PArray23540, empty_Array, empty_Array, PThreadedCode23541, 1, PSend23549);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod23539, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23561 = new_Send((Optr)self, SMB_method, 0);
    String string_23562 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23562_Const = new_Constant((Optr)string_23562);
    // =. 
    Send PSend23563 = new_Send((Optr)PSend23561, SMB__equals_, 1, (Optr)string_23562_Const);
    Array PThreadedCode23560 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23561, (Optr)&t_push1, (Optr)string_23562, (Optr)&t_send1, (Optr)PSend23563, (Optr)&t_method_return);
    Method PMethod23559 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23560, 1, PSend23563);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod23559, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23565 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray23566 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign23568 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_23569 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23569_Const = new_Constant((Optr)string_23569);
    // findString:. 
    Send PSend23570 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_23569_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend23571 = new_Send((Optr)PSend23570, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23575 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23575_Const = new_Constant((Optr)string_23575);
    // headerAt:. 
    Send PSend23576 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23575_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray23578 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_23583 = new_String(L"http://");
    Constant string_23583_Const = new_Constant((Optr)string_23583);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23582 = new_Send((Optr)string_23583_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend23581 = new_Send((Optr)PSend23582, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign23580 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend23581);
    Array PThreadedCode23579 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign23580, (Optr)&t_push1, (Optr)string_23583, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend23582, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend23581, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23577 = new_Block_with(PArray23578, empty_Array, PThreadedCode23579, 1, PAssign23580);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23584 = new_Send((Optr)PSend23576, SMB_ifNotEmpty_, 1, (Optr)PBlock23577);
    Array PThreadedCode23574 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23575, (Optr)&t_send1, (Optr)PSend23576, (Optr)&t_push_closure, (Optr)PBlock23577, (Optr)&t_send1, (Optr)PSend23584, (Optr)&t_block_return);
    Block PBlock23573 = new_Block_with(empty_Array, empty_Array, PThreadedCode23574, 1, PSend23584);
    // ifFalse:. 
    Send PSend23572 = new_Send((Optr)PSend23571, SMB_ifFalse_, 1, (Optr)PBlock23573);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23587 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23588 = new_String(L"HTTP/1.1");
    Constant string_23588_Const = new_Constant((Optr)string_23588);
    // protocol:code:. 
    Send PSend23586 = new_Send((Optr)PSend23587, SMB_protocol_code_, 2, (Optr)string_23588_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign23585 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23586);
    String string_23589 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23589_Const = new_Constant((Optr)string_23589);
    // headerAt:put:. 
    Send PSend23590 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23589_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23591 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_23592 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_23592_Const = new_Constant((Optr)string_23592);
    // sendResponse:content:. 
    Send PSend23593 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_23592_Const);
    Array PThreadedCode23567 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23568, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_23569, (Optr)&t_send1, (Optr)PSend23570, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23571, (Optr)&t_send_ifFalse_, (Optr)PSend23572, (Optr)PBlock23573, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23585, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23587, (Optr)&t_push1, (Optr)string_23588, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend23586, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23589, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend23590, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23591, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23592, (Optr)&t_send2, (Optr)PSend23593, (Optr)&t_method_return);
    Method PMethod23564 = new_Method_with(PArray23565, PArray23566, empty_Array, PThreadedCode23567, 6, PAssign23568, PSend23572, PAssign23585, PSend23590, PSend23591, PSend23593);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod23564, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23595 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23596 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23600 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23601 = new_String(L"HTTP/1.1");
    Constant string_23601_Const = new_Constant((Optr)string_23601);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23599 = new_Send((Optr)PSend23600, SMB_protocol_code_, 2, (Optr)string_23601_Const, (Optr)int_200_Const);
    Assign PAssign23598 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23599);
    String string_23602 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23602_Const = new_Constant((Optr)string_23602);
    // headerAt:put:. 
    Send PSend23603 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23602_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23604 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23605 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode23597 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23598, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23600, (Optr)&t_push1, (Optr)string_23601, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23599, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23602, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend23603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23604, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23605, (Optr)&t_method_return);
    Method PMethod23594 = new_Method_with(PArray23595, PArray23596, empty_Array, PThreadedCode23597, 4, PAssign23598, PSend23603, PSend23604, PSend23605);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod23594, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23608 = new_Send((Optr)self, SMB_method, 0);
    String string_23609 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23609_Const = new_Constant((Optr)string_23609);
    // =. 
    Send PSend23610 = new_Send((Optr)PSend23608, SMB__equals_, 1, (Optr)string_23609_Const);
    Array PThreadedCode23607 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23608, (Optr)&t_push1, (Optr)string_23609, (Optr)&t_send1, (Optr)PSend23610, (Optr)&t_method_return);
    Method PMethod23606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23607, 1, PSend23610);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod23606, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23612 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23614 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode23613 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23614, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23611 = new_Method_with(PArray23612, empty_Array, empty_Array, PThreadedCode23613, 2, PAssign23614, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod23611, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23616 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23618 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23619 = new_Send((Optr)self, SMB_method, 0);
    Constant string_23618_Const = new_Constant((Optr)string_23618);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23620 = new_Send((Optr)string_23618_Const, SMB__append_, 1, (Optr)PSend23619);
    String string_23621 = new_String(L" is not allowed for the URL");
    Constant string_23621_Const = new_Constant((Optr)string_23621);
    // ,. 
    Send PSend23622 = new_Send((Optr)PSend23620, SMB__append_, 1, (Optr)string_23621_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23623 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23624 = new_Send((Optr)PSend23622, SMB__append_, 1, (Optr)PSend23623);
    String string_23625 = new_String(L"</p></body></html>");
    Constant string_23625_Const = new_Constant((Optr)string_23625);
    // ,. 
    Send PSend23626 = new_Send((Optr)PSend23624, SMB__append_, 1, (Optr)string_23625_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend23627 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend23626);
    Array PThreadedCode23617 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_23618, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23619, (Optr)&t_send1, (Optr)PSend23620, (Optr)&t_push1, (Optr)string_23621, (Optr)&t_send1, (Optr)PSend23622, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23623, (Optr)&t_send1, (Optr)PSend23624, (Optr)&t_push1, (Optr)string_23625, (Optr)&t_send1, (Optr)PSend23626, (Optr)&t_send2, (Optr)PSend23627, (Optr)&t_method_return);
    Method PMethod23615 = new_Method_with(PArray23616, empty_Array, empty_Array, PThreadedCode23617, 1, PSend23627);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod23615, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray23629 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray23630 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_23636 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23636_Const = new_Constant((Optr)string_23636);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23637 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_23637_Const = new_Constant((Optr)string_23637);
    // ,. 
    Send PSend23635 = new_Send((Optr)string_23636_Const, SMB__append_, 1, (Optr)string_23637_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23639 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23640 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23638 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23639, (Optr)PSend23640);
    // ,. 
    Send PSend23634 = new_Send((Optr)PSend23635, SMB__append_, 1, (Optr)PSend23638);
    String string_23641 = new_String(L"</pre></body></html>");
    Constant string_23641_Const = new_Constant((Optr)string_23641);
    // ,. 
    Send PSend23633 = new_Send((Optr)PSend23634, SMB__append_, 1, (Optr)string_23641_Const);
    Assign PAssign23632 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend23633);
    SmallInt int_500 = new_SmallInt(500);
    String string_23642 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23642_Const = new_Constant((Optr)string_23642);
    // sendResponseCode:content:type:close:. 
    Send PSend23643 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_23642_Const, (Optr)true_Const);
    Array PThreadedCode23631 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23632, (Optr)&t_push1, (Optr)string_23636, (Optr)&t_push1, (Optr)string_23637, (Optr)&t_send1, (Optr)PSend23635, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23639, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23640, (Optr)&t_send2, (Optr)PSend23638, (Optr)&t_send1, (Optr)PSend23634, (Optr)&t_push1, (Optr)string_23641, (Optr)&t_send1, (Optr)PSend23633, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_23642, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23643, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23628 = new_Method_with(PArray23629, PArray23630, empty_Array, PThreadedCode23631, 3, PAssign23632, PSend23643, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod23628, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23645 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23647 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode23646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23647, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23644 = new_Method_with(PArray23645, empty_Array, empty_Array, PThreadedCode23646, 2, PAssign23647, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod23644, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray23649 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23652 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23654 = new_String(L"Content-Type");
    String string_23655 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23654_Const = new_Constant((Optr)string_23654);
    Constant string_23655_Const = new_Constant((Optr)string_23655);
    // headerAt:put:. 
    Send PSend23656 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23654_Const, (Optr)string_23655_Const);
    Array PThreadedCode23653 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23654, (Optr)&t_push1, (Optr)string_23655, (Optr)&t_send2, (Optr)PSend23656, (Optr)&t_method_return);
    Block PBlock23651 = new_Block_with(PArray23652, empty_Array, PThreadedCode23653, 1, PSend23656);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend23657 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock23651);
    Array PThreadedCode23650 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock23651, (Optr)&t_send2, (Optr)PSend23657, (Optr)&t_method_return);
    Method PMethod23648 = new_Method_with(PArray23649, empty_Array, empty_Array, PThreadedCode23650, 1, PSend23657);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod23648, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23659 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray23660 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23664 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23663 = new_Send((Optr)PSend23664, SMB_not, 0);
    Assign PAssign23662 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend23663);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_23668 = new_String(L"Connection");
    String string_23669 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23668_Const = new_Constant((Optr)string_23668);
    Constant string_23669_Const = new_Constant((Optr)string_23669);
    // headerAt:put:. 
    Send PSend23670 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23668_Const, (Optr)string_23669_Const);
    Array PThreadedCode23667 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23668, (Optr)&t_push1, (Optr)string_23669, (Optr)&t_send2, (Optr)PSend23670, (Optr)&t_block_return);
    Block PBlock23666 = new_Block_with(empty_Array, empty_Array, PThreadedCode23667, 1, PSend23670);
    // ifTrue:. 
    Send PSend23665 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23666);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23671 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23672 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23676 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23675 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23676, (Optr)&t_block_return);
    Block PBlock23674 = new_Block_with(empty_Array, empty_Array, PThreadedCode23675, 1, PSend23676);
    // ifTrue:. 
    Send PSend23673 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23674);
    Array PThreadedCode23661 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign23662, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23664, (Optr)&t_send0, (Optr)PSend23663, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23665, (Optr)PBlock23666, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23671, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23672, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23673, (Optr)PBlock23674, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23658 = new_Method_with(PArray23659, PArray23660, empty_Array, PThreadedCode23661, 6, PAssign23662, PSend23665, PSend23671, PSend23672, PSend23673, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod23658, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23678 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend23680 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23679 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23680, (Optr)&t_method_return);
    Method PMethod23677 = new_Method_with(PArray23678, empty_Array, empty_Array, PThreadedCode23679, 1, PSend23680);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod23677, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23682 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23683 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23687 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23688 = new_String(L"HTTP/1.1");
    Constant string_23688_Const = new_Constant((Optr)string_23688);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23686 = new_Send((Optr)PSend23687, SMB_protocol_code_, 2, (Optr)string_23688_Const, (Optr)int_405_Const);
    Assign PAssign23685 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23686);
    String string_23689 = new_String(L"Content-Type");
    String string_23690 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23689_Const = new_Constant((Optr)string_23689);
    Constant string_23690_Const = new_Constant((Optr)string_23690);
    // headerAt:put:. 
    Send PSend23691 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23689_Const, (Optr)string_23690_Const);
    String string_23692 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23694 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23697 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23699 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23698 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23699, (Optr)&t_method_return);
    Block PBlock23696 = new_Block_with(PArray23697, empty_Array, PThreadedCode23698, 1, PSend23699);
    Character char_23702 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23702_Const = new_Constant((Optr)char_23702);
    // nextPut:. 
    Send PSend23703 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23702_Const);
    Array PThreadedCode23701 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23702, (Optr)&t_send1, (Optr)PSend23703, (Optr)&t_block_return);
    Block PBlock23700 = new_Block_with(empty_Array, empty_Array, PThreadedCode23701, 1, PSend23703);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23704 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23696, (Optr)PBlock23700);
    Array PThreadedCode23695 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23696, (Optr)&t_push_closure, (Optr)PBlock23700, (Optr)&t_send2, (Optr)PSend23704, (Optr)&t_method_return);
    Block PBlock23693 = new_Block_with(PArray23694, empty_Array, PThreadedCode23695, 1, PSend23704);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23705 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23693);
    Constant string_23692_Const = new_Constant((Optr)string_23692);
    // headerAt:put:. 
    Send PSend23706 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23692_Const, (Optr)PSend23705);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23707 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23684 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23685, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23687, (Optr)&t_push1, (Optr)string_23688, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23686, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23689, (Optr)&t_push1, (Optr)string_23690, (Optr)&t_send2, (Optr)PSend23691, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23692, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23693, (Optr)&t_send1, (Optr)PSend23705, (Optr)&t_send2, (Optr)PSend23706, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23707, (Optr)&t_method_return);
    Method PMethod23681 = new_Method_with(PArray23682, PArray23683, empty_Array, PThreadedCode23684, 4, PAssign23685, PSend23691, PSend23706, PSend23707);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23681, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23709 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23710 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23714 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23715 = new_String(L"HTTP/1.1");
    Constant string_23715_Const = new_Constant((Optr)string_23715);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23713 = new_Send((Optr)PSend23714, SMB_protocol_code_, 2, (Optr)string_23715_Const, (Optr)int_200_Const);
    Assign PAssign23712 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23713);
    String string_23716 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23716_Const = new_Constant((Optr)string_23716);
    // headerAt:put:. 
    Send PSend23717 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23716_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23718 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23719 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23711 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23712, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23714, (Optr)&t_push1, (Optr)string_23715, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23713, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23716, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23717, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23718, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23719, (Optr)&t_method_return);
    Method PMethod23708 = new_Method_with(PArray23709, PArray23710, empty_Array, PThreadedCode23711, 4, PAssign23712, PSend23717, PSend23718, PSend23719);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23708, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray23721 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_23723 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_23723_Const = new_Constant((Optr)string_23723);
    // stream200Response:size:type:. 
    Send PSend23724 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_23723_Const);
    Array PThreadedCode23722 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_23723, (Optr)&t_send3, (Optr)PSend23724, (Optr)&t_method_return);
    Method PMethod23720 = new_Method_with(PArray23721, empty_Array, empty_Array, PThreadedCode23722, 1, PSend23724);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod23720, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23726 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23729 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23731 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23732 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23733 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend23734 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23735 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23736 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode23730 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend23731, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23732, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend23733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23734, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend23735, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23736, (Optr)&t_method_return);
    Block PBlock23728 = new_Block_with(PArray23729, empty_Array, PThreadedCode23730, 6, PSend23731, PSend23732, PSend23733, PSend23734, PSend23735, PSend23736);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23737 = new_Send((Optr)PBlock23728, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23727 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23728, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23737, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23725 = new_Method_with(PArray23726, empty_Array, empty_Array, PThreadedCode23727, 2, PSend23737, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod23725, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23739 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23741 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23740 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23741, (Optr)&t_method_return);
    Method PMethod23738 = new_Method_with(PArray23739, empty_Array, empty_Array, PThreadedCode23740, 1, PSend23741);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod23738, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23743 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23744 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23748 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23749 = new_String(L"HTTP/1.1");
    Constant string_23749_Const = new_Constant((Optr)string_23749);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend23747 = new_Send((Optr)PSend23748, SMB_protocol_code_, 2, (Optr)string_23749_Const, (Optr)int_404_Const);
    Assign PAssign23746 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23747);
    String string_23750 = new_String(L"Content-Type");
    String string_23751 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23750_Const = new_Constant((Optr)string_23750);
    Constant string_23751_Const = new_Constant((Optr)string_23751);
    // headerAt:put:. 
    Send PSend23752 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23750_Const, (Optr)string_23751_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23753 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23754 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode23745 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23746, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23748, (Optr)&t_push1, (Optr)string_23749, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend23747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23750, (Optr)&t_push1, (Optr)string_23751, (Optr)&t_send2, (Optr)PSend23752, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend23753, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend23754, (Optr)&t_method_return);
    Method PMethod23742 = new_Method_with(PArray23743, PArray23744, empty_Array, PThreadedCode23745, 4, PAssign23746, PSend23752, PSend23753, PSend23754);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod23742, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23756 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend23758 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23757 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23758, (Optr)&t_method_return);
    Method PMethod23755 = new_Method_with(PArray23756, empty_Array, empty_Array, PThreadedCode23757, 1, PSend23758);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod23755, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23760 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23762 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23762_Const = new_Constant((Optr)string_23762);
    // send200Response:contentType:. 
    Send PSend23763 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23762_Const);
    Array PThreadedCode23761 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23762, (Optr)&t_send2, (Optr)PSend23763, (Optr)&t_method_return);
    Method PMethod23759 = new_Method_with(PArray23760, empty_Array, empty_Array, PThreadedCode23761, 1, PSend23763);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23759, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23765 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23767 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23767_Const = new_Constant((Optr)string_23767);
    // send200Response:contentType:. 
    Send PSend23768 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_23767_Const);
    Array PThreadedCode23766 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_23767, (Optr)&t_send2, (Optr)PSend23768, (Optr)&t_method_return);
    Method PMethod23764 = new_Method_with(PArray23765, empty_Array, empty_Array, PThreadedCode23766, 1, PSend23768);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod23764, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray23770 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23772 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23773 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23774 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend23772, (Optr)PSend23773);
    Array PThreadedCode23771 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend23772, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend23773, (Optr)&t_send3, (Optr)PSend23774, (Optr)&t_method_return);
    Method PMethod23769 = new_Method_with(PArray23770, empty_Array, empty_Array, PThreadedCode23771, 1, PSend23774);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod23769, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23777 = new_Send((Optr)self, SMB_method, 0);
    String string_23778 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23778_Const = new_Constant((Optr)string_23778);
    // =. 
    Send PSend23779 = new_Send((Optr)PSend23777, SMB__equals_, 1, (Optr)string_23778_Const);
    Array PThreadedCode23776 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23777, (Optr)&t_push1, (Optr)string_23778, (Optr)&t_send1, (Optr)PSend23779, (Optr)&t_method_return);
    Method PMethod23775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23776, 1, PSend23779);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod23775, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23781 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend23783 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper23784 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23782 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23783, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper23784, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23780 = new_Method_with(PArray23781, empty_Array, empty_Array, PThreadedCode23782, 3, PSend23783, PSuper23784, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23780, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode23786 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod23785 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23786, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod23785, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23789 = new_Send((Optr)self, SMB_method, 0);
    String string_23790 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23790_Const = new_Constant((Optr)string_23790);
    // =. 
    Send PSend23791 = new_Send((Optr)PSend23789, SMB__equals_, 1, (Optr)string_23790_Const);
    Array PThreadedCode23788 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23789, (Optr)&t_push1, (Optr)string_23790, (Optr)&t_send1, (Optr)PSend23791, (Optr)&t_method_return);
    Method PMethod23787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23788, 1, PSend23791);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod23787, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23796 = new_Send((Optr)self, SMB_method, 0);
    String string_23797 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23797_Const = new_Constant((Optr)string_23797);
    // ,. 
    Send PSend23798 = new_Send((Optr)PSend23796, SMB__append_, 1, (Optr)string_23797_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23799 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23800 = new_Send((Optr)PSend23798, SMB__append_, 1, (Optr)PSend23799);
    String string_23801 = new_String(L" ");
    Constant string_23801_Const = new_Constant((Optr)string_23801);
    // ,. 
    Send PSend23802 = new_Send((Optr)PSend23800, SMB__append_, 1, (Optr)string_23801_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23803 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend23804 = new_Send((Optr)PSend23802, SMB__append_, 1, (Optr)PSend23803);
    Array PThreadedCode23795 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23796, (Optr)&t_push1, (Optr)string_23797, (Optr)&t_send1, (Optr)PSend23798, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23799, (Optr)&t_send1, (Optr)PSend23800, (Optr)&t_push1, (Optr)string_23801, (Optr)&t_send1, (Optr)PSend23802, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23803, (Optr)&t_send1, (Optr)PSend23804, (Optr)&t_block_return);
    Block PBlock23794 = new_Block_with(empty_Array, empty_Array, PThreadedCode23795, 1, PSend23804);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23805 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock23794);
    Array PThreadedCode23793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock23794, (Optr)&t_send1, (Optr)PSend23805, (Optr)&t_method_return);
    Method PMethod23792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23793, 1, PSend23805);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod23792, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2656 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // copyUpTo:. 
    Send PSend23808 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2656_Const);
    Character char_23532 = new_Character(L'?');
    Constant char_23532_Const = new_Constant((Optr)char_23532);
    // copyUpTo:. 
    Send PSend23809 = new_Send((Optr)PSend23808, SMB_copyUpTo_, 1, (Optr)char_23532_Const);
    Array PThreadedCode23807 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend23808, (Optr)&t_push1, (Optr)char_23532, (Optr)&t_send1, (Optr)PSend23809, (Optr)&t_method_return);
    Method PMethod23806 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23807, 1, PSend23809);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod23806, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23812 = new_Send((Optr)self, SMB_method, 0);
    String string_23813 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23813_Const = new_Constant((Optr)string_23813);
    // =. 
    Send PSend23814 = new_Send((Optr)PSend23812, SMB__equals_, 1, (Optr)string_23813_Const);
    Array PThreadedCode23811 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23812, (Optr)&t_push1, (Optr)string_23813, (Optr)&t_send1, (Optr)PSend23814, (Optr)&t_method_return);
    Method PMethod23810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23811, 1, PSend23814);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23810, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isHeadRequest, MC_SMB_isHeadRequest);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray23816 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_23818 = new_String(L"Date");
    Array PThreadedCode23820 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23819 = new_Block_with(empty_Array, empty_Array, PThreadedCode23820, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23821 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23819);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend23822 = new_Send((Optr)PSend23821, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23818_Const = new_Constant((Optr)string_23818);
    // headerAt:put:. 
    Send PSend23823 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23818_Const, (Optr)PSend23822);
    String string_23824 = new_String(L"Server");
    Array PThreadedCode23826 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23825 = new_Block_with(empty_Array, empty_Array, PThreadedCode23826, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend23827 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23825);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend23828 = new_Send((Optr)PSend23827, SMB_serverString, 0);
    Constant string_23824_Const = new_Constant((Optr)string_23824);
    // headerAt:put:. 
    Send PSend23829 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23824_Const, (Optr)PSend23828);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23834 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23835 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend23836 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23840 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode23839 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23840, (Optr)&t_block_return);
    Block PBlock23838 = new_Block_with(empty_Array, empty_Array, PThreadedCode23839, 1, PSend23840);
    // ifFalse:. 
    Send PSend23837 = new_Send((Optr)PSend23836, SMB_ifFalse_, 1, (Optr)PBlock23838);
    Array PThreadedCode23833 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23834, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23835, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23836, (Optr)&t_send_ifFalse_, (Optr)PSend23837, (Optr)PBlock23838, (Optr)&t_block_return);
    Block PBlock23832 = new_Block_with(empty_Array, empty_Array, PThreadedCode23833, 3, PSend23834, PSend23835, PSend23837);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray23842 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode23843 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23841 = new_Block_with(PArray23842, empty_Array, PThreadedCode23843, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23844 = new_Send((Optr)PBlock23832, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock23841);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend23847 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode23846 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend23847, (Optr)&t_block_return);
    Block PBlock23845 = new_Block_with(empty_Array, empty_Array, PThreadedCode23846, 1, PSend23847);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23848 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock23845);
    Array PThreadedCode23831 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock23832, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock23841, (Optr)&t_send2, (Optr)PSend23844, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23845, (Optr)&t_send1, (Optr)PSend23848, (Optr)&t_block_return);
    Block PBlock23830 = new_Block_with(empty_Array, empty_Array, PThreadedCode23831, 2, PSend23844, PSend23848);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend23849 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23830);
    Array PThreadedCode23817 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23818, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23819, (Optr)&t_send1, (Optr)PSend23821, (Optr)&t_send0, (Optr)PSend23822, (Optr)&t_send2, (Optr)PSend23823, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23824, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23825, (Optr)&t_send1, (Optr)PSend23827, (Optr)&t_send0, (Optr)PSend23828, (Optr)&t_send2, (Optr)PSend23829, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23830, (Optr)&t_send2, (Optr)PSend23849, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23815 = new_Method_with(PArray23816, empty_Array, empty_Array, PThreadedCode23817, 4, PSend23823, PSend23829, PSend23849, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod23815, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23851 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23854 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23853 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23854);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray23856 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_23858 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray23860 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23862 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode23861 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend23862, (Optr)&t_method_return);
    Block PBlock23859 = new_Block_with(PArray23860, empty_Array, PThreadedCode23861, 1, PSend23862);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_23858_Const = new_Constant((Optr)string_23858);
    // at:ifPresent:. 
    Send PSend23863 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_23858_Const, (Optr)PBlock23859);
    Array PThreadedCode23857 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_23858, (Optr)&t_push_closure, (Optr)PBlock23859, (Optr)&t_send2, (Optr)PSend23863, (Optr)&t_method_return);
    Block PBlock23855 = new_Block_with(PArray23856, empty_Array, PThreadedCode23857, 1, PSend23863);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend23864 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock23855);
    Array PThreadedCode23852 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign23853, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23854, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23855, (Optr)&t_send1, (Optr)PSend23864, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23850 = new_Method_with(empty_Array, PArray23851, empty_Array, PThreadedCode23852, 3, PAssign23853, PSend23864, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod23850, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray23866 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23869 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23870 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23868 = new_Block_with(PArray23869, empty_Array, PThreadedCode23870, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend23871 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock23868);
    Array PThreadedCode23867 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock23868, (Optr)&t_send3, (Optr)PSend23871, (Optr)&t_method_return);
    Method PMethod23865 = new_Method_with(PArray23866, empty_Array, empty_Array, PThreadedCode23867, 1, PSend23871);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod23865, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23873 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23875 = new_String(L"");
    String string_23876 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23878 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23880 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23882 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray23885 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23887 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode23886 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend23887, (Optr)&t_method_return);
    Block PBlock23884 = new_Block_with(PArray23885, empty_Array, PThreadedCode23886, 1, PSend23887);
    Character char_23702 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23702_Const = new_Constant((Optr)char_23702);
    // nextPut:. 
    Send PSend23890 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23702_Const);
    Array PThreadedCode23889 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23702, (Optr)&t_send1, (Optr)PSend23890, (Optr)&t_block_return);
    Block PBlock23888 = new_Block_with(empty_Array, empty_Array, PThreadedCode23889, 1, PSend23890);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23891 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23884, (Optr)PBlock23888);
    Array PThreadedCode23883 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23884, (Optr)&t_push_closure, (Optr)PBlock23888, (Optr)&t_send2, (Optr)PSend23891, (Optr)&t_method_return);
    Block PBlock23881 = new_Block_with(PArray23882, empty_Array, PThreadedCode23883, 1, PSend23891);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23892 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23881);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23880_Const = new_Constant((Optr)string_23880);
    // headerAt:put:. 
    Send PSend23893 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23880_Const, (Optr)PSend23892);
    Array PThreadedCode23879 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23880, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23881, (Optr)&t_send1, (Optr)PSend23892, (Optr)&t_send2, (Optr)PSend23893, (Optr)&t_method_return);
    Block PBlock23877 = new_Block_with(PArray23878, empty_Array, PThreadedCode23879, 1, PSend23893);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_23875_Const = new_Constant((Optr)string_23875);
    Constant string_23876_Const = new_Constant((Optr)string_23876);
    // send200Response:contentType:do:. 
    Send PSend23894 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_23875_Const, (Optr)string_23876_Const, (Optr)PBlock23877);
    Array PThreadedCode23874 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23875, (Optr)&t_push1, (Optr)string_23876, (Optr)&t_push_closure, (Optr)PBlock23877, (Optr)&t_send3, (Optr)PSend23894, (Optr)&t_method_return);
    Method PMethod23872 = new_Method_with(PArray23873, empty_Array, empty_Array, PThreadedCode23874, 1, PSend23894);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod23872, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray23896 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray23899 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_23904 = new_String(L"Connection");
    String string_23905 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23904_Const = new_Constant((Optr)string_23904);
    Constant string_23905_Const = new_Constant((Optr)string_23905);
    // headerAt:put:. 
    Send PSend23906 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_23904_Const, (Optr)string_23905_Const);
    Array PThreadedCode23903 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_23904, (Optr)&t_push1, (Optr)string_23905, (Optr)&t_send2, (Optr)PSend23906, (Optr)&t_block_return);
    Block PBlock23902 = new_Block_with(empty_Array, empty_Array, PThreadedCode23903, 1, PSend23906);
    // ifTrue:. 
    Send PSend23901 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock23902);
    Array PThreadedCode23900 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend23901, (Optr)PBlock23902, (Optr)&t_method_return);
    Block PBlock23898 = new_Block_with(PArray23899, empty_Array, PThreadedCode23900, 1, PSend23901);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend23907 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock23898);
    Array PThreadedCode23897 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23898, (Optr)&t_send4, (Optr)PSend23907, (Optr)&t_method_return);
    Method PMethod23895 = new_Method_with(PArray23896, empty_Array, empty_Array, PThreadedCode23897, 1, PSend23907);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod23895, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23909 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23910 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23914 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23915 = new_String(L"HTTP/1.1");
    Constant string_23915_Const = new_Constant((Optr)string_23915);
    // protocol:code:. 
    Send PSend23913 = new_Send((Optr)PSend23914, SMB_protocol_code_, 2, (Optr)string_23915_Const, (Optr)VAR_code_0_0);
    Assign PAssign23912 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23913);
    String string_23918 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23918_Const = new_Constant((Optr)string_23918);
    // headerAt:put:. 
    Send PSend23919 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23918_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode23917 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23918, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23919, (Optr)&t_block_return);
    Block PBlock23916 = new_Block_with(empty_Array, empty_Array, PThreadedCode23917, 1, PSend23919);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23920 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23916);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23921 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23922 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode23911 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23912, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23914, (Optr)&t_push1, (Optr)string_23915, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23913, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23916, (Optr)&t_send1, (Optr)PSend23920, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23921, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend23922, (Optr)&t_method_return);
    Method PMethod23908 = new_Method_with(PArray23909, PArray23910, empty_Array, PThreadedCode23911, 4, PAssign23912, PSend23920, PSend23921, PSend23922);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod23908, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23924 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23926 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend23927 = new_Send((Optr)PSend23926, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23925 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23926, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23927, (Optr)&t_method_return);
    Method PMethod23923 = new_Method_with(PArray23924, empty_Array, empty_Array, PThreadedCode23925, 1, PSend23927);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23923, HEADER(WebClient_Core_WebRequest_Class));
    store_method(HEADER(WebClient_Core_WebRequest_Class), SMB_readFrom_, MC_SMB_readFrom_);
}

void init_WebClient_Core_PWebRequest_layout() {
    layout_WebClient_Core_WebRequest_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[5] = slot_WebClient_Core_WebMessage_Class_class_statusCodes; // statusCodes 
    
    Symbol  SMB_WebRequest = new_Symbol(L"WebRequest");
    slot_WebClient_Core_WebRequest_method = (Optr)new_Slot(4, L"method");
    slot_WebClient_Core_WebRequest_request = (Optr)new_Slot(5, L"request");
    slot_WebClient_Core_WebRequest_rawUrl = (Optr)new_Slot(6, L"rawUrl");
    slot_WebClient_Core_WebRequest_server = (Optr)new_Slot(7, L"server");
    layout_WebClient_Core_WebRequest = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_WebClient_Core_WebRequest)->values[0] = slot_WebClient_Core_WebMessage_stream; // stream 
    ((Array)layout_WebClient_Core_WebRequest)->values[1] = slot_WebClient_Core_WebMessage_protocol; // protocol 
    ((Array)layout_WebClient_Core_WebRequest)->values[2] = slot_WebClient_Core_WebMessage_headers; // headers 
    ((Array)layout_WebClient_Core_WebRequest)->values[3] = slot_WebClient_Core_WebMessage_content; // content 
    ((Array)layout_WebClient_Core_WebRequest)->values[4] = slot_WebClient_Core_WebRequest_method; // method 
    ((Array)layout_WebClient_Core_WebRequest)->values[5] = slot_WebClient_Core_WebRequest_request; // request 
    ((Array)layout_WebClient_Core_WebRequest)->values[6] = slot_WebClient_Core_WebRequest_rawUrl; // rawUrl 
    ((Array)layout_WebClient_Core_WebRequest)->values[7] = slot_WebClient_Core_WebRequest_server; // server 
    WebClient_Core_WebRequest_Class = (Class)new_Class(WebClient_Core_WebMessage_Class, layout_WebClient_Core_WebRequest_Class_class);
    WebClient_Core_WebRequest_Class->layout = layout_WebClient_Core_WebRequest;
    WebClient_Core_WebRequest_Class->name = SMB_WebRequest;
    
}

void init_WebClient_Core_PWebRequest_methods() {
    init_SMB_stream200Response_size_type_();
    init_SMB_readFrom_();
    init_SMB_send302Response_();
    init_SMB_postFields();
    init_SMB_initialize();
    init_SMB_send400Response();
    init_SMB_newResponse();
    init_SMB_send3xxResponse_code_();
    init_SMB_sendResponse_chunked_do_();
    init_SMB_isOptionsRequest();
    init_SMB_isTraceRequest();
    init_SMB_fields();
    init_SMB_send404Response();
    init_SMB_rawUrl();
    init_SMB_send200Response_contentType_();
    init_SMB_stream200Response_();
    init_SMB_sendResponse_contentStream_size_();
    init_SMB_server_();
    init_SMB_send301Response_();
    init_SMB_server();
    init_SMB_getFields();
    init_SMB_multipartFieldsDo_();
    init_SMB_isPutRequest();
    init_SMB_send3xxResponse_code_do_();
    init_SMB_send200Response_contentType_do_();
    init_SMB_isPostRequest();
    init_SMB_rawUrl_();
    init_SMB_send405Response_();
    init_SMB_send500Response_();
    init_SMB_method_();
    init_SMB_send404Response_();
    init_SMB_closeIfTransient_after_();
    init_SMB_send301Response_do_();
    init_SMB_send405Response_content_();
    init_SMB_stream200Response_size_type_do_();
    init_SMB_stream200Response_size_();
    init_SMB_writeRequestOn_();
    init_SMB_newWebSocketOn_();
    init_SMB_send404Response_do_();
    init_SMB_send302Response_do_();
    init_SMB_sendXmlResponse_();
    init_SMB_send200Response_();
    init_SMB_sendResponse_content_();
    init_SMB_isGetRequest();
    init_SMB_writeOn_();
    init_SMB_method();
    init_SMB_isDeleteRequest();
    init_SMB_requestLine();
    init_SMB_url();
    init_SMB_isHeadRequest();
    init_SMB_sendResponse_contentBlock_();
    init_SMB_multipartFields();
    init_SMB_sendResponse_chunked_();
    init_SMB_sendOptionsResponse_();
    init_SMB_sendResponseCode_content_type_close_();
    init_SMB_sendResponseCode_content_type_do_();
    init_class_SMB_readFrom_();
    
}