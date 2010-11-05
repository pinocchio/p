#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24293 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24293, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24292, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24296 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24297 = new_Send((Optr)PSend24296, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24300 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24301 = new_Send((Optr)PSend24300, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24299 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24300, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24301, (Optr)&t_block_return);
    Block PBlock24298 = new_Block_with(empty_Array, empty_Array, PThreadedCode24299, 1, PSend24301);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24302 = new_Send((Optr)PSend24297, SMB_and_, 1, (Optr)PBlock24298);
    Array PThreadedCode24295 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24296, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24297, (Optr)&t_push_closure, (Optr)PBlock24298, (Optr)&t_send1, (Optr)PSend24302, (Optr)&t_method_return);
    Method PMethod24294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24295, 1, PSend24302);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24294, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24305 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24306 = new_Send((Optr)PSend24305, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24309 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24310 = new_Send((Optr)PSend24309, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24308 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24309, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24310, (Optr)&t_block_return);
    Block PBlock24307 = new_Block_with(empty_Array, empty_Array, PThreadedCode24308, 1, PSend24310);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24311 = new_Send((Optr)PSend24306, SMB_and_, 1, (Optr)PBlock24307);
    Array PThreadedCode24304 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24305, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24306, (Optr)&t_push_closure, (Optr)PBlock24307, (Optr)&t_send1, (Optr)PSend24311, (Optr)&t_method_return);
    Method PMethod24303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24304, 1, PSend24311);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24303, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24313 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24314 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24317 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24319 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24322 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24321 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24322);
    Assign PAssign24320 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24321);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24325 = new_String(L" ");
    Constant string_24325_Const = new_Constant((Optr)string_24325);
    // findTokens:. 
    Send PSend24324 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24325_Const);
    Assign PAssign24323 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24324);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24326 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24327 = new_Send((Optr)PSend24326, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24331 = new_String(L"Invalid response: ");
    Constant string_24331_Const = new_Constant((Optr)string_24331);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24332 = new_Send((Optr)string_24331_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24333 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24332);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24334 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24333);
    Array PThreadedCode24330 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24331, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24332, (Optr)&t_send1, (Optr)PSend24333, (Optr)&t_send1, (Optr)PSend24334, (Optr)&t_block_return);
    Block PBlock24329 = new_Block_with(empty_Array, empty_Array, PThreadedCode24330, 1, PSend24334);
    // ifTrue:. 
    Send PSend24328 = new_Send((Optr)PSend24327, SMB_ifTrue_, 1, (Optr)PBlock24329);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24336 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24335 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24336);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24339 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24338 = new_Send((Optr)PSend24339, SMB_asInteger, 0);
    Assign PAssign24337 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24338);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24341 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24340 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24341);
    Array PThreadedCode24318 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24319, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24320, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24322, (Optr)&t_send1, (Optr)PSend24321, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24323, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24325, (Optr)&t_send1, (Optr)PSend24324, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24326, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24327, (Optr)&t_send_ifTrue_, (Optr)PSend24328, (Optr)PBlock24329, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24335, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24336, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24337, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24339, (Optr)&t_send0, (Optr)PSend24338, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24340, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24341, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24316 = new_Block_with(PArray24317, empty_Array, PThreadedCode24318, 8, PAssign24319, PAssign24320, PAssign24323, PSend24328, PAssign24335, PAssign24337, PAssign24340, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24342 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24316);
    Array PThreadedCode24315 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24316, (Optr)&t_send1, (Optr)PSend24342, (Optr)&t_method_return);
    Method PMethod24312 = new_Method_with(PArray24313, PArray24314, empty_Array, PThreadedCode24315, 1, PSend24342);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24312, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24344 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24346 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24345 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24346, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24343 = new_Method_with(PArray24344, empty_Array, empty_Array, PThreadedCode24345, 2, PAssign24346, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24343, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24348 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24350 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24351 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24349 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24350, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24351, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24347 = new_Method_with(PArray24348, empty_Array, empty_Array, PThreadedCode24349, 3, PSend24350, PSuper24351, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24347, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24353 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24356 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24358 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24359 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24357 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24358, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24359, (Optr)&t_method_return);
    Block PBlock24355 = new_Block_with(PArray24356, empty_Array, PThreadedCode24357, 2, PSend24358, PSend24359);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24360 = new_Send((Optr)PBlock24355, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24354 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24355, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24352 = new_Method_with(PArray24353, empty_Array, empty_Array, PThreadedCode24354, 2, PSend24360, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24352, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24362 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24362, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24361, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24364 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24366 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24366, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24363 = new_Method_with(PArray24364, empty_Array, empty_Array, PThreadedCode24365, 2, PAssign24366, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24363, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24369 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24370 = new_Send((Optr)PSend24369, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24373 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24374 = new_Send((Optr)PSend24373, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24372 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24373, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24374, (Optr)&t_block_return);
    Block PBlock24371 = new_Block_with(empty_Array, empty_Array, PThreadedCode24372, 1, PSend24374);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24375 = new_Send((Optr)PSend24370, SMB_and_, 1, (Optr)PBlock24371);
    Array PThreadedCode24368 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24369, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24370, (Optr)&t_push_closure, (Optr)PBlock24371, (Optr)&t_send1, (Optr)PSend24375, (Optr)&t_method_return);
    Method PMethod24367 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24368, 1, PSend24375);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24367, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24377 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24379 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24378 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24379, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24376 = new_Method_with(PArray24377, empty_Array, empty_Array, PThreadedCode24378, 2, PAssign24379, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24376, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24385 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24384 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24385);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24386 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24383 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24384, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24385, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24386, (Optr)&t_block_return);
    Block PBlock24382 = new_Block_with(empty_Array, empty_Array, PThreadedCode24383, 2, PAssign24384, PSend24386);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24387 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24382);
    Array PThreadedCode24381 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24382, (Optr)&t_send1, (Optr)PSend24387, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24381, 2, PSend24387, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24380, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24391 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24393 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24394 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24394_Const = new_Constant((Optr)string_24394);
    // =. 
    Send PSend24395 = new_Send((Optr)PSend24393, SMB__equals_, 1, (Optr)string_24394_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24399 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24399_Const = new_Constant((Optr)string_24399);
    // escape:. 
    Send PSend24400 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24399_Const);
    Array PThreadedCode24398 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24399, (Optr)&t_send1, (Optr)PSend24400, (Optr)&t_block_return);
    Block PBlock24397 = new_Block_with(empty_Array, empty_Array, PThreadedCode24398, 1, PSend24400);
    // ifTrue:. 
    Send PSend24396 = new_Send((Optr)PSend24395, SMB_ifTrue_, 1, (Optr)PBlock24397);
    Super PSuper24401 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24392 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24393, (Optr)&t_push1, (Optr)string_24394, (Optr)&t_send1, (Optr)PSend24395, (Optr)&t_send_ifTrue_, (Optr)PSend24396, (Optr)PBlock24397, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24401, (Optr)&t_method_return);
    Block PBlock24390 = new_Block_with(PArray24391, empty_Array, PThreadedCode24392, 2, PSend24396, PSuper24401);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24402 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24390);
    Array PThreadedCode24389 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24390, (Optr)&t_send1, (Optr)PSend24402, (Optr)&t_method_return);
    Method PMethod24388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24389, 1, PSend24402);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24388, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24404 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24403 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24404, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24403, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24406 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24405 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24406, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24405, WebClient_Core_WebResponse_Class);
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
    Array PArray24408 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24410 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24411 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24417 = new_String(L" ");
    Constant string_24417_Const = new_Constant((Optr)string_24417);
    // ,. 
    Send PSend24416 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24417_Const);
    // ,. 
    Send PSend24415 = new_Send((Optr)PSend24416, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24418 = new_String(L" ");
    Constant string_24418_Const = new_Constant((Optr)string_24418);
    // ,. 
    Send PSend24414 = new_Send((Optr)PSend24415, SMB__append_, 1, (Optr)string_24418_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24420 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24419 = new_Send((Optr)PSend24420, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24413 = new_Send((Optr)PSend24414, SMB__append_, 1, (Optr)PSend24419);
    Assign PAssign24412 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24413);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24422 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24421 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24422);
    Array PThreadedCode24409 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24410, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24411, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24412, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24417, (Optr)&t_send1, (Optr)PSend24416, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24415, (Optr)&t_push1, (Optr)string_24418, (Optr)&t_send1, (Optr)PSend24414, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24420, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24419, (Optr)&t_send1, (Optr)PSend24413, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24421, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24422, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24407 = new_Method_with(PArray24408, empty_Array, empty_Array, PThreadedCode24409, 5, PAssign24410, PAssign24411, PAssign24412, PAssign24421, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24407, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24424 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24426 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24427 = new_Send((Optr)PSend24426, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24425 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24426, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24427, (Optr)&t_method_return);
    Method PMethod24423 = new_Method_with(PArray24424, empty_Array, empty_Array, PThreadedCode24425, 1, PSend24427);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24423, HEADER(WebClient_Core_WebResponse_Class));
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