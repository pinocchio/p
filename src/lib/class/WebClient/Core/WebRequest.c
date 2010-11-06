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
    Array PArray23471 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23474 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23479 = new_Character(L'?');
    Constant char_23479_Const = new_Constant((Optr)char_23479);
    // copyAfter:. 
    Send PSend23478 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23479_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23482 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23483 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23482);
    Array PThreadedCode23481 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23482, (Optr)&t_send1, (Optr)PSend23483, (Optr)&t_block_return);
    Block PBlock23480 = new_Block_with(empty_Array, empty_Array, PThreadedCode23481, 1, PSend23483);
    // ifEmpty:. 
    Send PSend23477 = new_Send((Optr)PSend23478, SMB_ifEmpty_, 1, (Optr)PBlock23480);
    Assign PAssign23476 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23477);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23484 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23475 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23476, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23479, (Optr)&t_send1, (Optr)PSend23478, (Optr)&t_push_closure, (Optr)PBlock23480, (Optr)&t_send1, (Optr)PSend23477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23484, (Optr)&t_method_return);
    Block PBlock23473 = new_Block_with(PArray23474, empty_Array, PThreadedCode23475, 2, PAssign23476, PSend23484);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23485 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23473);
    Array PThreadedCode23472 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23473, (Optr)&t_send1, (Optr)PSend23485, (Optr)&t_method_return);
    Method PMethod23470 = new_Method_with(empty_Array, PArray23471, empty_Array, PThreadedCode23472, 1, PSend23485);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23470, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23488 = new_Send((Optr)self, SMB_method, 0);
    String string_23489 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23489_Const = new_Constant((Optr)string_23489);
    // =. 
    Send PSend23490 = new_Send((Optr)PSend23488, SMB__equals_, 1, (Optr)string_23489_Const);
    Array PThreadedCode23487 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23488, (Optr)&t_push1, (Optr)string_23489, (Optr)&t_send1, (Optr)PSend23490, (Optr)&t_method_return);
    Method PMethod23486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23487, 1, PSend23490);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23486, WebClient_Core_WebRequest_Class);
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
    Array PArray23492 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23493 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23496 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23498 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23499 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23503 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23502 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23503, (Optr)&t_block_return);
    Block PBlock23501 = new_Block_with(empty_Array, empty_Array, PThreadedCode23502, 1, PSend23503);
    // ifTrue:. 
    Send PSend23500 = new_Send((Optr)PSend23499, SMB_ifTrue_, 1, (Optr)PBlock23501);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23506 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23505 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23506);
    Assign PAssign23504 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23505);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23509 = new_String(L" ");
    Constant string_23509_Const = new_Constant((Optr)string_23509);
    // findTokens:. 
    Send PSend23508 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23509_Const);
    Assign PAssign23507 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23508);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23510 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23511 = new_Send((Optr)PSend23510, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23515 = new_String(L"Invalid HTTP request: ");
    Constant string_23515_Const = new_Constant((Optr)string_23515);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23516 = new_Send((Optr)string_23515_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23517 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23516);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23518 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23517);
    Array PThreadedCode23514 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23515, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23516, (Optr)&t_send1, (Optr)PSend23517, (Optr)&t_send1, (Optr)PSend23518, (Optr)&t_block_return);
    Block PBlock23513 = new_Block_with(empty_Array, empty_Array, PThreadedCode23514, 1, PSend23518);
    // ifTrue:. 
    Send PSend23512 = new_Send((Optr)PSend23511, SMB_ifTrue_, 1, (Optr)PBlock23513);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23520 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23519 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23520);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23522 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23521 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23522);
    // size. 
    Send PSend23523 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23524 = new_Send((Optr)PSend23523, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23529 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23528 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23529);
    Array PThreadedCode23527 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23528, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23529, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23526 = new_Block_with(empty_Array, empty_Array, PThreadedCode23527, 1, PAssign23528);
    String string_23533 = new_String(L"HTTP/1.0");
    Constant string_23533_Const = new_Constant((Optr)string_23533);
    Assign PAssign23532 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23533_Const);
    Array PThreadedCode23531 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23532, (Optr)&t_push1, (Optr)string_23533, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23530 = new_Block_with(empty_Array, empty_Array, PThreadedCode23531, 1, PAssign23532);
    // ifTrue:ifFalse:. 
    Send PSend23525 = new_Send((Optr)PSend23524, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23526, (Optr)PBlock23530);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23535 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23534 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23535);
    Array PThreadedCode23497 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23498, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23499, (Optr)&t_send_ifTrue_, (Optr)PSend23500, (Optr)PBlock23501, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23504, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23506, (Optr)&t_send1, (Optr)PSend23505, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23507, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23509, (Optr)&t_send1, (Optr)PSend23508, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23510, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23511, (Optr)&t_send_ifTrue_, (Optr)PSend23512, (Optr)PBlock23513, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23519, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23520, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23521, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23522, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23523, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23524, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23525, (Optr)PBlock23526, (Optr)PBlock23530, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23534, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23535, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23495 = new_Block_with(PArray23496, empty_Array, PThreadedCode23497, 10, PAssign23498, PSend23500, PAssign23504, PAssign23507, PSend23512, PAssign23519, PAssign23521, PSend23525, PAssign23534, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23536 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23495);
    Array PThreadedCode23494 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23495, (Optr)&t_send1, (Optr)PSend23536, (Optr)&t_method_return);
    Method PMethod23491 = new_Method_with(PArray23492, PArray23493, empty_Array, PThreadedCode23494, 1, PSend23536);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23491, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23538 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23539 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23543 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23544 = new_String(L"HTTP/1.1");
    Constant string_23544_Const = new_Constant((Optr)string_23544);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23542 = new_Send((Optr)PSend23543, SMB_protocol_code_, 2, (Optr)string_23544_Const, (Optr)int_405_Const);
    Assign PAssign23541 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23542);
    String string_23545 = new_String(L"Content-Type");
    String string_23546 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23545_Const = new_Constant((Optr)string_23545);
    Constant string_23546_Const = new_Constant((Optr)string_23546);
    // headerAt:put:. 
    Send PSend23547 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23545_Const, (Optr)string_23546_Const);
    String string_23548 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23550 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23553 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23555 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23554 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23555, (Optr)&t_method_return);
    Block PBlock23552 = new_Block_with(PArray23553, empty_Array, PThreadedCode23554, 1, PSend23555);
    Character char_23558 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23558_Const = new_Constant((Optr)char_23558);
    // nextPut:. 
    Send PSend23559 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23558_Const);
    Array PThreadedCode23557 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23558, (Optr)&t_send1, (Optr)PSend23559, (Optr)&t_block_return);
    Block PBlock23556 = new_Block_with(empty_Array, empty_Array, PThreadedCode23557, 1, PSend23559);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23560 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23552, (Optr)PBlock23556);
    Array PThreadedCode23551 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23552, (Optr)&t_push_closure, (Optr)PBlock23556, (Optr)&t_send2, (Optr)PSend23560, (Optr)&t_method_return);
    Block PBlock23549 = new_Block_with(PArray23550, empty_Array, PThreadedCode23551, 1, PSend23560);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23561 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23549);
    Constant string_23548_Const = new_Constant((Optr)string_23548);
    // headerAt:put:. 
    Send PSend23562 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23548_Const, (Optr)PSend23561);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23563 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23540 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23541, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23543, (Optr)&t_push1, (Optr)string_23544, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23542, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23545, (Optr)&t_push1, (Optr)string_23546, (Optr)&t_send2, (Optr)PSend23547, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23548, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23549, (Optr)&t_send1, (Optr)PSend23561, (Optr)&t_send2, (Optr)PSend23562, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23563, (Optr)&t_method_return);
    Method PMethod23537 = new_Method_with(PArray23538, PArray23539, empty_Array, PThreadedCode23540, 4, PAssign23541, PSend23547, PSend23562, PSend23563);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23537, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23565 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23568 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23569 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23567 = new_Block_with(PArray23568, empty_Array, PThreadedCode23569, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23570 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23567);
    Array PThreadedCode23566 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23567, (Optr)&t_send2, (Optr)PSend23570, (Optr)&t_method_return);
    Method PMethod23564 = new_Method_with(PArray23565, empty_Array, empty_Array, PThreadedCode23566, 1, PSend23570);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23564, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23572 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23573 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23577 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23578 = new_String(L"HTTP/1.1");
    Constant string_23578_Const = new_Constant((Optr)string_23578);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23576 = new_Send((Optr)PSend23577, SMB_protocol_code_, 2, (Optr)string_23578_Const, (Optr)int_200_Const);
    Assign PAssign23575 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23576);
    String string_23579 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23579_Const = new_Constant((Optr)string_23579);
    // headerAt:put:. 
    Send PSend23580 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23579_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23581 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23582 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23574 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23575, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23577, (Optr)&t_push1, (Optr)string_23578, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23576, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23579, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23581, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23582, (Optr)&t_method_return);
    Method PMethod23571 = new_Method_with(PArray23572, PArray23573, empty_Array, PThreadedCode23574, 4, PAssign23575, PSend23580, PSend23581, PSend23582);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23571, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23584 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23586 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23586_Const = new_Constant((Optr)string_23586);
    // send200Response:contentType:. 
    Send PSend23587 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23586_Const);
    Array PThreadedCode23585 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23586, (Optr)&t_send2, (Optr)PSend23587, (Optr)&t_method_return);
    Method PMethod23583 = new_Method_with(PArray23584, empty_Array, empty_Array, PThreadedCode23585, 1, PSend23587);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23583, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper23590 = new_Super(SMB_initialize, 0);
    String string_23592 = new_String(L"GET");
    Constant string_23592_Const = new_Constant((Optr)string_23592);
    Assign PAssign23591 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23592_Const);
    String string_23594 = new_String(L"HTTP/1.1");
    Constant string_23594_Const = new_Constant((Optr)string_23594);
    Assign PAssign23593 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23594_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23596 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23595 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23596);
    Array PThreadedCode23589 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23590, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23591, (Optr)&t_push1, (Optr)string_23592, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23593, (Optr)&t_push1, (Optr)string_23594, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23595, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23596, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23589, 5, PSuper23590, PAssign23591, PAssign23593, PAssign23595, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23588, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23599 = new_Send((Optr)self, SMB_method, 0);
    String string_23600 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23600_Const = new_Constant((Optr)string_23600);
    // =. 
    Send PSend23601 = new_Send((Optr)PSend23599, SMB__equals_, 1, (Optr)string_23600_Const);
    Array PThreadedCode23598 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23599, (Optr)&t_push1, (Optr)string_23600, (Optr)&t_send1, (Optr)PSend23601, (Optr)&t_method_return);
    Method PMethod23597 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23598, 1, PSend23601);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod23597, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23603 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23605 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23604 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23605, (Optr)&t_method_return);
    Method PMethod23602 = new_Method_with(PArray23603, empty_Array, empty_Array, PThreadedCode23604, 1, PSend23605);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod23602, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23607 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23611 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23611_Const = new_Constant((Optr)string_23611);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23612 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23612_Const = new_Constant((Optr)string_23612);
    // ,. 
    Send PSend23610 = new_Send((Optr)string_23611_Const, SMB__append_, 1, (Optr)string_23612_Const);
    Assign PAssign23609 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23610);
    SmallInt int_400 = new_SmallInt(400);
    String string_23613 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23613_Const = new_Constant((Optr)string_23613);
    // sendResponseCode:content:type:close:. 
    Send PSend23614 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23613_Const, (Optr)true_Const);
    Array PThreadedCode23608 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23609, (Optr)&t_push1, (Optr)string_23611, (Optr)&t_push1, (Optr)string_23612, (Optr)&t_send1, (Optr)PSend23610, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23613, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23614, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23606 = new_Method_with(empty_Array, PArray23607, empty_Array, PThreadedCode23608, 3, PAssign23609, PSend23614, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23606, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23618 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23620 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23621 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23619 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23620, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23621, (Optr)&t_method_return);
    Block PBlock23617 = new_Block_with(PArray23618, empty_Array, PThreadedCode23619, 2, PSend23620, PSend23621);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23622 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23623 = new_Send((Optr)PBlock23617, SMB_value_, 1, (Optr)PSend23622);
    Array PThreadedCode23616 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23617, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23622, (Optr)&t_send1, (Optr)PSend23623, (Optr)&t_method_return);
    Method PMethod23615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23616, 1, PSend23623);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23615, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23626 = new_Send((Optr)self, SMB_method, 0);
    String string_23627 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23627_Const = new_Constant((Optr)string_23627);
    // =. 
    Send PSend23628 = new_Send((Optr)PSend23626, SMB__equals_, 1, (Optr)string_23627_Const);
    Array PThreadedCode23625 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23626, (Optr)&t_push1, (Optr)string_23627, (Optr)&t_send1, (Optr)PSend23628, (Optr)&t_method_return);
    Method PMethod23624 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23625, 1, PSend23628);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23624, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray23630 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23633 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23635 = new_String(L"Content-Type");
    String string_23636 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23635_Const = new_Constant((Optr)string_23635);
    Constant string_23636_Const = new_Constant((Optr)string_23636);
    // headerAt:put:. 
    Send PSend23637 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23635_Const, (Optr)string_23636_Const);
    Array PThreadedCode23634 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23635, (Optr)&t_push1, (Optr)string_23636, (Optr)&t_send2, (Optr)PSend23637, (Optr)&t_method_return);
    Block PBlock23632 = new_Block_with(PArray23633, empty_Array, PThreadedCode23634, 1, PSend23637);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend23638 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock23632);
    Array PThreadedCode23631 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock23632, (Optr)&t_send2, (Optr)PSend23638, (Optr)&t_method_return);
    Method PMethod23629 = new_Method_with(PArray23630, empty_Array, empty_Array, PThreadedCode23631, 1, PSend23638);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod23629, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23640 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23643 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23642 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23643);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend23644 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray23646 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23648 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23648, (Optr)&t_method_return);
    Block PBlock23645 = new_Block_with(PArray23646, empty_Array, PThreadedCode23647, 1, PSend23648);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend23649 = new_Send((Optr)PSend23644, SMB_associationsDo_, 1, (Optr)PBlock23645);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend23650 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray23652 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23654 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23653 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23654, (Optr)&t_method_return);
    Block PBlock23651 = new_Block_with(PArray23652, empty_Array, PThreadedCode23653, 1, PSend23654);
    // associationsDo:. 
    Send PSend23655 = new_Send((Optr)PSend23650, SMB_associationsDo_, 1, (Optr)PBlock23651);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend23656 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray23658 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23660 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23659 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23660, (Optr)&t_method_return);
    Block PBlock23657 = new_Block_with(PArray23658, empty_Array, PThreadedCode23659, 1, PSend23660);
    // associationsDo:. 
    Send PSend23661 = new_Send((Optr)PSend23656, SMB_associationsDo_, 1, (Optr)PBlock23657);
    Array PThreadedCode23641 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23642, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23643, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23644, (Optr)&t_push_closure, (Optr)PBlock23645, (Optr)&t_send1, (Optr)PSend23649, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23650, (Optr)&t_push_closure, (Optr)PBlock23651, (Optr)&t_send1, (Optr)PSend23655, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23656, (Optr)&t_push_closure, (Optr)PBlock23657, (Optr)&t_send1, (Optr)PSend23661, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23639 = new_Method_with(empty_Array, PArray23640, empty_Array, PThreadedCode23641, 5, PAssign23642, PSend23649, PSend23655, PSend23661, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod23639, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_23664 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23665 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_23664_Const = new_Constant((Optr)string_23664);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23666 = new_Send((Optr)string_23664_Const, SMB__append_, 1, (Optr)PSend23665);
    String string_23667 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_23667_Const = new_Constant((Optr)string_23667);
    // ,. 
    Send PSend23668 = new_Send((Optr)PSend23666, SMB__append_, 1, (Optr)string_23667_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend23669 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend23668);
    Array PThreadedCode23663 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23664, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23665, (Optr)&t_send1, (Optr)PSend23666, (Optr)&t_push1, (Optr)string_23667, (Optr)&t_send1, (Optr)PSend23668, (Optr)&t_send1, (Optr)PSend23669, (Optr)&t_method_return);
    Method PMethod23662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23663, 1, PSend23669);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod23662, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23672 = new_Send((Optr)self, SMB_method, 0);
    String string_23673 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23673_Const = new_Constant((Optr)string_23673);
    // =. 
    Send PSend23674 = new_Send((Optr)PSend23672, SMB__equals_, 1, (Optr)string_23673_Const);
    Array PThreadedCode23671 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23672, (Optr)&t_push1, (Optr)string_23673, (Optr)&t_send1, (Optr)PSend23674, (Optr)&t_method_return);
    Method PMethod23670 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23671, 1, PSend23674);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod23670, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23676 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend23678 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23677 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23678, (Optr)&t_method_return);
    Method PMethod23675 = new_Method_with(PArray23676, empty_Array, empty_Array, PThreadedCode23677, 1, PSend23678);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod23675, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray23680 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23683 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23684 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23682 = new_Block_with(PArray23683, empty_Array, PThreadedCode23684, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend23685 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock23682);
    Array PThreadedCode23681 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock23682, (Optr)&t_send3, (Optr)PSend23685, (Optr)&t_method_return);
    Method PMethod23679 = new_Method_with(PArray23680, empty_Array, empty_Array, PThreadedCode23681, 1, PSend23685);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod23679, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23687 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23690 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23689 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23690);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray23692 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_23694 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray23696 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23698 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode23697 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend23698, (Optr)&t_method_return);
    Block PBlock23695 = new_Block_with(PArray23696, empty_Array, PThreadedCode23697, 1, PSend23698);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_23694_Const = new_Constant((Optr)string_23694);
    // at:ifPresent:. 
    Send PSend23699 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_23694_Const, (Optr)PBlock23695);
    Array PThreadedCode23693 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_23694, (Optr)&t_push_closure, (Optr)PBlock23695, (Optr)&t_send2, (Optr)PSend23699, (Optr)&t_method_return);
    Block PBlock23691 = new_Block_with(PArray23692, empty_Array, PThreadedCode23693, 1, PSend23699);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend23700 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock23691);
    Array PThreadedCode23688 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign23689, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23690, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23691, (Optr)&t_send1, (Optr)PSend23700, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23686 = new_Method_with(empty_Array, PArray23687, empty_Array, PThreadedCode23688, 3, PAssign23689, PSend23700, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod23686, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray23702 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23703 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23707 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23708 = new_String(L"HTTP/1.1");
    Constant string_23708_Const = new_Constant((Optr)string_23708);
    // protocol:code:. 
    Send PSend23706 = new_Send((Optr)PSend23707, SMB_protocol_code_, 2, (Optr)string_23708_Const, (Optr)VAR_code_0_0);
    Assign PAssign23705 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23706);
    String string_23709 = new_String(L"Transfer-Encoding");
    String string_23710 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23709_Const = new_Constant((Optr)string_23709);
    Constant string_23710_Const = new_Constant((Optr)string_23710);
    // headerAt:put:. 
    Send PSend23711 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23709_Const, (Optr)string_23710_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23712 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray23714 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend23716 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend23717 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23719 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23721 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23721_Const = new_Constant((Optr)string_23721);
    // nextPutAll:. 
    Send PSend23722 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_23721_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23723 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend23724 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23725 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode23720 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_23721, (Optr)&t_send1, (Optr)PSend23722, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23723, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23724, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23725, (Optr)&t_method_return);
    Block PBlock23718 = new_Block_with(PArray23719, empty_Array, PThreadedCode23720, 4, PSend23722, PSend23723, PSend23724, PSend23725);
    // value:. 
    Send PSend23726 = new_Send((Optr)PBlock23718, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode23715 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23716, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23717, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23718, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23726, (Optr)&t_method_return);
    Block PBlock23713 = new_Block_with(PArray23714, empty_Array, PThreadedCode23715, 3, PSend23716, PSend23717, PSend23726);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23727 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock23713);
    Array PThreadedCode23704 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23705, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23707, (Optr)&t_push1, (Optr)string_23708, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23706, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23709, (Optr)&t_push1, (Optr)string_23710, (Optr)&t_send2, (Optr)PSend23711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23712, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock23713, (Optr)&t_send2, (Optr)PSend23727, (Optr)&t_method_return);
    Method PMethod23701 = new_Method_with(PArray23702, PArray23703, empty_Array, PThreadedCode23704, 4, PAssign23705, PSend23711, PSend23712, PSend23727);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod23701, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray23729 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_23733 = new_String(L"Connection");
    String string_23734 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23733_Const = new_Constant((Optr)string_23733);
    Constant string_23734_Const = new_Constant((Optr)string_23734);
    // headerAt:put:. 
    Send PSend23735 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23733_Const, (Optr)string_23734_Const);
    Array PThreadedCode23732 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23733, (Optr)&t_push1, (Optr)string_23734, (Optr)&t_send2, (Optr)PSend23735, (Optr)&t_block_return);
    Block PBlock23731 = new_Block_with(empty_Array, empty_Array, PThreadedCode23732, 1, PSend23735);
    String string_23738 = new_String(L"Content-Length");
    Constant string_23738_Const = new_Constant((Optr)string_23738);
    // headerAt:put:. 
    Send PSend23739 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23738_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode23737 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23738, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend23739, (Optr)&t_block_return);
    Block PBlock23736 = new_Block_with(empty_Array, empty_Array, PThreadedCode23737, 1, PSend23739);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23740 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23731, (Optr)PBlock23736);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray23742 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23744 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode23743 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23744, (Optr)&t_method_return);
    Block PBlock23741 = new_Block_with(PArray23742, empty_Array, PThreadedCode23743, 1, PSend23744);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23745 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23741);
    Array PThreadedCode23730 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock23731, (Optr)&t_push_closure, (Optr)PBlock23736, (Optr)&t_send2, (Optr)PSend23740, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23741, (Optr)&t_send2, (Optr)PSend23745, (Optr)&t_method_return);
    Method PMethod23728 = new_Method_with(PArray23729, empty_Array, empty_Array, PThreadedCode23730, 2, PSend23740, PSend23745);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod23728, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray23747 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign23749 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode23748 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23749, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23746 = new_Method_with(PArray23747, empty_Array, empty_Array, PThreadedCode23748, 2, PAssign23749, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod23746, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23751 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23752 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23756 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23757 = new_String(L"HTTP/1.1");
    Constant string_23757_Const = new_Constant((Optr)string_23757);
    // protocol:code:. 
    Send PSend23755 = new_Send((Optr)PSend23756, SMB_protocol_code_, 2, (Optr)string_23757_Const, (Optr)VAR_code_0_0);
    Assign PAssign23754 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23755);
    String string_23760 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23760_Const = new_Constant((Optr)string_23760);
    // headerAt:put:. 
    Send PSend23761 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23760_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode23759 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23760, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23761, (Optr)&t_block_return);
    Block PBlock23758 = new_Block_with(empty_Array, empty_Array, PThreadedCode23759, 1, PSend23761);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23762 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23758);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23763 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23764 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode23753 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23754, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23756, (Optr)&t_push1, (Optr)string_23757, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23755, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23758, (Optr)&t_send1, (Optr)PSend23762, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23763, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend23764, (Optr)&t_method_return);
    Method PMethod23750 = new_Method_with(PArray23751, PArray23752, empty_Array, PThreadedCode23753, 4, PAssign23754, PSend23762, PSend23763, PSend23764);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod23750, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23766 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend23768 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23767 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23768, (Optr)&t_method_return);
    Method PMethod23765 = new_Method_with(PArray23766, empty_Array, empty_Array, PThreadedCode23767, 1, PSend23768);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod23765, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23770 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray23771 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23775 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23774 = new_Send((Optr)PSend23775, SMB_not, 0);
    Assign PAssign23773 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend23774);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_23779 = new_String(L"Connection");
    String string_23780 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23779_Const = new_Constant((Optr)string_23779);
    Constant string_23780_Const = new_Constant((Optr)string_23780);
    // headerAt:put:. 
    Send PSend23781 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23779_Const, (Optr)string_23780_Const);
    Array PThreadedCode23778 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23779, (Optr)&t_push1, (Optr)string_23780, (Optr)&t_send2, (Optr)PSend23781, (Optr)&t_block_return);
    Block PBlock23777 = new_Block_with(empty_Array, empty_Array, PThreadedCode23778, 1, PSend23781);
    // ifTrue:. 
    Send PSend23776 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23777);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23782 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23783 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23787 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23786 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23787, (Optr)&t_block_return);
    Block PBlock23785 = new_Block_with(empty_Array, empty_Array, PThreadedCode23786, 1, PSend23787);
    // ifTrue:. 
    Send PSend23784 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23785);
    Array PThreadedCode23772 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign23773, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23775, (Optr)&t_send0, (Optr)PSend23774, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23776, (Optr)PBlock23777, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23782, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23783, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23784, (Optr)PBlock23785, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23769 = new_Method_with(PArray23770, PArray23771, empty_Array, PThreadedCode23772, 6, PAssign23773, PSend23776, PSend23782, PSend23783, PSend23784, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod23769, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23789 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23791 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23791_Const = new_Constant((Optr)string_23791);
    // send200Response:contentType:. 
    Send PSend23792 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_23791_Const);
    Array PThreadedCode23790 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_23791, (Optr)&t_send2, (Optr)PSend23792, (Optr)&t_method_return);
    Method PMethod23788 = new_Method_with(PArray23789, empty_Array, empty_Array, PThreadedCode23790, 1, PSend23792);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod23788, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23795 = new_Send((Optr)self, SMB_method, 0);
    String string_23796 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23796_Const = new_Constant((Optr)string_23796);
    // =. 
    Send PSend23797 = new_Send((Optr)PSend23795, SMB__equals_, 1, (Optr)string_23796_Const);
    Array PThreadedCode23794 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23795, (Optr)&t_push1, (Optr)string_23796, (Optr)&t_send1, (Optr)PSend23797, (Optr)&t_method_return);
    Method PMethod23793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23794, 1, PSend23797);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod23793, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray23799 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23802 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23803 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23801 = new_Block_with(PArray23802, empty_Array, PThreadedCode23803, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend23804 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock23801);
    Array PThreadedCode23800 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock23801, (Optr)&t_send3, (Optr)PSend23804, (Optr)&t_method_return);
    Method PMethod23798 = new_Method_with(PArray23799, empty_Array, empty_Array, PThreadedCode23800, 1, PSend23804);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod23798, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray23806 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_23808 = new_String(L"Date");
    Array PThreadedCode23810 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23809 = new_Block_with(empty_Array, empty_Array, PThreadedCode23810, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23811 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23809);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend23812 = new_Send((Optr)PSend23811, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23808_Const = new_Constant((Optr)string_23808);
    // headerAt:put:. 
    Send PSend23813 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23808_Const, (Optr)PSend23812);
    String string_23814 = new_String(L"Server");
    Array PThreadedCode23816 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23815 = new_Block_with(empty_Array, empty_Array, PThreadedCode23816, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend23817 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23815);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend23818 = new_Send((Optr)PSend23817, SMB_serverString, 0);
    Constant string_23814_Const = new_Constant((Optr)string_23814);
    // headerAt:put:. 
    Send PSend23819 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23814_Const, (Optr)PSend23818);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23824 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23825 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend23826 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23830 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode23829 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23830, (Optr)&t_block_return);
    Block PBlock23828 = new_Block_with(empty_Array, empty_Array, PThreadedCode23829, 1, PSend23830);
    // ifFalse:. 
    Send PSend23827 = new_Send((Optr)PSend23826, SMB_ifFalse_, 1, (Optr)PBlock23828);
    Array PThreadedCode23823 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23824, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23825, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23826, (Optr)&t_send_ifFalse_, (Optr)PSend23827, (Optr)PBlock23828, (Optr)&t_block_return);
    Block PBlock23822 = new_Block_with(empty_Array, empty_Array, PThreadedCode23823, 3, PSend23824, PSend23825, PSend23827);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray23832 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode23833 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23831 = new_Block_with(PArray23832, empty_Array, PThreadedCode23833, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23834 = new_Send((Optr)PBlock23822, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock23831);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend23837 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode23836 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend23837, (Optr)&t_block_return);
    Block PBlock23835 = new_Block_with(empty_Array, empty_Array, PThreadedCode23836, 1, PSend23837);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23838 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock23835);
    Array PThreadedCode23821 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock23822, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock23831, (Optr)&t_send2, (Optr)PSend23834, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23835, (Optr)&t_send1, (Optr)PSend23838, (Optr)&t_block_return);
    Block PBlock23820 = new_Block_with(empty_Array, empty_Array, PThreadedCode23821, 2, PSend23834, PSend23838);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend23839 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23820);
    Array PThreadedCode23807 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23808, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23809, (Optr)&t_send1, (Optr)PSend23811, (Optr)&t_send0, (Optr)PSend23812, (Optr)&t_send2, (Optr)PSend23813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23814, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23815, (Optr)&t_send1, (Optr)PSend23817, (Optr)&t_send0, (Optr)PSend23818, (Optr)&t_send2, (Optr)PSend23819, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23820, (Optr)&t_send2, (Optr)PSend23839, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23805 = new_Method_with(PArray23806, empty_Array, empty_Array, PThreadedCode23807, 4, PSend23813, PSend23819, PSend23839, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod23805, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode23841 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod23840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23841, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod23840, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray23843 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_23845 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_23845_Const = new_Constant((Optr)string_23845);
    // stream200Response:size:type:. 
    Send PSend23846 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_23845_Const);
    Array PThreadedCode23844 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_23845, (Optr)&t_send3, (Optr)PSend23846, (Optr)&t_method_return);
    Method PMethod23842 = new_Method_with(PArray23843, empty_Array, empty_Array, PThreadedCode23844, 1, PSend23846);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod23842, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23848 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23851 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23852 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23850 = new_Block_with(PArray23851, empty_Array, PThreadedCode23852, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend23853 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23850);
    Array PThreadedCode23849 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23850, (Optr)&t_send2, (Optr)PSend23853, (Optr)&t_method_return);
    Method PMethod23847 = new_Method_with(PArray23848, empty_Array, empty_Array, PThreadedCode23849, 1, PSend23853);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod23847, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23855 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray23856 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign23858 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_23859 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23859_Const = new_Constant((Optr)string_23859);
    // findString:. 
    Send PSend23860 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_23859_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend23861 = new_Send((Optr)PSend23860, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23865 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23865_Const = new_Constant((Optr)string_23865);
    // headerAt:. 
    Send PSend23866 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23865_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray23868 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_23873 = new_String(L"http://");
    Constant string_23873_Const = new_Constant((Optr)string_23873);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23872 = new_Send((Optr)string_23873_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend23871 = new_Send((Optr)PSend23872, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign23870 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend23871);
    Array PThreadedCode23869 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign23870, (Optr)&t_push1, (Optr)string_23873, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend23872, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend23871, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23867 = new_Block_with(PArray23868, empty_Array, PThreadedCode23869, 1, PAssign23870);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23874 = new_Send((Optr)PSend23866, SMB_ifNotEmpty_, 1, (Optr)PBlock23867);
    Array PThreadedCode23864 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23865, (Optr)&t_send1, (Optr)PSend23866, (Optr)&t_push_closure, (Optr)PBlock23867, (Optr)&t_send1, (Optr)PSend23874, (Optr)&t_block_return);
    Block PBlock23863 = new_Block_with(empty_Array, empty_Array, PThreadedCode23864, 1, PSend23874);
    // ifFalse:. 
    Send PSend23862 = new_Send((Optr)PSend23861, SMB_ifFalse_, 1, (Optr)PBlock23863);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23877 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23878 = new_String(L"HTTP/1.1");
    Constant string_23878_Const = new_Constant((Optr)string_23878);
    // protocol:code:. 
    Send PSend23876 = new_Send((Optr)PSend23877, SMB_protocol_code_, 2, (Optr)string_23878_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign23875 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23876);
    String string_23879 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23879_Const = new_Constant((Optr)string_23879);
    // headerAt:put:. 
    Send PSend23880 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23879_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23881 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_23882 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_23882_Const = new_Constant((Optr)string_23882);
    // sendResponse:content:. 
    Send PSend23883 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_23882_Const);
    Array PThreadedCode23857 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23858, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_23859, (Optr)&t_send1, (Optr)PSend23860, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23861, (Optr)&t_send_ifFalse_, (Optr)PSend23862, (Optr)PBlock23863, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23875, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23877, (Optr)&t_push1, (Optr)string_23878, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend23876, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23879, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend23880, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23881, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23882, (Optr)&t_send2, (Optr)PSend23883, (Optr)&t_method_return);
    Method PMethod23854 = new_Method_with(PArray23855, PArray23856, empty_Array, PThreadedCode23857, 6, PAssign23858, PSend23862, PAssign23875, PSend23880, PSend23881, PSend23883);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod23854, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23886 = new_Send((Optr)self, SMB_method, 0);
    String string_23887 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23887_Const = new_Constant((Optr)string_23887);
    // =. 
    Send PSend23888 = new_Send((Optr)PSend23886, SMB__equals_, 1, (Optr)string_23887_Const);
    Array PThreadedCode23885 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23886, (Optr)&t_push1, (Optr)string_23887, (Optr)&t_send1, (Optr)PSend23888, (Optr)&t_method_return);
    Method PMethod23884 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23885, 1, PSend23888);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod23884, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23890 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23893 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23895 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23896 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23897 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend23898 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23899 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23900 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode23894 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend23895, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23896, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend23897, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23898, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend23899, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23900, (Optr)&t_method_return);
    Block PBlock23892 = new_Block_with(PArray23893, empty_Array, PThreadedCode23894, 6, PSend23895, PSend23896, PSend23897, PSend23898, PSend23899, PSend23900);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23901 = new_Send((Optr)PBlock23892, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23891 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23892, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23901, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23889 = new_Method_with(PArray23890, empty_Array, empty_Array, PThreadedCode23891, 2, PSend23901, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod23889, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23903 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23905 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23906 = new_Send((Optr)self, SMB_method, 0);
    Constant string_23905_Const = new_Constant((Optr)string_23905);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23907 = new_Send((Optr)string_23905_Const, SMB__append_, 1, (Optr)PSend23906);
    String string_23908 = new_String(L" is not allowed for the URL");
    Constant string_23908_Const = new_Constant((Optr)string_23908);
    // ,. 
    Send PSend23909 = new_Send((Optr)PSend23907, SMB__append_, 1, (Optr)string_23908_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23910 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23911 = new_Send((Optr)PSend23909, SMB__append_, 1, (Optr)PSend23910);
    String string_23912 = new_String(L"</p></body></html>");
    Constant string_23912_Const = new_Constant((Optr)string_23912);
    // ,. 
    Send PSend23913 = new_Send((Optr)PSend23911, SMB__append_, 1, (Optr)string_23912_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend23914 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend23913);
    Array PThreadedCode23904 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_23905, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23906, (Optr)&t_send1, (Optr)PSend23907, (Optr)&t_push1, (Optr)string_23908, (Optr)&t_send1, (Optr)PSend23909, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23910, (Optr)&t_send1, (Optr)PSend23911, (Optr)&t_push1, (Optr)string_23912, (Optr)&t_send1, (Optr)PSend23913, (Optr)&t_send2, (Optr)PSend23914, (Optr)&t_method_return);
    Method PMethod23902 = new_Method_with(PArray23903, empty_Array, empty_Array, PThreadedCode23904, 1, PSend23914);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod23902, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray23916 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray23917 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_23923 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23923_Const = new_Constant((Optr)string_23923);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23924 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_23924_Const = new_Constant((Optr)string_23924);
    // ,. 
    Send PSend23922 = new_Send((Optr)string_23923_Const, SMB__append_, 1, (Optr)string_23924_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23926 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23927 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23925 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23926, (Optr)PSend23927);
    // ,. 
    Send PSend23921 = new_Send((Optr)PSend23922, SMB__append_, 1, (Optr)PSend23925);
    String string_23928 = new_String(L"</pre></body></html>");
    Constant string_23928_Const = new_Constant((Optr)string_23928);
    // ,. 
    Send PSend23920 = new_Send((Optr)PSend23921, SMB__append_, 1, (Optr)string_23928_Const);
    Assign PAssign23919 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend23920);
    SmallInt int_500 = new_SmallInt(500);
    String string_23929 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23929_Const = new_Constant((Optr)string_23929);
    // sendResponseCode:content:type:close:. 
    Send PSend23930 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_23929_Const, (Optr)true_Const);
    Array PThreadedCode23918 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23919, (Optr)&t_push1, (Optr)string_23923, (Optr)&t_push1, (Optr)string_23924, (Optr)&t_send1, (Optr)PSend23922, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23926, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23927, (Optr)&t_send2, (Optr)PSend23925, (Optr)&t_send1, (Optr)PSend23921, (Optr)&t_push1, (Optr)string_23928, (Optr)&t_send1, (Optr)PSend23920, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_23929, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23930, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23915 = new_Method_with(PArray23916, PArray23917, empty_Array, PThreadedCode23918, 3, PAssign23919, PSend23930, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod23915, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23932 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23934 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode23933 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23934, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23931 = new_Method_with(PArray23932, empty_Array, empty_Array, PThreadedCode23933, 2, PAssign23934, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod23931, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23939 = new_Send((Optr)self, SMB_method, 0);
    String string_23940 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23940_Const = new_Constant((Optr)string_23940);
    // ,. 
    Send PSend23941 = new_Send((Optr)PSend23939, SMB__append_, 1, (Optr)string_23940_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23942 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23943 = new_Send((Optr)PSend23941, SMB__append_, 1, (Optr)PSend23942);
    String string_23944 = new_String(L" ");
    Constant string_23944_Const = new_Constant((Optr)string_23944);
    // ,. 
    Send PSend23945 = new_Send((Optr)PSend23943, SMB__append_, 1, (Optr)string_23944_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23946 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend23947 = new_Send((Optr)PSend23945, SMB__append_, 1, (Optr)PSend23946);
    Array PThreadedCode23938 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23939, (Optr)&t_push1, (Optr)string_23940, (Optr)&t_send1, (Optr)PSend23941, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23942, (Optr)&t_send1, (Optr)PSend23943, (Optr)&t_push1, (Optr)string_23944, (Optr)&t_send1, (Optr)PSend23945, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23946, (Optr)&t_send1, (Optr)PSend23947, (Optr)&t_block_return);
    Block PBlock23937 = new_Block_with(empty_Array, empty_Array, PThreadedCode23938, 1, PSend23947);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23948 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock23937);
    Array PThreadedCode23936 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock23937, (Optr)&t_send1, (Optr)PSend23948, (Optr)&t_method_return);
    Method PMethod23935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23936, 1, PSend23948);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod23935, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray23950 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23953 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23954 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23952 = new_Block_with(PArray23953, empty_Array, PThreadedCode23954, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend23955 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock23952);
    Array PThreadedCode23951 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock23952, (Optr)&t_send3, (Optr)PSend23955, (Optr)&t_method_return);
    Method PMethod23949 = new_Method_with(PArray23950, empty_Array, empty_Array, PThreadedCode23951, 1, PSend23955);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod23949, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23957 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23959 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23962 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23963 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23963_Const = new_Constant((Optr)string_23963);
    // beginsWith:. 
    Send PSend23964 = new_Send((Optr)PSend23962, SMB_beginsWith_, 1, (Optr)string_23963_Const);
    Array PThreadedCode23961 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23962, (Optr)&t_push1, (Optr)string_23963, (Optr)&t_send1, (Optr)PSend23964, (Optr)&t_block_return);
    Block PBlock23960 = new_Block_with(empty_Array, empty_Array, PThreadedCode23961, 1, PSend23964);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23965 = new_Send((Optr)PSend23959, SMB_and_, 1, (Optr)PBlock23960);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23969 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23970 = new_Send((Optr)PSend23969, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend23971 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend23972 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend23970, (Optr)PSend23971, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23968 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23969, (Optr)&t_send0, (Optr)PSend23970, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23971, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend23972, (Optr)&t_block_return);
    Block PBlock23967 = new_Block_with(empty_Array, empty_Array, PThreadedCode23968, 1, PSend23972);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23975 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23974 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23975, (Optr)&t_block_return);
    Block PBlock23973 = new_Block_with(empty_Array, empty_Array, PThreadedCode23974, 1, PSend23975);
    // ifTrue:ifFalse:. 
    Send PSend23966 = new_Send((Optr)PSend23965, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23967, (Optr)PBlock23973);
    Array PThreadedCode23958 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23959, (Optr)&t_push_closure, (Optr)PBlock23960, (Optr)&t_send1, (Optr)PSend23965, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23966, (Optr)PBlock23967, (Optr)PBlock23973, (Optr)&t_method_return);
    Method PMethod23956 = new_Method_with(PArray23957, empty_Array, empty_Array, PThreadedCode23958, 1, PSend23966);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod23956, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23978 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23981 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23982 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23982_Const = new_Constant((Optr)string_23982);
    // =. 
    Send PSend23983 = new_Send((Optr)PSend23981, SMB__equals_, 1, (Optr)string_23982_Const);
    Array PThreadedCode23980 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23981, (Optr)&t_push1, (Optr)string_23982, (Optr)&t_send1, (Optr)PSend23983, (Optr)&t_block_return);
    Block PBlock23979 = new_Block_with(empty_Array, empty_Array, PThreadedCode23980, 1, PSend23983);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23984 = new_Send((Optr)PSend23978, SMB_and_, 1, (Optr)PBlock23979);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23988 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23989 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend23988, (Optr)true_Const);
    Array PThreadedCode23987 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23988, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend23989, (Optr)&t_block_return);
    Block PBlock23986 = new_Block_with(empty_Array, empty_Array, PThreadedCode23987, 1, PSend23989);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23992 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23991 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23992, (Optr)&t_block_return);
    Block PBlock23990 = new_Block_with(empty_Array, empty_Array, PThreadedCode23991, 1, PSend23992);
    // ifTrue:ifFalse:. 
    Send PSend23985 = new_Send((Optr)PSend23984, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23986, (Optr)PBlock23990);
    Array PThreadedCode23977 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23978, (Optr)&t_push_closure, (Optr)PBlock23979, (Optr)&t_send1, (Optr)PSend23984, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23985, (Optr)PBlock23986, (Optr)PBlock23990, (Optr)&t_method_return);
    Method PMethod23976 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23977, 1, PSend23985);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod23976, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23994 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23996 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend23997 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend23996);
    Array PThreadedCode23995 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23996, (Optr)&t_send2, (Optr)PSend23997, (Optr)&t_method_return);
    Method PMethod23993 = new_Method_with(PArray23994, empty_Array, empty_Array, PThreadedCode23995, 1, PSend23997);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod23993, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23999 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24001 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode24000 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24001, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23998 = new_Method_with(PArray23999, empty_Array, empty_Array, PThreadedCode24000, 2, PAssign24001, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod23998, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray24003 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24005 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24006 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24007 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend24005, (Optr)PSend24006);
    Array PThreadedCode24004 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24005, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24006, (Optr)&t_send3, (Optr)PSend24007, (Optr)&t_method_return);
    Method PMethod24002 = new_Method_with(PArray24003, empty_Array, empty_Array, PThreadedCode24004, 1, PSend24007);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod24002, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24009 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24011 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24012 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24010 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24011, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24012, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24008 = new_Method_with(PArray24009, empty_Array, empty_Array, PThreadedCode24010, 3, PSend24011, PSuper24012, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24008, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24014 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24015 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24019 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24020 = new_String(L"HTTP/1.1");
    Constant string_24020_Const = new_Constant((Optr)string_24020);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24018 = new_Send((Optr)PSend24019, SMB_protocol_code_, 2, (Optr)string_24020_Const, (Optr)int_200_Const);
    Assign PAssign24017 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24018);
    String string_24021 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24021_Const = new_Constant((Optr)string_24021);
    // headerAt:put:. 
    Send PSend24022 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24021_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24023 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24024 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode24016 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24017, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24019, (Optr)&t_push1, (Optr)string_24020, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24021, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend24022, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24023, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend24024, (Optr)&t_method_return);
    Method PMethod24013 = new_Method_with(PArray24014, PArray24015, empty_Array, PThreadedCode24016, 4, PAssign24017, PSend24022, PSend24023, PSend24024);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod24013, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode24026 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24025 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24026, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24025, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2665 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // copyUpTo:. 
    Send PSend24029 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2665_Const);
    Character char_23479 = new_Character(L'?');
    Constant char_23479_Const = new_Constant((Optr)char_23479);
    // copyUpTo:. 
    Send PSend24030 = new_Send((Optr)PSend24029, SMB_copyUpTo_, 1, (Optr)char_23479_Const);
    Array PThreadedCode24028 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend24029, (Optr)&t_push1, (Optr)char_23479, (Optr)&t_send1, (Optr)PSend24030, (Optr)&t_method_return);
    Method PMethod24027 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24028, 1, PSend24030);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24027, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24032 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24033 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24037 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24038 = new_String(L"HTTP/1.1");
    Constant string_24038_Const = new_Constant((Optr)string_24038);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24036 = new_Send((Optr)PSend24037, SMB_protocol_code_, 2, (Optr)string_24038_Const, (Optr)int_404_Const);
    Assign PAssign24035 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24036);
    String string_24039 = new_String(L"Content-Type");
    String string_24040 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24039_Const = new_Constant((Optr)string_24039);
    Constant string_24040_Const = new_Constant((Optr)string_24040);
    // headerAt:put:. 
    Send PSend24041 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24039_Const, (Optr)string_24040_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24042 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24043 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24034 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24035, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24037, (Optr)&t_push1, (Optr)string_24038, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24036, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24039, (Optr)&t_push1, (Optr)string_24040, (Optr)&t_send2, (Optr)PSend24041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24042, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24043, (Optr)&t_method_return);
    Method PMethod24031 = new_Method_with(PArray24032, PArray24033, empty_Array, PThreadedCode24034, 4, PAssign24035, PSend24041, PSend24042, PSend24043);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24031, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray24045 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24048 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24049 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24047 = new_Block_with(PArray24048, empty_Array, PThreadedCode24049, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend24050 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24047);
    Array PThreadedCode24046 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24047, (Optr)&t_send4, (Optr)PSend24050, (Optr)&t_method_return);
    Method PMethod24044 = new_Method_with(PArray24045, empty_Array, empty_Array, PThreadedCode24046, 1, PSend24050);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod24044, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24053 = new_Send((Optr)self, SMB_method, 0);
    String string_24054 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24054_Const = new_Constant((Optr)string_24054);
    // =. 
    Send PSend24055 = new_Send((Optr)PSend24053, SMB__equals_, 1, (Optr)string_24054_Const);
    Array PThreadedCode24052 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24053, (Optr)&t_push1, (Optr)string_24054, (Optr)&t_send1, (Optr)PSend24055, (Optr)&t_method_return);
    Method PMethod24051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24052, 1, PSend24055);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod24051, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24057 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24059 = new_String(L"");
    String string_24060 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24062 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24064 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24066 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24069 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24071 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24070 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24071, (Optr)&t_method_return);
    Block PBlock24068 = new_Block_with(PArray24069, empty_Array, PThreadedCode24070, 1, PSend24071);
    Character char_23558 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23558_Const = new_Constant((Optr)char_23558);
    // nextPut:. 
    Send PSend24074 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23558_Const);
    Array PThreadedCode24073 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23558, (Optr)&t_send1, (Optr)PSend24074, (Optr)&t_block_return);
    Block PBlock24072 = new_Block_with(empty_Array, empty_Array, PThreadedCode24073, 1, PSend24074);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24075 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24068, (Optr)PBlock24072);
    Array PThreadedCode24067 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24068, (Optr)&t_push_closure, (Optr)PBlock24072, (Optr)&t_send2, (Optr)PSend24075, (Optr)&t_method_return);
    Block PBlock24065 = new_Block_with(PArray24066, empty_Array, PThreadedCode24067, 1, PSend24075);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24076 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24065);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24064_Const = new_Constant((Optr)string_24064);
    // headerAt:put:. 
    Send PSend24077 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24064_Const, (Optr)PSend24076);
    Array PThreadedCode24063 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24064, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24065, (Optr)&t_send1, (Optr)PSend24076, (Optr)&t_send2, (Optr)PSend24077, (Optr)&t_method_return);
    Block PBlock24061 = new_Block_with(PArray24062, empty_Array, PThreadedCode24063, 1, PSend24077);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24059_Const = new_Constant((Optr)string_24059);
    Constant string_24060_Const = new_Constant((Optr)string_24060);
    // send200Response:contentType:do:. 
    Send PSend24078 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24059_Const, (Optr)string_24060_Const, (Optr)PBlock24061);
    Array PThreadedCode24058 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24059, (Optr)&t_push1, (Optr)string_24060, (Optr)&t_push_closure, (Optr)PBlock24061, (Optr)&t_send3, (Optr)PSend24078, (Optr)&t_method_return);
    Method PMethod24056 = new_Method_with(PArray24057, empty_Array, empty_Array, PThreadedCode24058, 1, PSend24078);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24056, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode24080 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod24079 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24080, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod24079, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray24082 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24085 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24090 = new_String(L"Connection");
    String string_24091 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24090_Const = new_Constant((Optr)string_24090);
    Constant string_24091_Const = new_Constant((Optr)string_24091);
    // headerAt:put:. 
    Send PSend24092 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24090_Const, (Optr)string_24091_Const);
    Array PThreadedCode24089 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24090, (Optr)&t_push1, (Optr)string_24091, (Optr)&t_send2, (Optr)PSend24092, (Optr)&t_block_return);
    Block PBlock24088 = new_Block_with(empty_Array, empty_Array, PThreadedCode24089, 1, PSend24092);
    // ifTrue:. 
    Send PSend24087 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24088);
    Array PThreadedCode24086 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24087, (Optr)PBlock24088, (Optr)&t_method_return);
    Block PBlock24084 = new_Block_with(PArray24085, empty_Array, PThreadedCode24086, 1, PSend24087);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24093 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24084);
    Array PThreadedCode24083 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24084, (Optr)&t_send4, (Optr)PSend24093, (Optr)&t_method_return);
    Method PMethod24081 = new_Method_with(PArray24082, empty_Array, empty_Array, PThreadedCode24083, 1, PSend24093);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24081, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24095 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24097 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24098 = new_Send((Optr)PSend24097, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24096 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24097, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24098, (Optr)&t_method_return);
    Method PMethod24094 = new_Method_with(PArray24095, empty_Array, empty_Array, PThreadedCode24096, 1, PSend24098);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24094, HEADER(WebClient_Core_WebRequest_Class));
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