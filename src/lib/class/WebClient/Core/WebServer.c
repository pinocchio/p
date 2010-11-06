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
    Array PArray22233 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22234 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22244 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22243 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22244, (Optr)&t_block_return);
    Block PBlock22242 = new_Block_with(empty_Array, empty_Array, PThreadedCode22243, 1, PSend22244);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22246 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22248 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22247 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22248, (Optr)&t_method_return);
    Block PBlock22245 = new_Block_with(PArray22246, empty_Array, PThreadedCode22247, 1, PSend22248);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22249 = new_Send((Optr)PBlock22242, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22245);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22252 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22254 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22253 = new_Block_with(empty_Array, empty_Array, PThreadedCode22254, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22255 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22252, (Optr)PBlock22253);
    Array PThreadedCode22251 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22252, (Optr)&t_push_closure, (Optr)PBlock22253, (Optr)&t_send2, (Optr)PSend22255, (Optr)&t_block_return);
    Block PBlock22250 = new_Block_with(empty_Array, empty_Array, PThreadedCode22251, 1, PSend22255);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22256 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22250);
    Array PThreadedCode22241 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22242, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22245, (Optr)&t_send2, (Optr)PSend22249, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22250, (Optr)&t_send1, (Optr)PSend22256, (Optr)&t_block_return);
    Block PBlock22240 = new_Block_with(empty_Array, empty_Array, PThreadedCode22241, 2, PSend22249, PSend22256);
    // destroy. 
    Send PSend22259 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22258 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22259, (Optr)&t_block_return);
    Block PBlock22257 = new_Block_with(empty_Array, empty_Array, PThreadedCode22258, 1, PSend22259);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22260 = new_Send((Optr)PBlock22240, SMB_ensure_, 1, (Optr)PBlock22257);
    Array PThreadedCode22239 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22240, (Optr)&t_push_closure, (Optr)PBlock22257, (Optr)&t_send1, (Optr)PSend22260, (Optr)&t_block_return);
    Block PBlock22238 = new_Block_with(empty_Array, empty_Array, PThreadedCode22239, 1, PSend22260);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22237 = new_Send((Optr)PBlock22238, SMB_fork, 0);
    Assign PAssign22236 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22237);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22263 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22262 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22263, (Optr)&t_block_return);
    Block PBlock22261 = new_Block_with(empty_Array, empty_Array, PThreadedCode22262, 1, PSend22263);
    // critical:. 
    Send PSend22264 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22261);
    Array PThreadedCode22235 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22236, (Optr)&t_push_closure, (Optr)PBlock22238, (Optr)&t_send0, (Optr)PSend22237, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22261, (Optr)&t_send1, (Optr)PSend22264, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22232 = new_Method_with(PArray22233, PArray22234, empty_Array, PThreadedCode22235, 3, PAssign22236, PSend22264, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22232, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22266 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22271 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22270 = new_Block_with(empty_Array, empty_Array, PThreadedCode22271, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22272 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22270);
    Array PThreadedCode22269 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22270, (Optr)&t_send2, (Optr)PSend22272, (Optr)&t_block_return);
    Block PBlock22268 = new_Block_with(empty_Array, empty_Array, PThreadedCode22269, 1, PSend22272);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22273 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22268);
    Array PThreadedCode22267 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22268, (Optr)&t_send1, (Optr)PSend22273, (Optr)&t_method_return);
    Method PMethod22265 = new_Method_with(PArray22266, empty_Array, empty_Array, PThreadedCode22267, 1, PSend22273);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22265, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22275 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22275, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22274, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22278 = new_String(L"HEAD");
    String string_22279 = new_String(L"TRACE");
    String string_22280 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22278_Const = new_Constant((Optr)string_22278);
    Constant string_22279_Const = new_Constant((Optr)string_22279);
    Constant string_22280_Const = new_Constant((Optr)string_22280);
    // with:with:with:. 
    Send PSend22281 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22278_Const, (Optr)string_22279_Const, (Optr)string_22280_Const);
    Array PThreadedCode22277 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22278, (Optr)&t_push1, (Optr)string_22279, (Optr)&t_push1, (Optr)string_22280, (Optr)&t_send3, (Optr)PSend22281, (Optr)&t_method_return);
    Method PMethod22276 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22277, 1, PSend22281);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22276, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22283 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22286 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22290 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22289 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22290, (Optr)&t_block_return);
    Block PBlock22288 = new_Block_with(empty_Array, empty_Array, PThreadedCode22289, 1, PSend22290);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22291 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22288);
    Array PThreadedCode22287 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22288, (Optr)&t_send1, (Optr)PSend22291, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22285 = new_Block_with(PArray22286, empty_Array, PThreadedCode22287, 2, PSend22291, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22292 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22285);
    Array PThreadedCode22284 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22285, (Optr)&t_send1, (Optr)PSend22292, (Optr)&t_method_return);
    Method PMethod22282 = new_Method_with(PArray22283, empty_Array, empty_Array, PThreadedCode22284, 1, PSend22292);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22282, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22294 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22296 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22295 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22296, (Optr)&t_method_return);
    Method PMethod22293 = new_Method_with(PArray22294, empty_Array, empty_Array, PThreadedCode22295, 1, PSend22296);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22293, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22298 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22298, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22297, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22300 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22301 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22305 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22305_Const = new_Constant((Optr)string_22305);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22306 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22306_Const = new_Constant((Optr)string_22306);
    // ,. 
    Send PSend22304 = new_Send((Optr)string_22305_Const, SMB__append_, 1, (Optr)string_22306_Const);
    Assign PAssign22303 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22304);
    String string_22309 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22310 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22309_Const = new_Constant((Optr)string_22309);
    // ,. 
    Send PSend22311 = new_Send((Optr)string_22309_Const, SMB__append_, 1, (Optr)PSend22310);
    String string_22312 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22312_Const = new_Constant((Optr)string_22312);
    // ,. 
    Send PSend22313 = new_Send((Optr)PSend22311, SMB__append_, 1, (Optr)string_22312_Const);
    // crlf. 
    Send PSend22314 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22315 = new_Send((Optr)PSend22313, SMB__append_, 1, (Optr)PSend22314);
    String string_22316 = new_String(L"Connection: close");
    Constant string_22316_Const = new_Constant((Optr)string_22316);
    // ,. 
    Send PSend22317 = new_Send((Optr)PSend22315, SMB__append_, 1, (Optr)string_22316_Const);
    // crlf. 
    Send PSend22318 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22319 = new_Send((Optr)PSend22317, SMB__append_, 1, (Optr)PSend22318);
    String string_22320 = new_String(L"Content-Length: ");
    Constant string_22320_Const = new_Constant((Optr)string_22320);
    // ,. 
    Send PSend22321 = new_Send((Optr)PSend22319, SMB__append_, 1, (Optr)string_22320_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22322 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22323 = new_Send((Optr)PSend22322, SMB_asString, 0);
    // ,. 
    Send PSend22324 = new_Send((Optr)PSend22321, SMB__append_, 1, (Optr)PSend22323);
    // crlf. 
    Send PSend22325 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22326 = new_Send((Optr)PSend22324, SMB__append_, 1, (Optr)PSend22325);
    // crlf. 
    Send PSend22327 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22328 = new_Send((Optr)PSend22326, SMB__append_, 1, (Optr)PSend22327);
    // ,. 
    Send PSend22329 = new_Send((Optr)PSend22328, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22330 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22329);
    Array PThreadedCode22308 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22309, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22310, (Optr)&t_send1, (Optr)PSend22311, (Optr)&t_push1, (Optr)string_22312, (Optr)&t_send1, (Optr)PSend22313, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22314, (Optr)&t_send1, (Optr)PSend22315, (Optr)&t_push1, (Optr)string_22316, (Optr)&t_send1, (Optr)PSend22317, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22318, (Optr)&t_send1, (Optr)PSend22319, (Optr)&t_push1, (Optr)string_22320, (Optr)&t_send1, (Optr)PSend22321, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22322, (Optr)&t_send0, (Optr)PSend22323, (Optr)&t_send1, (Optr)PSend22324, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22325, (Optr)&t_send1, (Optr)PSend22326, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22327, (Optr)&t_send1, (Optr)PSend22328, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22329, (Optr)&t_send1, (Optr)PSend22330, (Optr)&t_block_return);
    Block PBlock22307 = new_Block_with(empty_Array, empty_Array, PThreadedCode22308, 1, PSend22330);
    Array PThreadedCode22332 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22331 = new_Block_with(empty_Array, empty_Array, PThreadedCode22332, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22333 = new_Send((Optr)PBlock22307, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22331);
    Array PThreadedCode22302 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22303, (Optr)&t_push1, (Optr)string_22305, (Optr)&t_push1, (Optr)string_22306, (Optr)&t_send1, (Optr)PSend22304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22307, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22331, (Optr)&t_send2, (Optr)PSend22333, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22299 = new_Method_with(PArray22300, PArray22301, empty_Array, PThreadedCode22302, 3, PAssign22303, PSend22333, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22299, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22335 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22337 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22336 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22337, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22334 = new_Method_with(PArray22335, empty_Array, empty_Array, PThreadedCode22336, 1, PAssign22337);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22334, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22339 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22338 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22339, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22338, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22342 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22347 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22346 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22347, (Optr)&t_block_return);
    Block PBlock22345 = new_Block_with(empty_Array, empty_Array, PThreadedCode22346, 1, PSend22347);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22344 = new_Send((Optr)PBlock22345, SMB_fork, 0);
    Assign PAssign22343 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22344);
    Array PThreadedCode22341 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22342, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22343, (Optr)&t_push_closure, (Optr)PBlock22345, (Optr)&t_send0, (Optr)PSend22344, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22341, 3, PSend22342, PAssign22343, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22340, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22351 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22350 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22351);
    // new. 
    Send PSend22353 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22352 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22353);
    // new. 
    Send PSend22355 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22354 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22355);
    // new. 
    Send PSend22357 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22356 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22357);
    // new. 
    Send PSend22359 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22358 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22359);
    // new. 
    Send PSend22361 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22360 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22361);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22363 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22366 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22368 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22369 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22367 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22369, (Optr)&t_method_return);
    Block PBlock22365 = new_Block_with(PArray22366, empty_Array, PThreadedCode22367, 2, PSend22368, PSend22369);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22370 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22371 = new_Send((Optr)PBlock22365, SMB_value_, 1, (Optr)PSend22370);
    Array PThreadedCode22364 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22365, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22370, (Optr)&t_send1, (Optr)PSend22371, (Optr)&t_method_return);
    Block PBlock22362 = new_Block_with(PArray22363, empty_Array, PThreadedCode22364, 1, PSend22371);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22372 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22362);
    Array PThreadedCode22349 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22350, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22352, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22353, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22354, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22355, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22356, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22357, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22358, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22359, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22360, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22361, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22362, (Optr)&t_send1, (Optr)PSend22372, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22349, 8, PAssign22350, PAssign22352, PAssign22354, PAssign22356, PAssign22358, PAssign22360, PSend22372, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22348, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22374 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22376 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22375 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22376, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22373 = new_Method_with(PArray22374, empty_Array, empty_Array, PThreadedCode22375, 2, PAssign22376, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22373, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22378 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22379 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22382 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22389 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22388 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22389);
    Array PThreadedCode22387 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22388, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22389, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22386 = new_Block_with(empty_Array, empty_Array, PThreadedCode22387, 1, PAssign22388);
    String string_22392 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22392_Const = new_Constant((Optr)string_22392);
    // error:. 
    Send PSend22393 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22392_Const);
    Array PThreadedCode22391 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22392, (Optr)&t_send1, (Optr)PSend22393, (Optr)&t_block_return);
    Block PBlock22390 = new_Block_with(empty_Array, empty_Array, PThreadedCode22391, 1, PSend22393);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22394 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22386, (Optr)PBlock22390);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22397 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22396 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22397, (Optr)&t_block_return);
    Block PBlock22395 = new_Block_with(empty_Array, empty_Array, PThreadedCode22396, 1, PSend22397);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22400 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22403 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22404 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22403);
    Array PThreadedCode22402 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22403, (Optr)&t_send1, (Optr)PSend22404, (Optr)&t_block_return);
    Block PBlock22401 = new_Block_with(empty_Array, empty_Array, PThreadedCode22402, 1, PSend22404);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22405 = new_Send((Optr)PSend22400, SMB_ifNil_, 1, (Optr)PBlock22401);
    String string_22406 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22406_Const = new_Constant((Optr)string_22406);
    // warn:. 
    Send PSend22407 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22406_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22409 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22408 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22409);
    String string_22410 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22410_Const = new_Constant((Optr)string_22410);
    // warn:. 
    Send PSend22411 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22410_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22414 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22414, (Optr)&t_block_return);
    Block PBlock22412 = new_Block_with(empty_Array, empty_Array, PThreadedCode22413, 1, PSend22414);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22416 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22418 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22419 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22418);
    Array PThreadedCode22417 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22418, (Optr)&t_send1, (Optr)PSend22419, (Optr)&t_method_return);
    Block PBlock22415 = new_Block_with(PArray22416, empty_Array, PThreadedCode22417, 1, PSend22419);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22420 = new_Send((Optr)PBlock22412, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22415);
    String string_22421 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22421_Const = new_Constant((Optr)string_22421);
    // warn:. 
    Send PSend22422 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22421_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22423 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22399 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22400, (Optr)&t_push_closure, (Optr)PBlock22401, (Optr)&t_send1, (Optr)PSend22405, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22406, (Optr)&t_send1, (Optr)PSend22407, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22408, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22409, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22410, (Optr)&t_send1, (Optr)PSend22411, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22412, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22415, (Optr)&t_send2, (Optr)PSend22420, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22421, (Optr)&t_send1, (Optr)PSend22422, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22423, (Optr)&t_block_return);
    Block PBlock22398 = new_Block_with(empty_Array, empty_Array, PThreadedCode22399, 7, PSend22405, PSend22407, PAssign22408, PSend22411, PSend22420, PSend22422, PSend22423);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22424 = new_Send((Optr)PBlock22395, SMB_whileTrue_, 1, (Optr)PBlock22398);
    Array PThreadedCode22385 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22386, (Optr)&t_push_closure, (Optr)PBlock22390, (Optr)&t_send2, (Optr)PSend22394, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22395, (Optr)&t_push_closure, (Optr)PBlock22398, (Optr)&t_send1, (Optr)PSend22424, (Optr)&t_block_return);
    Block PBlock22384 = new_Block_with(empty_Array, empty_Array, PThreadedCode22385, 2, PSend22394, PSend22424);
    Array PArray22426 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22428 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22427 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22428, (Optr)&t_method_return);
    Block PBlock22425 = new_Block_with(PArray22426, empty_Array, PThreadedCode22427, 1, PSend22428);
    // on:do:. 
    Send PSend22429 = new_Send((Optr)PBlock22384, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22425);
    Array PThreadedCode22383 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22384, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22425, (Optr)&t_send2, (Optr)PSend22429, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22381 = new_Block_with(PArray22382, empty_Array, PThreadedCode22383, 2, PSend22429, self);
    // on:. 
    Send PSend22430 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22381);
    Array PThreadedCode22380 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22381, (Optr)&t_send1, (Optr)PSend22430, (Optr)&t_method_return);
    Method PMethod22377 = new_Method_with(PArray22378, PArray22379, empty_Array, PThreadedCode22380, 1, PSend22430);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22377, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22432 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22431 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22432, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22431, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22434 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22433 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22434, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22433, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22436 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22438 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22437 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22438, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22435 = new_Method_with(PArray22436, empty_Array, empty_Array, PThreadedCode22437, 2, PAssign22438, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22435, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22441 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22440 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22441, (Optr)&t_method_return);
    Method PMethod22439 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22440, 1, PSend22441);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22439, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22443 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22446 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22454 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22457 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22456 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22457, (Optr)&t_block_return);
    Block PBlock22455 = new_Block_with(empty_Array, empty_Array, PThreadedCode22456, 1, PSend22457);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22458 = new_Send((Optr)PSend22454, SMB_and_, 1, (Optr)PBlock22455);
    Array PThreadedCode22453 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22454, (Optr)&t_push_closure, (Optr)PBlock22455, (Optr)&t_send1, (Optr)PSend22458, (Optr)&t_block_return);
    Block PBlock22452 = new_Block_with(empty_Array, empty_Array, PThreadedCode22453, 1, PSend22458);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22462 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22461 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22462);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22465 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22464 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22465, (Optr)&t_block_return);
    Block PBlock22463 = new_Block_with(empty_Array, empty_Array, PThreadedCode22464, 1, PSend22465);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22466 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22463);
    Array PThreadedCode22460 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22461, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22462, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22463, (Optr)&t_send1, (Optr)PSend22466, (Optr)&t_block_return);
    Block PBlock22459 = new_Block_with(empty_Array, empty_Array, PThreadedCode22460, 2, PAssign22461, PSend22466);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22467 = new_Send((Optr)PBlock22452, SMB_whileTrue_, 1, (Optr)PBlock22459);
    Array PThreadedCode22451 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22452, (Optr)&t_push_closure, (Optr)PBlock22459, (Optr)&t_send1, (Optr)PSend22467, (Optr)&t_block_return);
    Block PBlock22450 = new_Block_with(empty_Array, empty_Array, PThreadedCode22451, 1, PSend22467);
    String string_22470 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22472 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22474 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22473 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22474, (Optr)&t_method_return);
    Block PBlock22471 = new_Block_with(PArray22472, empty_Array, PThreadedCode22473, 1, PSend22474);
    // ifNotNil:. 
    Send PSend22475 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22471);
    Constant string_22470_Const = new_Constant((Optr)string_22470);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22476 = new_Send((Optr)string_22470_Const, SMB__append_, 1, (Optr)PSend22475);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22477 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22476);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22478 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22481 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22482 = new_Send((Optr)PSend22481, SMB_not, 0);
    Array PThreadedCode22480 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22481, (Optr)&t_send0, (Optr)PSend22482, (Optr)&t_block_return);
    Block PBlock22479 = new_Block_with(empty_Array, empty_Array, PThreadedCode22480, 1, PSend22482);
    // and:. 
    Send PSend22483 = new_Send((Optr)PSend22478, SMB_and_, 1, (Optr)PBlock22479);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22487 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22488 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22489 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22490 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22489);
    Array PThreadedCode22486 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22487, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22488, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22489, (Optr)&t_send1, (Optr)PSend22490, (Optr)&t_block_return);
    Block PBlock22485 = new_Block_with(empty_Array, empty_Array, PThreadedCode22486, 3, PSend22487, PAssign22488, PSend22490);
    // ifTrue:. 
    Send PSend22484 = new_Send((Optr)PSend22483, SMB_ifTrue_, 1, (Optr)PBlock22485);
    Array PThreadedCode22469 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22470, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22471, (Optr)&t_send1, (Optr)PSend22475, (Optr)&t_send1, (Optr)PSend22476, (Optr)&t_send1, (Optr)PSend22477, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22478, (Optr)&t_push_closure, (Optr)PBlock22479, (Optr)&t_send1, (Optr)PSend22483, (Optr)&t_send_ifTrue_, (Optr)PSend22484, (Optr)PBlock22485, (Optr)&t_block_return);
    Block PBlock22468 = new_Block_with(empty_Array, empty_Array, PThreadedCode22469, 2, PSend22477, PSend22484);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22491 = new_Send((Optr)PBlock22450, SMB_ensure_, 1, (Optr)PBlock22468);
    Array PThreadedCode22449 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22450, (Optr)&t_push_closure, (Optr)PBlock22468, (Optr)&t_send1, (Optr)PSend22491, (Optr)&t_block_return);
    Block PBlock22448 = new_Block_with(empty_Array, empty_Array, PThreadedCode22449, 1, PSend22491);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22493 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22495 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22494 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22495, (Optr)&t_method_return);
    Block PBlock22492 = new_Block_with(PArray22493, empty_Array, PThreadedCode22494, 1, PSend22495);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22496 = new_Send((Optr)PBlock22448, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22492);
    Array PThreadedCode22447 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22448, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22492, (Optr)&t_send2, (Optr)PSend22496, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22445 = new_Block_with(PArray22446, empty_Array, PThreadedCode22447, 2, PSend22496, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22497 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22445);
    Array PThreadedCode22444 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22445, (Optr)&t_send1, (Optr)PSend22497, (Optr)&t_method_return);
    Method PMethod22442 = new_Method_with(empty_Array, PArray22443, empty_Array, PThreadedCode22444, 1, PSend22497);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22442, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22500 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22501 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22504 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22503 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22504, (Optr)&t_block_return);
    Block PBlock22502 = new_Block_with(empty_Array, empty_Array, PThreadedCode22503, 1, PSend22504);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22505 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22502);
    Array PThreadedCode22499 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22500, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22501, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22502, (Optr)&t_send1, (Optr)PSend22505, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22499, 4, PSend22500, PSend22501, PSend22505, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22498, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22507 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22509 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22508 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22509, (Optr)&t_method_return);
    Method PMethod22506 = new_Method_with(PArray22507, empty_Array, empty_Array, PThreadedCode22508, 1, PSend22509);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22506, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22515 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22517 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22516 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22517, (Optr)&t_method_return);
    Block PBlock22514 = new_Block_with(PArray22515, empty_Array, PThreadedCode22516, 1, PSend22517);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22518 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22514);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22519 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22513 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22514, (Optr)&t_send1, (Optr)PSend22518, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22519, (Optr)&t_block_return);
    Block PBlock22512 = new_Block_with(empty_Array, empty_Array, PThreadedCode22513, 2, PSend22518, PSend22519);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22520 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22512);
    Array PThreadedCode22511 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22512, (Optr)&t_send1, (Optr)PSend22520, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22510 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22511, 2, PSend22520, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22510, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22523 = new_String(L"GET");
    String string_22524 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22523_Const = new_Constant((Optr)string_22523);
    Constant string_22524_Const = new_Constant((Optr)string_22524);
    // with:with:. 
    Send PSend22525 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22523_Const, (Optr)string_22524_Const);
    Array PThreadedCode22522 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22523, (Optr)&t_push1, (Optr)string_22524, (Optr)&t_send2, (Optr)PSend22525, (Optr)&t_method_return);
    Method PMethod22521 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22522, 1, PSend22525);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22521, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22527 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22526 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22527, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22526, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22529 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22530 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22532 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22533 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22538 = new_String(L"*");
    Array PThreadedCode22537 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22538, (Optr)&t_block_return);
    Constant string_22538_Const = new_Constant((Optr)string_22538);
    Block PBlock22536 = new_Block_with(empty_Array, empty_Array, PThreadedCode22537, 1, string_22538_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22541 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22540 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22541, (Optr)&t_block_return);
    Block PBlock22539 = new_Block_with(empty_Array, empty_Array, PThreadedCode22540, 1, PSend22541);
    // ifNil:ifNotNil:. 
    Send PSend22535 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22536, (Optr)PBlock22539);
    Assign PAssign22534 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22535);
    String string_22542 = new_String(L"Listener starting (interface: ");
    Constant string_22542_Const = new_Constant((Optr)string_22542);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22543 = new_Send((Optr)string_22542_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22544 = new_String(L" port: ");
    Constant string_22544_Const = new_Constant((Optr)string_22544);
    // ,. 
    Send PSend22545 = new_Send((Optr)PSend22543, SMB__append_, 1, (Optr)string_22544_Const);
    // ,. 
    Send PSend22546 = new_Send((Optr)PSend22545, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22547 = new_String(L")");
    Constant string_22547_Const = new_Constant((Optr)string_22547);
    // ,. 
    Send PSend22548 = new_Send((Optr)PSend22546, SMB__append_, 1, (Optr)string_22547_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22549 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22548);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22551 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22550 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22551);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22554 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22553 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22554, (Optr)&t_block_return);
    Block PBlock22552 = new_Block_with(empty_Array, empty_Array, PThreadedCode22553, 1, PSend22554);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22557 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22556 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22557, (Optr)&t_block_return);
    Block PBlock22555 = new_Block_with(empty_Array, empty_Array, PThreadedCode22556, 1, PSend22557);
    // ifNil:ifNotNil:. 
    Send PSend22558 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22552, (Optr)PBlock22555);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22559 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22531 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22532, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22533, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22534, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22536, (Optr)&t_push_closure, (Optr)PBlock22539, (Optr)&t_send2, (Optr)PSend22535, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22542, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22543, (Optr)&t_push1, (Optr)string_22544, (Optr)&t_send1, (Optr)PSend22545, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22546, (Optr)&t_push1, (Optr)string_22547, (Optr)&t_send1, (Optr)PSend22548, (Optr)&t_send1, (Optr)PSend22549, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22550, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22551, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22552, (Optr)&t_push_closure, (Optr)PBlock22555, (Optr)&t_send2, (Optr)PSend22558, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22528 = new_Method_with(PArray22529, PArray22530, empty_Array, PThreadedCode22531, 8, PAssign22532, PAssign22533, PAssign22534, PSend22549, PAssign22550, PSend22558, PSend22559, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22528, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22561 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22561, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22560, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22563 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22565 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22566 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22565);
    Array PThreadedCode22564 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22565, (Optr)&t_send3, (Optr)PSend22566, (Optr)&t_method_return);
    Method PMethod22562 = new_Method_with(PArray22563, empty_Array, empty_Array, PThreadedCode22564, 1, PSend22566);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22562, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22571 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22570 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22571, (Optr)&t_block_return);
    Block PBlock22569 = new_Block_with(empty_Array, empty_Array, PThreadedCode22570, 1, PSend22571);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22572 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22569);
    Assign PAssign22573 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22568 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22569, (Optr)&t_send1, (Optr)PSend22572, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22573, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22567 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22568, 3, PSend22572, PAssign22573, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22567, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22575 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22577 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22577, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22574 = new_Method_with(PArray22575, empty_Array, empty_Array, PThreadedCode22576, 2, PAssign22577, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22574, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22580 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22581 = new_Send((Optr)PSend22580, SMB_not, 0);
    Array PThreadedCode22579 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22580, (Optr)&t_send0, (Optr)PSend22581, (Optr)&t_method_return);
    Method PMethod22578 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22579, 1, PSend22581);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22578, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22583 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22583, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22582, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22585 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22586 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22589 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22591 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22592 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22592_Const = new_Constant((Optr)string_22592);
    // =. 
    Send PSend22593 = new_Send((Optr)PSend22591, SMB__equals_, 1, (Optr)string_22592_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22597 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22598 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22598_Const = new_Constant((Optr)string_22598);
    // send200Response:contentType:. 
    Send PSend22599 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22597, (Optr)string_22598_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22600 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22599);
    Array PThreadedCode22596 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22597, (Optr)&t_push1, (Optr)string_22598, (Optr)&t_send2, (Optr)PSend22599, (Optr)&t_send1, (Optr)PSend22600, (Optr)&t_block_return);
    Block PBlock22595 = new_Block_with(empty_Array, empty_Array, PThreadedCode22596, 1, PSend22600);
    // ifTrue:. 
    Send PSend22594 = new_Send((Optr)PSend22593, SMB_ifTrue_, 1, (Optr)PBlock22595);
    Assign PAssign22601 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22603 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22602 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22603);
    String string_22604 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22604_Const = new_Constant((Optr)string_22604);
    // beginsWith:. 
    Send PSend22605 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22604_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22611 = new_String(L"/");
    Constant string_22611_Const = new_Constant((Optr)string_22611);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22610 = new_Send((Optr)string_22611_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22609 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22610);
    Array PThreadedCode22608 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22609, (Optr)&t_push1, (Optr)string_22611, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22610, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22607 = new_Block_with(empty_Array, empty_Array, PThreadedCode22608, 1, PAssign22609);
    // ifFalse:. 
    Send PSend22606 = new_Send((Optr)PSend22605, SMB_ifFalse_, 1, (Optr)PBlock22607);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22616 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22619 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22618 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22619, (Optr)&t_block_return);
    Block PBlock22617 = new_Block_with(empty_Array, empty_Array, PThreadedCode22618, 1, PSend22619);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22620 = new_Send((Optr)PSend22616, SMB_and_, 1, (Optr)PBlock22617);
    Array PThreadedCode22615 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22616, (Optr)&t_push_closure, (Optr)PBlock22617, (Optr)&t_send1, (Optr)PSend22620, (Optr)&t_block_return);
    Block PBlock22614 = new_Block_with(empty_Array, empty_Array, PThreadedCode22615, 1, PSend22620);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22626 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22625 = new_Block_with(empty_Array, empty_Array, PThreadedCode22626, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22624 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22625);
    Assign PAssign22623 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22624);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22629 = new_Character(L'/');
    Constant char_22629_Const = new_Constant((Optr)char_22629);
    // copyUpToLast:. 
    Send PSend22628 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22629_Const);
    Assign PAssign22627 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22628);
    Array PThreadedCode22622 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22623, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22625, (Optr)&t_send2, (Optr)PSend22624, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22627, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22629, (Optr)&t_send1, (Optr)PSend22628, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22621 = new_Block_with(empty_Array, empty_Array, PThreadedCode22622, 2, PAssign22623, PAssign22627);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22630 = new_Send((Optr)PBlock22614, SMB_whileTrue_, 1, (Optr)PBlock22621);
    String string_22635 = new_String(L"/");
    Constant string_22635_Const = new_Constant((Optr)string_22635);
    Array PThreadedCode22637 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22636 = new_Block_with(empty_Array, empty_Array, PThreadedCode22637, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22634 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_22635_Const, (Optr)PBlock22636);
    Assign PAssign22633 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22634);
    Array PThreadedCode22632 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22633, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_22635, (Optr)&t_push_closure, (Optr)PBlock22636, (Optr)&t_send2, (Optr)PSend22634, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22631 = new_Block_with(empty_Array, empty_Array, PThreadedCode22632, 1, PAssign22633);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22638 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22631);
    Array PThreadedCode22613 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22614, (Optr)&t_push_closure, (Optr)PBlock22621, (Optr)&t_send1, (Optr)PSend22630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22631, (Optr)&t_send1, (Optr)PSend22638, (Optr)&t_block_return);
    Block PBlock22612 = new_Block_with(empty_Array, empty_Array, PThreadedCode22613, 2, PSend22630, PSend22638);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22639 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22612);
    // method. 
    Send PSend22640 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22641 = new_String(L"OPTIONS");
    Constant string_22641_Const = new_Constant((Optr)string_22641);
    // =. 
    Send PSend22642 = new_Send((Optr)PSend22640, SMB__equals_, 1, (Optr)string_22641_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend22646 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22649 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode22648 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22649, (Optr)&t_block_return);
    Block PBlock22647 = new_Block_with(empty_Array, empty_Array, PThreadedCode22648, 1, PSend22649);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend22652 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode22651 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22652, (Optr)&t_block_return);
    Block PBlock22650 = new_Block_with(empty_Array, empty_Array, PThreadedCode22651, 1, PSend22652);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22653 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22647, (Optr)PBlock22650);
    // ,. 
    Send PSend22654 = new_Send((Optr)PSend22646, SMB__append_, 1, (Optr)PSend22653);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend22655 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend22654);
    Array PThreadedCode22645 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22646, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22647, (Optr)&t_push_closure, (Optr)PBlock22650, (Optr)&t_send2, (Optr)PSend22653, (Optr)&t_send1, (Optr)PSend22654, (Optr)&t_send1, (Optr)PSend22655, (Optr)&t_block_return);
    Block PBlock22644 = new_Block_with(empty_Array, empty_Array, PThreadedCode22645, 1, PSend22655);
    // ifTrue:. 
    Send PSend22643 = new_Send((Optr)PSend22642, SMB_ifTrue_, 1, (Optr)PBlock22644);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend22658 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend22659 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22658);
    Array PThreadedCode22657 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22658, (Optr)&t_send1, (Optr)PSend22659, (Optr)&t_block_return);
    Block PBlock22656 = new_Block_with(empty_Array, empty_Array, PThreadedCode22657, 1, PSend22659);
    // ifNil:. 
    Send PSend22660 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22656);
    // method. 
    Send PSend22661 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22662 = new_String(L"HEAD");
    Constant string_22662_Const = new_Constant((Optr)string_22662);
    // =. 
    Send PSend22663 = new_Send((Optr)PSend22661, SMB__equals_, 1, (Optr)string_22662_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend22666 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend22667 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend22668 = new_Send((Optr)PSend22666, SMB_includes_, 1, (Optr)PSend22667);
    Array PThreadedCode22665 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22666, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22667, (Optr)&t_send1, (Optr)PSend22668, (Optr)&t_block_return);
    Block PBlock22664 = new_Block_with(empty_Array, empty_Array, PThreadedCode22665, 1, PSend22668);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22669 = new_Send((Optr)PSend22663, SMB_or_, 1, (Optr)PBlock22664);
    // builtinHttpMethods. 
    Send PSend22673 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend22674 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend22675 = new_Send((Optr)PSend22673, SMB__append_, 1, (Optr)PSend22674);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend22676 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend22675);
    // escape:. 
    Send PSend22677 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22676);
    Array PThreadedCode22672 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22673, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22674, (Optr)&t_send1, (Optr)PSend22675, (Optr)&t_send1, (Optr)PSend22676, (Optr)&t_send1, (Optr)PSend22677, (Optr)&t_block_return);
    Block PBlock22671 = new_Block_with(empty_Array, empty_Array, PThreadedCode22672, 1, PSend22677);
    // ifFalse:. 
    Send PSend22670 = new_Send((Optr)PSend22669, SMB_ifFalse_, 1, (Optr)PBlock22671);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend22680 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend22681 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend22680, (Optr)VAR_request_0_0);
    Array PThreadedCode22679 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22680, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend22681, (Optr)&t_block_return);
    Block PBlock22678 = new_Block_with(empty_Array, empty_Array, PThreadedCode22679, 1, PSend22681);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22683 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22685 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22684 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22685, (Optr)&t_method_return);
    Block PBlock22682 = new_Block_with(PArray22683, empty_Array, PThreadedCode22684, 1, PSend22685);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22686 = new_Send((Optr)PBlock22678, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22682);
    Array PThreadedCode22590 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22591, (Optr)&t_push1, (Optr)string_22592, (Optr)&t_send1, (Optr)PSend22593, (Optr)&t_send_ifTrue_, (Optr)PSend22594, (Optr)PBlock22595, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22601, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22602, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22603, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22604, (Optr)&t_send1, (Optr)PSend22605, (Optr)&t_send_ifFalse_, (Optr)PSend22606, (Optr)PBlock22607, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22612, (Optr)&t_send1, (Optr)PSend22639, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22640, (Optr)&t_push1, (Optr)string_22641, (Optr)&t_send1, (Optr)PSend22642, (Optr)&t_send_ifTrue_, (Optr)PSend22643, (Optr)PBlock22644, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22656, (Optr)&t_send1, (Optr)PSend22660, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22661, (Optr)&t_push1, (Optr)string_22662, (Optr)&t_send1, (Optr)PSend22663, (Optr)&t_push_closure, (Optr)PBlock22664, (Optr)&t_send1, (Optr)PSend22669, (Optr)&t_send_ifFalse_, (Optr)PSend22670, (Optr)PBlock22671, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22678, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22682, (Optr)&t_send2, (Optr)PSend22686, (Optr)&t_method_return);
    Block PBlock22588 = new_Block_with(PArray22589, empty_Array, PThreadedCode22590, 9, PSend22594, PAssign22601, PAssign22602, PSend22606, PSend22639, PSend22643, PSend22660, PSend22670, PSend22686);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22687 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22588);
    Array PThreadedCode22587 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22588, (Optr)&t_send1, (Optr)PSend22687, (Optr)&t_method_return);
    Method PMethod22584 = new_Method_with(PArray22585, PArray22586, empty_Array, PThreadedCode22587, 1, PSend22687);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22584, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray22689 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend22691 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22690 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22691, (Optr)&t_method_return);
    Method PMethod22688 = new_Method_with(PArray22689, empty_Array, empty_Array, PThreadedCode22690, 1, PSend22691);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22688, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22693 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22697 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22696 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend22697, (Optr)&t_block_return);
    Block PBlock22695 = new_Block_with(empty_Array, empty_Array, PThreadedCode22696, 1, PSend22697);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22698 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22695);
    Array PThreadedCode22694 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22695, (Optr)&t_send1, (Optr)PSend22698, (Optr)&t_method_return);
    Method PMethod22692 = new_Method_with(PArray22693, empty_Array, empty_Array, PThreadedCode22694, 1, PSend22698);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod22692, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode22700 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22700, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22699, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray22702 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray22703 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_22711 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_22711_Const = new_Constant((Optr)string_22711);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22712 = new_String(L"<h1>Internal Server Error: ");
    Constant string_22712_Const = new_Constant((Optr)string_22712);
    // ,. 
    Send PSend22710 = new_Send((Optr)string_22711_Const, SMB__append_, 1, (Optr)string_22712_Const);
    // ,. 
    Send PSend22709 = new_Send((Optr)PSend22710, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_22713 = new_String(L"</h1><pre>");
    Constant string_22713_Const = new_Constant((Optr)string_22713);
    // ,. 
    Send PSend22708 = new_Send((Optr)PSend22709, SMB__append_, 1, (Optr)string_22713_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22715 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22716 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend22714 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend22715, (Optr)PSend22716);
    // ,. 
    Send PSend22707 = new_Send((Optr)PSend22708, SMB__append_, 1, (Optr)PSend22714);
    String string_22717 = new_String(L"</pre></body></html>");
    Constant string_22717_Const = new_Constant((Optr)string_22717);
    // ,. 
    Send PSend22706 = new_Send((Optr)PSend22707, SMB__append_, 1, (Optr)string_22717_Const);
    Assign PAssign22705 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend22706);
    SmallInt int_500 = new_SmallInt(500);
    String string_22718 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_22718_Const = new_Constant((Optr)string_22718);
    // sendResponseCode:content:type:close:. 
    Send PSend22719 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_22718_Const, (Optr)true_Const);
    Array PThreadedCode22704 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign22705, (Optr)&t_push1, (Optr)string_22711, (Optr)&t_push1, (Optr)string_22712, (Optr)&t_send1, (Optr)PSend22710, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend22709, (Optr)&t_push1, (Optr)string_22713, (Optr)&t_send1, (Optr)PSend22708, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22715, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22716, (Optr)&t_send2, (Optr)PSend22714, (Optr)&t_send1, (Optr)PSend22707, (Optr)&t_push1, (Optr)string_22717, (Optr)&t_send1, (Optr)PSend22706, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_22718, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend22719, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22701 = new_Method_with(PArray22702, PArray22703, empty_Array, PThreadedCode22704, 3, PAssign22705, PSend22719, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod22701, WebClient_Core_WebServer_Class);
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
    Send PSend22726 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend22725 = new_Send((Optr)PSend22726, SMB_serverString, 0);
    Assign PAssign22724 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend22725);
    Array PThreadedCode22723 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22724, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22726, (Optr)&t_send0, (Optr)PSend22725, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22722 = new_Block_with(empty_Array, empty_Array, PThreadedCode22723, 1, PAssign22724);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22727 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock22722);
    Array PThreadedCode22721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock22722, (Optr)&t_send1, (Optr)PSend22727, (Optr)&t_method_return);
    Method PMethod22720 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22721, 1, PSend22727);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22720, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22729 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22733 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22734 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend22733);
    Array PThreadedCode22732 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend22733, (Optr)&t_send1, (Optr)PSend22734, (Optr)&t_block_return);
    Block PBlock22731 = new_Block_with(empty_Array, empty_Array, PThreadedCode22732, 1, PSend22734);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22735 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock22731);
    Array PThreadedCode22730 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock22731, (Optr)&t_send1, (Optr)PSend22735, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22728 = new_Method_with(PArray22729, empty_Array, empty_Array, PThreadedCode22730, 2, PSend22735, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod22728, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22739 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend22741 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22742 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode22740 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22741, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22742, (Optr)&t_method_return);
    Block PBlock22738 = new_Block_with(PArray22739, empty_Array, PThreadedCode22740, 2, PSend22741, PSend22742);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22743 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22744 = new_Send((Optr)PBlock22738, SMB_value_, 1, (Optr)PSend22743);
    Array PThreadedCode22737 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22738, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend22743, (Optr)&t_send1, (Optr)PSend22744, (Optr)&t_method_return);
    Method PMethod22736 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22737, 1, PSend22744);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod22736, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22746 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22748 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22747 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22748, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22745 = new_Method_with(PArray22746, empty_Array, empty_Array, PThreadedCode22747, 2, PAssign22748, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22745, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode22750 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22749 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22750, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22749, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode22752 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22751 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22752, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22751, WebClient_Core_WebServer_Class);
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
    Send PSend22755 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22756 = new_Send((Optr)PSend22755, SMB_serverDate, 0);
    Array PThreadedCode22754 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22755, (Optr)&t_send0, (Optr)PSend22756, (Optr)&t_method_return);
    Method PMethod22753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22754, 1, PSend22756);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22753, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray22758 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend22760 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend22761 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend22760);
    Array PThreadedCode22759 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22760, (Optr)&t_send2, (Optr)PSend22761, (Optr)&t_method_return);
    Method PMethod22757 = new_Method_with(PArray22758, empty_Array, empty_Array, PThreadedCode22759, 1, PSend22761);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod22757, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray22763 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22765 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22766 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend22765);
    Array PThreadedCode22764 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend22765, (Optr)&t_send1, (Optr)PSend22766, (Optr)&t_method_return);
    Method PMethod22762 = new_Method_with(PArray22763, empty_Array, empty_Array, PThreadedCode22764, 1, PSend22766);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod22762, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray22768 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22771 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_22773 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_22773_Const = new_Constant((Optr)string_22773);
    // nextPutAll:. 
    Send PSend22774 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_22773_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22775 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode22772 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_22773, (Optr)&t_send1, (Optr)PSend22774, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22775, (Optr)&t_method_return);
    Block PBlock22770 = new_Block_with(PArray22771, empty_Array, PThreadedCode22772, 2, PSend22774, PSend22775);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22776 = new_Send((Optr)PBlock22770, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode22769 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22770, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend22776, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22767 = new_Method_with(PArray22768, empty_Array, empty_Array, PThreadedCode22769, 2, PSend22776, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod22767, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray22778 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22780 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22779 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22780, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22777 = new_Method_with(PArray22778, empty_Array, empty_Array, PThreadedCode22779, 2, PAssign22780, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22777, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22782 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode22787 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22786 = new_Block_with(empty_Array, empty_Array, PThreadedCode22787, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend22788 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22786);
    Array PThreadedCode22785 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22786, (Optr)&t_send2, (Optr)PSend22788, (Optr)&t_block_return);
    Block PBlock22784 = new_Block_with(empty_Array, empty_Array, PThreadedCode22785, 1, PSend22788);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22789 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22784);
    Array PThreadedCode22783 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22784, (Optr)&t_send1, (Optr)PSend22789, (Optr)&t_method_return);
    Method PMethod22781 = new_Method_with(PArray22782, empty_Array, empty_Array, PThreadedCode22783, 1, PSend22789);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod22781, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22791 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22793 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22792 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22793, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22790 = new_Method_with(PArray22791, empty_Array, empty_Array, PThreadedCode22792, 2, PAssign22793, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22790, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray22795 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22799 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22800 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22801 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend22799, (Optr)PSend22800);
    Array PThreadedCode22798 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22799, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend22800, (Optr)&t_send2, (Optr)PSend22801, (Optr)&t_block_return);
    Block PBlock22797 = new_Block_with(empty_Array, empty_Array, PThreadedCode22798, 1, PSend22801);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22802 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22797);
    Array PThreadedCode22796 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22797, (Optr)&t_send1, (Optr)PSend22802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22794 = new_Method_with(PArray22795, empty_Array, empty_Array, PThreadedCode22796, 2, PSend22802, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod22794, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray22804 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22808 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode22810 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22809 = new_Block_with(empty_Array, empty_Array, PThreadedCode22810, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend22811 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend22808, (Optr)PBlock22809);
    Array PThreadedCode22807 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22808, (Optr)&t_push_closure, (Optr)PBlock22809, (Optr)&t_send2, (Optr)PSend22811, (Optr)&t_block_return);
    Block PBlock22806 = new_Block_with(empty_Array, empty_Array, PThreadedCode22807, 1, PSend22811);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22812 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22806);
    Array PThreadedCode22805 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22806, (Optr)&t_send1, (Optr)PSend22812, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22803 = new_Method_with(PArray22804, empty_Array, empty_Array, PThreadedCode22805, 2, PSend22812, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod22803, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_22815 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode22814 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22815, (Optr)&t_method_return);
    Constant string_22815_Const = new_Constant((Optr)string_22815);
    Method PMethod22813 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22814, 1, string_22815_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod22813, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22820 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign22821 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode22819 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend22820, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22821, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22818 = new_Block_with(empty_Array, empty_Array, PThreadedCode22819, 2, PSend22820, PAssign22821);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22822 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock22818);
    Array PThreadedCode22817 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22818, (Optr)&t_send1, (Optr)PSend22822, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22817, 2, PSend22822, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod22816, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray22824 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray22827 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend22831 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend22830 = new_Send((Optr)PSend22831, SMB_asUTC, 0);
    Assign PAssign22829 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend22830);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend22832 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_22833 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22833_Const = new_Constant((Optr)string_22833);
    // ,. 
    Send PSend22834 = new_Send((Optr)PSend22832, SMB__append_, 1, (Optr)string_22833_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22835 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend22834);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend22836 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22838 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend22840 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend22841 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend22842 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend22843 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend22844 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend22845 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend22846 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22847 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode22839 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22840, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22841, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend22842, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend22843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22845, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22846, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22847, (Optr)&t_method_return);
    Block PBlock22837 = new_Block_with(PArray22838, empty_Array, PThreadedCode22839, 8, PSend22840, PSend22841, PSend22842, PSend22843, PSend22844, PSend22845, PSend22846, PSend22847);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22848 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22849 = new_Send((Optr)PBlock22837, SMB_value_, 1, (Optr)PSend22848);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22850 = new_Send((Optr)PSend22849, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend22851 = new_Send((Optr)PSend22836, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend22850);
    Array PArray22853 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend22855 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend22856 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend22857 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend22856);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend22858 = new_Send((Optr)PSend22857, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend22859 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend22858);
    Array PThreadedCode22854 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22855, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22856, (Optr)&t_send1, (Optr)PSend22857, (Optr)&t_send0, (Optr)PSend22858, (Optr)&t_send1, (Optr)PSend22859, (Optr)&t_method_return);
    Block PBlock22852 = new_Block_with(PArray22853, empty_Array, PThreadedCode22854, 2, PSend22855, PSend22859);
    // value:. 
    Send PSend22860 = new_Send((Optr)PBlock22852, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_22861 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_22861_Const = new_Constant((Optr)string_22861);
    // writeAll:. 
    Send PSend22862 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_22861_Const);
    Array PThreadedCode22828 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign22829, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend22831, (Optr)&t_send0, (Optr)PSend22830, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22832, (Optr)&t_push1, (Optr)string_22833, (Optr)&t_send1, (Optr)PSend22834, (Optr)&t_send1, (Optr)PSend22835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22836, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock22837, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22848, (Optr)&t_send1, (Optr)PSend22849, (Optr)&t_send0, (Optr)PSend22850, (Optr)&t_send2, (Optr)PSend22851, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22852, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend22860, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_22861, (Optr)&t_send1, (Optr)PSend22862, (Optr)&t_method_return);
    Block PBlock22826 = new_Block_with(PArray22827, empty_Array, PThreadedCode22828, 5, PAssign22829, PSend22835, PSend22851, PSend22860, PSend22862);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend22863 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock22826);
    Array PThreadedCode22825 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock22826, (Optr)&t_send1, (Optr)PSend22863, (Optr)&t_method_return);
    Method PMethod22823 = new_Method_with(empty_Array, PArray22824, empty_Array, PThreadedCode22825, 1, PSend22863);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22823, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_22866 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode22865 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22866, (Optr)&t_method_return);
    Constant string_22866_Const = new_Constant((Optr)string_22866);
    Method PMethod22864 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22865, 1, string_22866_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod22864, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_22869 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode22868 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22869, (Optr)&t_method_return);
    Constant string_22869_Const = new_Constant((Optr)string_22869);
    Method PMethod22867 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22868, 1, string_22869_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22867, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22875 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign22874 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend22875);
    Array PThreadedCode22873 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22874, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22875, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22872 = new_Block_with(empty_Array, empty_Array, PThreadedCode22873, 1, PAssign22874);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22876 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock22872);
    Array PThreadedCode22871 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22872, (Optr)&t_send1, (Optr)PSend22876, (Optr)&t_method_return);
    Method PMethod22870 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22871, 1, PSend22876);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod22870, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray22878 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22881 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22880 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend22881);
    // new. 
    Send PSend22883 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22882 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend22883);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend22884 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend22885 = new_Send((Optr)PSend22884, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend22886 = new_Send((Optr)PSend22885, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend22887 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_22888 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray22890 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend22892 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_22893 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22893_Const = new_Constant((Optr)string_22893);
    // send200Response:contentType:. 
    Send PSend22894 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend22892, (Optr)string_22893_Const);
    Array PThreadedCode22891 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22892, (Optr)&t_push1, (Optr)string_22893, (Optr)&t_send2, (Optr)PSend22894, (Optr)&t_method_return);
    Block PBlock22889 = new_Block_with(PArray22890, empty_Array, PThreadedCode22891, 1, PSend22894);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_22888_Const = new_Constant((Optr)string_22888);
    // addService:action:. 
    Send PSend22895 = new_Send((Optr)PSend22887, SMB_addService_action_, 2, (Optr)string_22888_Const, (Optr)PBlock22889);
    Array PThreadedCode22879 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22880, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22881, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22882, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22883, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22884, (Optr)&t_send0, (Optr)PSend22885, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend22886, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22887, (Optr)&t_push1, (Optr)string_22888, (Optr)&t_push_closure, (Optr)PBlock22889, (Optr)&t_send2, (Optr)PSend22895, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22877 = new_Method_with(empty_Array, PArray22878, empty_Array, PThreadedCode22879, 5, PAssign22880, PAssign22882, PSend22886, PSend22895, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod22877, HEADER(WebClient_Core_WebServer_Class));
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