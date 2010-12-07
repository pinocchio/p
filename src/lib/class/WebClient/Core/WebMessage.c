#include <lib/class/WebClient/Core/WebMessage.h>


Optr slot_WebClient_Core_WebMessage_Class_class_statusCodes;
Optr layout_WebClient_Core_WebMessage_Class_class;
Optr slot_WebClient_Core_WebMessage_stream;
Optr slot_WebClient_Core_WebMessage_protocol;
Optr slot_WebClient_Core_WebMessage_headers;
Optr slot_WebClient_Core_WebMessage_content;
Optr layout_WebClient_Core_WebMessage;


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23086 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23088 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23088_Const = new_Constant((Optr)string_23088);
    // headerAt:. 
    Send PSend23089 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23088_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23090 = new_Send((Optr)PSend23089, SMB_asLowercase, 0);
    String string_23091 = new_String(L"close");
    Constant string_23091_Const = new_Constant((Optr)string_23091);
    // asLowercase. 
    Send PSend23092 = new_Send((Optr)string_23091_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23093 = new_Send((Optr)PSend23090, SMB__equals_, 1, (Optr)PSend23092);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23097 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23096 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23097, (Optr)&t_block_return);
    Block PBlock23095 = new_Block_with(empty_Array, empty_Array, PThreadedCode23096, 1, PSend23097);
    // ifTrue:. 
    Send PSend23094 = new_Send((Optr)PSend23093, SMB_ifTrue_, 1, (Optr)PBlock23095);
    String string_23098 = new_String(L"Connection");
    Constant string_23098_Const = new_Constant((Optr)string_23098);
    // headerAt:. 
    Send PSend23099 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23098_Const);
    // asLowercase. 
    Send PSend23100 = new_Send((Optr)PSend23099, SMB_asLowercase, 0);
    String string_23101 = new_String(L"keep-alive");
    Constant string_23101_Const = new_Constant((Optr)string_23101);
    // asLowercase. 
    Send PSend23102 = new_Send((Optr)string_23101_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23103 = new_Send((Optr)PSend23100, SMB__equals_, 1, (Optr)PSend23102);
    // escape:. 
    Send PSend23107 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23106 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23107, (Optr)&t_block_return);
    Block PBlock23105 = new_Block_with(empty_Array, empty_Array, PThreadedCode23106, 1, PSend23107);
    // ifTrue:. 
    Send PSend23104 = new_Send((Optr)PSend23103, SMB_ifTrue_, 1, (Optr)PBlock23105);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23108 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23109 = new_String(L"HTTP/1.0");
    Constant string_23109_Const = new_Constant((Optr)string_23109);
    // =. 
    Send PSend23110 = new_Send((Optr)PSend23108, SMB__equals_, 1, (Optr)string_23109_Const);
    // escape:. 
    Send PSend23114 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23113 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23114, (Optr)&t_block_return);
    Block PBlock23112 = new_Block_with(empty_Array, empty_Array, PThreadedCode23113, 1, PSend23114);
    // ifTrue:. 
    Send PSend23111 = new_Send((Optr)PSend23110, SMB_ifTrue_, 1, (Optr)PBlock23112);
    // protocol. 
    Send PSend23115 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23116 = new_String(L"HTTP/1.1");
    Constant string_23116_Const = new_Constant((Optr)string_23116);
    // =. 
    Send PSend23117 = new_Send((Optr)PSend23115, SMB__equals_, 1, (Optr)string_23116_Const);
    // escape:. 
    Send PSend23121 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23120 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23121, (Optr)&t_block_return);
    Block PBlock23119 = new_Block_with(empty_Array, empty_Array, PThreadedCode23120, 1, PSend23121);
    // ifTrue:. 
    Send PSend23118 = new_Send((Optr)PSend23117, SMB_ifTrue_, 1, (Optr)PBlock23119);
    Array PThreadedCode23087 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23088, (Optr)&t_send1, (Optr)PSend23089, (Optr)&t_send0, (Optr)PSend23090, (Optr)&t_push1, (Optr)string_23091, (Optr)&t_send0, (Optr)PSend23092, (Optr)&t_send1, (Optr)PSend23093, (Optr)&t_send_ifTrue_, (Optr)PSend23094, (Optr)PBlock23095, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23098, (Optr)&t_send1, (Optr)PSend23099, (Optr)&t_send0, (Optr)PSend23100, (Optr)&t_push1, (Optr)string_23101, (Optr)&t_send0, (Optr)PSend23102, (Optr)&t_send1, (Optr)PSend23103, (Optr)&t_send_ifTrue_, (Optr)PSend23104, (Optr)PBlock23105, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23108, (Optr)&t_push1, (Optr)string_23109, (Optr)&t_send1, (Optr)PSend23110, (Optr)&t_send_ifTrue_, (Optr)PSend23111, (Optr)PBlock23112, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23115, (Optr)&t_push1, (Optr)string_23116, (Optr)&t_send1, (Optr)PSend23117, (Optr)&t_send_ifTrue_, (Optr)PSend23118, (Optr)PBlock23119, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23085 = new_Block_with(PArray23086, empty_Array, PThreadedCode23087, 5, PSend23094, PSend23104, PSend23111, PSend23118, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23122 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23085);
    Array PThreadedCode23084 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23085, (Optr)&t_send1, (Optr)PSend23122, (Optr)&t_method_return);
    Method PMethod23083 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23084, 1, PSend23122);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23083, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_contentType() {
    Symbol SMB_contentType = new_Symbol(L"contentType");
    String string_23125 = new_String(L"Content-Type");
    String string_23128 = new_String(L"application/octet-stream");
    Array PThreadedCode23127 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23128, (Optr)&t_block_return);
    Constant string_23128_Const = new_Constant((Optr)string_23128);
    Block PBlock23126 = new_Block_with(empty_Array, empty_Array, PThreadedCode23127, 1, string_23128_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23125_Const = new_Constant((Optr)string_23125);
    // headerAt:ifAbsent:. 
    Send PSend23129 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23125_Const, (Optr)PBlock23126);
    Array PThreadedCode23124 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23125, (Optr)&t_push_closure, (Optr)PBlock23126, (Optr)&t_send2, (Optr)PSend23129, (Optr)&t_method_return);
    Method PMethod23123 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23124, 1, PSend23129);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod23123, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23131 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23134 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23136 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23137 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23138 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23136, (Optr)PSend23137);
    Array PThreadedCode23135 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23136, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23137, (Optr)&t_send2, (Optr)PSend23138, (Optr)&t_method_return);
    Block PBlock23133 = new_Block_with(PArray23134, empty_Array, PThreadedCode23135, 1, PSend23138);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23139 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23133);
    Array PThreadedCode23132 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23133, (Optr)&t_send1, (Optr)PSend23139, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23130 = new_Method_with(PArray23131, empty_Array, empty_Array, PThreadedCode23132, 2, PSend23139, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23130, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23144 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode23143 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23144, (Optr)&t_block_return);
    Block PBlock23142 = new_Block_with(empty_Array, empty_Array, PThreadedCode23143, 1, PSend23144);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23145 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23142);
    Array PThreadedCode23141 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23142, (Optr)&t_send1, (Optr)PSend23145, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23140 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23141, 2, PSend23145, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod23140, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode23147 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23146 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23147, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod23146, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23149 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23152 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23155 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23157 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23157, (Optr)&t_method_return);
    Block PBlock23154 = new_Block_with(PArray23155, empty_Array, PThreadedCode23156, 1, PSend23157);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23158 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23154);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23159 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23153 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23154, (Optr)&t_send2, (Optr)PSend23158, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23159, (Optr)&t_method_return);
    Block PBlock23151 = new_Block_with(PArray23152, empty_Array, PThreadedCode23153, 2, PSend23158, PSend23159);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23160 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23151);
    Array PThreadedCode23150 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23151, (Optr)&t_send1, (Optr)PSend23160, (Optr)&t_method_return);
    Method PMethod23148 = new_Method_with(PArray23149, empty_Array, empty_Array, PThreadedCode23150, 1, PSend23160);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23148, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23162 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23166 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23167 = new_Send((Optr)PSend23166, SMB_asArray, 0);
    Array PThreadedCode23165 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23166, (Optr)&t_send0, (Optr)PSend23167, (Optr)&t_block_return);
    Block PBlock23164 = new_Block_with(empty_Array, empty_Array, PThreadedCode23165, 1, PSend23167);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23168 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23164);
    Array PThreadedCode23163 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23164, (Optr)&t_send2, (Optr)PSend23168, (Optr)&t_method_return);
    Method PMethod23161 = new_Method_with(PArray23162, empty_Array, empty_Array, PThreadedCode23163, 1, PSend23168);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23161, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23170 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign23172 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23171 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23172, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23169 = new_Method_with(PArray23170, empty_Array, empty_Array, PThreadedCode23171, 2, PAssign23172, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod23169, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23176 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend23178 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23182 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23182, (Optr)&t_block_return);
    Block PBlock23180 = new_Block_with(empty_Array, empty_Array, PThreadedCode23181, 1, PSend23182);
    // ifFalse:. 
    Send PSend23179 = new_Send((Optr)PSend23178, SMB_ifFalse_, 1, (Optr)PBlock23180);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend23183 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend23184 = new_Send((Optr)PSend23183, SMB_remoteAddress, 0);
    Array PThreadedCode23177 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend23178, (Optr)&t_send_ifFalse_, (Optr)PSend23179, (Optr)PBlock23180, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23183, (Optr)&t_send0, (Optr)PSend23184, (Optr)&t_method_return);
    Block PBlock23175 = new_Block_with(PArray23176, empty_Array, PThreadedCode23177, 2, PSend23179, PSend23184);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23185 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23175);
    Array PThreadedCode23174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23175, (Optr)&t_send1, (Optr)PSend23185, (Optr)&t_method_return);
    Method PMethod23173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23174, 1, PSend23185);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod23173, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23187 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23190 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23192 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23193 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23194 = new_Send((Optr)PSend23192, SMB__equals_, 1, (Optr)PSend23193);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23198 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode23197 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23198, (Optr)&t_block_return);
    Block PBlock23196 = new_Block_with(empty_Array, empty_Array, PThreadedCode23197, 1, PSend23198);
    // ifTrue:. 
    Send PSend23195 = new_Send((Optr)PSend23194, SMB_ifTrue_, 1, (Optr)PBlock23196);
    Array PThreadedCode23191 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend23192, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend23193, (Optr)&t_send1, (Optr)PSend23194, (Optr)&t_send_ifTrue_, (Optr)PSend23195, (Optr)PBlock23196, (Optr)&t_method_return);
    Block PBlock23189 = new_Block_with(PArray23190, empty_Array, PThreadedCode23191, 1, PSend23195);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23199 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23189);
    Array PThreadedCode23188 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23189, (Optr)&t_send1, (Optr)PSend23199, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23186 = new_Method_with(PArray23187, empty_Array, empty_Array, PThreadedCode23188, 2, PSend23199, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod23186, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23201 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23203 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23204 = new_Send((Optr)PSend23203, SMB_name, 0);
    // printOn:. 
    Send PSend23205 = new_Send((Optr)PSend23204, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend23206 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23207 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend23208 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode23202 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23203, (Optr)&t_send0, (Optr)PSend23204, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23205, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend23206, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend23208, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23200 = new_Method_with(PArray23201, empty_Array, empty_Array, PThreadedCode23202, 5, PSend23205, PSend23206, PSend23207, PSend23208, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod23200, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23211 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23215 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23214 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23215, (Optr)&t_block_return);
    Block PBlock23213 = new_Block_with(empty_Array, empty_Array, PThreadedCode23214, 1, PSend23215);
    // ifFalse:. 
    Send PSend23212 = new_Send((Optr)PSend23211, SMB_ifFalse_, 1, (Optr)PBlock23213);
    Array PThreadedCode23210 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23211, (Optr)&t_send_ifFalse_, (Optr)PSend23212, (Optr)PBlock23213, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23209 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23210, 2, PSend23212, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23209, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23217 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23220 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23219 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23220);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23224 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23223 = new_Block_with(empty_Array, empty_Array, PThreadedCode23224, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23222 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23223);
    Assign PAssign23221 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23222);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23227 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23226 = new_Send((Optr)PSend23227, SMB_writeStream, 0);
    Assign PAssign23225 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23226);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23228 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23229 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23230 = new_Send((Optr)PSend23229, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23234 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23233 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23234, (Optr)&t_block_return);
    Block PBlock23232 = new_Block_with(empty_Array, empty_Array, PThreadedCode23233, 1, PSend23234);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23237 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23236 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23237, (Optr)&t_block_return);
    Block PBlock23235 = new_Block_with(empty_Array, empty_Array, PThreadedCode23236, 1, PSend23237);
    // ifTrue:ifFalse:. 
    Send PSend23231 = new_Send((Optr)PSend23230, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23232, (Optr)PBlock23235);
    Array PThreadedCode23218 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23219, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23221, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23223, (Optr)&t_send1, (Optr)PSend23222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23225, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23227, (Optr)&t_send0, (Optr)PSend23226, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23228, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23229, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23230, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23231, (Optr)PBlock23232, (Optr)PBlock23235, (Optr)&t_method_return);
    Method PMethod23216 = new_Method_with(empty_Array, PArray23217, empty_Array, PThreadedCode23218, 5, PAssign23219, PAssign23221, PAssign23225, PSend23228, PSend23231);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23216, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23239 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23244 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23246 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23247 = new_Send((Optr)PSend23246, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23248 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23249 = new_Send((Optr)PSend23247, SMB__equals_, 1, (Optr)PSend23248);
    Array PThreadedCode23245 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23246, (Optr)&t_send0, (Optr)PSend23247, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23248, (Optr)&t_send1, (Optr)PSend23249, (Optr)&t_method_return);
    Block PBlock23243 = new_Block_with(PArray23244, empty_Array, PThreadedCode23245, 1, PSend23249);
    // reject:. 
    Send PSend23242 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23243);
    Assign PAssign23241 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23242);
    Array PThreadedCode23240 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23241, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23243, (Optr)&t_send1, (Optr)PSend23242, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23238 = new_Method_with(PArray23239, empty_Array, empty_Array, PThreadedCode23240, 2, PAssign23241, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23238, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23251 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23252 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23255 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23257 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23257_Const = new_Constant((Optr)string_23257);
    // headerAt:. 
    Send PSend23258 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23257_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23260 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23262 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23262_Const = new_Constant((Optr)string_23262);
    // =. 
    Send PSend23263 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23262_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23267 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23268 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23267);
    Array PThreadedCode23266 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23267, (Optr)&t_send1, (Optr)PSend23268, (Optr)&t_block_return);
    Block PBlock23265 = new_Block_with(empty_Array, empty_Array, PThreadedCode23266, 1, PSend23268);
    String string_23271 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23271_Const = new_Constant((Optr)string_23271);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23272 = new_Send((Optr)string_23271_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23273 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23272);
    Array PThreadedCode23270 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23271, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23272, (Optr)&t_send1, (Optr)PSend23273, (Optr)&t_block_return);
    Block PBlock23269 = new_Block_with(empty_Array, empty_Array, PThreadedCode23270, 1, PSend23273);
    // ifTrue:ifFalse:. 
    Send PSend23264 = new_Send((Optr)PSend23263, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23265, (Optr)PBlock23269);
    Array PThreadedCode23261 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23262, (Optr)&t_send1, (Optr)PSend23263, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23264, (Optr)PBlock23265, (Optr)PBlock23269, (Optr)&t_method_return);
    Block PBlock23259 = new_Block_with(PArray23260, empty_Array, PThreadedCode23261, 1, PSend23264);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23274 = new_Send((Optr)PSend23258, SMB_ifNotEmpty_, 1, (Optr)PBlock23259);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23275 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23279 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23278 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23279, (Optr)&t_block_return);
    Block PBlock23277 = new_Block_with(empty_Array, empty_Array, PThreadedCode23278, 1, PSend23279);
    // ifTrue:. 
    Send PSend23276 = new_Send((Optr)PSend23275, SMB_ifTrue_, 1, (Optr)PBlock23277);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23281 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23280 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23281);
    Assign PAssign23282 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23286 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23285 = new_Block_with(empty_Array, empty_Array, PThreadedCode23286, 1, int_0_Const);
    // ifNil:. 
    Send PSend23284 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23285);
    Assign PAssign23283 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23284);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23289 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23292 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23293 = new_Send((Optr)PSend23292, SMB_not, 0);
    Array PThreadedCode23291 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23292, (Optr)&t_send0, (Optr)PSend23293, (Optr)&t_block_return);
    Block PBlock23290 = new_Block_with(empty_Array, empty_Array, PThreadedCode23291, 1, PSend23293);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23294 = new_Send((Optr)PSend23289, SMB_and_, 1, (Optr)PBlock23290);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23297 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23296 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23297, (Optr)&t_block_return);
    Block PBlock23295 = new_Block_with(empty_Array, empty_Array, PThreadedCode23296, 1, PSend23297);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23298 = new_Send((Optr)PSend23294, SMB_or_, 1, (Optr)PBlock23295);
    Array PThreadedCode23288 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23289, (Optr)&t_push_closure, (Optr)PBlock23290, (Optr)&t_send1, (Optr)PSend23294, (Optr)&t_push_closure, (Optr)PBlock23295, (Optr)&t_send1, (Optr)PSend23298, (Optr)&t_block_return);
    Block PBlock23287 = new_Block_with(empty_Array, empty_Array, PThreadedCode23288, 1, PSend23298);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23303 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23302 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23303, (Optr)&t_block_return);
    Block PBlock23301 = new_Block_with(empty_Array, empty_Array, PThreadedCode23302, 1, PSend23303);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23304 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23301);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23308 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23307 = new_Block_with(empty_Array, empty_Array, PThreadedCode23308, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23311 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23310 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23311, (Optr)&t_block_return);
    Block PBlock23309 = new_Block_with(empty_Array, empty_Array, PThreadedCode23310, 1, PSend23311);
    // ifNil:ifNotNil:. 
    Send PSend23306 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23307, (Optr)PBlock23309);
    Assign PAssign23305 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23306);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23312 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23313 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23312);
    // size. 
    Send PSend23318 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23317 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23318);
    Array PThreadedCode23316 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23317, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23318, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23315 = new_Block_with(empty_Array, empty_Array, PThreadedCode23316, 1, PAssign23317);
    // ifTrue:. 
    Send PSend23314 = new_Send((Optr)PSend23313, SMB_ifTrue_, 1, (Optr)PBlock23315);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23320 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23319 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23320);
    // size. 
    Send PSend23321 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23322 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23321);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23326 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23325 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23326, (Optr)&t_block_return);
    Block PBlock23324 = new_Block_with(empty_Array, empty_Array, PThreadedCode23325, 1, PSend23326);
    Array PThreadedCode23328 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23327 = new_Block_with(empty_Array, empty_Array, PThreadedCode23328, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23323 = new_Send((Optr)PSend23322, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23324, (Optr)PBlock23327);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23329 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23323);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23332 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23331 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23332);
    Assign PAssign23330 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23331);
    Array PThreadedCode23300 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23301, (Optr)&t_send1, (Optr)PSend23304, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23305, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23307, (Optr)&t_push_closure, (Optr)PBlock23309, (Optr)&t_send2, (Optr)PSend23306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23312, (Optr)&t_send1, (Optr)PSend23313, (Optr)&t_send_ifTrue_, (Optr)PSend23314, (Optr)PBlock23315, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23319, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23320, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23321, (Optr)&t_send1, (Optr)PSend23322, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23323, (Optr)PBlock23324, (Optr)PBlock23327, (Optr)&t_send1, (Optr)PSend23329, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23330, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23332, (Optr)&t_send1, (Optr)PSend23331, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23299 = new_Block_with(empty_Array, empty_Array, PThreadedCode23300, 6, PSend23304, PAssign23305, PSend23314, PAssign23319, PSend23329, PAssign23330);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23333 = new_Send((Optr)PBlock23287, SMB_whileTrue_, 1, (Optr)PBlock23299);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23334 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23337 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23336 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23337, (Optr)&t_block_return);
    Block PBlock23335 = new_Block_with(empty_Array, empty_Array, PThreadedCode23336, 1, PSend23337);
    // ifNotNil:. 
    Send PSend23338 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23335);
    Array PThreadedCode23256 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23257, (Optr)&t_send1, (Optr)PSend23258, (Optr)&t_push_closure, (Optr)PBlock23259, (Optr)&t_send1, (Optr)PSend23274, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23275, (Optr)&t_send_ifTrue_, (Optr)PSend23276, (Optr)PBlock23277, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23280, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23281, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23282, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23283, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23285, (Optr)&t_send1, (Optr)PSend23284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23287, (Optr)&t_push_closure, (Optr)PBlock23299, (Optr)&t_send1, (Optr)PSend23333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23334, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23335, (Optr)&t_send1, (Optr)PSend23338, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23254 = new_Block_with(PArray23255, empty_Array, PThreadedCode23256, 9, PSend23274, PSend23276, PAssign23280, PAssign23282, PAssign23283, PSend23333, PSend23334, PSend23338, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23339 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23254);
    Array PThreadedCode23253 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23254, (Optr)&t_send1, (Optr)PSend23339, (Optr)&t_method_return);
    Method PMethod23250 = new_Method_with(PArray23251, PArray23252, empty_Array, PThreadedCode23253, 1, PSend23339);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23250, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23343 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23345 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23344 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23345, (Optr)&t_method_return);
    Block PBlock23342 = new_Block_with(PArray23343, empty_Array, PThreadedCode23344, 1, PSend23345);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23346 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23342);
    Array PThreadedCode23341 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23342, (Optr)&t_send1, (Optr)PSend23346, (Optr)&t_method_return);
    Method PMethod23340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23341, 1, PSend23346);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23340, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23348 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23348, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23347, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23350 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23349 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23350, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23349, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23355 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23354 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23355, (Optr)&t_block_return);
    Block PBlock23353 = new_Block_with(empty_Array, empty_Array, PThreadedCode23354, 1, PSend23355);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23356 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23353);
    Array PThreadedCode23352 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23353, (Optr)&t_send1, (Optr)PSend23356, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23351 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23352, 2, PSend23356, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23351, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23358 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23360 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23361 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23359 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23360, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23361, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23357 = new_Method_with(PArray23358, empty_Array, empty_Array, PThreadedCode23359, 3, PSend23360, PSend23361, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23357, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23363 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_23367 = new_String(L"");
    Array PThreadedCode23366 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23367, (Optr)&t_block_return);
    Constant string_23367_Const = new_Constant((Optr)string_23367);
    Block PBlock23365 = new_Block_with(empty_Array, empty_Array, PThreadedCode23366, 1, string_23367_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend23368 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23365);
    Array PThreadedCode23364 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23365, (Optr)&t_send2, (Optr)PSend23368, (Optr)&t_method_return);
    Method PMethod23362 = new_Method_with(PArray23363, empty_Array, empty_Array, PThreadedCode23364, 1, PSend23368);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod23362, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23372 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23374 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23377 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23376 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23377, (Optr)&t_block_return);
    Block PBlock23375 = new_Block_with(empty_Array, empty_Array, PThreadedCode23376, 1, PSend23377);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23374_Const = new_Constant((Optr)string_23374);
    // headerAt:ifAbsent:. 
    Send PSend23378 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23374_Const, (Optr)PBlock23375);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23379 = new_Send((Optr)PSend23378, SMB_asInteger, 0);
    Array PThreadedCode23373 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23374, (Optr)&t_push_closure, (Optr)PBlock23375, (Optr)&t_send2, (Optr)PSend23378, (Optr)&t_send0, (Optr)PSend23379, (Optr)&t_method_return);
    Block PBlock23371 = new_Block_with(PArray23372, empty_Array, PThreadedCode23373, 1, PSend23379);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23380 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23371);
    Array PThreadedCode23370 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23371, (Optr)&t_send1, (Optr)PSend23380, (Optr)&t_method_return);
    Method PMethod23369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23370, 1, PSend23380);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23369, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23382 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23385 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23389 = new_String(L"Content-Type");
    Constant string_23389_Const = new_Constant((Optr)string_23389);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23392 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23391 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23392, (Optr)&t_block_return);
    Block PBlock23390 = new_Block_with(empty_Array, empty_Array, PThreadedCode23391, 1, PSend23392);
    // headerAt:ifAbsent:. 
    Send PSend23388 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23389_Const, (Optr)PBlock23390);
    Assign PAssign23387 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23388);
    String string_23393 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23393_Const = new_Constant((Optr)string_23393);
    // beginsWith:. 
    Send PSend23394 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23393_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23398 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23397 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23398, (Optr)&t_block_return);
    Block PBlock23396 = new_Block_with(empty_Array, empty_Array, PThreadedCode23397, 1, PSend23398);
    // ifFalse:. 
    Send PSend23395 = new_Send((Optr)PSend23394, SMB_ifFalse_, 1, (Optr)PBlock23396);
    String string_23399 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23399_Const = new_Constant((Optr)string_23399);
    // findString:. 
    Send PSend23400 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23399_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23401 = new_Send((Optr)PSend23400, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23402 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23403 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23401, (Optr)PSend23402);
    Array PThreadedCode23386 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23387, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23389, (Optr)&t_push_closure, (Optr)PBlock23390, (Optr)&t_send2, (Optr)PSend23388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23393, (Optr)&t_send1, (Optr)PSend23394, (Optr)&t_send_ifFalse_, (Optr)PSend23395, (Optr)PBlock23396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23399, (Optr)&t_send1, (Optr)PSend23400, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23401, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23402, (Optr)&t_send2, (Optr)PSend23403, (Optr)&t_method_return);
    Block PBlock23384 = new_Block_with(PArray23385, empty_Array, PThreadedCode23386, 3, PAssign23387, PSend23395, PSend23403);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23404 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23384);
    Array PThreadedCode23383 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23384, (Optr)&t_send1, (Optr)PSend23404, (Optr)&t_method_return);
    Method PMethod23381 = new_Method_with(empty_Array, PArray23382, empty_Array, PThreadedCode23383, 1, PSend23404);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23381, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23406 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23409 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23412 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23411 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23412);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23417 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23416 = new_Block_with(empty_Array, empty_Array, PThreadedCode23417, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23415 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23416);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23419 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23421 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23420 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23421, (Optr)&t_method_return);
    Block PBlock23418 = new_Block_with(PArray23419, empty_Array, PThreadedCode23420, 1, PSend23421);
    // new:streamContents:. 
    Send PSend23414 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23415, (Optr)PBlock23418);
    Assign PAssign23413 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23414);
    Array PThreadedCode23410 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23411, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23412, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23413, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23416, (Optr)&t_send1, (Optr)PSend23415, (Optr)&t_push_closure, (Optr)PBlock23418, (Optr)&t_send2, (Optr)PSend23414, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23408 = new_Block_with(empty_Array, PArray23409, PThreadedCode23410, 2, PAssign23411, PAssign23413);
    // ifNil:. 
    Send PSend23422 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23408);
    Array PThreadedCode23407 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23408, (Optr)&t_send1, (Optr)PSend23422, (Optr)&t_method_return);
    Method PMethod23405 = new_Method_with(PArray23406, empty_Array, empty_Array, PThreadedCode23407, 1, PSend23422);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23405, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23424 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23426 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23426_Const = new_Constant((Optr)string_23426);
    // headerAt:put:. 
    Send PSend23427 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23426_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23425 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23426, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23427, (Optr)&t_method_return);
    Method PMethod23423 = new_Method_with(PArray23424, empty_Array, empty_Array, PThreadedCode23425, 1, PSend23427);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23423, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23429 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23432 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23435 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23437 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23438 = new_Send((Optr)PSend23437, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23439 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23440 = new_Send((Optr)PSend23438, SMB__equals_, 1, (Optr)PSend23439);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23444 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23445 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23443 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23444, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23445, (Optr)&t_block_return);
    Block PBlock23442 = new_Block_with(empty_Array, empty_Array, PThreadedCode23443, 2, PSend23444, PSend23445);
    // ifTrue:. 
    Send PSend23441 = new_Send((Optr)PSend23440, SMB_ifTrue_, 1, (Optr)PBlock23442);
    Array PThreadedCode23436 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23437, (Optr)&t_send0, (Optr)PSend23438, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23439, (Optr)&t_send1, (Optr)PSend23440, (Optr)&t_send_ifTrue_, (Optr)PSend23441, (Optr)PBlock23442, (Optr)&t_method_return);
    Block PBlock23434 = new_Block_with(PArray23435, empty_Array, PThreadedCode23436, 1, PSend23441);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23446 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23434);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23447 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23433 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23434, (Optr)&t_send1, (Optr)PSend23446, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23447, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23431 = new_Block_with(PArray23432, empty_Array, PThreadedCode23433, 3, PSend23446, PSend23447, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23448 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23431);
    Array PThreadedCode23430 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23431, (Optr)&t_send1, (Optr)PSend23448, (Optr)&t_method_return);
    Method PMethod23428 = new_Method_with(PArray23429, empty_Array, empty_Array, PThreadedCode23430, 1, PSend23448);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23428, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23450 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray23451 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23454 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23453 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend23454);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray23456 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23458 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode23457 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend23458, (Optr)&t_method_return);
    Block PBlock23455 = new_Block_with(PArray23456, empty_Array, PThreadedCode23457, 1, PSend23458);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23459 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23455);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23460 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23463 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23462 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23463, (Optr)&t_block_return);
    Block PBlock23461 = new_Block_with(empty_Array, empty_Array, PThreadedCode23462, 1, PSend23463);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend23464 = new_Send((Optr)PSend23460, SMB_ifEmpty_, 1, (Optr)PBlock23461);
    Array PThreadedCode23452 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign23453, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23454, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23455, (Optr)&t_send2, (Optr)PSend23459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend23460, (Optr)&t_push_closure, (Optr)PBlock23461, (Optr)&t_send1, (Optr)PSend23464, (Optr)&t_method_return);
    Method PMethod23449 = new_Method_with(PArray23450, PArray23451, empty_Array, PThreadedCode23452, 3, PAssign23453, PSend23459, PSend23464);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod23449, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23466 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23468 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23468_Const = new_Constant((Optr)string_23468);
    // headerAt:put:. 
    Send PSend23469 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23468_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23467 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23468, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23469, (Optr)&t_method_return);
    Method PMethod23465 = new_Method_with(PArray23466, empty_Array, empty_Array, PThreadedCode23467, 1, PSend23469);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23465, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23475 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23474 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23475);
    Array PThreadedCode23473 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23474, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23475, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23472 = new_Block_with(empty_Array, empty_Array, PThreadedCode23473, 1, PAssign23474);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23476 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23472);
    Array PThreadedCode23471 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23472, (Optr)&t_send1, (Optr)PSend23476, (Optr)&t_method_return);
    Method PMethod23470 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23471, 1, PSend23476);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23470, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23478 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23480 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23479 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23480, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23477 = new_Method_with(PArray23478, empty_Array, empty_Array, PThreadedCode23479, 2, PAssign23480, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23477, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray23482 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray23483 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign23485 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23487 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign23486 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23487);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend23491 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign23490 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend23491);
    String string_23495 = new_String(L"16r");
    Constant string_23495_Const = new_Constant((Optr)string_23495);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend23496 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend23494 = new_Send((Optr)string_23495_Const, SMB__append_, 1, (Optr)PSend23496);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend23493 = new_Send((Optr)PSend23494, SMB_asNumber, 0);
    Assign PAssign23492 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend23493);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23497 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode23489 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign23490, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend23491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23492, (Optr)&t_push1, (Optr)string_23495, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend23496, (Optr)&t_send1, (Optr)PSend23494, (Optr)&t_send0, (Optr)PSend23493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23497, (Optr)&t_block_return);
    Block PBlock23488 = new_Block_with(empty_Array, empty_Array, PThreadedCode23489, 3, PAssign23490, PAssign23492, PSend23497);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23502 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23501 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23502, (Optr)&t_block_return);
    Block PBlock23500 = new_Block_with(empty_Array, empty_Array, PThreadedCode23501, 1, PSend23502);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23503 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23500);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23504 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend23505 = new_Send((Optr)PSend23504, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23511 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23510 = new_Send((Optr)PSend23511, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23509 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23510);
    Array PThreadedCode23508 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23509, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23511, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23510, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23507 = new_Block_with(empty_Array, empty_Array, PThreadedCode23508, 1, PAssign23509);
    // ifFalse:. 
    Send PSend23506 = new_Send((Optr)PSend23505, SMB_ifFalse_, 1, (Optr)PBlock23507);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23513 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign23512 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23513);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23514 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend23515 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend23517 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23516 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend23517);
    Array PThreadedCode23499 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23500, (Optr)&t_send1, (Optr)PSend23503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23504, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23505, (Optr)&t_send_ifFalse_, (Optr)PSend23506, (Optr)PBlock23507, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23512, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23513, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend23514, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23515, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23516, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23517, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23498 = new_Block_with(empty_Array, empty_Array, PThreadedCode23499, 6, PSend23503, PSend23506, PAssign23512, PSend23514, PSend23515, PAssign23516);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23518 = new_Send((Optr)PBlock23488, SMB_whileFalse_, 1, (Optr)PBlock23498);
    // skip:. 
    Send PSend23519 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23520 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23523 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23522 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23523, (Optr)&t_block_return);
    Block PBlock23521 = new_Block_with(empty_Array, empty_Array, PThreadedCode23522, 1, PSend23523);
    // ifNotNil:. 
    Send PSend23524 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23521);
    Array PThreadedCode23484 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23485, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23486, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23487, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23488, (Optr)&t_push_closure, (Optr)PBlock23498, (Optr)&t_send1, (Optr)PSend23518, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23519, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23521, (Optr)&t_send1, (Optr)PSend23524, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23481 = new_Method_with(PArray23482, PArray23483, empty_Array, PThreadedCode23484, 7, PAssign23485, PAssign23486, PSend23518, PSend23519, PSend23520, PSend23524, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod23481, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23526 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23528 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23529 = new_Send((Optr)PSend23528, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23530 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23529);
    Array PThreadedCode23527 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23528, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23529, (Optr)&t_send1, (Optr)PSend23530, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23525 = new_Method_with(PArray23526, empty_Array, empty_Array, PThreadedCode23527, 2, PSend23530, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23525, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23532 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23534 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23533 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23534, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23531 = new_Method_with(PArray23532, empty_Array, empty_Array, PThreadedCode23533, 2, PAssign23534, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23531, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23536 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23539 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23542 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23544 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23544_Const = new_Constant((Optr)string_23544);
    // ,. 
    Send PSend23545 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23544_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23546 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23547 = new_Send((Optr)PSend23545, SMB__append_, 1, (Optr)PSend23546);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23548 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23547);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23549 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23543 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23544, (Optr)&t_send1, (Optr)PSend23545, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23546, (Optr)&t_send1, (Optr)PSend23547, (Optr)&t_send1, (Optr)PSend23548, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23549, (Optr)&t_method_return);
    Block PBlock23541 = new_Block_with(PArray23542, empty_Array, PThreadedCode23543, 2, PSend23548, PSend23549);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23550 = new_Send((Optr)PBlock23541, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23540 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23541, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23550, (Optr)&t_method_return);
    Block PBlock23538 = new_Block_with(PArray23539, empty_Array, PThreadedCode23540, 1, PSend23550);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23551 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23538);
    Array PThreadedCode23537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23538, (Optr)&t_send1, (Optr)PSend23551, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23535 = new_Method_with(PArray23536, empty_Array, empty_Array, PThreadedCode23537, 2, PSend23551, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23535, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23553 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23555 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23554 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23555, (Optr)&t_method_return);
    Method PMethod23552 = new_Method_with(PArray23553, empty_Array, empty_Array, PThreadedCode23554, 1, PSend23555);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23552, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23561 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23563 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23563_Const = new_Constant((Optr)string_23563);
    // at:put:. 
    Send PSend23564 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23563_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23565 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23565_Const = new_Constant((Optr)string_23565);
    // at:put:. 
    Send PSend23566 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23565_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23567 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23567_Const = new_Constant((Optr)string_23567);
    // at:put:. 
    Send PSend23568 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23567_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23569 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23569_Const = new_Constant((Optr)string_23569);
    // at:put:. 
    Send PSend23570 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23569_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23571 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23571_Const = new_Constant((Optr)string_23571);
    // at:put:. 
    Send PSend23572 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23571_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23573 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23573_Const = new_Constant((Optr)string_23573);
    // at:put:. 
    Send PSend23574 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23573_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23575 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23575_Const = new_Constant((Optr)string_23575);
    // at:put:. 
    Send PSend23576 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23575_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23577 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23577_Const = new_Constant((Optr)string_23577);
    // at:put:. 
    Send PSend23578 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23577_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23579 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23579_Const = new_Constant((Optr)string_23579);
    // at:put:. 
    Send PSend23580 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23579_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23581 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23581_Const = new_Constant((Optr)string_23581);
    // at:put:. 
    Send PSend23582 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23581_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23583 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23583_Const = new_Constant((Optr)string_23583);
    // at:put:. 
    Send PSend23584 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23583_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23585 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23585_Const = new_Constant((Optr)string_23585);
    // at:put:. 
    Send PSend23586 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23585_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23587 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23587_Const = new_Constant((Optr)string_23587);
    // at:put:. 
    Send PSend23588 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23587_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23589 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23589_Const = new_Constant((Optr)string_23589);
    // at:put:. 
    Send PSend23590 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23589_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23591 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23591_Const = new_Constant((Optr)string_23591);
    // at:put:. 
    Send PSend23592 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23591_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23593 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23593_Const = new_Constant((Optr)string_23593);
    // at:put:. 
    Send PSend23594 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23593_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23595 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23595_Const = new_Constant((Optr)string_23595);
    // at:put:. 
    Send PSend23596 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23595_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23597 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23597_Const = new_Constant((Optr)string_23597);
    // at:put:. 
    Send PSend23598 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23597_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23599 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23599_Const = new_Constant((Optr)string_23599);
    // at:put:. 
    Send PSend23600 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23599_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23601 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23601_Const = new_Constant((Optr)string_23601);
    // at:put:. 
    Send PSend23602 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23601_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23603 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23603_Const = new_Constant((Optr)string_23603);
    // at:put:. 
    Send PSend23604 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23603_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23605 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23605_Const = new_Constant((Optr)string_23605);
    // at:put:. 
    Send PSend23606 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23605_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23607 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23607_Const = new_Constant((Optr)string_23607);
    // at:put:. 
    Send PSend23608 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23607_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23609 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23609_Const = new_Constant((Optr)string_23609);
    // at:put:. 
    Send PSend23610 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23609_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23611 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23611_Const = new_Constant((Optr)string_23611);
    // at:put:. 
    Send PSend23612 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23611_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23613 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23613_Const = new_Constant((Optr)string_23613);
    // at:put:. 
    Send PSend23614 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23613_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23615 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23615_Const = new_Constant((Optr)string_23615);
    // at:put:. 
    Send PSend23616 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23615_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23617 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23617_Const = new_Constant((Optr)string_23617);
    // at:put:. 
    Send PSend23618 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23617_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23619 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23619_Const = new_Constant((Optr)string_23619);
    // at:put:. 
    Send PSend23620 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23619_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23621 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23621_Const = new_Constant((Optr)string_23621);
    // at:put:. 
    Send PSend23622 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23621_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23623 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23623_Const = new_Constant((Optr)string_23623);
    // at:put:. 
    Send PSend23624 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23623_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23625 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23625_Const = new_Constant((Optr)string_23625);
    // at:put:. 
    Send PSend23626 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23625_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23627 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23627_Const = new_Constant((Optr)string_23627);
    // at:put:. 
    Send PSend23628 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23627_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23629 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23629_Const = new_Constant((Optr)string_23629);
    // at:put:. 
    Send PSend23630 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23629_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23631 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23631_Const = new_Constant((Optr)string_23631);
    // at:put:. 
    Send PSend23632 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23631_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23633 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23633_Const = new_Constant((Optr)string_23633);
    // at:put:. 
    Send PSend23634 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23633_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23635 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23635_Const = new_Constant((Optr)string_23635);
    // at:put:. 
    Send PSend23636 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23635_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23637 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23637_Const = new_Constant((Optr)string_23637);
    // at:put:. 
    Send PSend23638 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23637_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23639 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23639_Const = new_Constant((Optr)string_23639);
    // at:put:. 
    Send PSend23640 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23639_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23641 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23641_Const = new_Constant((Optr)string_23641);
    // at:put:. 
    Send PSend23642 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23641_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23643 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23643_Const = new_Constant((Optr)string_23643);
    // at:put:. 
    Send PSend23644 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23643_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23645 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23645_Const = new_Constant((Optr)string_23645);
    // at:put:. 
    Send PSend23646 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23645_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23647 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23647_Const = new_Constant((Optr)string_23647);
    // at:put:. 
    Send PSend23648 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23647_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23649 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23649_Const = new_Constant((Optr)string_23649);
    // at:put:. 
    Send PSend23650 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23649_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23651 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23651_Const = new_Constant((Optr)string_23651);
    // at:put:. 
    Send PSend23652 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23651_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23653 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23653_Const = new_Constant((Optr)string_23653);
    // at:put:. 
    Send PSend23654 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23653_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23655 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23562 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23563, (Optr)&t_send2, (Optr)PSend23564, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23565, (Optr)&t_send2, (Optr)PSend23566, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23567, (Optr)&t_send2, (Optr)PSend23568, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23569, (Optr)&t_send2, (Optr)PSend23570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23571, (Optr)&t_send2, (Optr)PSend23572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23573, (Optr)&t_send2, (Optr)PSend23574, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23575, (Optr)&t_send2, (Optr)PSend23576, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23577, (Optr)&t_send2, (Optr)PSend23578, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23579, (Optr)&t_send2, (Optr)PSend23580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23581, (Optr)&t_send2, (Optr)PSend23582, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23583, (Optr)&t_send2, (Optr)PSend23584, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23585, (Optr)&t_send2, (Optr)PSend23586, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23587, (Optr)&t_send2, (Optr)PSend23588, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23589, (Optr)&t_send2, (Optr)PSend23590, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23591, (Optr)&t_send2, (Optr)PSend23592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23593, (Optr)&t_send2, (Optr)PSend23594, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23595, (Optr)&t_send2, (Optr)PSend23596, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23597, (Optr)&t_send2, (Optr)PSend23598, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23599, (Optr)&t_send2, (Optr)PSend23600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23601, (Optr)&t_send2, (Optr)PSend23602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23603, (Optr)&t_send2, (Optr)PSend23604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23605, (Optr)&t_send2, (Optr)PSend23606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23607, (Optr)&t_send2, (Optr)PSend23608, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23609, (Optr)&t_send2, (Optr)PSend23610, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23611, (Optr)&t_send2, (Optr)PSend23612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23613, (Optr)&t_send2, (Optr)PSend23614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23615, (Optr)&t_send2, (Optr)PSend23616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23617, (Optr)&t_send2, (Optr)PSend23618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23619, (Optr)&t_send2, (Optr)PSend23620, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23621, (Optr)&t_send2, (Optr)PSend23622, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23623, (Optr)&t_send2, (Optr)PSend23624, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23625, (Optr)&t_send2, (Optr)PSend23626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23627, (Optr)&t_send2, (Optr)PSend23628, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23629, (Optr)&t_send2, (Optr)PSend23630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23631, (Optr)&t_send2, (Optr)PSend23632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23633, (Optr)&t_send2, (Optr)PSend23634, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23635, (Optr)&t_send2, (Optr)PSend23636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23637, (Optr)&t_send2, (Optr)PSend23638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23639, (Optr)&t_send2, (Optr)PSend23640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23641, (Optr)&t_send2, (Optr)PSend23642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23643, (Optr)&t_send2, (Optr)PSend23644, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23645, (Optr)&t_send2, (Optr)PSend23646, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23647, (Optr)&t_send2, (Optr)PSend23648, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23649, (Optr)&t_send2, (Optr)PSend23650, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23651, (Optr)&t_send2, (Optr)PSend23652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23653, (Optr)&t_send2, (Optr)PSend23654, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23655, (Optr)&t_method_return);
    Block PBlock23560 = new_Block_with(PArray23561, empty_Array, PThreadedCode23562, 47, PSend23564, PSend23566, PSend23568, PSend23570, PSend23572, PSend23574, PSend23576, PSend23578, PSend23580, PSend23582, PSend23584, PSend23586, PSend23588, PSend23590, PSend23592, PSend23594, PSend23596, PSend23598, PSend23600, PSend23602, PSend23604, PSend23606, PSend23608, PSend23610, PSend23612, PSend23614, PSend23616, PSend23618, PSend23620, PSend23622, PSend23624, PSend23626, PSend23628, PSend23630, PSend23632, PSend23634, PSend23636, PSend23638, PSend23640, PSend23642, PSend23644, PSend23646, PSend23648, PSend23650, PSend23652, PSend23654, PSend23655);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23656 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23559 = new_Send((Optr)PBlock23560, SMB_value_, 1, (Optr)PSend23656);
    Assign PAssign23558 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23559);
    Array PThreadedCode23557 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23558, (Optr)&t_push_closure, (Optr)PBlock23560, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23656, (Optr)&t_send1, (Optr)PSend23559, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23556 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23557, 2, PAssign23558, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23556, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_initialize, MC_SMB_initialize);
}

