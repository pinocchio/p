#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24457 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24456 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24457, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24456, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24460 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24461 = new_Send((Optr)PSend24460, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24464 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24465 = new_Send((Optr)PSend24464, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24463 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24464, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24465, (Optr)&t_block_return);
    Block PBlock24462 = new_Block_with(empty_Array, empty_Array, PThreadedCode24463, 1, PSend24465);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24466 = new_Send((Optr)PSend24461, SMB_and_, 1, (Optr)PBlock24462);
    Array PThreadedCode24459 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24460, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24461, (Optr)&t_push_closure, (Optr)PBlock24462, (Optr)&t_send1, (Optr)PSend24466, (Optr)&t_method_return);
    Method PMethod24458 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24459, 1, PSend24466);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24458, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24468 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24469 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24472 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24474 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24477 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24476 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24477);
    Assign PAssign24475 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24476);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24480 = new_String(L" ");
    Constant string_24480_Const = new_Constant((Optr)string_24480);
    // findTokens:. 
    Send PSend24479 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24480_Const);
    Assign PAssign24478 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24479);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24481 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24482 = new_Send((Optr)PSend24481, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24486 = new_String(L"Invalid response: ");
    Constant string_24486_Const = new_Constant((Optr)string_24486);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24487 = new_Send((Optr)string_24486_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24488 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24487);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24489 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24488);
    Array PThreadedCode24485 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24486, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24487, (Optr)&t_send1, (Optr)PSend24488, (Optr)&t_send1, (Optr)PSend24489, (Optr)&t_block_return);
    Block PBlock24484 = new_Block_with(empty_Array, empty_Array, PThreadedCode24485, 1, PSend24489);
    // ifTrue:. 
    Send PSend24483 = new_Send((Optr)PSend24482, SMB_ifTrue_, 1, (Optr)PBlock24484);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24491 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24490 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24491);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24494 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24493 = new_Send((Optr)PSend24494, SMB_asInteger, 0);
    Assign PAssign24492 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24493);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24496 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24495 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24496);
    Array PThreadedCode24473 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24474, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24475, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24477, (Optr)&t_send1, (Optr)PSend24476, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24478, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24480, (Optr)&t_send1, (Optr)PSend24479, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24481, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24482, (Optr)&t_send_ifTrue_, (Optr)PSend24483, (Optr)PBlock24484, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24490, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24492, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24494, (Optr)&t_send0, (Optr)PSend24493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24495, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24496, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24471 = new_Block_with(PArray24472, empty_Array, PThreadedCode24473, 8, PAssign24474, PAssign24475, PAssign24478, PSend24483, PAssign24490, PAssign24492, PAssign24495, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24497 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24471);
    Array PThreadedCode24470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24471, (Optr)&t_send1, (Optr)PSend24497, (Optr)&t_method_return);
    Method PMethod24467 = new_Method_with(PArray24468, PArray24469, empty_Array, PThreadedCode24470, 1, PSend24497);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24467, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24499 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24501 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24500 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24501, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24498 = new_Method_with(PArray24499, empty_Array, empty_Array, PThreadedCode24500, 2, PAssign24501, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24498, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24503 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24505 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24506 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24504 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24505, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24506, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24502 = new_Method_with(PArray24503, empty_Array, empty_Array, PThreadedCode24504, 3, PSend24505, PSuper24506, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24502, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24508 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24507 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24508, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24507, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24510 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24512 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24511 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24512, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24509 = new_Method_with(PArray24510, empty_Array, empty_Array, PThreadedCode24511, 2, PAssign24512, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24509, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24514 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24516 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24515 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24516, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24513 = new_Method_with(PArray24514, empty_Array, empty_Array, PThreadedCode24515, 2, PAssign24516, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24513, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24519 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24520 = new_Send((Optr)PSend24519, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24523 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24524 = new_Send((Optr)PSend24523, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24522 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24523, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24524, (Optr)&t_block_return);
    Block PBlock24521 = new_Block_with(empty_Array, empty_Array, PThreadedCode24522, 1, PSend24524);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24525 = new_Send((Optr)PSend24520, SMB_and_, 1, (Optr)PBlock24521);
    Array PThreadedCode24518 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24519, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24520, (Optr)&t_push_closure, (Optr)PBlock24521, (Optr)&t_send1, (Optr)PSend24525, (Optr)&t_method_return);
    Method PMethod24517 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24518, 1, PSend24525);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24517, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24531 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24530 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24531);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24532 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24529 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24530, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24531, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24532, (Optr)&t_block_return);
    Block PBlock24528 = new_Block_with(empty_Array, empty_Array, PThreadedCode24529, 2, PAssign24530, PSend24532);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24533 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24528);
    Array PThreadedCode24527 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24528, (Optr)&t_send1, (Optr)PSend24533, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24526 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24527, 2, PSend24533, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24526, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24537 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24539 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24540 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24540_Const = new_Constant((Optr)string_24540);
    // =. 
    Send PSend24541 = new_Send((Optr)PSend24539, SMB__equals_, 1, (Optr)string_24540_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24545 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24545_Const = new_Constant((Optr)string_24545);
    // escape:. 
    Send PSend24546 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24545_Const);
    Array PThreadedCode24544 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24545, (Optr)&t_send1, (Optr)PSend24546, (Optr)&t_block_return);
    Block PBlock24543 = new_Block_with(empty_Array, empty_Array, PThreadedCode24544, 1, PSend24546);
    // ifTrue:. 
    Send PSend24542 = new_Send((Optr)PSend24541, SMB_ifTrue_, 1, (Optr)PBlock24543);
    Super PSuper24547 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24538 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24539, (Optr)&t_push1, (Optr)string_24540, (Optr)&t_send1, (Optr)PSend24541, (Optr)&t_send_ifTrue_, (Optr)PSend24542, (Optr)PBlock24543, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24547, (Optr)&t_method_return);
    Block PBlock24536 = new_Block_with(PArray24537, empty_Array, PThreadedCode24538, 2, PSend24542, PSuper24547);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24548 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24536);
    Array PThreadedCode24535 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24536, (Optr)&t_send1, (Optr)PSend24548, (Optr)&t_method_return);
    Method PMethod24534 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24535, 1, PSend24548);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24534, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24550 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24549 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24550, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24549, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24552 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24551 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24552, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24551, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request, MC_SMB_request);
}


