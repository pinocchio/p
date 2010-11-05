#include <lib/class/WebClient/Core/WebServer.h>


Optr slot_WebClient_Core_WebServer_Class_class_default;
Optr layout_WebClient_Core_WebServer_Class_class;
Optr slot_WebClient_Core_WebServer_listenerSocket;
Optr slot_WebClient_Core_WebServer_listenerProcess;
Optr slot_WebClient_Core_WebServer_interface;
Optr slot_WebClient_Core_WebServer_port;
Optr slot_WebClient_Core_WebServer_mutex;
Optr slot_WebClient_Core_WebServer_connections;
Optr slot_WebClient_Core_WebServer_entryPoints;
Optr slot_WebClient_Core_WebServer_vault;
Optr slot_WebClient_Core_WebServer_logAction;
Optr slot_WebClient_Core_WebServer_nonceCache;
Optr slot_WebClient_Core_WebServer_sessions;
Optr slot_WebClient_Core_WebServer_serverString;
Optr slot_WebClient_Core_WebServer_errorHandler;
Optr slot_WebClient_Core_WebServer_accessLog;
Optr slot_WebClient_Core_WebServer_certName;
Optr layout_WebClient_Core_WebServer;


static void init_SMB_asyncHandleConnectionFrom_() {
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22149 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22150 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22160 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22159 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22160, (Optr)&t_block_return);
    Block PBlock22158 = new_Block_with(empty_Array, empty_Array, PThreadedCode22159, 1, PSend22160);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22162 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22164 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22163 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22164, (Optr)&t_method_return);
    Block PBlock22161 = new_Block_with(PArray22162, empty_Array, PThreadedCode22163, 1, PSend22164);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22165 = new_Send((Optr)PBlock22158, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22161);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22168 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22170 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22169 = new_Block_with(empty_Array, empty_Array, PThreadedCode22170, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22171 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22168, (Optr)PBlock22169);
    Array PThreadedCode22167 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22168, (Optr)&t_push_closure, (Optr)PBlock22169, (Optr)&t_send2, (Optr)PSend22171, (Optr)&t_block_return);
    Block PBlock22166 = new_Block_with(empty_Array, empty_Array, PThreadedCode22167, 1, PSend22171);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22172 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22166);
    Array PThreadedCode22157 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22158, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22161, (Optr)&t_send2, (Optr)PSend22165, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22166, (Optr)&t_send1, (Optr)PSend22172, (Optr)&t_block_return);
    Block PBlock22156 = new_Block_with(empty_Array, empty_Array, PThreadedCode22157, 2, PSend22165, PSend22172);
    // destroy. 
    Send PSend22175 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22174 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22175, (Optr)&t_block_return);
    Block PBlock22173 = new_Block_with(empty_Array, empty_Array, PThreadedCode22174, 1, PSend22175);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22176 = new_Send((Optr)PBlock22156, SMB_ensure_, 1, (Optr)PBlock22173);
    Array PThreadedCode22155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22156, (Optr)&t_push_closure, (Optr)PBlock22173, (Optr)&t_send1, (Optr)PSend22176, (Optr)&t_block_return);
    Block PBlock22154 = new_Block_with(empty_Array, empty_Array, PThreadedCode22155, 1, PSend22176);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22153 = new_Send((Optr)PBlock22154, SMB_fork, 0);
    Assign PAssign22152 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22153);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22179 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22178 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22179, (Optr)&t_block_return);
    Block PBlock22177 = new_Block_with(empty_Array, empty_Array, PThreadedCode22178, 1, PSend22179);
    // critical:. 
    Send PSend22180 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22177);
    Array PThreadedCode22151 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22152, (Optr)&t_push_closure, (Optr)PBlock22154, (Optr)&t_send0, (Optr)PSend22153, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22177, (Optr)&t_send1, (Optr)PSend22180, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22148 = new_Method_with(PArray22149, PArray22150, empty_Array, PThreadedCode22151, 3, PAssign22152, PSend22180, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22148, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22182 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22187 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22186 = new_Block_with(empty_Array, empty_Array, PThreadedCode22187, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22188 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22186);
    Array PThreadedCode22185 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22186, (Optr)&t_send2, (Optr)PSend22188, (Optr)&t_block_return);
    Block PBlock22184 = new_Block_with(empty_Array, empty_Array, PThreadedCode22185, 1, PSend22188);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22189 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22184);
    Array PThreadedCode22183 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22184, (Optr)&t_send1, (Optr)PSend22189, (Optr)&t_method_return);
    Method PMethod22181 = new_Method_with(PArray22182, empty_Array, empty_Array, PThreadedCode22183, 1, PSend22189);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22181, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22191 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22190 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22191, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22190, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22194 = new_String(L"HEAD");
    String string_22195 = new_String(L"TRACE");
    String string_22196 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22194_Const = new_Constant((Optr)string_22194);
    Constant string_22195_Const = new_Constant((Optr)string_22195);
    Constant string_22196_Const = new_Constant((Optr)string_22196);
    // with:with:with:. 
    Send PSend22197 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22194_Const, (Optr)string_22195_Const, (Optr)string_22196_Const);
    Array PThreadedCode22193 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22194, (Optr)&t_push1, (Optr)string_22195, (Optr)&t_push1, (Optr)string_22196, (Optr)&t_send3, (Optr)PSend22197, (Optr)&t_method_return);
    Method PMethod22192 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22193, 1, PSend22197);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22192, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22199 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22202 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22206 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22205 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22206, (Optr)&t_block_return);
    Block PBlock22204 = new_Block_with(empty_Array, empty_Array, PThreadedCode22205, 1, PSend22206);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22207 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22204);
    Array PThreadedCode22203 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22204, (Optr)&t_send1, (Optr)PSend22207, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22201 = new_Block_with(PArray22202, empty_Array, PThreadedCode22203, 2, PSend22207, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22208 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22201);
    Array PThreadedCode22200 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22201, (Optr)&t_send1, (Optr)PSend22208, (Optr)&t_method_return);
    Method PMethod22198 = new_Method_with(PArray22199, empty_Array, empty_Array, PThreadedCode22200, 1, PSend22208);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22198, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22210 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22212 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22211 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22212, (Optr)&t_method_return);
    Method PMethod22209 = new_Method_with(PArray22210, empty_Array, empty_Array, PThreadedCode22211, 1, PSend22212);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22209, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22214 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22213 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22214, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22213, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22216 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22217 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22221 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22221_Const = new_Constant((Optr)string_22221);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22222 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22222_Const = new_Constant((Optr)string_22222);
    // ,. 
    Send PSend22220 = new_Send((Optr)string_22221_Const, SMB__append_, 1, (Optr)string_22222_Const);
    Assign PAssign22219 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22220);
    String string_22225 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22226 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22225_Const = new_Constant((Optr)string_22225);
    // ,. 
    Send PSend22227 = new_Send((Optr)string_22225_Const, SMB__append_, 1, (Optr)PSend22226);
    String string_22228 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22228_Const = new_Constant((Optr)string_22228);
    // ,. 
    Send PSend22229 = new_Send((Optr)PSend22227, SMB__append_, 1, (Optr)string_22228_Const);
    // crlf. 
    Send PSend22230 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22231 = new_Send((Optr)PSend22229, SMB__append_, 1, (Optr)PSend22230);
    String string_22232 = new_String(L"Connection: close");
    Constant string_22232_Const = new_Constant((Optr)string_22232);
    // ,. 
    Send PSend22233 = new_Send((Optr)PSend22231, SMB__append_, 1, (Optr)string_22232_Const);
    // crlf. 
    Send PSend22234 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22235 = new_Send((Optr)PSend22233, SMB__append_, 1, (Optr)PSend22234);
    String string_22236 = new_String(L"Content-Length: ");
    Constant string_22236_Const = new_Constant((Optr)string_22236);
    // ,. 
    Send PSend22237 = new_Send((Optr)PSend22235, SMB__append_, 1, (Optr)string_22236_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22238 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22239 = new_Send((Optr)PSend22238, SMB_asString, 0);
    // ,. 
    Send PSend22240 = new_Send((Optr)PSend22237, SMB__append_, 1, (Optr)PSend22239);
    // crlf. 
    Send PSend22241 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22242 = new_Send((Optr)PSend22240, SMB__append_, 1, (Optr)PSend22241);
    // crlf. 
    Send PSend22243 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22244 = new_Send((Optr)PSend22242, SMB__append_, 1, (Optr)PSend22243);
    // ,. 
    Send PSend22245 = new_Send((Optr)PSend22244, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22246 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22245);
    Array PThreadedCode22224 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22225, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22226, (Optr)&t_send1, (Optr)PSend22227, (Optr)&t_push1, (Optr)string_22228, (Optr)&t_send1, (Optr)PSend22229, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22230, (Optr)&t_send1, (Optr)PSend22231, (Optr)&t_push1, (Optr)string_22232, (Optr)&t_send1, (Optr)PSend22233, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22234, (Optr)&t_send1, (Optr)PSend22235, (Optr)&t_push1, (Optr)string_22236, (Optr)&t_send1, (Optr)PSend22237, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22238, (Optr)&t_send0, (Optr)PSend22239, (Optr)&t_send1, (Optr)PSend22240, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22241, (Optr)&t_send1, (Optr)PSend22242, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22243, (Optr)&t_send1, (Optr)PSend22244, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22245, (Optr)&t_send1, (Optr)PSend22246, (Optr)&t_block_return);
    Block PBlock22223 = new_Block_with(empty_Array, empty_Array, PThreadedCode22224, 1, PSend22246);
    Array PThreadedCode22248 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22247 = new_Block_with(empty_Array, empty_Array, PThreadedCode22248, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22249 = new_Send((Optr)PBlock22223, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22247);
    Array PThreadedCode22218 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22219, (Optr)&t_push1, (Optr)string_22221, (Optr)&t_push1, (Optr)string_22222, (Optr)&t_send1, (Optr)PSend22220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22223, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22247, (Optr)&t_send2, (Optr)PSend22249, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22215 = new_Method_with(PArray22216, PArray22217, empty_Array, PThreadedCode22218, 3, PAssign22219, PSend22249, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22215, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22251 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22253 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22252 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22253, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22250 = new_Method_with(PArray22251, empty_Array, empty_Array, PThreadedCode22252, 1, PAssign22253);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22250, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22255 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22255, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22254, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22258 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22263 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22262 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22263, (Optr)&t_block_return);
    Block PBlock22261 = new_Block_with(empty_Array, empty_Array, PThreadedCode22262, 1, PSend22263);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22260 = new_Send((Optr)PBlock22261, SMB_fork, 0);
    Assign PAssign22259 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22260);
    Array PThreadedCode22257 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22258, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22259, (Optr)&t_push_closure, (Optr)PBlock22261, (Optr)&t_send0, (Optr)PSend22260, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22256 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22257, 3, PSend22258, PAssign22259, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22256, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22267 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22266 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22267);
    // new. 
    Send PSend22269 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22268 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22269);
    // new. 
    Send PSend22271 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22270 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22271);
    // new. 
    Send PSend22273 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22272 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22273);
    // new. 
    Send PSend22275 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22274 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22275);
    // new. 
    Send PSend22277 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22276 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22277);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22279 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22282 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22284 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22285 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22283 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22284, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22285, (Optr)&t_method_return);
    Block PBlock22281 = new_Block_with(PArray22282, empty_Array, PThreadedCode22283, 2, PSend22284, PSend22285);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22286 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22287 = new_Send((Optr)PBlock22281, SMB_value_, 1, (Optr)PSend22286);
    Array PThreadedCode22280 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22281, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22286, (Optr)&t_send1, (Optr)PSend22287, (Optr)&t_method_return);
    Block PBlock22278 = new_Block_with(PArray22279, empty_Array, PThreadedCode22280, 1, PSend22287);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22288 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22278);
    Array PThreadedCode22265 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22266, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22268, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22269, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22270, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22271, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22272, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22273, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22274, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22275, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22276, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22277, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22278, (Optr)&t_send1, (Optr)PSend22288, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22264 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22265, 8, PAssign22266, PAssign22268, PAssign22270, PAssign22272, PAssign22274, PAssign22276, PSend22288, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22264, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22290 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22292 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22291 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22292, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22289 = new_Method_with(PArray22290, empty_Array, empty_Array, PThreadedCode22291, 2, PAssign22292, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22289, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22294 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22295 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22298 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22305 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22304 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22305);
    Array PThreadedCode22303 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22304, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22305, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22302 = new_Block_with(empty_Array, empty_Array, PThreadedCode22303, 1, PAssign22304);
    String string_22308 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22308_Const = new_Constant((Optr)string_22308);
    // error:. 
    Send PSend22309 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22308_Const);
    Array PThreadedCode22307 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22308, (Optr)&t_send1, (Optr)PSend22309, (Optr)&t_block_return);
    Block PBlock22306 = new_Block_with(empty_Array, empty_Array, PThreadedCode22307, 1, PSend22309);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22310 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22302, (Optr)PBlock22306);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22313 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22312 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22313, (Optr)&t_block_return);
    Block PBlock22311 = new_Block_with(empty_Array, empty_Array, PThreadedCode22312, 1, PSend22313);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22316 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22319 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22320 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22319);
    Array PThreadedCode22318 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22319, (Optr)&t_send1, (Optr)PSend22320, (Optr)&t_block_return);
    Block PBlock22317 = new_Block_with(empty_Array, empty_Array, PThreadedCode22318, 1, PSend22320);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22321 = new_Send((Optr)PSend22316, SMB_ifNil_, 1, (Optr)PBlock22317);
    String string_22322 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22322_Const = new_Constant((Optr)string_22322);
    // warn:. 
    Send PSend22323 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22322_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22325 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22324 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22325);
    String string_22326 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22326_Const = new_Constant((Optr)string_22326);
    // warn:. 
    Send PSend22327 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22326_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22330 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22329 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22330, (Optr)&t_block_return);
    Block PBlock22328 = new_Block_with(empty_Array, empty_Array, PThreadedCode22329, 1, PSend22330);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22332 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22334 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22335 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22334);
    Array PThreadedCode22333 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22334, (Optr)&t_send1, (Optr)PSend22335, (Optr)&t_method_return);
    Block PBlock22331 = new_Block_with(PArray22332, empty_Array, PThreadedCode22333, 1, PSend22335);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22336 = new_Send((Optr)PBlock22328, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22331);
    String string_22337 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22337_Const = new_Constant((Optr)string_22337);
    // warn:. 
    Send PSend22338 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22337_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22339 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22315 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22316, (Optr)&t_push_closure, (Optr)PBlock22317, (Optr)&t_send1, (Optr)PSend22321, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22322, (Optr)&t_send1, (Optr)PSend22323, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22324, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22325, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22326, (Optr)&t_send1, (Optr)PSend22327, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22328, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22331, (Optr)&t_send2, (Optr)PSend22336, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22337, (Optr)&t_send1, (Optr)PSend22338, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22339, (Optr)&t_block_return);
    Block PBlock22314 = new_Block_with(empty_Array, empty_Array, PThreadedCode22315, 7, PSend22321, PSend22323, PAssign22324, PSend22327, PSend22336, PSend22338, PSend22339);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22340 = new_Send((Optr)PBlock22311, SMB_whileTrue_, 1, (Optr)PBlock22314);
    Array PThreadedCode22301 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22302, (Optr)&t_push_closure, (Optr)PBlock22306, (Optr)&t_send2, (Optr)PSend22310, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22311, (Optr)&t_push_closure, (Optr)PBlock22314, (Optr)&t_send1, (Optr)PSend22340, (Optr)&t_block_return);
    Block PBlock22300 = new_Block_with(empty_Array, empty_Array, PThreadedCode22301, 2, PSend22310, PSend22340);
    Array PArray22342 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22344 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22343 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22344, (Optr)&t_method_return);
    Block PBlock22341 = new_Block_with(PArray22342, empty_Array, PThreadedCode22343, 1, PSend22344);
    // on:do:. 
    Send PSend22345 = new_Send((Optr)PBlock22300, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22341);
    Array PThreadedCode22299 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22300, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22341, (Optr)&t_send2, (Optr)PSend22345, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22297 = new_Block_with(PArray22298, empty_Array, PThreadedCode22299, 2, PSend22345, self);
    // on:. 
    Send PSend22346 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22297);
    Array PThreadedCode22296 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22297, (Optr)&t_send1, (Optr)PSend22346, (Optr)&t_method_return);
    Method PMethod22293 = new_Method_with(PArray22294, PArray22295, empty_Array, PThreadedCode22296, 1, PSend22346);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22293, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22348 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22348, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22347, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22350 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22349 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22350, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22349, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22352 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22354 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22354, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22351 = new_Method_with(PArray22352, empty_Array, empty_Array, PThreadedCode22353, 2, PAssign22354, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22351, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22357 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22356 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22357, (Optr)&t_method_return);
    Method PMethod22355 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22356, 1, PSend22357);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22355, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22359 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22362 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22370 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22373 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22372 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22373, (Optr)&t_block_return);
    Block PBlock22371 = new_Block_with(empty_Array, empty_Array, PThreadedCode22372, 1, PSend22373);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22374 = new_Send((Optr)PSend22370, SMB_and_, 1, (Optr)PBlock22371);
    Array PThreadedCode22369 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22370, (Optr)&t_push_closure, (Optr)PBlock22371, (Optr)&t_send1, (Optr)PSend22374, (Optr)&t_block_return);
    Block PBlock22368 = new_Block_with(empty_Array, empty_Array, PThreadedCode22369, 1, PSend22374);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22378 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22377 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22378);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22381 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22380 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22381, (Optr)&t_block_return);
    Block PBlock22379 = new_Block_with(empty_Array, empty_Array, PThreadedCode22380, 1, PSend22381);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22382 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22379);
    Array PThreadedCode22376 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22377, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22378, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22379, (Optr)&t_send1, (Optr)PSend22382, (Optr)&t_block_return);
    Block PBlock22375 = new_Block_with(empty_Array, empty_Array, PThreadedCode22376, 2, PAssign22377, PSend22382);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22383 = new_Send((Optr)PBlock22368, SMB_whileTrue_, 1, (Optr)PBlock22375);
    Array PThreadedCode22367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22368, (Optr)&t_push_closure, (Optr)PBlock22375, (Optr)&t_send1, (Optr)PSend22383, (Optr)&t_block_return);
    Block PBlock22366 = new_Block_with(empty_Array, empty_Array, PThreadedCode22367, 1, PSend22383);
    String string_22386 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22388 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22390 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22389 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22390, (Optr)&t_method_return);
    Block PBlock22387 = new_Block_with(PArray22388, empty_Array, PThreadedCode22389, 1, PSend22390);
    // ifNotNil:. 
    Send PSend22391 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22387);
    Constant string_22386_Const = new_Constant((Optr)string_22386);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22392 = new_Send((Optr)string_22386_Const, SMB__append_, 1, (Optr)PSend22391);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22393 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22392);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22394 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22397 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22398 = new_Send((Optr)PSend22397, SMB_not, 0);
    Array PThreadedCode22396 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22397, (Optr)&t_send0, (Optr)PSend22398, (Optr)&t_block_return);
    Block PBlock22395 = new_Block_with(empty_Array, empty_Array, PThreadedCode22396, 1, PSend22398);
    // and:. 
    Send PSend22399 = new_Send((Optr)PSend22394, SMB_and_, 1, (Optr)PBlock22395);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22403 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22404 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22405 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22406 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22405);
    Array PThreadedCode22402 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22403, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22404, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22405, (Optr)&t_send1, (Optr)PSend22406, (Optr)&t_block_return);
    Block PBlock22401 = new_Block_with(empty_Array, empty_Array, PThreadedCode22402, 3, PSend22403, PAssign22404, PSend22406);
    // ifTrue:. 
    Send PSend22400 = new_Send((Optr)PSend22399, SMB_ifTrue_, 1, (Optr)PBlock22401);
    Array PThreadedCode22385 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22386, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22387, (Optr)&t_send1, (Optr)PSend22391, (Optr)&t_send1, (Optr)PSend22392, (Optr)&t_send1, (Optr)PSend22393, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22394, (Optr)&t_push_closure, (Optr)PBlock22395, (Optr)&t_send1, (Optr)PSend22399, (Optr)&t_send_ifTrue_, (Optr)PSend22400, (Optr)PBlock22401, (Optr)&t_block_return);
    Block PBlock22384 = new_Block_with(empty_Array, empty_Array, PThreadedCode22385, 2, PSend22393, PSend22400);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22407 = new_Send((Optr)PBlock22366, SMB_ensure_, 1, (Optr)PBlock22384);
    Array PThreadedCode22365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22366, (Optr)&t_push_closure, (Optr)PBlock22384, (Optr)&t_send1, (Optr)PSend22407, (Optr)&t_block_return);
    Block PBlock22364 = new_Block_with(empty_Array, empty_Array, PThreadedCode22365, 1, PSend22407);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22409 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22411 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22410 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22411, (Optr)&t_method_return);
    Block PBlock22408 = new_Block_with(PArray22409, empty_Array, PThreadedCode22410, 1, PSend22411);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22412 = new_Send((Optr)PBlock22364, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22408);
    Array PThreadedCode22363 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22364, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22408, (Optr)&t_send2, (Optr)PSend22412, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22361 = new_Block_with(PArray22362, empty_Array, PThreadedCode22363, 2, PSend22412, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22413 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22361);
    Array PThreadedCode22360 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22361, (Optr)&t_send1, (Optr)PSend22413, (Optr)&t_method_return);
    Method PMethod22358 = new_Method_with(empty_Array, PArray22359, empty_Array, PThreadedCode22360, 1, PSend22413);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22358, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22416 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22417 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22420 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22419 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22420, (Optr)&t_block_return);
    Block PBlock22418 = new_Block_with(empty_Array, empty_Array, PThreadedCode22419, 1, PSend22420);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22421 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22418);
    Array PThreadedCode22415 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22416, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22417, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22418, (Optr)&t_send1, (Optr)PSend22421, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22414 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22415, 4, PSend22416, PSend22417, PSend22421, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22414, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22423 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22425 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22424 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22425, (Optr)&t_method_return);
    Method PMethod22422 = new_Method_with(PArray22423, empty_Array, empty_Array, PThreadedCode22424, 1, PSend22425);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22422, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22431 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22433 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22432 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22433, (Optr)&t_method_return);
    Block PBlock22430 = new_Block_with(PArray22431, empty_Array, PThreadedCode22432, 1, PSend22433);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22434 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22430);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22435 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22429 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22430, (Optr)&t_send1, (Optr)PSend22434, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22435, (Optr)&t_block_return);
    Block PBlock22428 = new_Block_with(empty_Array, empty_Array, PThreadedCode22429, 2, PSend22434, PSend22435);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22436 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22428);
    Array PThreadedCode22427 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22428, (Optr)&t_send1, (Optr)PSend22436, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22427, 2, PSend22436, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22426, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22439 = new_String(L"GET");
    String string_22440 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22439_Const = new_Constant((Optr)string_22439);
    Constant string_22440_Const = new_Constant((Optr)string_22440);
    // with:with:. 
    Send PSend22441 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22439_Const, (Optr)string_22440_Const);
    Array PThreadedCode22438 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22439, (Optr)&t_push1, (Optr)string_22440, (Optr)&t_send2, (Optr)PSend22441, (Optr)&t_method_return);
    Method PMethod22437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22438, 1, PSend22441);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22437, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22443 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22442 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22443, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22442, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22445 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22446 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22448 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22449 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22454 = new_String(L"*");
    Array PThreadedCode22453 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22454, (Optr)&t_block_return);
    Constant string_22454_Const = new_Constant((Optr)string_22454);
    Block PBlock22452 = new_Block_with(empty_Array, empty_Array, PThreadedCode22453, 1, string_22454_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22457 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22456 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22457, (Optr)&t_block_return);
    Block PBlock22455 = new_Block_with(empty_Array, empty_Array, PThreadedCode22456, 1, PSend22457);
    // ifNil:ifNotNil:. 
    Send PSend22451 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22452, (Optr)PBlock22455);
    Assign PAssign22450 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22451);
    String string_22458 = new_String(L"Listener starting (interface: ");
    Constant string_22458_Const = new_Constant((Optr)string_22458);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22459 = new_Send((Optr)string_22458_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22460 = new_String(L" port: ");
    Constant string_22460_Const = new_Constant((Optr)string_22460);
    // ,. 
    Send PSend22461 = new_Send((Optr)PSend22459, SMB__append_, 1, (Optr)string_22460_Const);
    // ,. 
    Send PSend22462 = new_Send((Optr)PSend22461, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22463 = new_String(L")");
    Constant string_22463_Const = new_Constant((Optr)string_22463);
    // ,. 
    Send PSend22464 = new_Send((Optr)PSend22462, SMB__append_, 1, (Optr)string_22463_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22465 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22464);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22467 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22466 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22467);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22470 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22469 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22470, (Optr)&t_block_return);
    Block PBlock22468 = new_Block_with(empty_Array, empty_Array, PThreadedCode22469, 1, PSend22470);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22473 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22472 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22473, (Optr)&t_block_return);
    Block PBlock22471 = new_Block_with(empty_Array, empty_Array, PThreadedCode22472, 1, PSend22473);
    // ifNil:ifNotNil:. 
    Send PSend22474 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22468, (Optr)PBlock22471);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22475 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22447 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22448, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22449, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22450, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22452, (Optr)&t_push_closure, (Optr)PBlock22455, (Optr)&t_send2, (Optr)PSend22451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22458, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22459, (Optr)&t_push1, (Optr)string_22460, (Optr)&t_send1, (Optr)PSend22461, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22462, (Optr)&t_push1, (Optr)string_22463, (Optr)&t_send1, (Optr)PSend22464, (Optr)&t_send1, (Optr)PSend22465, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22466, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22467, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22468, (Optr)&t_push_closure, (Optr)PBlock22471, (Optr)&t_send2, (Optr)PSend22474, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22475, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22444 = new_Method_with(PArray22445, PArray22446, empty_Array, PThreadedCode22447, 8, PAssign22448, PAssign22449, PAssign22450, PSend22465, PAssign22466, PSend22474, PSend22475, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22444, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22477 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22476 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22477, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22476, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22479 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22481 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22482 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22481);
    Array PThreadedCode22480 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22481, (Optr)&t_send3, (Optr)PSend22482, (Optr)&t_method_return);
    Method PMethod22478 = new_Method_with(PArray22479, empty_Array, empty_Array, PThreadedCode22480, 1, PSend22482);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22478, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22487 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22486 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22487, (Optr)&t_block_return);
    Block PBlock22485 = new_Block_with(empty_Array, empty_Array, PThreadedCode22486, 1, PSend22487);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22488 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22485);
    Assign PAssign22489 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22484 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22485, (Optr)&t_send1, (Optr)PSend22488, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22489, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22484, 3, PSend22488, PAssign22489, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22483, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22491 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22493 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22492 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22493, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22490 = new_Method_with(PArray22491, empty_Array, empty_Array, PThreadedCode22492, 2, PAssign22493, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22490, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22496 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22497 = new_Send((Optr)PSend22496, SMB_not, 0);
    Array PThreadedCode22495 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22496, (Optr)&t_send0, (Optr)PSend22497, (Optr)&t_method_return);
    Method PMethod22494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22495, 1, PSend22497);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22494, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22499 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22499, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22498, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22501 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22502 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22505 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22507 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22508 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22508_Const = new_Constant((Optr)string_22508);
    // =. 
    Send PSend22509 = new_Send((Optr)PSend22507, SMB__equals_, 1, (Optr)string_22508_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22513 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22514 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22514_Const = new_Constant((Optr)string_22514);
    // send200Response:contentType:. 
    Send PSend22515 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22513, (Optr)string_22514_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22516 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22515);
    Array PThreadedCode22512 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22513, (Optr)&t_push1, (Optr)string_22514, (Optr)&t_send2, (Optr)PSend22515, (Optr)&t_send1, (Optr)PSend22516, (Optr)&t_block_return);
    Block PBlock22511 = new_Block_with(empty_Array, empty_Array, PThreadedCode22512, 1, PSend22516);
    // ifTrue:. 
    Send PSend22510 = new_Send((Optr)PSend22509, SMB_ifTrue_, 1, (Optr)PBlock22511);
    Assign PAssign22517 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22519 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22518 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22519);
    String string_22520 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22520_Const = new_Constant((Optr)string_22520);
    // beginsWith:. 
    Send PSend22521 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22520_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22527 = new_String(L"/");
    Constant string_22527_Const = new_Constant((Optr)string_22527);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22526 = new_Send((Optr)string_22527_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22525 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22526);
    Array PThreadedCode22524 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22525, (Optr)&t_push1, (Optr)string_22527, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22526, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22523 = new_Block_with(empty_Array, empty_Array, PThreadedCode22524, 1, PAssign22525);
    // ifFalse:. 
    Send PSend22522 = new_Send((Optr)PSend22521, SMB_ifFalse_, 1, (Optr)PBlock22523);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22532 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22535 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22534 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22535, (Optr)&t_block_return);
    Block PBlock22533 = new_Block_with(empty_Array, empty_Array, PThreadedCode22534, 1, PSend22535);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22536 = new_Send((Optr)PSend22532, SMB_and_, 1, (Optr)PBlock22533);
    Array PThreadedCode22531 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22532, (Optr)&t_push_closure, (Optr)PBlock22533, (Optr)&t_send1, (Optr)PSend22536, (Optr)&t_block_return);
    Block PBlock22530 = new_Block_with(empty_Array, empty_Array, PThreadedCode22531, 1, PSend22536);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22542 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22541 = new_Block_with(empty_Array, empty_Array, PThreadedCode22542, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22540 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22541);
    Assign PAssign22539 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22540);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22545 = new_Character(L'/');
    Constant char_22545_Const = new_Constant((Optr)char_22545);
    // copyUpToLast:. 
    Send PSend22544 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22545_Const);
    Assign PAssign22543 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22544);
    Array PThreadedCode22538 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22539, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22541, (Optr)&t_send2, (Optr)PSend22540, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22543, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22545, (Optr)&t_send1, (Optr)PSend22544, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22537 = new_Block_with(empty_Array, empty_Array, PThreadedCode22538, 2, PAssign22539, PAssign22543);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22546 = new_Send((Optr)PBlock22530, SMB_whileTrue_, 1, (Optr)PBlock22537);
    String string_22551 = new_String(L"/");
    Constant string_22551_Const = new_Constant((Optr)string_22551);
    Array PThreadedCode22553 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22552 = new_Block_with(empty_Array, empty_Array, PThreadedCode22553, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22550 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_22551_Const, (Optr)PBlock22552);
    Assign PAssign22549 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22550);
    Array PThreadedCode22548 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22549, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_22551, (Optr)&t_push_closure, (Optr)PBlock22552, (Optr)&t_send2, (Optr)PSend22550, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22547 = new_Block_with(empty_Array, empty_Array, PThreadedCode22548, 1, PAssign22549);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22554 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22547);
    Array PThreadedCode22529 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22530, (Optr)&t_push_closure, (Optr)PBlock22537, (Optr)&t_send1, (Optr)PSend22546, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22547, (Optr)&t_send1, (Optr)PSend22554, (Optr)&t_block_return);
    Block PBlock22528 = new_Block_with(empty_Array, empty_Array, PThreadedCode22529, 2, PSend22546, PSend22554);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22555 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22528);
    // method. 
    Send PSend22556 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22557 = new_String(L"OPTIONS");
    Constant string_22557_Const = new_Constant((Optr)string_22557);
    // =. 
    Send PSend22558 = new_Send((Optr)PSend22556, SMB__equals_, 1, (Optr)string_22557_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend22562 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22565 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode22564 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22565, (Optr)&t_block_return);
    Block PBlock22563 = new_Block_with(empty_Array, empty_Array, PThreadedCode22564, 1, PSend22565);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend22568 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode22567 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22568, (Optr)&t_block_return);
    Block PBlock22566 = new_Block_with(empty_Array, empty_Array, PThreadedCode22567, 1, PSend22568);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22569 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22563, (Optr)PBlock22566);
    // ,. 
    Send PSend22570 = new_Send((Optr)PSend22562, SMB__append_, 1, (Optr)PSend22569);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend22571 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend22570);
    Array PThreadedCode22561 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22562, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22563, (Optr)&t_push_closure, (Optr)PBlock22566, (Optr)&t_send2, (Optr)PSend22569, (Optr)&t_send1, (Optr)PSend22570, (Optr)&t_send1, (Optr)PSend22571, (Optr)&t_block_return);
    Block PBlock22560 = new_Block_with(empty_Array, empty_Array, PThreadedCode22561, 1, PSend22571);
    // ifTrue:. 
    Send PSend22559 = new_Send((Optr)PSend22558, SMB_ifTrue_, 1, (Optr)PBlock22560);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend22574 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend22575 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22574);
    Array PThreadedCode22573 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22574, (Optr)&t_send1, (Optr)PSend22575, (Optr)&t_block_return);
    Block PBlock22572 = new_Block_with(empty_Array, empty_Array, PThreadedCode22573, 1, PSend22575);
    // ifNil:. 
    Send PSend22576 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22572);
    // method. 
    Send PSend22577 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22578 = new_String(L"HEAD");
    Constant string_22578_Const = new_Constant((Optr)string_22578);
    // =. 
    Send PSend22579 = new_Send((Optr)PSend22577, SMB__equals_, 1, (Optr)string_22578_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend22582 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend22583 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend22584 = new_Send((Optr)PSend22582, SMB_includes_, 1, (Optr)PSend22583);
    Array PThreadedCode22581 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22582, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22583, (Optr)&t_send1, (Optr)PSend22584, (Optr)&t_block_return);
    Block PBlock22580 = new_Block_with(empty_Array, empty_Array, PThreadedCode22581, 1, PSend22584);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22585 = new_Send((Optr)PSend22579, SMB_or_, 1, (Optr)PBlock22580);
    // builtinHttpMethods. 
    Send PSend22589 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend22590 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend22591 = new_Send((Optr)PSend22589, SMB__append_, 1, (Optr)PSend22590);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend22592 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend22591);
    // escape:. 
    Send PSend22593 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22592);
    Array PThreadedCode22588 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22589, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22590, (Optr)&t_send1, (Optr)PSend22591, (Optr)&t_send1, (Optr)PSend22592, (Optr)&t_send1, (Optr)PSend22593, (Optr)&t_block_return);
    Block PBlock22587 = new_Block_with(empty_Array, empty_Array, PThreadedCode22588, 1, PSend22593);
    // ifFalse:. 
    Send PSend22586 = new_Send((Optr)PSend22585, SMB_ifFalse_, 1, (Optr)PBlock22587);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend22596 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend22597 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend22596, (Optr)VAR_request_0_0);
    Array PThreadedCode22595 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22596, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend22597, (Optr)&t_block_return);
    Block PBlock22594 = new_Block_with(empty_Array, empty_Array, PThreadedCode22595, 1, PSend22597);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22599 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22601 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22600 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22601, (Optr)&t_method_return);
    Block PBlock22598 = new_Block_with(PArray22599, empty_Array, PThreadedCode22600, 1, PSend22601);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22602 = new_Send((Optr)PBlock22594, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22598);
    Array PThreadedCode22506 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22507, (Optr)&t_push1, (Optr)string_22508, (Optr)&t_send1, (Optr)PSend22509, (Optr)&t_send_ifTrue_, (Optr)PSend22510, (Optr)PBlock22511, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22517, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22518, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22519, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22520, (Optr)&t_send1, (Optr)PSend22521, (Optr)&t_send_ifFalse_, (Optr)PSend22522, (Optr)PBlock22523, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22528, (Optr)&t_send1, (Optr)PSend22555, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22556, (Optr)&t_push1, (Optr)string_22557, (Optr)&t_send1, (Optr)PSend22558, (Optr)&t_send_ifTrue_, (Optr)PSend22559, (Optr)PBlock22560, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22572, (Optr)&t_send1, (Optr)PSend22576, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22577, (Optr)&t_push1, (Optr)string_22578, (Optr)&t_send1, (Optr)PSend22579, (Optr)&t_push_closure, (Optr)PBlock22580, (Optr)&t_send1, (Optr)PSend22585, (Optr)&t_send_ifFalse_, (Optr)PSend22586, (Optr)PBlock22587, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22594, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22598, (Optr)&t_send2, (Optr)PSend22602, (Optr)&t_method_return);
    Block PBlock22504 = new_Block_with(PArray22505, empty_Array, PThreadedCode22506, 9, PSend22510, PAssign22517, PAssign22518, PSend22522, PSend22555, PSend22559, PSend22576, PSend22586, PSend22602);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22603 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22504);
    Array PThreadedCode22503 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22504, (Optr)&t_send1, (Optr)PSend22603, (Optr)&t_method_return);
    Method PMethod22500 = new_Method_with(PArray22501, PArray22502, empty_Array, PThreadedCode22503, 1, PSend22603);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22500, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray22605 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend22607 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22606 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22607, (Optr)&t_method_return);
    Method PMethod22604 = new_Method_with(PArray22605, empty_Array, empty_Array, PThreadedCode22606, 1, PSend22607);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22604, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22609 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22613 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22612 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend22613, (Optr)&t_block_return);
    Block PBlock22611 = new_Block_with(empty_Array, empty_Array, PThreadedCode22612, 1, PSend22613);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22614 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22611);
    Array PThreadedCode22610 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22611, (Optr)&t_send1, (Optr)PSend22614, (Optr)&t_method_return);
    Method PMethod22608 = new_Method_with(PArray22609, empty_Array, empty_Array, PThreadedCode22610, 1, PSend22614);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod22608, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode22616 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22616, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22615, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray22618 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray22619 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_22627 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_22627_Const = new_Constant((Optr)string_22627);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22628 = new_String(L"<h1>Internal Server Error: ");
    Constant string_22628_Const = new_Constant((Optr)string_22628);
    // ,. 
    Send PSend22626 = new_Send((Optr)string_22627_Const, SMB__append_, 1, (Optr)string_22628_Const);
    // ,. 
    Send PSend22625 = new_Send((Optr)PSend22626, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_22629 = new_String(L"</h1><pre>");
    Constant string_22629_Const = new_Constant((Optr)string_22629);
    // ,. 
    Send PSend22624 = new_Send((Optr)PSend22625, SMB__append_, 1, (Optr)string_22629_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22631 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22632 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend22630 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend22631, (Optr)PSend22632);
    // ,. 
    Send PSend22623 = new_Send((Optr)PSend22624, SMB__append_, 1, (Optr)PSend22630);
    String string_22633 = new_String(L"</pre></body></html>");
    Constant string_22633_Const = new_Constant((Optr)string_22633);
    // ,. 
    Send PSend22622 = new_Send((Optr)PSend22623, SMB__append_, 1, (Optr)string_22633_Const);
    Assign PAssign22621 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend22622);
    SmallInt int_500 = new_SmallInt(500);
    String string_22634 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_22634_Const = new_Constant((Optr)string_22634);
    // sendResponseCode:content:type:close:. 
    Send PSend22635 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_22634_Const, (Optr)true_Const);
    Array PThreadedCode22620 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign22621, (Optr)&t_push1, (Optr)string_22627, (Optr)&t_push1, (Optr)string_22628, (Optr)&t_send1, (Optr)PSend22626, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend22625, (Optr)&t_push1, (Optr)string_22629, (Optr)&t_send1, (Optr)PSend22624, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22631, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22632, (Optr)&t_send2, (Optr)PSend22630, (Optr)&t_send1, (Optr)PSend22623, (Optr)&t_push1, (Optr)string_22633, (Optr)&t_send1, (Optr)PSend22622, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_22634, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend22635, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22617 = new_Method_with(PArray22618, PArray22619, empty_Array, PThreadedCode22620, 3, PAssign22621, PSend22635, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod22617, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportInternalServerError_label_request_, MC_SMB_reportInternalServerError_label_request_);
}


