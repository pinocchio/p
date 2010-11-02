#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24097 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24096 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24097, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24096, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24100 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24101 = new_Send((Optr)PSend24100, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24104 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24105 = new_Send((Optr)PSend24104, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24103 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24104, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24105, (Optr)&t_block_return);
    Block PBlock24102 = new_Block_with(empty_Array, empty_Array, PThreadedCode24103, 1, PSend24105);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24106 = new_Send((Optr)PSend24101, SMB_and_, 1, (Optr)PBlock24102);
    Array PThreadedCode24099 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24100, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24101, (Optr)&t_push_closure, (Optr)PBlock24102, (Optr)&t_send1, (Optr)PSend24106, (Optr)&t_method_return);
    Method PMethod24098 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24099, 1, PSend24106);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24098, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24108 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24109 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24112 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24114 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24117 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24116 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24117);
    Assign PAssign24115 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24116);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24120 = new_String(L" ");
    Constant string_24120_Const = new_Constant((Optr)string_24120);
    // findTokens:. 
    Send PSend24119 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24120_Const);
    Assign PAssign24118 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24119);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24121 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24122 = new_Send((Optr)PSend24121, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24126 = new_String(L"Invalid response: ");
    Constant string_24126_Const = new_Constant((Optr)string_24126);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24127 = new_Send((Optr)string_24126_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24128 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24127);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24129 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24128);
    Array PThreadedCode24125 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24126, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24127, (Optr)&t_send1, (Optr)PSend24128, (Optr)&t_send1, (Optr)PSend24129, (Optr)&t_block_return);
    Block PBlock24124 = new_Block_with(empty_Array, empty_Array, PThreadedCode24125, 1, PSend24129);
    // ifTrue:. 
    Send PSend24123 = new_Send((Optr)PSend24122, SMB_ifTrue_, 1, (Optr)PBlock24124);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24131 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24130 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24131);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24134 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24133 = new_Send((Optr)PSend24134, SMB_asInteger, 0);
    Assign PAssign24132 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24133);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24136 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24135 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24136);
    Array PThreadedCode24113 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24114, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24115, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24117, (Optr)&t_send1, (Optr)PSend24116, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24118, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24120, (Optr)&t_send1, (Optr)PSend24119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24121, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24122, (Optr)&t_send_ifTrue_, (Optr)PSend24123, (Optr)PBlock24124, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24130, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24131, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24132, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24134, (Optr)&t_send0, (Optr)PSend24133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24135, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24136, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24111 = new_Block_with(PArray24112, empty_Array, PThreadedCode24113, 8, PAssign24114, PAssign24115, PAssign24118, PSend24123, PAssign24130, PAssign24132, PAssign24135, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24137 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24111);
    Array PThreadedCode24110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24111, (Optr)&t_send1, (Optr)PSend24137, (Optr)&t_method_return);
    Method PMethod24107 = new_Method_with(PArray24108, PArray24109, empty_Array, PThreadedCode24110, 1, PSend24137);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24107, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24139 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24141 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24140 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24141, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24138 = new_Method_with(PArray24139, empty_Array, empty_Array, PThreadedCode24140, 2, PAssign24141, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24138, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24143 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24145 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24146 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24144 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24145, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24146, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24142 = new_Method_with(PArray24143, empty_Array, empty_Array, PThreadedCode24144, 3, PSend24145, PSuper24146, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24142, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24148 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24148, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24147, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24150 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24152 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24151 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24152, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24149 = new_Method_with(PArray24150, empty_Array, empty_Array, PThreadedCode24151, 2, PAssign24152, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24149, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24154 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24156 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24156, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24153 = new_Method_with(PArray24154, empty_Array, empty_Array, PThreadedCode24155, 2, PAssign24156, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24153, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24159 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24160 = new_Send((Optr)PSend24159, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24163 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24164 = new_Send((Optr)PSend24163, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24162 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24163, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24164, (Optr)&t_block_return);
    Block PBlock24161 = new_Block_with(empty_Array, empty_Array, PThreadedCode24162, 1, PSend24164);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24165 = new_Send((Optr)PSend24160, SMB_and_, 1, (Optr)PBlock24161);
    Array PThreadedCode24158 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24159, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24160, (Optr)&t_push_closure, (Optr)PBlock24161, (Optr)&t_send1, (Optr)PSend24165, (Optr)&t_method_return);
    Method PMethod24157 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24158, 1, PSend24165);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24157, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24171 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24170 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24171);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24172 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24169 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24170, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24171, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24172, (Optr)&t_block_return);
    Block PBlock24168 = new_Block_with(empty_Array, empty_Array, PThreadedCode24169, 2, PAssign24170, PSend24172);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24173 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24168);
    Array PThreadedCode24167 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24168, (Optr)&t_send1, (Optr)PSend24173, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24166 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24167, 2, PSend24173, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24166, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24177 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24179 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24180 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24180_Const = new_Constant((Optr)string_24180);
    // =. 
    Send PSend24181 = new_Send((Optr)PSend24179, SMB__equals_, 1, (Optr)string_24180_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24185 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24185_Const = new_Constant((Optr)string_24185);
    // escape:. 
    Send PSend24186 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24185_Const);
    Array PThreadedCode24184 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24185, (Optr)&t_send1, (Optr)PSend24186, (Optr)&t_block_return);
    Block PBlock24183 = new_Block_with(empty_Array, empty_Array, PThreadedCode24184, 1, PSend24186);
    // ifTrue:. 
    Send PSend24182 = new_Send((Optr)PSend24181, SMB_ifTrue_, 1, (Optr)PBlock24183);
    Super PSuper24187 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24178 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24179, (Optr)&t_push1, (Optr)string_24180, (Optr)&t_send1, (Optr)PSend24181, (Optr)&t_send_ifTrue_, (Optr)PSend24182, (Optr)PBlock24183, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24187, (Optr)&t_method_return);
    Block PBlock24176 = new_Block_with(PArray24177, empty_Array, PThreadedCode24178, 2, PSend24182, PSuper24187);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24188 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24176);
    Array PThreadedCode24175 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24176, (Optr)&t_send1, (Optr)PSend24188, (Optr)&t_method_return);
    Method PMethod24174 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24175, 1, PSend24188);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24174, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24190 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24189 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24190, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24189, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24192 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24191 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24192, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24191, WebClient_Core_WebResponse_Class);
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
    Array PArray24194 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24196 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24197 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24203 = new_String(L" ");
    Constant string_24203_Const = new_Constant((Optr)string_24203);
    // ,. 
    Send PSend24202 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24203_Const);
    // ,. 
    Send PSend24201 = new_Send((Optr)PSend24202, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24204 = new_String(L" ");
    Constant string_24204_Const = new_Constant((Optr)string_24204);
    // ,. 
    Send PSend24200 = new_Send((Optr)PSend24201, SMB__append_, 1, (Optr)string_24204_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24206 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24205 = new_Send((Optr)PSend24206, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24199 = new_Send((Optr)PSend24200, SMB__append_, 1, (Optr)PSend24205);
    Assign PAssign24198 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24199);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24208 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24207 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24208);
    Array PThreadedCode24195 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24196, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24197, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24198, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24203, (Optr)&t_send1, (Optr)PSend24202, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24201, (Optr)&t_push1, (Optr)string_24204, (Optr)&t_send1, (Optr)PSend24200, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24206, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24205, (Optr)&t_send1, (Optr)PSend24199, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24207, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24208, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24193 = new_Method_with(PArray24194, empty_Array, empty_Array, PThreadedCode24195, 5, PAssign24196, PAssign24197, PAssign24198, PAssign24207, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24193, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24210 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24213 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24215 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24216 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24214 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24215, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24216, (Optr)&t_method_return);
    Block PBlock24212 = new_Block_with(PArray24213, empty_Array, PThreadedCode24214, 2, PSend24215, PSend24216);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24217 = new_Send((Optr)PBlock24212, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24211 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24212, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24217, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24209 = new_Method_with(PArray24210, empty_Array, empty_Array, PThreadedCode24211, 2, PSend24217, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24209, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24220 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24221 = new_Send((Optr)PSend24220, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24224 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24225 = new_Send((Optr)PSend24224, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24223 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24224, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24225, (Optr)&t_block_return);
    Block PBlock24222 = new_Block_with(empty_Array, empty_Array, PThreadedCode24223, 1, PSend24225);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24226 = new_Send((Optr)PSend24221, SMB_and_, 1, (Optr)PBlock24222);
    Array PThreadedCode24219 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24220, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24221, (Optr)&t_push_closure, (Optr)PBlock24222, (Optr)&t_send1, (Optr)PSend24226, (Optr)&t_method_return);
    Method PMethod24218 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24219, 1, PSend24226);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24218, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24228 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24230 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24231 = new_Send((Optr)PSend24230, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24229 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24230, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24231, (Optr)&t_method_return);
    Method PMethod24227 = new_Method_with(PArray24228, empty_Array, empty_Array, PThreadedCode24229, 1, PSend24231);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24227, HEADER(WebClient_Core_WebResponse_Class));
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