static void init_SMB_protocol_code_() {
    /*
    protocol: protocol code: code
// 	"Create a response using the given protocol / code"
// 
// 	^self new protocol: protocol code: code
    */
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_respProtocol_0_0 = new_Variable_named(L"respProtocol", 0);
    Variable VAR_respCode_0_1 = new_Variable_named(L"respCode", 0);
    Array PArray24554 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24556 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24557 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24563 = new_String(L" ");
    Constant string_24563_Const = new_Constant((Optr)string_24563);
    // ,. 
    Send PSend24562 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24563_Const);
    // ,. 
    Send PSend24561 = new_Send((Optr)PSend24562, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24564 = new_String(L" ");
    Constant string_24564_Const = new_Constant((Optr)string_24564);
    // ,. 
    Send PSend24560 = new_Send((Optr)PSend24561, SMB__append_, 1, (Optr)string_24564_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24566 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24565 = new_Send((Optr)PSend24566, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24559 = new_Send((Optr)PSend24560, SMB__append_, 1, (Optr)PSend24565);
    Assign PAssign24558 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24559);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24568 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24567 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24568);
    Array PThreadedCode24555 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24556, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24557, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24558, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24563, (Optr)&t_send1, (Optr)PSend24562, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24561, (Optr)&t_push1, (Optr)string_24564, (Optr)&t_send1, (Optr)PSend24560, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24566, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24565, (Optr)&t_send1, (Optr)PSend24559, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24567, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24568, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24553 = new_Method_with(PArray24554, empty_Array, empty_Array, PThreadedCode24555, 5, PAssign24556, PAssign24557, PAssign24558, PAssign24567, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24553, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24570 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24573 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24575 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24576 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24574 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24575, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24576, (Optr)&t_method_return);
    Block PBlock24572 = new_Block_with(PArray24573, empty_Array, PThreadedCode24574, 2, PSend24575, PSend24576);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24577 = new_Send((Optr)PBlock24572, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24571 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24572, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24577, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24569 = new_Method_with(PArray24570, empty_Array, empty_Array, PThreadedCode24571, 2, PSend24577, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24569, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24580 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24581 = new_Send((Optr)PSend24580, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24584 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24585 = new_Send((Optr)PSend24584, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24583 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24584, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24585, (Optr)&t_block_return);
    Block PBlock24582 = new_Block_with(empty_Array, empty_Array, PThreadedCode24583, 1, PSend24585);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24586 = new_Send((Optr)PSend24581, SMB_and_, 1, (Optr)PBlock24582);
    Array PThreadedCode24579 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24580, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24581, (Optr)&t_push_closure, (Optr)PBlock24582, (Optr)&t_send1, (Optr)PSend24586, (Optr)&t_method_return);
    Method PMethod24578 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24579, 1, PSend24586);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24578, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24588 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24590 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24591 = new_Send((Optr)PSend24590, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24589 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24590, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24591, (Optr)&t_method_return);
    Method PMethod24587 = new_Method_with(PArray24588, empty_Array, empty_Array, PThreadedCode24589, 1, PSend24591);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24587, HEADER(WebClient_Core_WebResponse_Class));
    store_method(HEADER(WebClient_Core_WebResponse_Class), SMB_protocol_code_, MC_SMB_protocol_code_);
}