static void init_SMB_serverString() {
    /*
    serverString
// 	"Returns the server string to be used in responses"
// 
// 	^'WebServer/1.3 (Minimal port for Pinocchio)'.
// 
    */
    Symbol SMB_serverString = new_Symbol(L"serverString");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22642 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend22641 = new_Send((Optr)PSend22642, SMB_serverString, 0);
    Assign PAssign22640 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend22641);
    Array PThreadedCode22639 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22640, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22642, (Optr)&t_send0, (Optr)PSend22641, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22638 = new_Block_with(empty_Array, empty_Array, PThreadedCode22639, 1, PAssign22640);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22643 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock22638);
    Array PThreadedCode22637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock22638, (Optr)&t_send1, (Optr)PSend22643, (Optr)&t_method_return);
    Method PMethod22636 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22637, 1, PSend22643);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22636, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22645 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22649 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22650 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend22649);
    Array PThreadedCode22648 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend22649, (Optr)&t_send1, (Optr)PSend22650, (Optr)&t_block_return);
    Block PBlock22647 = new_Block_with(empty_Array, empty_Array, PThreadedCode22648, 1, PSend22650);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22651 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock22647);
    Array PThreadedCode22646 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock22647, (Optr)&t_send1, (Optr)PSend22651, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22644 = new_Method_with(PArray22645, empty_Array, empty_Array, PThreadedCode22646, 2, PSend22651, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod22644, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22655 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend22657 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22658 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode22656 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22657, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22658, (Optr)&t_method_return);
    Block PBlock22654 = new_Block_with(PArray22655, empty_Array, PThreadedCode22656, 2, PSend22657, PSend22658);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22659 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22660 = new_Send((Optr)PBlock22654, SMB_value_, 1, (Optr)PSend22659);
    Array PThreadedCode22653 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22654, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend22659, (Optr)&t_send1, (Optr)PSend22660, (Optr)&t_method_return);
    Method PMethod22652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22653, 1, PSend22660);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod22652, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22662 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22664 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22663 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22664, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22661 = new_Method_with(PArray22662, empty_Array, empty_Array, PThreadedCode22663, 2, PAssign22664, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22661, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode22666 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22666, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22665, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode22668 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22668, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22667, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerPort, MC_SMB_listenerPort);
}


