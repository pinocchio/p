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
    Array PArray22222 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22223 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22233 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22232 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22233, (Optr)&t_block_return);
    Block PBlock22231 = new_Block_with(empty_Array, empty_Array, PThreadedCode22232, 1, PSend22233);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22235 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22237 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22236 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22237, (Optr)&t_method_return);
    Block PBlock22234 = new_Block_with(PArray22235, empty_Array, PThreadedCode22236, 1, PSend22237);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22238 = new_Send((Optr)PBlock22231, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22234);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22241 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22243 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22242 = new_Block_with(empty_Array, empty_Array, PThreadedCode22243, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22244 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22241, (Optr)PBlock22242);
    Array PThreadedCode22240 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22241, (Optr)&t_push_closure, (Optr)PBlock22242, (Optr)&t_send2, (Optr)PSend22244, (Optr)&t_block_return);
    Block PBlock22239 = new_Block_with(empty_Array, empty_Array, PThreadedCode22240, 1, PSend22244);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22245 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22239);
    Array PThreadedCode22230 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22231, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22234, (Optr)&t_send2, (Optr)PSend22238, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22239, (Optr)&t_send1, (Optr)PSend22245, (Optr)&t_block_return);
    Block PBlock22229 = new_Block_with(empty_Array, empty_Array, PThreadedCode22230, 2, PSend22238, PSend22245);
    // destroy. 
    Send PSend22248 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22247 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22248, (Optr)&t_block_return);
    Block PBlock22246 = new_Block_with(empty_Array, empty_Array, PThreadedCode22247, 1, PSend22248);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22249 = new_Send((Optr)PBlock22229, SMB_ensure_, 1, (Optr)PBlock22246);
    Array PThreadedCode22228 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22229, (Optr)&t_push_closure, (Optr)PBlock22246, (Optr)&t_send1, (Optr)PSend22249, (Optr)&t_block_return);
    Block PBlock22227 = new_Block_with(empty_Array, empty_Array, PThreadedCode22228, 1, PSend22249);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22226 = new_Send((Optr)PBlock22227, SMB_fork, 0);
    Assign PAssign22225 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22226);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22252 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22251 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22252, (Optr)&t_block_return);
    Block PBlock22250 = new_Block_with(empty_Array, empty_Array, PThreadedCode22251, 1, PSend22252);
    // critical:. 
    Send PSend22253 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22250);
    Array PThreadedCode22224 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22225, (Optr)&t_push_closure, (Optr)PBlock22227, (Optr)&t_send0, (Optr)PSend22226, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22250, (Optr)&t_send1, (Optr)PSend22253, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22221 = new_Method_with(PArray22222, PArray22223, empty_Array, PThreadedCode22224, 3, PAssign22225, PSend22253, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22221, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22255 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22260 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22259 = new_Block_with(empty_Array, empty_Array, PThreadedCode22260, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22261 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22259);
    Array PThreadedCode22258 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22259, (Optr)&t_send2, (Optr)PSend22261, (Optr)&t_block_return);
    Block PBlock22257 = new_Block_with(empty_Array, empty_Array, PThreadedCode22258, 1, PSend22261);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22262 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22257);
    Array PThreadedCode22256 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22257, (Optr)&t_send1, (Optr)PSend22262, (Optr)&t_method_return);
    Method PMethod22254 = new_Method_with(PArray22255, empty_Array, empty_Array, PThreadedCode22256, 1, PSend22262);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22254, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22264 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22264, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22263, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22267 = new_String(L"HEAD");
    String string_22268 = new_String(L"TRACE");
    String string_22269 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22267_Const = new_Constant((Optr)string_22267);
    Constant string_22268_Const = new_Constant((Optr)string_22268);
    Constant string_22269_Const = new_Constant((Optr)string_22269);
    // with:with:with:. 
    Send PSend22270 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22267_Const, (Optr)string_22268_Const, (Optr)string_22269_Const);
    Array PThreadedCode22266 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22267, (Optr)&t_push1, (Optr)string_22268, (Optr)&t_push1, (Optr)string_22269, (Optr)&t_send3, (Optr)PSend22270, (Optr)&t_method_return);
    Method PMethod22265 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22266, 1, PSend22270);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22265, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22272 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22275 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22279 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22278 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22279, (Optr)&t_block_return);
    Block PBlock22277 = new_Block_with(empty_Array, empty_Array, PThreadedCode22278, 1, PSend22279);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22280 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22277);
    Array PThreadedCode22276 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22277, (Optr)&t_send1, (Optr)PSend22280, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22274 = new_Block_with(PArray22275, empty_Array, PThreadedCode22276, 2, PSend22280, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22281 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22274);
    Array PThreadedCode22273 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22274, (Optr)&t_send1, (Optr)PSend22281, (Optr)&t_method_return);
    Method PMethod22271 = new_Method_with(PArray22272, empty_Array, empty_Array, PThreadedCode22273, 1, PSend22281);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22271, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22283 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22285 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22284 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22285, (Optr)&t_method_return);
    Method PMethod22282 = new_Method_with(PArray22283, empty_Array, empty_Array, PThreadedCode22284, 1, PSend22285);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22282, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22287 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22286 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22287, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22286, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22289 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22290 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22294 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22294_Const = new_Constant((Optr)string_22294);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22295 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22295_Const = new_Constant((Optr)string_22295);
    // ,. 
    Send PSend22293 = new_Send((Optr)string_22294_Const, SMB__append_, 1, (Optr)string_22295_Const);
    Assign PAssign22292 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22293);
    String string_22298 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22299 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22298_Const = new_Constant((Optr)string_22298);
    // ,. 
    Send PSend22300 = new_Send((Optr)string_22298_Const, SMB__append_, 1, (Optr)PSend22299);
    String string_22301 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22301_Const = new_Constant((Optr)string_22301);
    // ,. 
    Send PSend22302 = new_Send((Optr)PSend22300, SMB__append_, 1, (Optr)string_22301_Const);
    // crlf. 
    Send PSend22303 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22304 = new_Send((Optr)PSend22302, SMB__append_, 1, (Optr)PSend22303);
    String string_22305 = new_String(L"Connection: close");
    Constant string_22305_Const = new_Constant((Optr)string_22305);
    // ,. 
    Send PSend22306 = new_Send((Optr)PSend22304, SMB__append_, 1, (Optr)string_22305_Const);
    // crlf. 
    Send PSend22307 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22308 = new_Send((Optr)PSend22306, SMB__append_, 1, (Optr)PSend22307);
    String string_22309 = new_String(L"Content-Length: ");
    Constant string_22309_Const = new_Constant((Optr)string_22309);
    // ,. 
    Send PSend22310 = new_Send((Optr)PSend22308, SMB__append_, 1, (Optr)string_22309_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22311 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22312 = new_Send((Optr)PSend22311, SMB_asString, 0);
    // ,. 
    Send PSend22313 = new_Send((Optr)PSend22310, SMB__append_, 1, (Optr)PSend22312);
    // crlf. 
    Send PSend22314 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22315 = new_Send((Optr)PSend22313, SMB__append_, 1, (Optr)PSend22314);
    // crlf. 
    Send PSend22316 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22317 = new_Send((Optr)PSend22315, SMB__append_, 1, (Optr)PSend22316);
    // ,. 
    Send PSend22318 = new_Send((Optr)PSend22317, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22319 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22318);
    Array PThreadedCode22297 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22298, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22299, (Optr)&t_send1, (Optr)PSend22300, (Optr)&t_push1, (Optr)string_22301, (Optr)&t_send1, (Optr)PSend22302, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22303, (Optr)&t_send1, (Optr)PSend22304, (Optr)&t_push1, (Optr)string_22305, (Optr)&t_send1, (Optr)PSend22306, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22307, (Optr)&t_send1, (Optr)PSend22308, (Optr)&t_push1, (Optr)string_22309, (Optr)&t_send1, (Optr)PSend22310, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22311, (Optr)&t_send0, (Optr)PSend22312, (Optr)&t_send1, (Optr)PSend22313, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22314, (Optr)&t_send1, (Optr)PSend22315, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22316, (Optr)&t_send1, (Optr)PSend22317, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22318, (Optr)&t_send1, (Optr)PSend22319, (Optr)&t_block_return);
    Block PBlock22296 = new_Block_with(empty_Array, empty_Array, PThreadedCode22297, 1, PSend22319);
    Array PThreadedCode22321 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22320 = new_Block_with(empty_Array, empty_Array, PThreadedCode22321, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22322 = new_Send((Optr)PBlock22296, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22320);
    Array PThreadedCode22291 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22292, (Optr)&t_push1, (Optr)string_22294, (Optr)&t_push1, (Optr)string_22295, (Optr)&t_send1, (Optr)PSend22293, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22296, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22320, (Optr)&t_send2, (Optr)PSend22322, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22288 = new_Method_with(PArray22289, PArray22290, empty_Array, PThreadedCode22291, 3, PAssign22292, PSend22322, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22288, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22324 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22326 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22325 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22326, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22323 = new_Method_with(PArray22324, empty_Array, empty_Array, PThreadedCode22325, 1, PAssign22326);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22323, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22328 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22328, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22327, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22331 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22336 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22335 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22336, (Optr)&t_block_return);
    Block PBlock22334 = new_Block_with(empty_Array, empty_Array, PThreadedCode22335, 1, PSend22336);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22333 = new_Send((Optr)PBlock22334, SMB_fork, 0);
    Assign PAssign22332 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22333);
    Array PThreadedCode22330 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22331, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22332, (Optr)&t_push_closure, (Optr)PBlock22334, (Optr)&t_send0, (Optr)PSend22333, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22330, 3, PSend22331, PAssign22332, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22329, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22340 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22339 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22340);
    // new. 
    Send PSend22342 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22341 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22342);
    // new. 
    Send PSend22344 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22343 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22344);
    // new. 
    Send PSend22346 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22345 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22346);
    // new. 
    Send PSend22348 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22347 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22348);
    // new. 
    Send PSend22350 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22349 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22350);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22352 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22355 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22357 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22358 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22356 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22357, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22358, (Optr)&t_method_return);
    Block PBlock22354 = new_Block_with(PArray22355, empty_Array, PThreadedCode22356, 2, PSend22357, PSend22358);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22359 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22360 = new_Send((Optr)PBlock22354, SMB_value_, 1, (Optr)PSend22359);
    Array PThreadedCode22353 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22354, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22359, (Optr)&t_send1, (Optr)PSend22360, (Optr)&t_method_return);
    Block PBlock22351 = new_Block_with(PArray22352, empty_Array, PThreadedCode22353, 1, PSend22360);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22361 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22351);
    Array PThreadedCode22338 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22339, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22341, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22342, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22343, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22344, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22345, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22346, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22347, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22348, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22349, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22350, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22351, (Optr)&t_send1, (Optr)PSend22361, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22337 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22338, 8, PAssign22339, PAssign22341, PAssign22343, PAssign22345, PAssign22347, PAssign22349, PSend22361, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22337, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22363 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22365 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22365, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22362 = new_Method_with(PArray22363, empty_Array, empty_Array, PThreadedCode22364, 2, PAssign22365, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22362, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22367 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22368 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22371 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22378 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22377 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22378);
    Array PThreadedCode22376 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22377, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22378, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22375 = new_Block_with(empty_Array, empty_Array, PThreadedCode22376, 1, PAssign22377);
    String string_22381 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22381_Const = new_Constant((Optr)string_22381);
    // error:. 
    Send PSend22382 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22381_Const);
    Array PThreadedCode22380 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22381, (Optr)&t_send1, (Optr)PSend22382, (Optr)&t_block_return);
    Block PBlock22379 = new_Block_with(empty_Array, empty_Array, PThreadedCode22380, 1, PSend22382);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22383 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22375, (Optr)PBlock22379);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22386 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22385 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22386, (Optr)&t_block_return);
    Block PBlock22384 = new_Block_with(empty_Array, empty_Array, PThreadedCode22385, 1, PSend22386);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22389 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22392 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22393 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22392);
    Array PThreadedCode22391 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22392, (Optr)&t_send1, (Optr)PSend22393, (Optr)&t_block_return);
    Block PBlock22390 = new_Block_with(empty_Array, empty_Array, PThreadedCode22391, 1, PSend22393);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22394 = new_Send((Optr)PSend22389, SMB_ifNil_, 1, (Optr)PBlock22390);
    String string_22395 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22395_Const = new_Constant((Optr)string_22395);
    // warn:. 
    Send PSend22396 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22395_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22398 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22397 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22398);
    String string_22399 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22399_Const = new_Constant((Optr)string_22399);
    // warn:. 
    Send PSend22400 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22399_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22403 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22402 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22403, (Optr)&t_block_return);
    Block PBlock22401 = new_Block_with(empty_Array, empty_Array, PThreadedCode22402, 1, PSend22403);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22405 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22407 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22408 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22407);
    Array PThreadedCode22406 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22407, (Optr)&t_send1, (Optr)PSend22408, (Optr)&t_method_return);
    Block PBlock22404 = new_Block_with(PArray22405, empty_Array, PThreadedCode22406, 1, PSend22408);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22409 = new_Send((Optr)PBlock22401, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22404);
    String string_22410 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22410_Const = new_Constant((Optr)string_22410);
    // warn:. 
    Send PSend22411 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22410_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22412 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22388 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22389, (Optr)&t_push_closure, (Optr)PBlock22390, (Optr)&t_send1, (Optr)PSend22394, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22395, (Optr)&t_send1, (Optr)PSend22396, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22397, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22398, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22399, (Optr)&t_send1, (Optr)PSend22400, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22401, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22404, (Optr)&t_send2, (Optr)PSend22409, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22410, (Optr)&t_send1, (Optr)PSend22411, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22412, (Optr)&t_block_return);
    Block PBlock22387 = new_Block_with(empty_Array, empty_Array, PThreadedCode22388, 7, PSend22394, PSend22396, PAssign22397, PSend22400, PSend22409, PSend22411, PSend22412);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22413 = new_Send((Optr)PBlock22384, SMB_whileTrue_, 1, (Optr)PBlock22387);
    Array PThreadedCode22374 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22375, (Optr)&t_push_closure, (Optr)PBlock22379, (Optr)&t_send2, (Optr)PSend22383, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22384, (Optr)&t_push_closure, (Optr)PBlock22387, (Optr)&t_send1, (Optr)PSend22413, (Optr)&t_block_return);
    Block PBlock22373 = new_Block_with(empty_Array, empty_Array, PThreadedCode22374, 2, PSend22383, PSend22413);
    Array PArray22415 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22417 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22416 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22417, (Optr)&t_method_return);
    Block PBlock22414 = new_Block_with(PArray22415, empty_Array, PThreadedCode22416, 1, PSend22417);
    // on:do:. 
    Send PSend22418 = new_Send((Optr)PBlock22373, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22414);
    Array PThreadedCode22372 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22373, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22414, (Optr)&t_send2, (Optr)PSend22418, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22370 = new_Block_with(PArray22371, empty_Array, PThreadedCode22372, 2, PSend22418, self);
    // on:. 
    Send PSend22419 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22370);
    Array PThreadedCode22369 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22370, (Optr)&t_send1, (Optr)PSend22419, (Optr)&t_method_return);
    Method PMethod22366 = new_Method_with(PArray22367, PArray22368, empty_Array, PThreadedCode22369, 1, PSend22419);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22366, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22421 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22421, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22420, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22423 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22423, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22422, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22425 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22427 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22426 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22427, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22424 = new_Method_with(PArray22425, empty_Array, empty_Array, PThreadedCode22426, 2, PAssign22427, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22424, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22430 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22429 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22430, (Optr)&t_method_return);
    Method PMethod22428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22429, 1, PSend22430);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22428, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22432 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22435 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22443 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22446 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22445 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22446, (Optr)&t_block_return);
    Block PBlock22444 = new_Block_with(empty_Array, empty_Array, PThreadedCode22445, 1, PSend22446);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22447 = new_Send((Optr)PSend22443, SMB_and_, 1, (Optr)PBlock22444);
    Array PThreadedCode22442 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22443, (Optr)&t_push_closure, (Optr)PBlock22444, (Optr)&t_send1, (Optr)PSend22447, (Optr)&t_block_return);
    Block PBlock22441 = new_Block_with(empty_Array, empty_Array, PThreadedCode22442, 1, PSend22447);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22451 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22450 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22451);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22454 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22453 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22454, (Optr)&t_block_return);
    Block PBlock22452 = new_Block_with(empty_Array, empty_Array, PThreadedCode22453, 1, PSend22454);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22455 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22452);
    Array PThreadedCode22449 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22450, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22452, (Optr)&t_send1, (Optr)PSend22455, (Optr)&t_block_return);
    Block PBlock22448 = new_Block_with(empty_Array, empty_Array, PThreadedCode22449, 2, PAssign22450, PSend22455);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22456 = new_Send((Optr)PBlock22441, SMB_whileTrue_, 1, (Optr)PBlock22448);
    Array PThreadedCode22440 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22441, (Optr)&t_push_closure, (Optr)PBlock22448, (Optr)&t_send1, (Optr)PSend22456, (Optr)&t_block_return);
    Block PBlock22439 = new_Block_with(empty_Array, empty_Array, PThreadedCode22440, 1, PSend22456);
    String string_22459 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22461 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22463 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22462 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22463, (Optr)&t_method_return);
    Block PBlock22460 = new_Block_with(PArray22461, empty_Array, PThreadedCode22462, 1, PSend22463);
    // ifNotNil:. 
    Send PSend22464 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22460);
    Constant string_22459_Const = new_Constant((Optr)string_22459);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22465 = new_Send((Optr)string_22459_Const, SMB__append_, 1, (Optr)PSend22464);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22466 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22465);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22467 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22470 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22471 = new_Send((Optr)PSend22470, SMB_not, 0);
    Array PThreadedCode22469 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22470, (Optr)&t_send0, (Optr)PSend22471, (Optr)&t_block_return);
    Block PBlock22468 = new_Block_with(empty_Array, empty_Array, PThreadedCode22469, 1, PSend22471);
    // and:. 
    Send PSend22472 = new_Send((Optr)PSend22467, SMB_and_, 1, (Optr)PBlock22468);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22476 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22477 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22478 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22479 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22478);
    Array PThreadedCode22475 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22476, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22477, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22478, (Optr)&t_send1, (Optr)PSend22479, (Optr)&t_block_return);
    Block PBlock22474 = new_Block_with(empty_Array, empty_Array, PThreadedCode22475, 3, PSend22476, PAssign22477, PSend22479);
    // ifTrue:. 
    Send PSend22473 = new_Send((Optr)PSend22472, SMB_ifTrue_, 1, (Optr)PBlock22474);
    Array PThreadedCode22458 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22459, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22460, (Optr)&t_send1, (Optr)PSend22464, (Optr)&t_send1, (Optr)PSend22465, (Optr)&t_send1, (Optr)PSend22466, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22467, (Optr)&t_push_closure, (Optr)PBlock22468, (Optr)&t_send1, (Optr)PSend22472, (Optr)&t_send_ifTrue_, (Optr)PSend22473, (Optr)PBlock22474, (Optr)&t_block_return);
    Block PBlock22457 = new_Block_with(empty_Array, empty_Array, PThreadedCode22458, 2, PSend22466, PSend22473);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22480 = new_Send((Optr)PBlock22439, SMB_ensure_, 1, (Optr)PBlock22457);
    Array PThreadedCode22438 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22439, (Optr)&t_push_closure, (Optr)PBlock22457, (Optr)&t_send1, (Optr)PSend22480, (Optr)&t_block_return);
    Block PBlock22437 = new_Block_with(empty_Array, empty_Array, PThreadedCode22438, 1, PSend22480);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22482 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22484 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22483 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22484, (Optr)&t_method_return);
    Block PBlock22481 = new_Block_with(PArray22482, empty_Array, PThreadedCode22483, 1, PSend22484);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22485 = new_Send((Optr)PBlock22437, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22481);
    Array PThreadedCode22436 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22437, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22481, (Optr)&t_send2, (Optr)PSend22485, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22434 = new_Block_with(PArray22435, empty_Array, PThreadedCode22436, 2, PSend22485, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22486 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22434);
    Array PThreadedCode22433 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22434, (Optr)&t_send1, (Optr)PSend22486, (Optr)&t_method_return);
    Method PMethod22431 = new_Method_with(empty_Array, PArray22432, empty_Array, PThreadedCode22433, 1, PSend22486);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22431, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22489 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22490 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22493 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22492 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22493, (Optr)&t_block_return);
    Block PBlock22491 = new_Block_with(empty_Array, empty_Array, PThreadedCode22492, 1, PSend22493);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22494 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22491);
    Array PThreadedCode22488 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22489, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22490, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22491, (Optr)&t_send1, (Optr)PSend22494, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22488, 4, PSend22489, PSend22490, PSend22494, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22487, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22496 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22498 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22497 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22498, (Optr)&t_method_return);
    Method PMethod22495 = new_Method_with(PArray22496, empty_Array, empty_Array, PThreadedCode22497, 1, PSend22498);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22495, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22504 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22506 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22505 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22506, (Optr)&t_method_return);
    Block PBlock22503 = new_Block_with(PArray22504, empty_Array, PThreadedCode22505, 1, PSend22506);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22507 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22503);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22508 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22502 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22503, (Optr)&t_send1, (Optr)PSend22507, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22508, (Optr)&t_block_return);
    Block PBlock22501 = new_Block_with(empty_Array, empty_Array, PThreadedCode22502, 2, PSend22507, PSend22508);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22509 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22501);
    Array PThreadedCode22500 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22501, (Optr)&t_send1, (Optr)PSend22509, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22499 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22500, 2, PSend22509, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22499, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22512 = new_String(L"GET");
    String string_22513 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22512_Const = new_Constant((Optr)string_22512);
    Constant string_22513_Const = new_Constant((Optr)string_22513);
    // with:with:. 
    Send PSend22514 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22512_Const, (Optr)string_22513_Const);
    Array PThreadedCode22511 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22512, (Optr)&t_push1, (Optr)string_22513, (Optr)&t_send2, (Optr)PSend22514, (Optr)&t_method_return);
    Method PMethod22510 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22511, 1, PSend22514);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22510, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22516 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22515 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22516, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22515, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22518 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22519 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22521 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22522 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22527 = new_String(L"*");
    Array PThreadedCode22526 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22527, (Optr)&t_block_return);
    Constant string_22527_Const = new_Constant((Optr)string_22527);
    Block PBlock22525 = new_Block_with(empty_Array, empty_Array, PThreadedCode22526, 1, string_22527_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22530 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22529 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22530, (Optr)&t_block_return);
    Block PBlock22528 = new_Block_with(empty_Array, empty_Array, PThreadedCode22529, 1, PSend22530);
    // ifNil:ifNotNil:. 
    Send PSend22524 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22525, (Optr)PBlock22528);
    Assign PAssign22523 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22524);
    String string_22531 = new_String(L"Listener starting (interface: ");
    Constant string_22531_Const = new_Constant((Optr)string_22531);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22532 = new_Send((Optr)string_22531_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22533 = new_String(L" port: ");
    Constant string_22533_Const = new_Constant((Optr)string_22533);
    // ,. 
    Send PSend22534 = new_Send((Optr)PSend22532, SMB__append_, 1, (Optr)string_22533_Const);
    // ,. 
    Send PSend22535 = new_Send((Optr)PSend22534, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22536 = new_String(L")");
    Constant string_22536_Const = new_Constant((Optr)string_22536);
    // ,. 
    Send PSend22537 = new_Send((Optr)PSend22535, SMB__append_, 1, (Optr)string_22536_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22538 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22537);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22540 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22539 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22540);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22543 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22542 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22543, (Optr)&t_block_return);
    Block PBlock22541 = new_Block_with(empty_Array, empty_Array, PThreadedCode22542, 1, PSend22543);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22546 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22545 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22546, (Optr)&t_block_return);
    Block PBlock22544 = new_Block_with(empty_Array, empty_Array, PThreadedCode22545, 1, PSend22546);
    // ifNil:ifNotNil:. 
    Send PSend22547 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22541, (Optr)PBlock22544);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22548 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22520 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22521, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22522, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22523, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22525, (Optr)&t_push_closure, (Optr)PBlock22528, (Optr)&t_send2, (Optr)PSend22524, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22531, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22532, (Optr)&t_push1, (Optr)string_22533, (Optr)&t_send1, (Optr)PSend22534, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22535, (Optr)&t_push1, (Optr)string_22536, (Optr)&t_send1, (Optr)PSend22537, (Optr)&t_send1, (Optr)PSend22538, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22539, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22540, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22541, (Optr)&t_push_closure, (Optr)PBlock22544, (Optr)&t_send2, (Optr)PSend22547, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22548, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22517 = new_Method_with(PArray22518, PArray22519, empty_Array, PThreadedCode22520, 8, PAssign22521, PAssign22522, PAssign22523, PSend22538, PAssign22539, PSend22547, PSend22548, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22517, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22550 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22549 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22550, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22549, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22552 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22554 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22555 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22554);
    Array PThreadedCode22553 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22554, (Optr)&t_send3, (Optr)PSend22555, (Optr)&t_method_return);
    Method PMethod22551 = new_Method_with(PArray22552, empty_Array, empty_Array, PThreadedCode22553, 1, PSend22555);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22551, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22560 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22559 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22560, (Optr)&t_block_return);
    Block PBlock22558 = new_Block_with(empty_Array, empty_Array, PThreadedCode22559, 1, PSend22560);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22561 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22558);
    Assign PAssign22562 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22557 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22558, (Optr)&t_send1, (Optr)PSend22561, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22562, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22556 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22557, 3, PSend22561, PAssign22562, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22556, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22564 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22566 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22565 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22566, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22563 = new_Method_with(PArray22564, empty_Array, empty_Array, PThreadedCode22565, 2, PAssign22566, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22563, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22569 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22570 = new_Send((Optr)PSend22569, SMB_not, 0);
    Array PThreadedCode22568 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22569, (Optr)&t_send0, (Optr)PSend22570, (Optr)&t_method_return);
    Method PMethod22567 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22568, 1, PSend22570);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22567, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22572 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22571 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22572, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22571, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22574 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22575 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22578 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22580 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22581 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22581_Const = new_Constant((Optr)string_22581);
    // =. 
    Send PSend22582 = new_Send((Optr)PSend22580, SMB__equals_, 1, (Optr)string_22581_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22586 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22587 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22587_Const = new_Constant((Optr)string_22587);
    // send200Response:contentType:. 
    Send PSend22588 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22586, (Optr)string_22587_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22589 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22588);
    Array PThreadedCode22585 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22586, (Optr)&t_push1, (Optr)string_22587, (Optr)&t_send2, (Optr)PSend22588, (Optr)&t_send1, (Optr)PSend22589, (Optr)&t_block_return);
    Block PBlock22584 = new_Block_with(empty_Array, empty_Array, PThreadedCode22585, 1, PSend22589);
    // ifTrue:. 
    Send PSend22583 = new_Send((Optr)PSend22582, SMB_ifTrue_, 1, (Optr)PBlock22584);
    Assign PAssign22590 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22592 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22591 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22592);
    String string_22593 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22593_Const = new_Constant((Optr)string_22593);
    // beginsWith:. 
    Send PSend22594 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22593_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22600 = new_String(L"/");
    Constant string_22600_Const = new_Constant((Optr)string_22600);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22599 = new_Send((Optr)string_22600_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22598 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22599);
    Array PThreadedCode22597 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22598, (Optr)&t_push1, (Optr)string_22600, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22599, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22596 = new_Block_with(empty_Array, empty_Array, PThreadedCode22597, 1, PAssign22598);
    // ifFalse:. 
    Send PSend22595 = new_Send((Optr)PSend22594, SMB_ifFalse_, 1, (Optr)PBlock22596);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22605 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22608 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22607 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22608, (Optr)&t_block_return);
    Block PBlock22606 = new_Block_with(empty_Array, empty_Array, PThreadedCode22607, 1, PSend22608);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22609 = new_Send((Optr)PSend22605, SMB_and_, 1, (Optr)PBlock22606);
    Array PThreadedCode22604 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22605, (Optr)&t_push_closure, (Optr)PBlock22606, (Optr)&t_send1, (Optr)PSend22609, (Optr)&t_block_return);
    Block PBlock22603 = new_Block_with(empty_Array, empty_Array, PThreadedCode22604, 1, PSend22609);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22615 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22614 = new_Block_with(empty_Array, empty_Array, PThreadedCode22615, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22613 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22614);
    Assign PAssign22612 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22613);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22618 = new_Character(L'/');
    Constant char_22618_Const = new_Constant((Optr)char_22618);
    // copyUpToLast:. 
    Send PSend22617 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22618_Const);
    Assign PAssign22616 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22617);
    Array PThreadedCode22611 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22612, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22614, (Optr)&t_send2, (Optr)PSend22613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22616, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22618, (Optr)&t_send1, (Optr)PSend22617, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22610 = new_Block_with(empty_Array, empty_Array, PThreadedCode22611, 2, PAssign22612, PAssign22616);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22619 = new_Send((Optr)PBlock22603, SMB_whileTrue_, 1, (Optr)PBlock22610);
    String string_22624 = new_String(L"/");
    Constant string_22624_Const = new_Constant((Optr)string_22624);
    Array PThreadedCode22626 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22625 = new_Block_with(empty_Array, empty_Array, PThreadedCode22626, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22623 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_22624_Const, (Optr)PBlock22625);
    Assign PAssign22622 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22623);
    Array PThreadedCode22621 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22622, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_22624, (Optr)&t_push_closure, (Optr)PBlock22625, (Optr)&t_send2, (Optr)PSend22623, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22620 = new_Block_with(empty_Array, empty_Array, PThreadedCode22621, 1, PAssign22622);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22627 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22620);
    Array PThreadedCode22602 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22603, (Optr)&t_push_closure, (Optr)PBlock22610, (Optr)&t_send1, (Optr)PSend22619, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22620, (Optr)&t_send1, (Optr)PSend22627, (Optr)&t_block_return);
    Block PBlock22601 = new_Block_with(empty_Array, empty_Array, PThreadedCode22602, 2, PSend22619, PSend22627);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22628 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22601);
    // method. 
    Send PSend22629 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22630 = new_String(L"OPTIONS");
    Constant string_22630_Const = new_Constant((Optr)string_22630);
    // =. 
    Send PSend22631 = new_Send((Optr)PSend22629, SMB__equals_, 1, (Optr)string_22630_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend22635 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22638 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode22637 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22638, (Optr)&t_block_return);
    Block PBlock22636 = new_Block_with(empty_Array, empty_Array, PThreadedCode22637, 1, PSend22638);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend22641 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode22640 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22641, (Optr)&t_block_return);
    Block PBlock22639 = new_Block_with(empty_Array, empty_Array, PThreadedCode22640, 1, PSend22641);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22642 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22636, (Optr)PBlock22639);
    // ,. 
    Send PSend22643 = new_Send((Optr)PSend22635, SMB__append_, 1, (Optr)PSend22642);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend22644 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend22643);
    Array PThreadedCode22634 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22635, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22636, (Optr)&t_push_closure, (Optr)PBlock22639, (Optr)&t_send2, (Optr)PSend22642, (Optr)&t_send1, (Optr)PSend22643, (Optr)&t_send1, (Optr)PSend22644, (Optr)&t_block_return);
    Block PBlock22633 = new_Block_with(empty_Array, empty_Array, PThreadedCode22634, 1, PSend22644);
    // ifTrue:. 
    Send PSend22632 = new_Send((Optr)PSend22631, SMB_ifTrue_, 1, (Optr)PBlock22633);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend22647 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend22648 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22647);
    Array PThreadedCode22646 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22647, (Optr)&t_send1, (Optr)PSend22648, (Optr)&t_block_return);
    Block PBlock22645 = new_Block_with(empty_Array, empty_Array, PThreadedCode22646, 1, PSend22648);
    // ifNil:. 
    Send PSend22649 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22645);
    // method. 
    Send PSend22650 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22651 = new_String(L"HEAD");
    Constant string_22651_Const = new_Constant((Optr)string_22651);
    // =. 
    Send PSend22652 = new_Send((Optr)PSend22650, SMB__equals_, 1, (Optr)string_22651_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend22655 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend22656 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend22657 = new_Send((Optr)PSend22655, SMB_includes_, 1, (Optr)PSend22656);
    Array PThreadedCode22654 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22655, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22656, (Optr)&t_send1, (Optr)PSend22657, (Optr)&t_block_return);
    Block PBlock22653 = new_Block_with(empty_Array, empty_Array, PThreadedCode22654, 1, PSend22657);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22658 = new_Send((Optr)PSend22652, SMB_or_, 1, (Optr)PBlock22653);
    // builtinHttpMethods. 
    Send PSend22662 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend22663 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend22664 = new_Send((Optr)PSend22662, SMB__append_, 1, (Optr)PSend22663);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend22665 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend22664);
    // escape:. 
    Send PSend22666 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22665);
    Array PThreadedCode22661 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22662, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22663, (Optr)&t_send1, (Optr)PSend22664, (Optr)&t_send1, (Optr)PSend22665, (Optr)&t_send1, (Optr)PSend22666, (Optr)&t_block_return);
    Block PBlock22660 = new_Block_with(empty_Array, empty_Array, PThreadedCode22661, 1, PSend22666);
    // ifFalse:. 
    Send PSend22659 = new_Send((Optr)PSend22658, SMB_ifFalse_, 1, (Optr)PBlock22660);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend22669 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend22670 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend22669, (Optr)VAR_request_0_0);
    Array PThreadedCode22668 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22669, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend22670, (Optr)&t_block_return);
    Block PBlock22667 = new_Block_with(empty_Array, empty_Array, PThreadedCode22668, 1, PSend22670);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22672 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22674 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22673 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22674, (Optr)&t_method_return);
    Block PBlock22671 = new_Block_with(PArray22672, empty_Array, PThreadedCode22673, 1, PSend22674);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22675 = new_Send((Optr)PBlock22667, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22671);
    Array PThreadedCode22579 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22580, (Optr)&t_push1, (Optr)string_22581, (Optr)&t_send1, (Optr)PSend22582, (Optr)&t_send_ifTrue_, (Optr)PSend22583, (Optr)PBlock22584, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22590, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22591, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22592, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22593, (Optr)&t_send1, (Optr)PSend22594, (Optr)&t_send_ifFalse_, (Optr)PSend22595, (Optr)PBlock22596, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22601, (Optr)&t_send1, (Optr)PSend22628, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22629, (Optr)&t_push1, (Optr)string_22630, (Optr)&t_send1, (Optr)PSend22631, (Optr)&t_send_ifTrue_, (Optr)PSend22632, (Optr)PBlock22633, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22645, (Optr)&t_send1, (Optr)PSend22649, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22650, (Optr)&t_push1, (Optr)string_22651, (Optr)&t_send1, (Optr)PSend22652, (Optr)&t_push_closure, (Optr)PBlock22653, (Optr)&t_send1, (Optr)PSend22658, (Optr)&t_send_ifFalse_, (Optr)PSend22659, (Optr)PBlock22660, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22667, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22671, (Optr)&t_send2, (Optr)PSend22675, (Optr)&t_method_return);
    Block PBlock22577 = new_Block_with(PArray22578, empty_Array, PThreadedCode22579, 9, PSend22583, PAssign22590, PAssign22591, PSend22595, PSend22628, PSend22632, PSend22649, PSend22659, PSend22675);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22676 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22577);
    Array PThreadedCode22576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22577, (Optr)&t_send1, (Optr)PSend22676, (Optr)&t_method_return);
    Method PMethod22573 = new_Method_with(PArray22574, PArray22575, empty_Array, PThreadedCode22576, 1, PSend22676);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22573, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray22678 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend22680 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22679 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22680, (Optr)&t_method_return);
    Method PMethod22677 = new_Method_with(PArray22678, empty_Array, empty_Array, PThreadedCode22679, 1, PSend22680);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22677, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22682 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22686 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22685 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend22686, (Optr)&t_block_return);
    Block PBlock22684 = new_Block_with(empty_Array, empty_Array, PThreadedCode22685, 1, PSend22686);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22687 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22684);
    Array PThreadedCode22683 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22684, (Optr)&t_send1, (Optr)PSend22687, (Optr)&t_method_return);
    Method PMethod22681 = new_Method_with(PArray22682, empty_Array, empty_Array, PThreadedCode22683, 1, PSend22687);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod22681, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode22689 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22689, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22688, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray22691 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray22692 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_22700 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_22700_Const = new_Constant((Optr)string_22700);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22701 = new_String(L"<h1>Internal Server Error: ");
    Constant string_22701_Const = new_Constant((Optr)string_22701);
    // ,. 
    Send PSend22699 = new_Send((Optr)string_22700_Const, SMB__append_, 1, (Optr)string_22701_Const);
    // ,. 
    Send PSend22698 = new_Send((Optr)PSend22699, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_22702 = new_String(L"</h1><pre>");
    Constant string_22702_Const = new_Constant((Optr)string_22702);
    // ,. 
    Send PSend22697 = new_Send((Optr)PSend22698, SMB__append_, 1, (Optr)string_22702_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22704 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22705 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend22703 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend22704, (Optr)PSend22705);
    // ,. 
    Send PSend22696 = new_Send((Optr)PSend22697, SMB__append_, 1, (Optr)PSend22703);
    String string_22706 = new_String(L"</pre></body></html>");
    Constant string_22706_Const = new_Constant((Optr)string_22706);
    // ,. 
    Send PSend22695 = new_Send((Optr)PSend22696, SMB__append_, 1, (Optr)string_22706_Const);
    Assign PAssign22694 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend22695);
    SmallInt int_500 = new_SmallInt(500);
    String string_22707 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_22707_Const = new_Constant((Optr)string_22707);
    // sendResponseCode:content:type:close:. 
    Send PSend22708 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_22707_Const, (Optr)true_Const);
    Array PThreadedCode22693 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign22694, (Optr)&t_push1, (Optr)string_22700, (Optr)&t_push1, (Optr)string_22701, (Optr)&t_send1, (Optr)PSend22699, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend22698, (Optr)&t_push1, (Optr)string_22702, (Optr)&t_send1, (Optr)PSend22697, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22704, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22705, (Optr)&t_send2, (Optr)PSend22703, (Optr)&t_send1, (Optr)PSend22696, (Optr)&t_push1, (Optr)string_22706, (Optr)&t_send1, (Optr)PSend22695, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_22707, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend22708, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22690 = new_Method_with(PArray22691, PArray22692, empty_Array, PThreadedCode22693, 3, PAssign22694, PSend22708, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod22690, WebClient_Core_WebServer_Class);
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
    Send PSend22715 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend22714 = new_Send((Optr)PSend22715, SMB_serverString, 0);
    Assign PAssign22713 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend22714);
    Array PThreadedCode22712 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22713, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22715, (Optr)&t_send0, (Optr)PSend22714, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22711 = new_Block_with(empty_Array, empty_Array, PThreadedCode22712, 1, PAssign22713);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22716 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock22711);
    Array PThreadedCode22710 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock22711, (Optr)&t_send1, (Optr)PSend22716, (Optr)&t_method_return);
    Method PMethod22709 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22710, 1, PSend22716);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22709, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22718 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22722 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22723 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend22722);
    Array PThreadedCode22721 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend22722, (Optr)&t_send1, (Optr)PSend22723, (Optr)&t_block_return);
    Block PBlock22720 = new_Block_with(empty_Array, empty_Array, PThreadedCode22721, 1, PSend22723);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22724 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock22720);
    Array PThreadedCode22719 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock22720, (Optr)&t_send1, (Optr)PSend22724, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22717 = new_Method_with(PArray22718, empty_Array, empty_Array, PThreadedCode22719, 2, PSend22724, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod22717, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22728 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend22730 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22731 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode22729 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22730, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22731, (Optr)&t_method_return);
    Block PBlock22727 = new_Block_with(PArray22728, empty_Array, PThreadedCode22729, 2, PSend22730, PSend22731);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22732 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22733 = new_Send((Optr)PBlock22727, SMB_value_, 1, (Optr)PSend22732);
    Array PThreadedCode22726 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22727, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend22732, (Optr)&t_send1, (Optr)PSend22733, (Optr)&t_method_return);
    Method PMethod22725 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22726, 1, PSend22733);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod22725, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22735 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22737 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22736 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22737, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22734 = new_Method_with(PArray22735, empty_Array, empty_Array, PThreadedCode22736, 2, PAssign22737, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22734, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode22739 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22738 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22739, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22738, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode22741 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22740 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22741, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22740, WebClient_Core_WebServer_Class);
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
    Send PSend22744 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22745 = new_Send((Optr)PSend22744, SMB_serverDate, 0);
    Array PThreadedCode22743 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22744, (Optr)&t_send0, (Optr)PSend22745, (Optr)&t_method_return);
    Method PMethod22742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22743, 1, PSend22745);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22742, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray22747 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend22749 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend22750 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend22749);
    Array PThreadedCode22748 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22749, (Optr)&t_send2, (Optr)PSend22750, (Optr)&t_method_return);
    Method PMethod22746 = new_Method_with(PArray22747, empty_Array, empty_Array, PThreadedCode22748, 1, PSend22750);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod22746, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray22752 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22754 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22755 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend22754);
    Array PThreadedCode22753 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend22754, (Optr)&t_send1, (Optr)PSend22755, (Optr)&t_method_return);
    Method PMethod22751 = new_Method_with(PArray22752, empty_Array, empty_Array, PThreadedCode22753, 1, PSend22755);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod22751, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray22757 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22760 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_22762 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_22762_Const = new_Constant((Optr)string_22762);
    // nextPutAll:. 
    Send PSend22763 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_22762_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22764 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode22761 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_22762, (Optr)&t_send1, (Optr)PSend22763, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22764, (Optr)&t_method_return);
    Block PBlock22759 = new_Block_with(PArray22760, empty_Array, PThreadedCode22761, 2, PSend22763, PSend22764);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22765 = new_Send((Optr)PBlock22759, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode22758 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22759, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend22765, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22756 = new_Method_with(PArray22757, empty_Array, empty_Array, PThreadedCode22758, 2, PSend22765, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod22756, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray22767 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22769 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22768 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22769, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22766 = new_Method_with(PArray22767, empty_Array, empty_Array, PThreadedCode22768, 2, PAssign22769, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22766, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22771 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode22776 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22775 = new_Block_with(empty_Array, empty_Array, PThreadedCode22776, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend22777 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22775);
    Array PThreadedCode22774 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22775, (Optr)&t_send2, (Optr)PSend22777, (Optr)&t_block_return);
    Block PBlock22773 = new_Block_with(empty_Array, empty_Array, PThreadedCode22774, 1, PSend22777);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22778 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22773);
    Array PThreadedCode22772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22773, (Optr)&t_send1, (Optr)PSend22778, (Optr)&t_method_return);
    Method PMethod22770 = new_Method_with(PArray22771, empty_Array, empty_Array, PThreadedCode22772, 1, PSend22778);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod22770, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22780 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22782 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22781 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22782, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22779 = new_Method_with(PArray22780, empty_Array, empty_Array, PThreadedCode22781, 2, PAssign22782, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22779, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray22784 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22788 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22789 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22790 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend22788, (Optr)PSend22789);
    Array PThreadedCode22787 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22788, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend22789, (Optr)&t_send2, (Optr)PSend22790, (Optr)&t_block_return);
    Block PBlock22786 = new_Block_with(empty_Array, empty_Array, PThreadedCode22787, 1, PSend22790);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22791 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22786);
    Array PThreadedCode22785 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22786, (Optr)&t_send1, (Optr)PSend22791, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22783 = new_Method_with(PArray22784, empty_Array, empty_Array, PThreadedCode22785, 2, PSend22791, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod22783, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray22793 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22797 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode22799 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22798 = new_Block_with(empty_Array, empty_Array, PThreadedCode22799, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend22800 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend22797, (Optr)PBlock22798);
    Array PThreadedCode22796 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22797, (Optr)&t_push_closure, (Optr)PBlock22798, (Optr)&t_send2, (Optr)PSend22800, (Optr)&t_block_return);
    Block PBlock22795 = new_Block_with(empty_Array, empty_Array, PThreadedCode22796, 1, PSend22800);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22801 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22795);
    Array PThreadedCode22794 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22795, (Optr)&t_send1, (Optr)PSend22801, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22792 = new_Method_with(PArray22793, empty_Array, empty_Array, PThreadedCode22794, 2, PSend22801, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod22792, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_22804 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode22803 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22804, (Optr)&t_method_return);
    Constant string_22804_Const = new_Constant((Optr)string_22804);
    Method PMethod22802 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22803, 1, string_22804_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod22802, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22809 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign22810 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode22808 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend22809, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22810, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22807 = new_Block_with(empty_Array, empty_Array, PThreadedCode22808, 2, PSend22809, PAssign22810);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22811 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock22807);
    Array PThreadedCode22806 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22807, (Optr)&t_send1, (Optr)PSend22811, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22806, 2, PSend22811, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod22805, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray22813 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray22816 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend22820 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend22819 = new_Send((Optr)PSend22820, SMB_asUTC, 0);
    Assign PAssign22818 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend22819);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend22821 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_22822 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22822_Const = new_Constant((Optr)string_22822);
    // ,. 
    Send PSend22823 = new_Send((Optr)PSend22821, SMB__append_, 1, (Optr)string_22822_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22824 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend22823);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend22825 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22827 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend22829 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend22830 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend22831 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4725 = new_Character(L' ');
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // add:. 
    Send PSend22832 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4725_Const);
    // add:. 
    Send PSend22833 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend22834 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend22835 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22836 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode22828 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22830, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend22831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend22832, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22834, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22836, (Optr)&t_method_return);
    Block PBlock22826 = new_Block_with(PArray22827, empty_Array, PThreadedCode22828, 8, PSend22829, PSend22830, PSend22831, PSend22832, PSend22833, PSend22834, PSend22835, PSend22836);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22837 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22838 = new_Send((Optr)PBlock22826, SMB_value_, 1, (Optr)PSend22837);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22839 = new_Send((Optr)PSend22838, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend22840 = new_Send((Optr)PSend22825, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend22839);
    Array PArray22842 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend22844 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend22845 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend22846 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend22845);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend22847 = new_Send((Optr)PSend22846, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend22848 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend22847);
    Array PThreadedCode22843 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22845, (Optr)&t_send1, (Optr)PSend22846, (Optr)&t_send0, (Optr)PSend22847, (Optr)&t_send1, (Optr)PSend22848, (Optr)&t_method_return);
    Block PBlock22841 = new_Block_with(PArray22842, empty_Array, PThreadedCode22843, 2, PSend22844, PSend22848);
    // value:. 
    Send PSend22849 = new_Send((Optr)PBlock22841, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_22850 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_22850_Const = new_Constant((Optr)string_22850);
    // writeAll:. 
    Send PSend22851 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_22850_Const);
    Array PThreadedCode22817 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign22818, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend22820, (Optr)&t_send0, (Optr)PSend22819, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22821, (Optr)&t_push1, (Optr)string_22822, (Optr)&t_send1, (Optr)PSend22823, (Optr)&t_send1, (Optr)PSend22824, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22825, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock22826, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22837, (Optr)&t_send1, (Optr)PSend22838, (Optr)&t_send0, (Optr)PSend22839, (Optr)&t_send2, (Optr)PSend22840, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22841, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend22849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_22850, (Optr)&t_send1, (Optr)PSend22851, (Optr)&t_method_return);
    Block PBlock22815 = new_Block_with(PArray22816, empty_Array, PThreadedCode22817, 5, PAssign22818, PSend22824, PSend22840, PSend22849, PSend22851);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend22852 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock22815);
    Array PThreadedCode22814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock22815, (Optr)&t_send1, (Optr)PSend22852, (Optr)&t_method_return);
    Method PMethod22812 = new_Method_with(empty_Array, PArray22813, empty_Array, PThreadedCode22814, 1, PSend22852);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22812, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_22855 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode22854 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22855, (Optr)&t_method_return);
    Constant string_22855_Const = new_Constant((Optr)string_22855);
    Method PMethod22853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22854, 1, string_22855_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod22853, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_22858 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode22857 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22858, (Optr)&t_method_return);
    Constant string_22858_Const = new_Constant((Optr)string_22858);
    Method PMethod22856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22857, 1, string_22858_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22856, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22864 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign22863 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend22864);
    Array PThreadedCode22862 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22863, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22864, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22861 = new_Block_with(empty_Array, empty_Array, PThreadedCode22862, 1, PAssign22863);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22865 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock22861);
    Array PThreadedCode22860 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22861, (Optr)&t_send1, (Optr)PSend22865, (Optr)&t_method_return);
    Method PMethod22859 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22860, 1, PSend22865);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod22859, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray22867 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22870 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22869 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend22870);
    // new. 
    Send PSend22872 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22871 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend22872);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend22873 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend22874 = new_Send((Optr)PSend22873, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend22875 = new_Send((Optr)PSend22874, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend22876 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_22877 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray22879 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend22881 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_22882 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22882_Const = new_Constant((Optr)string_22882);
    // send200Response:contentType:. 
    Send PSend22883 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend22881, (Optr)string_22882_Const);
    Array PThreadedCode22880 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22881, (Optr)&t_push1, (Optr)string_22882, (Optr)&t_send2, (Optr)PSend22883, (Optr)&t_method_return);
    Block PBlock22878 = new_Block_with(PArray22879, empty_Array, PThreadedCode22880, 1, PSend22883);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_22877_Const = new_Constant((Optr)string_22877);
    // addService:action:. 
    Send PSend22884 = new_Send((Optr)PSend22876, SMB_addService_action_, 2, (Optr)string_22877_Const, (Optr)PBlock22878);
    Array PThreadedCode22868 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22869, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22870, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22871, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22872, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22873, (Optr)&t_send0, (Optr)PSend22874, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend22875, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22876, (Optr)&t_push1, (Optr)string_22877, (Optr)&t_push_closure, (Optr)PBlock22878, (Optr)&t_send2, (Optr)PSend22884, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22866 = new_Method_with(empty_Array, PArray22867, empty_Array, PThreadedCode22868, 5, PAssign22869, PAssign22871, PSend22875, PSend22884, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod22866, HEADER(WebClient_Core_WebServer_Class));
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