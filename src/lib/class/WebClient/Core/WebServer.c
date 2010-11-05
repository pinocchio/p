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
    Array PArray22092 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22093 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22103 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22102 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22103, (Optr)&t_block_return);
    Block PBlock22101 = new_Block_with(empty_Array, empty_Array, PThreadedCode22102, 1, PSend22103);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22105 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22107 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22106 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22107, (Optr)&t_method_return);
    Block PBlock22104 = new_Block_with(PArray22105, empty_Array, PThreadedCode22106, 1, PSend22107);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22108 = new_Send((Optr)PBlock22101, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22104);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22111 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22113 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22112 = new_Block_with(empty_Array, empty_Array, PThreadedCode22113, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22114 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22111, (Optr)PBlock22112);
    Array PThreadedCode22110 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22111, (Optr)&t_push_closure, (Optr)PBlock22112, (Optr)&t_send2, (Optr)PSend22114, (Optr)&t_block_return);
    Block PBlock22109 = new_Block_with(empty_Array, empty_Array, PThreadedCode22110, 1, PSend22114);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22115 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22109);
    Array PThreadedCode22100 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22101, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22104, (Optr)&t_send2, (Optr)PSend22108, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22109, (Optr)&t_send1, (Optr)PSend22115, (Optr)&t_block_return);
    Block PBlock22099 = new_Block_with(empty_Array, empty_Array, PThreadedCode22100, 2, PSend22108, PSend22115);
    // destroy. 
    Send PSend22118 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22117 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22118, (Optr)&t_block_return);
    Block PBlock22116 = new_Block_with(empty_Array, empty_Array, PThreadedCode22117, 1, PSend22118);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22119 = new_Send((Optr)PBlock22099, SMB_ensure_, 1, (Optr)PBlock22116);
    Array PThreadedCode22098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22099, (Optr)&t_push_closure, (Optr)PBlock22116, (Optr)&t_send1, (Optr)PSend22119, (Optr)&t_block_return);
    Block PBlock22097 = new_Block_with(empty_Array, empty_Array, PThreadedCode22098, 1, PSend22119);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22096 = new_Send((Optr)PBlock22097, SMB_fork, 0);
    Assign PAssign22095 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22096);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22122 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22121 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22122, (Optr)&t_block_return);
    Block PBlock22120 = new_Block_with(empty_Array, empty_Array, PThreadedCode22121, 1, PSend22122);
    // critical:. 
    Send PSend22123 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22120);
    Array PThreadedCode22094 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22095, (Optr)&t_push_closure, (Optr)PBlock22097, (Optr)&t_send0, (Optr)PSend22096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22120, (Optr)&t_send1, (Optr)PSend22123, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22091 = new_Method_with(PArray22092, PArray22093, empty_Array, PThreadedCode22094, 3, PAssign22095, PSend22123, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22091, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22125 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22130 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22129 = new_Block_with(empty_Array, empty_Array, PThreadedCode22130, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22131 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22129);
    Array PThreadedCode22128 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22129, (Optr)&t_send2, (Optr)PSend22131, (Optr)&t_block_return);
    Block PBlock22127 = new_Block_with(empty_Array, empty_Array, PThreadedCode22128, 1, PSend22131);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22132 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22127);
    Array PThreadedCode22126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22127, (Optr)&t_send1, (Optr)PSend22132, (Optr)&t_method_return);
    Method PMethod22124 = new_Method_with(PArray22125, empty_Array, empty_Array, PThreadedCode22126, 1, PSend22132);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22124, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22134 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22134, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22133, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22137 = new_String(L"HEAD");
    String string_22138 = new_String(L"TRACE");
    String string_22139 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22137_Const = new_Constant((Optr)string_22137);
    Constant string_22138_Const = new_Constant((Optr)string_22138);
    Constant string_22139_Const = new_Constant((Optr)string_22139);
    // with:with:with:. 
    Send PSend22140 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22137_Const, (Optr)string_22138_Const, (Optr)string_22139_Const);
    Array PThreadedCode22136 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22137, (Optr)&t_push1, (Optr)string_22138, (Optr)&t_push1, (Optr)string_22139, (Optr)&t_send3, (Optr)PSend22140, (Optr)&t_method_return);
    Method PMethod22135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22136, 1, PSend22140);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22135, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22142 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22145 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22149 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22148 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22149, (Optr)&t_block_return);
    Block PBlock22147 = new_Block_with(empty_Array, empty_Array, PThreadedCode22148, 1, PSend22149);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22150 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22147);
    Array PThreadedCode22146 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22147, (Optr)&t_send1, (Optr)PSend22150, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22144 = new_Block_with(PArray22145, empty_Array, PThreadedCode22146, 2, PSend22150, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22151 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22144);
    Array PThreadedCode22143 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22144, (Optr)&t_send1, (Optr)PSend22151, (Optr)&t_method_return);
    Method PMethod22141 = new_Method_with(PArray22142, empty_Array, empty_Array, PThreadedCode22143, 1, PSend22151);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22141, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22153 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22155 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22154 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22155, (Optr)&t_method_return);
    Method PMethod22152 = new_Method_with(PArray22153, empty_Array, empty_Array, PThreadedCode22154, 1, PSend22155);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22152, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22157 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22157, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22156, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22159 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22160 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22164 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22164_Const = new_Constant((Optr)string_22164);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22165 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22165_Const = new_Constant((Optr)string_22165);
    // ,. 
    Send PSend22163 = new_Send((Optr)string_22164_Const, SMB__append_, 1, (Optr)string_22165_Const);
    Assign PAssign22162 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22163);
    String string_22168 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22169 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22168_Const = new_Constant((Optr)string_22168);
    // ,. 
    Send PSend22170 = new_Send((Optr)string_22168_Const, SMB__append_, 1, (Optr)PSend22169);
    String string_22171 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22171_Const = new_Constant((Optr)string_22171);
    // ,. 
    Send PSend22172 = new_Send((Optr)PSend22170, SMB__append_, 1, (Optr)string_22171_Const);
    // crlf. 
    Send PSend22173 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22174 = new_Send((Optr)PSend22172, SMB__append_, 1, (Optr)PSend22173);
    String string_22175 = new_String(L"Connection: close");
    Constant string_22175_Const = new_Constant((Optr)string_22175);
    // ,. 
    Send PSend22176 = new_Send((Optr)PSend22174, SMB__append_, 1, (Optr)string_22175_Const);
    // crlf. 
    Send PSend22177 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22178 = new_Send((Optr)PSend22176, SMB__append_, 1, (Optr)PSend22177);
    String string_22179 = new_String(L"Content-Length: ");
    Constant string_22179_Const = new_Constant((Optr)string_22179);
    // ,. 
    Send PSend22180 = new_Send((Optr)PSend22178, SMB__append_, 1, (Optr)string_22179_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22181 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22182 = new_Send((Optr)PSend22181, SMB_asString, 0);
    // ,. 
    Send PSend22183 = new_Send((Optr)PSend22180, SMB__append_, 1, (Optr)PSend22182);
    // crlf. 
    Send PSend22184 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22185 = new_Send((Optr)PSend22183, SMB__append_, 1, (Optr)PSend22184);
    // crlf. 
    Send PSend22186 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22187 = new_Send((Optr)PSend22185, SMB__append_, 1, (Optr)PSend22186);
    // ,. 
    Send PSend22188 = new_Send((Optr)PSend22187, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22189 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22188);
    Array PThreadedCode22167 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22168, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22169, (Optr)&t_send1, (Optr)PSend22170, (Optr)&t_push1, (Optr)string_22171, (Optr)&t_send1, (Optr)PSend22172, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22173, (Optr)&t_send1, (Optr)PSend22174, (Optr)&t_push1, (Optr)string_22175, (Optr)&t_send1, (Optr)PSend22176, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22177, (Optr)&t_send1, (Optr)PSend22178, (Optr)&t_push1, (Optr)string_22179, (Optr)&t_send1, (Optr)PSend22180, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22181, (Optr)&t_send0, (Optr)PSend22182, (Optr)&t_send1, (Optr)PSend22183, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22184, (Optr)&t_send1, (Optr)PSend22185, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22186, (Optr)&t_send1, (Optr)PSend22187, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22188, (Optr)&t_send1, (Optr)PSend22189, (Optr)&t_block_return);
    Block PBlock22166 = new_Block_with(empty_Array, empty_Array, PThreadedCode22167, 1, PSend22189);
    Array PThreadedCode22191 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22190 = new_Block_with(empty_Array, empty_Array, PThreadedCode22191, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22192 = new_Send((Optr)PBlock22166, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22190);
    Array PThreadedCode22161 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22162, (Optr)&t_push1, (Optr)string_22164, (Optr)&t_push1, (Optr)string_22165, (Optr)&t_send1, (Optr)PSend22163, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22166, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22190, (Optr)&t_send2, (Optr)PSend22192, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22158 = new_Method_with(PArray22159, PArray22160, empty_Array, PThreadedCode22161, 3, PAssign22162, PSend22192, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22158, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22194 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22196 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22195 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22196, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22193 = new_Method_with(PArray22194, empty_Array, empty_Array, PThreadedCode22195, 1, PAssign22196);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22193, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22198 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22197 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22198, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22197, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22201 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22206 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22205 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22206, (Optr)&t_block_return);
    Block PBlock22204 = new_Block_with(empty_Array, empty_Array, PThreadedCode22205, 1, PSend22206);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22203 = new_Send((Optr)PBlock22204, SMB_fork, 0);
    Assign PAssign22202 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22203);
    Array PThreadedCode22200 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22201, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22202, (Optr)&t_push_closure, (Optr)PBlock22204, (Optr)&t_send0, (Optr)PSend22203, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22199 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22200, 3, PSend22201, PAssign22202, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22199, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22210 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22209 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22210);
    // new. 
    Send PSend22212 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22211 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22212);
    // new. 
    Send PSend22214 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22213 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22214);
    // new. 
    Send PSend22216 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22215 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22216);
    // new. 
    Send PSend22218 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22217 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22218);
    // new. 
    Send PSend22220 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22219 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22220);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22222 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22225 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22227 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22228 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22226 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22227, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22228, (Optr)&t_method_return);
    Block PBlock22224 = new_Block_with(PArray22225, empty_Array, PThreadedCode22226, 2, PSend22227, PSend22228);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22229 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22230 = new_Send((Optr)PBlock22224, SMB_value_, 1, (Optr)PSend22229);
    Array PThreadedCode22223 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22224, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22229, (Optr)&t_send1, (Optr)PSend22230, (Optr)&t_method_return);
    Block PBlock22221 = new_Block_with(PArray22222, empty_Array, PThreadedCode22223, 1, PSend22230);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22231 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22221);
    Array PThreadedCode22208 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22209, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22210, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22211, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22212, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22213, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22214, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22215, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22217, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22219, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22221, (Optr)&t_send1, (Optr)PSend22231, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22208, 8, PAssign22209, PAssign22211, PAssign22213, PAssign22215, PAssign22217, PAssign22219, PSend22231, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22207, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22233 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22235 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22234 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22235, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22232 = new_Method_with(PArray22233, empty_Array, empty_Array, PThreadedCode22234, 2, PAssign22235, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22232, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22237 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22238 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22241 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22248 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22247 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22248);
    Array PThreadedCode22246 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22247, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22248, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22245 = new_Block_with(empty_Array, empty_Array, PThreadedCode22246, 1, PAssign22247);
    String string_22251 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22251_Const = new_Constant((Optr)string_22251);
    // error:. 
    Send PSend22252 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22251_Const);
    Array PThreadedCode22250 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22251, (Optr)&t_send1, (Optr)PSend22252, (Optr)&t_block_return);
    Block PBlock22249 = new_Block_with(empty_Array, empty_Array, PThreadedCode22250, 1, PSend22252);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22253 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22245, (Optr)PBlock22249);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22256 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22255 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22256, (Optr)&t_block_return);
    Block PBlock22254 = new_Block_with(empty_Array, empty_Array, PThreadedCode22255, 1, PSend22256);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22259 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22262 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22263 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22262);
    Array PThreadedCode22261 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22262, (Optr)&t_send1, (Optr)PSend22263, (Optr)&t_block_return);
    Block PBlock22260 = new_Block_with(empty_Array, empty_Array, PThreadedCode22261, 1, PSend22263);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22264 = new_Send((Optr)PSend22259, SMB_ifNil_, 1, (Optr)PBlock22260);
    String string_22265 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22265_Const = new_Constant((Optr)string_22265);
    // warn:. 
    Send PSend22266 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22265_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22268 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22267 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22268);
    String string_22269 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22269_Const = new_Constant((Optr)string_22269);
    // warn:. 
    Send PSend22270 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22269_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22273 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22272 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22273, (Optr)&t_block_return);
    Block PBlock22271 = new_Block_with(empty_Array, empty_Array, PThreadedCode22272, 1, PSend22273);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22275 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22277 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22278 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22277);
    Array PThreadedCode22276 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22277, (Optr)&t_send1, (Optr)PSend22278, (Optr)&t_method_return);
    Block PBlock22274 = new_Block_with(PArray22275, empty_Array, PThreadedCode22276, 1, PSend22278);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22279 = new_Send((Optr)PBlock22271, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22274);
    String string_22280 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22280_Const = new_Constant((Optr)string_22280);
    // warn:. 
    Send PSend22281 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22280_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22282 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22258 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22259, (Optr)&t_push_closure, (Optr)PBlock22260, (Optr)&t_send1, (Optr)PSend22264, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22265, (Optr)&t_send1, (Optr)PSend22266, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22267, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22268, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22269, (Optr)&t_send1, (Optr)PSend22270, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22271, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22274, (Optr)&t_send2, (Optr)PSend22279, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22280, (Optr)&t_send1, (Optr)PSend22281, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22282, (Optr)&t_block_return);
    Block PBlock22257 = new_Block_with(empty_Array, empty_Array, PThreadedCode22258, 7, PSend22264, PSend22266, PAssign22267, PSend22270, PSend22279, PSend22281, PSend22282);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22283 = new_Send((Optr)PBlock22254, SMB_whileTrue_, 1, (Optr)PBlock22257);
    Array PThreadedCode22244 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22245, (Optr)&t_push_closure, (Optr)PBlock22249, (Optr)&t_send2, (Optr)PSend22253, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22254, (Optr)&t_push_closure, (Optr)PBlock22257, (Optr)&t_send1, (Optr)PSend22283, (Optr)&t_block_return);
    Block PBlock22243 = new_Block_with(empty_Array, empty_Array, PThreadedCode22244, 2, PSend22253, PSend22283);
    Array PArray22285 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22287 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22286 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22287, (Optr)&t_method_return);
    Block PBlock22284 = new_Block_with(PArray22285, empty_Array, PThreadedCode22286, 1, PSend22287);
    // on:do:. 
    Send PSend22288 = new_Send((Optr)PBlock22243, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22284);
    Array PThreadedCode22242 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22243, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22284, (Optr)&t_send2, (Optr)PSend22288, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22240 = new_Block_with(PArray22241, empty_Array, PThreadedCode22242, 2, PSend22288, self);
    // on:. 
    Send PSend22289 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22240);
    Array PThreadedCode22239 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22240, (Optr)&t_send1, (Optr)PSend22289, (Optr)&t_method_return);
    Method PMethod22236 = new_Method_with(PArray22237, PArray22238, empty_Array, PThreadedCode22239, 1, PSend22289);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22236, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22291 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22290 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22291, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22290, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22293 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22293, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22292, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22295 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22297 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22296 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22297, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22294 = new_Method_with(PArray22295, empty_Array, empty_Array, PThreadedCode22296, 2, PAssign22297, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22294, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22300 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22299 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22300, (Optr)&t_method_return);
    Method PMethod22298 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22299, 1, PSend22300);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22298, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22302 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22305 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22313 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22316 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22315 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22316, (Optr)&t_block_return);
    Block PBlock22314 = new_Block_with(empty_Array, empty_Array, PThreadedCode22315, 1, PSend22316);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22317 = new_Send((Optr)PSend22313, SMB_and_, 1, (Optr)PBlock22314);
    Array PThreadedCode22312 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22313, (Optr)&t_push_closure, (Optr)PBlock22314, (Optr)&t_send1, (Optr)PSend22317, (Optr)&t_block_return);
    Block PBlock22311 = new_Block_with(empty_Array, empty_Array, PThreadedCode22312, 1, PSend22317);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22321 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22320 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22321);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22324 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22323 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22324, (Optr)&t_block_return);
    Block PBlock22322 = new_Block_with(empty_Array, empty_Array, PThreadedCode22323, 1, PSend22324);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22325 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22322);
    Array PThreadedCode22319 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22320, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22321, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22322, (Optr)&t_send1, (Optr)PSend22325, (Optr)&t_block_return);
    Block PBlock22318 = new_Block_with(empty_Array, empty_Array, PThreadedCode22319, 2, PAssign22320, PSend22325);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22326 = new_Send((Optr)PBlock22311, SMB_whileTrue_, 1, (Optr)PBlock22318);
    Array PThreadedCode22310 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22311, (Optr)&t_push_closure, (Optr)PBlock22318, (Optr)&t_send1, (Optr)PSend22326, (Optr)&t_block_return);
    Block PBlock22309 = new_Block_with(empty_Array, empty_Array, PThreadedCode22310, 1, PSend22326);
    String string_22329 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22331 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22333 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22332 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22333, (Optr)&t_method_return);
    Block PBlock22330 = new_Block_with(PArray22331, empty_Array, PThreadedCode22332, 1, PSend22333);
    // ifNotNil:. 
    Send PSend22334 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22330);
    Constant string_22329_Const = new_Constant((Optr)string_22329);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22335 = new_Send((Optr)string_22329_Const, SMB__append_, 1, (Optr)PSend22334);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22336 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22335);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22337 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22340 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22341 = new_Send((Optr)PSend22340, SMB_not, 0);
    Array PThreadedCode22339 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22340, (Optr)&t_send0, (Optr)PSend22341, (Optr)&t_block_return);
    Block PBlock22338 = new_Block_with(empty_Array, empty_Array, PThreadedCode22339, 1, PSend22341);
    // and:. 
    Send PSend22342 = new_Send((Optr)PSend22337, SMB_and_, 1, (Optr)PBlock22338);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22346 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22347 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22348 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22349 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22348);
    Array PThreadedCode22345 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22346, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22347, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22348, (Optr)&t_send1, (Optr)PSend22349, (Optr)&t_block_return);
    Block PBlock22344 = new_Block_with(empty_Array, empty_Array, PThreadedCode22345, 3, PSend22346, PAssign22347, PSend22349);
    // ifTrue:. 
    Send PSend22343 = new_Send((Optr)PSend22342, SMB_ifTrue_, 1, (Optr)PBlock22344);
    Array PThreadedCode22328 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22329, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22330, (Optr)&t_send1, (Optr)PSend22334, (Optr)&t_send1, (Optr)PSend22335, (Optr)&t_send1, (Optr)PSend22336, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22337, (Optr)&t_push_closure, (Optr)PBlock22338, (Optr)&t_send1, (Optr)PSend22342, (Optr)&t_send_ifTrue_, (Optr)PSend22343, (Optr)PBlock22344, (Optr)&t_block_return);
    Block PBlock22327 = new_Block_with(empty_Array, empty_Array, PThreadedCode22328, 2, PSend22336, PSend22343);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22350 = new_Send((Optr)PBlock22309, SMB_ensure_, 1, (Optr)PBlock22327);
    Array PThreadedCode22308 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22309, (Optr)&t_push_closure, (Optr)PBlock22327, (Optr)&t_send1, (Optr)PSend22350, (Optr)&t_block_return);
    Block PBlock22307 = new_Block_with(empty_Array, empty_Array, PThreadedCode22308, 1, PSend22350);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22352 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22354 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22353 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22354, (Optr)&t_method_return);
    Block PBlock22351 = new_Block_with(PArray22352, empty_Array, PThreadedCode22353, 1, PSend22354);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22355 = new_Send((Optr)PBlock22307, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22351);
    Array PThreadedCode22306 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22307, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22351, (Optr)&t_send2, (Optr)PSend22355, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22304 = new_Block_with(PArray22305, empty_Array, PThreadedCode22306, 2, PSend22355, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22356 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22304);
    Array PThreadedCode22303 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22304, (Optr)&t_send1, (Optr)PSend22356, (Optr)&t_method_return);
    Method PMethod22301 = new_Method_with(empty_Array, PArray22302, empty_Array, PThreadedCode22303, 1, PSend22356);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22301, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22359 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22360 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22363 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22362 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22363, (Optr)&t_block_return);
    Block PBlock22361 = new_Block_with(empty_Array, empty_Array, PThreadedCode22362, 1, PSend22363);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22364 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22361);
    Array PThreadedCode22358 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22359, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22360, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22361, (Optr)&t_send1, (Optr)PSend22364, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22357 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22358, 4, PSend22359, PSend22360, PSend22364, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22357, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22366 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22368 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22368, (Optr)&t_method_return);
    Method PMethod22365 = new_Method_with(PArray22366, empty_Array, empty_Array, PThreadedCode22367, 1, PSend22368);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22365, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22374 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22376 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22375 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22376, (Optr)&t_method_return);
    Block PBlock22373 = new_Block_with(PArray22374, empty_Array, PThreadedCode22375, 1, PSend22376);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22377 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22373);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22378 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22372 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22373, (Optr)&t_send1, (Optr)PSend22377, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22378, (Optr)&t_block_return);
    Block PBlock22371 = new_Block_with(empty_Array, empty_Array, PThreadedCode22372, 2, PSend22377, PSend22378);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22379 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22371);
    Array PThreadedCode22370 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22371, (Optr)&t_send1, (Optr)PSend22379, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22370, 2, PSend22379, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22369, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22382 = new_String(L"GET");
    String string_22383 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22382_Const = new_Constant((Optr)string_22382);
    Constant string_22383_Const = new_Constant((Optr)string_22383);
    // with:with:. 
    Send PSend22384 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22382_Const, (Optr)string_22383_Const);
    Array PThreadedCode22381 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22382, (Optr)&t_push1, (Optr)string_22383, (Optr)&t_send2, (Optr)PSend22384, (Optr)&t_method_return);
    Method PMethod22380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22381, 1, PSend22384);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22380, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22386 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22385 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22386, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22385, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22388 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22389 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22391 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22392 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22397 = new_String(L"*");
    Array PThreadedCode22396 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22397, (Optr)&t_block_return);
    Constant string_22397_Const = new_Constant((Optr)string_22397);
    Block PBlock22395 = new_Block_with(empty_Array, empty_Array, PThreadedCode22396, 1, string_22397_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22400 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22399 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22400, (Optr)&t_block_return);
    Block PBlock22398 = new_Block_with(empty_Array, empty_Array, PThreadedCode22399, 1, PSend22400);
    // ifNil:ifNotNil:. 
    Send PSend22394 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22395, (Optr)PBlock22398);
    Assign PAssign22393 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22394);
    String string_22401 = new_String(L"Listener starting (interface: ");
    Constant string_22401_Const = new_Constant((Optr)string_22401);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22402 = new_Send((Optr)string_22401_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22403 = new_String(L" port: ");
    Constant string_22403_Const = new_Constant((Optr)string_22403);
    // ,. 
    Send PSend22404 = new_Send((Optr)PSend22402, SMB__append_, 1, (Optr)string_22403_Const);
    // ,. 
    Send PSend22405 = new_Send((Optr)PSend22404, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22406 = new_String(L")");
    Constant string_22406_Const = new_Constant((Optr)string_22406);
    // ,. 
    Send PSend22407 = new_Send((Optr)PSend22405, SMB__append_, 1, (Optr)string_22406_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22408 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22407);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22410 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22409 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22410);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22413 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22412 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22413, (Optr)&t_block_return);
    Block PBlock22411 = new_Block_with(empty_Array, empty_Array, PThreadedCode22412, 1, PSend22413);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22416 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22415 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22416, (Optr)&t_block_return);
    Block PBlock22414 = new_Block_with(empty_Array, empty_Array, PThreadedCode22415, 1, PSend22416);
    // ifNil:ifNotNil:. 
    Send PSend22417 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22411, (Optr)PBlock22414);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22418 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22390 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22391, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22392, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22393, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22395, (Optr)&t_push_closure, (Optr)PBlock22398, (Optr)&t_send2, (Optr)PSend22394, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22401, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22402, (Optr)&t_push1, (Optr)string_22403, (Optr)&t_send1, (Optr)PSend22404, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22405, (Optr)&t_push1, (Optr)string_22406, (Optr)&t_send1, (Optr)PSend22407, (Optr)&t_send1, (Optr)PSend22408, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22409, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22410, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22411, (Optr)&t_push_closure, (Optr)PBlock22414, (Optr)&t_send2, (Optr)PSend22417, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22418, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22387 = new_Method_with(PArray22388, PArray22389, empty_Array, PThreadedCode22390, 8, PAssign22391, PAssign22392, PAssign22393, PSend22408, PAssign22409, PSend22417, PSend22418, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22387, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22420 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22419 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22420, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22419, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22422 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22424 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22425 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22424);
    Array PThreadedCode22423 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22424, (Optr)&t_send3, (Optr)PSend22425, (Optr)&t_method_return);
    Method PMethod22421 = new_Method_with(PArray22422, empty_Array, empty_Array, PThreadedCode22423, 1, PSend22425);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22421, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22430 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22429 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22430, (Optr)&t_block_return);
    Block PBlock22428 = new_Block_with(empty_Array, empty_Array, PThreadedCode22429, 1, PSend22430);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22431 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22428);
    Assign PAssign22432 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22427 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22428, (Optr)&t_send1, (Optr)PSend22431, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22432, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22427, 3, PSend22431, PAssign22432, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22426, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22434 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22436 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22435 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22436, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22433 = new_Method_with(PArray22434, empty_Array, empty_Array, PThreadedCode22435, 2, PAssign22436, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22433, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22439 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22440 = new_Send((Optr)PSend22439, SMB_not, 0);
    Array PThreadedCode22438 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22439, (Optr)&t_send0, (Optr)PSend22440, (Optr)&t_method_return);
    Method PMethod22437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22438, 1, PSend22440);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22437, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22442 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22441 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22442, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22441, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22444 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22445 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22448 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22450 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22451 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22451_Const = new_Constant((Optr)string_22451);
    // =. 
    Send PSend22452 = new_Send((Optr)PSend22450, SMB__equals_, 1, (Optr)string_22451_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22456 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22457 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22457_Const = new_Constant((Optr)string_22457);
    // send200Response:contentType:. 
    Send PSend22458 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22456, (Optr)string_22457_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22459 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22458);
    Array PThreadedCode22455 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22456, (Optr)&t_push1, (Optr)string_22457, (Optr)&t_send2, (Optr)PSend22458, (Optr)&t_send1, (Optr)PSend22459, (Optr)&t_block_return);
    Block PBlock22454 = new_Block_with(empty_Array, empty_Array, PThreadedCode22455, 1, PSend22459);
    // ifTrue:. 
    Send PSend22453 = new_Send((Optr)PSend22452, SMB_ifTrue_, 1, (Optr)PBlock22454);
    Assign PAssign22460 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22462 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22461 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22462);
    String string_22463 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22463_Const = new_Constant((Optr)string_22463);
    // beginsWith:. 
    Send PSend22464 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22463_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22470 = new_String(L"/");
    Constant string_22470_Const = new_Constant((Optr)string_22470);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22469 = new_Send((Optr)string_22470_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22468 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22469);
    Array PThreadedCode22467 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22468, (Optr)&t_push1, (Optr)string_22470, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22469, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22466 = new_Block_with(empty_Array, empty_Array, PThreadedCode22467, 1, PAssign22468);
    // ifFalse:. 
    Send PSend22465 = new_Send((Optr)PSend22464, SMB_ifFalse_, 1, (Optr)PBlock22466);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22475 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22478 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22477 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22478, (Optr)&t_block_return);
    Block PBlock22476 = new_Block_with(empty_Array, empty_Array, PThreadedCode22477, 1, PSend22478);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22479 = new_Send((Optr)PSend22475, SMB_and_, 1, (Optr)PBlock22476);
    Array PThreadedCode22474 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22475, (Optr)&t_push_closure, (Optr)PBlock22476, (Optr)&t_send1, (Optr)PSend22479, (Optr)&t_block_return);
    Block PBlock22473 = new_Block_with(empty_Array, empty_Array, PThreadedCode22474, 1, PSend22479);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22485 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22484 = new_Block_with(empty_Array, empty_Array, PThreadedCode22485, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22483 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22484);
    Assign PAssign22482 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22483);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22488 = new_Character(L'/');
    Constant char_22488_Const = new_Constant((Optr)char_22488);
    // copyUpToLast:. 
    Send PSend22487 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22488_Const);
    Assign PAssign22486 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22487);
    Array PThreadedCode22481 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22482, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22484, (Optr)&t_send2, (Optr)PSend22483, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22486, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22488, (Optr)&t_send1, (Optr)PSend22487, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22480 = new_Block_with(empty_Array, empty_Array, PThreadedCode22481, 2, PAssign22482, PAssign22486);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22489 = new_Send((Optr)PBlock22473, SMB_whileTrue_, 1, (Optr)PBlock22480);
    String string_22494 = new_String(L"/");
    Constant string_22494_Const = new_Constant((Optr)string_22494);
    Array PThreadedCode22496 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22495 = new_Block_with(empty_Array, empty_Array, PThreadedCode22496, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22493 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_22494_Const, (Optr)PBlock22495);
    Assign PAssign22492 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22493);
    Array PThreadedCode22491 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22492, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_22494, (Optr)&t_push_closure, (Optr)PBlock22495, (Optr)&t_send2, (Optr)PSend22493, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22490 = new_Block_with(empty_Array, empty_Array, PThreadedCode22491, 1, PAssign22492);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22497 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22490);
    Array PThreadedCode22472 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22473, (Optr)&t_push_closure, (Optr)PBlock22480, (Optr)&t_send1, (Optr)PSend22489, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22490, (Optr)&t_send1, (Optr)PSend22497, (Optr)&t_block_return);
    Block PBlock22471 = new_Block_with(empty_Array, empty_Array, PThreadedCode22472, 2, PSend22489, PSend22497);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22498 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22471);
    // method. 
    Send PSend22499 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22500 = new_String(L"OPTIONS");
    Constant string_22500_Const = new_Constant((Optr)string_22500);
    // =. 
    Send PSend22501 = new_Send((Optr)PSend22499, SMB__equals_, 1, (Optr)string_22500_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend22505 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22508 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode22507 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22508, (Optr)&t_block_return);
    Block PBlock22506 = new_Block_with(empty_Array, empty_Array, PThreadedCode22507, 1, PSend22508);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend22511 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode22510 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22511, (Optr)&t_block_return);
    Block PBlock22509 = new_Block_with(empty_Array, empty_Array, PThreadedCode22510, 1, PSend22511);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22512 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22506, (Optr)PBlock22509);
    // ,. 
    Send PSend22513 = new_Send((Optr)PSend22505, SMB__append_, 1, (Optr)PSend22512);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend22514 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend22513);
    Array PThreadedCode22504 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22505, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22506, (Optr)&t_push_closure, (Optr)PBlock22509, (Optr)&t_send2, (Optr)PSend22512, (Optr)&t_send1, (Optr)PSend22513, (Optr)&t_send1, (Optr)PSend22514, (Optr)&t_block_return);
    Block PBlock22503 = new_Block_with(empty_Array, empty_Array, PThreadedCode22504, 1, PSend22514);
    // ifTrue:. 
    Send PSend22502 = new_Send((Optr)PSend22501, SMB_ifTrue_, 1, (Optr)PBlock22503);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend22517 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend22518 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22517);
    Array PThreadedCode22516 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22517, (Optr)&t_send1, (Optr)PSend22518, (Optr)&t_block_return);
    Block PBlock22515 = new_Block_with(empty_Array, empty_Array, PThreadedCode22516, 1, PSend22518);
    // ifNil:. 
    Send PSend22519 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22515);
    // method. 
    Send PSend22520 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22521 = new_String(L"HEAD");
    Constant string_22521_Const = new_Constant((Optr)string_22521);
    // =. 
    Send PSend22522 = new_Send((Optr)PSend22520, SMB__equals_, 1, (Optr)string_22521_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend22525 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend22526 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend22527 = new_Send((Optr)PSend22525, SMB_includes_, 1, (Optr)PSend22526);
    Array PThreadedCode22524 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22525, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22526, (Optr)&t_send1, (Optr)PSend22527, (Optr)&t_block_return);
    Block PBlock22523 = new_Block_with(empty_Array, empty_Array, PThreadedCode22524, 1, PSend22527);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22528 = new_Send((Optr)PSend22522, SMB_or_, 1, (Optr)PBlock22523);
    // builtinHttpMethods. 
    Send PSend22532 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend22533 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend22534 = new_Send((Optr)PSend22532, SMB__append_, 1, (Optr)PSend22533);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend22535 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend22534);
    // escape:. 
    Send PSend22536 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22535);
    Array PThreadedCode22531 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22532, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22533, (Optr)&t_send1, (Optr)PSend22534, (Optr)&t_send1, (Optr)PSend22535, (Optr)&t_send1, (Optr)PSend22536, (Optr)&t_block_return);
    Block PBlock22530 = new_Block_with(empty_Array, empty_Array, PThreadedCode22531, 1, PSend22536);
    // ifFalse:. 
    Send PSend22529 = new_Send((Optr)PSend22528, SMB_ifFalse_, 1, (Optr)PBlock22530);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend22539 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend22540 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend22539, (Optr)VAR_request_0_0);
    Array PThreadedCode22538 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22539, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend22540, (Optr)&t_block_return);
    Block PBlock22537 = new_Block_with(empty_Array, empty_Array, PThreadedCode22538, 1, PSend22540);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22542 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22544 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22543 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22544, (Optr)&t_method_return);
    Block PBlock22541 = new_Block_with(PArray22542, empty_Array, PThreadedCode22543, 1, PSend22544);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22545 = new_Send((Optr)PBlock22537, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22541);
    Array PThreadedCode22449 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22450, (Optr)&t_push1, (Optr)string_22451, (Optr)&t_send1, (Optr)PSend22452, (Optr)&t_send_ifTrue_, (Optr)PSend22453, (Optr)PBlock22454, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22460, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22461, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22462, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22463, (Optr)&t_send1, (Optr)PSend22464, (Optr)&t_send_ifFalse_, (Optr)PSend22465, (Optr)PBlock22466, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22471, (Optr)&t_send1, (Optr)PSend22498, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22499, (Optr)&t_push1, (Optr)string_22500, (Optr)&t_send1, (Optr)PSend22501, (Optr)&t_send_ifTrue_, (Optr)PSend22502, (Optr)PBlock22503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22515, (Optr)&t_send1, (Optr)PSend22519, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22520, (Optr)&t_push1, (Optr)string_22521, (Optr)&t_send1, (Optr)PSend22522, (Optr)&t_push_closure, (Optr)PBlock22523, (Optr)&t_send1, (Optr)PSend22528, (Optr)&t_send_ifFalse_, (Optr)PSend22529, (Optr)PBlock22530, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22537, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22541, (Optr)&t_send2, (Optr)PSend22545, (Optr)&t_method_return);
    Block PBlock22447 = new_Block_with(PArray22448, empty_Array, PThreadedCode22449, 9, PSend22453, PAssign22460, PAssign22461, PSend22465, PSend22498, PSend22502, PSend22519, PSend22529, PSend22545);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22546 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22447);
    Array PThreadedCode22446 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22447, (Optr)&t_send1, (Optr)PSend22546, (Optr)&t_method_return);
    Method PMethod22443 = new_Method_with(PArray22444, PArray22445, empty_Array, PThreadedCode22446, 1, PSend22546);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22443, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray22548 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend22550 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22549 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22550, (Optr)&t_method_return);
    Method PMethod22547 = new_Method_with(PArray22548, empty_Array, empty_Array, PThreadedCode22549, 1, PSend22550);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22547, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22552 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22556 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22555 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend22556, (Optr)&t_block_return);
    Block PBlock22554 = new_Block_with(empty_Array, empty_Array, PThreadedCode22555, 1, PSend22556);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22557 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22554);
    Array PThreadedCode22553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22554, (Optr)&t_send1, (Optr)PSend22557, (Optr)&t_method_return);
    Method PMethod22551 = new_Method_with(PArray22552, empty_Array, empty_Array, PThreadedCode22553, 1, PSend22557);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod22551, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode22559 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22559, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22558, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray22561 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray22562 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_22570 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_22570_Const = new_Constant((Optr)string_22570);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22571 = new_String(L"<h1>Internal Server Error: ");
    Constant string_22571_Const = new_Constant((Optr)string_22571);
    // ,. 
    Send PSend22569 = new_Send((Optr)string_22570_Const, SMB__append_, 1, (Optr)string_22571_Const);
    // ,. 
    Send PSend22568 = new_Send((Optr)PSend22569, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_22572 = new_String(L"</h1><pre>");
    Constant string_22572_Const = new_Constant((Optr)string_22572);
    // ,. 
    Send PSend22567 = new_Send((Optr)PSend22568, SMB__append_, 1, (Optr)string_22572_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22574 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22575 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend22573 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend22574, (Optr)PSend22575);
    // ,. 
    Send PSend22566 = new_Send((Optr)PSend22567, SMB__append_, 1, (Optr)PSend22573);
    String string_22576 = new_String(L"</pre></body></html>");
    Constant string_22576_Const = new_Constant((Optr)string_22576);
    // ,. 
    Send PSend22565 = new_Send((Optr)PSend22566, SMB__append_, 1, (Optr)string_22576_Const);
    Assign PAssign22564 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend22565);
    SmallInt int_500 = new_SmallInt(500);
    String string_22577 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_22577_Const = new_Constant((Optr)string_22577);
    // sendResponseCode:content:type:close:. 
    Send PSend22578 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_22577_Const, (Optr)true_Const);
    Array PThreadedCode22563 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign22564, (Optr)&t_push1, (Optr)string_22570, (Optr)&t_push1, (Optr)string_22571, (Optr)&t_send1, (Optr)PSend22569, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend22568, (Optr)&t_push1, (Optr)string_22572, (Optr)&t_send1, (Optr)PSend22567, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22574, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22575, (Optr)&t_send2, (Optr)PSend22573, (Optr)&t_send1, (Optr)PSend22566, (Optr)&t_push1, (Optr)string_22576, (Optr)&t_send1, (Optr)PSend22565, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_22577, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend22578, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22560 = new_Method_with(PArray22561, PArray22562, empty_Array, PThreadedCode22563, 3, PAssign22564, PSend22578, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod22560, WebClient_Core_WebServer_Class);
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
    Send PSend22585 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend22584 = new_Send((Optr)PSend22585, SMB_serverString, 0);
    Assign PAssign22583 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend22584);
    Array PThreadedCode22582 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22583, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22585, (Optr)&t_send0, (Optr)PSend22584, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22581 = new_Block_with(empty_Array, empty_Array, PThreadedCode22582, 1, PAssign22583);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22586 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock22581);
    Array PThreadedCode22580 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock22581, (Optr)&t_send1, (Optr)PSend22586, (Optr)&t_method_return);
    Method PMethod22579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22580, 1, PSend22586);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22579, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22588 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22592 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22593 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend22592);
    Array PThreadedCode22591 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend22592, (Optr)&t_send1, (Optr)PSend22593, (Optr)&t_block_return);
    Block PBlock22590 = new_Block_with(empty_Array, empty_Array, PThreadedCode22591, 1, PSend22593);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22594 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock22590);
    Array PThreadedCode22589 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock22590, (Optr)&t_send1, (Optr)PSend22594, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22587 = new_Method_with(PArray22588, empty_Array, empty_Array, PThreadedCode22589, 2, PSend22594, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod22587, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22598 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend22600 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22601 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode22599 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22601, (Optr)&t_method_return);
    Block PBlock22597 = new_Block_with(PArray22598, empty_Array, PThreadedCode22599, 2, PSend22600, PSend22601);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22602 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22603 = new_Send((Optr)PBlock22597, SMB_value_, 1, (Optr)PSend22602);
    Array PThreadedCode22596 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22597, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend22602, (Optr)&t_send1, (Optr)PSend22603, (Optr)&t_method_return);
    Method PMethod22595 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22596, 1, PSend22603);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod22595, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22605 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22607 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22606 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22607, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22604 = new_Method_with(PArray22605, empty_Array, empty_Array, PThreadedCode22606, 2, PAssign22607, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22604, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode22609 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22608 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22609, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22608, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode22611 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22610 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22611, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22610, WebClient_Core_WebServer_Class);
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
    Send PSend22614 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22615 = new_Send((Optr)PSend22614, SMB_serverDate, 0);
    Array PThreadedCode22613 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22614, (Optr)&t_send0, (Optr)PSend22615, (Optr)&t_method_return);
    Method PMethod22612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22613, 1, PSend22615);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22612, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray22617 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend22619 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend22620 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend22619);
    Array PThreadedCode22618 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22619, (Optr)&t_send2, (Optr)PSend22620, (Optr)&t_method_return);
    Method PMethod22616 = new_Method_with(PArray22617, empty_Array, empty_Array, PThreadedCode22618, 1, PSend22620);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod22616, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray22622 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22624 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22625 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend22624);
    Array PThreadedCode22623 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend22624, (Optr)&t_send1, (Optr)PSend22625, (Optr)&t_method_return);
    Method PMethod22621 = new_Method_with(PArray22622, empty_Array, empty_Array, PThreadedCode22623, 1, PSend22625);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod22621, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray22627 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22630 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_22632 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_22632_Const = new_Constant((Optr)string_22632);
    // nextPutAll:. 
    Send PSend22633 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_22632_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22634 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode22631 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_22632, (Optr)&t_send1, (Optr)PSend22633, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22634, (Optr)&t_method_return);
    Block PBlock22629 = new_Block_with(PArray22630, empty_Array, PThreadedCode22631, 2, PSend22633, PSend22634);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22635 = new_Send((Optr)PBlock22629, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode22628 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22629, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend22635, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22626 = new_Method_with(PArray22627, empty_Array, empty_Array, PThreadedCode22628, 2, PSend22635, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod22626, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray22637 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22639 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22638 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22639, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22636 = new_Method_with(PArray22637, empty_Array, empty_Array, PThreadedCode22638, 2, PAssign22639, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22636, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22641 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode22646 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22645 = new_Block_with(empty_Array, empty_Array, PThreadedCode22646, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend22647 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22645);
    Array PThreadedCode22644 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22645, (Optr)&t_send2, (Optr)PSend22647, (Optr)&t_block_return);
    Block PBlock22643 = new_Block_with(empty_Array, empty_Array, PThreadedCode22644, 1, PSend22647);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22648 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22643);
    Array PThreadedCode22642 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22643, (Optr)&t_send1, (Optr)PSend22648, (Optr)&t_method_return);
    Method PMethod22640 = new_Method_with(PArray22641, empty_Array, empty_Array, PThreadedCode22642, 1, PSend22648);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod22640, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22650 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22652 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22651 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22652, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22649 = new_Method_with(PArray22650, empty_Array, empty_Array, PThreadedCode22651, 2, PAssign22652, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22649, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray22654 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22658 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22659 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22660 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend22658, (Optr)PSend22659);
    Array PThreadedCode22657 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22658, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend22659, (Optr)&t_send2, (Optr)PSend22660, (Optr)&t_block_return);
    Block PBlock22656 = new_Block_with(empty_Array, empty_Array, PThreadedCode22657, 1, PSend22660);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22661 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22656);
    Array PThreadedCode22655 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22656, (Optr)&t_send1, (Optr)PSend22661, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22653 = new_Method_with(PArray22654, empty_Array, empty_Array, PThreadedCode22655, 2, PSend22661, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod22653, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray22663 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22667 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode22669 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22668 = new_Block_with(empty_Array, empty_Array, PThreadedCode22669, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend22670 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend22667, (Optr)PBlock22668);
    Array PThreadedCode22666 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22667, (Optr)&t_push_closure, (Optr)PBlock22668, (Optr)&t_send2, (Optr)PSend22670, (Optr)&t_block_return);
    Block PBlock22665 = new_Block_with(empty_Array, empty_Array, PThreadedCode22666, 1, PSend22670);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22671 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22665);
    Array PThreadedCode22664 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22665, (Optr)&t_send1, (Optr)PSend22671, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22662 = new_Method_with(PArray22663, empty_Array, empty_Array, PThreadedCode22664, 2, PSend22671, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod22662, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_22674 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode22673 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22674, (Optr)&t_method_return);
    Constant string_22674_Const = new_Constant((Optr)string_22674);
    Method PMethod22672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22673, 1, string_22674_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod22672, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22679 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign22680 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode22678 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend22679, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22680, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22677 = new_Block_with(empty_Array, empty_Array, PThreadedCode22678, 2, PSend22679, PAssign22680);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22681 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock22677);
    Array PThreadedCode22676 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22677, (Optr)&t_send1, (Optr)PSend22681, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22675 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22676, 2, PSend22681, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod22675, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray22683 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray22686 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend22690 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend22689 = new_Send((Optr)PSend22690, SMB_asUTC, 0);
    Assign PAssign22688 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend22689);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend22691 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_22692 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22692_Const = new_Constant((Optr)string_22692);
    // ,. 
    Send PSend22693 = new_Send((Optr)PSend22691, SMB__append_, 1, (Optr)string_22692_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22694 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend22693);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend22695 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22697 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend22699 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend22700 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend22701 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4725 = new_Character(L' ');
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // add:. 
    Send PSend22702 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4725_Const);
    // add:. 
    Send PSend22703 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend22704 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend22705 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22706 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode22698 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22699, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22700, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend22701, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend22702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22704, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22705, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22706, (Optr)&t_method_return);
    Block PBlock22696 = new_Block_with(PArray22697, empty_Array, PThreadedCode22698, 8, PSend22699, PSend22700, PSend22701, PSend22702, PSend22703, PSend22704, PSend22705, PSend22706);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22707 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22708 = new_Send((Optr)PBlock22696, SMB_value_, 1, (Optr)PSend22707);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22709 = new_Send((Optr)PSend22708, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend22710 = new_Send((Optr)PSend22695, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend22709);
    Array PArray22712 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend22714 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend22715 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend22716 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend22715);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend22717 = new_Send((Optr)PSend22716, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend22718 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend22717);
    Array PThreadedCode22713 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22714, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22715, (Optr)&t_send1, (Optr)PSend22716, (Optr)&t_send0, (Optr)PSend22717, (Optr)&t_send1, (Optr)PSend22718, (Optr)&t_method_return);
    Block PBlock22711 = new_Block_with(PArray22712, empty_Array, PThreadedCode22713, 2, PSend22714, PSend22718);
    // value:. 
    Send PSend22719 = new_Send((Optr)PBlock22711, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_22720 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_22720_Const = new_Constant((Optr)string_22720);
    // writeAll:. 
    Send PSend22721 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_22720_Const);
    Array PThreadedCode22687 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign22688, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend22690, (Optr)&t_send0, (Optr)PSend22689, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22691, (Optr)&t_push1, (Optr)string_22692, (Optr)&t_send1, (Optr)PSend22693, (Optr)&t_send1, (Optr)PSend22694, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22695, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock22696, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22707, (Optr)&t_send1, (Optr)PSend22708, (Optr)&t_send0, (Optr)PSend22709, (Optr)&t_send2, (Optr)PSend22710, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22711, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend22719, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_22720, (Optr)&t_send1, (Optr)PSend22721, (Optr)&t_method_return);
    Block PBlock22685 = new_Block_with(PArray22686, empty_Array, PThreadedCode22687, 5, PAssign22688, PSend22694, PSend22710, PSend22719, PSend22721);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend22722 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock22685);
    Array PThreadedCode22684 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock22685, (Optr)&t_send1, (Optr)PSend22722, (Optr)&t_method_return);
    Method PMethod22682 = new_Method_with(empty_Array, PArray22683, empty_Array, PThreadedCode22684, 1, PSend22722);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22682, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_22725 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode22724 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22725, (Optr)&t_method_return);
    Constant string_22725_Const = new_Constant((Optr)string_22725);
    Method PMethod22723 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22724, 1, string_22725_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod22723, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_22728 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode22727 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22728, (Optr)&t_method_return);
    Constant string_22728_Const = new_Constant((Optr)string_22728);
    Method PMethod22726 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22727, 1, string_22728_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22726, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22734 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign22733 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend22734);
    Array PThreadedCode22732 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22733, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22734, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22731 = new_Block_with(empty_Array, empty_Array, PThreadedCode22732, 1, PAssign22733);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22735 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock22731);
    Array PThreadedCode22730 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22731, (Optr)&t_send1, (Optr)PSend22735, (Optr)&t_method_return);
    Method PMethod22729 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22730, 1, PSend22735);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod22729, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray22737 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22740 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22739 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend22740);
    // new. 
    Send PSend22742 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22741 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend22742);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend22743 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend22744 = new_Send((Optr)PSend22743, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend22745 = new_Send((Optr)PSend22744, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend22746 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_22747 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray22749 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend22751 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_22752 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22752_Const = new_Constant((Optr)string_22752);
    // send200Response:contentType:. 
    Send PSend22753 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend22751, (Optr)string_22752_Const);
    Array PThreadedCode22750 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22751, (Optr)&t_push1, (Optr)string_22752, (Optr)&t_send2, (Optr)PSend22753, (Optr)&t_method_return);
    Block PBlock22748 = new_Block_with(PArray22749, empty_Array, PThreadedCode22750, 1, PSend22753);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_22747_Const = new_Constant((Optr)string_22747);
    // addService:action:. 
    Send PSend22754 = new_Send((Optr)PSend22746, SMB_addService_action_, 2, (Optr)string_22747_Const, (Optr)PBlock22748);
    Array PThreadedCode22738 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22739, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22741, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22743, (Optr)&t_send0, (Optr)PSend22744, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend22745, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22746, (Optr)&t_push1, (Optr)string_22747, (Optr)&t_push_closure, (Optr)PBlock22748, (Optr)&t_send2, (Optr)PSend22754, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22736 = new_Method_with(empty_Array, PArray22737, empty_Array, PThreadedCode22738, 5, PAssign22739, PAssign22741, PSend22745, PSend22754, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod22736, HEADER(WebClient_Core_WebServer_Class));
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