void init_WebClient_Core_PWebMessage_layout() {
    slot_WebClient_Core_WebMessage_Class_class_statusCodes = (Optr)new_Slot(5, L"statusCodes");
    layout_WebClient_Core_WebMessage_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[5] = slot_WebClient_Core_WebMessage_Class_class_statusCodes; // statusCodes 
    
    Symbol  SMB_WebMessage = new_Symbol(L"WebMessage");
    slot_WebClient_Core_WebMessage_stream = (Optr)new_Slot(0, L"stream");
    slot_WebClient_Core_WebMessage_protocol = (Optr)new_Slot(1, L"protocol");
    slot_WebClient_Core_WebMessage_headers = (Optr)new_Slot(2, L"headers");
    slot_WebClient_Core_WebMessage_content = (Optr)new_Slot(3, L"content");
    layout_WebClient_Core_WebMessage = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_WebClient_Core_WebMessage)->values[0] = slot_WebClient_Core_WebMessage_stream; // stream 
    ((Array)layout_WebClient_Core_WebMessage)->values[1] = slot_WebClient_Core_WebMessage_protocol; // protocol 
    ((Array)layout_WebClient_Core_WebMessage)->values[2] = slot_WebClient_Core_WebMessage_headers; // headers 
    ((Array)layout_WebClient_Core_WebMessage)->values[3] = slot_WebClient_Core_WebMessage_content; // content 
    WebClient_Core_WebMessage_Class = (Class)new_Class(Object_Class, layout_WebClient_Core_WebMessage_Class_class);
    WebClient_Core_WebMessage_Class->layout = layout_WebClient_Core_WebMessage;
    WebClient_Core_WebMessage_Class->name = SMB_WebMessage;
    
}

