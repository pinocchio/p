#include <lib/class/WebClient/Core/WebRequest.h>


Optr layout_WebClient_Core_WebRequest_Class_class;
Optr slot_WebClient_Core_WebRequest_method;
Optr slot_WebClient_Core_WebRequest_request;
Optr slot_WebClient_Core_WebRequest_rawUrl;
Optr slot_WebClient_Core_WebRequest_server;
Optr layout_WebClient_Core_WebRequest;


static void init_SMB_getFields() {
    Symbol SMB_getFields = new_Symbol(L"getFields");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray23330 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23333 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23338 = new_Character(L'?');
    Constant char_23338_Const = new_Constant((Optr)char_23338);
    // copyAfter:. 
    Send PSend23337 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23338_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23341 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23342 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23341);
    Array PThreadedCode23340 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23341, (Optr)&t_send1, (Optr)PSend23342, (Optr)&t_block_return);
    Block PBlock23339 = new_Block_with(empty_Array, empty_Array, PThreadedCode23340, 1, PSend23342);
    // ifEmpty:. 
    Send PSend23336 = new_Send((Optr)PSend23337, SMB_ifEmpty_, 1, (Optr)PBlock23339);
    Assign PAssign23335 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23336);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23343 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23334 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23335, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23338, (Optr)&t_send1, (Optr)PSend23337, (Optr)&t_push_closure, (Optr)PBlock23339, (Optr)&t_send1, (Optr)PSend23336, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23343, (Optr)&t_method_return);
    Block PBlock23332 = new_Block_with(PArray23333, empty_Array, PThreadedCode23334, 2, PAssign23335, PSend23343);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23344 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23332);
    Array PThreadedCode23331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23332, (Optr)&t_send1, (Optr)PSend23344, (Optr)&t_method_return);
    Method PMethod23329 = new_Method_with(empty_Array, PArray23330, empty_Array, PThreadedCode23331, 1, PSend23344);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23329, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23347 = new_Send((Optr)self, SMB_method, 0);
    String string_23348 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23348_Const = new_Constant((Optr)string_23348);
    // =. 
    Send PSend23349 = new_Send((Optr)PSend23347, SMB__equals_, 1, (Optr)string_23348_Const);
    Array PThreadedCode23346 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23347, (Optr)&t_push1, (Optr)string_23348, (Optr)&t_send1, (Optr)PSend23349, (Optr)&t_method_return);
    Method PMethod23345 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23346, 1, PSend23349);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23345, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isHeadRequest, MC_SMB_isHeadRequest);
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
    Array PArray23351 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23352 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23355 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23357 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23358 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23362 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23361 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23362, (Optr)&t_block_return);
    Block PBlock23360 = new_Block_with(empty_Array, empty_Array, PThreadedCode23361, 1, PSend23362);
    // ifTrue:. 
    Send PSend23359 = new_Send((Optr)PSend23358, SMB_ifTrue_, 1, (Optr)PBlock23360);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23365 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23364 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23365);
    Assign PAssign23363 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23364);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23368 = new_String(L" ");
    Constant string_23368_Const = new_Constant((Optr)string_23368);
    // findTokens:. 
    Send PSend23367 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23368_Const);
    Assign PAssign23366 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23367);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23369 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23370 = new_Send((Optr)PSend23369, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23374 = new_String(L"Invalid HTTP request: ");
    Constant string_23374_Const = new_Constant((Optr)string_23374);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23375 = new_Send((Optr)string_23374_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23376 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23375);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23377 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23376);
    Array PThreadedCode23373 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23374, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23375, (Optr)&t_send1, (Optr)PSend23376, (Optr)&t_send1, (Optr)PSend23377, (Optr)&t_block_return);
    Block PBlock23372 = new_Block_with(empty_Array, empty_Array, PThreadedCode23373, 1, PSend23377);
    // ifTrue:. 
    Send PSend23371 = new_Send((Optr)PSend23370, SMB_ifTrue_, 1, (Optr)PBlock23372);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23379 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23378 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23379);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23381 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23380 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23381);
    // size. 
    Send PSend23382 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23383 = new_Send((Optr)PSend23382, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23388 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23387 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23388);
    Array PThreadedCode23386 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23387, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23388, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23385 = new_Block_with(empty_Array, empty_Array, PThreadedCode23386, 1, PAssign23387);
    String string_23392 = new_String(L"HTTP/1.0");
    Constant string_23392_Const = new_Constant((Optr)string_23392);
    Assign PAssign23391 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23392_Const);
    Array PThreadedCode23390 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23391, (Optr)&t_push1, (Optr)string_23392, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23389 = new_Block_with(empty_Array, empty_Array, PThreadedCode23390, 1, PAssign23391);
    // ifTrue:ifFalse:. 
    Send PSend23384 = new_Send((Optr)PSend23383, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23385, (Optr)PBlock23389);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23394 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23393 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23394);
    Array PThreadedCode23356 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23357, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23358, (Optr)&t_send_ifTrue_, (Optr)PSend23359, (Optr)PBlock23360, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23363, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23365, (Optr)&t_send1, (Optr)PSend23364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23366, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23368, (Optr)&t_send1, (Optr)PSend23367, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23369, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23370, (Optr)&t_send_ifTrue_, (Optr)PSend23371, (Optr)PBlock23372, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23378, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23379, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23380, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23381, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23382, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23383, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23384, (Optr)PBlock23385, (Optr)PBlock23389, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23393, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23394, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23354 = new_Block_with(PArray23355, empty_Array, PThreadedCode23356, 10, PAssign23357, PSend23359, PAssign23363, PAssign23366, PSend23371, PAssign23378, PAssign23380, PSend23384, PAssign23393, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23395 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23354);
    Array PThreadedCode23353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23354, (Optr)&t_send1, (Optr)PSend23395, (Optr)&t_method_return);
    Method PMethod23350 = new_Method_with(PArray23351, PArray23352, empty_Array, PThreadedCode23353, 1, PSend23395);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23350, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23397 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23398 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23402 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23403 = new_String(L"HTTP/1.1");
    Constant string_23403_Const = new_Constant((Optr)string_23403);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23401 = new_Send((Optr)PSend23402, SMB_protocol_code_, 2, (Optr)string_23403_Const, (Optr)int_405_Const);
    Assign PAssign23400 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23401);
    String string_23404 = new_String(L"Content-Type");
    String string_23405 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23404_Const = new_Constant((Optr)string_23404);
    Constant string_23405_Const = new_Constant((Optr)string_23405);
    // headerAt:put:. 
    Send PSend23406 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23404_Const, (Optr)string_23405_Const);
    String string_23407 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23409 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23412 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23414 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23414, (Optr)&t_method_return);
    Block PBlock23411 = new_Block_with(PArray23412, empty_Array, PThreadedCode23413, 1, PSend23414);
    Character char_23417 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23417_Const = new_Constant((Optr)char_23417);
    // nextPut:. 
    Send PSend23418 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23417_Const);
    Array PThreadedCode23416 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23417, (Optr)&t_send1, (Optr)PSend23418, (Optr)&t_block_return);
    Block PBlock23415 = new_Block_with(empty_Array, empty_Array, PThreadedCode23416, 1, PSend23418);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23419 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23411, (Optr)PBlock23415);
    Array PThreadedCode23410 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23411, (Optr)&t_push_closure, (Optr)PBlock23415, (Optr)&t_send2, (Optr)PSend23419, (Optr)&t_method_return);
    Block PBlock23408 = new_Block_with(PArray23409, empty_Array, PThreadedCode23410, 1, PSend23419);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23420 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23408);
    Constant string_23407_Const = new_Constant((Optr)string_23407);
    // headerAt:put:. 
    Send PSend23421 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23407_Const, (Optr)PSend23420);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23422 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23399 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23400, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23402, (Optr)&t_push1, (Optr)string_23403, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23401, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23404, (Optr)&t_push1, (Optr)string_23405, (Optr)&t_send2, (Optr)PSend23406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23407, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23408, (Optr)&t_send1, (Optr)PSend23420, (Optr)&t_send2, (Optr)PSend23421, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23422, (Optr)&t_method_return);
    Method PMethod23396 = new_Method_with(PArray23397, PArray23398, empty_Array, PThreadedCode23399, 4, PAssign23400, PSend23406, PSend23421, PSend23422);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23396, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23424 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23427 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23428 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23426 = new_Block_with(PArray23427, empty_Array, PThreadedCode23428, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23429 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23426);
    Array PThreadedCode23425 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23426, (Optr)&t_send2, (Optr)PSend23429, (Optr)&t_method_return);
    Method PMethod23423 = new_Method_with(PArray23424, empty_Array, empty_Array, PThreadedCode23425, 1, PSend23429);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23423, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23431 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23432 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23436 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23437 = new_String(L"HTTP/1.1");
    Constant string_23437_Const = new_Constant((Optr)string_23437);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23435 = new_Send((Optr)PSend23436, SMB_protocol_code_, 2, (Optr)string_23437_Const, (Optr)int_200_Const);
    Assign PAssign23434 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23435);
    String string_23438 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23438_Const = new_Constant((Optr)string_23438);
    // headerAt:put:. 
    Send PSend23439 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23438_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23440 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23441 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23433 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23434, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23436, (Optr)&t_push1, (Optr)string_23437, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23435, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23438, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23439, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23440, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23441, (Optr)&t_method_return);
    Method PMethod23430 = new_Method_with(PArray23431, PArray23432, empty_Array, PThreadedCode23433, 4, PAssign23434, PSend23439, PSend23440, PSend23441);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23430, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23443 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23445 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23445_Const = new_Constant((Optr)string_23445);
    // send200Response:contentType:. 
    Send PSend23446 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23445_Const);
    Array PThreadedCode23444 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23445, (Optr)&t_send2, (Optr)PSend23446, (Optr)&t_method_return);
    Method PMethod23442 = new_Method_with(PArray23443, empty_Array, empty_Array, PThreadedCode23444, 1, PSend23446);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23442, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper23449 = new_Super(SMB_initialize, 0);
    String string_23451 = new_String(L"GET");
    Constant string_23451_Const = new_Constant((Optr)string_23451);
    Assign PAssign23450 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23451_Const);
    String string_23453 = new_String(L"HTTP/1.1");
    Constant string_23453_Const = new_Constant((Optr)string_23453);
    Assign PAssign23452 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23453_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23455 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23454 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23455);
    Array PThreadedCode23448 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23449, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23450, (Optr)&t_push1, (Optr)string_23451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23452, (Optr)&t_push1, (Optr)string_23453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23454, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23455, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23447 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23448, 5, PSuper23449, PAssign23450, PAssign23452, PAssign23454, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23447, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23458 = new_Send((Optr)self, SMB_method, 0);
    String string_23459 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23459_Const = new_Constant((Optr)string_23459);
    // =. 
    Send PSend23460 = new_Send((Optr)PSend23458, SMB__equals_, 1, (Optr)string_23459_Const);
    Array PThreadedCode23457 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23458, (Optr)&t_push1, (Optr)string_23459, (Optr)&t_send1, (Optr)PSend23460, (Optr)&t_method_return);
    Method PMethod23456 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23457, 1, PSend23460);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod23456, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23462 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23464 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23463 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23464, (Optr)&t_method_return);
    Method PMethod23461 = new_Method_with(PArray23462, empty_Array, empty_Array, PThreadedCode23463, 1, PSend23464);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod23461, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23466 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23470 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23470_Const = new_Constant((Optr)string_23470);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23471 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23471_Const = new_Constant((Optr)string_23471);
    // ,. 
    Send PSend23469 = new_Send((Optr)string_23470_Const, SMB__append_, 1, (Optr)string_23471_Const);
    Assign PAssign23468 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23469);
    SmallInt int_400 = new_SmallInt(400);
    String string_23472 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23472_Const = new_Constant((Optr)string_23472);
    // sendResponseCode:content:type:close:. 
    Send PSend23473 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23472_Const, (Optr)true_Const);
    Array PThreadedCode23467 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23468, (Optr)&t_push1, (Optr)string_23470, (Optr)&t_push1, (Optr)string_23471, (Optr)&t_send1, (Optr)PSend23469, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23472, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23473, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23465 = new_Method_with(empty_Array, PArray23466, empty_Array, PThreadedCode23467, 3, PAssign23468, PSend23473, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23465, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23477 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23479 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23480 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23478 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23479, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23480, (Optr)&t_method_return);
    Block PBlock23476 = new_Block_with(PArray23477, empty_Array, PThreadedCode23478, 2, PSend23479, PSend23480);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23481 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23482 = new_Send((Optr)PBlock23476, SMB_value_, 1, (Optr)PSend23481);
    Array PThreadedCode23475 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23476, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23481, (Optr)&t_send1, (Optr)PSend23482, (Optr)&t_method_return);
    Method PMethod23474 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23475, 1, PSend23482);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23474, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23485 = new_Send((Optr)self, SMB_method, 0);
    String string_23486 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23486_Const = new_Constant((Optr)string_23486);
    // =. 
    Send PSend23487 = new_Send((Optr)PSend23485, SMB__equals_, 1, (Optr)string_23486_Const);
    Array PThreadedCode23484 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23485, (Optr)&t_push1, (Optr)string_23486, (Optr)&t_send1, (Optr)PSend23487, (Optr)&t_method_return);
    Method PMethod23483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23484, 1, PSend23487);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23483, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray23489 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23492 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23494 = new_String(L"Content-Type");
    String string_23495 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23494_Const = new_Constant((Optr)string_23494);
    Constant string_23495_Const = new_Constant((Optr)string_23495);
    // headerAt:put:. 
    Send PSend23496 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23494_Const, (Optr)string_23495_Const);
    Array PThreadedCode23493 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23494, (Optr)&t_push1, (Optr)string_23495, (Optr)&t_send2, (Optr)PSend23496, (Optr)&t_method_return);
    Block PBlock23491 = new_Block_with(PArray23492, empty_Array, PThreadedCode23493, 1, PSend23496);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend23497 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock23491);
    Array PThreadedCode23490 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock23491, (Optr)&t_send2, (Optr)PSend23497, (Optr)&t_method_return);
    Method PMethod23488 = new_Method_with(PArray23489, empty_Array, empty_Array, PThreadedCode23490, 1, PSend23497);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod23488, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23499 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23502 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23501 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23502);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend23503 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray23505 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23507 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23506 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23507, (Optr)&t_method_return);
    Block PBlock23504 = new_Block_with(PArray23505, empty_Array, PThreadedCode23506, 1, PSend23507);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend23508 = new_Send((Optr)PSend23503, SMB_associationsDo_, 1, (Optr)PBlock23504);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend23509 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray23511 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23513 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23512 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23513, (Optr)&t_method_return);
    Block PBlock23510 = new_Block_with(PArray23511, empty_Array, PThreadedCode23512, 1, PSend23513);
    // associationsDo:. 
    Send PSend23514 = new_Send((Optr)PSend23509, SMB_associationsDo_, 1, (Optr)PBlock23510);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend23515 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray23517 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23519 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23518 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23519, (Optr)&t_method_return);
    Block PBlock23516 = new_Block_with(PArray23517, empty_Array, PThreadedCode23518, 1, PSend23519);
    // associationsDo:. 
    Send PSend23520 = new_Send((Optr)PSend23515, SMB_associationsDo_, 1, (Optr)PBlock23516);
    Array PThreadedCode23500 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23501, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23502, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23503, (Optr)&t_push_closure, (Optr)PBlock23504, (Optr)&t_send1, (Optr)PSend23508, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23509, (Optr)&t_push_closure, (Optr)PBlock23510, (Optr)&t_send1, (Optr)PSend23514, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23515, (Optr)&t_push_closure, (Optr)PBlock23516, (Optr)&t_send1, (Optr)PSend23520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23498 = new_Method_with(empty_Array, PArray23499, empty_Array, PThreadedCode23500, 5, PAssign23501, PSend23508, PSend23514, PSend23520, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod23498, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_23523 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23524 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_23523_Const = new_Constant((Optr)string_23523);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23525 = new_Send((Optr)string_23523_Const, SMB__append_, 1, (Optr)PSend23524);
    String string_23526 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_23526_Const = new_Constant((Optr)string_23526);
    // ,. 
    Send PSend23527 = new_Send((Optr)PSend23525, SMB__append_, 1, (Optr)string_23526_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend23528 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend23527);
    Array PThreadedCode23522 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23523, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23524, (Optr)&t_send1, (Optr)PSend23525, (Optr)&t_push1, (Optr)string_23526, (Optr)&t_send1, (Optr)PSend23527, (Optr)&t_send1, (Optr)PSend23528, (Optr)&t_method_return);
    Method PMethod23521 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23522, 1, PSend23528);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod23521, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23531 = new_Send((Optr)self, SMB_method, 0);
    String string_23532 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23532_Const = new_Constant((Optr)string_23532);
    // =. 
    Send PSend23533 = new_Send((Optr)PSend23531, SMB__equals_, 1, (Optr)string_23532_Const);
    Array PThreadedCode23530 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23531, (Optr)&t_push1, (Optr)string_23532, (Optr)&t_send1, (Optr)PSend23533, (Optr)&t_method_return);
    Method PMethod23529 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23530, 1, PSend23533);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod23529, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23535 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend23537 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23536 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23537, (Optr)&t_method_return);
    Method PMethod23534 = new_Method_with(PArray23535, empty_Array, empty_Array, PThreadedCode23536, 1, PSend23537);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod23534, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray23539 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23542 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23543 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23541 = new_Block_with(PArray23542, empty_Array, PThreadedCode23543, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend23544 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock23541);
    Array PThreadedCode23540 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock23541, (Optr)&t_send3, (Optr)PSend23544, (Optr)&t_method_return);
    Method PMethod23538 = new_Method_with(PArray23539, empty_Array, empty_Array, PThreadedCode23540, 1, PSend23544);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod23538, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23546 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23549 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23548 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23549);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray23551 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_23553 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray23555 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23557 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode23556 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend23557, (Optr)&t_method_return);
    Block PBlock23554 = new_Block_with(PArray23555, empty_Array, PThreadedCode23556, 1, PSend23557);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_23553_Const = new_Constant((Optr)string_23553);
    // at:ifPresent:. 
    Send PSend23558 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_23553_Const, (Optr)PBlock23554);
    Array PThreadedCode23552 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_23553, (Optr)&t_push_closure, (Optr)PBlock23554, (Optr)&t_send2, (Optr)PSend23558, (Optr)&t_method_return);
    Block PBlock23550 = new_Block_with(PArray23551, empty_Array, PThreadedCode23552, 1, PSend23558);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend23559 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock23550);
    Array PThreadedCode23547 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign23548, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23550, (Optr)&t_send1, (Optr)PSend23559, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23545 = new_Method_with(empty_Array, PArray23546, empty_Array, PThreadedCode23547, 3, PAssign23548, PSend23559, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod23545, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray23561 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23562 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23566 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23567 = new_String(L"HTTP/1.1");
    Constant string_23567_Const = new_Constant((Optr)string_23567);
    // protocol:code:. 
    Send PSend23565 = new_Send((Optr)PSend23566, SMB_protocol_code_, 2, (Optr)string_23567_Const, (Optr)VAR_code_0_0);
    Assign PAssign23564 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23565);
    String string_23568 = new_String(L"Transfer-Encoding");
    String string_23569 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23568_Const = new_Constant((Optr)string_23568);
    Constant string_23569_Const = new_Constant((Optr)string_23569);
    // headerAt:put:. 
    Send PSend23570 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23568_Const, (Optr)string_23569_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23571 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray23573 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend23575 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend23576 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23578 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23580 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23580_Const = new_Constant((Optr)string_23580);
    // nextPutAll:. 
    Send PSend23581 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_23580_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23582 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend23583 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23584 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode23579 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_23580, (Optr)&t_send1, (Optr)PSend23581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23582, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23583, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23584, (Optr)&t_method_return);
    Block PBlock23577 = new_Block_with(PArray23578, empty_Array, PThreadedCode23579, 4, PSend23581, PSend23582, PSend23583, PSend23584);
    // value:. 
    Send PSend23585 = new_Send((Optr)PBlock23577, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode23574 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23575, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23576, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23577, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23585, (Optr)&t_method_return);
    Block PBlock23572 = new_Block_with(PArray23573, empty_Array, PThreadedCode23574, 3, PSend23575, PSend23576, PSend23585);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23586 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock23572);
    Array PThreadedCode23563 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23564, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23566, (Optr)&t_push1, (Optr)string_23567, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23565, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23568, (Optr)&t_push1, (Optr)string_23569, (Optr)&t_send2, (Optr)PSend23570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23571, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock23572, (Optr)&t_send2, (Optr)PSend23586, (Optr)&t_method_return);
    Method PMethod23560 = new_Method_with(PArray23561, PArray23562, empty_Array, PThreadedCode23563, 4, PAssign23564, PSend23570, PSend23571, PSend23586);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod23560, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray23588 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_23592 = new_String(L"Connection");
    String string_23593 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23592_Const = new_Constant((Optr)string_23592);
    Constant string_23593_Const = new_Constant((Optr)string_23593);
    // headerAt:put:. 
    Send PSend23594 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23592_Const, (Optr)string_23593_Const);
    Array PThreadedCode23591 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23592, (Optr)&t_push1, (Optr)string_23593, (Optr)&t_send2, (Optr)PSend23594, (Optr)&t_block_return);
    Block PBlock23590 = new_Block_with(empty_Array, empty_Array, PThreadedCode23591, 1, PSend23594);
    String string_23597 = new_String(L"Content-Length");
    Constant string_23597_Const = new_Constant((Optr)string_23597);
    // headerAt:put:. 
    Send PSend23598 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23597_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode23596 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23597, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend23598, (Optr)&t_block_return);
    Block PBlock23595 = new_Block_with(empty_Array, empty_Array, PThreadedCode23596, 1, PSend23598);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23599 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23590, (Optr)PBlock23595);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray23601 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23603 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode23602 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23603, (Optr)&t_method_return);
    Block PBlock23600 = new_Block_with(PArray23601, empty_Array, PThreadedCode23602, 1, PSend23603);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23604 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23600);
    Array PThreadedCode23589 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock23590, (Optr)&t_push_closure, (Optr)PBlock23595, (Optr)&t_send2, (Optr)PSend23599, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23600, (Optr)&t_send2, (Optr)PSend23604, (Optr)&t_method_return);
    Method PMethod23587 = new_Method_with(PArray23588, empty_Array, empty_Array, PThreadedCode23589, 2, PSend23599, PSend23604);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod23587, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray23606 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign23608 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode23607 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23608, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23605 = new_Method_with(PArray23606, empty_Array, empty_Array, PThreadedCode23607, 2, PAssign23608, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod23605, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23610 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23611 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23615 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23616 = new_String(L"HTTP/1.1");
    Constant string_23616_Const = new_Constant((Optr)string_23616);
    // protocol:code:. 
    Send PSend23614 = new_Send((Optr)PSend23615, SMB_protocol_code_, 2, (Optr)string_23616_Const, (Optr)VAR_code_0_0);
    Assign PAssign23613 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23614);
    String string_23619 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23619_Const = new_Constant((Optr)string_23619);
    // headerAt:put:. 
    Send PSend23620 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23619_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode23618 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23619, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23620, (Optr)&t_block_return);
    Block PBlock23617 = new_Block_with(empty_Array, empty_Array, PThreadedCode23618, 1, PSend23620);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23621 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23617);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23622 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23623 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode23612 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23613, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23615, (Optr)&t_push1, (Optr)string_23616, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23614, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23617, (Optr)&t_send1, (Optr)PSend23621, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23622, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend23623, (Optr)&t_method_return);
    Method PMethod23609 = new_Method_with(PArray23610, PArray23611, empty_Array, PThreadedCode23612, 4, PAssign23613, PSend23621, PSend23622, PSend23623);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod23609, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23625 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend23627 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23626 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23627, (Optr)&t_method_return);
    Method PMethod23624 = new_Method_with(PArray23625, empty_Array, empty_Array, PThreadedCode23626, 1, PSend23627);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod23624, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23629 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray23630 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23634 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23633 = new_Send((Optr)PSend23634, SMB_not, 0);
    Assign PAssign23632 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend23633);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_23638 = new_String(L"Connection");
    String string_23639 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23638_Const = new_Constant((Optr)string_23638);
    Constant string_23639_Const = new_Constant((Optr)string_23639);
    // headerAt:put:. 
    Send PSend23640 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23638_Const, (Optr)string_23639_Const);
    Array PThreadedCode23637 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23638, (Optr)&t_push1, (Optr)string_23639, (Optr)&t_send2, (Optr)PSend23640, (Optr)&t_block_return);
    Block PBlock23636 = new_Block_with(empty_Array, empty_Array, PThreadedCode23637, 1, PSend23640);
    // ifTrue:. 
    Send PSend23635 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23636);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23641 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23642 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23646 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23645 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23646, (Optr)&t_block_return);
    Block PBlock23644 = new_Block_with(empty_Array, empty_Array, PThreadedCode23645, 1, PSend23646);
    // ifTrue:. 
    Send PSend23643 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23644);
    Array PThreadedCode23631 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign23632, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23634, (Optr)&t_send0, (Optr)PSend23633, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23635, (Optr)PBlock23636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23641, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23643, (Optr)PBlock23644, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23628 = new_Method_with(PArray23629, PArray23630, empty_Array, PThreadedCode23631, 6, PAssign23632, PSend23635, PSend23641, PSend23642, PSend23643, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod23628, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23648 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23650 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23650_Const = new_Constant((Optr)string_23650);
    // send200Response:contentType:. 
    Send PSend23651 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_23650_Const);
    Array PThreadedCode23649 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_23650, (Optr)&t_send2, (Optr)PSend23651, (Optr)&t_method_return);
    Method PMethod23647 = new_Method_with(PArray23648, empty_Array, empty_Array, PThreadedCode23649, 1, PSend23651);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod23647, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23654 = new_Send((Optr)self, SMB_method, 0);
    String string_23655 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23655_Const = new_Constant((Optr)string_23655);
    // =. 
    Send PSend23656 = new_Send((Optr)PSend23654, SMB__equals_, 1, (Optr)string_23655_Const);
    Array PThreadedCode23653 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23654, (Optr)&t_push1, (Optr)string_23655, (Optr)&t_send1, (Optr)PSend23656, (Optr)&t_method_return);
    Method PMethod23652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23653, 1, PSend23656);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod23652, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray23658 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23661 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23662 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23660 = new_Block_with(PArray23661, empty_Array, PThreadedCode23662, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend23663 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock23660);
    Array PThreadedCode23659 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock23660, (Optr)&t_send3, (Optr)PSend23663, (Optr)&t_method_return);
    Method PMethod23657 = new_Method_with(PArray23658, empty_Array, empty_Array, PThreadedCode23659, 1, PSend23663);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod23657, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray23665 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_23667 = new_String(L"Date");
    Array PThreadedCode23669 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23668 = new_Block_with(empty_Array, empty_Array, PThreadedCode23669, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23670 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23668);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend23671 = new_Send((Optr)PSend23670, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23667_Const = new_Constant((Optr)string_23667);
    // headerAt:put:. 
    Send PSend23672 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23667_Const, (Optr)PSend23671);
    String string_23673 = new_String(L"Server");
    Array PThreadedCode23675 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23674 = new_Block_with(empty_Array, empty_Array, PThreadedCode23675, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend23676 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23674);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend23677 = new_Send((Optr)PSend23676, SMB_serverString, 0);
    Constant string_23673_Const = new_Constant((Optr)string_23673);
    // headerAt:put:. 
    Send PSend23678 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23673_Const, (Optr)PSend23677);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23683 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23684 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend23685 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23689 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode23688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23689, (Optr)&t_block_return);
    Block PBlock23687 = new_Block_with(empty_Array, empty_Array, PThreadedCode23688, 1, PSend23689);
    // ifFalse:. 
    Send PSend23686 = new_Send((Optr)PSend23685, SMB_ifFalse_, 1, (Optr)PBlock23687);
    Array PThreadedCode23682 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23683, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23684, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23685, (Optr)&t_send_ifFalse_, (Optr)PSend23686, (Optr)PBlock23687, (Optr)&t_block_return);
    Block PBlock23681 = new_Block_with(empty_Array, empty_Array, PThreadedCode23682, 3, PSend23683, PSend23684, PSend23686);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray23691 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode23692 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23690 = new_Block_with(PArray23691, empty_Array, PThreadedCode23692, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23693 = new_Send((Optr)PBlock23681, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock23690);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend23696 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode23695 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend23696, (Optr)&t_block_return);
    Block PBlock23694 = new_Block_with(empty_Array, empty_Array, PThreadedCode23695, 1, PSend23696);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23697 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock23694);
    Array PThreadedCode23680 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock23681, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock23690, (Optr)&t_send2, (Optr)PSend23693, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23694, (Optr)&t_send1, (Optr)PSend23697, (Optr)&t_block_return);
    Block PBlock23679 = new_Block_with(empty_Array, empty_Array, PThreadedCode23680, 2, PSend23693, PSend23697);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend23698 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23679);
    Array PThreadedCode23666 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23667, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23668, (Optr)&t_send1, (Optr)PSend23670, (Optr)&t_send0, (Optr)PSend23671, (Optr)&t_send2, (Optr)PSend23672, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23673, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23674, (Optr)&t_send1, (Optr)PSend23676, (Optr)&t_send0, (Optr)PSend23677, (Optr)&t_send2, (Optr)PSend23678, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23679, (Optr)&t_send2, (Optr)PSend23698, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23664 = new_Method_with(PArray23665, empty_Array, empty_Array, PThreadedCode23666, 4, PSend23672, PSend23678, PSend23698, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod23664, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode23700 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod23699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23700, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod23699, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray23702 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_23704 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_23704_Const = new_Constant((Optr)string_23704);
    // stream200Response:size:type:. 
    Send PSend23705 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_23704_Const);
    Array PThreadedCode23703 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_23704, (Optr)&t_send3, (Optr)PSend23705, (Optr)&t_method_return);
    Method PMethod23701 = new_Method_with(PArray23702, empty_Array, empty_Array, PThreadedCode23703, 1, PSend23705);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod23701, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23707 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23710 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23711 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23709 = new_Block_with(PArray23710, empty_Array, PThreadedCode23711, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend23712 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23709);
    Array PThreadedCode23708 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23709, (Optr)&t_send2, (Optr)PSend23712, (Optr)&t_method_return);
    Method PMethod23706 = new_Method_with(PArray23707, empty_Array, empty_Array, PThreadedCode23708, 1, PSend23712);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod23706, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23714 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray23715 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign23717 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_23718 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23718_Const = new_Constant((Optr)string_23718);
    // findString:. 
    Send PSend23719 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_23718_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend23720 = new_Send((Optr)PSend23719, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23724 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23724_Const = new_Constant((Optr)string_23724);
    // headerAt:. 
    Send PSend23725 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23724_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray23727 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_23732 = new_String(L"http://");
    Constant string_23732_Const = new_Constant((Optr)string_23732);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23731 = new_Send((Optr)string_23732_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend23730 = new_Send((Optr)PSend23731, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign23729 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend23730);
    Array PThreadedCode23728 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign23729, (Optr)&t_push1, (Optr)string_23732, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend23731, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend23730, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23726 = new_Block_with(PArray23727, empty_Array, PThreadedCode23728, 1, PAssign23729);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23733 = new_Send((Optr)PSend23725, SMB_ifNotEmpty_, 1, (Optr)PBlock23726);
    Array PThreadedCode23723 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23724, (Optr)&t_send1, (Optr)PSend23725, (Optr)&t_push_closure, (Optr)PBlock23726, (Optr)&t_send1, (Optr)PSend23733, (Optr)&t_block_return);
    Block PBlock23722 = new_Block_with(empty_Array, empty_Array, PThreadedCode23723, 1, PSend23733);
    // ifFalse:. 
    Send PSend23721 = new_Send((Optr)PSend23720, SMB_ifFalse_, 1, (Optr)PBlock23722);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23736 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23737 = new_String(L"HTTP/1.1");
    Constant string_23737_Const = new_Constant((Optr)string_23737);
    // protocol:code:. 
    Send PSend23735 = new_Send((Optr)PSend23736, SMB_protocol_code_, 2, (Optr)string_23737_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign23734 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23735);
    String string_23738 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23738_Const = new_Constant((Optr)string_23738);
    // headerAt:put:. 
    Send PSend23739 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23738_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23740 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_23741 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_23741_Const = new_Constant((Optr)string_23741);
    // sendResponse:content:. 
    Send PSend23742 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_23741_Const);
    Array PThreadedCode23716 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23717, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_23718, (Optr)&t_send1, (Optr)PSend23719, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23720, (Optr)&t_send_ifFalse_, (Optr)PSend23721, (Optr)PBlock23722, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23734, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23736, (Optr)&t_push1, (Optr)string_23737, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend23735, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23738, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend23739, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23740, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23741, (Optr)&t_send2, (Optr)PSend23742, (Optr)&t_method_return);
    Method PMethod23713 = new_Method_with(PArray23714, PArray23715, empty_Array, PThreadedCode23716, 6, PAssign23717, PSend23721, PAssign23734, PSend23739, PSend23740, PSend23742);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod23713, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23745 = new_Send((Optr)self, SMB_method, 0);
    String string_23746 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23746_Const = new_Constant((Optr)string_23746);
    // =. 
    Send PSend23747 = new_Send((Optr)PSend23745, SMB__equals_, 1, (Optr)string_23746_Const);
    Array PThreadedCode23744 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23745, (Optr)&t_push1, (Optr)string_23746, (Optr)&t_send1, (Optr)PSend23747, (Optr)&t_method_return);
    Method PMethod23743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23744, 1, PSend23747);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod23743, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23749 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23752 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23754 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23755 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23756 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend23757 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23758 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23759 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode23753 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend23754, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend23756, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend23758, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23759, (Optr)&t_method_return);
    Block PBlock23751 = new_Block_with(PArray23752, empty_Array, PThreadedCode23753, 6, PSend23754, PSend23755, PSend23756, PSend23757, PSend23758, PSend23759);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23760 = new_Send((Optr)PBlock23751, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23750 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23751, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23760, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23748 = new_Method_with(PArray23749, empty_Array, empty_Array, PThreadedCode23750, 2, PSend23760, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod23748, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23762 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23764 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23765 = new_Send((Optr)self, SMB_method, 0);
    Constant string_23764_Const = new_Constant((Optr)string_23764);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23766 = new_Send((Optr)string_23764_Const, SMB__append_, 1, (Optr)PSend23765);
    String string_23767 = new_String(L" is not allowed for the URL");
    Constant string_23767_Const = new_Constant((Optr)string_23767);
    // ,. 
    Send PSend23768 = new_Send((Optr)PSend23766, SMB__append_, 1, (Optr)string_23767_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23769 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23770 = new_Send((Optr)PSend23768, SMB__append_, 1, (Optr)PSend23769);
    String string_23771 = new_String(L"</p></body></html>");
    Constant string_23771_Const = new_Constant((Optr)string_23771);
    // ,. 
    Send PSend23772 = new_Send((Optr)PSend23770, SMB__append_, 1, (Optr)string_23771_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend23773 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend23772);
    Array PThreadedCode23763 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_23764, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23765, (Optr)&t_send1, (Optr)PSend23766, (Optr)&t_push1, (Optr)string_23767, (Optr)&t_send1, (Optr)PSend23768, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23769, (Optr)&t_send1, (Optr)PSend23770, (Optr)&t_push1, (Optr)string_23771, (Optr)&t_send1, (Optr)PSend23772, (Optr)&t_send2, (Optr)PSend23773, (Optr)&t_method_return);
    Method PMethod23761 = new_Method_with(PArray23762, empty_Array, empty_Array, PThreadedCode23763, 1, PSend23773);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod23761, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray23775 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray23776 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_23782 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23782_Const = new_Constant((Optr)string_23782);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23783 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_23783_Const = new_Constant((Optr)string_23783);
    // ,. 
    Send PSend23781 = new_Send((Optr)string_23782_Const, SMB__append_, 1, (Optr)string_23783_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23785 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23786 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23784 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23785, (Optr)PSend23786);
    // ,. 
    Send PSend23780 = new_Send((Optr)PSend23781, SMB__append_, 1, (Optr)PSend23784);
    String string_23787 = new_String(L"</pre></body></html>");
    Constant string_23787_Const = new_Constant((Optr)string_23787);
    // ,. 
    Send PSend23779 = new_Send((Optr)PSend23780, SMB__append_, 1, (Optr)string_23787_Const);
    Assign PAssign23778 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend23779);
    SmallInt int_500 = new_SmallInt(500);
    String string_23788 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23788_Const = new_Constant((Optr)string_23788);
    // sendResponseCode:content:type:close:. 
    Send PSend23789 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_23788_Const, (Optr)true_Const);
    Array PThreadedCode23777 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23778, (Optr)&t_push1, (Optr)string_23782, (Optr)&t_push1, (Optr)string_23783, (Optr)&t_send1, (Optr)PSend23781, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23785, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23786, (Optr)&t_send2, (Optr)PSend23784, (Optr)&t_send1, (Optr)PSend23780, (Optr)&t_push1, (Optr)string_23787, (Optr)&t_send1, (Optr)PSend23779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_23788, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23789, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23774 = new_Method_with(PArray23775, PArray23776, empty_Array, PThreadedCode23777, 3, PAssign23778, PSend23789, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod23774, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23791 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23793 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode23792 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23793, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23790 = new_Method_with(PArray23791, empty_Array, empty_Array, PThreadedCode23792, 2, PAssign23793, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod23790, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23798 = new_Send((Optr)self, SMB_method, 0);
    String string_23799 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23799_Const = new_Constant((Optr)string_23799);
    // ,. 
    Send PSend23800 = new_Send((Optr)PSend23798, SMB__append_, 1, (Optr)string_23799_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23801 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23802 = new_Send((Optr)PSend23800, SMB__append_, 1, (Optr)PSend23801);
    String string_23803 = new_String(L" ");
    Constant string_23803_Const = new_Constant((Optr)string_23803);
    // ,. 
    Send PSend23804 = new_Send((Optr)PSend23802, SMB__append_, 1, (Optr)string_23803_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23805 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend23806 = new_Send((Optr)PSend23804, SMB__append_, 1, (Optr)PSend23805);
    Array PThreadedCode23797 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23798, (Optr)&t_push1, (Optr)string_23799, (Optr)&t_send1, (Optr)PSend23800, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23801, (Optr)&t_send1, (Optr)PSend23802, (Optr)&t_push1, (Optr)string_23803, (Optr)&t_send1, (Optr)PSend23804, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23805, (Optr)&t_send1, (Optr)PSend23806, (Optr)&t_block_return);
    Block PBlock23796 = new_Block_with(empty_Array, empty_Array, PThreadedCode23797, 1, PSend23806);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23807 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock23796);
    Array PThreadedCode23795 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock23796, (Optr)&t_send1, (Optr)PSend23807, (Optr)&t_method_return);
    Method PMethod23794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23795, 1, PSend23807);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod23794, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray23809 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23812 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23813 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23811 = new_Block_with(PArray23812, empty_Array, PThreadedCode23813, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend23814 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock23811);
    Array PThreadedCode23810 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock23811, (Optr)&t_send3, (Optr)PSend23814, (Optr)&t_method_return);
    Method PMethod23808 = new_Method_with(PArray23809, empty_Array, empty_Array, PThreadedCode23810, 1, PSend23814);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod23808, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23816 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23818 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23821 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23822 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23822_Const = new_Constant((Optr)string_23822);
    // beginsWith:. 
    Send PSend23823 = new_Send((Optr)PSend23821, SMB_beginsWith_, 1, (Optr)string_23822_Const);
    Array PThreadedCode23820 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23821, (Optr)&t_push1, (Optr)string_23822, (Optr)&t_send1, (Optr)PSend23823, (Optr)&t_block_return);
    Block PBlock23819 = new_Block_with(empty_Array, empty_Array, PThreadedCode23820, 1, PSend23823);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23824 = new_Send((Optr)PSend23818, SMB_and_, 1, (Optr)PBlock23819);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23828 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23829 = new_Send((Optr)PSend23828, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend23830 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend23831 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend23829, (Optr)PSend23830, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23827 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23828, (Optr)&t_send0, (Optr)PSend23829, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23830, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend23831, (Optr)&t_block_return);
    Block PBlock23826 = new_Block_with(empty_Array, empty_Array, PThreadedCode23827, 1, PSend23831);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23834 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23833 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23834, (Optr)&t_block_return);
    Block PBlock23832 = new_Block_with(empty_Array, empty_Array, PThreadedCode23833, 1, PSend23834);
    // ifTrue:ifFalse:. 
    Send PSend23825 = new_Send((Optr)PSend23824, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23826, (Optr)PBlock23832);
    Array PThreadedCode23817 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23818, (Optr)&t_push_closure, (Optr)PBlock23819, (Optr)&t_send1, (Optr)PSend23824, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23825, (Optr)PBlock23826, (Optr)PBlock23832, (Optr)&t_method_return);
    Method PMethod23815 = new_Method_with(PArray23816, empty_Array, empty_Array, PThreadedCode23817, 1, PSend23825);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod23815, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23837 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23840 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23841 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23841_Const = new_Constant((Optr)string_23841);
    // =. 
    Send PSend23842 = new_Send((Optr)PSend23840, SMB__equals_, 1, (Optr)string_23841_Const);
    Array PThreadedCode23839 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23840, (Optr)&t_push1, (Optr)string_23841, (Optr)&t_send1, (Optr)PSend23842, (Optr)&t_block_return);
    Block PBlock23838 = new_Block_with(empty_Array, empty_Array, PThreadedCode23839, 1, PSend23842);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23843 = new_Send((Optr)PSend23837, SMB_and_, 1, (Optr)PBlock23838);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23847 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23848 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend23847, (Optr)true_Const);
    Array PThreadedCode23846 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23847, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend23848, (Optr)&t_block_return);
    Block PBlock23845 = new_Block_with(empty_Array, empty_Array, PThreadedCode23846, 1, PSend23848);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23851 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23850 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23851, (Optr)&t_block_return);
    Block PBlock23849 = new_Block_with(empty_Array, empty_Array, PThreadedCode23850, 1, PSend23851);
    // ifTrue:ifFalse:. 
    Send PSend23844 = new_Send((Optr)PSend23843, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23845, (Optr)PBlock23849);
    Array PThreadedCode23836 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23837, (Optr)&t_push_closure, (Optr)PBlock23838, (Optr)&t_send1, (Optr)PSend23843, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23844, (Optr)PBlock23845, (Optr)PBlock23849, (Optr)&t_method_return);
    Method PMethod23835 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23836, 1, PSend23844);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod23835, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23853 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23855 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend23856 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend23855);
    Array PThreadedCode23854 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23855, (Optr)&t_send2, (Optr)PSend23856, (Optr)&t_method_return);
    Method PMethod23852 = new_Method_with(PArray23853, empty_Array, empty_Array, PThreadedCode23854, 1, PSend23856);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod23852, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23858 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23860 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode23859 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23860, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23857 = new_Method_with(PArray23858, empty_Array, empty_Array, PThreadedCode23859, 2, PAssign23860, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod23857, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray23862 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23864 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23865 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23866 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend23864, (Optr)PSend23865);
    Array PThreadedCode23863 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend23864, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend23865, (Optr)&t_send3, (Optr)PSend23866, (Optr)&t_method_return);
    Method PMethod23861 = new_Method_with(PArray23862, empty_Array, empty_Array, PThreadedCode23863, 1, PSend23866);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod23861, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23868 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend23870 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper23871 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23869 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23870, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper23871, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23867 = new_Method_with(PArray23868, empty_Array, empty_Array, PThreadedCode23869, 3, PSend23870, PSuper23871, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23867, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23873 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23874 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23878 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23879 = new_String(L"HTTP/1.1");
    Constant string_23879_Const = new_Constant((Optr)string_23879);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23877 = new_Send((Optr)PSend23878, SMB_protocol_code_, 2, (Optr)string_23879_Const, (Optr)int_200_Const);
    Assign PAssign23876 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23877);
    String string_23880 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23880_Const = new_Constant((Optr)string_23880);
    // headerAt:put:. 
    Send PSend23881 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23880_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23882 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23883 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode23875 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23876, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23878, (Optr)&t_push1, (Optr)string_23879, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23877, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23880, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend23881, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23882, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23883, (Optr)&t_method_return);
    Method PMethod23872 = new_Method_with(PArray23873, PArray23874, empty_Array, PThreadedCode23875, 4, PAssign23876, PSend23881, PSend23882, PSend23883);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod23872, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode23885 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod23884 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23885, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod23884, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2656 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // copyUpTo:. 
    Send PSend23888 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2656_Const);
    Character char_23338 = new_Character(L'?');
    Constant char_23338_Const = new_Constant((Optr)char_23338);
    // copyUpTo:. 
    Send PSend23889 = new_Send((Optr)PSend23888, SMB_copyUpTo_, 1, (Optr)char_23338_Const);
    Array PThreadedCode23887 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend23888, (Optr)&t_push1, (Optr)char_23338, (Optr)&t_send1, (Optr)PSend23889, (Optr)&t_method_return);
    Method PMethod23886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23887, 1, PSend23889);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod23886, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23891 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23892 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23896 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23897 = new_String(L"HTTP/1.1");
    Constant string_23897_Const = new_Constant((Optr)string_23897);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend23895 = new_Send((Optr)PSend23896, SMB_protocol_code_, 2, (Optr)string_23897_Const, (Optr)int_404_Const);
    Assign PAssign23894 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23895);
    String string_23898 = new_String(L"Content-Type");
    String string_23899 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23898_Const = new_Constant((Optr)string_23898);
    Constant string_23899_Const = new_Constant((Optr)string_23899);
    // headerAt:put:. 
    Send PSend23900 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23898_Const, (Optr)string_23899_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23901 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23902 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode23893 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23894, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23896, (Optr)&t_push1, (Optr)string_23897, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend23895, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23898, (Optr)&t_push1, (Optr)string_23899, (Optr)&t_send2, (Optr)PSend23900, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend23901, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend23902, (Optr)&t_method_return);
    Method PMethod23890 = new_Method_with(PArray23891, PArray23892, empty_Array, PThreadedCode23893, 4, PAssign23894, PSend23900, PSend23901, PSend23902);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod23890, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray23904 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23907 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23908 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23906 = new_Block_with(PArray23907, empty_Array, PThreadedCode23908, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend23909 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock23906);
    Array PThreadedCode23905 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23906, (Optr)&t_send4, (Optr)PSend23909, (Optr)&t_method_return);
    Method PMethod23903 = new_Method_with(PArray23904, empty_Array, empty_Array, PThreadedCode23905, 1, PSend23909);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod23903, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23912 = new_Send((Optr)self, SMB_method, 0);
    String string_23913 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23913_Const = new_Constant((Optr)string_23913);
    // =. 
    Send PSend23914 = new_Send((Optr)PSend23912, SMB__equals_, 1, (Optr)string_23913_Const);
    Array PThreadedCode23911 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23912, (Optr)&t_push1, (Optr)string_23913, (Optr)&t_send1, (Optr)PSend23914, (Optr)&t_method_return);
    Method PMethod23910 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23911, 1, PSend23914);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod23910, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23916 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23918 = new_String(L"");
    String string_23919 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23921 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23923 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23925 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray23928 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23930 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode23929 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend23930, (Optr)&t_method_return);
    Block PBlock23927 = new_Block_with(PArray23928, empty_Array, PThreadedCode23929, 1, PSend23930);
    Character char_23417 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23417_Const = new_Constant((Optr)char_23417);
    // nextPut:. 
    Send PSend23933 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23417_Const);
    Array PThreadedCode23932 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23417, (Optr)&t_send1, (Optr)PSend23933, (Optr)&t_block_return);
    Block PBlock23931 = new_Block_with(empty_Array, empty_Array, PThreadedCode23932, 1, PSend23933);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23934 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23927, (Optr)PBlock23931);
    Array PThreadedCode23926 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23927, (Optr)&t_push_closure, (Optr)PBlock23931, (Optr)&t_send2, (Optr)PSend23934, (Optr)&t_method_return);
    Block PBlock23924 = new_Block_with(PArray23925, empty_Array, PThreadedCode23926, 1, PSend23934);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23935 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23924);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23923_Const = new_Constant((Optr)string_23923);
    // headerAt:put:. 
    Send PSend23936 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23923_Const, (Optr)PSend23935);
    Array PThreadedCode23922 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23923, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23924, (Optr)&t_send1, (Optr)PSend23935, (Optr)&t_send2, (Optr)PSend23936, (Optr)&t_method_return);
    Block PBlock23920 = new_Block_with(PArray23921, empty_Array, PThreadedCode23922, 1, PSend23936);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_23918_Const = new_Constant((Optr)string_23918);
    Constant string_23919_Const = new_Constant((Optr)string_23919);
    // send200Response:contentType:do:. 
    Send PSend23937 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_23918_Const, (Optr)string_23919_Const, (Optr)PBlock23920);
    Array PThreadedCode23917 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23918, (Optr)&t_push1, (Optr)string_23919, (Optr)&t_push_closure, (Optr)PBlock23920, (Optr)&t_send3, (Optr)PSend23937, (Optr)&t_method_return);
    Method PMethod23915 = new_Method_with(PArray23916, empty_Array, empty_Array, PThreadedCode23917, 1, PSend23937);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod23915, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode23939 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod23938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23939, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod23938, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray23941 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray23944 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_23949 = new_String(L"Connection");
    String string_23950 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23949_Const = new_Constant((Optr)string_23949);
    Constant string_23950_Const = new_Constant((Optr)string_23950);
    // headerAt:put:. 
    Send PSend23951 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_23949_Const, (Optr)string_23950_Const);
    Array PThreadedCode23948 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_23949, (Optr)&t_push1, (Optr)string_23950, (Optr)&t_send2, (Optr)PSend23951, (Optr)&t_block_return);
    Block PBlock23947 = new_Block_with(empty_Array, empty_Array, PThreadedCode23948, 1, PSend23951);
    // ifTrue:. 
    Send PSend23946 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock23947);
    Array PThreadedCode23945 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend23946, (Optr)PBlock23947, (Optr)&t_method_return);
    Block PBlock23943 = new_Block_with(PArray23944, empty_Array, PThreadedCode23945, 1, PSend23946);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend23952 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock23943);
    Array PThreadedCode23942 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23943, (Optr)&t_send4, (Optr)PSend23952, (Optr)&t_method_return);
    Method PMethod23940 = new_Method_with(PArray23941, empty_Array, empty_Array, PThreadedCode23942, 1, PSend23952);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod23940, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23954 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23956 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend23957 = new_Send((Optr)PSend23956, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23955 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23956, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23957, (Optr)&t_method_return);
    Method PMethod23953 = new_Method_with(PArray23954, empty_Array, empty_Array, PThreadedCode23955, 1, PSend23957);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23953, HEADER(WebClient_Core_WebRequest_Class));
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
    init_SMB_getFields();
    init_SMB_isHeadRequest();
    init_SMB_readFrom_();
    init_SMB_send405Response_content_();
    init_SMB_send301Response_();
    init_SMB_stream200Response_size_type_do_();
    init_SMB_sendXmlResponse_();
    init_SMB_initialize();
    init_SMB_isGetRequest();
    init_SMB_newWebSocketOn_();
    init_SMB_send400Response();
    init_SMB_newResponse();
    init_SMB_isOptionsRequest();
    init_SMB_send404Response_();
    init_SMB_fields();
    init_SMB_send404Response();
    init_SMB_isDeleteRequest();
    init_SMB_send301Response_do_();
    init_SMB_send200Response_contentType_();
    init_SMB_multipartFields();
    init_SMB_sendResponse_chunked_do_();
    init_SMB_sendResponse_contentStream_size_();
    init_SMB_server_();
    init_SMB_sendResponseCode_content_type_do_();
    init_SMB_send302Response_do_();
    init_SMB_closeIfTransient_after_();
    init_SMB_send200Response_();
    init_SMB_isPutRequest();
    init_SMB_send3xxResponse_code_();
    init_SMB_sendResponse_contentBlock_();
    init_SMB_server();
    init_SMB_stream200Response_size_();
    init_SMB_send302Response_();
    init_SMB_send3xxResponse_code_do_();
    init_SMB_isPostRequest();
    init_SMB_writeRequestOn_();
    init_SMB_send405Response_();
    init_SMB_send500Response_();
    init_SMB_method_();
    init_SMB_requestLine();
    init_SMB_sendResponse_chunked_();
    init_SMB_multipartFieldsDo_();
    init_SMB_postFields();
    init_SMB_stream200Response_();
    init_SMB_rawUrl_();
    init_SMB_sendResponse_content_();
    init_SMB_writeOn_();
    init_SMB_send200Response_contentType_do_();
    init_SMB_method();
    init_SMB_url();
    init_SMB_send404Response_do_();
    init_SMB_stream200Response_size_type_();
    init_SMB_isTraceRequest();
    init_SMB_sendOptionsResponse_();
    init_SMB_rawUrl();
    init_SMB_sendResponseCode_content_type_close_();
    init_class_SMB_readFrom_();
    
}