static void init_SMB_serverDate() {
    /*
    serverDate
// 	"Returns the date string to be used in responses"
// 
// 	| date |
// 	^String streamContents:[:s|
// 		date := DateAndTime now asUTC.
// 		s nextPutAll: date dayOfWeekAbbreviation, ', '.
// 		date asDate printOn: s format:
// 			(OrderedCollection new add: 1; add: 2; add: 3; add: $ ; add: 2; add: 1; add: 2; yourself) asArray.
// 			"#(1 2 3 $  2 1 2 )."
// 		s space; nextPutAll: (Time seconds: date seconds) print24.
// 		s writeAll: ' GMT'.
// 	].
    */
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22671 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22672 = new_Send((Optr)PSend22671, SMB_serverDate, 0);
    Array PThreadedCode22670 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22671, (Optr)&t_send0, (Optr)PSend22672, (Optr)&t_method_return);
    Method PMethod22669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22670, 1, PSend22672);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22669, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray22674 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend22676 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend22677 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend22676);
    Array PThreadedCode22675 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22676, (Optr)&t_send2, (Optr)PSend22677, (Optr)&t_method_return);
    Method PMethod22673 = new_Method_with(PArray22674, empty_Array, empty_Array, PThreadedCode22675, 1, PSend22677);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod22673, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray22679 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22681 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22682 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend22681);
    Array PThreadedCode22680 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend22681, (Optr)&t_send1, (Optr)PSend22682, (Optr)&t_method_return);
    Method PMethod22678 = new_Method_with(PArray22679, empty_Array, empty_Array, PThreadedCode22680, 1, PSend22682);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod22678, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray22684 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22687 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_22689 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_22689_Const = new_Constant((Optr)string_22689);
    // nextPutAll:. 
    Send PSend22690 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_22689_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22691 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode22688 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_22689, (Optr)&t_send1, (Optr)PSend22690, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22691, (Optr)&t_method_return);
    Block PBlock22686 = new_Block_with(PArray22687, empty_Array, PThreadedCode22688, 2, PSend22690, PSend22691);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22692 = new_Send((Optr)PBlock22686, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode22685 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22686, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend22692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22683 = new_Method_with(PArray22684, empty_Array, empty_Array, PThreadedCode22685, 2, PSend22692, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod22683, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray22694 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22696 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22695 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22696, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22693 = new_Method_with(PArray22694, empty_Array, empty_Array, PThreadedCode22695, 2, PAssign22696, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22693, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22698 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode22703 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22702 = new_Block_with(empty_Array, empty_Array, PThreadedCode22703, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend22704 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22702);
    Array PThreadedCode22701 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22702, (Optr)&t_send2, (Optr)PSend22704, (Optr)&t_block_return);
    Block PBlock22700 = new_Block_with(empty_Array, empty_Array, PThreadedCode22701, 1, PSend22704);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22705 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22700);
    Array PThreadedCode22699 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22700, (Optr)&t_send1, (Optr)PSend22705, (Optr)&t_method_return);
    Method PMethod22697 = new_Method_with(PArray22698, empty_Array, empty_Array, PThreadedCode22699, 1, PSend22705);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod22697, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22707 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22709 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22708 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22709, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22706 = new_Method_with(PArray22707, empty_Array, empty_Array, PThreadedCode22708, 2, PAssign22709, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22706, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray22711 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22715 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22716 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22717 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend22715, (Optr)PSend22716);
    Array PThreadedCode22714 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22715, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend22716, (Optr)&t_send2, (Optr)PSend22717, (Optr)&t_block_return);
    Block PBlock22713 = new_Block_with(empty_Array, empty_Array, PThreadedCode22714, 1, PSend22717);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22718 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22713);
    Array PThreadedCode22712 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22713, (Optr)&t_send1, (Optr)PSend22718, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22710 = new_Method_with(PArray22711, empty_Array, empty_Array, PThreadedCode22712, 2, PSend22718, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod22710, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray22720 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22724 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode22726 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22725 = new_Block_with(empty_Array, empty_Array, PThreadedCode22726, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend22727 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend22724, (Optr)PBlock22725);
    Array PThreadedCode22723 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22724, (Optr)&t_push_closure, (Optr)PBlock22725, (Optr)&t_send2, (Optr)PSend22727, (Optr)&t_block_return);
    Block PBlock22722 = new_Block_with(empty_Array, empty_Array, PThreadedCode22723, 1, PSend22727);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22728 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22722);
    Array PThreadedCode22721 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22722, (Optr)&t_send1, (Optr)PSend22728, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22719 = new_Method_with(PArray22720, empty_Array, empty_Array, PThreadedCode22721, 2, PSend22728, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod22719, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_22731 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode22730 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22731, (Optr)&t_method_return);
    Constant string_22731_Const = new_Constant((Optr)string_22731);
    Method PMethod22729 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22730, 1, string_22731_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod22729, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22736 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign22737 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode22735 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend22736, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22737, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22734 = new_Block_with(empty_Array, empty_Array, PThreadedCode22735, 2, PSend22736, PAssign22737);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22738 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock22734);
    Array PThreadedCode22733 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22734, (Optr)&t_send1, (Optr)PSend22738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22732 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22733, 2, PSend22738, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod22732, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray22740 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray22743 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend22747 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend22746 = new_Send((Optr)PSend22747, SMB_asUTC, 0);
    Assign PAssign22745 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend22746);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend22748 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_22749 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22749_Const = new_Constant((Optr)string_22749);
    // ,. 
    Send PSend22750 = new_Send((Optr)PSend22748, SMB__append_, 1, (Optr)string_22749_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22751 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend22750);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend22752 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22754 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend22756 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend22757 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend22758 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend22759 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend22760 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend22761 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend22762 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22763 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode22755 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22756, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend22758, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend22759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22760, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22762, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22763, (Optr)&t_method_return);
    Block PBlock22753 = new_Block_with(PArray22754, empty_Array, PThreadedCode22755, 8, PSend22756, PSend22757, PSend22758, PSend22759, PSend22760, PSend22761, PSend22762, PSend22763);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22764 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22765 = new_Send((Optr)PBlock22753, SMB_value_, 1, (Optr)PSend22764);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22766 = new_Send((Optr)PSend22765, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend22767 = new_Send((Optr)PSend22752, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend22766);
    Array PArray22769 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend22771 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend22772 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend22773 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend22772);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend22774 = new_Send((Optr)PSend22773, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend22775 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend22774);
    Array PThreadedCode22770 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22771, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22772, (Optr)&t_send1, (Optr)PSend22773, (Optr)&t_send0, (Optr)PSend22774, (Optr)&t_send1, (Optr)PSend22775, (Optr)&t_method_return);
    Block PBlock22768 = new_Block_with(PArray22769, empty_Array, PThreadedCode22770, 2, PSend22771, PSend22775);
    // value:. 
    Send PSend22776 = new_Send((Optr)PBlock22768, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_22777 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_22777_Const = new_Constant((Optr)string_22777);
    // writeAll:. 
    Send PSend22778 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_22777_Const);
    Array PThreadedCode22744 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign22745, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend22747, (Optr)&t_send0, (Optr)PSend22746, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22748, (Optr)&t_push1, (Optr)string_22749, (Optr)&t_send1, (Optr)PSend22750, (Optr)&t_send1, (Optr)PSend22751, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22752, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock22753, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22764, (Optr)&t_send1, (Optr)PSend22765, (Optr)&t_send0, (Optr)PSend22766, (Optr)&t_send2, (Optr)PSend22767, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22768, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend22776, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_22777, (Optr)&t_send1, (Optr)PSend22778, (Optr)&t_method_return);
    Block PBlock22742 = new_Block_with(PArray22743, empty_Array, PThreadedCode22744, 5, PAssign22745, PSend22751, PSend22767, PSend22776, PSend22778);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend22779 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock22742);
    Array PThreadedCode22741 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock22742, (Optr)&t_send1, (Optr)PSend22779, (Optr)&t_method_return);
    Method PMethod22739 = new_Method_with(empty_Array, PArray22740, empty_Array, PThreadedCode22741, 1, PSend22779);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22739, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_22782 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode22781 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22782, (Optr)&t_method_return);
    Constant string_22782_Const = new_Constant((Optr)string_22782);
    Method PMethod22780 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22781, 1, string_22782_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod22780, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_22785 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode22784 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22785, (Optr)&t_method_return);
    Constant string_22785_Const = new_Constant((Optr)string_22785);
    Method PMethod22783 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22784, 1, string_22785_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22783, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22791 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign22790 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend22791);
    Array PThreadedCode22789 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22790, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22791, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22788 = new_Block_with(empty_Array, empty_Array, PThreadedCode22789, 1, PAssign22790);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22792 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock22788);
    Array PThreadedCode22787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22788, (Optr)&t_send1, (Optr)PSend22792, (Optr)&t_method_return);
    Method PMethod22786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22787, 1, PSend22792);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod22786, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray22794 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22797 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22796 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend22797);
    // new. 
    Send PSend22799 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22798 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend22799);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend22800 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend22801 = new_Send((Optr)PSend22800, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend22802 = new_Send((Optr)PSend22801, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend22803 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_22804 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray22806 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend22808 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_22809 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22809_Const = new_Constant((Optr)string_22809);
    // send200Response:contentType:. 
    Send PSend22810 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend22808, (Optr)string_22809_Const);
    Array PThreadedCode22807 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22808, (Optr)&t_push1, (Optr)string_22809, (Optr)&t_send2, (Optr)PSend22810, (Optr)&t_method_return);
    Block PBlock22805 = new_Block_with(PArray22806, empty_Array, PThreadedCode22807, 1, PSend22810);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_22804_Const = new_Constant((Optr)string_22804);
    // addService:action:. 
    Send PSend22811 = new_Send((Optr)PSend22803, SMB_addService_action_, 2, (Optr)string_22804_Const, (Optr)PBlock22805);
    Array PThreadedCode22795 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22796, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22797, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22798, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22799, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22800, (Optr)&t_send0, (Optr)PSend22801, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend22802, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22803, (Optr)&t_push1, (Optr)string_22804, (Optr)&t_push_closure, (Optr)PBlock22805, (Optr)&t_send2, (Optr)PSend22811, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22793 = new_Method_with(empty_Array, PArray22794, empty_Array, PThreadedCode22795, 5, PAssign22796, PAssign22798, PSend22802, PSend22811, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod22793, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_example, MC_SMB_example);
}

