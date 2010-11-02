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
    Array PArray22062 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22063 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22073 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22072 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22073, (Optr)&t_block_return);
    Block PBlock22071 = new_Block_with(empty_Array, empty_Array, PThreadedCode22072, 1, PSend22073);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22075 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22077 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22076 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22077, (Optr)&t_method_return);
    Block PBlock22074 = new_Block_with(PArray22075, empty_Array, PThreadedCode22076, 1, PSend22077);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22078 = new_Send((Optr)PBlock22071, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22074);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22081 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22083 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22082 = new_Block_with(empty_Array, empty_Array, PThreadedCode22083, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22084 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22081, (Optr)PBlock22082);
    Array PThreadedCode22080 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22081, (Optr)&t_push_closure, (Optr)PBlock22082, (Optr)&t_send2, (Optr)PSend22084, (Optr)&t_block_return);
    Block PBlock22079 = new_Block_with(empty_Array, empty_Array, PThreadedCode22080, 1, PSend22084);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22085 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22079);
    Array PThreadedCode22070 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22071, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22074, (Optr)&t_send2, (Optr)PSend22078, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22079, (Optr)&t_send1, (Optr)PSend22085, (Optr)&t_block_return);
    Block PBlock22069 = new_Block_with(empty_Array, empty_Array, PThreadedCode22070, 2, PSend22078, PSend22085);
    // destroy. 
    Send PSend22088 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22087 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22088, (Optr)&t_block_return);
    Block PBlock22086 = new_Block_with(empty_Array, empty_Array, PThreadedCode22087, 1, PSend22088);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22089 = new_Send((Optr)PBlock22069, SMB_ensure_, 1, (Optr)PBlock22086);
    Array PThreadedCode22068 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22069, (Optr)&t_push_closure, (Optr)PBlock22086, (Optr)&t_send1, (Optr)PSend22089, (Optr)&t_block_return);
    Block PBlock22067 = new_Block_with(empty_Array, empty_Array, PThreadedCode22068, 1, PSend22089);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22066 = new_Send((Optr)PBlock22067, SMB_fork, 0);
    Assign PAssign22065 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22066);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22092 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22092, (Optr)&t_block_return);
    Block PBlock22090 = new_Block_with(empty_Array, empty_Array, PThreadedCode22091, 1, PSend22092);
    // critical:. 
    Send PSend22093 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22090);
    Array PThreadedCode22064 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22065, (Optr)&t_push_closure, (Optr)PBlock22067, (Optr)&t_send0, (Optr)PSend22066, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22090, (Optr)&t_send1, (Optr)PSend22093, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22061 = new_Method_with(PArray22062, PArray22063, empty_Array, PThreadedCode22064, 3, PAssign22065, PSend22093, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22061, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22095 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22100 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22099 = new_Block_with(empty_Array, empty_Array, PThreadedCode22100, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22101 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22099);
    Array PThreadedCode22098 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22099, (Optr)&t_send2, (Optr)PSend22101, (Optr)&t_block_return);
    Block PBlock22097 = new_Block_with(empty_Array, empty_Array, PThreadedCode22098, 1, PSend22101);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22102 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22097);
    Array PThreadedCode22096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22097, (Optr)&t_send1, (Optr)PSend22102, (Optr)&t_method_return);
    Method PMethod22094 = new_Method_with(PArray22095, empty_Array, empty_Array, PThreadedCode22096, 1, PSend22102);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22094, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22104 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22104, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22103, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22107 = new_String(L"HEAD");
    String string_22108 = new_String(L"TRACE");
    String string_22109 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22107_Const = new_Constant((Optr)string_22107);
    Constant string_22108_Const = new_Constant((Optr)string_22108);
    Constant string_22109_Const = new_Constant((Optr)string_22109);
    // with:with:with:. 
    Send PSend22110 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22107_Const, (Optr)string_22108_Const, (Optr)string_22109_Const);
    Array PThreadedCode22106 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22107, (Optr)&t_push1, (Optr)string_22108, (Optr)&t_push1, (Optr)string_22109, (Optr)&t_send3, (Optr)PSend22110, (Optr)&t_method_return);
    Method PMethod22105 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22106, 1, PSend22110);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22105, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22112 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22115 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22119 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22118 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22119, (Optr)&t_block_return);
    Block PBlock22117 = new_Block_with(empty_Array, empty_Array, PThreadedCode22118, 1, PSend22119);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22120 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22117);
    Array PThreadedCode22116 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22117, (Optr)&t_send1, (Optr)PSend22120, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22114 = new_Block_with(PArray22115, empty_Array, PThreadedCode22116, 2, PSend22120, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22121 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22114);
    Array PThreadedCode22113 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22114, (Optr)&t_send1, (Optr)PSend22121, (Optr)&t_method_return);
    Method PMethod22111 = new_Method_with(PArray22112, empty_Array, empty_Array, PThreadedCode22113, 1, PSend22121);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22111, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22123 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22125 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22125, (Optr)&t_method_return);
    Method PMethod22122 = new_Method_with(PArray22123, empty_Array, empty_Array, PThreadedCode22124, 1, PSend22125);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22122, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22127 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22127, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22126, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22129 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22130 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22134 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22134_Const = new_Constant((Optr)string_22134);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22135 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22135_Const = new_Constant((Optr)string_22135);
    // ,. 
    Send PSend22133 = new_Send((Optr)string_22134_Const, SMB__append_, 1, (Optr)string_22135_Const);
    Assign PAssign22132 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22133);
    String string_22138 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22139 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22138_Const = new_Constant((Optr)string_22138);
    // ,. 
    Send PSend22140 = new_Send((Optr)string_22138_Const, SMB__append_, 1, (Optr)PSend22139);
    String string_22141 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22141_Const = new_Constant((Optr)string_22141);
    // ,. 
    Send PSend22142 = new_Send((Optr)PSend22140, SMB__append_, 1, (Optr)string_22141_Const);
    // crlf. 
    Send PSend22143 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22144 = new_Send((Optr)PSend22142, SMB__append_, 1, (Optr)PSend22143);
    String string_22145 = new_String(L"Connection: close");
    Constant string_22145_Const = new_Constant((Optr)string_22145);
    // ,. 
    Send PSend22146 = new_Send((Optr)PSend22144, SMB__append_, 1, (Optr)string_22145_Const);
    // crlf. 
    Send PSend22147 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22148 = new_Send((Optr)PSend22146, SMB__append_, 1, (Optr)PSend22147);
    String string_22149 = new_String(L"Content-Length: ");
    Constant string_22149_Const = new_Constant((Optr)string_22149);
    // ,. 
    Send PSend22150 = new_Send((Optr)PSend22148, SMB__append_, 1, (Optr)string_22149_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22151 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22152 = new_Send((Optr)PSend22151, SMB_asString, 0);
    // ,. 
    Send PSend22153 = new_Send((Optr)PSend22150, SMB__append_, 1, (Optr)PSend22152);
    // crlf. 
    Send PSend22154 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22155 = new_Send((Optr)PSend22153, SMB__append_, 1, (Optr)PSend22154);
    // crlf. 
    Send PSend22156 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22157 = new_Send((Optr)PSend22155, SMB__append_, 1, (Optr)PSend22156);
    // ,. 
    Send PSend22158 = new_Send((Optr)PSend22157, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22159 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22158);
    Array PThreadedCode22137 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22138, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22139, (Optr)&t_send1, (Optr)PSend22140, (Optr)&t_push1, (Optr)string_22141, (Optr)&t_send1, (Optr)PSend22142, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22143, (Optr)&t_send1, (Optr)PSend22144, (Optr)&t_push1, (Optr)string_22145, (Optr)&t_send1, (Optr)PSend22146, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22147, (Optr)&t_send1, (Optr)PSend22148, (Optr)&t_push1, (Optr)string_22149, (Optr)&t_send1, (Optr)PSend22150, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22151, (Optr)&t_send0, (Optr)PSend22152, (Optr)&t_send1, (Optr)PSend22153, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22154, (Optr)&t_send1, (Optr)PSend22155, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22156, (Optr)&t_send1, (Optr)PSend22157, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22158, (Optr)&t_send1, (Optr)PSend22159, (Optr)&t_block_return);
    Block PBlock22136 = new_Block_with(empty_Array, empty_Array, PThreadedCode22137, 1, PSend22159);
    Array PThreadedCode22161 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22160 = new_Block_with(empty_Array, empty_Array, PThreadedCode22161, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22162 = new_Send((Optr)PBlock22136, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22160);
    Array PThreadedCode22131 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22132, (Optr)&t_push1, (Optr)string_22134, (Optr)&t_push1, (Optr)string_22135, (Optr)&t_send1, (Optr)PSend22133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22136, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22160, (Optr)&t_send2, (Optr)PSend22162, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22128 = new_Method_with(PArray22129, PArray22130, empty_Array, PThreadedCode22131, 3, PAssign22132, PSend22162, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22128, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22164 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22166 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22165 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22166, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22163 = new_Method_with(PArray22164, empty_Array, empty_Array, PThreadedCode22165, 1, PAssign22166);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22163, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22168 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22168, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22167, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22171 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22176 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22175 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22176, (Optr)&t_block_return);
    Block PBlock22174 = new_Block_with(empty_Array, empty_Array, PThreadedCode22175, 1, PSend22176);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22173 = new_Send((Optr)PBlock22174, SMB_fork, 0);
    Assign PAssign22172 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22173);
    Array PThreadedCode22170 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22171, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22172, (Optr)&t_push_closure, (Optr)PBlock22174, (Optr)&t_send0, (Optr)PSend22173, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22170, 3, PSend22171, PAssign22172, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22169, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22180 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22179 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22180);
    // new. 
    Send PSend22182 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22181 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22182);
    // new. 
    Send PSend22184 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22183 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22184);
    // new. 
    Send PSend22186 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22185 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22186);
    // new. 
    Send PSend22188 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22187 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22188);
    // new. 
    Send PSend22190 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22189 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22190);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22192 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22195 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22197 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22198 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22196 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22197, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22198, (Optr)&t_method_return);
    Block PBlock22194 = new_Block_with(PArray22195, empty_Array, PThreadedCode22196, 2, PSend22197, PSend22198);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22199 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22200 = new_Send((Optr)PBlock22194, SMB_value_, 1, (Optr)PSend22199);
    Array PThreadedCode22193 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22194, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22199, (Optr)&t_send1, (Optr)PSend22200, (Optr)&t_method_return);
    Block PBlock22191 = new_Block_with(PArray22192, empty_Array, PThreadedCode22193, 1, PSend22200);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22201 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22191);
    Array PThreadedCode22178 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22179, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22180, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22181, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22182, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22183, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22184, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22185, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22186, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22187, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22188, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22189, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22190, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22191, (Optr)&t_send1, (Optr)PSend22201, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22177 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22178, 8, PAssign22179, PAssign22181, PAssign22183, PAssign22185, PAssign22187, PAssign22189, PSend22201, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22177, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22203 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22205 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22204 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22205, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22202 = new_Method_with(PArray22203, empty_Array, empty_Array, PThreadedCode22204, 2, PAssign22205, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22202, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22207 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22208 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22211 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22218 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22217 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22218);
    Array PThreadedCode22216 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22217, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22218, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22215 = new_Block_with(empty_Array, empty_Array, PThreadedCode22216, 1, PAssign22217);
    String string_22221 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22221_Const = new_Constant((Optr)string_22221);
    // error:. 
    Send PSend22222 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22221_Const);
    Array PThreadedCode22220 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22221, (Optr)&t_send1, (Optr)PSend22222, (Optr)&t_block_return);
    Block PBlock22219 = new_Block_with(empty_Array, empty_Array, PThreadedCode22220, 1, PSend22222);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22223 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22215, (Optr)PBlock22219);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22226 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22225 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22226, (Optr)&t_block_return);
    Block PBlock22224 = new_Block_with(empty_Array, empty_Array, PThreadedCode22225, 1, PSend22226);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22229 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22232 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22233 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22232);
    Array PThreadedCode22231 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22232, (Optr)&t_send1, (Optr)PSend22233, (Optr)&t_block_return);
    Block PBlock22230 = new_Block_with(empty_Array, empty_Array, PThreadedCode22231, 1, PSend22233);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22234 = new_Send((Optr)PSend22229, SMB_ifNil_, 1, (Optr)PBlock22230);
    String string_22235 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22235_Const = new_Constant((Optr)string_22235);
    // warn:. 
    Send PSend22236 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22235_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22238 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22237 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22238);
    String string_22239 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22239_Const = new_Constant((Optr)string_22239);
    // warn:. 
    Send PSend22240 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22239_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22243 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22242 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22243, (Optr)&t_block_return);
    Block PBlock22241 = new_Block_with(empty_Array, empty_Array, PThreadedCode22242, 1, PSend22243);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22245 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22247 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22248 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22247);
    Array PThreadedCode22246 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22247, (Optr)&t_send1, (Optr)PSend22248, (Optr)&t_method_return);
    Block PBlock22244 = new_Block_with(PArray22245, empty_Array, PThreadedCode22246, 1, PSend22248);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22249 = new_Send((Optr)PBlock22241, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22244);
    String string_22250 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22250_Const = new_Constant((Optr)string_22250);
    // warn:. 
    Send PSend22251 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22250_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22252 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22228 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22229, (Optr)&t_push_closure, (Optr)PBlock22230, (Optr)&t_send1, (Optr)PSend22234, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22235, (Optr)&t_send1, (Optr)PSend22236, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22237, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22239, (Optr)&t_send1, (Optr)PSend22240, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22241, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22244, (Optr)&t_send2, (Optr)PSend22249, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22250, (Optr)&t_send1, (Optr)PSend22251, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22252, (Optr)&t_block_return);
    Block PBlock22227 = new_Block_with(empty_Array, empty_Array, PThreadedCode22228, 7, PSend22234, PSend22236, PAssign22237, PSend22240, PSend22249, PSend22251, PSend22252);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22253 = new_Send((Optr)PBlock22224, SMB_whileTrue_, 1, (Optr)PBlock22227);
    Array PThreadedCode22214 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22215, (Optr)&t_push_closure, (Optr)PBlock22219, (Optr)&t_send2, (Optr)PSend22223, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22224, (Optr)&t_push_closure, (Optr)PBlock22227, (Optr)&t_send1, (Optr)PSend22253, (Optr)&t_block_return);
    Block PBlock22213 = new_Block_with(empty_Array, empty_Array, PThreadedCode22214, 2, PSend22223, PSend22253);
    Array PArray22255 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22257 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22256 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22257, (Optr)&t_method_return);
    Block PBlock22254 = new_Block_with(PArray22255, empty_Array, PThreadedCode22256, 1, PSend22257);
    // on:do:. 
    Send PSend22258 = new_Send((Optr)PBlock22213, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22254);
    Array PThreadedCode22212 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22213, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22254, (Optr)&t_send2, (Optr)PSend22258, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22210 = new_Block_with(PArray22211, empty_Array, PThreadedCode22212, 2, PSend22258, self);
    // on:. 
    Send PSend22259 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22210);
    Array PThreadedCode22209 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22210, (Optr)&t_send1, (Optr)PSend22259, (Optr)&t_method_return);
    Method PMethod22206 = new_Method_with(PArray22207, PArray22208, empty_Array, PThreadedCode22209, 1, PSend22259);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22206, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22261 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22260 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22261, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22260, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22263 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22262 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22263, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22262, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22265 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22267 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22266 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22267, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22264 = new_Method_with(PArray22265, empty_Array, empty_Array, PThreadedCode22266, 2, PAssign22267, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22264, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22270 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22269 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22270, (Optr)&t_method_return);
    Method PMethod22268 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22269, 1, PSend22270);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22268, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22272 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22275 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22283 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22286 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22285 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22286, (Optr)&t_block_return);
    Block PBlock22284 = new_Block_with(empty_Array, empty_Array, PThreadedCode22285, 1, PSend22286);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22287 = new_Send((Optr)PSend22283, SMB_and_, 1, (Optr)PBlock22284);
    Array PThreadedCode22282 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22283, (Optr)&t_push_closure, (Optr)PBlock22284, (Optr)&t_send1, (Optr)PSend22287, (Optr)&t_block_return);
    Block PBlock22281 = new_Block_with(empty_Array, empty_Array, PThreadedCode22282, 1, PSend22287);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22291 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22290 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22291);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22294 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22293 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22294, (Optr)&t_block_return);
    Block PBlock22292 = new_Block_with(empty_Array, empty_Array, PThreadedCode22293, 1, PSend22294);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22295 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22292);
    Array PThreadedCode22289 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22290, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22292, (Optr)&t_send1, (Optr)PSend22295, (Optr)&t_block_return);
    Block PBlock22288 = new_Block_with(empty_Array, empty_Array, PThreadedCode22289, 2, PAssign22290, PSend22295);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22296 = new_Send((Optr)PBlock22281, SMB_whileTrue_, 1, (Optr)PBlock22288);
    Array PThreadedCode22280 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22281, (Optr)&t_push_closure, (Optr)PBlock22288, (Optr)&t_send1, (Optr)PSend22296, (Optr)&t_block_return);
    Block PBlock22279 = new_Block_with(empty_Array, empty_Array, PThreadedCode22280, 1, PSend22296);
    String string_22299 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22301 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22303 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22302 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22303, (Optr)&t_method_return);
    Block PBlock22300 = new_Block_with(PArray22301, empty_Array, PThreadedCode22302, 1, PSend22303);
    // ifNotNil:. 
    Send PSend22304 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22300);
    Constant string_22299_Const = new_Constant((Optr)string_22299);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22305 = new_Send((Optr)string_22299_Const, SMB__append_, 1, (Optr)PSend22304);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22306 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22305);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22307 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22310 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22311 = new_Send((Optr)PSend22310, SMB_not, 0);
    Array PThreadedCode22309 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22310, (Optr)&t_send0, (Optr)PSend22311, (Optr)&t_block_return);
    Block PBlock22308 = new_Block_with(empty_Array, empty_Array, PThreadedCode22309, 1, PSend22311);
    // and:. 
    Send PSend22312 = new_Send((Optr)PSend22307, SMB_and_, 1, (Optr)PBlock22308);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22316 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22317 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22318 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22319 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22318);
    Array PThreadedCode22315 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22316, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22317, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22318, (Optr)&t_send1, (Optr)PSend22319, (Optr)&t_block_return);
    Block PBlock22314 = new_Block_with(empty_Array, empty_Array, PThreadedCode22315, 3, PSend22316, PAssign22317, PSend22319);
    // ifTrue:. 
    Send PSend22313 = new_Send((Optr)PSend22312, SMB_ifTrue_, 1, (Optr)PBlock22314);
    Array PThreadedCode22298 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22299, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22300, (Optr)&t_send1, (Optr)PSend22304, (Optr)&t_send1, (Optr)PSend22305, (Optr)&t_send1, (Optr)PSend22306, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22307, (Optr)&t_push_closure, (Optr)PBlock22308, (Optr)&t_send1, (Optr)PSend22312, (Optr)&t_send_ifTrue_, (Optr)PSend22313, (Optr)PBlock22314, (Optr)&t_block_return);
    Block PBlock22297 = new_Block_with(empty_Array, empty_Array, PThreadedCode22298, 2, PSend22306, PSend22313);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22320 = new_Send((Optr)PBlock22279, SMB_ensure_, 1, (Optr)PBlock22297);
    Array PThreadedCode22278 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22279, (Optr)&t_push_closure, (Optr)PBlock22297, (Optr)&t_send1, (Optr)PSend22320, (Optr)&t_block_return);
    Block PBlock22277 = new_Block_with(empty_Array, empty_Array, PThreadedCode22278, 1, PSend22320);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22322 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22324 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22323 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22324, (Optr)&t_method_return);
    Block PBlock22321 = new_Block_with(PArray22322, empty_Array, PThreadedCode22323, 1, PSend22324);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22325 = new_Send((Optr)PBlock22277, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22321);
    Array PThreadedCode22276 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22277, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22321, (Optr)&t_send2, (Optr)PSend22325, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22274 = new_Block_with(PArray22275, empty_Array, PThreadedCode22276, 2, PSend22325, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22326 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22274);
    Array PThreadedCode22273 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22274, (Optr)&t_send1, (Optr)PSend22326, (Optr)&t_method_return);
    Method PMethod22271 = new_Method_with(empty_Array, PArray22272, empty_Array, PThreadedCode22273, 1, PSend22326);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22271, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22329 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22330 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22333 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22332 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22333, (Optr)&t_block_return);
    Block PBlock22331 = new_Block_with(empty_Array, empty_Array, PThreadedCode22332, 1, PSend22333);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22334 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22331);
    Array PThreadedCode22328 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22329, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22330, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22331, (Optr)&t_send1, (Optr)PSend22334, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22328, 4, PSend22329, PSend22330, PSend22334, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22327, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22336 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22338 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22337 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22338, (Optr)&t_method_return);
    Method PMethod22335 = new_Method_with(PArray22336, empty_Array, empty_Array, PThreadedCode22337, 1, PSend22338);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22335, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22344 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22346 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22345 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22346, (Optr)&t_method_return);
    Block PBlock22343 = new_Block_with(PArray22344, empty_Array, PThreadedCode22345, 1, PSend22346);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22347 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22343);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22348 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22342 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22343, (Optr)&t_send1, (Optr)PSend22347, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22348, (Optr)&t_block_return);
    Block PBlock22341 = new_Block_with(empty_Array, empty_Array, PThreadedCode22342, 2, PSend22347, PSend22348);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22349 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22341);
    Array PThreadedCode22340 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22341, (Optr)&t_send1, (Optr)PSend22349, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22339 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22340, 2, PSend22349, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22339, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22352 = new_String(L"GET");
    String string_22353 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22352_Const = new_Constant((Optr)string_22352);
    Constant string_22353_Const = new_Constant((Optr)string_22353);
    // with:with:. 
    Send PSend22354 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22352_Const, (Optr)string_22353_Const);
    Array PThreadedCode22351 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22352, (Optr)&t_push1, (Optr)string_22353, (Optr)&t_send2, (Optr)PSend22354, (Optr)&t_method_return);
    Method PMethod22350 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22351, 1, PSend22354);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22350, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22356 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22355 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22356, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22355, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22358 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22359 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22361 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22362 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22367 = new_String(L"*");
    Array PThreadedCode22366 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22367, (Optr)&t_block_return);
    Constant string_22367_Const = new_Constant((Optr)string_22367);
    Block PBlock22365 = new_Block_with(empty_Array, empty_Array, PThreadedCode22366, 1, string_22367_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22370 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22369 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22370, (Optr)&t_block_return);
    Block PBlock22368 = new_Block_with(empty_Array, empty_Array, PThreadedCode22369, 1, PSend22370);
    // ifNil:ifNotNil:. 
    Send PSend22364 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22365, (Optr)PBlock22368);
    Assign PAssign22363 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22364);
    String string_22371 = new_String(L"Listener starting (interface: ");
    Constant string_22371_Const = new_Constant((Optr)string_22371);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22372 = new_Send((Optr)string_22371_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22373 = new_String(L" port: ");
    Constant string_22373_Const = new_Constant((Optr)string_22373);
    // ,. 
    Send PSend22374 = new_Send((Optr)PSend22372, SMB__append_, 1, (Optr)string_22373_Const);
    // ,. 
    Send PSend22375 = new_Send((Optr)PSend22374, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22376 = new_String(L")");
    Constant string_22376_Const = new_Constant((Optr)string_22376);
    // ,. 
    Send PSend22377 = new_Send((Optr)PSend22375, SMB__append_, 1, (Optr)string_22376_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22378 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22377);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22380 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22379 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22380);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22383 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22382 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22383, (Optr)&t_block_return);
    Block PBlock22381 = new_Block_with(empty_Array, empty_Array, PThreadedCode22382, 1, PSend22383);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22386 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22385 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22386, (Optr)&t_block_return);
    Block PBlock22384 = new_Block_with(empty_Array, empty_Array, PThreadedCode22385, 1, PSend22386);
    // ifNil:ifNotNil:. 
    Send PSend22387 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22381, (Optr)PBlock22384);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22388 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22360 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22361, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22362, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22363, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22365, (Optr)&t_push_closure, (Optr)PBlock22368, (Optr)&t_send2, (Optr)PSend22364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22371, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22372, (Optr)&t_push1, (Optr)string_22373, (Optr)&t_send1, (Optr)PSend22374, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22375, (Optr)&t_push1, (Optr)string_22376, (Optr)&t_send1, (Optr)PSend22377, (Optr)&t_send1, (Optr)PSend22378, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22379, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22381, (Optr)&t_push_closure, (Optr)PBlock22384, (Optr)&t_send2, (Optr)PSend22387, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22388, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22357 = new_Method_with(PArray22358, PArray22359, empty_Array, PThreadedCode22360, 8, PAssign22361, PAssign22362, PAssign22363, PSend22378, PAssign22379, PSend22387, PSend22388, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22357, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22390 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22389 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22390, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22389, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22392 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22394 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22395 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22394);
    Array PThreadedCode22393 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22394, (Optr)&t_send3, (Optr)PSend22395, (Optr)&t_method_return);
    Method PMethod22391 = new_Method_with(PArray22392, empty_Array, empty_Array, PThreadedCode22393, 1, PSend22395);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22391, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22400 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22399 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22400, (Optr)&t_block_return);
    Block PBlock22398 = new_Block_with(empty_Array, empty_Array, PThreadedCode22399, 1, PSend22400);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22401 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22398);
    Assign PAssign22402 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22397 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22398, (Optr)&t_send1, (Optr)PSend22401, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22402, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22396 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22397, 3, PSend22401, PAssign22402, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22396, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22404 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22406 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22405 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22406, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22403 = new_Method_with(PArray22404, empty_Array, empty_Array, PThreadedCode22405, 2, PAssign22406, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22403, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22409 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22410 = new_Send((Optr)PSend22409, SMB_not, 0);
    Array PThreadedCode22408 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22409, (Optr)&t_send0, (Optr)PSend22410, (Optr)&t_method_return);
    Method PMethod22407 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22408, 1, PSend22410);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22407, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22412 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22411 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22412, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22411, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22414 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22415 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22418 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22420 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22421 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22421_Const = new_Constant((Optr)string_22421);
    // =. 
    Send PSend22422 = new_Send((Optr)PSend22420, SMB__equals_, 1, (Optr)string_22421_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22426 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22427 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22427_Const = new_Constant((Optr)string_22427);
    // send200Response:contentType:. 
    Send PSend22428 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22426, (Optr)string_22427_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22429 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22428);
    Array PThreadedCode22425 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22426, (Optr)&t_push1, (Optr)string_22427, (Optr)&t_send2, (Optr)PSend22428, (Optr)&t_send1, (Optr)PSend22429, (Optr)&t_block_return);
    Block PBlock22424 = new_Block_with(empty_Array, empty_Array, PThreadedCode22425, 1, PSend22429);
    // ifTrue:. 
    Send PSend22423 = new_Send((Optr)PSend22422, SMB_ifTrue_, 1, (Optr)PBlock22424);
    Assign PAssign22430 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22432 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22431 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22432);
    String string_22433 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22433_Const = new_Constant((Optr)string_22433);
    // beginsWith:. 
    Send PSend22434 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22433_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22440 = new_String(L"/");
    Constant string_22440_Const = new_Constant((Optr)string_22440);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22439 = new_Send((Optr)string_22440_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22438 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22439);
    Array PThreadedCode22437 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22438, (Optr)&t_push1, (Optr)string_22440, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22439, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22436 = new_Block_with(empty_Array, empty_Array, PThreadedCode22437, 1, PAssign22438);
    // ifFalse:. 
    Send PSend22435 = new_Send((Optr)PSend22434, SMB_ifFalse_, 1, (Optr)PBlock22436);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22445 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22448 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22447 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22448, (Optr)&t_block_return);
    Block PBlock22446 = new_Block_with(empty_Array, empty_Array, PThreadedCode22447, 1, PSend22448);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22449 = new_Send((Optr)PSend22445, SMB_and_, 1, (Optr)PBlock22446);
    Array PThreadedCode22444 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22445, (Optr)&t_push_closure, (Optr)PBlock22446, (Optr)&t_send1, (Optr)PSend22449, (Optr)&t_block_return);
    Block PBlock22443 = new_Block_with(empty_Array, empty_Array, PThreadedCode22444, 1, PSend22449);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22455 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22454 = new_Block_with(empty_Array, empty_Array, PThreadedCode22455, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22453 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22454);
    Assign PAssign22452 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22453);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22458 = new_Character(L'/');
    Constant char_22458_Const = new_Constant((Optr)char_22458);
    // copyUpToLast:. 
    Send PSend22457 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22458_Const);
    Assign PAssign22456 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22457);
    Array PThreadedCode22451 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22452, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22454, (Optr)&t_send2, (Optr)PSend22453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22456, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22458, (Optr)&t_send1, (Optr)PSend22457, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22450 = new_Block_with(empty_Array, empty_Array, PThreadedCode22451, 2, PAssign22452, PAssign22456);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22459 = new_Send((Optr)PBlock22443, SMB_whileTrue_, 1, (Optr)PBlock22450);
    String string_22464 = new_String(L"/");
    Constant string_22464_Const = new_Constant((Optr)string_22464);
    Array PThreadedCode22466 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22465 = new_Block_with(empty_Array, empty_Array, PThreadedCode22466, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22463 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_22464_Const, (Optr)PBlock22465);
    Assign PAssign22462 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22463);
    Array PThreadedCode22461 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22462, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_22464, (Optr)&t_push_closure, (Optr)PBlock22465, (Optr)&t_send2, (Optr)PSend22463, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22460 = new_Block_with(empty_Array, empty_Array, PThreadedCode22461, 1, PAssign22462);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22467 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22460);
    Array PThreadedCode22442 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22443, (Optr)&t_push_closure, (Optr)PBlock22450, (Optr)&t_send1, (Optr)PSend22459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22460, (Optr)&t_send1, (Optr)PSend22467, (Optr)&t_block_return);
    Block PBlock22441 = new_Block_with(empty_Array, empty_Array, PThreadedCode22442, 2, PSend22459, PSend22467);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22468 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22441);
    // method. 
    Send PSend22469 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22470 = new_String(L"OPTIONS");
    Constant string_22470_Const = new_Constant((Optr)string_22470);
    // =. 
    Send PSend22471 = new_Send((Optr)PSend22469, SMB__equals_, 1, (Optr)string_22470_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend22475 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22478 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode22477 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22478, (Optr)&t_block_return);
    Block PBlock22476 = new_Block_with(empty_Array, empty_Array, PThreadedCode22477, 1, PSend22478);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend22481 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode22480 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22481, (Optr)&t_block_return);
    Block PBlock22479 = new_Block_with(empty_Array, empty_Array, PThreadedCode22480, 1, PSend22481);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22482 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22476, (Optr)PBlock22479);
    // ,. 
    Send PSend22483 = new_Send((Optr)PSend22475, SMB__append_, 1, (Optr)PSend22482);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend22484 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend22483);
    Array PThreadedCode22474 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22475, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22476, (Optr)&t_push_closure, (Optr)PBlock22479, (Optr)&t_send2, (Optr)PSend22482, (Optr)&t_send1, (Optr)PSend22483, (Optr)&t_send1, (Optr)PSend22484, (Optr)&t_block_return);
    Block PBlock22473 = new_Block_with(empty_Array, empty_Array, PThreadedCode22474, 1, PSend22484);
    // ifTrue:. 
    Send PSend22472 = new_Send((Optr)PSend22471, SMB_ifTrue_, 1, (Optr)PBlock22473);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend22487 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend22488 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22487);
    Array PThreadedCode22486 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22487, (Optr)&t_send1, (Optr)PSend22488, (Optr)&t_block_return);
    Block PBlock22485 = new_Block_with(empty_Array, empty_Array, PThreadedCode22486, 1, PSend22488);
    // ifNil:. 
    Send PSend22489 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22485);
    // method. 
    Send PSend22490 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22491 = new_String(L"HEAD");
    Constant string_22491_Const = new_Constant((Optr)string_22491);
    // =. 
    Send PSend22492 = new_Send((Optr)PSend22490, SMB__equals_, 1, (Optr)string_22491_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend22495 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend22496 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend22497 = new_Send((Optr)PSend22495, SMB_includes_, 1, (Optr)PSend22496);
    Array PThreadedCode22494 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22495, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22496, (Optr)&t_send1, (Optr)PSend22497, (Optr)&t_block_return);
    Block PBlock22493 = new_Block_with(empty_Array, empty_Array, PThreadedCode22494, 1, PSend22497);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22498 = new_Send((Optr)PSend22492, SMB_or_, 1, (Optr)PBlock22493);
    // builtinHttpMethods. 
    Send PSend22502 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend22503 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend22504 = new_Send((Optr)PSend22502, SMB__append_, 1, (Optr)PSend22503);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend22505 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend22504);
    // escape:. 
    Send PSend22506 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22505);
    Array PThreadedCode22501 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22502, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22503, (Optr)&t_send1, (Optr)PSend22504, (Optr)&t_send1, (Optr)PSend22505, (Optr)&t_send1, (Optr)PSend22506, (Optr)&t_block_return);
    Block PBlock22500 = new_Block_with(empty_Array, empty_Array, PThreadedCode22501, 1, PSend22506);
    // ifFalse:. 
    Send PSend22499 = new_Send((Optr)PSend22498, SMB_ifFalse_, 1, (Optr)PBlock22500);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend22509 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend22510 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend22509, (Optr)VAR_request_0_0);
    Array PThreadedCode22508 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22509, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend22510, (Optr)&t_block_return);
    Block PBlock22507 = new_Block_with(empty_Array, empty_Array, PThreadedCode22508, 1, PSend22510);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22512 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22514 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22513 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22514, (Optr)&t_method_return);
    Block PBlock22511 = new_Block_with(PArray22512, empty_Array, PThreadedCode22513, 1, PSend22514);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22515 = new_Send((Optr)PBlock22507, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22511);
    Array PThreadedCode22419 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22420, (Optr)&t_push1, (Optr)string_22421, (Optr)&t_send1, (Optr)PSend22422, (Optr)&t_send_ifTrue_, (Optr)PSend22423, (Optr)PBlock22424, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22430, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22431, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22432, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22433, (Optr)&t_send1, (Optr)PSend22434, (Optr)&t_send_ifFalse_, (Optr)PSend22435, (Optr)PBlock22436, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22441, (Optr)&t_send1, (Optr)PSend22468, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22469, (Optr)&t_push1, (Optr)string_22470, (Optr)&t_send1, (Optr)PSend22471, (Optr)&t_send_ifTrue_, (Optr)PSend22472, (Optr)PBlock22473, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22485, (Optr)&t_send1, (Optr)PSend22489, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22490, (Optr)&t_push1, (Optr)string_22491, (Optr)&t_send1, (Optr)PSend22492, (Optr)&t_push_closure, (Optr)PBlock22493, (Optr)&t_send1, (Optr)PSend22498, (Optr)&t_send_ifFalse_, (Optr)PSend22499, (Optr)PBlock22500, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22507, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22511, (Optr)&t_send2, (Optr)PSend22515, (Optr)&t_method_return);
    Block PBlock22417 = new_Block_with(PArray22418, empty_Array, PThreadedCode22419, 9, PSend22423, PAssign22430, PAssign22431, PSend22435, PSend22468, PSend22472, PSend22489, PSend22499, PSend22515);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22516 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22417);
    Array PThreadedCode22416 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22417, (Optr)&t_send1, (Optr)PSend22516, (Optr)&t_method_return);
    Method PMethod22413 = new_Method_with(PArray22414, PArray22415, empty_Array, PThreadedCode22416, 1, PSend22516);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22413, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray22518 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend22520 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22519 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22520, (Optr)&t_method_return);
    Method PMethod22517 = new_Method_with(PArray22518, empty_Array, empty_Array, PThreadedCode22519, 1, PSend22520);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22517, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22522 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22526 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22525 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend22526, (Optr)&t_block_return);
    Block PBlock22524 = new_Block_with(empty_Array, empty_Array, PThreadedCode22525, 1, PSend22526);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22527 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22524);
    Array PThreadedCode22523 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22524, (Optr)&t_send1, (Optr)PSend22527, (Optr)&t_method_return);
    Method PMethod22521 = new_Method_with(PArray22522, empty_Array, empty_Array, PThreadedCode22523, 1, PSend22527);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod22521, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode22529 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22528 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22529, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22528, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray22531 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray22532 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_22540 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_22540_Const = new_Constant((Optr)string_22540);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22541 = new_String(L"<h1>Internal Server Error: ");
    Constant string_22541_Const = new_Constant((Optr)string_22541);
    // ,. 
    Send PSend22539 = new_Send((Optr)string_22540_Const, SMB__append_, 1, (Optr)string_22541_Const);
    // ,. 
    Send PSend22538 = new_Send((Optr)PSend22539, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_22542 = new_String(L"</h1><pre>");
    Constant string_22542_Const = new_Constant((Optr)string_22542);
    // ,. 
    Send PSend22537 = new_Send((Optr)PSend22538, SMB__append_, 1, (Optr)string_22542_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22544 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22545 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend22543 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend22544, (Optr)PSend22545);
    // ,. 
    Send PSend22536 = new_Send((Optr)PSend22537, SMB__append_, 1, (Optr)PSend22543);
    String string_22546 = new_String(L"</pre></body></html>");
    Constant string_22546_Const = new_Constant((Optr)string_22546);
    // ,. 
    Send PSend22535 = new_Send((Optr)PSend22536, SMB__append_, 1, (Optr)string_22546_Const);
    Assign PAssign22534 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend22535);
    SmallInt int_500 = new_SmallInt(500);
    String string_22547 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_22547_Const = new_Constant((Optr)string_22547);
    // sendResponseCode:content:type:close:. 
    Send PSend22548 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_22547_Const, (Optr)true_Const);
    Array PThreadedCode22533 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign22534, (Optr)&t_push1, (Optr)string_22540, (Optr)&t_push1, (Optr)string_22541, (Optr)&t_send1, (Optr)PSend22539, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend22538, (Optr)&t_push1, (Optr)string_22542, (Optr)&t_send1, (Optr)PSend22537, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22544, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22545, (Optr)&t_send2, (Optr)PSend22543, (Optr)&t_send1, (Optr)PSend22536, (Optr)&t_push1, (Optr)string_22546, (Optr)&t_send1, (Optr)PSend22535, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_22547, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend22548, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22530 = new_Method_with(PArray22531, PArray22532, empty_Array, PThreadedCode22533, 3, PAssign22534, PSend22548, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod22530, WebClient_Core_WebServer_Class);
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
    Send PSend22555 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend22554 = new_Send((Optr)PSend22555, SMB_serverString, 0);
    Assign PAssign22553 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend22554);
    Array PThreadedCode22552 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22553, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22555, (Optr)&t_send0, (Optr)PSend22554, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22551 = new_Block_with(empty_Array, empty_Array, PThreadedCode22552, 1, PAssign22553);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22556 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock22551);
    Array PThreadedCode22550 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock22551, (Optr)&t_send1, (Optr)PSend22556, (Optr)&t_method_return);
    Method PMethod22549 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22550, 1, PSend22556);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22549, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22558 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22562 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22563 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend22562);
    Array PThreadedCode22561 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend22562, (Optr)&t_send1, (Optr)PSend22563, (Optr)&t_block_return);
    Block PBlock22560 = new_Block_with(empty_Array, empty_Array, PThreadedCode22561, 1, PSend22563);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22564 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock22560);
    Array PThreadedCode22559 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock22560, (Optr)&t_send1, (Optr)PSend22564, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22557 = new_Method_with(PArray22558, empty_Array, empty_Array, PThreadedCode22559, 2, PSend22564, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod22557, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22568 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend22570 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22571 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode22569 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22571, (Optr)&t_method_return);
    Block PBlock22567 = new_Block_with(PArray22568, empty_Array, PThreadedCode22569, 2, PSend22570, PSend22571);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22572 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22573 = new_Send((Optr)PBlock22567, SMB_value_, 1, (Optr)PSend22572);
    Array PThreadedCode22566 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22567, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend22572, (Optr)&t_send1, (Optr)PSend22573, (Optr)&t_method_return);
    Method PMethod22565 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22566, 1, PSend22573);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod22565, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22575 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22577 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22577, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22574 = new_Method_with(PArray22575, empty_Array, empty_Array, PThreadedCode22576, 2, PAssign22577, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22574, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode22579 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22578 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22579, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22578, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode22581 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22581, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22580, WebClient_Core_WebServer_Class);
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
    Send PSend22584 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22585 = new_Send((Optr)PSend22584, SMB_serverDate, 0);
    Array PThreadedCode22583 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22584, (Optr)&t_send0, (Optr)PSend22585, (Optr)&t_method_return);
    Method PMethod22582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22583, 1, PSend22585);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22582, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray22587 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend22589 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend22590 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend22589);
    Array PThreadedCode22588 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22589, (Optr)&t_send2, (Optr)PSend22590, (Optr)&t_method_return);
    Method PMethod22586 = new_Method_with(PArray22587, empty_Array, empty_Array, PThreadedCode22588, 1, PSend22590);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod22586, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray22592 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22594 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22595 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend22594);
    Array PThreadedCode22593 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend22594, (Optr)&t_send1, (Optr)PSend22595, (Optr)&t_method_return);
    Method PMethod22591 = new_Method_with(PArray22592, empty_Array, empty_Array, PThreadedCode22593, 1, PSend22595);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod22591, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray22597 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22600 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_22602 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_22602_Const = new_Constant((Optr)string_22602);
    // nextPutAll:. 
    Send PSend22603 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_22602_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22604 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode22601 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_22602, (Optr)&t_send1, (Optr)PSend22603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22604, (Optr)&t_method_return);
    Block PBlock22599 = new_Block_with(PArray22600, empty_Array, PThreadedCode22601, 2, PSend22603, PSend22604);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22605 = new_Send((Optr)PBlock22599, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode22598 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22599, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend22605, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22596 = new_Method_with(PArray22597, empty_Array, empty_Array, PThreadedCode22598, 2, PSend22605, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod22596, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray22607 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22609 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22608 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22609, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22606 = new_Method_with(PArray22607, empty_Array, empty_Array, PThreadedCode22608, 2, PAssign22609, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22606, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22611 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode22616 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22615 = new_Block_with(empty_Array, empty_Array, PThreadedCode22616, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend22617 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22615);
    Array PThreadedCode22614 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22615, (Optr)&t_send2, (Optr)PSend22617, (Optr)&t_block_return);
    Block PBlock22613 = new_Block_with(empty_Array, empty_Array, PThreadedCode22614, 1, PSend22617);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22618 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22613);
    Array PThreadedCode22612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22613, (Optr)&t_send1, (Optr)PSend22618, (Optr)&t_method_return);
    Method PMethod22610 = new_Method_with(PArray22611, empty_Array, empty_Array, PThreadedCode22612, 1, PSend22618);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod22610, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22620 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22622 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22621 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22622, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22619 = new_Method_with(PArray22620, empty_Array, empty_Array, PThreadedCode22621, 2, PAssign22622, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22619, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray22624 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22628 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22629 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22630 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend22628, (Optr)PSend22629);
    Array PThreadedCode22627 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22628, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend22629, (Optr)&t_send2, (Optr)PSend22630, (Optr)&t_block_return);
    Block PBlock22626 = new_Block_with(empty_Array, empty_Array, PThreadedCode22627, 1, PSend22630);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22631 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22626);
    Array PThreadedCode22625 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22626, (Optr)&t_send1, (Optr)PSend22631, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22623 = new_Method_with(PArray22624, empty_Array, empty_Array, PThreadedCode22625, 2, PSend22631, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod22623, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray22633 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22637 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode22639 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22638 = new_Block_with(empty_Array, empty_Array, PThreadedCode22639, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend22640 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend22637, (Optr)PBlock22638);
    Array PThreadedCode22636 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22637, (Optr)&t_push_closure, (Optr)PBlock22638, (Optr)&t_send2, (Optr)PSend22640, (Optr)&t_block_return);
    Block PBlock22635 = new_Block_with(empty_Array, empty_Array, PThreadedCode22636, 1, PSend22640);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22641 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22635);
    Array PThreadedCode22634 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22635, (Optr)&t_send1, (Optr)PSend22641, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22632 = new_Method_with(PArray22633, empty_Array, empty_Array, PThreadedCode22634, 2, PSend22641, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod22632, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22646 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign22647 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode22645 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend22646, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22647, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22644 = new_Block_with(empty_Array, empty_Array, PThreadedCode22645, 2, PSend22646, PAssign22647);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22648 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock22644);
    Array PThreadedCode22643 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22644, (Optr)&t_send1, (Optr)PSend22648, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22643, 2, PSend22648, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod22642, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray22650 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray22653 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend22657 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend22656 = new_Send((Optr)PSend22657, SMB_asUTC, 0);
    Assign PAssign22655 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend22656);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend22658 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_22659 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22659_Const = new_Constant((Optr)string_22659);
    // ,. 
    Send PSend22660 = new_Send((Optr)PSend22658, SMB__append_, 1, (Optr)string_22659_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22661 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend22660);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend22662 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22664 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend22666 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend22667 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend22668 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend22669 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend22670 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend22671 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend22672 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22673 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode22665 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22666, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22667, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend22668, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend22669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22670, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22671, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22672, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22673, (Optr)&t_method_return);
    Block PBlock22663 = new_Block_with(PArray22664, empty_Array, PThreadedCode22665, 8, PSend22666, PSend22667, PSend22668, PSend22669, PSend22670, PSend22671, PSend22672, PSend22673);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22674 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22675 = new_Send((Optr)PBlock22663, SMB_value_, 1, (Optr)PSend22674);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22676 = new_Send((Optr)PSend22675, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend22677 = new_Send((Optr)PSend22662, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend22676);
    Array PArray22679 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend22681 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend22682 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend22683 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend22682);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend22684 = new_Send((Optr)PSend22683, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend22685 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend22684);
    Array PThreadedCode22680 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22681, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22682, (Optr)&t_send1, (Optr)PSend22683, (Optr)&t_send0, (Optr)PSend22684, (Optr)&t_send1, (Optr)PSend22685, (Optr)&t_method_return);
    Block PBlock22678 = new_Block_with(PArray22679, empty_Array, PThreadedCode22680, 2, PSend22681, PSend22685);
    // value:. 
    Send PSend22686 = new_Send((Optr)PBlock22678, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_22687 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_22687_Const = new_Constant((Optr)string_22687);
    // writeAll:. 
    Send PSend22688 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_22687_Const);
    Array PThreadedCode22654 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign22655, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend22657, (Optr)&t_send0, (Optr)PSend22656, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22658, (Optr)&t_push1, (Optr)string_22659, (Optr)&t_send1, (Optr)PSend22660, (Optr)&t_send1, (Optr)PSend22661, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22662, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock22663, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22674, (Optr)&t_send1, (Optr)PSend22675, (Optr)&t_send0, (Optr)PSend22676, (Optr)&t_send2, (Optr)PSend22677, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22678, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend22686, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_22687, (Optr)&t_send1, (Optr)PSend22688, (Optr)&t_method_return);
    Block PBlock22652 = new_Block_with(PArray22653, empty_Array, PThreadedCode22654, 5, PAssign22655, PSend22661, PSend22677, PSend22686, PSend22688);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend22689 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock22652);
    Array PThreadedCode22651 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock22652, (Optr)&t_send1, (Optr)PSend22689, (Optr)&t_method_return);
    Method PMethod22649 = new_Method_with(empty_Array, PArray22650, empty_Array, PThreadedCode22651, 1, PSend22689);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22649, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_22692 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode22691 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22692, (Optr)&t_method_return);
    Constant string_22692_Const = new_Constant((Optr)string_22692);
    Method PMethod22690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22691, 1, string_22692_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod22690, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_22695 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode22694 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22695, (Optr)&t_method_return);
    Constant string_22695_Const = new_Constant((Optr)string_22695);
    Method PMethod22693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22694, 1, string_22695_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22693, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22701 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign22700 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend22701);
    Array PThreadedCode22699 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22700, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22701, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22698 = new_Block_with(empty_Array, empty_Array, PThreadedCode22699, 1, PAssign22700);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22702 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock22698);
    Array PThreadedCode22697 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22698, (Optr)&t_send1, (Optr)PSend22702, (Optr)&t_method_return);
    Method PMethod22696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22697, 1, PSend22702);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod22696, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray22704 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22707 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22706 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend22707);
    // new. 
    Send PSend22709 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22708 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend22709);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend22710 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend22711 = new_Send((Optr)PSend22710, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend22712 = new_Send((Optr)PSend22711, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend22713 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_22714 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray22716 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend22718 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_22719 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22719_Const = new_Constant((Optr)string_22719);
    // send200Response:contentType:. 
    Send PSend22720 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend22718, (Optr)string_22719_Const);
    Array PThreadedCode22717 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22718, (Optr)&t_push1, (Optr)string_22719, (Optr)&t_send2, (Optr)PSend22720, (Optr)&t_method_return);
    Block PBlock22715 = new_Block_with(PArray22716, empty_Array, PThreadedCode22717, 1, PSend22720);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_22714_Const = new_Constant((Optr)string_22714);
    // addService:action:. 
    Send PSend22721 = new_Send((Optr)PSend22713, SMB_addService_action_, 2, (Optr)string_22714_Const, (Optr)PBlock22715);
    Array PThreadedCode22705 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22706, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22708, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22709, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22710, (Optr)&t_send0, (Optr)PSend22711, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend22712, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22713, (Optr)&t_push1, (Optr)string_22714, (Optr)&t_push_closure, (Optr)PBlock22715, (Optr)&t_send2, (Optr)PSend22721, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22703 = new_Method_with(empty_Array, PArray22704, empty_Array, PThreadedCode22705, 5, PAssign22706, PAssign22708, PSend22712, PSend22721, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod22703, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_example, MC_SMB_example);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_22724 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode22723 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22724, (Optr)&t_method_return);
    Constant string_22724_Const = new_Constant((Optr)string_22724);
    Method PMethod22722 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22723, 1, string_22724_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod22722, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
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
    init_class_SMB_reset();
    init_class_SMB_serverDate();
    init_class_SMB_examplePage();
    init_class_SMB_serverString();
    init_class_SMB_default();
    init_class_SMB_example();
    init_class_SMB_examplePage2();
    
}