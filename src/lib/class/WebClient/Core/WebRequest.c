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
    Array PArray23387 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23390 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23395 = new_Character(L'?');
    Constant char_23395_Const = new_Constant((Optr)char_23395);
    // copyAfter:. 
    Send PSend23394 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23395_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23398 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23399 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23398);
    Array PThreadedCode23397 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23398, (Optr)&t_send1, (Optr)PSend23399, (Optr)&t_block_return);
    Block PBlock23396 = new_Block_with(empty_Array, empty_Array, PThreadedCode23397, 1, PSend23399);
    // ifEmpty:. 
    Send PSend23393 = new_Send((Optr)PSend23394, SMB_ifEmpty_, 1, (Optr)PBlock23396);
    Assign PAssign23392 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23393);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23400 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23391 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23392, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23395, (Optr)&t_send1, (Optr)PSend23394, (Optr)&t_push_closure, (Optr)PBlock23396, (Optr)&t_send1, (Optr)PSend23393, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23400, (Optr)&t_method_return);
    Block PBlock23389 = new_Block_with(PArray23390, empty_Array, PThreadedCode23391, 2, PAssign23392, PSend23400);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23401 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23389);
    Array PThreadedCode23388 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23389, (Optr)&t_send1, (Optr)PSend23401, (Optr)&t_method_return);
    Method PMethod23386 = new_Method_with(empty_Array, PArray23387, empty_Array, PThreadedCode23388, 1, PSend23401);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23386, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23404 = new_Send((Optr)self, SMB_method, 0);
    String string_23405 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23405_Const = new_Constant((Optr)string_23405);
    // =. 
    Send PSend23406 = new_Send((Optr)PSend23404, SMB__equals_, 1, (Optr)string_23405_Const);
    Array PThreadedCode23403 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23404, (Optr)&t_push1, (Optr)string_23405, (Optr)&t_send1, (Optr)PSend23406, (Optr)&t_method_return);
    Method PMethod23402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23403, 1, PSend23406);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23402, WebClient_Core_WebRequest_Class);
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
    Array PArray23408 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23409 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23412 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23414 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23415 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23419 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23418 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23419, (Optr)&t_block_return);
    Block PBlock23417 = new_Block_with(empty_Array, empty_Array, PThreadedCode23418, 1, PSend23419);
    // ifTrue:. 
    Send PSend23416 = new_Send((Optr)PSend23415, SMB_ifTrue_, 1, (Optr)PBlock23417);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23422 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23421 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23422);
    Assign PAssign23420 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23421);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23425 = new_String(L" ");
    Constant string_23425_Const = new_Constant((Optr)string_23425);
    // findTokens:. 
    Send PSend23424 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23425_Const);
    Assign PAssign23423 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23424);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23426 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23427 = new_Send((Optr)PSend23426, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23431 = new_String(L"Invalid HTTP request: ");
    Constant string_23431_Const = new_Constant((Optr)string_23431);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23432 = new_Send((Optr)string_23431_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23433 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23432);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23434 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23433);
    Array PThreadedCode23430 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23431, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23432, (Optr)&t_send1, (Optr)PSend23433, (Optr)&t_send1, (Optr)PSend23434, (Optr)&t_block_return);
    Block PBlock23429 = new_Block_with(empty_Array, empty_Array, PThreadedCode23430, 1, PSend23434);
    // ifTrue:. 
    Send PSend23428 = new_Send((Optr)PSend23427, SMB_ifTrue_, 1, (Optr)PBlock23429);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23436 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23435 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23436);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23438 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23437 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23438);
    // size. 
    Send PSend23439 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23440 = new_Send((Optr)PSend23439, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23445 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23444 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23445);
    Array PThreadedCode23443 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23444, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23445, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23442 = new_Block_with(empty_Array, empty_Array, PThreadedCode23443, 1, PAssign23444);
    String string_23449 = new_String(L"HTTP/1.0");
    Constant string_23449_Const = new_Constant((Optr)string_23449);
    Assign PAssign23448 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23449_Const);
    Array PThreadedCode23447 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23448, (Optr)&t_push1, (Optr)string_23449, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23446 = new_Block_with(empty_Array, empty_Array, PThreadedCode23447, 1, PAssign23448);
    // ifTrue:ifFalse:. 
    Send PSend23441 = new_Send((Optr)PSend23440, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23442, (Optr)PBlock23446);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23451 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23450 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23451);
    Array PThreadedCode23413 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23414, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23415, (Optr)&t_send_ifTrue_, (Optr)PSend23416, (Optr)PBlock23417, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23420, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23422, (Optr)&t_send1, (Optr)PSend23421, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23423, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23425, (Optr)&t_send1, (Optr)PSend23424, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23426, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23427, (Optr)&t_send_ifTrue_, (Optr)PSend23428, (Optr)PBlock23429, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23435, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23437, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23438, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23439, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23440, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23441, (Optr)PBlock23442, (Optr)PBlock23446, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23450, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23411 = new_Block_with(PArray23412, empty_Array, PThreadedCode23413, 10, PAssign23414, PSend23416, PAssign23420, PAssign23423, PSend23428, PAssign23435, PAssign23437, PSend23441, PAssign23450, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23452 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23411);
    Array PThreadedCode23410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23411, (Optr)&t_send1, (Optr)PSend23452, (Optr)&t_method_return);
    Method PMethod23407 = new_Method_with(PArray23408, PArray23409, empty_Array, PThreadedCode23410, 1, PSend23452);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23407, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23454 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23455 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23459 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23460 = new_String(L"HTTP/1.1");
    Constant string_23460_Const = new_Constant((Optr)string_23460);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23458 = new_Send((Optr)PSend23459, SMB_protocol_code_, 2, (Optr)string_23460_Const, (Optr)int_405_Const);
    Assign PAssign23457 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23458);
    String string_23461 = new_String(L"Content-Type");
    String string_23462 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23461_Const = new_Constant((Optr)string_23461);
    Constant string_23462_Const = new_Constant((Optr)string_23462);
    // headerAt:put:. 
    Send PSend23463 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23461_Const, (Optr)string_23462_Const);
    String string_23464 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23466 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23469 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23471 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23471, (Optr)&t_method_return);
    Block PBlock23468 = new_Block_with(PArray23469, empty_Array, PThreadedCode23470, 1, PSend23471);
    Character char_23474 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23474_Const = new_Constant((Optr)char_23474);
    // nextPut:. 
    Send PSend23475 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23474_Const);
    Array PThreadedCode23473 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23474, (Optr)&t_send1, (Optr)PSend23475, (Optr)&t_block_return);
    Block PBlock23472 = new_Block_with(empty_Array, empty_Array, PThreadedCode23473, 1, PSend23475);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23476 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23468, (Optr)PBlock23472);
    Array PThreadedCode23467 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23468, (Optr)&t_push_closure, (Optr)PBlock23472, (Optr)&t_send2, (Optr)PSend23476, (Optr)&t_method_return);
    Block PBlock23465 = new_Block_with(PArray23466, empty_Array, PThreadedCode23467, 1, PSend23476);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23477 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23465);
    Constant string_23464_Const = new_Constant((Optr)string_23464);
    // headerAt:put:. 
    Send PSend23478 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23464_Const, (Optr)PSend23477);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23479 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23456 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23457, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23459, (Optr)&t_push1, (Optr)string_23460, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23458, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23461, (Optr)&t_push1, (Optr)string_23462, (Optr)&t_send2, (Optr)PSend23463, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23464, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23465, (Optr)&t_send1, (Optr)PSend23477, (Optr)&t_send2, (Optr)PSend23478, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23479, (Optr)&t_method_return);
    Method PMethod23453 = new_Method_with(PArray23454, PArray23455, empty_Array, PThreadedCode23456, 4, PAssign23457, PSend23463, PSend23478, PSend23479);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23453, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23481 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23484 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23485 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23483 = new_Block_with(PArray23484, empty_Array, PThreadedCode23485, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23486 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23483);
    Array PThreadedCode23482 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23483, (Optr)&t_send2, (Optr)PSend23486, (Optr)&t_method_return);
    Method PMethod23480 = new_Method_with(PArray23481, empty_Array, empty_Array, PThreadedCode23482, 1, PSend23486);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23480, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23488 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23489 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23493 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23494 = new_String(L"HTTP/1.1");
    Constant string_23494_Const = new_Constant((Optr)string_23494);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23492 = new_Send((Optr)PSend23493, SMB_protocol_code_, 2, (Optr)string_23494_Const, (Optr)int_200_Const);
    Assign PAssign23491 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23492);
    String string_23495 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23495_Const = new_Constant((Optr)string_23495);
    // headerAt:put:. 
    Send PSend23496 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23495_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23497 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23498 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23490 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23491, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23493, (Optr)&t_push1, (Optr)string_23494, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23492, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23495, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23496, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23497, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23498, (Optr)&t_method_return);
    Method PMethod23487 = new_Method_with(PArray23488, PArray23489, empty_Array, PThreadedCode23490, 4, PAssign23491, PSend23496, PSend23497, PSend23498);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23487, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23500 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23502 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23502_Const = new_Constant((Optr)string_23502);
    // send200Response:contentType:. 
    Send PSend23503 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23502_Const);
    Array PThreadedCode23501 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23502, (Optr)&t_send2, (Optr)PSend23503, (Optr)&t_method_return);
    Method PMethod23499 = new_Method_with(PArray23500, empty_Array, empty_Array, PThreadedCode23501, 1, PSend23503);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23499, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper23506 = new_Super(SMB_initialize, 0);
    String string_23508 = new_String(L"GET");
    Constant string_23508_Const = new_Constant((Optr)string_23508);
    Assign PAssign23507 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23508_Const);
    String string_23510 = new_String(L"HTTP/1.1");
    Constant string_23510_Const = new_Constant((Optr)string_23510);
    Assign PAssign23509 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23510_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23512 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23511 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23512);
    Array PThreadedCode23505 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23506, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23507, (Optr)&t_push1, (Optr)string_23508, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23509, (Optr)&t_push1, (Optr)string_23510, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23511, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23512, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23504 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23505, 5, PSuper23506, PAssign23507, PAssign23509, PAssign23511, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23504, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23515 = new_Send((Optr)self, SMB_method, 0);
    String string_23516 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23516_Const = new_Constant((Optr)string_23516);
    // =. 
    Send PSend23517 = new_Send((Optr)PSend23515, SMB__equals_, 1, (Optr)string_23516_Const);
    Array PThreadedCode23514 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23515, (Optr)&t_push1, (Optr)string_23516, (Optr)&t_send1, (Optr)PSend23517, (Optr)&t_method_return);
    Method PMethod23513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23514, 1, PSend23517);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod23513, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23519 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23521 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23520 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23521, (Optr)&t_method_return);
    Method PMethod23518 = new_Method_with(PArray23519, empty_Array, empty_Array, PThreadedCode23520, 1, PSend23521);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod23518, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23523 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23527 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23527_Const = new_Constant((Optr)string_23527);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23528 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23528_Const = new_Constant((Optr)string_23528);
    // ,. 
    Send PSend23526 = new_Send((Optr)string_23527_Const, SMB__append_, 1, (Optr)string_23528_Const);
    Assign PAssign23525 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23526);
    SmallInt int_400 = new_SmallInt(400);
    String string_23529 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23529_Const = new_Constant((Optr)string_23529);
    // sendResponseCode:content:type:close:. 
    Send PSend23530 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23529_Const, (Optr)true_Const);
    Array PThreadedCode23524 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23525, (Optr)&t_push1, (Optr)string_23527, (Optr)&t_push1, (Optr)string_23528, (Optr)&t_send1, (Optr)PSend23526, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23529, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23530, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23522 = new_Method_with(empty_Array, PArray23523, empty_Array, PThreadedCode23524, 3, PAssign23525, PSend23530, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23522, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23534 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23536 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23537 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23535 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23537, (Optr)&t_method_return);
    Block PBlock23533 = new_Block_with(PArray23534, empty_Array, PThreadedCode23535, 2, PSend23536, PSend23537);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23538 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23539 = new_Send((Optr)PBlock23533, SMB_value_, 1, (Optr)PSend23538);
    Array PThreadedCode23532 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23533, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23538, (Optr)&t_send1, (Optr)PSend23539, (Optr)&t_method_return);
    Method PMethod23531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23532, 1, PSend23539);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23531, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23542 = new_Send((Optr)self, SMB_method, 0);
    String string_23543 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23543_Const = new_Constant((Optr)string_23543);
    // =. 
    Send PSend23544 = new_Send((Optr)PSend23542, SMB__equals_, 1, (Optr)string_23543_Const);
    Array PThreadedCode23541 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23542, (Optr)&t_push1, (Optr)string_23543, (Optr)&t_send1, (Optr)PSend23544, (Optr)&t_method_return);
    Method PMethod23540 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23541, 1, PSend23544);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23540, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray23546 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23549 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23551 = new_String(L"Content-Type");
    String string_23552 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23551_Const = new_Constant((Optr)string_23551);
    Constant string_23552_Const = new_Constant((Optr)string_23552);
    // headerAt:put:. 
    Send PSend23553 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23551_Const, (Optr)string_23552_Const);
    Array PThreadedCode23550 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23551, (Optr)&t_push1, (Optr)string_23552, (Optr)&t_send2, (Optr)PSend23553, (Optr)&t_method_return);
    Block PBlock23548 = new_Block_with(PArray23549, empty_Array, PThreadedCode23550, 1, PSend23553);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend23554 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock23548);
    Array PThreadedCode23547 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock23548, (Optr)&t_send2, (Optr)PSend23554, (Optr)&t_method_return);
    Method PMethod23545 = new_Method_with(PArray23546, empty_Array, empty_Array, PThreadedCode23547, 1, PSend23554);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod23545, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23556 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23559 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23558 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23559);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend23560 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray23562 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23564 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23563 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23564, (Optr)&t_method_return);
    Block PBlock23561 = new_Block_with(PArray23562, empty_Array, PThreadedCode23563, 1, PSend23564);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend23565 = new_Send((Optr)PSend23560, SMB_associationsDo_, 1, (Optr)PBlock23561);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend23566 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray23568 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23570 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23570, (Optr)&t_method_return);
    Block PBlock23567 = new_Block_with(PArray23568, empty_Array, PThreadedCode23569, 1, PSend23570);
    // associationsDo:. 
    Send PSend23571 = new_Send((Optr)PSend23566, SMB_associationsDo_, 1, (Optr)PBlock23567);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend23572 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray23574 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23576 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23575 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23576, (Optr)&t_method_return);
    Block PBlock23573 = new_Block_with(PArray23574, empty_Array, PThreadedCode23575, 1, PSend23576);
    // associationsDo:. 
    Send PSend23577 = new_Send((Optr)PSend23572, SMB_associationsDo_, 1, (Optr)PBlock23573);
    Array PThreadedCode23557 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23558, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23559, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23560, (Optr)&t_push_closure, (Optr)PBlock23561, (Optr)&t_send1, (Optr)PSend23565, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23566, (Optr)&t_push_closure, (Optr)PBlock23567, (Optr)&t_send1, (Optr)PSend23571, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23572, (Optr)&t_push_closure, (Optr)PBlock23573, (Optr)&t_send1, (Optr)PSend23577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23555 = new_Method_with(empty_Array, PArray23556, empty_Array, PThreadedCode23557, 5, PAssign23558, PSend23565, PSend23571, PSend23577, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod23555, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_23580 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23581 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_23580_Const = new_Constant((Optr)string_23580);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23582 = new_Send((Optr)string_23580_Const, SMB__append_, 1, (Optr)PSend23581);
    String string_23583 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_23583_Const = new_Constant((Optr)string_23583);
    // ,. 
    Send PSend23584 = new_Send((Optr)PSend23582, SMB__append_, 1, (Optr)string_23583_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend23585 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend23584);
    Array PThreadedCode23579 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23580, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23581, (Optr)&t_send1, (Optr)PSend23582, (Optr)&t_push1, (Optr)string_23583, (Optr)&t_send1, (Optr)PSend23584, (Optr)&t_send1, (Optr)PSend23585, (Optr)&t_method_return);
    Method PMethod23578 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23579, 1, PSend23585);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod23578, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23588 = new_Send((Optr)self, SMB_method, 0);
    String string_23589 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23589_Const = new_Constant((Optr)string_23589);
    // =. 
    Send PSend23590 = new_Send((Optr)PSend23588, SMB__equals_, 1, (Optr)string_23589_Const);
    Array PThreadedCode23587 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23588, (Optr)&t_push1, (Optr)string_23589, (Optr)&t_send1, (Optr)PSend23590, (Optr)&t_method_return);
    Method PMethod23586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23587, 1, PSend23590);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod23586, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23592 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend23594 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23593 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23594, (Optr)&t_method_return);
    Method PMethod23591 = new_Method_with(PArray23592, empty_Array, empty_Array, PThreadedCode23593, 1, PSend23594);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod23591, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray23596 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23599 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23600 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23598 = new_Block_with(PArray23599, empty_Array, PThreadedCode23600, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend23601 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock23598);
    Array PThreadedCode23597 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock23598, (Optr)&t_send3, (Optr)PSend23601, (Optr)&t_method_return);
    Method PMethod23595 = new_Method_with(PArray23596, empty_Array, empty_Array, PThreadedCode23597, 1, PSend23601);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod23595, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23603 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23606 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23605 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23606);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray23608 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_23610 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray23612 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23614 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode23613 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend23614, (Optr)&t_method_return);
    Block PBlock23611 = new_Block_with(PArray23612, empty_Array, PThreadedCode23613, 1, PSend23614);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_23610_Const = new_Constant((Optr)string_23610);
    // at:ifPresent:. 
    Send PSend23615 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_23610_Const, (Optr)PBlock23611);
    Array PThreadedCode23609 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_23610, (Optr)&t_push_closure, (Optr)PBlock23611, (Optr)&t_send2, (Optr)PSend23615, (Optr)&t_method_return);
    Block PBlock23607 = new_Block_with(PArray23608, empty_Array, PThreadedCode23609, 1, PSend23615);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend23616 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock23607);
    Array PThreadedCode23604 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign23605, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23606, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23607, (Optr)&t_send1, (Optr)PSend23616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23602 = new_Method_with(empty_Array, PArray23603, empty_Array, PThreadedCode23604, 3, PAssign23605, PSend23616, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod23602, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray23618 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23619 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23623 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23624 = new_String(L"HTTP/1.1");
    Constant string_23624_Const = new_Constant((Optr)string_23624);
    // protocol:code:. 
    Send PSend23622 = new_Send((Optr)PSend23623, SMB_protocol_code_, 2, (Optr)string_23624_Const, (Optr)VAR_code_0_0);
    Assign PAssign23621 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23622);
    String string_23625 = new_String(L"Transfer-Encoding");
    String string_23626 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23625_Const = new_Constant((Optr)string_23625);
    Constant string_23626_Const = new_Constant((Optr)string_23626);
    // headerAt:put:. 
    Send PSend23627 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23625_Const, (Optr)string_23626_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23628 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray23630 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend23632 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend23633 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23635 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23637 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23637_Const = new_Constant((Optr)string_23637);
    // nextPutAll:. 
    Send PSend23638 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_23637_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23639 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend23640 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23641 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode23636 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_23637, (Optr)&t_send1, (Optr)PSend23638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23639, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23641, (Optr)&t_method_return);
    Block PBlock23634 = new_Block_with(PArray23635, empty_Array, PThreadedCode23636, 4, PSend23638, PSend23639, PSend23640, PSend23641);
    // value:. 
    Send PSend23642 = new_Send((Optr)PBlock23634, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode23631 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23633, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23634, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23642, (Optr)&t_method_return);
    Block PBlock23629 = new_Block_with(PArray23630, empty_Array, PThreadedCode23631, 3, PSend23632, PSend23633, PSend23642);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23643 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock23629);
    Array PThreadedCode23620 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23621, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23623, (Optr)&t_push1, (Optr)string_23624, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23622, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23625, (Optr)&t_push1, (Optr)string_23626, (Optr)&t_send2, (Optr)PSend23627, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23628, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock23629, (Optr)&t_send2, (Optr)PSend23643, (Optr)&t_method_return);
    Method PMethod23617 = new_Method_with(PArray23618, PArray23619, empty_Array, PThreadedCode23620, 4, PAssign23621, PSend23627, PSend23628, PSend23643);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod23617, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray23645 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_23649 = new_String(L"Connection");
    String string_23650 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23649_Const = new_Constant((Optr)string_23649);
    Constant string_23650_Const = new_Constant((Optr)string_23650);
    // headerAt:put:. 
    Send PSend23651 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23649_Const, (Optr)string_23650_Const);
    Array PThreadedCode23648 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23649, (Optr)&t_push1, (Optr)string_23650, (Optr)&t_send2, (Optr)PSend23651, (Optr)&t_block_return);
    Block PBlock23647 = new_Block_with(empty_Array, empty_Array, PThreadedCode23648, 1, PSend23651);
    String string_23654 = new_String(L"Content-Length");
    Constant string_23654_Const = new_Constant((Optr)string_23654);
    // headerAt:put:. 
    Send PSend23655 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23654_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode23653 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23654, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend23655, (Optr)&t_block_return);
    Block PBlock23652 = new_Block_with(empty_Array, empty_Array, PThreadedCode23653, 1, PSend23655);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23656 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23647, (Optr)PBlock23652);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray23658 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23660 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode23659 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23660, (Optr)&t_method_return);
    Block PBlock23657 = new_Block_with(PArray23658, empty_Array, PThreadedCode23659, 1, PSend23660);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23661 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23657);
    Array PThreadedCode23646 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock23647, (Optr)&t_push_closure, (Optr)PBlock23652, (Optr)&t_send2, (Optr)PSend23656, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23657, (Optr)&t_send2, (Optr)PSend23661, (Optr)&t_method_return);
    Method PMethod23644 = new_Method_with(PArray23645, empty_Array, empty_Array, PThreadedCode23646, 2, PSend23656, PSend23661);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod23644, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray23663 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign23665 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode23664 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23665, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23662 = new_Method_with(PArray23663, empty_Array, empty_Array, PThreadedCode23664, 2, PAssign23665, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod23662, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23667 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23668 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23672 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23673 = new_String(L"HTTP/1.1");
    Constant string_23673_Const = new_Constant((Optr)string_23673);
    // protocol:code:. 
    Send PSend23671 = new_Send((Optr)PSend23672, SMB_protocol_code_, 2, (Optr)string_23673_Const, (Optr)VAR_code_0_0);
    Assign PAssign23670 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23671);
    String string_23676 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23676_Const = new_Constant((Optr)string_23676);
    // headerAt:put:. 
    Send PSend23677 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23676_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode23675 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23676, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23677, (Optr)&t_block_return);
    Block PBlock23674 = new_Block_with(empty_Array, empty_Array, PThreadedCode23675, 1, PSend23677);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23678 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23674);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23679 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23680 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode23669 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23670, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23672, (Optr)&t_push1, (Optr)string_23673, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23671, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23674, (Optr)&t_send1, (Optr)PSend23678, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23679, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend23680, (Optr)&t_method_return);
    Method PMethod23666 = new_Method_with(PArray23667, PArray23668, empty_Array, PThreadedCode23669, 4, PAssign23670, PSend23678, PSend23679, PSend23680);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod23666, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23682 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend23684 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23683 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23684, (Optr)&t_method_return);
    Method PMethod23681 = new_Method_with(PArray23682, empty_Array, empty_Array, PThreadedCode23683, 1, PSend23684);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod23681, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23686 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray23687 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23691 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23690 = new_Send((Optr)PSend23691, SMB_not, 0);
    Assign PAssign23689 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend23690);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_23695 = new_String(L"Connection");
    String string_23696 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23695_Const = new_Constant((Optr)string_23695);
    Constant string_23696_Const = new_Constant((Optr)string_23696);
    // headerAt:put:. 
    Send PSend23697 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23695_Const, (Optr)string_23696_Const);
    Array PThreadedCode23694 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23695, (Optr)&t_push1, (Optr)string_23696, (Optr)&t_send2, (Optr)PSend23697, (Optr)&t_block_return);
    Block PBlock23693 = new_Block_with(empty_Array, empty_Array, PThreadedCode23694, 1, PSend23697);
    // ifTrue:. 
    Send PSend23692 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23693);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23698 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23699 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23703 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23702 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23703, (Optr)&t_block_return);
    Block PBlock23701 = new_Block_with(empty_Array, empty_Array, PThreadedCode23702, 1, PSend23703);
    // ifTrue:. 
    Send PSend23700 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23701);
    Array PThreadedCode23688 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign23689, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23691, (Optr)&t_send0, (Optr)PSend23690, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23692, (Optr)PBlock23693, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23698, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23699, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23700, (Optr)PBlock23701, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23685 = new_Method_with(PArray23686, PArray23687, empty_Array, PThreadedCode23688, 6, PAssign23689, PSend23692, PSend23698, PSend23699, PSend23700, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod23685, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23705 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23707 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23707_Const = new_Constant((Optr)string_23707);
    // send200Response:contentType:. 
    Send PSend23708 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_23707_Const);
    Array PThreadedCode23706 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_23707, (Optr)&t_send2, (Optr)PSend23708, (Optr)&t_method_return);
    Method PMethod23704 = new_Method_with(PArray23705, empty_Array, empty_Array, PThreadedCode23706, 1, PSend23708);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod23704, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23711 = new_Send((Optr)self, SMB_method, 0);
    String string_23712 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23712_Const = new_Constant((Optr)string_23712);
    // =. 
    Send PSend23713 = new_Send((Optr)PSend23711, SMB__equals_, 1, (Optr)string_23712_Const);
    Array PThreadedCode23710 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23711, (Optr)&t_push1, (Optr)string_23712, (Optr)&t_send1, (Optr)PSend23713, (Optr)&t_method_return);
    Method PMethod23709 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23710, 1, PSend23713);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod23709, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray23715 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23718 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23719 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23717 = new_Block_with(PArray23718, empty_Array, PThreadedCode23719, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend23720 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock23717);
    Array PThreadedCode23716 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock23717, (Optr)&t_send3, (Optr)PSend23720, (Optr)&t_method_return);
    Method PMethod23714 = new_Method_with(PArray23715, empty_Array, empty_Array, PThreadedCode23716, 1, PSend23720);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod23714, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray23722 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_23724 = new_String(L"Date");
    Array PThreadedCode23726 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23725 = new_Block_with(empty_Array, empty_Array, PThreadedCode23726, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23727 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23725);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend23728 = new_Send((Optr)PSend23727, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23724_Const = new_Constant((Optr)string_23724);
    // headerAt:put:. 
    Send PSend23729 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23724_Const, (Optr)PSend23728);
    String string_23730 = new_String(L"Server");
    Array PThreadedCode23732 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23731 = new_Block_with(empty_Array, empty_Array, PThreadedCode23732, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend23733 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23731);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend23734 = new_Send((Optr)PSend23733, SMB_serverString, 0);
    Constant string_23730_Const = new_Constant((Optr)string_23730);
    // headerAt:put:. 
    Send PSend23735 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23730_Const, (Optr)PSend23734);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23740 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23741 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend23742 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23746 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode23745 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23746, (Optr)&t_block_return);
    Block PBlock23744 = new_Block_with(empty_Array, empty_Array, PThreadedCode23745, 1, PSend23746);
    // ifFalse:. 
    Send PSend23743 = new_Send((Optr)PSend23742, SMB_ifFalse_, 1, (Optr)PBlock23744);
    Array PThreadedCode23739 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23740, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23741, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23742, (Optr)&t_send_ifFalse_, (Optr)PSend23743, (Optr)PBlock23744, (Optr)&t_block_return);
    Block PBlock23738 = new_Block_with(empty_Array, empty_Array, PThreadedCode23739, 3, PSend23740, PSend23741, PSend23743);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray23748 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode23749 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23747 = new_Block_with(PArray23748, empty_Array, PThreadedCode23749, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23750 = new_Send((Optr)PBlock23738, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock23747);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend23753 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode23752 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend23753, (Optr)&t_block_return);
    Block PBlock23751 = new_Block_with(empty_Array, empty_Array, PThreadedCode23752, 1, PSend23753);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23754 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock23751);
    Array PThreadedCode23737 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock23738, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock23747, (Optr)&t_send2, (Optr)PSend23750, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23751, (Optr)&t_send1, (Optr)PSend23754, (Optr)&t_block_return);
    Block PBlock23736 = new_Block_with(empty_Array, empty_Array, PThreadedCode23737, 2, PSend23750, PSend23754);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend23755 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23736);
    Array PThreadedCode23723 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23724, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23725, (Optr)&t_send1, (Optr)PSend23727, (Optr)&t_send0, (Optr)PSend23728, (Optr)&t_send2, (Optr)PSend23729, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23730, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23731, (Optr)&t_send1, (Optr)PSend23733, (Optr)&t_send0, (Optr)PSend23734, (Optr)&t_send2, (Optr)PSend23735, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23736, (Optr)&t_send2, (Optr)PSend23755, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23721 = new_Method_with(PArray23722, empty_Array, empty_Array, PThreadedCode23723, 4, PSend23729, PSend23735, PSend23755, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod23721, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode23757 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod23756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23757, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod23756, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray23759 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_23761 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_23761_Const = new_Constant((Optr)string_23761);
    // stream200Response:size:type:. 
    Send PSend23762 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_23761_Const);
    Array PThreadedCode23760 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_23761, (Optr)&t_send3, (Optr)PSend23762, (Optr)&t_method_return);
    Method PMethod23758 = new_Method_with(PArray23759, empty_Array, empty_Array, PThreadedCode23760, 1, PSend23762);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod23758, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23764 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23767 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23768 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23766 = new_Block_with(PArray23767, empty_Array, PThreadedCode23768, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend23769 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23766);
    Array PThreadedCode23765 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23766, (Optr)&t_send2, (Optr)PSend23769, (Optr)&t_method_return);
    Method PMethod23763 = new_Method_with(PArray23764, empty_Array, empty_Array, PThreadedCode23765, 1, PSend23769);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod23763, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23771 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray23772 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign23774 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_23775 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23775_Const = new_Constant((Optr)string_23775);
    // findString:. 
    Send PSend23776 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_23775_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend23777 = new_Send((Optr)PSend23776, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23781 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23781_Const = new_Constant((Optr)string_23781);
    // headerAt:. 
    Send PSend23782 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23781_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray23784 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_23789 = new_String(L"http://");
    Constant string_23789_Const = new_Constant((Optr)string_23789);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23788 = new_Send((Optr)string_23789_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend23787 = new_Send((Optr)PSend23788, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign23786 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend23787);
    Array PThreadedCode23785 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign23786, (Optr)&t_push1, (Optr)string_23789, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend23788, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend23787, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23783 = new_Block_with(PArray23784, empty_Array, PThreadedCode23785, 1, PAssign23786);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23790 = new_Send((Optr)PSend23782, SMB_ifNotEmpty_, 1, (Optr)PBlock23783);
    Array PThreadedCode23780 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23781, (Optr)&t_send1, (Optr)PSend23782, (Optr)&t_push_closure, (Optr)PBlock23783, (Optr)&t_send1, (Optr)PSend23790, (Optr)&t_block_return);
    Block PBlock23779 = new_Block_with(empty_Array, empty_Array, PThreadedCode23780, 1, PSend23790);
    // ifFalse:. 
    Send PSend23778 = new_Send((Optr)PSend23777, SMB_ifFalse_, 1, (Optr)PBlock23779);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23793 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23794 = new_String(L"HTTP/1.1");
    Constant string_23794_Const = new_Constant((Optr)string_23794);
    // protocol:code:. 
    Send PSend23792 = new_Send((Optr)PSend23793, SMB_protocol_code_, 2, (Optr)string_23794_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign23791 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23792);
    String string_23795 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23795_Const = new_Constant((Optr)string_23795);
    // headerAt:put:. 
    Send PSend23796 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23795_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23797 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_23798 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_23798_Const = new_Constant((Optr)string_23798);
    // sendResponse:content:. 
    Send PSend23799 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_23798_Const);
    Array PThreadedCode23773 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23774, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_23775, (Optr)&t_send1, (Optr)PSend23776, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23777, (Optr)&t_send_ifFalse_, (Optr)PSend23778, (Optr)PBlock23779, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23791, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23793, (Optr)&t_push1, (Optr)string_23794, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend23792, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23795, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend23796, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23797, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23798, (Optr)&t_send2, (Optr)PSend23799, (Optr)&t_method_return);
    Method PMethod23770 = new_Method_with(PArray23771, PArray23772, empty_Array, PThreadedCode23773, 6, PAssign23774, PSend23778, PAssign23791, PSend23796, PSend23797, PSend23799);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod23770, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23802 = new_Send((Optr)self, SMB_method, 0);
    String string_23803 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23803_Const = new_Constant((Optr)string_23803);
    // =. 
    Send PSend23804 = new_Send((Optr)PSend23802, SMB__equals_, 1, (Optr)string_23803_Const);
    Array PThreadedCode23801 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23802, (Optr)&t_push1, (Optr)string_23803, (Optr)&t_send1, (Optr)PSend23804, (Optr)&t_method_return);
    Method PMethod23800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23801, 1, PSend23804);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod23800, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23806 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23809 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23811 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23812 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23813 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend23814 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23815 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23816 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode23810 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend23811, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend23813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend23815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23816, (Optr)&t_method_return);
    Block PBlock23808 = new_Block_with(PArray23809, empty_Array, PThreadedCode23810, 6, PSend23811, PSend23812, PSend23813, PSend23814, PSend23815, PSend23816);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23817 = new_Send((Optr)PBlock23808, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23807 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23808, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23817, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23805 = new_Method_with(PArray23806, empty_Array, empty_Array, PThreadedCode23807, 2, PSend23817, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod23805, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23819 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23821 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23822 = new_Send((Optr)self, SMB_method, 0);
    Constant string_23821_Const = new_Constant((Optr)string_23821);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23823 = new_Send((Optr)string_23821_Const, SMB__append_, 1, (Optr)PSend23822);
    String string_23824 = new_String(L" is not allowed for the URL");
    Constant string_23824_Const = new_Constant((Optr)string_23824);
    // ,. 
    Send PSend23825 = new_Send((Optr)PSend23823, SMB__append_, 1, (Optr)string_23824_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23826 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23827 = new_Send((Optr)PSend23825, SMB__append_, 1, (Optr)PSend23826);
    String string_23828 = new_String(L"</p></body></html>");
    Constant string_23828_Const = new_Constant((Optr)string_23828);
    // ,. 
    Send PSend23829 = new_Send((Optr)PSend23827, SMB__append_, 1, (Optr)string_23828_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend23830 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend23829);
    Array PThreadedCode23820 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_23821, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23822, (Optr)&t_send1, (Optr)PSend23823, (Optr)&t_push1, (Optr)string_23824, (Optr)&t_send1, (Optr)PSend23825, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23826, (Optr)&t_send1, (Optr)PSend23827, (Optr)&t_push1, (Optr)string_23828, (Optr)&t_send1, (Optr)PSend23829, (Optr)&t_send2, (Optr)PSend23830, (Optr)&t_method_return);
    Method PMethod23818 = new_Method_with(PArray23819, empty_Array, empty_Array, PThreadedCode23820, 1, PSend23830);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod23818, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray23832 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray23833 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_23839 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23839_Const = new_Constant((Optr)string_23839);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23840 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_23840_Const = new_Constant((Optr)string_23840);
    // ,. 
    Send PSend23838 = new_Send((Optr)string_23839_Const, SMB__append_, 1, (Optr)string_23840_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23842 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23843 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23841 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23842, (Optr)PSend23843);
    // ,. 
    Send PSend23837 = new_Send((Optr)PSend23838, SMB__append_, 1, (Optr)PSend23841);
    String string_23844 = new_String(L"</pre></body></html>");
    Constant string_23844_Const = new_Constant((Optr)string_23844);
    // ,. 
    Send PSend23836 = new_Send((Optr)PSend23837, SMB__append_, 1, (Optr)string_23844_Const);
    Assign PAssign23835 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend23836);
    SmallInt int_500 = new_SmallInt(500);
    String string_23845 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23845_Const = new_Constant((Optr)string_23845);
    // sendResponseCode:content:type:close:. 
    Send PSend23846 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_23845_Const, (Optr)true_Const);
    Array PThreadedCode23834 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23835, (Optr)&t_push1, (Optr)string_23839, (Optr)&t_push1, (Optr)string_23840, (Optr)&t_send1, (Optr)PSend23838, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23842, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23843, (Optr)&t_send2, (Optr)PSend23841, (Optr)&t_send1, (Optr)PSend23837, (Optr)&t_push1, (Optr)string_23844, (Optr)&t_send1, (Optr)PSend23836, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_23845, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23846, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23831 = new_Method_with(PArray23832, PArray23833, empty_Array, PThreadedCode23834, 3, PAssign23835, PSend23846, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod23831, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23848 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23850 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode23849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23850, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23847 = new_Method_with(PArray23848, empty_Array, empty_Array, PThreadedCode23849, 2, PAssign23850, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod23847, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23855 = new_Send((Optr)self, SMB_method, 0);
    String string_23856 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23856_Const = new_Constant((Optr)string_23856);
    // ,. 
    Send PSend23857 = new_Send((Optr)PSend23855, SMB__append_, 1, (Optr)string_23856_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23858 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23859 = new_Send((Optr)PSend23857, SMB__append_, 1, (Optr)PSend23858);
    String string_23860 = new_String(L" ");
    Constant string_23860_Const = new_Constant((Optr)string_23860);
    // ,. 
    Send PSend23861 = new_Send((Optr)PSend23859, SMB__append_, 1, (Optr)string_23860_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23862 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend23863 = new_Send((Optr)PSend23861, SMB__append_, 1, (Optr)PSend23862);
    Array PThreadedCode23854 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23855, (Optr)&t_push1, (Optr)string_23856, (Optr)&t_send1, (Optr)PSend23857, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23858, (Optr)&t_send1, (Optr)PSend23859, (Optr)&t_push1, (Optr)string_23860, (Optr)&t_send1, (Optr)PSend23861, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23862, (Optr)&t_send1, (Optr)PSend23863, (Optr)&t_block_return);
    Block PBlock23853 = new_Block_with(empty_Array, empty_Array, PThreadedCode23854, 1, PSend23863);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23864 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock23853);
    Array PThreadedCode23852 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock23853, (Optr)&t_send1, (Optr)PSend23864, (Optr)&t_method_return);
    Method PMethod23851 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23852, 1, PSend23864);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod23851, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
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


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23873 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23875 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23878 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23879 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23879_Const = new_Constant((Optr)string_23879);
    // beginsWith:. 
    Send PSend23880 = new_Send((Optr)PSend23878, SMB_beginsWith_, 1, (Optr)string_23879_Const);
    Array PThreadedCode23877 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23878, (Optr)&t_push1, (Optr)string_23879, (Optr)&t_send1, (Optr)PSend23880, (Optr)&t_block_return);
    Block PBlock23876 = new_Block_with(empty_Array, empty_Array, PThreadedCode23877, 1, PSend23880);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23881 = new_Send((Optr)PSend23875, SMB_and_, 1, (Optr)PBlock23876);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23885 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23886 = new_Send((Optr)PSend23885, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend23887 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend23888 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend23886, (Optr)PSend23887, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23884 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23885, (Optr)&t_send0, (Optr)PSend23886, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23887, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend23888, (Optr)&t_block_return);
    Block PBlock23883 = new_Block_with(empty_Array, empty_Array, PThreadedCode23884, 1, PSend23888);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23891 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23890 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23891, (Optr)&t_block_return);
    Block PBlock23889 = new_Block_with(empty_Array, empty_Array, PThreadedCode23890, 1, PSend23891);
    // ifTrue:ifFalse:. 
    Send PSend23882 = new_Send((Optr)PSend23881, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23883, (Optr)PBlock23889);
    Array PThreadedCode23874 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23875, (Optr)&t_push_closure, (Optr)PBlock23876, (Optr)&t_send1, (Optr)PSend23881, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23882, (Optr)PBlock23883, (Optr)PBlock23889, (Optr)&t_method_return);
    Method PMethod23872 = new_Method_with(PArray23873, empty_Array, empty_Array, PThreadedCode23874, 1, PSend23882);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod23872, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23894 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23897 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23898 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23898_Const = new_Constant((Optr)string_23898);
    // =. 
    Send PSend23899 = new_Send((Optr)PSend23897, SMB__equals_, 1, (Optr)string_23898_Const);
    Array PThreadedCode23896 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23897, (Optr)&t_push1, (Optr)string_23898, (Optr)&t_send1, (Optr)PSend23899, (Optr)&t_block_return);
    Block PBlock23895 = new_Block_with(empty_Array, empty_Array, PThreadedCode23896, 1, PSend23899);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23900 = new_Send((Optr)PSend23894, SMB_and_, 1, (Optr)PBlock23895);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23904 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23905 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend23904, (Optr)true_Const);
    Array PThreadedCode23903 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23904, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend23905, (Optr)&t_block_return);
    Block PBlock23902 = new_Block_with(empty_Array, empty_Array, PThreadedCode23903, 1, PSend23905);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23908 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23907 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23908, (Optr)&t_block_return);
    Block PBlock23906 = new_Block_with(empty_Array, empty_Array, PThreadedCode23907, 1, PSend23908);
    // ifTrue:ifFalse:. 
    Send PSend23901 = new_Send((Optr)PSend23900, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23902, (Optr)PBlock23906);
    Array PThreadedCode23893 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23894, (Optr)&t_push_closure, (Optr)PBlock23895, (Optr)&t_send1, (Optr)PSend23900, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23901, (Optr)PBlock23902, (Optr)PBlock23906, (Optr)&t_method_return);
    Method PMethod23892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23893, 1, PSend23901);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod23892, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23910 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23912 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend23913 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend23912);
    Array PThreadedCode23911 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23912, (Optr)&t_send2, (Optr)PSend23913, (Optr)&t_method_return);
    Method PMethod23909 = new_Method_with(PArray23910, empty_Array, empty_Array, PThreadedCode23911, 1, PSend23913);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod23909, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23915 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23917 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode23916 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23917, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23914 = new_Method_with(PArray23915, empty_Array, empty_Array, PThreadedCode23916, 2, PAssign23917, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod23914, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray23919 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23921 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23922 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23923 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend23921, (Optr)PSend23922);
    Array PThreadedCode23920 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend23921, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend23922, (Optr)&t_send3, (Optr)PSend23923, (Optr)&t_method_return);
    Method PMethod23918 = new_Method_with(PArray23919, empty_Array, empty_Array, PThreadedCode23920, 1, PSend23923);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod23918, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23925 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend23927 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper23928 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23926 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23927, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper23928, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23924 = new_Method_with(PArray23925, empty_Array, empty_Array, PThreadedCode23926, 3, PSend23927, PSuper23928, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23924, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23930 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23931 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23935 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23936 = new_String(L"HTTP/1.1");
    Constant string_23936_Const = new_Constant((Optr)string_23936);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23934 = new_Send((Optr)PSend23935, SMB_protocol_code_, 2, (Optr)string_23936_Const, (Optr)int_200_Const);
    Assign PAssign23933 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23934);
    String string_23937 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23937_Const = new_Constant((Optr)string_23937);
    // headerAt:put:. 
    Send PSend23938 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23937_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23939 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23940 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode23932 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23933, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23935, (Optr)&t_push1, (Optr)string_23936, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23934, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23937, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend23938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23939, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23940, (Optr)&t_method_return);
    Method PMethod23929 = new_Method_with(PArray23930, PArray23931, empty_Array, PThreadedCode23932, 4, PAssign23933, PSend23938, PSend23939, PSend23940);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod23929, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode23942 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod23941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23942, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod23941, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2665 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // copyUpTo:. 
    Send PSend23945 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2665_Const);
    Character char_23395 = new_Character(L'?');
    Constant char_23395_Const = new_Constant((Optr)char_23395);
    // copyUpTo:. 
    Send PSend23946 = new_Send((Optr)PSend23945, SMB_copyUpTo_, 1, (Optr)char_23395_Const);
    Array PThreadedCode23944 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend23945, (Optr)&t_push1, (Optr)char_23395, (Optr)&t_send1, (Optr)PSend23946, (Optr)&t_method_return);
    Method PMethod23943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23944, 1, PSend23946);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod23943, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23948 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23949 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23953 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23954 = new_String(L"HTTP/1.1");
    Constant string_23954_Const = new_Constant((Optr)string_23954);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend23952 = new_Send((Optr)PSend23953, SMB_protocol_code_, 2, (Optr)string_23954_Const, (Optr)int_404_Const);
    Assign PAssign23951 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23952);
    String string_23955 = new_String(L"Content-Type");
    String string_23956 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23955_Const = new_Constant((Optr)string_23955);
    Constant string_23956_Const = new_Constant((Optr)string_23956);
    // headerAt:put:. 
    Send PSend23957 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23955_Const, (Optr)string_23956_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23958 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23959 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode23950 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23951, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23953, (Optr)&t_push1, (Optr)string_23954, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend23952, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23955, (Optr)&t_push1, (Optr)string_23956, (Optr)&t_send2, (Optr)PSend23957, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend23958, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend23959, (Optr)&t_method_return);
    Method PMethod23947 = new_Method_with(PArray23948, PArray23949, empty_Array, PThreadedCode23950, 4, PAssign23951, PSend23957, PSend23958, PSend23959);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod23947, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray23961 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23964 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23965 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23963 = new_Block_with(PArray23964, empty_Array, PThreadedCode23965, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend23966 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock23963);
    Array PThreadedCode23962 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23963, (Optr)&t_send4, (Optr)PSend23966, (Optr)&t_method_return);
    Method PMethod23960 = new_Method_with(PArray23961, empty_Array, empty_Array, PThreadedCode23962, 1, PSend23966);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod23960, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23969 = new_Send((Optr)self, SMB_method, 0);
    String string_23970 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23970_Const = new_Constant((Optr)string_23970);
    // =. 
    Send PSend23971 = new_Send((Optr)PSend23969, SMB__equals_, 1, (Optr)string_23970_Const);
    Array PThreadedCode23968 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23969, (Optr)&t_push1, (Optr)string_23970, (Optr)&t_send1, (Optr)PSend23971, (Optr)&t_method_return);
    Method PMethod23967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23968, 1, PSend23971);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod23967, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23973 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23975 = new_String(L"");
    String string_23976 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23978 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23980 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23982 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray23985 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23987 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode23986 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend23987, (Optr)&t_method_return);
    Block PBlock23984 = new_Block_with(PArray23985, empty_Array, PThreadedCode23986, 1, PSend23987);
    Character char_23474 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23474_Const = new_Constant((Optr)char_23474);
    // nextPut:. 
    Send PSend23990 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23474_Const);
    Array PThreadedCode23989 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23474, (Optr)&t_send1, (Optr)PSend23990, (Optr)&t_block_return);
    Block PBlock23988 = new_Block_with(empty_Array, empty_Array, PThreadedCode23989, 1, PSend23990);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23991 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23984, (Optr)PBlock23988);
    Array PThreadedCode23983 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23984, (Optr)&t_push_closure, (Optr)PBlock23988, (Optr)&t_send2, (Optr)PSend23991, (Optr)&t_method_return);
    Block PBlock23981 = new_Block_with(PArray23982, empty_Array, PThreadedCode23983, 1, PSend23991);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23992 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23981);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23980_Const = new_Constant((Optr)string_23980);
    // headerAt:put:. 
    Send PSend23993 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23980_Const, (Optr)PSend23992);
    Array PThreadedCode23979 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23980, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23981, (Optr)&t_send1, (Optr)PSend23992, (Optr)&t_send2, (Optr)PSend23993, (Optr)&t_method_return);
    Block PBlock23977 = new_Block_with(PArray23978, empty_Array, PThreadedCode23979, 1, PSend23993);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_23975_Const = new_Constant((Optr)string_23975);
    Constant string_23976_Const = new_Constant((Optr)string_23976);
    // send200Response:contentType:do:. 
    Send PSend23994 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_23975_Const, (Optr)string_23976_Const, (Optr)PBlock23977);
    Array PThreadedCode23974 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23975, (Optr)&t_push1, (Optr)string_23976, (Optr)&t_push_closure, (Optr)PBlock23977, (Optr)&t_send3, (Optr)PSend23994, (Optr)&t_method_return);
    Method PMethod23972 = new_Method_with(PArray23973, empty_Array, empty_Array, PThreadedCode23974, 1, PSend23994);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod23972, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode23996 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod23995 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23996, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod23995, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray23998 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24001 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24006 = new_String(L"Connection");
    String string_24007 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24006_Const = new_Constant((Optr)string_24006);
    Constant string_24007_Const = new_Constant((Optr)string_24007);
    // headerAt:put:. 
    Send PSend24008 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24006_Const, (Optr)string_24007_Const);
    Array PThreadedCode24005 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24006, (Optr)&t_push1, (Optr)string_24007, (Optr)&t_send2, (Optr)PSend24008, (Optr)&t_block_return);
    Block PBlock24004 = new_Block_with(empty_Array, empty_Array, PThreadedCode24005, 1, PSend24008);
    // ifTrue:. 
    Send PSend24003 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24004);
    Array PThreadedCode24002 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24003, (Optr)PBlock24004, (Optr)&t_method_return);
    Block PBlock24000 = new_Block_with(PArray24001, empty_Array, PThreadedCode24002, 1, PSend24003);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24009 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24000);
    Array PThreadedCode23999 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24000, (Optr)&t_send4, (Optr)PSend24009, (Optr)&t_method_return);
    Method PMethod23997 = new_Method_with(PArray23998, empty_Array, empty_Array, PThreadedCode23999, 1, PSend24009);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod23997, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24011 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24013 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24014 = new_Send((Optr)PSend24013, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24012 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24013, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24014, (Optr)&t_method_return);
    Method PMethod24010 = new_Method_with(PArray24011, empty_Array, empty_Array, PThreadedCode24012, 1, PSend24014);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24010, HEADER(WebClient_Core_WebRequest_Class));
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