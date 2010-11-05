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
    Array PArray23496 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23499 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23504 = new_Character(L'?');
    Constant char_23504_Const = new_Constant((Optr)char_23504);
    // copyAfter:. 
    Send PSend23503 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23504_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23507 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23508 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23507);
    Array PThreadedCode23506 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23507, (Optr)&t_send1, (Optr)PSend23508, (Optr)&t_block_return);
    Block PBlock23505 = new_Block_with(empty_Array, empty_Array, PThreadedCode23506, 1, PSend23508);
    // ifEmpty:. 
    Send PSend23502 = new_Send((Optr)PSend23503, SMB_ifEmpty_, 1, (Optr)PBlock23505);
    Assign PAssign23501 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23502);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23509 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23500 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23501, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23504, (Optr)&t_send1, (Optr)PSend23503, (Optr)&t_push_closure, (Optr)PBlock23505, (Optr)&t_send1, (Optr)PSend23502, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23509, (Optr)&t_method_return);
    Block PBlock23498 = new_Block_with(PArray23499, empty_Array, PThreadedCode23500, 2, PAssign23501, PSend23509);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23510 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23498);
    Array PThreadedCode23497 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23498, (Optr)&t_send1, (Optr)PSend23510, (Optr)&t_method_return);
    Method PMethod23495 = new_Method_with(empty_Array, PArray23496, empty_Array, PThreadedCode23497, 1, PSend23510);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23495, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23513 = new_Send((Optr)self, SMB_method, 0);
    String string_23514 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23514_Const = new_Constant((Optr)string_23514);
    // =. 
    Send PSend23515 = new_Send((Optr)PSend23513, SMB__equals_, 1, (Optr)string_23514_Const);
    Array PThreadedCode23512 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23513, (Optr)&t_push1, (Optr)string_23514, (Optr)&t_send1, (Optr)PSend23515, (Optr)&t_method_return);
    Method PMethod23511 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23512, 1, PSend23515);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23511, WebClient_Core_WebRequest_Class);
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
    Array PArray23517 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23518 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23521 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23523 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23524 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23528 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23527 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23528, (Optr)&t_block_return);
    Block PBlock23526 = new_Block_with(empty_Array, empty_Array, PThreadedCode23527, 1, PSend23528);
    // ifTrue:. 
    Send PSend23525 = new_Send((Optr)PSend23524, SMB_ifTrue_, 1, (Optr)PBlock23526);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23531 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23530 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23531);
    Assign PAssign23529 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23530);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23534 = new_String(L" ");
    Constant string_23534_Const = new_Constant((Optr)string_23534);
    // findTokens:. 
    Send PSend23533 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23534_Const);
    Assign PAssign23532 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23533);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23535 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23536 = new_Send((Optr)PSend23535, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23540 = new_String(L"Invalid HTTP request: ");
    Constant string_23540_Const = new_Constant((Optr)string_23540);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23541 = new_Send((Optr)string_23540_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23542 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23541);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23543 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23542);
    Array PThreadedCode23539 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23540, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23541, (Optr)&t_send1, (Optr)PSend23542, (Optr)&t_send1, (Optr)PSend23543, (Optr)&t_block_return);
    Block PBlock23538 = new_Block_with(empty_Array, empty_Array, PThreadedCode23539, 1, PSend23543);
    // ifTrue:. 
    Send PSend23537 = new_Send((Optr)PSend23536, SMB_ifTrue_, 1, (Optr)PBlock23538);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23545 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23544 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23545);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23547 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23546 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23547);
    // size. 
    Send PSend23548 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23549 = new_Send((Optr)PSend23548, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23554 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23553 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23554);
    Array PThreadedCode23552 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23553, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23554, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23551 = new_Block_with(empty_Array, empty_Array, PThreadedCode23552, 1, PAssign23553);
    String string_23558 = new_String(L"HTTP/1.0");
    Constant string_23558_Const = new_Constant((Optr)string_23558);
    Assign PAssign23557 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23558_Const);
    Array PThreadedCode23556 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23557, (Optr)&t_push1, (Optr)string_23558, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23555 = new_Block_with(empty_Array, empty_Array, PThreadedCode23556, 1, PAssign23557);
    // ifTrue:ifFalse:. 
    Send PSend23550 = new_Send((Optr)PSend23549, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23551, (Optr)PBlock23555);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23560 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23559 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23560);
    Array PThreadedCode23522 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23523, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23524, (Optr)&t_send_ifTrue_, (Optr)PSend23525, (Optr)PBlock23526, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23529, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23531, (Optr)&t_send1, (Optr)PSend23530, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23532, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23534, (Optr)&t_send1, (Optr)PSend23533, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23535, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23536, (Optr)&t_send_ifTrue_, (Optr)PSend23537, (Optr)PBlock23538, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23544, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23545, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23546, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23547, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23548, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23549, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23550, (Optr)PBlock23551, (Optr)PBlock23555, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23559, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23560, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23520 = new_Block_with(PArray23521, empty_Array, PThreadedCode23522, 10, PAssign23523, PSend23525, PAssign23529, PAssign23532, PSend23537, PAssign23544, PAssign23546, PSend23550, PAssign23559, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23561 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23520);
    Array PThreadedCode23519 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23520, (Optr)&t_send1, (Optr)PSend23561, (Optr)&t_method_return);
    Method PMethod23516 = new_Method_with(PArray23517, PArray23518, empty_Array, PThreadedCode23519, 1, PSend23561);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23516, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23563 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23564 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23568 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23569 = new_String(L"HTTP/1.1");
    Constant string_23569_Const = new_Constant((Optr)string_23569);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23567 = new_Send((Optr)PSend23568, SMB_protocol_code_, 2, (Optr)string_23569_Const, (Optr)int_405_Const);
    Assign PAssign23566 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23567);
    String string_23570 = new_String(L"Content-Type");
    String string_23571 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23570_Const = new_Constant((Optr)string_23570);
    Constant string_23571_Const = new_Constant((Optr)string_23571);
    // headerAt:put:. 
    Send PSend23572 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23570_Const, (Optr)string_23571_Const);
    String string_23573 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23575 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23578 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23580 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23579 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23580, (Optr)&t_method_return);
    Block PBlock23577 = new_Block_with(PArray23578, empty_Array, PThreadedCode23579, 1, PSend23580);
    Character char_23583 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23583_Const = new_Constant((Optr)char_23583);
    // nextPut:. 
    Send PSend23584 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23583_Const);
    Array PThreadedCode23582 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23583, (Optr)&t_send1, (Optr)PSend23584, (Optr)&t_block_return);
    Block PBlock23581 = new_Block_with(empty_Array, empty_Array, PThreadedCode23582, 1, PSend23584);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23585 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23577, (Optr)PBlock23581);
    Array PThreadedCode23576 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23577, (Optr)&t_push_closure, (Optr)PBlock23581, (Optr)&t_send2, (Optr)PSend23585, (Optr)&t_method_return);
    Block PBlock23574 = new_Block_with(PArray23575, empty_Array, PThreadedCode23576, 1, PSend23585);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23586 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23574);
    Constant string_23573_Const = new_Constant((Optr)string_23573);
    // headerAt:put:. 
    Send PSend23587 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23573_Const, (Optr)PSend23586);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23588 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23565 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23566, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23568, (Optr)&t_push1, (Optr)string_23569, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23567, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23570, (Optr)&t_push1, (Optr)string_23571, (Optr)&t_send2, (Optr)PSend23572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23573, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23574, (Optr)&t_send1, (Optr)PSend23586, (Optr)&t_send2, (Optr)PSend23587, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23588, (Optr)&t_method_return);
    Method PMethod23562 = new_Method_with(PArray23563, PArray23564, empty_Array, PThreadedCode23565, 4, PAssign23566, PSend23572, PSend23587, PSend23588);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23562, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23590 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23593 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23594 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23592 = new_Block_with(PArray23593, empty_Array, PThreadedCode23594, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23595 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23592);
    Array PThreadedCode23591 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23592, (Optr)&t_send2, (Optr)PSend23595, (Optr)&t_method_return);
    Method PMethod23589 = new_Method_with(PArray23590, empty_Array, empty_Array, PThreadedCode23591, 1, PSend23595);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23589, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23597 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23598 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23602 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23603 = new_String(L"HTTP/1.1");
    Constant string_23603_Const = new_Constant((Optr)string_23603);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23601 = new_Send((Optr)PSend23602, SMB_protocol_code_, 2, (Optr)string_23603_Const, (Optr)int_200_Const);
    Assign PAssign23600 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23601);
    String string_23604 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23604_Const = new_Constant((Optr)string_23604);
    // headerAt:put:. 
    Send PSend23605 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23604_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23606 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23607 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23599 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23600, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23602, (Optr)&t_push1, (Optr)string_23603, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23601, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23604, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23606, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23607, (Optr)&t_method_return);
    Method PMethod23596 = new_Method_with(PArray23597, PArray23598, empty_Array, PThreadedCode23599, 4, PAssign23600, PSend23605, PSend23606, PSend23607);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23596, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23609 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23611 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23611_Const = new_Constant((Optr)string_23611);
    // send200Response:contentType:. 
    Send PSend23612 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23611_Const);
    Array PThreadedCode23610 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23611, (Optr)&t_send2, (Optr)PSend23612, (Optr)&t_method_return);
    Method PMethod23608 = new_Method_with(PArray23609, empty_Array, empty_Array, PThreadedCode23610, 1, PSend23612);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23608, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper23615 = new_Super(SMB_initialize, 0);
    String string_23617 = new_String(L"GET");
    Constant string_23617_Const = new_Constant((Optr)string_23617);
    Assign PAssign23616 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23617_Const);
    String string_23619 = new_String(L"HTTP/1.1");
    Constant string_23619_Const = new_Constant((Optr)string_23619);
    Assign PAssign23618 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23619_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23621 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23620 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23621);
    Array PThreadedCode23614 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23615, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23616, (Optr)&t_push1, (Optr)string_23617, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23618, (Optr)&t_push1, (Optr)string_23619, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23620, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23621, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23613 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23614, 5, PSuper23615, PAssign23616, PAssign23618, PAssign23620, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23613, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23624 = new_Send((Optr)self, SMB_method, 0);
    String string_23625 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23625_Const = new_Constant((Optr)string_23625);
    // =. 
    Send PSend23626 = new_Send((Optr)PSend23624, SMB__equals_, 1, (Optr)string_23625_Const);
    Array PThreadedCode23623 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23624, (Optr)&t_push1, (Optr)string_23625, (Optr)&t_send1, (Optr)PSend23626, (Optr)&t_method_return);
    Method PMethod23622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23623, 1, PSend23626);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod23622, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23628 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23630 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23629 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23630, (Optr)&t_method_return);
    Method PMethod23627 = new_Method_with(PArray23628, empty_Array, empty_Array, PThreadedCode23629, 1, PSend23630);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod23627, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23632 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23636 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23636_Const = new_Constant((Optr)string_23636);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23637 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23637_Const = new_Constant((Optr)string_23637);
    // ,. 
    Send PSend23635 = new_Send((Optr)string_23636_Const, SMB__append_, 1, (Optr)string_23637_Const);
    Assign PAssign23634 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23635);
    SmallInt int_400 = new_SmallInt(400);
    String string_23638 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23638_Const = new_Constant((Optr)string_23638);
    // sendResponseCode:content:type:close:. 
    Send PSend23639 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23638_Const, (Optr)true_Const);
    Array PThreadedCode23633 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23634, (Optr)&t_push1, (Optr)string_23636, (Optr)&t_push1, (Optr)string_23637, (Optr)&t_send1, (Optr)PSend23635, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23638, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23639, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23631 = new_Method_with(empty_Array, PArray23632, empty_Array, PThreadedCode23633, 3, PAssign23634, PSend23639, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23631, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23643 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23645 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23646 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23644 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23645, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23646, (Optr)&t_method_return);
    Block PBlock23642 = new_Block_with(PArray23643, empty_Array, PThreadedCode23644, 2, PSend23645, PSend23646);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23647 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23648 = new_Send((Optr)PBlock23642, SMB_value_, 1, (Optr)PSend23647);
    Array PThreadedCode23641 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23642, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23647, (Optr)&t_send1, (Optr)PSend23648, (Optr)&t_method_return);
    Method PMethod23640 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23641, 1, PSend23648);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23640, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23651 = new_Send((Optr)self, SMB_method, 0);
    String string_23652 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23652_Const = new_Constant((Optr)string_23652);
    // =. 
    Send PSend23653 = new_Send((Optr)PSend23651, SMB__equals_, 1, (Optr)string_23652_Const);
    Array PThreadedCode23650 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23651, (Optr)&t_push1, (Optr)string_23652, (Optr)&t_send1, (Optr)PSend23653, (Optr)&t_method_return);
    Method PMethod23649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23650, 1, PSend23653);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23649, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray23655 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23658 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_23660 = new_String(L"Content-Type");
    String string_23661 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23660_Const = new_Constant((Optr)string_23660);
    Constant string_23661_Const = new_Constant((Optr)string_23661);
    // headerAt:put:. 
    Send PSend23662 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_23660_Const, (Optr)string_23661_Const);
    Array PThreadedCode23659 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_23660, (Optr)&t_push1, (Optr)string_23661, (Optr)&t_send2, (Optr)PSend23662, (Optr)&t_method_return);
    Block PBlock23657 = new_Block_with(PArray23658, empty_Array, PThreadedCode23659, 1, PSend23662);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend23663 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock23657);
    Array PThreadedCode23656 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock23657, (Optr)&t_send2, (Optr)PSend23663, (Optr)&t_method_return);
    Method PMethod23654 = new_Method_with(PArray23655, empty_Array, empty_Array, PThreadedCode23656, 1, PSend23663);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod23654, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23665 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23668 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23667 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23668);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend23669 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray23671 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23673 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23672 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23673, (Optr)&t_method_return);
    Block PBlock23670 = new_Block_with(PArray23671, empty_Array, PThreadedCode23672, 1, PSend23673);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend23674 = new_Send((Optr)PSend23669, SMB_associationsDo_, 1, (Optr)PBlock23670);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend23675 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray23677 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23679 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23678 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23679, (Optr)&t_method_return);
    Block PBlock23676 = new_Block_with(PArray23677, empty_Array, PThreadedCode23678, 1, PSend23679);
    // associationsDo:. 
    Send PSend23680 = new_Send((Optr)PSend23675, SMB_associationsDo_, 1, (Optr)PBlock23676);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend23681 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray23683 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23685 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23684 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23685, (Optr)&t_method_return);
    Block PBlock23682 = new_Block_with(PArray23683, empty_Array, PThreadedCode23684, 1, PSend23685);
    // associationsDo:. 
    Send PSend23686 = new_Send((Optr)PSend23681, SMB_associationsDo_, 1, (Optr)PBlock23682);
    Array PThreadedCode23666 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23667, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23668, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23669, (Optr)&t_push_closure, (Optr)PBlock23670, (Optr)&t_send1, (Optr)PSend23674, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23675, (Optr)&t_push_closure, (Optr)PBlock23676, (Optr)&t_send1, (Optr)PSend23680, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23681, (Optr)&t_push_closure, (Optr)PBlock23682, (Optr)&t_send1, (Optr)PSend23686, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23664 = new_Method_with(empty_Array, PArray23665, empty_Array, PThreadedCode23666, 5, PAssign23667, PSend23674, PSend23680, PSend23686, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod23664, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_23689 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23690 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_23689_Const = new_Constant((Optr)string_23689);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23691 = new_Send((Optr)string_23689_Const, SMB__append_, 1, (Optr)PSend23690);
    String string_23692 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_23692_Const = new_Constant((Optr)string_23692);
    // ,. 
    Send PSend23693 = new_Send((Optr)PSend23691, SMB__append_, 1, (Optr)string_23692_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend23694 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend23693);
    Array PThreadedCode23688 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23689, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23690, (Optr)&t_send1, (Optr)PSend23691, (Optr)&t_push1, (Optr)string_23692, (Optr)&t_send1, (Optr)PSend23693, (Optr)&t_send1, (Optr)PSend23694, (Optr)&t_method_return);
    Method PMethod23687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23688, 1, PSend23694);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod23687, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23697 = new_Send((Optr)self, SMB_method, 0);
    String string_23698 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23698_Const = new_Constant((Optr)string_23698);
    // =. 
    Send PSend23699 = new_Send((Optr)PSend23697, SMB__equals_, 1, (Optr)string_23698_Const);
    Array PThreadedCode23696 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23697, (Optr)&t_push1, (Optr)string_23698, (Optr)&t_send1, (Optr)PSend23699, (Optr)&t_method_return);
    Method PMethod23695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23696, 1, PSend23699);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod23695, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23701 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend23703 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23702 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23703, (Optr)&t_method_return);
    Method PMethod23700 = new_Method_with(PArray23701, empty_Array, empty_Array, PThreadedCode23702, 1, PSend23703);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod23700, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray23705 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23708 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23709 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23707 = new_Block_with(PArray23708, empty_Array, PThreadedCode23709, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend23710 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock23707);
    Array PThreadedCode23706 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock23707, (Optr)&t_send3, (Optr)PSend23710, (Optr)&t_method_return);
    Method PMethod23704 = new_Method_with(PArray23705, empty_Array, empty_Array, PThreadedCode23706, 1, PSend23710);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod23704, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23712 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23715 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23714 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23715);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray23717 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_23719 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray23721 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23723 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode23722 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend23723, (Optr)&t_method_return);
    Block PBlock23720 = new_Block_with(PArray23721, empty_Array, PThreadedCode23722, 1, PSend23723);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_23719_Const = new_Constant((Optr)string_23719);
    // at:ifPresent:. 
    Send PSend23724 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_23719_Const, (Optr)PBlock23720);
    Array PThreadedCode23718 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_23719, (Optr)&t_push_closure, (Optr)PBlock23720, (Optr)&t_send2, (Optr)PSend23724, (Optr)&t_method_return);
    Block PBlock23716 = new_Block_with(PArray23717, empty_Array, PThreadedCode23718, 1, PSend23724);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend23725 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock23716);
    Array PThreadedCode23713 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign23714, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23715, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23716, (Optr)&t_send1, (Optr)PSend23725, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23711 = new_Method_with(empty_Array, PArray23712, empty_Array, PThreadedCode23713, 3, PAssign23714, PSend23725, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod23711, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray23727 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23728 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23732 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23733 = new_String(L"HTTP/1.1");
    Constant string_23733_Const = new_Constant((Optr)string_23733);
    // protocol:code:. 
    Send PSend23731 = new_Send((Optr)PSend23732, SMB_protocol_code_, 2, (Optr)string_23733_Const, (Optr)VAR_code_0_0);
    Assign PAssign23730 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23731);
    String string_23734 = new_String(L"Transfer-Encoding");
    String string_23735 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23734_Const = new_Constant((Optr)string_23734);
    Constant string_23735_Const = new_Constant((Optr)string_23735);
    // headerAt:put:. 
    Send PSend23736 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23734_Const, (Optr)string_23735_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23737 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray23739 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend23741 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend23742 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23744 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23746 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23746_Const = new_Constant((Optr)string_23746);
    // nextPutAll:. 
    Send PSend23747 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_23746_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23748 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend23749 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23750 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode23745 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_23746, (Optr)&t_send1, (Optr)PSend23747, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23748, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23749, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23750, (Optr)&t_method_return);
    Block PBlock23743 = new_Block_with(PArray23744, empty_Array, PThreadedCode23745, 4, PSend23747, PSend23748, PSend23749, PSend23750);
    // value:. 
    Send PSend23751 = new_Send((Optr)PBlock23743, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode23740 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23741, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23742, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23743, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23751, (Optr)&t_method_return);
    Block PBlock23738 = new_Block_with(PArray23739, empty_Array, PThreadedCode23740, 3, PSend23741, PSend23742, PSend23751);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23752 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock23738);
    Array PThreadedCode23729 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23730, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23732, (Optr)&t_push1, (Optr)string_23733, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23731, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23734, (Optr)&t_push1, (Optr)string_23735, (Optr)&t_send2, (Optr)PSend23736, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23737, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock23738, (Optr)&t_send2, (Optr)PSend23752, (Optr)&t_method_return);
    Method PMethod23726 = new_Method_with(PArray23727, PArray23728, empty_Array, PThreadedCode23729, 4, PAssign23730, PSend23736, PSend23737, PSend23752);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod23726, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray23754 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_23758 = new_String(L"Connection");
    String string_23759 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23758_Const = new_Constant((Optr)string_23758);
    Constant string_23759_Const = new_Constant((Optr)string_23759);
    // headerAt:put:. 
    Send PSend23760 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23758_Const, (Optr)string_23759_Const);
    Array PThreadedCode23757 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23758, (Optr)&t_push1, (Optr)string_23759, (Optr)&t_send2, (Optr)PSend23760, (Optr)&t_block_return);
    Block PBlock23756 = new_Block_with(empty_Array, empty_Array, PThreadedCode23757, 1, PSend23760);
    String string_23763 = new_String(L"Content-Length");
    Constant string_23763_Const = new_Constant((Optr)string_23763);
    // headerAt:put:. 
    Send PSend23764 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23763_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode23762 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23763, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend23764, (Optr)&t_block_return);
    Block PBlock23761 = new_Block_with(empty_Array, empty_Array, PThreadedCode23762, 1, PSend23764);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23765 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23756, (Optr)PBlock23761);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray23767 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23769 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode23768 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23769, (Optr)&t_method_return);
    Block PBlock23766 = new_Block_with(PArray23767, empty_Array, PThreadedCode23768, 1, PSend23769);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23770 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23766);
    Array PThreadedCode23755 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock23756, (Optr)&t_push_closure, (Optr)PBlock23761, (Optr)&t_send2, (Optr)PSend23765, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23766, (Optr)&t_send2, (Optr)PSend23770, (Optr)&t_method_return);
    Method PMethod23753 = new_Method_with(PArray23754, empty_Array, empty_Array, PThreadedCode23755, 2, PSend23765, PSend23770);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod23753, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray23772 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign23774 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode23773 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23774, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23771 = new_Method_with(PArray23772, empty_Array, empty_Array, PThreadedCode23773, 2, PAssign23774, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod23771, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23776 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23777 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23781 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23782 = new_String(L"HTTP/1.1");
    Constant string_23782_Const = new_Constant((Optr)string_23782);
    // protocol:code:. 
    Send PSend23780 = new_Send((Optr)PSend23781, SMB_protocol_code_, 2, (Optr)string_23782_Const, (Optr)VAR_code_0_0);
    Assign PAssign23779 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23780);
    String string_23785 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23785_Const = new_Constant((Optr)string_23785);
    // headerAt:put:. 
    Send PSend23786 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23785_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode23784 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23785, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23786, (Optr)&t_block_return);
    Block PBlock23783 = new_Block_with(empty_Array, empty_Array, PThreadedCode23784, 1, PSend23786);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23787 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23783);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23788 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23789 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode23778 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23779, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23781, (Optr)&t_push1, (Optr)string_23782, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23780, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23783, (Optr)&t_send1, (Optr)PSend23787, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23788, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend23789, (Optr)&t_method_return);
    Method PMethod23775 = new_Method_with(PArray23776, PArray23777, empty_Array, PThreadedCode23778, 4, PAssign23779, PSend23787, PSend23788, PSend23789);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod23775, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23791 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend23793 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode23792 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend23793, (Optr)&t_method_return);
    Method PMethod23790 = new_Method_with(PArray23791, empty_Array, empty_Array, PThreadedCode23792, 1, PSend23793);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod23790, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23795 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray23796 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23800 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23799 = new_Send((Optr)PSend23800, SMB_not, 0);
    Assign PAssign23798 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend23799);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_23804 = new_String(L"Connection");
    String string_23805 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23804_Const = new_Constant((Optr)string_23804);
    Constant string_23805_Const = new_Constant((Optr)string_23805);
    // headerAt:put:. 
    Send PSend23806 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23804_Const, (Optr)string_23805_Const);
    Array PThreadedCode23803 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23804, (Optr)&t_push1, (Optr)string_23805, (Optr)&t_send2, (Optr)PSend23806, (Optr)&t_block_return);
    Block PBlock23802 = new_Block_with(empty_Array, empty_Array, PThreadedCode23803, 1, PSend23806);
    // ifTrue:. 
    Send PSend23801 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23802);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23807 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23808 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23812 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23811 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23812, (Optr)&t_block_return);
    Block PBlock23810 = new_Block_with(empty_Array, empty_Array, PThreadedCode23811, 1, PSend23812);
    // ifTrue:. 
    Send PSend23809 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock23810);
    Array PThreadedCode23797 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign23798, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23800, (Optr)&t_send0, (Optr)PSend23799, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23801, (Optr)PBlock23802, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23807, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23808, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend23809, (Optr)PBlock23810, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23794 = new_Method_with(PArray23795, PArray23796, empty_Array, PThreadedCode23797, 6, PAssign23798, PSend23801, PSend23807, PSend23808, PSend23809, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod23794, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23814 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23816 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23816_Const = new_Constant((Optr)string_23816);
    // send200Response:contentType:. 
    Send PSend23817 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_23816_Const);
    Array PThreadedCode23815 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_23816, (Optr)&t_send2, (Optr)PSend23817, (Optr)&t_method_return);
    Method PMethod23813 = new_Method_with(PArray23814, empty_Array, empty_Array, PThreadedCode23815, 1, PSend23817);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod23813, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23820 = new_Send((Optr)self, SMB_method, 0);
    String string_23821 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23821_Const = new_Constant((Optr)string_23821);
    // =. 
    Send PSend23822 = new_Send((Optr)PSend23820, SMB__equals_, 1, (Optr)string_23821_Const);
    Array PThreadedCode23819 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23820, (Optr)&t_push1, (Optr)string_23821, (Optr)&t_send1, (Optr)PSend23822, (Optr)&t_method_return);
    Method PMethod23818 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23819, 1, PSend23822);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod23818, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray23824 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23827 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23828 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23826 = new_Block_with(PArray23827, empty_Array, PThreadedCode23828, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend23829 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock23826);
    Array PThreadedCode23825 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock23826, (Optr)&t_send3, (Optr)PSend23829, (Optr)&t_method_return);
    Method PMethod23823 = new_Method_with(PArray23824, empty_Array, empty_Array, PThreadedCode23825, 1, PSend23829);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod23823, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray23831 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_23833 = new_String(L"Date");
    Array PThreadedCode23835 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23834 = new_Block_with(empty_Array, empty_Array, PThreadedCode23835, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23836 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23834);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend23837 = new_Send((Optr)PSend23836, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23833_Const = new_Constant((Optr)string_23833);
    // headerAt:put:. 
    Send PSend23838 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23833_Const, (Optr)PSend23837);
    String string_23839 = new_String(L"Server");
    Array PThreadedCode23841 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock23840 = new_Block_with(empty_Array, empty_Array, PThreadedCode23841, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend23842 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock23840);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend23843 = new_Send((Optr)PSend23842, SMB_serverString, 0);
    Constant string_23839_Const = new_Constant((Optr)string_23839);
    // headerAt:put:. 
    Send PSend23844 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23839_Const, (Optr)PSend23843);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23849 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23850 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend23851 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23855 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode23854 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23855, (Optr)&t_block_return);
    Block PBlock23853 = new_Block_with(empty_Array, empty_Array, PThreadedCode23854, 1, PSend23855);
    // ifFalse:. 
    Send PSend23852 = new_Send((Optr)PSend23851, SMB_ifFalse_, 1, (Optr)PBlock23853);
    Array PThreadedCode23848 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23849, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23850, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23851, (Optr)&t_send_ifFalse_, (Optr)PSend23852, (Optr)PBlock23853, (Optr)&t_block_return);
    Block PBlock23847 = new_Block_with(empty_Array, empty_Array, PThreadedCode23848, 3, PSend23849, PSend23850, PSend23852);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray23857 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode23858 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23856 = new_Block_with(PArray23857, empty_Array, PThreadedCode23858, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23859 = new_Send((Optr)PBlock23847, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock23856);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend23862 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode23861 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend23862, (Optr)&t_block_return);
    Block PBlock23860 = new_Block_with(empty_Array, empty_Array, PThreadedCode23861, 1, PSend23862);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23863 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock23860);
    Array PThreadedCode23846 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock23847, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock23856, (Optr)&t_send2, (Optr)PSend23859, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23860, (Optr)&t_send1, (Optr)PSend23863, (Optr)&t_block_return);
    Block PBlock23845 = new_Block_with(empty_Array, empty_Array, PThreadedCode23846, 2, PSend23859, PSend23863);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend23864 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23845);
    Array PThreadedCode23832 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23833, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23834, (Optr)&t_send1, (Optr)PSend23836, (Optr)&t_send0, (Optr)PSend23837, (Optr)&t_send2, (Optr)PSend23838, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23839, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock23840, (Optr)&t_send1, (Optr)PSend23842, (Optr)&t_send0, (Optr)PSend23843, (Optr)&t_send2, (Optr)PSend23844, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23845, (Optr)&t_send2, (Optr)PSend23864, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23830 = new_Method_with(PArray23831, empty_Array, empty_Array, PThreadedCode23832, 4, PSend23838, PSend23844, PSend23864, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod23830, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode23866 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod23865 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23866, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod23865, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray23868 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_23870 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_23870_Const = new_Constant((Optr)string_23870);
    // stream200Response:size:type:. 
    Send PSend23871 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_23870_Const);
    Array PThreadedCode23869 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_23870, (Optr)&t_send3, (Optr)PSend23871, (Optr)&t_method_return);
    Method PMethod23867 = new_Method_with(PArray23868, empty_Array, empty_Array, PThreadedCode23869, 1, PSend23871);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod23867, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23873 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23876 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23877 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23875 = new_Block_with(PArray23876, empty_Array, PThreadedCode23877, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend23878 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23875);
    Array PThreadedCode23874 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23875, (Optr)&t_send2, (Optr)PSend23878, (Optr)&t_method_return);
    Method PMethod23872 = new_Method_with(PArray23873, empty_Array, empty_Array, PThreadedCode23874, 1, PSend23878);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod23872, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23880 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray23881 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign23883 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_23884 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23884_Const = new_Constant((Optr)string_23884);
    // findString:. 
    Send PSend23885 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_23884_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend23886 = new_Send((Optr)PSend23885, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23890 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23890_Const = new_Constant((Optr)string_23890);
    // headerAt:. 
    Send PSend23891 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23890_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray23893 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_23898 = new_String(L"http://");
    Constant string_23898_Const = new_Constant((Optr)string_23898);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23897 = new_Send((Optr)string_23898_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend23896 = new_Send((Optr)PSend23897, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign23895 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend23896);
    Array PThreadedCode23894 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign23895, (Optr)&t_push1, (Optr)string_23898, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend23897, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend23896, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23892 = new_Block_with(PArray23893, empty_Array, PThreadedCode23894, 1, PAssign23895);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23899 = new_Send((Optr)PSend23891, SMB_ifNotEmpty_, 1, (Optr)PBlock23892);
    Array PThreadedCode23889 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23890, (Optr)&t_send1, (Optr)PSend23891, (Optr)&t_push_closure, (Optr)PBlock23892, (Optr)&t_send1, (Optr)PSend23899, (Optr)&t_block_return);
    Block PBlock23888 = new_Block_with(empty_Array, empty_Array, PThreadedCode23889, 1, PSend23899);
    // ifFalse:. 
    Send PSend23887 = new_Send((Optr)PSend23886, SMB_ifFalse_, 1, (Optr)PBlock23888);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23902 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23903 = new_String(L"HTTP/1.1");
    Constant string_23903_Const = new_Constant((Optr)string_23903);
    // protocol:code:. 
    Send PSend23901 = new_Send((Optr)PSend23902, SMB_protocol_code_, 2, (Optr)string_23903_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign23900 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23901);
    String string_23904 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23904_Const = new_Constant((Optr)string_23904);
    // headerAt:put:. 
    Send PSend23905 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23904_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23906 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_23907 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_23907_Const = new_Constant((Optr)string_23907);
    // sendResponse:content:. 
    Send PSend23908 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_23907_Const);
    Array PThreadedCode23882 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23883, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_23884, (Optr)&t_send1, (Optr)PSend23885, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23886, (Optr)&t_send_ifFalse_, (Optr)PSend23887, (Optr)PBlock23888, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23900, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23902, (Optr)&t_push1, (Optr)string_23903, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend23901, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23904, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend23905, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23906, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23907, (Optr)&t_send2, (Optr)PSend23908, (Optr)&t_method_return);
    Method PMethod23879 = new_Method_with(PArray23880, PArray23881, empty_Array, PThreadedCode23882, 6, PAssign23883, PSend23887, PAssign23900, PSend23905, PSend23906, PSend23908);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod23879, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23911 = new_Send((Optr)self, SMB_method, 0);
    String string_23912 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23912_Const = new_Constant((Optr)string_23912);
    // =. 
    Send PSend23913 = new_Send((Optr)PSend23911, SMB__equals_, 1, (Optr)string_23912_Const);
    Array PThreadedCode23910 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23911, (Optr)&t_push1, (Optr)string_23912, (Optr)&t_send1, (Optr)PSend23913, (Optr)&t_method_return);
    Method PMethod23909 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23910, 1, PSend23913);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod23909, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23915 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23918 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23920 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23921 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23922 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend23923 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend23924 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23925 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode23919 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend23920, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23921, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend23922, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend23924, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23925, (Optr)&t_method_return);
    Block PBlock23917 = new_Block_with(PArray23918, empty_Array, PThreadedCode23919, 6, PSend23920, PSend23921, PSend23922, PSend23923, PSend23924, PSend23925);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23926 = new_Send((Optr)PBlock23917, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23916 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23917, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23926, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23914 = new_Method_with(PArray23915, empty_Array, empty_Array, PThreadedCode23916, 2, PSend23926, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod23914, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23928 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23930 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23931 = new_Send((Optr)self, SMB_method, 0);
    Constant string_23930_Const = new_Constant((Optr)string_23930);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23932 = new_Send((Optr)string_23930_Const, SMB__append_, 1, (Optr)PSend23931);
    String string_23933 = new_String(L" is not allowed for the URL");
    Constant string_23933_Const = new_Constant((Optr)string_23933);
    // ,. 
    Send PSend23934 = new_Send((Optr)PSend23932, SMB__append_, 1, (Optr)string_23933_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23935 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23936 = new_Send((Optr)PSend23934, SMB__append_, 1, (Optr)PSend23935);
    String string_23937 = new_String(L"</p></body></html>");
    Constant string_23937_Const = new_Constant((Optr)string_23937);
    // ,. 
    Send PSend23938 = new_Send((Optr)PSend23936, SMB__append_, 1, (Optr)string_23937_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend23939 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend23938);
    Array PThreadedCode23929 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_23930, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23931, (Optr)&t_send1, (Optr)PSend23932, (Optr)&t_push1, (Optr)string_23933, (Optr)&t_send1, (Optr)PSend23934, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23935, (Optr)&t_send1, (Optr)PSend23936, (Optr)&t_push1, (Optr)string_23937, (Optr)&t_send1, (Optr)PSend23938, (Optr)&t_send2, (Optr)PSend23939, (Optr)&t_method_return);
    Method PMethod23927 = new_Method_with(PArray23928, empty_Array, empty_Array, PThreadedCode23929, 1, PSend23939);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod23927, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray23941 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray23942 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_23948 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23948_Const = new_Constant((Optr)string_23948);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23949 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_23949_Const = new_Constant((Optr)string_23949);
    // ,. 
    Send PSend23947 = new_Send((Optr)string_23948_Const, SMB__append_, 1, (Optr)string_23949_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23951 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23952 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23950 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23951, (Optr)PSend23952);
    // ,. 
    Send PSend23946 = new_Send((Optr)PSend23947, SMB__append_, 1, (Optr)PSend23950);
    String string_23953 = new_String(L"</pre></body></html>");
    Constant string_23953_Const = new_Constant((Optr)string_23953);
    // ,. 
    Send PSend23945 = new_Send((Optr)PSend23946, SMB__append_, 1, (Optr)string_23953_Const);
    Assign PAssign23944 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend23945);
    SmallInt int_500 = new_SmallInt(500);
    String string_23954 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23954_Const = new_Constant((Optr)string_23954);
    // sendResponseCode:content:type:close:. 
    Send PSend23955 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_23954_Const, (Optr)true_Const);
    Array PThreadedCode23943 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23944, (Optr)&t_push1, (Optr)string_23948, (Optr)&t_push1, (Optr)string_23949, (Optr)&t_send1, (Optr)PSend23947, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23951, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23952, (Optr)&t_send2, (Optr)PSend23950, (Optr)&t_send1, (Optr)PSend23946, (Optr)&t_push1, (Optr)string_23953, (Optr)&t_send1, (Optr)PSend23945, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_23954, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23955, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23940 = new_Method_with(PArray23941, PArray23942, empty_Array, PThreadedCode23943, 3, PAssign23944, PSend23955, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod23940, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23957 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23959 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode23958 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23959, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23956 = new_Method_with(PArray23957, empty_Array, empty_Array, PThreadedCode23958, 2, PAssign23959, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod23956, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23964 = new_Send((Optr)self, SMB_method, 0);
    String string_23965 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23965_Const = new_Constant((Optr)string_23965);
    // ,. 
    Send PSend23966 = new_Send((Optr)PSend23964, SMB__append_, 1, (Optr)string_23965_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23967 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23968 = new_Send((Optr)PSend23966, SMB__append_, 1, (Optr)PSend23967);
    String string_23969 = new_String(L" ");
    Constant string_23969_Const = new_Constant((Optr)string_23969);
    // ,. 
    Send PSend23970 = new_Send((Optr)PSend23968, SMB__append_, 1, (Optr)string_23969_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23971 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend23972 = new_Send((Optr)PSend23970, SMB__append_, 1, (Optr)PSend23971);
    Array PThreadedCode23963 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23964, (Optr)&t_push1, (Optr)string_23965, (Optr)&t_send1, (Optr)PSend23966, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23967, (Optr)&t_send1, (Optr)PSend23968, (Optr)&t_push1, (Optr)string_23969, (Optr)&t_send1, (Optr)PSend23970, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23971, (Optr)&t_send1, (Optr)PSend23972, (Optr)&t_block_return);
    Block PBlock23962 = new_Block_with(empty_Array, empty_Array, PThreadedCode23963, 1, PSend23972);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23973 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock23962);
    Array PThreadedCode23961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock23962, (Optr)&t_send1, (Optr)PSend23973, (Optr)&t_method_return);
    Method PMethod23960 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23961, 1, PSend23973);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod23960, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray23975 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23978 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23979 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23977 = new_Block_with(PArray23978, empty_Array, PThreadedCode23979, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend23980 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock23977);
    Array PThreadedCode23976 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock23977, (Optr)&t_send3, (Optr)PSend23980, (Optr)&t_method_return);
    Method PMethod23974 = new_Method_with(PArray23975, empty_Array, empty_Array, PThreadedCode23976, 1, PSend23980);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod23974, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23982 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23984 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23987 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23988 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23988_Const = new_Constant((Optr)string_23988);
    // beginsWith:. 
    Send PSend23989 = new_Send((Optr)PSend23987, SMB_beginsWith_, 1, (Optr)string_23988_Const);
    Array PThreadedCode23986 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23987, (Optr)&t_push1, (Optr)string_23988, (Optr)&t_send1, (Optr)PSend23989, (Optr)&t_block_return);
    Block PBlock23985 = new_Block_with(empty_Array, empty_Array, PThreadedCode23986, 1, PSend23989);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23990 = new_Send((Optr)PSend23984, SMB_and_, 1, (Optr)PBlock23985);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23994 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23995 = new_Send((Optr)PSend23994, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend23996 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend23997 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend23995, (Optr)PSend23996, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23993 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23994, (Optr)&t_send0, (Optr)PSend23995, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23996, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend23997, (Optr)&t_block_return);
    Block PBlock23992 = new_Block_with(empty_Array, empty_Array, PThreadedCode23993, 1, PSend23997);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24000 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23999 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24000, (Optr)&t_block_return);
    Block PBlock23998 = new_Block_with(empty_Array, empty_Array, PThreadedCode23999, 1, PSend24000);
    // ifTrue:ifFalse:. 
    Send PSend23991 = new_Send((Optr)PSend23990, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23992, (Optr)PBlock23998);
    Array PThreadedCode23983 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23984, (Optr)&t_push_closure, (Optr)PBlock23985, (Optr)&t_send1, (Optr)PSend23990, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23991, (Optr)PBlock23992, (Optr)PBlock23998, (Optr)&t_method_return);
    Method PMethod23981 = new_Method_with(PArray23982, empty_Array, empty_Array, PThreadedCode23983, 1, PSend23991);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod23981, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24003 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24006 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24007 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24007_Const = new_Constant((Optr)string_24007);
    // =. 
    Send PSend24008 = new_Send((Optr)PSend24006, SMB__equals_, 1, (Optr)string_24007_Const);
    Array PThreadedCode24005 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24006, (Optr)&t_push1, (Optr)string_24007, (Optr)&t_send1, (Optr)PSend24008, (Optr)&t_block_return);
    Block PBlock24004 = new_Block_with(empty_Array, empty_Array, PThreadedCode24005, 1, PSend24008);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24009 = new_Send((Optr)PSend24003, SMB_and_, 1, (Optr)PBlock24004);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24013 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend24014 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend24013, (Optr)true_Const);
    Array PThreadedCode24012 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24013, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend24014, (Optr)&t_block_return);
    Block PBlock24011 = new_Block_with(empty_Array, empty_Array, PThreadedCode24012, 1, PSend24014);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24017 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24016 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24017, (Optr)&t_block_return);
    Block PBlock24015 = new_Block_with(empty_Array, empty_Array, PThreadedCode24016, 1, PSend24017);
    // ifTrue:ifFalse:. 
    Send PSend24010 = new_Send((Optr)PSend24009, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24011, (Optr)PBlock24015);
    Array PThreadedCode24002 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24003, (Optr)&t_push_closure, (Optr)PBlock24004, (Optr)&t_send1, (Optr)PSend24009, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24010, (Optr)PBlock24011, (Optr)PBlock24015, (Optr)&t_method_return);
    Method PMethod24001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24002, 1, PSend24010);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod24001, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24019 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24021 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend24022 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend24021);
    Array PThreadedCode24020 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24021, (Optr)&t_send2, (Optr)PSend24022, (Optr)&t_method_return);
    Method PMethod24018 = new_Method_with(PArray24019, empty_Array, empty_Array, PThreadedCode24020, 1, PSend24022);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod24018, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24024 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24026 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode24025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24026, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24023 = new_Method_with(PArray24024, empty_Array, empty_Array, PThreadedCode24025, 2, PAssign24026, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod24023, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray24028 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24030 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24031 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24032 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend24030, (Optr)PSend24031);
    Array PThreadedCode24029 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24030, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24031, (Optr)&t_send3, (Optr)PSend24032, (Optr)&t_method_return);
    Method PMethod24027 = new_Method_with(PArray24028, empty_Array, empty_Array, PThreadedCode24029, 1, PSend24032);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod24027, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24034 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24036 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24037 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24035 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24036, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24037, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24033 = new_Method_with(PArray24034, empty_Array, empty_Array, PThreadedCode24035, 3, PSend24036, PSuper24037, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24033, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24039 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24040 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24044 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24045 = new_String(L"HTTP/1.1");
    Constant string_24045_Const = new_Constant((Optr)string_24045);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24043 = new_Send((Optr)PSend24044, SMB_protocol_code_, 2, (Optr)string_24045_Const, (Optr)int_200_Const);
    Assign PAssign24042 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24043);
    String string_24046 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24046_Const = new_Constant((Optr)string_24046);
    // headerAt:put:. 
    Send PSend24047 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24046_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24048 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24049 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode24041 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24042, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24044, (Optr)&t_push1, (Optr)string_24045, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24043, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24046, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend24047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24048, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend24049, (Optr)&t_method_return);
    Method PMethod24038 = new_Method_with(PArray24039, PArray24040, empty_Array, PThreadedCode24041, 4, PAssign24042, PSend24047, PSend24048, PSend24049);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod24038, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode24051 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24050 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24051, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24050, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2656 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // copyUpTo:. 
    Send PSend24054 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2656_Const);
    Character char_23504 = new_Character(L'?');
    Constant char_23504_Const = new_Constant((Optr)char_23504);
    // copyUpTo:. 
    Send PSend24055 = new_Send((Optr)PSend24054, SMB_copyUpTo_, 1, (Optr)char_23504_Const);
    Array PThreadedCode24053 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend24054, (Optr)&t_push1, (Optr)char_23504, (Optr)&t_send1, (Optr)PSend24055, (Optr)&t_method_return);
    Method PMethod24052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24053, 1, PSend24055);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24052, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24057 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24058 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24062 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24063 = new_String(L"HTTP/1.1");
    Constant string_24063_Const = new_Constant((Optr)string_24063);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24061 = new_Send((Optr)PSend24062, SMB_protocol_code_, 2, (Optr)string_24063_Const, (Optr)int_404_Const);
    Assign PAssign24060 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24061);
    String string_24064 = new_String(L"Content-Type");
    String string_24065 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24064_Const = new_Constant((Optr)string_24064);
    Constant string_24065_Const = new_Constant((Optr)string_24065);
    // headerAt:put:. 
    Send PSend24066 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24064_Const, (Optr)string_24065_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24067 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24068 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24059 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24060, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24062, (Optr)&t_push1, (Optr)string_24063, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24061, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24064, (Optr)&t_push1, (Optr)string_24065, (Optr)&t_send2, (Optr)PSend24066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24067, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24068, (Optr)&t_method_return);
    Method PMethod24056 = new_Method_with(PArray24057, PArray24058, empty_Array, PThreadedCode24059, 4, PAssign24060, PSend24066, PSend24067, PSend24068);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24056, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray24070 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24073 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24074 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24072 = new_Block_with(PArray24073, empty_Array, PThreadedCode24074, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend24075 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24072);
    Array PThreadedCode24071 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24072, (Optr)&t_send4, (Optr)PSend24075, (Optr)&t_method_return);
    Method PMethod24069 = new_Method_with(PArray24070, empty_Array, empty_Array, PThreadedCode24071, 1, PSend24075);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod24069, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24078 = new_Send((Optr)self, SMB_method, 0);
    String string_24079 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24079_Const = new_Constant((Optr)string_24079);
    // =. 
    Send PSend24080 = new_Send((Optr)PSend24078, SMB__equals_, 1, (Optr)string_24079_Const);
    Array PThreadedCode24077 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24078, (Optr)&t_push1, (Optr)string_24079, (Optr)&t_send1, (Optr)PSend24080, (Optr)&t_method_return);
    Method PMethod24076 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24077, 1, PSend24080);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod24076, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24082 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24084 = new_String(L"");
    String string_24085 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24087 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24089 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24091 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24094 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24096 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24095 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24096, (Optr)&t_method_return);
    Block PBlock24093 = new_Block_with(PArray24094, empty_Array, PThreadedCode24095, 1, PSend24096);
    Character char_23583 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23583_Const = new_Constant((Optr)char_23583);
    // nextPut:. 
    Send PSend24099 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23583_Const);
    Array PThreadedCode24098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23583, (Optr)&t_send1, (Optr)PSend24099, (Optr)&t_block_return);
    Block PBlock24097 = new_Block_with(empty_Array, empty_Array, PThreadedCode24098, 1, PSend24099);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24100 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24093, (Optr)PBlock24097);
    Array PThreadedCode24092 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24093, (Optr)&t_push_closure, (Optr)PBlock24097, (Optr)&t_send2, (Optr)PSend24100, (Optr)&t_method_return);
    Block PBlock24090 = new_Block_with(PArray24091, empty_Array, PThreadedCode24092, 1, PSend24100);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24101 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24090);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24089_Const = new_Constant((Optr)string_24089);
    // headerAt:put:. 
    Send PSend24102 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24089_Const, (Optr)PSend24101);
    Array PThreadedCode24088 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24089, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24090, (Optr)&t_send1, (Optr)PSend24101, (Optr)&t_send2, (Optr)PSend24102, (Optr)&t_method_return);
    Block PBlock24086 = new_Block_with(PArray24087, empty_Array, PThreadedCode24088, 1, PSend24102);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24084_Const = new_Constant((Optr)string_24084);
    Constant string_24085_Const = new_Constant((Optr)string_24085);
    // send200Response:contentType:do:. 
    Send PSend24103 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24084_Const, (Optr)string_24085_Const, (Optr)PBlock24086);
    Array PThreadedCode24083 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24084, (Optr)&t_push1, (Optr)string_24085, (Optr)&t_push_closure, (Optr)PBlock24086, (Optr)&t_send3, (Optr)PSend24103, (Optr)&t_method_return);
    Method PMethod24081 = new_Method_with(PArray24082, empty_Array, empty_Array, PThreadedCode24083, 1, PSend24103);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24081, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode24105 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod24104 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24105, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod24104, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray24107 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24110 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24115 = new_String(L"Connection");
    String string_24116 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24115_Const = new_Constant((Optr)string_24115);
    Constant string_24116_Const = new_Constant((Optr)string_24116);
    // headerAt:put:. 
    Send PSend24117 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24115_Const, (Optr)string_24116_Const);
    Array PThreadedCode24114 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24115, (Optr)&t_push1, (Optr)string_24116, (Optr)&t_send2, (Optr)PSend24117, (Optr)&t_block_return);
    Block PBlock24113 = new_Block_with(empty_Array, empty_Array, PThreadedCode24114, 1, PSend24117);
    // ifTrue:. 
    Send PSend24112 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24113);
    Array PThreadedCode24111 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24112, (Optr)PBlock24113, (Optr)&t_method_return);
    Block PBlock24109 = new_Block_with(PArray24110, empty_Array, PThreadedCode24111, 1, PSend24112);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24118 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24109);
    Array PThreadedCode24108 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24109, (Optr)&t_send4, (Optr)PSend24118, (Optr)&t_method_return);
    Method PMethod24106 = new_Method_with(PArray24107, empty_Array, empty_Array, PThreadedCode24108, 1, PSend24118);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24106, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24120 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24122 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24123 = new_Send((Optr)PSend24122, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24121 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24122, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24123, (Optr)&t_method_return);
    Method PMethod24119 = new_Method_with(PArray24120, empty_Array, empty_Array, PThreadedCode24121, 1, PSend24123);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24119, HEADER(WebClient_Core_WebRequest_Class));
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