void init_WebClient_Core_PWebServer_layout() {
    slot_WebClient_Core_WebServer_Class_class_default = (Optr)new_Slot(5, L"default");
    layout_WebClient_Core_WebServer_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebServer_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebServer_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebServer_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebServer_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebServer_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebServer_Class_class)->values[5] = slot_WebClient_Core_WebServer_Class_class_default; // default 
    
    Symbol  SMB_WebServer = new_Symbol(L"WebServer");
    slot_WebClient_Core_WebServer_listenerSocket = (Optr)new_Slot(0, L"listenerSocket");
    slot_WebClient_Core_WebServer_listenerProcess = (Optr)new_Slot(1, L"listenerProcess");
    slot_WebClient_Core_WebServer_interface = (Optr)new_Slot(2, L"interface");
    slot_WebClient_Core_WebServer_port = (Optr)new_Slot(3, L"port");
    slot_WebClient_Core_WebServer_mutex = (Optr)new_Slot(4, L"mutex");
    slot_WebClient_Core_WebServer_connections = (Optr)new_Slot(5, L"connections");
    slot_WebClient_Core_WebServer_entryPoints = (Optr)new_Slot(6, L"entryPoints");
    slot_WebClient_Core_WebServer_vault = (Optr)new_Slot(7, L"vault");
    slot_WebClient_Core_WebServer_logAction = (Optr)new_Slot(8, L"logAction");
    slot_WebClient_Core_WebServer_nonceCache = (Optr)new_Slot(9, L"nonceCache");
    slot_WebClient_Core_WebServer_sessions = (Optr)new_Slot(10, L"sessions");
    slot_WebClient_Core_WebServer_serverString = (Optr)new_Slot(11, L"serverString");
    slot_WebClient_Core_WebServer_errorHandler = (Optr)new_Slot(12, L"errorHandler");
    slot_WebClient_Core_WebServer_accessLog = (Optr)new_Slot(13, L"accessLog");
    slot_WebClient_Core_WebServer_certName = (Optr)new_Slot(14, L"certName");
    layout_WebClient_Core_WebServer = (Optr)create_layout_with_vars(ObjectLayout_Class, 15);
    ((Array)layout_WebClient_Core_WebServer)->values[0] = slot_WebClient_Core_WebServer_listenerSocket; // listenerSocket 
    ((Array)layout_WebClient_Core_WebServer)->values[1] = slot_WebClient_Core_WebServer_listenerProcess; // listenerProcess 
    ((Array)layout_WebClient_Core_WebServer)->values[2] = slot_WebClient_Core_WebServer_interface; // interface 
    ((Array)layout_WebClient_Core_WebServer)->values[3] = slot_WebClient_Core_WebServer_port; // port 
    ((Array)layout_WebClient_Core_WebServer)->values[4] = slot_WebClient_Core_WebServer_mutex; // mutex 
    ((Array)layout_WebClient_Core_WebServer)->values[5] = slot_WebClient_Core_WebServer_connections; // connections 
    ((Array)layout_WebClient_Core_WebServer)->values[6] = slot_WebClient_Core_WebServer_entryPoints; // entryPoints 
    ((Array)layout_WebClient_Core_WebServer)->values[7] = slot_WebClient_Core_WebServer_vault; // vault 
    ((Array)layout_WebClient_Core_WebServer)->values[8] = slot_WebClient_Core_WebServer_logAction; // logAction 
    ((Array)layout_WebClient_Core_WebServer)->values[9] = slot_WebClient_Core_WebServer_nonceCache; // nonceCache 
    ((Array)layout_WebClient_Core_WebServer)->values[10] = slot_WebClient_Core_WebServer_sessions; // sessions 
    ((Array)layout_WebClient_Core_WebServer)->values[11] = slot_WebClient_Core_WebServer_serverString; // serverString 
    ((Array)layout_WebClient_Core_WebServer)->values[12] = slot_WebClient_Core_WebServer_errorHandler; // errorHandler 
    ((Array)layout_WebClient_Core_WebServer)->values[13] = slot_WebClient_Core_WebServer_accessLog; // accessLog 
    ((Array)layout_WebClient_Core_WebServer)->values[14] = slot_WebClient_Core_WebServer_certName; // certName 
    WebClient_Core_WebServer_Class = (Class)new_Class(Object_Class, layout_WebClient_Core_WebServer_Class_class);
    WebClient_Core_WebServer_Class->layout = layout_WebClient_Core_WebServer;
    WebClient_Core_WebServer_Class->name = SMB_WebServer;
    
}