void init_WebClient_Core_PWebMessage_methods() {
    init_SMB_isPersistent();
    init_SMB_contentType();
    init_SMB_headersDo_();
    init_SMB_close();
    init_SMB_contentStream();
    init_SMB_headerAt_ifAbsent_();
    init_SMB_headersAt_();
    init_SMB_stream_();
    init_SMB_remoteHost();
    init_SMB_headersAt_do_();
    init_SMB_printOn_();
    init_SMB_closeIfTransient();
    init_SMB_getContent();
    init_SMB_removeHeader_();
    init_SMB_streamFrom_to_size_progress_();
    init_SMB_asString();
    init_SMB_stream();
    init_SMB_protocol();
    init_SMB_destroy();
    init_SMB_writeOn_();
    init_SMB_headerAt_();
    init_SMB_contentLength();
    init_SMB_multipartBoundary();
    init_SMB_contentWithProgress_();
    init_SMB_contentType_();
    init_SMB_headerAt_put_();
    init_SMB_headersAt_ifAbsent_();
    init_SMB_contentLength_();
    init_SMB_content();
    init_SMB_protocol_();
    init_SMB_chunkFrom_to_progress_();
    init_SMB_addHeader_value_();
    init_SMB_content_();
    init_SMB_writeHeadersOn_();
    init_class_SMB_statusCodeAt_();
    init_class_SMB_initialize();
    
}