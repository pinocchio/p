#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24127 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24127, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24126, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24130 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24131 = new_Send((Optr)PSend24130, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24134 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24135 = new_Send((Optr)PSend24134, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24133 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24134, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24135, (Optr)&t_block_return);
    Block PBlock24132 = new_Block_with(empty_Array, empty_Array, PThreadedCode24133, 1, PSend24135);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24136 = new_Send((Optr)PSend24131, SMB_and_, 1, (Optr)PBlock24132);
    Array PThreadedCode24129 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24130, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24131, (Optr)&t_push_closure, (Optr)PBlock24132, (Optr)&t_send1, (Optr)PSend24136, (Optr)&t_method_return);
    Method PMethod24128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24129, 1, PSend24136);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24128, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24139 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24140 = new_Send((Optr)PSend24139, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24143 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24144 = new_Send((Optr)PSend24143, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24142 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24143, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24144, (Optr)&t_block_return);
    Block PBlock24141 = new_Block_with(empty_Array, empty_Array, PThreadedCode24142, 1, PSend24144);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24145 = new_Send((Optr)PSend24140, SMB_and_, 1, (Optr)PBlock24141);
    Array PThreadedCode24138 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24139, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24140, (Optr)&t_push_closure, (Optr)PBlock24141, (Optr)&t_send1, (Optr)PSend24145, (Optr)&t_method_return);
    Method PMethod24137 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24138, 1, PSend24145);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24137, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24147 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24148 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24151 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24153 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24156 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24155 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24156);
    Assign PAssign24154 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24155);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24159 = new_String(L" ");
    Constant string_24159_Const = new_Constant((Optr)string_24159);
    // findTokens:. 
    Send PSend24158 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24159_Const);
    Assign PAssign24157 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24158);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24160 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24161 = new_Send((Optr)PSend24160, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24165 = new_String(L"Invalid response: ");
    Constant string_24165_Const = new_Constant((Optr)string_24165);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24166 = new_Send((Optr)string_24165_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24167 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24166);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24168 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24167);
    Array PThreadedCode24164 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24165, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24166, (Optr)&t_send1, (Optr)PSend24167, (Optr)&t_send1, (Optr)PSend24168, (Optr)&t_block_return);
    Block PBlock24163 = new_Block_with(empty_Array, empty_Array, PThreadedCode24164, 1, PSend24168);
    // ifTrue:. 
    Send PSend24162 = new_Send((Optr)PSend24161, SMB_ifTrue_, 1, (Optr)PBlock24163);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24170 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24169 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24170);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24173 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24172 = new_Send((Optr)PSend24173, SMB_asInteger, 0);
    Assign PAssign24171 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24172);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24175 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24174 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24175);
    Array PThreadedCode24152 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24153, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24154, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24156, (Optr)&t_send1, (Optr)PSend24155, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24157, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24159, (Optr)&t_send1, (Optr)PSend24158, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24160, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24161, (Optr)&t_send_ifTrue_, (Optr)PSend24162, (Optr)PBlock24163, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24169, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24170, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24171, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24173, (Optr)&t_send0, (Optr)PSend24172, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24174, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24175, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24150 = new_Block_with(PArray24151, empty_Array, PThreadedCode24152, 8, PAssign24153, PAssign24154, PAssign24157, PSend24162, PAssign24169, PAssign24171, PAssign24174, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24176 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24150);
    Array PThreadedCode24149 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24150, (Optr)&t_send1, (Optr)PSend24176, (Optr)&t_method_return);
    Method PMethod24146 = new_Method_with(PArray24147, PArray24148, empty_Array, PThreadedCode24149, 1, PSend24176);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24146, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24178 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24180 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24179 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24180, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24177 = new_Method_with(PArray24178, empty_Array, empty_Array, PThreadedCode24179, 2, PAssign24180, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24177, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24182 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24184 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24185 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24183 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24184, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24185, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24181 = new_Method_with(PArray24182, empty_Array, empty_Array, PThreadedCode24183, 3, PSend24184, PSuper24185, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24181, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24187 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24190 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24192 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24193 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24191 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24193, (Optr)&t_method_return);
    Block PBlock24189 = new_Block_with(PArray24190, empty_Array, PThreadedCode24191, 2, PSend24192, PSend24193);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24194 = new_Send((Optr)PBlock24189, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24188 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24189, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24194, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24186 = new_Method_with(PArray24187, empty_Array, empty_Array, PThreadedCode24188, 2, PSend24194, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24186, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24196 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24195 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24196, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24195, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24198 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24200 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24199 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24200, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24197 = new_Method_with(PArray24198, empty_Array, empty_Array, PThreadedCode24199, 2, PAssign24200, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24197, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24203 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24204 = new_Send((Optr)PSend24203, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24207 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24208 = new_Send((Optr)PSend24207, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24206 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24207, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24208, (Optr)&t_block_return);
    Block PBlock24205 = new_Block_with(empty_Array, empty_Array, PThreadedCode24206, 1, PSend24208);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24209 = new_Send((Optr)PSend24204, SMB_and_, 1, (Optr)PBlock24205);
    Array PThreadedCode24202 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24203, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24204, (Optr)&t_push_closure, (Optr)PBlock24205, (Optr)&t_send1, (Optr)PSend24209, (Optr)&t_method_return);
    Method PMethod24201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24202, 1, PSend24209);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24201, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24211 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24213 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24212 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24213, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24210 = new_Method_with(PArray24211, empty_Array, empty_Array, PThreadedCode24212, 2, PAssign24213, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24210, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24219 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24218 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24219);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24220 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24217 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24218, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24219, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24220, (Optr)&t_block_return);
    Block PBlock24216 = new_Block_with(empty_Array, empty_Array, PThreadedCode24217, 2, PAssign24218, PSend24220);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24221 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24216);
    Array PThreadedCode24215 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24216, (Optr)&t_send1, (Optr)PSend24221, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24214 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24215, 2, PSend24221, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24214, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24225 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24227 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24228 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24228_Const = new_Constant((Optr)string_24228);
    // =. 
    Send PSend24229 = new_Send((Optr)PSend24227, SMB__equals_, 1, (Optr)string_24228_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24233 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24233_Const = new_Constant((Optr)string_24233);
    // escape:. 
    Send PSend24234 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24233_Const);
    Array PThreadedCode24232 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24233, (Optr)&t_send1, (Optr)PSend24234, (Optr)&t_block_return);
    Block PBlock24231 = new_Block_with(empty_Array, empty_Array, PThreadedCode24232, 1, PSend24234);
    // ifTrue:. 
    Send PSend24230 = new_Send((Optr)PSend24229, SMB_ifTrue_, 1, (Optr)PBlock24231);
    Super PSuper24235 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24226 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24227, (Optr)&t_push1, (Optr)string_24228, (Optr)&t_send1, (Optr)PSend24229, (Optr)&t_send_ifTrue_, (Optr)PSend24230, (Optr)PBlock24231, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24235, (Optr)&t_method_return);
    Block PBlock24224 = new_Block_with(PArray24225, empty_Array, PThreadedCode24226, 2, PSend24230, PSuper24235);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24236 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24224);
    Array PThreadedCode24223 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24224, (Optr)&t_send1, (Optr)PSend24236, (Optr)&t_method_return);
    Method PMethod24222 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24223, 1, PSend24236);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24222, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24238 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24237 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24238, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24237, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24240 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24239 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24240, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24239, WebClient_Core_WebResponse_Class);
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
    Array PArray24242 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24244 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24245 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24251 = new_String(L" ");
    Constant string_24251_Const = new_Constant((Optr)string_24251);
    // ,. 
    Send PSend24250 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24251_Const);
    // ,. 
    Send PSend24249 = new_Send((Optr)PSend24250, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24252 = new_String(L" ");
    Constant string_24252_Const = new_Constant((Optr)string_24252);
    // ,. 
    Send PSend24248 = new_Send((Optr)PSend24249, SMB__append_, 1, (Optr)string_24252_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24254 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24253 = new_Send((Optr)PSend24254, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24247 = new_Send((Optr)PSend24248, SMB__append_, 1, (Optr)PSend24253);
    Assign PAssign24246 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24247);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24256 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24255 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24256);
    Array PThreadedCode24243 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24244, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24245, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24246, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24251, (Optr)&t_send1, (Optr)PSend24250, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24249, (Optr)&t_push1, (Optr)string_24252, (Optr)&t_send1, (Optr)PSend24248, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24254, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24253, (Optr)&t_send1, (Optr)PSend24247, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24255, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24256, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24241 = new_Method_with(PArray24242, empty_Array, empty_Array, PThreadedCode24243, 5, PAssign24244, PAssign24245, PAssign24246, PAssign24255, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24241, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24258 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24260 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24261 = new_Send((Optr)PSend24260, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24259 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24260, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24261, (Optr)&t_method_return);
    Method PMethod24257 = new_Method_with(PArray24258, empty_Array, empty_Array, PThreadedCode24259, 1, PSend24261);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24257, HEADER(WebClient_Core_WebResponse_Class));
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