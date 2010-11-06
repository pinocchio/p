#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24268 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24267 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24268, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24267, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24271 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24272 = new_Send((Optr)PSend24271, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24275 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24276 = new_Send((Optr)PSend24275, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24274 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24275, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24276, (Optr)&t_block_return);
    Block PBlock24273 = new_Block_with(empty_Array, empty_Array, PThreadedCode24274, 1, PSend24276);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24277 = new_Send((Optr)PSend24272, SMB_and_, 1, (Optr)PBlock24273);
    Array PThreadedCode24270 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24271, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24272, (Optr)&t_push_closure, (Optr)PBlock24273, (Optr)&t_send1, (Optr)PSend24277, (Optr)&t_method_return);
    Method PMethod24269 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24270, 1, PSend24277);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24269, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24280 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24281 = new_Send((Optr)PSend24280, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24284 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24285 = new_Send((Optr)PSend24284, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24283 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24284, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24285, (Optr)&t_block_return);
    Block PBlock24282 = new_Block_with(empty_Array, empty_Array, PThreadedCode24283, 1, PSend24285);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24286 = new_Send((Optr)PSend24281, SMB_and_, 1, (Optr)PBlock24282);
    Array PThreadedCode24279 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24280, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24281, (Optr)&t_push_closure, (Optr)PBlock24282, (Optr)&t_send1, (Optr)PSend24286, (Optr)&t_method_return);
    Method PMethod24278 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24279, 1, PSend24286);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24278, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24288 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24289 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24292 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24294 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24297 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24296 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24297);
    Assign PAssign24295 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24296);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24300 = new_String(L" ");
    Constant string_24300_Const = new_Constant((Optr)string_24300);
    // findTokens:. 
    Send PSend24299 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24300_Const);
    Assign PAssign24298 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24299);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24301 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24302 = new_Send((Optr)PSend24301, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24306 = new_String(L"Invalid response: ");
    Constant string_24306_Const = new_Constant((Optr)string_24306);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24307 = new_Send((Optr)string_24306_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24308 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24307);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24309 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24308);
    Array PThreadedCode24305 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24306, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24307, (Optr)&t_send1, (Optr)PSend24308, (Optr)&t_send1, (Optr)PSend24309, (Optr)&t_block_return);
    Block PBlock24304 = new_Block_with(empty_Array, empty_Array, PThreadedCode24305, 1, PSend24309);
    // ifTrue:. 
    Send PSend24303 = new_Send((Optr)PSend24302, SMB_ifTrue_, 1, (Optr)PBlock24304);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24311 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24310 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24311);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24314 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24313 = new_Send((Optr)PSend24314, SMB_asInteger, 0);
    Assign PAssign24312 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24313);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24316 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24315 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24316);
    Array PThreadedCode24293 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24294, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24295, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24297, (Optr)&t_send1, (Optr)PSend24296, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24298, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24300, (Optr)&t_send1, (Optr)PSend24299, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24301, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24302, (Optr)&t_send_ifTrue_, (Optr)PSend24303, (Optr)PBlock24304, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24310, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24311, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24312, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24314, (Optr)&t_send0, (Optr)PSend24313, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24315, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24316, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24291 = new_Block_with(PArray24292, empty_Array, PThreadedCode24293, 8, PAssign24294, PAssign24295, PAssign24298, PSend24303, PAssign24310, PAssign24312, PAssign24315, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24317 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24291);
    Array PThreadedCode24290 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24291, (Optr)&t_send1, (Optr)PSend24317, (Optr)&t_method_return);
    Method PMethod24287 = new_Method_with(PArray24288, PArray24289, empty_Array, PThreadedCode24290, 1, PSend24317);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24287, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24319 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24321 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24320 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24321, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24318 = new_Method_with(PArray24319, empty_Array, empty_Array, PThreadedCode24320, 2, PAssign24321, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24318, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24323 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24325 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24326 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24324 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24325, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24326, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24322 = new_Method_with(PArray24323, empty_Array, empty_Array, PThreadedCode24324, 3, PSend24325, PSuper24326, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24322, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24328 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24331 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24333 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24334 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24332 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24334, (Optr)&t_method_return);
    Block PBlock24330 = new_Block_with(PArray24331, empty_Array, PThreadedCode24332, 2, PSend24333, PSend24334);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24335 = new_Send((Optr)PBlock24330, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24329 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24330, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24335, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24327 = new_Method_with(PArray24328, empty_Array, empty_Array, PThreadedCode24329, 2, PSend24335, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24327, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24337 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24336 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24337, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24336, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24339 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24341 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24340 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24341, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24338 = new_Method_with(PArray24339, empty_Array, empty_Array, PThreadedCode24340, 2, PAssign24341, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24338, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24344 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24345 = new_Send((Optr)PSend24344, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24348 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24349 = new_Send((Optr)PSend24348, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24347 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24348, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24349, (Optr)&t_block_return);
    Block PBlock24346 = new_Block_with(empty_Array, empty_Array, PThreadedCode24347, 1, PSend24349);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24350 = new_Send((Optr)PSend24345, SMB_and_, 1, (Optr)PBlock24346);
    Array PThreadedCode24343 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24344, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24345, (Optr)&t_push_closure, (Optr)PBlock24346, (Optr)&t_send1, (Optr)PSend24350, (Optr)&t_method_return);
    Method PMethod24342 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24343, 1, PSend24350);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24342, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24352 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24354 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24354, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24351 = new_Method_with(PArray24352, empty_Array, empty_Array, PThreadedCode24353, 2, PAssign24354, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24351, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24360 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24359 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24360);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24361 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24358 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24359, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24360, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24361, (Optr)&t_block_return);
    Block PBlock24357 = new_Block_with(empty_Array, empty_Array, PThreadedCode24358, 2, PAssign24359, PSend24361);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24362 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24357);
    Array PThreadedCode24356 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24357, (Optr)&t_send1, (Optr)PSend24362, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24355 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24356, 2, PSend24362, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24355, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24366 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24368 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24369 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24369_Const = new_Constant((Optr)string_24369);
    // =. 
    Send PSend24370 = new_Send((Optr)PSend24368, SMB__equals_, 1, (Optr)string_24369_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24374 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24374_Const = new_Constant((Optr)string_24374);
    // escape:. 
    Send PSend24375 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24374_Const);
    Array PThreadedCode24373 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24374, (Optr)&t_send1, (Optr)PSend24375, (Optr)&t_block_return);
    Block PBlock24372 = new_Block_with(empty_Array, empty_Array, PThreadedCode24373, 1, PSend24375);
    // ifTrue:. 
    Send PSend24371 = new_Send((Optr)PSend24370, SMB_ifTrue_, 1, (Optr)PBlock24372);
    Super PSuper24376 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24367 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24368, (Optr)&t_push1, (Optr)string_24369, (Optr)&t_send1, (Optr)PSend24370, (Optr)&t_send_ifTrue_, (Optr)PSend24371, (Optr)PBlock24372, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24376, (Optr)&t_method_return);
    Block PBlock24365 = new_Block_with(PArray24366, empty_Array, PThreadedCode24367, 2, PSend24371, PSuper24376);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24377 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24365);
    Array PThreadedCode24364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24365, (Optr)&t_send1, (Optr)PSend24377, (Optr)&t_method_return);
    Method PMethod24363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24364, 1, PSend24377);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24363, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24379 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24378 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24379, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24378, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24381 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24381, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24380, WebClient_Core_WebResponse_Class);
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
    Array PArray24383 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24385 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24386 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24392 = new_String(L" ");
    Constant string_24392_Const = new_Constant((Optr)string_24392);
    // ,. 
    Send PSend24391 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24392_Const);
    // ,. 
    Send PSend24390 = new_Send((Optr)PSend24391, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24393 = new_String(L" ");
    Constant string_24393_Const = new_Constant((Optr)string_24393);
    // ,. 
    Send PSend24389 = new_Send((Optr)PSend24390, SMB__append_, 1, (Optr)string_24393_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24395 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24394 = new_Send((Optr)PSend24395, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24388 = new_Send((Optr)PSend24389, SMB__append_, 1, (Optr)PSend24394);
    Assign PAssign24387 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24388);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24397 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24396 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24397);
    Array PThreadedCode24384 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24385, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24386, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24387, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24392, (Optr)&t_send1, (Optr)PSend24391, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24390, (Optr)&t_push1, (Optr)string_24393, (Optr)&t_send1, (Optr)PSend24389, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24395, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24394, (Optr)&t_send1, (Optr)PSend24388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24396, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24397, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24382 = new_Method_with(PArray24383, empty_Array, empty_Array, PThreadedCode24384, 5, PAssign24385, PAssign24386, PAssign24387, PAssign24396, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24382, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24399 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24401 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24402 = new_Send((Optr)PSend24401, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24400 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24401, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24402, (Optr)&t_method_return);
    Method PMethod24398 = new_Method_with(PArray24399, empty_Array, empty_Array, PThreadedCode24400, 1, PSend24402);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24398, HEADER(WebClient_Core_WebResponse_Class));
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