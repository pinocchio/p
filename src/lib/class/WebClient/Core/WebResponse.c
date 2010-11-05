#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24184 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24183 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24184, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24183, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24187 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24188 = new_Send((Optr)PSend24187, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24191 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24192 = new_Send((Optr)PSend24191, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24190 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24191, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24192, (Optr)&t_block_return);
    Block PBlock24189 = new_Block_with(empty_Array, empty_Array, PThreadedCode24190, 1, PSend24192);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24193 = new_Send((Optr)PSend24188, SMB_and_, 1, (Optr)PBlock24189);
    Array PThreadedCode24186 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24187, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24188, (Optr)&t_push_closure, (Optr)PBlock24189, (Optr)&t_send1, (Optr)PSend24193, (Optr)&t_method_return);
    Method PMethod24185 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24186, 1, PSend24193);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24185, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24196 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24197 = new_Send((Optr)PSend24196, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24200 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24201 = new_Send((Optr)PSend24200, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24199 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24200, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24201, (Optr)&t_block_return);
    Block PBlock24198 = new_Block_with(empty_Array, empty_Array, PThreadedCode24199, 1, PSend24201);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24202 = new_Send((Optr)PSend24197, SMB_and_, 1, (Optr)PBlock24198);
    Array PThreadedCode24195 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24196, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24197, (Optr)&t_push_closure, (Optr)PBlock24198, (Optr)&t_send1, (Optr)PSend24202, (Optr)&t_method_return);
    Method PMethod24194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24195, 1, PSend24202);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24194, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24204 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24205 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24208 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24210 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24213 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24212 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24213);
    Assign PAssign24211 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24212);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24216 = new_String(L" ");
    Constant string_24216_Const = new_Constant((Optr)string_24216);
    // findTokens:. 
    Send PSend24215 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24216_Const);
    Assign PAssign24214 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24215);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24217 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24218 = new_Send((Optr)PSend24217, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24222 = new_String(L"Invalid response: ");
    Constant string_24222_Const = new_Constant((Optr)string_24222);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24223 = new_Send((Optr)string_24222_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24224 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24223);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24225 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24224);
    Array PThreadedCode24221 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24222, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24223, (Optr)&t_send1, (Optr)PSend24224, (Optr)&t_send1, (Optr)PSend24225, (Optr)&t_block_return);
    Block PBlock24220 = new_Block_with(empty_Array, empty_Array, PThreadedCode24221, 1, PSend24225);
    // ifTrue:. 
    Send PSend24219 = new_Send((Optr)PSend24218, SMB_ifTrue_, 1, (Optr)PBlock24220);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24227 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24226 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24227);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24230 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24229 = new_Send((Optr)PSend24230, SMB_asInteger, 0);
    Assign PAssign24228 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24229);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24232 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24231 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24232);
    Array PThreadedCode24209 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24210, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24211, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24213, (Optr)&t_send1, (Optr)PSend24212, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24214, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24216, (Optr)&t_send1, (Optr)PSend24215, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24217, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24218, (Optr)&t_send_ifTrue_, (Optr)PSend24219, (Optr)PBlock24220, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24226, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24227, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24228, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24230, (Optr)&t_send0, (Optr)PSend24229, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24231, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24232, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24207 = new_Block_with(PArray24208, empty_Array, PThreadedCode24209, 8, PAssign24210, PAssign24211, PAssign24214, PSend24219, PAssign24226, PAssign24228, PAssign24231, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24233 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24207);
    Array PThreadedCode24206 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24207, (Optr)&t_send1, (Optr)PSend24233, (Optr)&t_method_return);
    Method PMethod24203 = new_Method_with(PArray24204, PArray24205, empty_Array, PThreadedCode24206, 1, PSend24233);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24203, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24235 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24237 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24236 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24237, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24234 = new_Method_with(PArray24235, empty_Array, empty_Array, PThreadedCode24236, 2, PAssign24237, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24234, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24239 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24241 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24242 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24240 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24241, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24242, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24238 = new_Method_with(PArray24239, empty_Array, empty_Array, PThreadedCode24240, 3, PSend24241, PSuper24242, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24238, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24244 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24247 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24249 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24250 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24248 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24249, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24250, (Optr)&t_method_return);
    Block PBlock24246 = new_Block_with(PArray24247, empty_Array, PThreadedCode24248, 2, PSend24249, PSend24250);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24251 = new_Send((Optr)PBlock24246, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24245 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24246, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24251, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24243 = new_Method_with(PArray24244, empty_Array, empty_Array, PThreadedCode24245, 2, PSend24251, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24243, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24253 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24252 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24253, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24252, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24255 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24257 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24256 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24257, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24254 = new_Method_with(PArray24255, empty_Array, empty_Array, PThreadedCode24256, 2, PAssign24257, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24254, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24260 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24261 = new_Send((Optr)PSend24260, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24264 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24265 = new_Send((Optr)PSend24264, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24263 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24264, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24265, (Optr)&t_block_return);
    Block PBlock24262 = new_Block_with(empty_Array, empty_Array, PThreadedCode24263, 1, PSend24265);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24266 = new_Send((Optr)PSend24261, SMB_and_, 1, (Optr)PBlock24262);
    Array PThreadedCode24259 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24260, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24261, (Optr)&t_push_closure, (Optr)PBlock24262, (Optr)&t_send1, (Optr)PSend24266, (Optr)&t_method_return);
    Method PMethod24258 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24259, 1, PSend24266);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24258, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24268 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24270 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24269 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24270, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24267 = new_Method_with(PArray24268, empty_Array, empty_Array, PThreadedCode24269, 2, PAssign24270, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24267, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24276 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24275 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24276);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24277 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24274 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24275, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24276, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24277, (Optr)&t_block_return);
    Block PBlock24273 = new_Block_with(empty_Array, empty_Array, PThreadedCode24274, 2, PAssign24275, PSend24277);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24278 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24273);
    Array PThreadedCode24272 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24273, (Optr)&t_send1, (Optr)PSend24278, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24271 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24272, 2, PSend24278, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24271, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24282 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24284 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24285 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24285_Const = new_Constant((Optr)string_24285);
    // =. 
    Send PSend24286 = new_Send((Optr)PSend24284, SMB__equals_, 1, (Optr)string_24285_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24290 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24290_Const = new_Constant((Optr)string_24290);
    // escape:. 
    Send PSend24291 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24290_Const);
    Array PThreadedCode24289 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24290, (Optr)&t_send1, (Optr)PSend24291, (Optr)&t_block_return);
    Block PBlock24288 = new_Block_with(empty_Array, empty_Array, PThreadedCode24289, 1, PSend24291);
    // ifTrue:. 
    Send PSend24287 = new_Send((Optr)PSend24286, SMB_ifTrue_, 1, (Optr)PBlock24288);
    Super PSuper24292 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24283 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24284, (Optr)&t_push1, (Optr)string_24285, (Optr)&t_send1, (Optr)PSend24286, (Optr)&t_send_ifTrue_, (Optr)PSend24287, (Optr)PBlock24288, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24292, (Optr)&t_method_return);
    Block PBlock24281 = new_Block_with(PArray24282, empty_Array, PThreadedCode24283, 2, PSend24287, PSuper24292);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24293 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24281);
    Array PThreadedCode24280 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24281, (Optr)&t_send1, (Optr)PSend24293, (Optr)&t_method_return);
    Method PMethod24279 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24280, 1, PSend24293);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24279, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24295 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24295, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24294, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24297 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24296 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24297, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24296, WebClient_Core_WebResponse_Class);
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
    Array PArray24299 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24301 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24302 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24308 = new_String(L" ");
    Constant string_24308_Const = new_Constant((Optr)string_24308);
    // ,. 
    Send PSend24307 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24308_Const);
    // ,. 
    Send PSend24306 = new_Send((Optr)PSend24307, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24309 = new_String(L" ");
    Constant string_24309_Const = new_Constant((Optr)string_24309);
    // ,. 
    Send PSend24305 = new_Send((Optr)PSend24306, SMB__append_, 1, (Optr)string_24309_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24311 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24310 = new_Send((Optr)PSend24311, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24304 = new_Send((Optr)PSend24305, SMB__append_, 1, (Optr)PSend24310);
    Assign PAssign24303 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24304);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24313 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24312 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24313);
    Array PThreadedCode24300 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24301, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24302, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24303, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24308, (Optr)&t_send1, (Optr)PSend24307, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24306, (Optr)&t_push1, (Optr)string_24309, (Optr)&t_send1, (Optr)PSend24305, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24311, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24310, (Optr)&t_send1, (Optr)PSend24304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24312, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24313, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24298 = new_Method_with(PArray24299, empty_Array, empty_Array, PThreadedCode24300, 5, PAssign24301, PAssign24302, PAssign24303, PAssign24312, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24298, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24315 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24317 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24318 = new_Send((Optr)PSend24317, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24316 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24317, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24318, (Optr)&t_method_return);
    Method PMethod24314 = new_Method_with(PArray24315, empty_Array, empty_Array, PThreadedCode24316, 1, PSend24318);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24314, HEADER(WebClient_Core_WebResponse_Class));
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