#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24257 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24256 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24257, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24256, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24260 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24261 = new_Send((Optr)PSend24260, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24264 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24265 = new_Send((Optr)PSend24264, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24263 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24264, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24265, (Optr)&t_block_return);
    Block PBlock24262 = new_Block_with(empty_Array, empty_Array, PThreadedCode24263, 1, PSend24265);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24266 = new_Send((Optr)PSend24261, SMB_and_, 1, (Optr)PBlock24262);
    Array PThreadedCode24259 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24260, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24261, (Optr)&t_push_closure, (Optr)PBlock24262, (Optr)&t_send1, (Optr)PSend24266, (Optr)&t_method_return);
    Method PMethod24258 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24259, 1, PSend24266);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24258, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24269 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24270 = new_Send((Optr)PSend24269, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24273 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24274 = new_Send((Optr)PSend24273, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24272 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24273, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24274, (Optr)&t_block_return);
    Block PBlock24271 = new_Block_with(empty_Array, empty_Array, PThreadedCode24272, 1, PSend24274);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24275 = new_Send((Optr)PSend24270, SMB_and_, 1, (Optr)PBlock24271);
    Array PThreadedCode24268 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24269, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24270, (Optr)&t_push_closure, (Optr)PBlock24271, (Optr)&t_send1, (Optr)PSend24275, (Optr)&t_method_return);
    Method PMethod24267 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24268, 1, PSend24275);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24267, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24277 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24278 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24281 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24283 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24286 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24285 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24286);
    Assign PAssign24284 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24285);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24289 = new_String(L" ");
    Constant string_24289_Const = new_Constant((Optr)string_24289);
    // findTokens:. 
    Send PSend24288 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24289_Const);
    Assign PAssign24287 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24288);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24290 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24291 = new_Send((Optr)PSend24290, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24295 = new_String(L"Invalid response: ");
    Constant string_24295_Const = new_Constant((Optr)string_24295);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24296 = new_Send((Optr)string_24295_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24297 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24296);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24298 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24297);
    Array PThreadedCode24294 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24295, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24296, (Optr)&t_send1, (Optr)PSend24297, (Optr)&t_send1, (Optr)PSend24298, (Optr)&t_block_return);
    Block PBlock24293 = new_Block_with(empty_Array, empty_Array, PThreadedCode24294, 1, PSend24298);
    // ifTrue:. 
    Send PSend24292 = new_Send((Optr)PSend24291, SMB_ifTrue_, 1, (Optr)PBlock24293);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24300 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24299 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24300);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24303 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24302 = new_Send((Optr)PSend24303, SMB_asInteger, 0);
    Assign PAssign24301 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24302);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24305 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24304 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24305);
    Array PThreadedCode24282 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24283, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24284, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24286, (Optr)&t_send1, (Optr)PSend24285, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24287, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24289, (Optr)&t_send1, (Optr)PSend24288, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24290, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24291, (Optr)&t_send_ifTrue_, (Optr)PSend24292, (Optr)PBlock24293, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24299, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24300, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24301, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24303, (Optr)&t_send0, (Optr)PSend24302, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24304, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24305, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24280 = new_Block_with(PArray24281, empty_Array, PThreadedCode24282, 8, PAssign24283, PAssign24284, PAssign24287, PSend24292, PAssign24299, PAssign24301, PAssign24304, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24306 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24280);
    Array PThreadedCode24279 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24280, (Optr)&t_send1, (Optr)PSend24306, (Optr)&t_method_return);
    Method PMethod24276 = new_Method_with(PArray24277, PArray24278, empty_Array, PThreadedCode24279, 1, PSend24306);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24276, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24308 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24310 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24309 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24310, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24307 = new_Method_with(PArray24308, empty_Array, empty_Array, PThreadedCode24309, 2, PAssign24310, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24307, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24312 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24314 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24315 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24313 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24314, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24315, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24311 = new_Method_with(PArray24312, empty_Array, empty_Array, PThreadedCode24313, 3, PSend24314, PSuper24315, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24311, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24317 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24320 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24322 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24323 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24321 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24323, (Optr)&t_method_return);
    Block PBlock24319 = new_Block_with(PArray24320, empty_Array, PThreadedCode24321, 2, PSend24322, PSend24323);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24324 = new_Send((Optr)PBlock24319, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24318 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24319, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24324, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24316 = new_Method_with(PArray24317, empty_Array, empty_Array, PThreadedCode24318, 2, PSend24324, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24316, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24326 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24326, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24325, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24328 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24330 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24329 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24330, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24327 = new_Method_with(PArray24328, empty_Array, empty_Array, PThreadedCode24329, 2, PAssign24330, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24327, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24333 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24334 = new_Send((Optr)PSend24333, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24337 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24338 = new_Send((Optr)PSend24337, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24336 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24337, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24338, (Optr)&t_block_return);
    Block PBlock24335 = new_Block_with(empty_Array, empty_Array, PThreadedCode24336, 1, PSend24338);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24339 = new_Send((Optr)PSend24334, SMB_and_, 1, (Optr)PBlock24335);
    Array PThreadedCode24332 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24333, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24334, (Optr)&t_push_closure, (Optr)PBlock24335, (Optr)&t_send1, (Optr)PSend24339, (Optr)&t_method_return);
    Method PMethod24331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24332, 1, PSend24339);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24331, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24341 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24343 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24342 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24343, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24340 = new_Method_with(PArray24341, empty_Array, empty_Array, PThreadedCode24342, 2, PAssign24343, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24340, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24349 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24348 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24349);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24350 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24347 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24348, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24350, (Optr)&t_block_return);
    Block PBlock24346 = new_Block_with(empty_Array, empty_Array, PThreadedCode24347, 2, PAssign24348, PSend24350);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24351 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24346);
    Array PThreadedCode24345 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24346, (Optr)&t_send1, (Optr)PSend24351, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24344 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24345, 2, PSend24351, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24344, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24355 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24357 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24358 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24358_Const = new_Constant((Optr)string_24358);
    // =. 
    Send PSend24359 = new_Send((Optr)PSend24357, SMB__equals_, 1, (Optr)string_24358_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24363 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24363_Const = new_Constant((Optr)string_24363);
    // escape:. 
    Send PSend24364 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24363_Const);
    Array PThreadedCode24362 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24363, (Optr)&t_send1, (Optr)PSend24364, (Optr)&t_block_return);
    Block PBlock24361 = new_Block_with(empty_Array, empty_Array, PThreadedCode24362, 1, PSend24364);
    // ifTrue:. 
    Send PSend24360 = new_Send((Optr)PSend24359, SMB_ifTrue_, 1, (Optr)PBlock24361);
    Super PSuper24365 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24356 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24357, (Optr)&t_push1, (Optr)string_24358, (Optr)&t_send1, (Optr)PSend24359, (Optr)&t_send_ifTrue_, (Optr)PSend24360, (Optr)PBlock24361, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24365, (Optr)&t_method_return);
    Block PBlock24354 = new_Block_with(PArray24355, empty_Array, PThreadedCode24356, 2, PSend24360, PSuper24365);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24366 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24354);
    Array PThreadedCode24353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24354, (Optr)&t_send1, (Optr)PSend24366, (Optr)&t_method_return);
    Method PMethod24352 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24353, 1, PSend24366);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24352, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24368 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24367 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24368, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24367, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24370 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24370, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24369, WebClient_Core_WebResponse_Class);
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
    Array PArray24372 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24374 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24375 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24381 = new_String(L" ");
    Constant string_24381_Const = new_Constant((Optr)string_24381);
    // ,. 
    Send PSend24380 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24381_Const);
    // ,. 
    Send PSend24379 = new_Send((Optr)PSend24380, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24382 = new_String(L" ");
    Constant string_24382_Const = new_Constant((Optr)string_24382);
    // ,. 
    Send PSend24378 = new_Send((Optr)PSend24379, SMB__append_, 1, (Optr)string_24382_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24384 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24383 = new_Send((Optr)PSend24384, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24377 = new_Send((Optr)PSend24378, SMB__append_, 1, (Optr)PSend24383);
    Assign PAssign24376 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24377);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24386 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24385 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24386);
    Array PThreadedCode24373 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24374, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24375, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24376, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24381, (Optr)&t_send1, (Optr)PSend24380, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24379, (Optr)&t_push1, (Optr)string_24382, (Optr)&t_send1, (Optr)PSend24378, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24384, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24383, (Optr)&t_send1, (Optr)PSend24377, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24385, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24371 = new_Method_with(PArray24372, empty_Array, empty_Array, PThreadedCode24373, 5, PAssign24374, PAssign24375, PAssign24376, PAssign24385, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24371, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24388 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24390 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24391 = new_Send((Optr)PSend24390, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24389 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24390, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24391, (Optr)&t_method_return);
    Method PMethod24387 = new_Method_with(PArray24388, empty_Array, empty_Array, PThreadedCode24389, 1, PSend24391);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24387, HEADER(WebClient_Core_WebResponse_Class));
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
    init_SMB_isRedirect();
    init_SMB_readFrom_();
    init_SMB_request_();
    init_SMB_writeOn_();
    init_SMB_writeStatusOn_();
    init_SMB_url();
    init_SMB_status_();
    init_SMB_isInformational();
    init_SMB_url_();
    init_SMB_content();
    init_SMB_getContent();
    init_SMB_status();
    init_SMB_request();
    init_SMB_protocol_code_();
    init_class_SMB_protocol_code_();
    
}