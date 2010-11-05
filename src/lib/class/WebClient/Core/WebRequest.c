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
    Array PArray23460 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23463 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23468 = new_Character(L'?');
    Constant char_23468_Const = new_Constant((Optr)char_23468);
    // copyAfter:. 
    Send PSend23467 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23468_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23471 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23472 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23471);
    Array PThreadedCode23470 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23471, (Optr)&t_send1, (Optr)PSend23472, (Optr)&t_block_return);
    Block PBlock23469 = new_Block_with(empty_Array, empty_Array, PThreadedCode23470, 1, PSend23472);
    // ifEmpty:. 
    Send PSend23466 = new_Send((Optr)PSend23467, SMB_ifEmpty_, 1, (Optr)PBlock23469);
    Assign PAssign23465 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23466);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23473 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23464 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23465, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23468, (Optr)&t_send1, (Optr)PSend23467, (Optr)&t_push_closure, (Optr)PBlock23469, (Optr)&t_send1, (Optr)PSend23466, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23473, (Optr)&t_method_return);
    Block PBlock23462 = new_Block_with(PArray23463, empty_Array, PThreadedCode23464, 2, PAssign23465, PSend23473);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23474 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23462);
    Array PThreadedCode23461 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23462, (Optr)&t_send1, (Optr)PSend23474, (Optr)&t_method_return);
    Method PMethod23459 = new_Method_with(empty_Array, PArray23460, empty_Array, PThreadedCode23461, 1, PSend23474);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23459, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23477 = new_Send((Optr)self, SMB_method, 0);
    String string_23478 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23478_Const = new_Constant((Optr)string_23478);
    // =. 
    Send PSend23479 = new_Send((Optr)PSend23477, SMB__equals_, 1, (Optr)string_23478_Const);
    Array PThreadedCode23476 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23477, (Optr)&t_push1, (Optr)string_23478, (Optr)&t_send1, (Optr)PSend23479, (Optr)&t_method_return);
    Method PMethod23475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23476, 1, PSend23479);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23475, WebClient_Core_WebRequest_Class);
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
    Array PArray23481 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23482 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23485 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23487 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23488 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23492 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23491 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23492, (Optr)&t_block_return);
    Block PBlock23490 = new_Block_with(empty_Array, empty_Array, PThreadedCode23491, 1, PSend23492);
    // ifTrue:. 
    Send PSend23489 = new_Send((Optr)PSend23488, SMB_ifTrue_, 1, (Optr)PBlock23490);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23495 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23494 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23495);
    Assign PAssign23493 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23494);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23498 = new_String(L" ");
    Constant string_23498_Const = new_Constant((Optr)string_23498);
    // findTokens:. 
    Send PSend23497 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23498_Const);
    Assign PAssign23496 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23497);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23499 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23500 = new_Send((Optr)PSend23499, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23504 = new_String(L"Invalid HTTP request: ");
    Constant string_23504_Const = new_Constant((Optr)string_23504);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23505 = new_Send((Optr)string_23504_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23506 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23505);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23507 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23506);
    Array PThreadedCode23503 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23504, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23505, (Optr)&t_send1, (Optr)PSend23506, (Optr)&t_send1, (Optr)PSend23507, (Optr)&t_block_return);
    Block PBlock23502 = new_Block_with(empty_Array, empty_Array, PThreadedCode23503, 1, PSend23507);
    // ifTrue:. 
    Send PSend23501 = new_Send((Optr)PSend23500, SMB_ifTrue_, 1, (Optr)PBlock23502);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23509 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23508 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23509);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23511 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23510 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23511);
    // size. 
    Send PSend23512 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23513 = new_Send((Optr)PSend23512, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23518 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23517 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23518);
    Array PThreadedCode23516 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23517, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23518, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23515 = new_Block_with(empty_Array, empty_Array, PThreadedCode23516, 1, PAssign23517);
    String string_23522 = new_String(L"HTTP/1.0");
    Constant string_23522_Const = new_Constant((Optr)string_23522);
    Assign PAssign23521 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23522_Const);
    Array PThreadedCode23520 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23521, (Optr)&t_push1, (Optr)string_23522, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23519 = new_Block_with(empty_Array, empty_Array, PThreadedCode23520, 1, PAssign23521);
    // ifTrue:ifFalse:. 
    Send PSend23514 = new_Send((Optr)PSend23513, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23515, (Optr)PBlock23519);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23524 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23523 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23524);
    Array PThreadedCode23486 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23487, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23488, (Optr)&t_send_ifTrue_, (Optr)PSend23489, (Optr)PBlock23490, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23493, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23495, (Optr)&t_send1, (Optr)PSend23494, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23496, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23498, (Optr)&t_send1, (Optr)PSend23497, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23499, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23500, (Optr)&t_send_ifTrue_, (Optr)PSend23501, (Optr)PBlock23502, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23508, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23509, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23510, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23511, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23512, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23513, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23514, (Optr)PBlock23515, (Optr)PBlock23519, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23523, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23524, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23484 = new_Block_with(PArray23485, empty_Array, PThreadedCode23486, 10, PAssign23487, PSend23489, PAssign23493, PAssign23496, PSend23501, PAssign23508, PAssign23510, PSend23514, PAssign23523, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23525 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23484);
    Array PThreadedCode23483 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23484, (Optr)&t_send1, (Optr)PSend23525, (Optr)&t_method_return);
    Method PMethod23480 = new_Method_with(PArray23481, PArray23482, empty_Array, PThreadedCode23483, 1, PSend23525);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23480, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23527 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23528 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23532 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23533 = new_String(L"HTTP/1.1");
    Constant string_23533_Const = new_Constant((Optr)string_23533);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23531 = new_Send((Optr)PSend23532, SMB_protocol_code_, 2, (Optr)string_23533_Const, (Optr)int_405_Const);
    Assign PAssign23530 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23531);
    String string_23534 = new_String(L"Content-Type");
    String string_23535 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23534_Const = new_Constant((Optr)string_23534);
    Constant string_23535_Const = new_Constant((Optr)string_23535);
    // headerAt:put:. 
    Send PSend23536 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23534_Const, (Optr)string_23535_Const);
    String string_23537 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23539 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23542 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23544 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23543 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23544, (Optr)&t_method_return);
    Block PBlock23541 = new_Block_with(PArray23542, empty_Array, PThreadedCode23543, 1, PSend23544);
    Character char_23547 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23547_Const = new_Constant((Optr)char_23547);
    // nextPut:. 
    Send PSend23548 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23547_Const);
    Array PThreadedCode23546 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23547, (Optr)&t_send1, (Optr)PSend23548, (Optr)&t_block_return);
    Block PBlock23545 = new_Block_with(empty_Array, empty_Array, PThreadedCode23546, 1, PSend23548);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23549 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23541, (Optr)PBlock23545);
    Array PThreadedCode23540 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23541, (Optr)&t_push_closure, (Optr)PBlock23545, (Optr)&t_send2, (Optr)PSend23549, (Optr)&t_method_return);
    Block PBlock23538 = new_Block_with(PArray23539, empty_Array, PThreadedCode23540, 1, PSend23549);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23550 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23538);
    Constant string_23537_Const = new_Constant((Optr)string_23537);
    // headerAt:put:. 
    Send PSend23551 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23537_Const, (Optr)PSend23550);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23552 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23529 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23530, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23532, (Optr)&t_push1, (Optr)string_23533, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23531, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23534, (Optr)&t_push1, (Optr)string_23535, (Optr)&t_send2, (Optr)PSend23536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23537, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23538, (Optr)&t_send1, (Optr)PSend23550, (Optr)&t_send2, (Optr)PSend23551, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23552, (Optr)&t_method_return);
    Method PMethod23526 = new_Method_with(PArray23527, PArray23528, empty_Array, PThreadedCode23529, 4, PAssign23530, PSend23536, PSend23551, PSend23552);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23526, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23554 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23557 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23558 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23556 = new_Block_with(PArray23557, empty_Array, PThreadedCode23558, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23559 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23556);
    Array PThreadedCode23555 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23556, (Optr)&t_send2, (Optr)PSend23559, (Optr)&t_method_return);
    Method PMethod23553 = new_Method_with(PArray23554, empty_Array, empty_Array, PThreadedCode23555, 1, PSend23559);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23553, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23561 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23562 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23566 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23567 = new_String(L"HTTP/1.1");
    Constant string_23567_Const = new_Constant((Optr)string_23567);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23565 = new_Send((Optr)PSend23566, SMB_protocol_code_, 2, (Optr)string_23567_Const, (Optr)int_200_Const);
    Assign PAssign23564 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23565);
    String string_23568 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23568_Const = new_Constant((Optr)string_23568);
    // headerAt:put:. 
    Send PSend23569 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23568_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23570 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23571 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23563 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23564, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23566, (Optr)&t_push1, (Optr)string_23567, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23565, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23568, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23569, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23570, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23571, (Optr)&t_method_return);
    Method PMethod23560 = new_Method_with(PArray23561, PArray23562, empty_Array, PThreadedCode23563, 4, PAssign23564, PSend23569, PSend23570, PSend23571);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23560, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23573 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23575 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23575_Const = new_Constant((Optr)string_23575);
    // send200Response:contentType:. 
    Send PSend23576 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23575_Const);
    Array PThreadedCode23574 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23575, (Optr)&t_send2, (Optr)PSend23576, (Optr)&t_method_return);
    Method PMethod23572 = new_Method_with(PArray23573, empty_Array, empty_Array, PThreadedCode23574, 1, PSend23576);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23572, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper23579 = new_Super(SMB_initialize, 0);
    String string_23581 = new_String(L"GET");
    Constant string_23581_Const = new_Constant((Optr)string_23581);
    Assign PAssign23580 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23581_Const);
    String string_23583 = new_String(L"HTTP/1.1");
    Constant string_23583_Const = new_Constant((Optr)string_23583);
    Assign PAssign23582 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23583_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23585 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23584 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23585);
    Array PThreadedCode23578 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23579, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23580, (Optr)&t_push1, (Optr)string_23581, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23582, (Optr)&t_push1, (Optr)string_23583, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23584, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23585, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23578, 5, PSuper23579, PAssign23580, PAssign23582, PAssign23584, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23577, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23588 = new_Send((Optr)self, SMB_method, 0);
    String string_23589 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23589_Const = new_Constant((Optr)string_23589);
    // =. 
    Send PSend23590 = new_Send((Optr)PSend23588, SMB__equals_, 1, (Optr)string_23589_Const);
    Array PThreadedCode23587 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23588, (Optr)&t_push1, (Optr)string_23589, (Optr)&t_send1, (Optr)PSend23590, (Optr)&t_method_return);
    Method PMethod23586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23587, 1, PSend23590);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod23586, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23592 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23594 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23593 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23594, (Optr)&t_method_return);
    Method PMethod23591 = new_Method_with(PArray23592, empty_Array, empty_Array, PThreadedCode23593, 1, PSend23594);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod23591, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23596 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23600 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23600_Const = new_Constant((Optr)string_23600);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23601 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23601_Const = new_Constant((Optr)string_23601);
    // ,. 
    Send PSend23599 = new_Send((Optr)string_23600_Const, SMB__append_, 1, (Optr)string_23601_Const);
    Assign PAssign23598 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23599);
    SmallInt int_400 = new_SmallInt(400);
    String string_23602 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23602_Const = new_Constant((Optr)string_23602);
    // sendResponseCode:content:type:close:. 
    Send PSend23603 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23602_Const, (Optr)true_Const);
    Array PThreadedCode23597 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23598, (Optr)&t_push1, (Optr)string_23600, (Optr)&t_push1, (Optr)string_23601, (Optr)&t_send1, (Optr)PSend23599, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23602, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23603, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23595 = new_Method_with(empty_Array, PArray23596, empty_Array, PThreadedCode23597, 3, PAssign23598, PSend23603, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23595, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23607 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23609 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23610 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23608 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23609, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23610, (Optr)&t_method_return);
    Block PBlock23606 = new_Block_with(PArray23607, empty_Array, PThreadedCode23608, 2, PSend23609, PSend23610);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23611 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23612 = new_Send((Optr)PBlock23606, SMB_value_, 1, (Optr)PSend23611);
    Array PThreadedCode23605 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23606, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23611, (Optr)&t_send1, (Optr)PSend23612, (Optr)&t_method_return);
    Method PMethod23604 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23605, 1, PSend23612);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23604, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23615 = new_Send((Optr)self, SMB_method, 0);
    String string_23616 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23616_Const = new_Constant((Optr)string_23616);
    // =. 
    Send PSend23617 = new_Send((Optr)PSend23615, SMB__equals_, 1, (Optr)string_23616_Const);
    Array PThreadedCode23614 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23615, (Optr)&t_push1, (Optr)string_23616, (Optr)&t_send1, (Optr)PSend23617, (Optr)&t_method_return);
    Method PMethod23613 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23614, 1, PSend23617);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23613, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray23619 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23622 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23624 = new_String(L"Content-Type");
    String string_23625 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23624_Const = new_Constant((Optr)string_23624);
    Constant string_23625_Const = new_Constant((Optr)string_23625);
    // headerAt:put:. 
    Send PSend23626 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23624_Const, (Optr)string_23625_Const);
    Array PThreadedCode23623 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23624, (Optr)&t_push1, (Optr)string_23625, (Optr)&t_send2, (Optr)PSend23626, (Optr)&t_method_return);
    Block PBlock23621 = new_Block_with(PArray23622, empty_Array, PThreadedCode23623, 1, PSend23626);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend23627 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock23621);
    Array PThreadedCode23620 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock23621, (Optr)&t_send2, (Optr)PSend23627, (Optr)&t_method_return);
    Method PMethod23618 = new_Method_with(PArray23619, empty_Array, empty_Array, PThreadedCode23620, 1, PSend23627);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod23618, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23629 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23632 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23631 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23632);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend23633 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray23635 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23637 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23637, (Optr)&t_method_return);
    Block PBlock23634 = new_Block_with(PArray23635, empty_Array, PThreadedCode23636, 1, PSend23637);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend23638 = new_Send((Optr)PSend23633, SMB_associationsDo_, 1, (Optr)PBlock23634);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend23639 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray23641 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23643 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23642 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23643, (Optr)&t_method_return);
    Block PBlock23640 = new_Block_with(PArray23641, empty_Array, PThreadedCode23642, 1, PSend23643);
    // associationsDo:. 
    Send PSend23644 = new_Send((Optr)PSend23639, SMB_associationsDo_, 1, (Optr)PBlock23640);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend23645 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray23647 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23649 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23648 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23649, (Optr)&t_method_return);
    Block PBlock23646 = new_Block_with(PArray23647, empty_Array, PThreadedCode23648, 1, PSend23649);
    // associationsDo:. 
    Send PSend23650 = new_Send((Optr)PSend23645, SMB_associationsDo_, 1, (Optr)PBlock23646);
    Array PThreadedCode23630 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23631, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23632, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23633, (Optr)&t_push_closure, (Optr)PBlock23634, (Optr)&t_send1, (Optr)PSend23638, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23639, (Optr)&t_push_closure, (Optr)PBlock23640, (Optr)&t_send1, (Optr)PSend23644, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23645, (Optr)&t_push_closure, (Optr)PBlock23646, (Optr)&t_send1, (Optr)PSend23650, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23628 = new_Method_with(empty_Array, PArray23629, empty_Array, PThreadedCode23630, 5, PAssign23631, PSend23638, PSend23644, PSend23650, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod23628, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_23653 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23654 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_23653_Const = new_Constant((Optr)string_23653);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23655 = new_Send((Optr)string_23653_Const, SMB__append_, 1, (Optr)PSend23654);
    String string_23656 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_23656_Const = new_Constant((Optr)string_23656);
    // ,. 
    Send PSend23657 = new_Send((Optr)PSend23655, SMB__append_, 1, (Optr)string_23656_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend23658 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend23657);
    Array PThreadedCode23652 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23653, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23654, (Optr)&t_send1, (Optr)PSend23655, (Optr)&t_push1, (Optr)string_23656, (Optr)&t_send1, (Optr)PSend23657, (Optr)&t_send1, (Optr)PSend23658, (Optr)&t_method_return);
    Method PMethod23651 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23652, 1, PSend23658);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod23651, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23661 = new_Send((Optr)self, SMB_method, 0);
    String string_23662 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23662_Const = new_Constant((Optr)string_23662);
    // =. 
    Send PSend23663 = new_Send((Optr)PSend23661, SMB__equals_, 1, (Optr)string_23662_Const);
    Array PThreadedCode23660 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23661, (Optr)&t_push1, (Optr)string_23662, (Optr)&t_send1, (Optr)PSend23663, (Optr)&t_method_return);
    Method PMethod23659 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23660, 1, PSend23663);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod23659, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23665 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend23667 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23666 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23667, (Optr)&t_method_return);
    Method PMethod23664 = new_Method_with(PArray23665, empty_Array, empty_Array, PThreadedCode23666, 1, PSend23667);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod23664, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray23669 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23672 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23673 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23671 = new_Block_with(PArray23672, empty_Array, PThreadedCode23673, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend23674 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock23671);
    Array PThreadedCode23670 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock23671, (Optr)&t_send3, (Optr)PSend23674, (Optr)&t_method_return);
    Method PMethod23668 = new_Method_with(PArray23669, empty_Array, empty_Array, PThreadedCode23670, 1, PSend23674);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod23668, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23676 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23679 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23678 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23679);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray23681 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_23683 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray23685 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23687 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode23686 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend23687, (Optr)&t_method_return);
    Block PBlock23684 = new_Block_with(PArray23685, empty_Array, PThreadedCode23686, 1, PSend23687);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_23683_Const = new_Constant((Optr)string_23683);
    // at:ifPresent:. 
    Send PSend23688 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_23683_Const, (Optr)PBlock23684);
    Array PThreadedCode23682 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_23683, (Optr)&t_push_closure, (Optr)PBlock23684, (Optr)&t_send2, (Optr)PSend23688, (Optr)&t_method_return);
    Block PBlock23680 = new_Block_with(PArray23681, empty_Array, PThreadedCode23682, 1, PSend23688);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend23689 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock23680);
    Array PThreadedCode23677 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign23678, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23679, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23680, (Optr)&t_send1, (Optr)PSend23689, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23675 = new_Method_with(empty_Array, PArray23676, empty_Array, PThreadedCode23677, 3, PAssign23678, PSend23689, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod23675, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray23691 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23692 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23696 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23697 = new_String(L"HTTP/1.1");
    Constant string_23697_Const = new_Constant((Optr)string_23697);
    // protocol:code:. 
    Send PSend23695 = new_Send((Optr)PSend23696, SMB_protocol_code_, 2, (Optr)string_23697_Const, (Optr)VAR_code_0_0);
    Assign PAssign23694 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23695);
    String string_23698 = new_String(L"Transfer-Encoding");
    String string_23699 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23698_Const = new_Constant((Optr)string_23698);
    Constant string_23699_Const = new_Constant((Optr)string_23699);
    // headerAt:put:. 
    Send PSend23700 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23698_Const, (Optr)string_23699_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23701 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray23703 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend23705 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend23706 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23708 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23710 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23710_Const = new_Constant((Optr)string_23710);
    // nextPutAll:. 
    Send PSend23711 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_23710_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23712 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend23713 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23714 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode23709 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_23710, (Optr)&t_send1, (Optr)PSend23711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23712, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23713, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23714, (Optr)&t_method_return);
    Block PBlock23707 = new_Block_with(PArray23708, empty_Array, PThreadedCode23709, 4, PSend23711, PSend23712, PSend23713, PSend23714);
    // value:. 
    Send PSend23715 = new_Send((Optr)PBlock23707, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode23704 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23705, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23706, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23707, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23715, (Optr)&t_method_return);
    Block PBlock23702 = new_Block_with(PArray23703, empty_Array, PThreadedCode23704, 3, PSend23705, PSend23706, PSend23715);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23716 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock23702);
    Array PThreadedCode23693 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23694, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23696, (Optr)&t_push1, (Optr)string_23697, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23695, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23698, (Optr)&t_push1, (Optr)string_23699, (Optr)&t_send2, (Optr)PSend23700, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23701, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock23702, (Optr)&t_send2, (Optr)PSend23716, (Optr)&t_method_return);
    Method PMethod23690 = new_Method_with(PArray23691, PArray23692, empty_Array, PThreadedCode23693, 4, PAssign23694, PSend23700, PSend23701, PSend23716);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod23690, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray23718 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_23722 = new_String(L"Connection");
    String string_23723 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23722_Const = new_Constant((Optr)string_23722);
    Constant string_23723_Const = new_Constant((Optr)string_23723);
    // headerAt:put:. 
    Send PSend23724 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23722_Const, (Optr)string_23723_Const);
    Array PThreadedCode23721 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23722, (Optr)&t_push1, (Optr)string_23723, (Optr)&t_send2, (Optr)PSend23724, (Optr)&t_block_return);
    Block PBlock23720 = new_Block_with(empty_Array, empty_Array, PThreadedCode23721, 1, PSend23724);
    String string_23727 = new_String(L"Content-Length");
    Constant string_23727_Const = new_Constant((Optr)string_23727);
    // headerAt:put:. 
    Send PSend23728 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23727_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode23726 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23727, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend23728, (Optr)&t_block_return);
    Block PBlock23725 = new_Block_with(empty_Array, empty_Array, PThreadedCode23726, 1, PSend23728);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23729 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23720, (Optr)PBlock23725);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray23731 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23733 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode23732 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23733, (Optr)&t_method_return);
    Block PBlock23730 = new_Block_with(PArray23731, empty_Array, PThreadedCode23732, 1, PSend23733);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23734 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23730);
    Array PThreadedCode23719 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock23720, (Optr)&t_push_closure, (Optr)PBlock23725, (Optr)&t_send2, (Optr)PSend23729, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23730, (Optr)&t_send2, (Optr)PSend23734, (Optr)&t_method_return);
    Method PMethod23717 = new_Method_with(PArray23718, empty_Array, empty_Array, PThreadedCode23719, 2, PSend23729, PSend23734);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod23717, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray23736 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign23738 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode23737 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23738, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23735 = new_Method_with(PArray23736, empty_Array, empty_Array, PThreadedCode23737, 2, PAssign23738, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod23735, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23740 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23741 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23745 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23746 = new_String(L"HTTP/1.1");
    Constant string_23746_Const = new_Constant((Optr)string_23746);
    // protocol:code:. 
    Send PSend23744 = new_Send((Optr)PSend23745, SMB_protocol_code_, 2, (Optr)string_23746_Const, (Optr)VAR_code_0_0);
    Assign PAssign23743 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23744);
    String string_23749 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23749_Const = new_Constant((Optr)string_23749);
    // headerAt:put:. 
    Send PSend23750 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23749_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode23748 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23749, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23750, (Optr)&t_block_return);
    Block PBlock23747 = new_Block_with(empty_Array, empty_Array, PThreadedCode23748, 1, PSend23750);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23751 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23747);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23752 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23753 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode23742 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23743, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23745, (Optr)&t_push1, (Optr)string_23746, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23744, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23747, (Optr)&t_send1, (Optr)PSend23751, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23752, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend23753, (Optr)&t_method_return);
    Method PMethod23739 = new_Method_with(PArray23740, PArray23741, empty_Array, PThreadedCode23742, 4, PAssign23743, PSend23751, PSend23752, PSend23753);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod23739, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23755 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend23757 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23756 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23757, (Optr)&t_method_return);
    Method PMethod23754 = new_Method_with(PArray23755, empty_Array, empty_Array, PThreadedCode23756, 1, PSend23757);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod23754, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23759 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray23760 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23764 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23763 = new_Send((Optr)PSend23764, SMB_not, 0);
    Assign PAssign23762 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend23763);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_23768 = new_String(L"Connection");
    String string_23769 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23768_Const = new_Constant((Optr)string_23768);
    Constant string_23769_Const = new_Constant((Optr)string_23769);
    // headerAt:put:. 
    Send PSend23770 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23768_Const, (Optr)string_23769_Const);
    Array PThreadedCode23767 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23768, (Optr)&t_push1, (Optr)string_23769, (Optr)&t_send2, (Optr)PSend23770, (Optr)&t_block_return);
    Block PBlock23766 = new_Block_with(empty_Array, empty_Array, PThreadedCode23767, 1, PSend23770);
    // ifTrue:. 
    Send PSend23765 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23766);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23771 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23772 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23776 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23775 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23776, (Optr)&t_block_return);
    Block PBlock23774 = new_Block_with(empty_Array, empty_Array, PThreadedCode23775, 1, PSend23776);
    // ifTrue:. 
    Send PSend23773 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23774);
    Array PThreadedCode23761 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign23762, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23764, (Optr)&t_send0, (Optr)PSend23763, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23765, (Optr)PBlock23766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23771, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23772, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23773, (Optr)PBlock23774, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23758 = new_Method_with(PArray23759, PArray23760, empty_Array, PThreadedCode23761, 6, PAssign23762, PSend23765, PSend23771, PSend23772, PSend23773, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod23758, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23778 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23780 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23780_Const = new_Constant((Optr)string_23780);
    // send200Response:contentType:. 
    Send PSend23781 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_23780_Const);
    Array PThreadedCode23779 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_23780, (Optr)&t_send2, (Optr)PSend23781, (Optr)&t_method_return);
    Method PMethod23777 = new_Method_with(PArray23778, empty_Array, empty_Array, PThreadedCode23779, 1, PSend23781);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod23777, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23784 = new_Send((Optr)self, SMB_method, 0);
    String string_23785 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23785_Const = new_Constant((Optr)string_23785);
    // =. 
    Send PSend23786 = new_Send((Optr)PSend23784, SMB__equals_, 1, (Optr)string_23785_Const);
    Array PThreadedCode23783 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23784, (Optr)&t_push1, (Optr)string_23785, (Optr)&t_send1, (Optr)PSend23786, (Optr)&t_method_return);
    Method PMethod23782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23783, 1, PSend23786);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod23782, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray23788 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23791 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23792 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23790 = new_Block_with(PArray23791, empty_Array, PThreadedCode23792, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend23793 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock23790);
    Array PThreadedCode23789 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock23790, (Optr)&t_send3, (Optr)PSend23793, (Optr)&t_method_return);
    Method PMethod23787 = new_Method_with(PArray23788, empty_Array, empty_Array, PThreadedCode23789, 1, PSend23793);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod23787, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray23795 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_23797 = new_String(L"Date");
    Array PThreadedCode23799 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23798 = new_Block_with(empty_Array, empty_Array, PThreadedCode23799, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23800 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23798);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend23801 = new_Send((Optr)PSend23800, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23797_Const = new_Constant((Optr)string_23797);
    // headerAt:put:. 
    Send PSend23802 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23797_Const, (Optr)PSend23801);
    String string_23803 = new_String(L"Server");
    Array PThreadedCode23805 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23804 = new_Block_with(empty_Array, empty_Array, PThreadedCode23805, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend23806 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23804);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend23807 = new_Send((Optr)PSend23806, SMB_serverString, 0);
    Constant string_23803_Const = new_Constant((Optr)string_23803);
    // headerAt:put:. 
    Send PSend23808 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23803_Const, (Optr)PSend23807);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23813 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23814 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend23815 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23819 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode23818 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23819, (Optr)&t_block_return);
    Block PBlock23817 = new_Block_with(empty_Array, empty_Array, PThreadedCode23818, 1, PSend23819);
    // ifFalse:. 
    Send PSend23816 = new_Send((Optr)PSend23815, SMB_ifFalse_, 1, (Optr)PBlock23817);
    Array PThreadedCode23812 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23813, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23814, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23815, (Optr)&t_send_ifFalse_, (Optr)PSend23816, (Optr)PBlock23817, (Optr)&t_block_return);
    Block PBlock23811 = new_Block_with(empty_Array, empty_Array, PThreadedCode23812, 3, PSend23813, PSend23814, PSend23816);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray23821 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode23822 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23820 = new_Block_with(PArray23821, empty_Array, PThreadedCode23822, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23823 = new_Send((Optr)PBlock23811, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock23820);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend23826 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode23825 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend23826, (Optr)&t_block_return);
    Block PBlock23824 = new_Block_with(empty_Array, empty_Array, PThreadedCode23825, 1, PSend23826);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23827 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock23824);
    Array PThreadedCode23810 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock23811, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock23820, (Optr)&t_send2, (Optr)PSend23823, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23824, (Optr)&t_send1, (Optr)PSend23827, (Optr)&t_block_return);
    Block PBlock23809 = new_Block_with(empty_Array, empty_Array, PThreadedCode23810, 2, PSend23823, PSend23827);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend23828 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23809);
    Array PThreadedCode23796 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23797, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23798, (Optr)&t_send1, (Optr)PSend23800, (Optr)&t_send0, (Optr)PSend23801, (Optr)&t_send2, (Optr)PSend23802, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23803, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23804, (Optr)&t_send1, (Optr)PSend23806, (Optr)&t_send0, (Optr)PSend23807, (Optr)&t_send2, (Optr)PSend23808, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23809, (Optr)&t_send2, (Optr)PSend23828, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23794 = new_Method_with(PArray23795, empty_Array, empty_Array, PThreadedCode23796, 4, PSend23802, PSend23808, PSend23828, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod23794, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode23830 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod23829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23830, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod23829, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray23832 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_23834 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_23834_Const = new_Constant((Optr)string_23834);
    // stream200Response:size:type:. 
    Send PSend23835 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_23834_Const);
    Array PThreadedCode23833 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_23834, (Optr)&t_send3, (Optr)PSend23835, (Optr)&t_method_return);
    Method PMethod23831 = new_Method_with(PArray23832, empty_Array, empty_Array, PThreadedCode23833, 1, PSend23835);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod23831, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23837 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23840 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23841 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23839 = new_Block_with(PArray23840, empty_Array, PThreadedCode23841, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend23842 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23839);
    Array PThreadedCode23838 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23839, (Optr)&t_send2, (Optr)PSend23842, (Optr)&t_method_return);
    Method PMethod23836 = new_Method_with(PArray23837, empty_Array, empty_Array, PThreadedCode23838, 1, PSend23842);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod23836, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23844 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray23845 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign23847 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_23848 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23848_Const = new_Constant((Optr)string_23848);
    // findString:. 
    Send PSend23849 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_23848_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend23850 = new_Send((Optr)PSend23849, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23854 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23854_Const = new_Constant((Optr)string_23854);
    // headerAt:. 
    Send PSend23855 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23854_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray23857 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_23862 = new_String(L"http://");
    Constant string_23862_Const = new_Constant((Optr)string_23862);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23861 = new_Send((Optr)string_23862_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend23860 = new_Send((Optr)PSend23861, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign23859 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend23860);
    Array PThreadedCode23858 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign23859, (Optr)&t_push1, (Optr)string_23862, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend23861, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend23860, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23856 = new_Block_with(PArray23857, empty_Array, PThreadedCode23858, 1, PAssign23859);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23863 = new_Send((Optr)PSend23855, SMB_ifNotEmpty_, 1, (Optr)PBlock23856);
    Array PThreadedCode23853 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23854, (Optr)&t_send1, (Optr)PSend23855, (Optr)&t_push_closure, (Optr)PBlock23856, (Optr)&t_send1, (Optr)PSend23863, (Optr)&t_block_return);
    Block PBlock23852 = new_Block_with(empty_Array, empty_Array, PThreadedCode23853, 1, PSend23863);
    // ifFalse:. 
    Send PSend23851 = new_Send((Optr)PSend23850, SMB_ifFalse_, 1, (Optr)PBlock23852);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23866 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23867 = new_String(L"HTTP/1.1");
    Constant string_23867_Const = new_Constant((Optr)string_23867);
    // protocol:code:. 
    Send PSend23865 = new_Send((Optr)PSend23866, SMB_protocol_code_, 2, (Optr)string_23867_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign23864 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23865);
    String string_23868 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23868_Const = new_Constant((Optr)string_23868);
    // headerAt:put:. 
    Send PSend23869 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23868_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23870 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_23871 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_23871_Const = new_Constant((Optr)string_23871);
    // sendResponse:content:. 
    Send PSend23872 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_23871_Const);
    Array PThreadedCode23846 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23847, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_23848, (Optr)&t_send1, (Optr)PSend23849, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23850, (Optr)&t_send_ifFalse_, (Optr)PSend23851, (Optr)PBlock23852, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23864, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23866, (Optr)&t_push1, (Optr)string_23867, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend23865, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23868, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend23869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23870, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23871, (Optr)&t_send2, (Optr)PSend23872, (Optr)&t_method_return);
    Method PMethod23843 = new_Method_with(PArray23844, PArray23845, empty_Array, PThreadedCode23846, 6, PAssign23847, PSend23851, PAssign23864, PSend23869, PSend23870, PSend23872);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod23843, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23875 = new_Send((Optr)self, SMB_method, 0);
    String string_23876 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23876_Const = new_Constant((Optr)string_23876);
    // =. 
    Send PSend23877 = new_Send((Optr)PSend23875, SMB__equals_, 1, (Optr)string_23876_Const);
    Array PThreadedCode23874 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23875, (Optr)&t_push1, (Optr)string_23876, (Optr)&t_send1, (Optr)PSend23877, (Optr)&t_method_return);
    Method PMethod23873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23874, 1, PSend23877);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod23873, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23879 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23882 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23884 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23885 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23886 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend23887 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23888 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23889 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode23883 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend23884, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23885, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend23886, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23887, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend23888, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23889, (Optr)&t_method_return);
    Block PBlock23881 = new_Block_with(PArray23882, empty_Array, PThreadedCode23883, 6, PSend23884, PSend23885, PSend23886, PSend23887, PSend23888, PSend23889);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23890 = new_Send((Optr)PBlock23881, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23880 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23881, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23890, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23878 = new_Method_with(PArray23879, empty_Array, empty_Array, PThreadedCode23880, 2, PSend23890, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod23878, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23892 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23894 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23895 = new_Send((Optr)self, SMB_method, 0);
    Constant string_23894_Const = new_Constant((Optr)string_23894);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23896 = new_Send((Optr)string_23894_Const, SMB__append_, 1, (Optr)PSend23895);
    String string_23897 = new_String(L" is not allowed for the URL");
    Constant string_23897_Const = new_Constant((Optr)string_23897);
    // ,. 
    Send PSend23898 = new_Send((Optr)PSend23896, SMB__append_, 1, (Optr)string_23897_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23899 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23900 = new_Send((Optr)PSend23898, SMB__append_, 1, (Optr)PSend23899);
    String string_23901 = new_String(L"</p></body></html>");
    Constant string_23901_Const = new_Constant((Optr)string_23901);
    // ,. 
    Send PSend23902 = new_Send((Optr)PSend23900, SMB__append_, 1, (Optr)string_23901_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend23903 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend23902);
    Array PThreadedCode23893 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_23894, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23895, (Optr)&t_send1, (Optr)PSend23896, (Optr)&t_push1, (Optr)string_23897, (Optr)&t_send1, (Optr)PSend23898, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23899, (Optr)&t_send1, (Optr)PSend23900, (Optr)&t_push1, (Optr)string_23901, (Optr)&t_send1, (Optr)PSend23902, (Optr)&t_send2, (Optr)PSend23903, (Optr)&t_method_return);
    Method PMethod23891 = new_Method_with(PArray23892, empty_Array, empty_Array, PThreadedCode23893, 1, PSend23903);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod23891, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray23905 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray23906 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_23912 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23912_Const = new_Constant((Optr)string_23912);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23913 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_23913_Const = new_Constant((Optr)string_23913);
    // ,. 
    Send PSend23911 = new_Send((Optr)string_23912_Const, SMB__append_, 1, (Optr)string_23913_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23915 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23916 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23914 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23915, (Optr)PSend23916);
    // ,. 
    Send PSend23910 = new_Send((Optr)PSend23911, SMB__append_, 1, (Optr)PSend23914);
    String string_23917 = new_String(L"</pre></body></html>");
    Constant string_23917_Const = new_Constant((Optr)string_23917);
    // ,. 
    Send PSend23909 = new_Send((Optr)PSend23910, SMB__append_, 1, (Optr)string_23917_Const);
    Assign PAssign23908 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend23909);
    SmallInt int_500 = new_SmallInt(500);
    String string_23918 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23918_Const = new_Constant((Optr)string_23918);
    // sendResponseCode:content:type:close:. 
    Send PSend23919 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_23918_Const, (Optr)true_Const);
    Array PThreadedCode23907 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23908, (Optr)&t_push1, (Optr)string_23912, (Optr)&t_push1, (Optr)string_23913, (Optr)&t_send1, (Optr)PSend23911, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23915, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23916, (Optr)&t_send2, (Optr)PSend23914, (Optr)&t_send1, (Optr)PSend23910, (Optr)&t_push1, (Optr)string_23917, (Optr)&t_send1, (Optr)PSend23909, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_23918, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23919, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23904 = new_Method_with(PArray23905, PArray23906, empty_Array, PThreadedCode23907, 3, PAssign23908, PSend23919, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod23904, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23921 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23923 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode23922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23923, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23920 = new_Method_with(PArray23921, empty_Array, empty_Array, PThreadedCode23922, 2, PAssign23923, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod23920, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23928 = new_Send((Optr)self, SMB_method, 0);
    String string_23929 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23929_Const = new_Constant((Optr)string_23929);
    // ,. 
    Send PSend23930 = new_Send((Optr)PSend23928, SMB__append_, 1, (Optr)string_23929_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23931 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23932 = new_Send((Optr)PSend23930, SMB__append_, 1, (Optr)PSend23931);
    String string_23933 = new_String(L" ");
    Constant string_23933_Const = new_Constant((Optr)string_23933);
    // ,. 
    Send PSend23934 = new_Send((Optr)PSend23932, SMB__append_, 1, (Optr)string_23933_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23935 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend23936 = new_Send((Optr)PSend23934, SMB__append_, 1, (Optr)PSend23935);
    Array PThreadedCode23927 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23928, (Optr)&t_push1, (Optr)string_23929, (Optr)&t_send1, (Optr)PSend23930, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23931, (Optr)&t_send1, (Optr)PSend23932, (Optr)&t_push1, (Optr)string_23933, (Optr)&t_send1, (Optr)PSend23934, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23935, (Optr)&t_send1, (Optr)PSend23936, (Optr)&t_block_return);
    Block PBlock23926 = new_Block_with(empty_Array, empty_Array, PThreadedCode23927, 1, PSend23936);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23937 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock23926);
    Array PThreadedCode23925 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock23926, (Optr)&t_send1, (Optr)PSend23937, (Optr)&t_method_return);
    Method PMethod23924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23925, 1, PSend23937);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod23924, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray23939 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23942 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23943 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23941 = new_Block_with(PArray23942, empty_Array, PThreadedCode23943, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend23944 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock23941);
    Array PThreadedCode23940 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock23941, (Optr)&t_send3, (Optr)PSend23944, (Optr)&t_method_return);
    Method PMethod23938 = new_Method_with(PArray23939, empty_Array, empty_Array, PThreadedCode23940, 1, PSend23944);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod23938, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23946 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23948 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23951 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23952 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23952_Const = new_Constant((Optr)string_23952);
    // beginsWith:. 
    Send PSend23953 = new_Send((Optr)PSend23951, SMB_beginsWith_, 1, (Optr)string_23952_Const);
    Array PThreadedCode23950 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23951, (Optr)&t_push1, (Optr)string_23952, (Optr)&t_send1, (Optr)PSend23953, (Optr)&t_block_return);
    Block PBlock23949 = new_Block_with(empty_Array, empty_Array, PThreadedCode23950, 1, PSend23953);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23954 = new_Send((Optr)PSend23948, SMB_and_, 1, (Optr)PBlock23949);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23958 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23959 = new_Send((Optr)PSend23958, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend23960 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend23961 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend23959, (Optr)PSend23960, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23957 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23958, (Optr)&t_send0, (Optr)PSend23959, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23960, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend23961, (Optr)&t_block_return);
    Block PBlock23956 = new_Block_with(empty_Array, empty_Array, PThreadedCode23957, 1, PSend23961);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23964 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23963 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23964, (Optr)&t_block_return);
    Block PBlock23962 = new_Block_with(empty_Array, empty_Array, PThreadedCode23963, 1, PSend23964);
    // ifTrue:ifFalse:. 
    Send PSend23955 = new_Send((Optr)PSend23954, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23956, (Optr)PBlock23962);
    Array PThreadedCode23947 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23948, (Optr)&t_push_closure, (Optr)PBlock23949, (Optr)&t_send1, (Optr)PSend23954, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23955, (Optr)PBlock23956, (Optr)PBlock23962, (Optr)&t_method_return);
    Method PMethod23945 = new_Method_with(PArray23946, empty_Array, empty_Array, PThreadedCode23947, 1, PSend23955);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod23945, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23967 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23970 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23971 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23971_Const = new_Constant((Optr)string_23971);
    // =. 
    Send PSend23972 = new_Send((Optr)PSend23970, SMB__equals_, 1, (Optr)string_23971_Const);
    Array PThreadedCode23969 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23970, (Optr)&t_push1, (Optr)string_23971, (Optr)&t_send1, (Optr)PSend23972, (Optr)&t_block_return);
    Block PBlock23968 = new_Block_with(empty_Array, empty_Array, PThreadedCode23969, 1, PSend23972);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23973 = new_Send((Optr)PSend23967, SMB_and_, 1, (Optr)PBlock23968);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23977 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23978 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend23977, (Optr)true_Const);
    Array PThreadedCode23976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23977, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend23978, (Optr)&t_block_return);
    Block PBlock23975 = new_Block_with(empty_Array, empty_Array, PThreadedCode23976, 1, PSend23978);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23981 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23980 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23981, (Optr)&t_block_return);
    Block PBlock23979 = new_Block_with(empty_Array, empty_Array, PThreadedCode23980, 1, PSend23981);
    // ifTrue:ifFalse:. 
    Send PSend23974 = new_Send((Optr)PSend23973, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23975, (Optr)PBlock23979);
    Array PThreadedCode23966 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23967, (Optr)&t_push_closure, (Optr)PBlock23968, (Optr)&t_send1, (Optr)PSend23973, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23974, (Optr)PBlock23975, (Optr)PBlock23979, (Optr)&t_method_return);
    Method PMethod23965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23966, 1, PSend23974);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod23965, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23983 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23985 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend23986 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend23985);
    Array PThreadedCode23984 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23985, (Optr)&t_send2, (Optr)PSend23986, (Optr)&t_method_return);
    Method PMethod23982 = new_Method_with(PArray23983, empty_Array, empty_Array, PThreadedCode23984, 1, PSend23986);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod23982, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23988 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23990 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode23989 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23990, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23987 = new_Method_with(PArray23988, empty_Array, empty_Array, PThreadedCode23989, 2, PAssign23990, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod23987, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray23992 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23994 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23995 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23996 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend23994, (Optr)PSend23995);
    Array PThreadedCode23993 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend23994, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend23995, (Optr)&t_send3, (Optr)PSend23996, (Optr)&t_method_return);
    Method PMethod23991 = new_Method_with(PArray23992, empty_Array, empty_Array, PThreadedCode23993, 1, PSend23996);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod23991, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23998 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24000 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24001 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23999 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24000, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24001, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23997 = new_Method_with(PArray23998, empty_Array, empty_Array, PThreadedCode23999, 3, PSend24000, PSuper24001, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23997, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24003 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24004 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24008 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24009 = new_String(L"HTTP/1.1");
    Constant string_24009_Const = new_Constant((Optr)string_24009);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24007 = new_Send((Optr)PSend24008, SMB_protocol_code_, 2, (Optr)string_24009_Const, (Optr)int_200_Const);
    Assign PAssign24006 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24007);
    String string_24010 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24010_Const = new_Constant((Optr)string_24010);
    // headerAt:put:. 
    Send PSend24011 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24010_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24012 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24013 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode24005 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24006, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24008, (Optr)&t_push1, (Optr)string_24009, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24007, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24010, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend24011, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24012, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend24013, (Optr)&t_method_return);
    Method PMethod24002 = new_Method_with(PArray24003, PArray24004, empty_Array, PThreadedCode24005, 4, PAssign24006, PSend24011, PSend24012, PSend24013);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod24002, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode24015 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24014 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24015, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24014, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2656 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // copyUpTo:. 
    Send PSend24018 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2656_Const);
    Character char_23468 = new_Character(L'?');
    Constant char_23468_Const = new_Constant((Optr)char_23468);
    // copyUpTo:. 
    Send PSend24019 = new_Send((Optr)PSend24018, SMB_copyUpTo_, 1, (Optr)char_23468_Const);
    Array PThreadedCode24017 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend24018, (Optr)&t_push1, (Optr)char_23468, (Optr)&t_send1, (Optr)PSend24019, (Optr)&t_method_return);
    Method PMethod24016 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24017, 1, PSend24019);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24016, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24021 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24022 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24026 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24027 = new_String(L"HTTP/1.1");
    Constant string_24027_Const = new_Constant((Optr)string_24027);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24025 = new_Send((Optr)PSend24026, SMB_protocol_code_, 2, (Optr)string_24027_Const, (Optr)int_404_Const);
    Assign PAssign24024 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24025);
    String string_24028 = new_String(L"Content-Type");
    String string_24029 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24028_Const = new_Constant((Optr)string_24028);
    Constant string_24029_Const = new_Constant((Optr)string_24029);
    // headerAt:put:. 
    Send PSend24030 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24028_Const, (Optr)string_24029_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24031 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24032 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24023 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24024, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24026, (Optr)&t_push1, (Optr)string_24027, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24025, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24028, (Optr)&t_push1, (Optr)string_24029, (Optr)&t_send2, (Optr)PSend24030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24031, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24032, (Optr)&t_method_return);
    Method PMethod24020 = new_Method_with(PArray24021, PArray24022, empty_Array, PThreadedCode24023, 4, PAssign24024, PSend24030, PSend24031, PSend24032);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24020, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray24034 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24037 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24038 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24036 = new_Block_with(PArray24037, empty_Array, PThreadedCode24038, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend24039 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24036);
    Array PThreadedCode24035 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24036, (Optr)&t_send4, (Optr)PSend24039, (Optr)&t_method_return);
    Method PMethod24033 = new_Method_with(PArray24034, empty_Array, empty_Array, PThreadedCode24035, 1, PSend24039);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod24033, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24042 = new_Send((Optr)self, SMB_method, 0);
    String string_24043 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24043_Const = new_Constant((Optr)string_24043);
    // =. 
    Send PSend24044 = new_Send((Optr)PSend24042, SMB__equals_, 1, (Optr)string_24043_Const);
    Array PThreadedCode24041 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24042, (Optr)&t_push1, (Optr)string_24043, (Optr)&t_send1, (Optr)PSend24044, (Optr)&t_method_return);
    Method PMethod24040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24041, 1, PSend24044);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod24040, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24046 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24048 = new_String(L"");
    String string_24049 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24051 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24053 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24055 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24058 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24060 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24060, (Optr)&t_method_return);
    Block PBlock24057 = new_Block_with(PArray24058, empty_Array, PThreadedCode24059, 1, PSend24060);
    Character char_23547 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23547_Const = new_Constant((Optr)char_23547);
    // nextPut:. 
    Send PSend24063 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23547_Const);
    Array PThreadedCode24062 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23547, (Optr)&t_send1, (Optr)PSend24063, (Optr)&t_block_return);
    Block PBlock24061 = new_Block_with(empty_Array, empty_Array, PThreadedCode24062, 1, PSend24063);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24064 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24057, (Optr)PBlock24061);
    Array PThreadedCode24056 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24057, (Optr)&t_push_closure, (Optr)PBlock24061, (Optr)&t_send2, (Optr)PSend24064, (Optr)&t_method_return);
    Block PBlock24054 = new_Block_with(PArray24055, empty_Array, PThreadedCode24056, 1, PSend24064);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24065 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24054);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24053_Const = new_Constant((Optr)string_24053);
    // headerAt:put:. 
    Send PSend24066 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24053_Const, (Optr)PSend24065);
    Array PThreadedCode24052 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24053, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24054, (Optr)&t_send1, (Optr)PSend24065, (Optr)&t_send2, (Optr)PSend24066, (Optr)&t_method_return);
    Block PBlock24050 = new_Block_with(PArray24051, empty_Array, PThreadedCode24052, 1, PSend24066);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24048_Const = new_Constant((Optr)string_24048);
    Constant string_24049_Const = new_Constant((Optr)string_24049);
    // send200Response:contentType:do:. 
    Send PSend24067 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24048_Const, (Optr)string_24049_Const, (Optr)PBlock24050);
    Array PThreadedCode24047 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24048, (Optr)&t_push1, (Optr)string_24049, (Optr)&t_push_closure, (Optr)PBlock24050, (Optr)&t_send3, (Optr)PSend24067, (Optr)&t_method_return);
    Method PMethod24045 = new_Method_with(PArray24046, empty_Array, empty_Array, PThreadedCode24047, 1, PSend24067);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24045, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode24069 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod24068 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24069, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod24068, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray24071 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24074 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24079 = new_String(L"Connection");
    String string_24080 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24079_Const = new_Constant((Optr)string_24079);
    Constant string_24080_Const = new_Constant((Optr)string_24080);
    // headerAt:put:. 
    Send PSend24081 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24079_Const, (Optr)string_24080_Const);
    Array PThreadedCode24078 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24079, (Optr)&t_push1, (Optr)string_24080, (Optr)&t_send2, (Optr)PSend24081, (Optr)&t_block_return);
    Block PBlock24077 = new_Block_with(empty_Array, empty_Array, PThreadedCode24078, 1, PSend24081);
    // ifTrue:. 
    Send PSend24076 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24077);
    Array PThreadedCode24075 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24076, (Optr)PBlock24077, (Optr)&t_method_return);
    Block PBlock24073 = new_Block_with(PArray24074, empty_Array, PThreadedCode24075, 1, PSend24076);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24082 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24073);
    Array PThreadedCode24072 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24073, (Optr)&t_send4, (Optr)PSend24082, (Optr)&t_method_return);
    Method PMethod24070 = new_Method_with(PArray24071, empty_Array, empty_Array, PThreadedCode24072, 1, PSend24082);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24070, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24084 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24086 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24087 = new_Send((Optr)PSend24086, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24085 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24086, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24087, (Optr)&t_method_return);
    Method PMethod24083 = new_Method_with(PArray24084, empty_Array, empty_Array, PThreadedCode24085, 1, PSend24087);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24083, HEADER(WebClient_Core_WebRequest_Class));
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