void init_WebClient_Core_PWebResponse_layout() {
    layout_WebClient_Core_WebResponse_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[5] = slot_WebClient_Core_WebMessage_Class_class_statusCodes; // statusCodes 
    
    Symbol  SMB_WebResponse = new_Symbol(L"WebResponse");
    slot_WebClient_Core_WebResponse_request = (Optr)new_Slot(4, L"request");
    slot_WebClient_Core_WebResponse_status = (Optr)new_Slot(5, L"status");
    slot_WebClient_Core_WebResponse_code = (Optr)new_Slot(6, L"code");
    slot_WebClient_Core_WebResponse_url = (Optr)new_Slot(7, L"url");
    layout_WebClient_Core_WebResponse = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_WebClient_Core_WebResponse)->values[0] = slot_WebClient_Core_WebMessage_stream; // stream 
    ((Array)layout_WebClient_Core_WebResponse)->values[1] = slot_WebClient_Core_WebMessage_protocol; // protocol 
    ((Array)layout_WebClient_Core_WebResponse)->values[2] = slot_WebClient_Core_WebMessage_headers; // headers 
    ((Array)layout_WebClient_Core_WebResponse)->values[3] = slot_WebClient_Core_WebMessage_content; // content 
    ((Array)layout_WebClient_Core_WebResponse)->values[4] = slot_WebClient_Core_WebResponse_request; // request 
    ((Array)layout_WebClient_Core_WebResponse)->values[5] = slot_WebClient_Core_WebResponse_status; // status 
    ((Array)layout_WebClient_Core_WebResponse)->values[6] = slot_WebClient_Core_WebResponse_code; // code 
    ((Array)layout_WebClient_Core_WebResponse)->values[7] = slot_WebClient_Core_WebResponse_url; // url 
    WebClient_Core_WebResponse_Class = (Class)new_Class(WebClient_Core_WebMessage_Class, layout_WebClient_Core_WebResponse_Class_class);
    WebClient_Core_WebResponse_Class->layout = layout_WebClient_Core_WebResponse;
    WebClient_Core_WebResponse_Class->name = SMB_WebResponse;
    
}

void init_WebClient_Core_PWebResponse_methods() {
    init_SMB_code();
    init_SMB_isSuccess();
    init_SMB_readFrom_();
    init_SMB_request_();
    init_SMB_writeOn_();
    init_SMB_url();
    init_SMB_status_();
    init_SMB_url_();
    init_SMB_isInformational();
    init_SMB_content();
    init_SMB_getContent();
    init_SMB_status();
    init_SMB_request();
    init_SMB_protocol_code_();
    init_SMB_writeStatusOn_();
    init_SMB_isRedirect();
    init_class_SMB_protocol_code_();
    
}