void init_WebClient_Core_PWebServer_methods() {
    init_SMB_asyncHandleConnectionFrom_();
    init_SMB_sessionAt_ifAbsentPut_();
    init_SMB_accessLog();
    init_SMB_builtinHttpMethods();
    init_SMB_logRequest_response_();
    init_SMB_listenOn_();
    init_SMB_listenerProcess();
    init_SMB_reportBadRequestOn_();
    init_SMB_serverString_();
    init_SMB_logAction();
    init_SMB_startListener();
    init_SMB_initialize();
    init_SMB_errorHandler_();
    init_SMB_handleConnectionFrom_();
    init_SMB_connections();
    init_SMB_vault();
    init_SMB_sessions_();
    init_SMB_isStopped();
    init_SMB_runListener();
    init_SMB_destroy();
    init_SMB_critical_();
    init_SMB_destroyConnections();
    init_SMB_defaultHttpMethods();
    init_SMB_listenerInterface();
    init_SMB_listenOn_interface_backlogSize_();
    init_SMB_sessions();
    init_SMB_addService_action_();
    init_SMB_stopListener();
    init_SMB_logAction_();
    init_SMB_isRunning();
    init_SMB_listenerSocket();
    init_SMB_dispatchRequest_url_();
    init_SMB_listenOn_interface_();
    init_SMB_sessionAt_put_();
    init_SMB_certName();
    init_SMB_reportInternalServerError_label_request_();
    init_SMB_serverString();
    init_SMB_log_();
    init_SMB_newRequest();
    init_SMB_vault_();
    init_SMB_errorHandler();
    init_SMB_listenerPort();
    init_SMB_serverDate();
    init_SMB_dispatchRequest_();
    init_SMB_invokeAction_request_();
    init_SMB_systemInfoOn_();
    init_SMB_accessLog_();
    init_SMB_sessionAt_();
    init_SMB_certName_();
    init_SMB_addService_action_methods_();
    init_SMB_removeService_();
    init_class_SMB_examplePage2();
    init_class_SMB_reset();
    init_class_SMB_serverDate();
    init_class_SMB_examplePage();
    init_class_SMB_serverString();
    init_class_SMB_default();
    init_class_SMB_example();
    
}