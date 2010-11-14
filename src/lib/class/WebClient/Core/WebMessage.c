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
    Array PArray23088 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23090 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23090_Const = new_Constant((Optr)string_23090);
    // headerAt:. 
    Send PSend23091 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23090_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23092 = new_Send((Optr)PSend23091, SMB_asLowercase, 0);
    String string_23093 = new_String(L"close");
    Constant string_23093_Const = new_Constant((Optr)string_23093);
    // asLowercase. 
    Send PSend23094 = new_Send((Optr)string_23093_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23095 = new_Send((Optr)PSend23092, SMB__equals_, 1, (Optr)PSend23094);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23099 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23098 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23099, (Optr)&t_block_return);
    Block PBlock23097 = new_Block_with(empty_Array, empty_Array, PThreadedCode23098, 1, PSend23099);
    // ifTrue:. 
    Send PSend23096 = new_Send((Optr)PSend23095, SMB_ifTrue_, 1, (Optr)PBlock23097);
    String string_23100 = new_String(L"Connection");
    Constant string_23100_Const = new_Constant((Optr)string_23100);
    // headerAt:. 
    Send PSend23101 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23100_Const);
    // asLowercase. 
    Send PSend23102 = new_Send((Optr)PSend23101, SMB_asLowercase, 0);
    String string_23103 = new_String(L"keep-alive");
    Constant string_23103_Const = new_Constant((Optr)string_23103);
    // asLowercase. 
    Send PSend23104 = new_Send((Optr)string_23103_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23105 = new_Send((Optr)PSend23102, SMB__equals_, 1, (Optr)PSend23104);
    // escape:. 
    Send PSend23109 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23108 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23109, (Optr)&t_block_return);
    Block PBlock23107 = new_Block_with(empty_Array, empty_Array, PThreadedCode23108, 1, PSend23109);
    // ifTrue:. 
    Send PSend23106 = new_Send((Optr)PSend23105, SMB_ifTrue_, 1, (Optr)PBlock23107);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23110 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23111 = new_String(L"HTTP/1.0");
    Constant string_23111_Const = new_Constant((Optr)string_23111);
    // =. 
    Send PSend23112 = new_Send((Optr)PSend23110, SMB__equals_, 1, (Optr)string_23111_Const);
    // escape:. 
    Send PSend23116 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23115 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23116, (Optr)&t_block_return);
    Block PBlock23114 = new_Block_with(empty_Array, empty_Array, PThreadedCode23115, 1, PSend23116);
    // ifTrue:. 
    Send PSend23113 = new_Send((Optr)PSend23112, SMB_ifTrue_, 1, (Optr)PBlock23114);
    // protocol. 
    Send PSend23117 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23118 = new_String(L"HTTP/1.1");
    Constant string_23118_Const = new_Constant((Optr)string_23118);
    // =. 
    Send PSend23119 = new_Send((Optr)PSend23117, SMB__equals_, 1, (Optr)string_23118_Const);
    // escape:. 
    Send PSend23123 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23122 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23123, (Optr)&t_block_return);
    Block PBlock23121 = new_Block_with(empty_Array, empty_Array, PThreadedCode23122, 1, PSend23123);
    // ifTrue:. 
    Send PSend23120 = new_Send((Optr)PSend23119, SMB_ifTrue_, 1, (Optr)PBlock23121);
    Array PThreadedCode23089 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23090, (Optr)&t_send1, (Optr)PSend23091, (Optr)&t_send0, (Optr)PSend23092, (Optr)&t_push1, (Optr)string_23093, (Optr)&t_send0, (Optr)PSend23094, (Optr)&t_send1, (Optr)PSend23095, (Optr)&t_send_ifTrue_, (Optr)PSend23096, (Optr)PBlock23097, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23100, (Optr)&t_send1, (Optr)PSend23101, (Optr)&t_send0, (Optr)PSend23102, (Optr)&t_push1, (Optr)string_23103, (Optr)&t_send0, (Optr)PSend23104, (Optr)&t_send1, (Optr)PSend23105, (Optr)&t_send_ifTrue_, (Optr)PSend23106, (Optr)PBlock23107, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23110, (Optr)&t_push1, (Optr)string_23111, (Optr)&t_send1, (Optr)PSend23112, (Optr)&t_send_ifTrue_, (Optr)PSend23113, (Optr)PBlock23114, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23117, (Optr)&t_push1, (Optr)string_23118, (Optr)&t_send1, (Optr)PSend23119, (Optr)&t_send_ifTrue_, (Optr)PSend23120, (Optr)PBlock23121, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23087 = new_Block_with(PArray23088, empty_Array, PThreadedCode23089, 5, PSend23096, PSend23106, PSend23113, PSend23120, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23124 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23087);
    Array PThreadedCode23086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23087, (Optr)&t_send1, (Optr)PSend23124, (Optr)&t_method_return);
    Method PMethod23085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23086, 1, PSend23124);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23085, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_contentType() {
    Symbol SMB_contentType = new_Symbol(L"contentType");
    String string_23127 = new_String(L"Content-Type");
    String string_23130 = new_String(L"application/octet-stream");
    Array PThreadedCode23129 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23130, (Optr)&t_block_return);
    Constant string_23130_Const = new_Constant((Optr)string_23130);
    Block PBlock23128 = new_Block_with(empty_Array, empty_Array, PThreadedCode23129, 1, string_23130_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23127_Const = new_Constant((Optr)string_23127);
    // headerAt:ifAbsent:. 
    Send PSend23131 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23127_Const, (Optr)PBlock23128);
    Array PThreadedCode23126 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23127, (Optr)&t_push_closure, (Optr)PBlock23128, (Optr)&t_send2, (Optr)PSend23131, (Optr)&t_method_return);
    Method PMethod23125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23126, 1, PSend23131);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod23125, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23133 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23136 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23138 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23139 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23140 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23138, (Optr)PSend23139);
    Array PThreadedCode23137 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23138, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23139, (Optr)&t_send2, (Optr)PSend23140, (Optr)&t_method_return);
    Block PBlock23135 = new_Block_with(PArray23136, empty_Array, PThreadedCode23137, 1, PSend23140);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23141 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23135);
    Array PThreadedCode23134 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23135, (Optr)&t_send1, (Optr)PSend23141, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23132 = new_Method_with(PArray23133, empty_Array, empty_Array, PThreadedCode23134, 2, PSend23141, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23132, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23146 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode23145 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23146, (Optr)&t_block_return);
    Block PBlock23144 = new_Block_with(empty_Array, empty_Array, PThreadedCode23145, 1, PSend23146);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23147 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23144);
    Array PThreadedCode23143 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23144, (Optr)&t_send1, (Optr)PSend23147, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23143, 2, PSend23147, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod23142, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode23149 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23148 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23149, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod23148, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23151 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23154 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23157 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23159 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23159, (Optr)&t_method_return);
    Block PBlock23156 = new_Block_with(PArray23157, empty_Array, PThreadedCode23158, 1, PSend23159);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23160 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23156);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23161 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23155 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23156, (Optr)&t_send2, (Optr)PSend23160, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23161, (Optr)&t_method_return);
    Block PBlock23153 = new_Block_with(PArray23154, empty_Array, PThreadedCode23155, 2, PSend23160, PSend23161);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23162 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23153);
    Array PThreadedCode23152 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23153, (Optr)&t_send1, (Optr)PSend23162, (Optr)&t_method_return);
    Method PMethod23150 = new_Method_with(PArray23151, empty_Array, empty_Array, PThreadedCode23152, 1, PSend23162);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23150, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23164 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23168 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23169 = new_Send((Optr)PSend23168, SMB_asArray, 0);
    Array PThreadedCode23167 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23168, (Optr)&t_send0, (Optr)PSend23169, (Optr)&t_block_return);
    Block PBlock23166 = new_Block_with(empty_Array, empty_Array, PThreadedCode23167, 1, PSend23169);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23170 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23166);
    Array PThreadedCode23165 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23166, (Optr)&t_send2, (Optr)PSend23170, (Optr)&t_method_return);
    Method PMethod23163 = new_Method_with(PArray23164, empty_Array, empty_Array, PThreadedCode23165, 1, PSend23170);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23163, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23172 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign23174 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23174, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23171 = new_Method_with(PArray23172, empty_Array, empty_Array, PThreadedCode23173, 2, PAssign23174, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod23171, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23178 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend23180 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23184 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23183 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23184, (Optr)&t_block_return);
    Block PBlock23182 = new_Block_with(empty_Array, empty_Array, PThreadedCode23183, 1, PSend23184);
    // ifFalse:. 
    Send PSend23181 = new_Send((Optr)PSend23180, SMB_ifFalse_, 1, (Optr)PBlock23182);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend23185 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend23186 = new_Send((Optr)PSend23185, SMB_remoteAddress, 0);
    Array PThreadedCode23179 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend23180, (Optr)&t_send_ifFalse_, (Optr)PSend23181, (Optr)PBlock23182, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23185, (Optr)&t_send0, (Optr)PSend23186, (Optr)&t_method_return);
    Block PBlock23177 = new_Block_with(PArray23178, empty_Array, PThreadedCode23179, 2, PSend23181, PSend23186);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23187 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23177);
    Array PThreadedCode23176 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23177, (Optr)&t_send1, (Optr)PSend23187, (Optr)&t_method_return);
    Method PMethod23175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23176, 1, PSend23187);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod23175, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23189 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23192 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23194 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23195 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23196 = new_Send((Optr)PSend23194, SMB__equals_, 1, (Optr)PSend23195);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23200 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode23199 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23200, (Optr)&t_block_return);
    Block PBlock23198 = new_Block_with(empty_Array, empty_Array, PThreadedCode23199, 1, PSend23200);
    // ifTrue:. 
    Send PSend23197 = new_Send((Optr)PSend23196, SMB_ifTrue_, 1, (Optr)PBlock23198);
    Array PThreadedCode23193 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend23194, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend23195, (Optr)&t_send1, (Optr)PSend23196, (Optr)&t_send_ifTrue_, (Optr)PSend23197, (Optr)PBlock23198, (Optr)&t_method_return);
    Block PBlock23191 = new_Block_with(PArray23192, empty_Array, PThreadedCode23193, 1, PSend23197);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23201 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23191);
    Array PThreadedCode23190 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23191, (Optr)&t_send1, (Optr)PSend23201, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23188 = new_Method_with(PArray23189, empty_Array, empty_Array, PThreadedCode23190, 2, PSend23201, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod23188, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23203 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23205 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23206 = new_Send((Optr)PSend23205, SMB_name, 0);
    // printOn:. 
    Send PSend23207 = new_Send((Optr)PSend23206, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend23208 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23209 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend23210 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode23204 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23205, (Optr)&t_send0, (Optr)PSend23206, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend23208, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend23210, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23202 = new_Method_with(PArray23203, empty_Array, empty_Array, PThreadedCode23204, 5, PSend23207, PSend23208, PSend23209, PSend23210, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod23202, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23213 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23217 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23216 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23217, (Optr)&t_block_return);
    Block PBlock23215 = new_Block_with(empty_Array, empty_Array, PThreadedCode23216, 1, PSend23217);
    // ifFalse:. 
    Send PSend23214 = new_Send((Optr)PSend23213, SMB_ifFalse_, 1, (Optr)PBlock23215);
    Array PThreadedCode23212 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23213, (Optr)&t_send_ifFalse_, (Optr)PSend23214, (Optr)PBlock23215, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23211 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23212, 2, PSend23214, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23211, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23219 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23222 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23221 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23222);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23226 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23225 = new_Block_with(empty_Array, empty_Array, PThreadedCode23226, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23224 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23225);
    Assign PAssign23223 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23224);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23229 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23228 = new_Send((Optr)PSend23229, SMB_writeStream, 0);
    Assign PAssign23227 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23228);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23230 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23231 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23232 = new_Send((Optr)PSend23231, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23236 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23235 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23236, (Optr)&t_block_return);
    Block PBlock23234 = new_Block_with(empty_Array, empty_Array, PThreadedCode23235, 1, PSend23236);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23239 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23238 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23239, (Optr)&t_block_return);
    Block PBlock23237 = new_Block_with(empty_Array, empty_Array, PThreadedCode23238, 1, PSend23239);
    // ifTrue:ifFalse:. 
    Send PSend23233 = new_Send((Optr)PSend23232, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23234, (Optr)PBlock23237);
    Array PThreadedCode23220 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23221, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23223, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23225, (Optr)&t_send1, (Optr)PSend23224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23227, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23229, (Optr)&t_send0, (Optr)PSend23228, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23230, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23231, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23232, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23233, (Optr)PBlock23234, (Optr)PBlock23237, (Optr)&t_method_return);
    Method PMethod23218 = new_Method_with(empty_Array, PArray23219, empty_Array, PThreadedCode23220, 5, PAssign23221, PAssign23223, PAssign23227, PSend23230, PSend23233);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23218, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23241 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23246 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23248 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23249 = new_Send((Optr)PSend23248, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23250 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23251 = new_Send((Optr)PSend23249, SMB__equals_, 1, (Optr)PSend23250);
    Array PThreadedCode23247 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23248, (Optr)&t_send0, (Optr)PSend23249, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23250, (Optr)&t_send1, (Optr)PSend23251, (Optr)&t_method_return);
    Block PBlock23245 = new_Block_with(PArray23246, empty_Array, PThreadedCode23247, 1, PSend23251);
    // reject:. 
    Send PSend23244 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23245);
    Assign PAssign23243 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23244);
    Array PThreadedCode23242 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23243, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23245, (Optr)&t_send1, (Optr)PSend23244, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23240 = new_Method_with(PArray23241, empty_Array, empty_Array, PThreadedCode23242, 2, PAssign23243, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23240, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23253 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23254 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23257 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23259 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23259_Const = new_Constant((Optr)string_23259);
    // headerAt:. 
    Send PSend23260 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23259_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23262 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23264 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23264_Const = new_Constant((Optr)string_23264);
    // =. 
    Send PSend23265 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23264_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23269 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23270 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23269);
    Array PThreadedCode23268 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23269, (Optr)&t_send1, (Optr)PSend23270, (Optr)&t_block_return);
    Block PBlock23267 = new_Block_with(empty_Array, empty_Array, PThreadedCode23268, 1, PSend23270);
    String string_23273 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23273_Const = new_Constant((Optr)string_23273);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23274 = new_Send((Optr)string_23273_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23275 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23274);
    Array PThreadedCode23272 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23273, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23274, (Optr)&t_send1, (Optr)PSend23275, (Optr)&t_block_return);
    Block PBlock23271 = new_Block_with(empty_Array, empty_Array, PThreadedCode23272, 1, PSend23275);
    // ifTrue:ifFalse:. 
    Send PSend23266 = new_Send((Optr)PSend23265, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23267, (Optr)PBlock23271);
    Array PThreadedCode23263 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23264, (Optr)&t_send1, (Optr)PSend23265, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23266, (Optr)PBlock23267, (Optr)PBlock23271, (Optr)&t_method_return);
    Block PBlock23261 = new_Block_with(PArray23262, empty_Array, PThreadedCode23263, 1, PSend23266);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23276 = new_Send((Optr)PSend23260, SMB_ifNotEmpty_, 1, (Optr)PBlock23261);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23277 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23281 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23280 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23281, (Optr)&t_block_return);
    Block PBlock23279 = new_Block_with(empty_Array, empty_Array, PThreadedCode23280, 1, PSend23281);
    // ifTrue:. 
    Send PSend23278 = new_Send((Optr)PSend23277, SMB_ifTrue_, 1, (Optr)PBlock23279);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23283 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23282 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23283);
    Assign PAssign23284 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23288 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23287 = new_Block_with(empty_Array, empty_Array, PThreadedCode23288, 1, int_0_Const);
    // ifNil:. 
    Send PSend23286 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23287);
    Assign PAssign23285 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23286);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23291 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23294 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23295 = new_Send((Optr)PSend23294, SMB_not, 0);
    Array PThreadedCode23293 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23294, (Optr)&t_send0, (Optr)PSend23295, (Optr)&t_block_return);
    Block PBlock23292 = new_Block_with(empty_Array, empty_Array, PThreadedCode23293, 1, PSend23295);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23296 = new_Send((Optr)PSend23291, SMB_and_, 1, (Optr)PBlock23292);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23299 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23298 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23299, (Optr)&t_block_return);
    Block PBlock23297 = new_Block_with(empty_Array, empty_Array, PThreadedCode23298, 1, PSend23299);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23300 = new_Send((Optr)PSend23296, SMB_or_, 1, (Optr)PBlock23297);
    Array PThreadedCode23290 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23291, (Optr)&t_push_closure, (Optr)PBlock23292, (Optr)&t_send1, (Optr)PSend23296, (Optr)&t_push_closure, (Optr)PBlock23297, (Optr)&t_send1, (Optr)PSend23300, (Optr)&t_block_return);
    Block PBlock23289 = new_Block_with(empty_Array, empty_Array, PThreadedCode23290, 1, PSend23300);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23305 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23304 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23305, (Optr)&t_block_return);
    Block PBlock23303 = new_Block_with(empty_Array, empty_Array, PThreadedCode23304, 1, PSend23305);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23306 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23303);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23310 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23309 = new_Block_with(empty_Array, empty_Array, PThreadedCode23310, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23313 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23312 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23313, (Optr)&t_block_return);
    Block PBlock23311 = new_Block_with(empty_Array, empty_Array, PThreadedCode23312, 1, PSend23313);
    // ifNil:ifNotNil:. 
    Send PSend23308 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23309, (Optr)PBlock23311);
    Assign PAssign23307 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23308);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23314 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23315 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23314);
    // size. 
    Send PSend23320 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23319 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23320);
    Array PThreadedCode23318 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23319, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23320, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23317 = new_Block_with(empty_Array, empty_Array, PThreadedCode23318, 1, PAssign23319);
    // ifTrue:. 
    Send PSend23316 = new_Send((Optr)PSend23315, SMB_ifTrue_, 1, (Optr)PBlock23317);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23322 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23321 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23322);
    // size. 
    Send PSend23323 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23324 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23323);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23328 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23327 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23328, (Optr)&t_block_return);
    Block PBlock23326 = new_Block_with(empty_Array, empty_Array, PThreadedCode23327, 1, PSend23328);
    Array PThreadedCode23330 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23329 = new_Block_with(empty_Array, empty_Array, PThreadedCode23330, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23325 = new_Send((Optr)PSend23324, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23326, (Optr)PBlock23329);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23331 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23325);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23334 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23333 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23334);
    Assign PAssign23332 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23333);
    Array PThreadedCode23302 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23303, (Optr)&t_send1, (Optr)PSend23306, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23307, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23309, (Optr)&t_push_closure, (Optr)PBlock23311, (Optr)&t_send2, (Optr)PSend23308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23314, (Optr)&t_send1, (Optr)PSend23315, (Optr)&t_send_ifTrue_, (Optr)PSend23316, (Optr)PBlock23317, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23321, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23322, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23323, (Optr)&t_send1, (Optr)PSend23324, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23325, (Optr)PBlock23326, (Optr)PBlock23329, (Optr)&t_send1, (Optr)PSend23331, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23332, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23334, (Optr)&t_send1, (Optr)PSend23333, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23301 = new_Block_with(empty_Array, empty_Array, PThreadedCode23302, 6, PSend23306, PAssign23307, PSend23316, PAssign23321, PSend23331, PAssign23332);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23335 = new_Send((Optr)PBlock23289, SMB_whileTrue_, 1, (Optr)PBlock23301);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23336 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23339 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23338 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23339, (Optr)&t_block_return);
    Block PBlock23337 = new_Block_with(empty_Array, empty_Array, PThreadedCode23338, 1, PSend23339);
    // ifNotNil:. 
    Send PSend23340 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23337);
    Array PThreadedCode23258 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23259, (Optr)&t_send1, (Optr)PSend23260, (Optr)&t_push_closure, (Optr)PBlock23261, (Optr)&t_send1, (Optr)PSend23276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23277, (Optr)&t_send_ifTrue_, (Optr)PSend23278, (Optr)PBlock23279, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23282, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23283, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23284, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23285, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23287, (Optr)&t_send1, (Optr)PSend23286, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23289, (Optr)&t_push_closure, (Optr)PBlock23301, (Optr)&t_send1, (Optr)PSend23335, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23336, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23337, (Optr)&t_send1, (Optr)PSend23340, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23256 = new_Block_with(PArray23257, empty_Array, PThreadedCode23258, 9, PSend23276, PSend23278, PAssign23282, PAssign23284, PAssign23285, PSend23335, PSend23336, PSend23340, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23341 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23256);
    Array PThreadedCode23255 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23256, (Optr)&t_send1, (Optr)PSend23341, (Optr)&t_method_return);
    Method PMethod23252 = new_Method_with(PArray23253, PArray23254, empty_Array, PThreadedCode23255, 1, PSend23341);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23252, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23345 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23347 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23346 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23347, (Optr)&t_method_return);
    Block PBlock23344 = new_Block_with(PArray23345, empty_Array, PThreadedCode23346, 1, PSend23347);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23348 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23344);
    Array PThreadedCode23343 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23344, (Optr)&t_send1, (Optr)PSend23348, (Optr)&t_method_return);
    Method PMethod23342 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23343, 1, PSend23348);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23342, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23350 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23349 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23350, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23349, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23352 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23351 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23352, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23351, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23357 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23356 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23357, (Optr)&t_block_return);
    Block PBlock23355 = new_Block_with(empty_Array, empty_Array, PThreadedCode23356, 1, PSend23357);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23358 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23355);
    Array PThreadedCode23354 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23355, (Optr)&t_send1, (Optr)PSend23358, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23354, 2, PSend23358, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23353, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23360 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23362 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23363 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23361 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23363, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23359 = new_Method_with(PArray23360, empty_Array, empty_Array, PThreadedCode23361, 3, PSend23362, PSend23363, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23359, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23365 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_23369 = new_String(L"");
    Array PThreadedCode23368 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23369, (Optr)&t_block_return);
    Constant string_23369_Const = new_Constant((Optr)string_23369);
    Block PBlock23367 = new_Block_with(empty_Array, empty_Array, PThreadedCode23368, 1, string_23369_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend23370 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23367);
    Array PThreadedCode23366 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23367, (Optr)&t_send2, (Optr)PSend23370, (Optr)&t_method_return);
    Method PMethod23364 = new_Method_with(PArray23365, empty_Array, empty_Array, PThreadedCode23366, 1, PSend23370);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod23364, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23374 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23376 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23379 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23378 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23379, (Optr)&t_block_return);
    Block PBlock23377 = new_Block_with(empty_Array, empty_Array, PThreadedCode23378, 1, PSend23379);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23376_Const = new_Constant((Optr)string_23376);
    // headerAt:ifAbsent:. 
    Send PSend23380 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23376_Const, (Optr)PBlock23377);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23381 = new_Send((Optr)PSend23380, SMB_asInteger, 0);
    Array PThreadedCode23375 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23376, (Optr)&t_push_closure, (Optr)PBlock23377, (Optr)&t_send2, (Optr)PSend23380, (Optr)&t_send0, (Optr)PSend23381, (Optr)&t_method_return);
    Block PBlock23373 = new_Block_with(PArray23374, empty_Array, PThreadedCode23375, 1, PSend23381);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23382 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23373);
    Array PThreadedCode23372 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23373, (Optr)&t_send1, (Optr)PSend23382, (Optr)&t_method_return);
    Method PMethod23371 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23372, 1, PSend23382);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23371, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23384 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23387 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23391 = new_String(L"Content-Type");
    Constant string_23391_Const = new_Constant((Optr)string_23391);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23394 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23393 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23394, (Optr)&t_block_return);
    Block PBlock23392 = new_Block_with(empty_Array, empty_Array, PThreadedCode23393, 1, PSend23394);
    // headerAt:ifAbsent:. 
    Send PSend23390 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23391_Const, (Optr)PBlock23392);
    Assign PAssign23389 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23390);
    String string_23395 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23395_Const = new_Constant((Optr)string_23395);
    // beginsWith:. 
    Send PSend23396 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23395_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23400 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23399 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23400, (Optr)&t_block_return);
    Block PBlock23398 = new_Block_with(empty_Array, empty_Array, PThreadedCode23399, 1, PSend23400);
    // ifFalse:. 
    Send PSend23397 = new_Send((Optr)PSend23396, SMB_ifFalse_, 1, (Optr)PBlock23398);
    String string_23401 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23401_Const = new_Constant((Optr)string_23401);
    // findString:. 
    Send PSend23402 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23401_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23403 = new_Send((Optr)PSend23402, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23404 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23405 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23403, (Optr)PSend23404);
    Array PThreadedCode23388 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23389, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23391, (Optr)&t_push_closure, (Optr)PBlock23392, (Optr)&t_send2, (Optr)PSend23390, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23395, (Optr)&t_send1, (Optr)PSend23396, (Optr)&t_send_ifFalse_, (Optr)PSend23397, (Optr)PBlock23398, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23401, (Optr)&t_send1, (Optr)PSend23402, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23403, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23404, (Optr)&t_send2, (Optr)PSend23405, (Optr)&t_method_return);
    Block PBlock23386 = new_Block_with(PArray23387, empty_Array, PThreadedCode23388, 3, PAssign23389, PSend23397, PSend23405);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23406 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23386);
    Array PThreadedCode23385 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23386, (Optr)&t_send1, (Optr)PSend23406, (Optr)&t_method_return);
    Method PMethod23383 = new_Method_with(empty_Array, PArray23384, empty_Array, PThreadedCode23385, 1, PSend23406);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23383, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23408 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23411 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23414 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23413 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23414);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23419 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23418 = new_Block_with(empty_Array, empty_Array, PThreadedCode23419, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23417 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23418);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23421 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23423 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23422 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23423, (Optr)&t_method_return);
    Block PBlock23420 = new_Block_with(PArray23421, empty_Array, PThreadedCode23422, 1, PSend23423);
    // new:streamContents:. 
    Send PSend23416 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23417, (Optr)PBlock23420);
    Assign PAssign23415 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23416);
    Array PThreadedCode23412 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23413, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23414, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23415, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23418, (Optr)&t_send1, (Optr)PSend23417, (Optr)&t_push_closure, (Optr)PBlock23420, (Optr)&t_send2, (Optr)PSend23416, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23410 = new_Block_with(empty_Array, PArray23411, PThreadedCode23412, 2, PAssign23413, PAssign23415);
    // ifNil:. 
    Send PSend23424 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23410);
    Array PThreadedCode23409 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23410, (Optr)&t_send1, (Optr)PSend23424, (Optr)&t_method_return);
    Method PMethod23407 = new_Method_with(PArray23408, empty_Array, empty_Array, PThreadedCode23409, 1, PSend23424);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23407, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23426 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23428 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23428_Const = new_Constant((Optr)string_23428);
    // headerAt:put:. 
    Send PSend23429 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23428_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23427 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23428, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23429, (Optr)&t_method_return);
    Method PMethod23425 = new_Method_with(PArray23426, empty_Array, empty_Array, PThreadedCode23427, 1, PSend23429);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23425, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23431 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23434 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23437 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23439 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23440 = new_Send((Optr)PSend23439, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23441 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23442 = new_Send((Optr)PSend23440, SMB__equals_, 1, (Optr)PSend23441);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23446 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23447 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23445 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23446, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23447, (Optr)&t_block_return);
    Block PBlock23444 = new_Block_with(empty_Array, empty_Array, PThreadedCode23445, 2, PSend23446, PSend23447);
    // ifTrue:. 
    Send PSend23443 = new_Send((Optr)PSend23442, SMB_ifTrue_, 1, (Optr)PBlock23444);
    Array PThreadedCode23438 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23439, (Optr)&t_send0, (Optr)PSend23440, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23441, (Optr)&t_send1, (Optr)PSend23442, (Optr)&t_send_ifTrue_, (Optr)PSend23443, (Optr)PBlock23444, (Optr)&t_method_return);
    Block PBlock23436 = new_Block_with(PArray23437, empty_Array, PThreadedCode23438, 1, PSend23443);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23448 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23436);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23449 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23435 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23436, (Optr)&t_send1, (Optr)PSend23448, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23449, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23433 = new_Block_with(PArray23434, empty_Array, PThreadedCode23435, 3, PSend23448, PSend23449, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23450 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23433);
    Array PThreadedCode23432 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23433, (Optr)&t_send1, (Optr)PSend23450, (Optr)&t_method_return);
    Method PMethod23430 = new_Method_with(PArray23431, empty_Array, empty_Array, PThreadedCode23432, 1, PSend23450);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23430, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23452 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray23453 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23456 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23455 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend23456);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray23458 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23460 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode23459 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend23460, (Optr)&t_method_return);
    Block PBlock23457 = new_Block_with(PArray23458, empty_Array, PThreadedCode23459, 1, PSend23460);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23461 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23457);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23462 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23465 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23464 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23465, (Optr)&t_block_return);
    Block PBlock23463 = new_Block_with(empty_Array, empty_Array, PThreadedCode23464, 1, PSend23465);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend23466 = new_Send((Optr)PSend23462, SMB_ifEmpty_, 1, (Optr)PBlock23463);
    Array PThreadedCode23454 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign23455, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23456, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23457, (Optr)&t_send2, (Optr)PSend23461, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend23462, (Optr)&t_push_closure, (Optr)PBlock23463, (Optr)&t_send1, (Optr)PSend23466, (Optr)&t_method_return);
    Method PMethod23451 = new_Method_with(PArray23452, PArray23453, empty_Array, PThreadedCode23454, 3, PAssign23455, PSend23461, PSend23466);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod23451, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23468 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23470 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23470_Const = new_Constant((Optr)string_23470);
    // headerAt:put:. 
    Send PSend23471 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23470_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23469 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23470, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23471, (Optr)&t_method_return);
    Method PMethod23467 = new_Method_with(PArray23468, empty_Array, empty_Array, PThreadedCode23469, 1, PSend23471);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23467, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23477 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23476 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23477);
    Array PThreadedCode23475 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23476, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23477, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23474 = new_Block_with(empty_Array, empty_Array, PThreadedCode23475, 1, PAssign23476);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23478 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23474);
    Array PThreadedCode23473 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23474, (Optr)&t_send1, (Optr)PSend23478, (Optr)&t_method_return);
    Method PMethod23472 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23473, 1, PSend23478);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23472, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23480 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23482 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23482, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23479 = new_Method_with(PArray23480, empty_Array, empty_Array, PThreadedCode23481, 2, PAssign23482, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23479, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray23484 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray23485 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign23487 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23489 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign23488 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23489);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend23493 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign23492 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend23493);
    String string_23497 = new_String(L"16r");
    Constant string_23497_Const = new_Constant((Optr)string_23497);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend23498 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend23496 = new_Send((Optr)string_23497_Const, SMB__append_, 1, (Optr)PSend23498);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend23495 = new_Send((Optr)PSend23496, SMB_asNumber, 0);
    Assign PAssign23494 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend23495);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23499 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode23491 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign23492, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend23493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23494, (Optr)&t_push1, (Optr)string_23497, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend23498, (Optr)&t_send1, (Optr)PSend23496, (Optr)&t_send0, (Optr)PSend23495, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23499, (Optr)&t_block_return);
    Block PBlock23490 = new_Block_with(empty_Array, empty_Array, PThreadedCode23491, 3, PAssign23492, PAssign23494, PSend23499);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23504 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23503 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23504, (Optr)&t_block_return);
    Block PBlock23502 = new_Block_with(empty_Array, empty_Array, PThreadedCode23503, 1, PSend23504);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23505 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23502);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23506 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend23507 = new_Send((Optr)PSend23506, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23513 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23512 = new_Send((Optr)PSend23513, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23511 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23512);
    Array PThreadedCode23510 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23511, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23513, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23512, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23509 = new_Block_with(empty_Array, empty_Array, PThreadedCode23510, 1, PAssign23511);
    // ifFalse:. 
    Send PSend23508 = new_Send((Optr)PSend23507, SMB_ifFalse_, 1, (Optr)PBlock23509);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23515 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign23514 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23515);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23516 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend23517 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend23519 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23518 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend23519);
    Array PThreadedCode23501 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23502, (Optr)&t_send1, (Optr)PSend23505, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23506, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23507, (Optr)&t_send_ifFalse_, (Optr)PSend23508, (Optr)PBlock23509, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23514, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23515, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend23516, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23517, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23518, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23519, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23500 = new_Block_with(empty_Array, empty_Array, PThreadedCode23501, 6, PSend23505, PSend23508, PAssign23514, PSend23516, PSend23517, PAssign23518);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23520 = new_Send((Optr)PBlock23490, SMB_whileFalse_, 1, (Optr)PBlock23500);
    // skip:. 
    Send PSend23521 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23522 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23525 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23524 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23525, (Optr)&t_block_return);
    Block PBlock23523 = new_Block_with(empty_Array, empty_Array, PThreadedCode23524, 1, PSend23525);
    // ifNotNil:. 
    Send PSend23526 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23523);
    Array PThreadedCode23486 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23487, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23488, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23490, (Optr)&t_push_closure, (Optr)PBlock23500, (Optr)&t_send1, (Optr)PSend23520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23522, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23523, (Optr)&t_send1, (Optr)PSend23526, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23483 = new_Method_with(PArray23484, PArray23485, empty_Array, PThreadedCode23486, 7, PAssign23487, PAssign23488, PSend23520, PSend23521, PSend23522, PSend23526, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod23483, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23528 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23530 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23531 = new_Send((Optr)PSend23530, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23532 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23531);
    Array PThreadedCode23529 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23530, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23531, (Optr)&t_send1, (Optr)PSend23532, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23527 = new_Method_with(PArray23528, empty_Array, empty_Array, PThreadedCode23529, 2, PSend23532, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23527, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23534 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23536 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23535 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23536, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23533 = new_Method_with(PArray23534, empty_Array, empty_Array, PThreadedCode23535, 2, PAssign23536, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23533, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23538 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23541 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23544 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23546 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23546_Const = new_Constant((Optr)string_23546);
    // ,. 
    Send PSend23547 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23546_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23548 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23549 = new_Send((Optr)PSend23547, SMB__append_, 1, (Optr)PSend23548);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23550 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23549);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23551 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23545 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23546, (Optr)&t_send1, (Optr)PSend23547, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23548, (Optr)&t_send1, (Optr)PSend23549, (Optr)&t_send1, (Optr)PSend23550, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23551, (Optr)&t_method_return);
    Block PBlock23543 = new_Block_with(PArray23544, empty_Array, PThreadedCode23545, 2, PSend23550, PSend23551);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23552 = new_Send((Optr)PBlock23543, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23542 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23543, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23552, (Optr)&t_method_return);
    Block PBlock23540 = new_Block_with(PArray23541, empty_Array, PThreadedCode23542, 1, PSend23552);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23553 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23540);
    Array PThreadedCode23539 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23540, (Optr)&t_send1, (Optr)PSend23553, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23537 = new_Method_with(PArray23538, empty_Array, empty_Array, PThreadedCode23539, 2, PSend23553, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23537, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23555 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23557 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23556 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23557, (Optr)&t_method_return);
    Method PMethod23554 = new_Method_with(PArray23555, empty_Array, empty_Array, PThreadedCode23556, 1, PSend23557);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23554, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23563 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23565 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23565_Const = new_Constant((Optr)string_23565);
    // at:put:. 
    Send PSend23566 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23565_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23567 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23567_Const = new_Constant((Optr)string_23567);
    // at:put:. 
    Send PSend23568 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23567_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23569 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23569_Const = new_Constant((Optr)string_23569);
    // at:put:. 
    Send PSend23570 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23569_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23571 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23571_Const = new_Constant((Optr)string_23571);
    // at:put:. 
    Send PSend23572 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23571_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23573 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23573_Const = new_Constant((Optr)string_23573);
    // at:put:. 
    Send PSend23574 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23573_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23575 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23575_Const = new_Constant((Optr)string_23575);
    // at:put:. 
    Send PSend23576 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23575_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23577 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23577_Const = new_Constant((Optr)string_23577);
    // at:put:. 
    Send PSend23578 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23577_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23579 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23579_Const = new_Constant((Optr)string_23579);
    // at:put:. 
    Send PSend23580 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23579_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23581 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23581_Const = new_Constant((Optr)string_23581);
    // at:put:. 
    Send PSend23582 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23581_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23583 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23583_Const = new_Constant((Optr)string_23583);
    // at:put:. 
    Send PSend23584 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23583_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23585 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23585_Const = new_Constant((Optr)string_23585);
    // at:put:. 
    Send PSend23586 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23585_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23587 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23587_Const = new_Constant((Optr)string_23587);
    // at:put:. 
    Send PSend23588 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23587_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23589 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23589_Const = new_Constant((Optr)string_23589);
    // at:put:. 
    Send PSend23590 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23589_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23591 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23591_Const = new_Constant((Optr)string_23591);
    // at:put:. 
    Send PSend23592 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23591_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23593 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23593_Const = new_Constant((Optr)string_23593);
    // at:put:. 
    Send PSend23594 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23593_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23595 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23595_Const = new_Constant((Optr)string_23595);
    // at:put:. 
    Send PSend23596 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23595_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23597 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23597_Const = new_Constant((Optr)string_23597);
    // at:put:. 
    Send PSend23598 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23597_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23599 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23599_Const = new_Constant((Optr)string_23599);
    // at:put:. 
    Send PSend23600 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23599_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23601 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23601_Const = new_Constant((Optr)string_23601);
    // at:put:. 
    Send PSend23602 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23601_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23603 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23603_Const = new_Constant((Optr)string_23603);
    // at:put:. 
    Send PSend23604 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23603_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23605 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23605_Const = new_Constant((Optr)string_23605);
    // at:put:. 
    Send PSend23606 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23605_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23607 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23607_Const = new_Constant((Optr)string_23607);
    // at:put:. 
    Send PSend23608 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23607_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23609 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23609_Const = new_Constant((Optr)string_23609);
    // at:put:. 
    Send PSend23610 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23609_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23611 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23611_Const = new_Constant((Optr)string_23611);
    // at:put:. 
    Send PSend23612 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23611_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23613 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23613_Const = new_Constant((Optr)string_23613);
    // at:put:. 
    Send PSend23614 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23613_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23615 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23615_Const = new_Constant((Optr)string_23615);
    // at:put:. 
    Send PSend23616 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23615_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23617 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23617_Const = new_Constant((Optr)string_23617);
    // at:put:. 
    Send PSend23618 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23617_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23619 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23619_Const = new_Constant((Optr)string_23619);
    // at:put:. 
    Send PSend23620 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23619_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23621 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23621_Const = new_Constant((Optr)string_23621);
    // at:put:. 
    Send PSend23622 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23621_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23623 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23623_Const = new_Constant((Optr)string_23623);
    // at:put:. 
    Send PSend23624 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23623_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23625 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23625_Const = new_Constant((Optr)string_23625);
    // at:put:. 
    Send PSend23626 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23625_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23627 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23627_Const = new_Constant((Optr)string_23627);
    // at:put:. 
    Send PSend23628 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23627_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23629 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23629_Const = new_Constant((Optr)string_23629);
    // at:put:. 
    Send PSend23630 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23629_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23631 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23631_Const = new_Constant((Optr)string_23631);
    // at:put:. 
    Send PSend23632 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23631_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23633 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23633_Const = new_Constant((Optr)string_23633);
    // at:put:. 
    Send PSend23634 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23633_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23635 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23635_Const = new_Constant((Optr)string_23635);
    // at:put:. 
    Send PSend23636 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23635_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23637 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23637_Const = new_Constant((Optr)string_23637);
    // at:put:. 
    Send PSend23638 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23637_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23639 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23639_Const = new_Constant((Optr)string_23639);
    // at:put:. 
    Send PSend23640 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23639_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23641 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23641_Const = new_Constant((Optr)string_23641);
    // at:put:. 
    Send PSend23642 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23641_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23643 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23643_Const = new_Constant((Optr)string_23643);
    // at:put:. 
    Send PSend23644 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23643_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23645 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23645_Const = new_Constant((Optr)string_23645);
    // at:put:. 
    Send PSend23646 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23645_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23647 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23647_Const = new_Constant((Optr)string_23647);
    // at:put:. 
    Send PSend23648 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23647_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23649 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23649_Const = new_Constant((Optr)string_23649);
    // at:put:. 
    Send PSend23650 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23649_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23651 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23651_Const = new_Constant((Optr)string_23651);
    // at:put:. 
    Send PSend23652 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23651_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23653 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23653_Const = new_Constant((Optr)string_23653);
    // at:put:. 
    Send PSend23654 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23653_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23655 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23655_Const = new_Constant((Optr)string_23655);
    // at:put:. 
    Send PSend23656 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23655_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23657 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23564 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23565, (Optr)&t_send2, (Optr)PSend23566, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23567, (Optr)&t_send2, (Optr)PSend23568, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23569, (Optr)&t_send2, (Optr)PSend23570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23571, (Optr)&t_send2, (Optr)PSend23572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23573, (Optr)&t_send2, (Optr)PSend23574, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23575, (Optr)&t_send2, (Optr)PSend23576, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23577, (Optr)&t_send2, (Optr)PSend23578, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23579, (Optr)&t_send2, (Optr)PSend23580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23581, (Optr)&t_send2, (Optr)PSend23582, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23583, (Optr)&t_send2, (Optr)PSend23584, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23585, (Optr)&t_send2, (Optr)PSend23586, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23587, (Optr)&t_send2, (Optr)PSend23588, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23589, (Optr)&t_send2, (Optr)PSend23590, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23591, (Optr)&t_send2, (Optr)PSend23592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23593, (Optr)&t_send2, (Optr)PSend23594, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23595, (Optr)&t_send2, (Optr)PSend23596, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23597, (Optr)&t_send2, (Optr)PSend23598, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23599, (Optr)&t_send2, (Optr)PSend23600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23601, (Optr)&t_send2, (Optr)PSend23602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23603, (Optr)&t_send2, (Optr)PSend23604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23605, (Optr)&t_send2, (Optr)PSend23606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23607, (Optr)&t_send2, (Optr)PSend23608, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23609, (Optr)&t_send2, (Optr)PSend23610, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23611, (Optr)&t_send2, (Optr)PSend23612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23613, (Optr)&t_send2, (Optr)PSend23614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23615, (Optr)&t_send2, (Optr)PSend23616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23617, (Optr)&t_send2, (Optr)PSend23618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23619, (Optr)&t_send2, (Optr)PSend23620, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23621, (Optr)&t_send2, (Optr)PSend23622, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23623, (Optr)&t_send2, (Optr)PSend23624, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23625, (Optr)&t_send2, (Optr)PSend23626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23627, (Optr)&t_send2, (Optr)PSend23628, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23629, (Optr)&t_send2, (Optr)PSend23630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23631, (Optr)&t_send2, (Optr)PSend23632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23633, (Optr)&t_send2, (Optr)PSend23634, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23635, (Optr)&t_send2, (Optr)PSend23636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23637, (Optr)&t_send2, (Optr)PSend23638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23639, (Optr)&t_send2, (Optr)PSend23640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23641, (Optr)&t_send2, (Optr)PSend23642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23643, (Optr)&t_send2, (Optr)PSend23644, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23645, (Optr)&t_send2, (Optr)PSend23646, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23647, (Optr)&t_send2, (Optr)PSend23648, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23649, (Optr)&t_send2, (Optr)PSend23650, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23651, (Optr)&t_send2, (Optr)PSend23652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23653, (Optr)&t_send2, (Optr)PSend23654, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23655, (Optr)&t_send2, (Optr)PSend23656, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23657, (Optr)&t_method_return);
    Block PBlock23562 = new_Block_with(PArray23563, empty_Array, PThreadedCode23564, 47, PSend23566, PSend23568, PSend23570, PSend23572, PSend23574, PSend23576, PSend23578, PSend23580, PSend23582, PSend23584, PSend23586, PSend23588, PSend23590, PSend23592, PSend23594, PSend23596, PSend23598, PSend23600, PSend23602, PSend23604, PSend23606, PSend23608, PSend23610, PSend23612, PSend23614, PSend23616, PSend23618, PSend23620, PSend23622, PSend23624, PSend23626, PSend23628, PSend23630, PSend23632, PSend23634, PSend23636, PSend23638, PSend23640, PSend23642, PSend23644, PSend23646, PSend23648, PSend23650, PSend23652, PSend23654, PSend23656, PSend23657);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23658 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23561 = new_Send((Optr)PBlock23562, SMB_value_, 1, (Optr)PSend23658);
    Assign PAssign23560 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23561);
    Array PThreadedCode23559 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23560, (Optr)&t_push_closure, (Optr)PBlock23562, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23658, (Optr)&t_send1, (Optr)PSend23561, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23559, 2, PAssign23560, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23558, HEADER(WebClient_Core_WebMessage_Class));
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