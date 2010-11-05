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
    Array PArray22258 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22259 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22269 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22268 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22269, (Optr)&t_block_return);
    Block PBlock22267 = new_Block_with(empty_Array, empty_Array, PThreadedCode22268, 1, PSend22269);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22271 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22273 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22272 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22273, (Optr)&t_method_return);
    Block PBlock22270 = new_Block_with(PArray22271, empty_Array, PThreadedCode22272, 1, PSend22273);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22274 = new_Send((Optr)PBlock22267, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22270);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22277 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22279 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22278 = new_Block_with(empty_Array, empty_Array, PThreadedCode22279, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22280 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22277, (Optr)PBlock22278);
    Array PThreadedCode22276 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22277, (Optr)&t_push_closure, (Optr)PBlock22278, (Optr)&t_send2, (Optr)PSend22280, (Optr)&t_block_return);
    Block PBlock22275 = new_Block_with(empty_Array, empty_Array, PThreadedCode22276, 1, PSend22280);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22281 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22275);
    Array PThreadedCode22266 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22267, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22270, (Optr)&t_send2, (Optr)PSend22274, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22275, (Optr)&t_send1, (Optr)PSend22281, (Optr)&t_block_return);
    Block PBlock22265 = new_Block_with(empty_Array, empty_Array, PThreadedCode22266, 2, PSend22274, PSend22281);
    // destroy. 
    Send PSend22284 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22283 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22284, (Optr)&t_block_return);
    Block PBlock22282 = new_Block_with(empty_Array, empty_Array, PThreadedCode22283, 1, PSend22284);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22285 = new_Send((Optr)PBlock22265, SMB_ensure_, 1, (Optr)PBlock22282);
    Array PThreadedCode22264 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22265, (Optr)&t_push_closure, (Optr)PBlock22282, (Optr)&t_send1, (Optr)PSend22285, (Optr)&t_block_return);
    Block PBlock22263 = new_Block_with(empty_Array, empty_Array, PThreadedCode22264, 1, PSend22285);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22262 = new_Send((Optr)PBlock22263, SMB_fork, 0);
    Assign PAssign22261 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22262);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22288 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22287 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22288, (Optr)&t_block_return);
    Block PBlock22286 = new_Block_with(empty_Array, empty_Array, PThreadedCode22287, 1, PSend22288);
    // critical:. 
    Send PSend22289 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22286);
    Array PThreadedCode22260 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22261, (Optr)&t_push_closure, (Optr)PBlock22263, (Optr)&t_send0, (Optr)PSend22262, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22286, (Optr)&t_send1, (Optr)PSend22289, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22257 = new_Method_with(PArray22258, PArray22259, empty_Array, PThreadedCode22260, 3, PAssign22261, PSend22289, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22257, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22291 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22296 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22295 = new_Block_with(empty_Array, empty_Array, PThreadedCode22296, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22297 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22295);
    Array PThreadedCode22294 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22295, (Optr)&t_send2, (Optr)PSend22297, (Optr)&t_block_return);
    Block PBlock22293 = new_Block_with(empty_Array, empty_Array, PThreadedCode22294, 1, PSend22297);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22298 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22293);
    Array PThreadedCode22292 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22293, (Optr)&t_send1, (Optr)PSend22298, (Optr)&t_method_return);
    Method PMethod22290 = new_Method_with(PArray22291, empty_Array, empty_Array, PThreadedCode22292, 1, PSend22298);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22290, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22300 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22300, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22299, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22303 = new_String(L"HEAD");
    String string_22304 = new_String(L"TRACE");
    String string_22305 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22303_Const = new_Constant((Optr)string_22303);
    Constant string_22304_Const = new_Constant((Optr)string_22304);
    Constant string_22305_Const = new_Constant((Optr)string_22305);
    // with:with:with:. 
    Send PSend22306 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22303_Const, (Optr)string_22304_Const, (Optr)string_22305_Const);
    Array PThreadedCode22302 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22303, (Optr)&t_push1, (Optr)string_22304, (Optr)&t_push1, (Optr)string_22305, (Optr)&t_send3, (Optr)PSend22306, (Optr)&t_method_return);
    Method PMethod22301 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22302, 1, PSend22306);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22301, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22308 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22311 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22315 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22314 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22315, (Optr)&t_block_return);
    Block PBlock22313 = new_Block_with(empty_Array, empty_Array, PThreadedCode22314, 1, PSend22315);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22316 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22313);
    Array PThreadedCode22312 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22313, (Optr)&t_send1, (Optr)PSend22316, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22310 = new_Block_with(PArray22311, empty_Array, PThreadedCode22312, 2, PSend22316, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22317 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22310);
    Array PThreadedCode22309 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22310, (Optr)&t_send1, (Optr)PSend22317, (Optr)&t_method_return);
    Method PMethod22307 = new_Method_with(PArray22308, empty_Array, empty_Array, PThreadedCode22309, 1, PSend22317);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22307, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22319 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22321 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22320 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22321, (Optr)&t_method_return);
    Method PMethod22318 = new_Method_with(PArray22319, empty_Array, empty_Array, PThreadedCode22320, 1, PSend22321);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22318, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22323 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22322 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22323, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22322, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22325 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22326 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22330 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22330_Const = new_Constant((Optr)string_22330);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22331 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22331_Const = new_Constant((Optr)string_22331);
    // ,. 
    Send PSend22329 = new_Send((Optr)string_22330_Const, SMB__append_, 1, (Optr)string_22331_Const);
    Assign PAssign22328 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22329);
    String string_22334 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22335 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22334_Const = new_Constant((Optr)string_22334);
    // ,. 
    Send PSend22336 = new_Send((Optr)string_22334_Const, SMB__append_, 1, (Optr)PSend22335);
    String string_22337 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22337_Const = new_Constant((Optr)string_22337);
    // ,. 
    Send PSend22338 = new_Send((Optr)PSend22336, SMB__append_, 1, (Optr)string_22337_Const);
    // crlf. 
    Send PSend22339 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22340 = new_Send((Optr)PSend22338, SMB__append_, 1, (Optr)PSend22339);
    String string_22341 = new_String(L"Connection: close");
    Constant string_22341_Const = new_Constant((Optr)string_22341);
    // ,. 
    Send PSend22342 = new_Send((Optr)PSend22340, SMB__append_, 1, (Optr)string_22341_Const);
    // crlf. 
    Send PSend22343 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22344 = new_Send((Optr)PSend22342, SMB__append_, 1, (Optr)PSend22343);
    String string_22345 = new_String(L"Content-Length: ");
    Constant string_22345_Const = new_Constant((Optr)string_22345);
    // ,. 
    Send PSend22346 = new_Send((Optr)PSend22344, SMB__append_, 1, (Optr)string_22345_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22347 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22348 = new_Send((Optr)PSend22347, SMB_asString, 0);
    // ,. 
    Send PSend22349 = new_Send((Optr)PSend22346, SMB__append_, 1, (Optr)PSend22348);
    // crlf. 
    Send PSend22350 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22351 = new_Send((Optr)PSend22349, SMB__append_, 1, (Optr)PSend22350);
    // crlf. 
    Send PSend22352 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22353 = new_Send((Optr)PSend22351, SMB__append_, 1, (Optr)PSend22352);
    // ,. 
    Send PSend22354 = new_Send((Optr)PSend22353, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22355 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22354);
    Array PThreadedCode22333 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22334, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22335, (Optr)&t_send1, (Optr)PSend22336, (Optr)&t_push1, (Optr)string_22337, (Optr)&t_send1, (Optr)PSend22338, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22339, (Optr)&t_send1, (Optr)PSend22340, (Optr)&t_push1, (Optr)string_22341, (Optr)&t_send1, (Optr)PSend22342, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22343, (Optr)&t_send1, (Optr)PSend22344, (Optr)&t_push1, (Optr)string_22345, (Optr)&t_send1, (Optr)PSend22346, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22347, (Optr)&t_send0, (Optr)PSend22348, (Optr)&t_send1, (Optr)PSend22349, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22350, (Optr)&t_send1, (Optr)PSend22351, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22352, (Optr)&t_send1, (Optr)PSend22353, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22354, (Optr)&t_send1, (Optr)PSend22355, (Optr)&t_block_return);
    Block PBlock22332 = new_Block_with(empty_Array, empty_Array, PThreadedCode22333, 1, PSend22355);
    Array PThreadedCode22357 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22356 = new_Block_with(empty_Array, empty_Array, PThreadedCode22357, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22358 = new_Send((Optr)PBlock22332, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22356);
    Array PThreadedCode22327 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22328, (Optr)&t_push1, (Optr)string_22330, (Optr)&t_push1, (Optr)string_22331, (Optr)&t_send1, (Optr)PSend22329, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22332, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22356, (Optr)&t_send2, (Optr)PSend22358, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22324 = new_Method_with(PArray22325, PArray22326, empty_Array, PThreadedCode22327, 3, PAssign22328, PSend22358, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22324, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22360 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22362 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22361 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22362, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22359 = new_Method_with(PArray22360, empty_Array, empty_Array, PThreadedCode22361, 1, PAssign22362);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22359, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22364 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22364, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22363, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22367 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22372 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22371 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22372, (Optr)&t_block_return);
    Block PBlock22370 = new_Block_with(empty_Array, empty_Array, PThreadedCode22371, 1, PSend22372);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22369 = new_Send((Optr)PBlock22370, SMB_fork, 0);
    Assign PAssign22368 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22369);
    Array PThreadedCode22366 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22367, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22368, (Optr)&t_push_closure, (Optr)PBlock22370, (Optr)&t_send0, (Optr)PSend22369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22365 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22366, 3, PSend22367, PAssign22368, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22365, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22376 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22375 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22376);
    // new. 
    Send PSend22378 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22377 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22378);
    // new. 
    Send PSend22380 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22379 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22380);
    // new. 
    Send PSend22382 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22381 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22382);
    // new. 
    Send PSend22384 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22383 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22384);
    // new. 
    Send PSend22386 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22385 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22386);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22388 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22391 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22393 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22394 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22392 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22393, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22394, (Optr)&t_method_return);
    Block PBlock22390 = new_Block_with(PArray22391, empty_Array, PThreadedCode22392, 2, PSend22393, PSend22394);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22395 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22396 = new_Send((Optr)PBlock22390, SMB_value_, 1, (Optr)PSend22395);
    Array PThreadedCode22389 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22390, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22395, (Optr)&t_send1, (Optr)PSend22396, (Optr)&t_method_return);
    Block PBlock22387 = new_Block_with(PArray22388, empty_Array, PThreadedCode22389, 1, PSend22396);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22397 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22387);
    Array PThreadedCode22374 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22375, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22376, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22377, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22378, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22379, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22381, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22382, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22383, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22385, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22387, (Optr)&t_send1, (Optr)PSend22397, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22373 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22374, 8, PAssign22375, PAssign22377, PAssign22379, PAssign22381, PAssign22383, PAssign22385, PSend22397, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22373, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22399 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22401 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22400 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22401, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22398 = new_Method_with(PArray22399, empty_Array, empty_Array, PThreadedCode22400, 2, PAssign22401, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22398, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22403 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22404 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22407 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22414 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22413 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22414);
    Array PThreadedCode22412 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22413, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22414, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22411 = new_Block_with(empty_Array, empty_Array, PThreadedCode22412, 1, PAssign22413);
    String string_22417 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22417_Const = new_Constant((Optr)string_22417);
    // error:. 
    Send PSend22418 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22417_Const);
    Array PThreadedCode22416 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22417, (Optr)&t_send1, (Optr)PSend22418, (Optr)&t_block_return);
    Block PBlock22415 = new_Block_with(empty_Array, empty_Array, PThreadedCode22416, 1, PSend22418);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22419 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22411, (Optr)PBlock22415);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22422 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22421 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22422, (Optr)&t_block_return);
    Block PBlock22420 = new_Block_with(empty_Array, empty_Array, PThreadedCode22421, 1, PSend22422);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22425 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22428 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22429 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22428);
    Array PThreadedCode22427 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22428, (Optr)&t_send1, (Optr)PSend22429, (Optr)&t_block_return);
    Block PBlock22426 = new_Block_with(empty_Array, empty_Array, PThreadedCode22427, 1, PSend22429);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22430 = new_Send((Optr)PSend22425, SMB_ifNil_, 1, (Optr)PBlock22426);
    String string_22431 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22431_Const = new_Constant((Optr)string_22431);
    // warn:. 
    Send PSend22432 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22431_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22434 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22433 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22434);
    String string_22435 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22435_Const = new_Constant((Optr)string_22435);
    // warn:. 
    Send PSend22436 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22435_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22439 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22438 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22439, (Optr)&t_block_return);
    Block PBlock22437 = new_Block_with(empty_Array, empty_Array, PThreadedCode22438, 1, PSend22439);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22441 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22443 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22444 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22443);
    Array PThreadedCode22442 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22443, (Optr)&t_send1, (Optr)PSend22444, (Optr)&t_method_return);
    Block PBlock22440 = new_Block_with(PArray22441, empty_Array, PThreadedCode22442, 1, PSend22444);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22445 = new_Send((Optr)PBlock22437, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22440);
    String string_22446 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22446_Const = new_Constant((Optr)string_22446);
    // warn:. 
    Send PSend22447 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22446_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22448 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22424 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22425, (Optr)&t_push_closure, (Optr)PBlock22426, (Optr)&t_send1, (Optr)PSend22430, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22431, (Optr)&t_send1, (Optr)PSend22432, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22433, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22434, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22435, (Optr)&t_send1, (Optr)PSend22436, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22437, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22440, (Optr)&t_send2, (Optr)PSend22445, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22446, (Optr)&t_send1, (Optr)PSend22447, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22448, (Optr)&t_block_return);
    Block PBlock22423 = new_Block_with(empty_Array, empty_Array, PThreadedCode22424, 7, PSend22430, PSend22432, PAssign22433, PSend22436, PSend22445, PSend22447, PSend22448);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22449 = new_Send((Optr)PBlock22420, SMB_whileTrue_, 1, (Optr)PBlock22423);
    Array PThreadedCode22410 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22411, (Optr)&t_push_closure, (Optr)PBlock22415, (Optr)&t_send2, (Optr)PSend22419, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22420, (Optr)&t_push_closure, (Optr)PBlock22423, (Optr)&t_send1, (Optr)PSend22449, (Optr)&t_block_return);
    Block PBlock22409 = new_Block_with(empty_Array, empty_Array, PThreadedCode22410, 2, PSend22419, PSend22449);
    Array PArray22451 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22453 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22452 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22453, (Optr)&t_method_return);
    Block PBlock22450 = new_Block_with(PArray22451, empty_Array, PThreadedCode22452, 1, PSend22453);
    // on:do:. 
    Send PSend22454 = new_Send((Optr)PBlock22409, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22450);
    Array PThreadedCode22408 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22409, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22450, (Optr)&t_send2, (Optr)PSend22454, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22406 = new_Block_with(PArray22407, empty_Array, PThreadedCode22408, 2, PSend22454, self);
    // on:. 
    Send PSend22455 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22406);
    Array PThreadedCode22405 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22406, (Optr)&t_send1, (Optr)PSend22455, (Optr)&t_method_return);
    Method PMethod22402 = new_Method_with(PArray22403, PArray22404, empty_Array, PThreadedCode22405, 1, PSend22455);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22402, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22457 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22456 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22457, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22456, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22459 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22458 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22459, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22458, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22461 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22463 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22462 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22463, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22460 = new_Method_with(PArray22461, empty_Array, empty_Array, PThreadedCode22462, 2, PAssign22463, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22460, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22466 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22465 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22466, (Optr)&t_method_return);
    Method PMethod22464 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22465, 1, PSend22466);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22464, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22468 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22471 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22479 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22482 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22481 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22482, (Optr)&t_block_return);
    Block PBlock22480 = new_Block_with(empty_Array, empty_Array, PThreadedCode22481, 1, PSend22482);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22483 = new_Send((Optr)PSend22479, SMB_and_, 1, (Optr)PBlock22480);
    Array PThreadedCode22478 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22479, (Optr)&t_push_closure, (Optr)PBlock22480, (Optr)&t_send1, (Optr)PSend22483, (Optr)&t_block_return);
    Block PBlock22477 = new_Block_with(empty_Array, empty_Array, PThreadedCode22478, 1, PSend22483);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22487 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22486 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22487);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22490 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22489 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22490, (Optr)&t_block_return);
    Block PBlock22488 = new_Block_with(empty_Array, empty_Array, PThreadedCode22489, 1, PSend22490);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22491 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22488);
    Array PThreadedCode22485 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22486, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22487, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22488, (Optr)&t_send1, (Optr)PSend22491, (Optr)&t_block_return);
    Block PBlock22484 = new_Block_with(empty_Array, empty_Array, PThreadedCode22485, 2, PAssign22486, PSend22491);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22492 = new_Send((Optr)PBlock22477, SMB_whileTrue_, 1, (Optr)PBlock22484);
    Array PThreadedCode22476 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22477, (Optr)&t_push_closure, (Optr)PBlock22484, (Optr)&t_send1, (Optr)PSend22492, (Optr)&t_block_return);
    Block PBlock22475 = new_Block_with(empty_Array, empty_Array, PThreadedCode22476, 1, PSend22492);
    String string_22495 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22497 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22499 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22498 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22499, (Optr)&t_method_return);
    Block PBlock22496 = new_Block_with(PArray22497, empty_Array, PThreadedCode22498, 1, PSend22499);
    // ifNotNil:. 
    Send PSend22500 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22496);
    Constant string_22495_Const = new_Constant((Optr)string_22495);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22501 = new_Send((Optr)string_22495_Const, SMB__append_, 1, (Optr)PSend22500);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22502 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22501);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22503 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22506 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22507 = new_Send((Optr)PSend22506, SMB_not, 0);
    Array PThreadedCode22505 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22506, (Optr)&t_send0, (Optr)PSend22507, (Optr)&t_block_return);
    Block PBlock22504 = new_Block_with(empty_Array, empty_Array, PThreadedCode22505, 1, PSend22507);
    // and:. 
    Send PSend22508 = new_Send((Optr)PSend22503, SMB_and_, 1, (Optr)PBlock22504);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22512 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22513 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22514 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22515 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22514);
    Array PThreadedCode22511 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22512, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22513, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22514, (Optr)&t_send1, (Optr)PSend22515, (Optr)&t_block_return);
    Block PBlock22510 = new_Block_with(empty_Array, empty_Array, PThreadedCode22511, 3, PSend22512, PAssign22513, PSend22515);
    // ifTrue:. 
    Send PSend22509 = new_Send((Optr)PSend22508, SMB_ifTrue_, 1, (Optr)PBlock22510);
    Array PThreadedCode22494 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22495, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22496, (Optr)&t_send1, (Optr)PSend22500, (Optr)&t_send1, (Optr)PSend22501, (Optr)&t_send1, (Optr)PSend22502, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22503, (Optr)&t_push_closure, (Optr)PBlock22504, (Optr)&t_send1, (Optr)PSend22508, (Optr)&t_send_ifTrue_, (Optr)PSend22509, (Optr)PBlock22510, (Optr)&t_block_return);
    Block PBlock22493 = new_Block_with(empty_Array, empty_Array, PThreadedCode22494, 2, PSend22502, PSend22509);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22516 = new_Send((Optr)PBlock22475, SMB_ensure_, 1, (Optr)PBlock22493);
    Array PThreadedCode22474 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22475, (Optr)&t_push_closure, (Optr)PBlock22493, (Optr)&t_send1, (Optr)PSend22516, (Optr)&t_block_return);
    Block PBlock22473 = new_Block_with(empty_Array, empty_Array, PThreadedCode22474, 1, PSend22516);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22518 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22520 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22519 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22520, (Optr)&t_method_return);
    Block PBlock22517 = new_Block_with(PArray22518, empty_Array, PThreadedCode22519, 1, PSend22520);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22521 = new_Send((Optr)PBlock22473, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22517);
    Array PThreadedCode22472 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22473, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22517, (Optr)&t_send2, (Optr)PSend22521, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22470 = new_Block_with(PArray22471, empty_Array, PThreadedCode22472, 2, PSend22521, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22522 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22470);
    Array PThreadedCode22469 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22470, (Optr)&t_send1, (Optr)PSend22522, (Optr)&t_method_return);
    Method PMethod22467 = new_Method_with(empty_Array, PArray22468, empty_Array, PThreadedCode22469, 1, PSend22522);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22467, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22525 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22526 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22529 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22528 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22529, (Optr)&t_block_return);
    Block PBlock22527 = new_Block_with(empty_Array, empty_Array, PThreadedCode22528, 1, PSend22529);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22530 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22527);
    Array PThreadedCode22524 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22525, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22526, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22527, (Optr)&t_send1, (Optr)PSend22530, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22523 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22524, 4, PSend22525, PSend22526, PSend22530, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22523, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22532 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22534 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22533 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22534, (Optr)&t_method_return);
    Method PMethod22531 = new_Method_with(PArray22532, empty_Array, empty_Array, PThreadedCode22533, 1, PSend22534);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22531, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22540 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22542 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22541 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22542, (Optr)&t_method_return);
    Block PBlock22539 = new_Block_with(PArray22540, empty_Array, PThreadedCode22541, 1, PSend22542);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22543 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22539);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22544 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22538 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22539, (Optr)&t_send1, (Optr)PSend22543, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22544, (Optr)&t_block_return);
    Block PBlock22537 = new_Block_with(empty_Array, empty_Array, PThreadedCode22538, 2, PSend22543, PSend22544);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22545 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22537);
    Array PThreadedCode22536 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22537, (Optr)&t_send1, (Optr)PSend22545, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22535 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22536, 2, PSend22545, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22535, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22548 = new_String(L"GET");
    String string_22549 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22548_Const = new_Constant((Optr)string_22548);
    Constant string_22549_Const = new_Constant((Optr)string_22549);
    // with:with:. 
    Send PSend22550 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22548_Const, (Optr)string_22549_Const);
    Array PThreadedCode22547 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22548, (Optr)&t_push1, (Optr)string_22549, (Optr)&t_send2, (Optr)PSend22550, (Optr)&t_method_return);
    Method PMethod22546 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22547, 1, PSend22550);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22546, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22552 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22551 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22552, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22551, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22554 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22555 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22557 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22558 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22563 = new_String(L"*");
    Array PThreadedCode22562 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22563, (Optr)&t_block_return);
    Constant string_22563_Const = new_Constant((Optr)string_22563);
    Block PBlock22561 = new_Block_with(empty_Array, empty_Array, PThreadedCode22562, 1, string_22563_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22566 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22565 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22566, (Optr)&t_block_return);
    Block PBlock22564 = new_Block_with(empty_Array, empty_Array, PThreadedCode22565, 1, PSend22566);
    // ifNil:ifNotNil:. 
    Send PSend22560 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22561, (Optr)PBlock22564);
    Assign PAssign22559 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22560);
    String string_22567 = new_String(L"Listener starting (interface: ");
    Constant string_22567_Const = new_Constant((Optr)string_22567);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22568 = new_Send((Optr)string_22567_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22569 = new_String(L" port: ");
    Constant string_22569_Const = new_Constant((Optr)string_22569);
    // ,. 
    Send PSend22570 = new_Send((Optr)PSend22568, SMB__append_, 1, (Optr)string_22569_Const);
    // ,. 
    Send PSend22571 = new_Send((Optr)PSend22570, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22572 = new_String(L")");
    Constant string_22572_Const = new_Constant((Optr)string_22572);
    // ,. 
    Send PSend22573 = new_Send((Optr)PSend22571, SMB__append_, 1, (Optr)string_22572_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22574 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22573);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22576 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22575 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22576);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22579 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22578 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22579, (Optr)&t_block_return);
    Block PBlock22577 = new_Block_with(empty_Array, empty_Array, PThreadedCode22578, 1, PSend22579);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22582 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22581 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22582, (Optr)&t_block_return);
    Block PBlock22580 = new_Block_with(empty_Array, empty_Array, PThreadedCode22581, 1, PSend22582);
    // ifNil:ifNotNil:. 
    Send PSend22583 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22577, (Optr)PBlock22580);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22584 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22556 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22557, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22558, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22559, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22561, (Optr)&t_push_closure, (Optr)PBlock22564, (Optr)&t_send2, (Optr)PSend22560, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22567, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22568, (Optr)&t_push1, (Optr)string_22569, (Optr)&t_send1, (Optr)PSend22570, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22571, (Optr)&t_push1, (Optr)string_22572, (Optr)&t_send1, (Optr)PSend22573, (Optr)&t_send1, (Optr)PSend22574, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22575, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22576, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22577, (Optr)&t_push_closure, (Optr)PBlock22580, (Optr)&t_send2, (Optr)PSend22583, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22584, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22553 = new_Method_with(PArray22554, PArray22555, empty_Array, PThreadedCode22556, 8, PAssign22557, PAssign22558, PAssign22559, PSend22574, PAssign22575, PSend22583, PSend22584, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22553, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22586 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22586, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22585, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22588 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22590 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22591 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22590);
    Array PThreadedCode22589 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22590, (Optr)&t_send3, (Optr)PSend22591, (Optr)&t_method_return);
    Method PMethod22587 = new_Method_with(PArray22588, empty_Array, empty_Array, PThreadedCode22589, 1, PSend22591);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22587, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22596 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22595 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22596, (Optr)&t_block_return);
    Block PBlock22594 = new_Block_with(empty_Array, empty_Array, PThreadedCode22595, 1, PSend22596);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22597 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22594);
    Assign PAssign22598 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22593 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22594, (Optr)&t_send1, (Optr)PSend22597, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22598, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22592 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22593, 3, PSend22597, PAssign22598, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22592, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22600 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22602 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22601 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22602, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22599 = new_Method_with(PArray22600, empty_Array, empty_Array, PThreadedCode22601, 2, PAssign22602, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22599, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22605 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22606 = new_Send((Optr)PSend22605, SMB_not, 0);
    Array PThreadedCode22604 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22605, (Optr)&t_send0, (Optr)PSend22606, (Optr)&t_method_return);
    Method PMethod22603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22604, 1, PSend22606);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22603, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22608 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22608, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22607, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22610 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22611 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22614 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22616 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22617 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22617_Const = new_Constant((Optr)string_22617);
    // =. 
    Send PSend22618 = new_Send((Optr)PSend22616, SMB__equals_, 1, (Optr)string_22617_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22622 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22623 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22623_Const = new_Constant((Optr)string_22623);
    // send200Response:contentType:. 
    Send PSend22624 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22622, (Optr)string_22623_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22625 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22624);
    Array PThreadedCode22621 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22622, (Optr)&t_push1, (Optr)string_22623, (Optr)&t_send2, (Optr)PSend22624, (Optr)&t_send1, (Optr)PSend22625, (Optr)&t_block_return);
    Block PBlock22620 = new_Block_with(empty_Array, empty_Array, PThreadedCode22621, 1, PSend22625);
    // ifTrue:. 
    Send PSend22619 = new_Send((Optr)PSend22618, SMB_ifTrue_, 1, (Optr)PBlock22620);
    Assign PAssign22626 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22628 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22627 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22628);
    String string_22629 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22629_Const = new_Constant((Optr)string_22629);
    // beginsWith:. 
    Send PSend22630 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22629_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22636 = new_String(L"/");
    Constant string_22636_Const = new_Constant((Optr)string_22636);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22635 = new_Send((Optr)string_22636_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22634 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22635);
    Array PThreadedCode22633 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22634, (Optr)&t_push1, (Optr)string_22636, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22635, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22632 = new_Block_with(empty_Array, empty_Array, PThreadedCode22633, 1, PAssign22634);
    // ifFalse:. 
    Send PSend22631 = new_Send((Optr)PSend22630, SMB_ifFalse_, 1, (Optr)PBlock22632);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22641 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22644 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22643 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22644, (Optr)&t_block_return);
    Block PBlock22642 = new_Block_with(empty_Array, empty_Array, PThreadedCode22643, 1, PSend22644);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22645 = new_Send((Optr)PSend22641, SMB_and_, 1, (Optr)PBlock22642);
    Array PThreadedCode22640 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22641, (Optr)&t_push_closure, (Optr)PBlock22642, (Optr)&t_send1, (Optr)PSend22645, (Optr)&t_block_return);
    Block PBlock22639 = new_Block_with(empty_Array, empty_Array, PThreadedCode22640, 1, PSend22645);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22651 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22650 = new_Block_with(empty_Array, empty_Array, PThreadedCode22651, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22649 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22650);
    Assign PAssign22648 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22649);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22654 = new_Character(L'/');
    Constant char_22654_Const = new_Constant((Optr)char_22654);
    // copyUpToLast:. 
    Send PSend22653 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22654_Const);
    Assign PAssign22652 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22653);
    Array PThreadedCode22647 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22648, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22650, (Optr)&t_send2, (Optr)PSend22649, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22652, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22654, (Optr)&t_send1, (Optr)PSend22653, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22646 = new_Block_with(empty_Array, empty_Array, PThreadedCode22647, 2, PAssign22648, PAssign22652);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22655 = new_Send((Optr)PBlock22639, SMB_whileTrue_, 1, (Optr)PBlock22646);
    String string_22660 = new_String(L"/");
    Constant string_22660_Const = new_Constant((Optr)string_22660);
    Array PThreadedCode22662 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22661 = new_Block_with(empty_Array, empty_Array, PThreadedCode22662, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22659 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_22660_Const, (Optr)PBlock22661);
    Assign PAssign22658 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22659);
    Array PThreadedCode22657 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22658, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_22660, (Optr)&t_push_closure, (Optr)PBlock22661, (Optr)&t_send2, (Optr)PSend22659, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22656 = new_Block_with(empty_Array, empty_Array, PThreadedCode22657, 1, PAssign22658);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22663 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22656);
    Array PThreadedCode22638 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22639, (Optr)&t_push_closure, (Optr)PBlock22646, (Optr)&t_send1, (Optr)PSend22655, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22656, (Optr)&t_send1, (Optr)PSend22663, (Optr)&t_block_return);
    Block PBlock22637 = new_Block_with(empty_Array, empty_Array, PThreadedCode22638, 2, PSend22655, PSend22663);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22664 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22637);
    // method. 
    Send PSend22665 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22666 = new_String(L"OPTIONS");
    Constant string_22666_Const = new_Constant((Optr)string_22666);
    // =. 
    Send PSend22667 = new_Send((Optr)PSend22665, SMB__equals_, 1, (Optr)string_22666_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend22671 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22674 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode22673 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22674, (Optr)&t_block_return);
    Block PBlock22672 = new_Block_with(empty_Array, empty_Array, PThreadedCode22673, 1, PSend22674);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend22677 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode22676 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22677, (Optr)&t_block_return);
    Block PBlock22675 = new_Block_with(empty_Array, empty_Array, PThreadedCode22676, 1, PSend22677);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22678 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22672, (Optr)PBlock22675);
    // ,. 
    Send PSend22679 = new_Send((Optr)PSend22671, SMB__append_, 1, (Optr)PSend22678);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend22680 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend22679);
    Array PThreadedCode22670 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22671, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22672, (Optr)&t_push_closure, (Optr)PBlock22675, (Optr)&t_send2, (Optr)PSend22678, (Optr)&t_send1, (Optr)PSend22679, (Optr)&t_send1, (Optr)PSend22680, (Optr)&t_block_return);
    Block PBlock22669 = new_Block_with(empty_Array, empty_Array, PThreadedCode22670, 1, PSend22680);
    // ifTrue:. 
    Send PSend22668 = new_Send((Optr)PSend22667, SMB_ifTrue_, 1, (Optr)PBlock22669);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend22683 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend22684 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22683);
    Array PThreadedCode22682 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22683, (Optr)&t_send1, (Optr)PSend22684, (Optr)&t_block_return);
    Block PBlock22681 = new_Block_with(empty_Array, empty_Array, PThreadedCode22682, 1, PSend22684);
    // ifNil:. 
    Send PSend22685 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22681);
    // method. 
    Send PSend22686 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22687 = new_String(L"HEAD");
    Constant string_22687_Const = new_Constant((Optr)string_22687);
    // =. 
    Send PSend22688 = new_Send((Optr)PSend22686, SMB__equals_, 1, (Optr)string_22687_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend22691 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend22692 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend22693 = new_Send((Optr)PSend22691, SMB_includes_, 1, (Optr)PSend22692);
    Array PThreadedCode22690 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22691, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22692, (Optr)&t_send1, (Optr)PSend22693, (Optr)&t_block_return);
    Block PBlock22689 = new_Block_with(empty_Array, empty_Array, PThreadedCode22690, 1, PSend22693);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22694 = new_Send((Optr)PSend22688, SMB_or_, 1, (Optr)PBlock22689);
    // builtinHttpMethods. 
    Send PSend22698 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend22699 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend22700 = new_Send((Optr)PSend22698, SMB__append_, 1, (Optr)PSend22699);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend22701 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend22700);
    // escape:. 
    Send PSend22702 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22701);
    Array PThreadedCode22697 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22698, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22699, (Optr)&t_send1, (Optr)PSend22700, (Optr)&t_send1, (Optr)PSend22701, (Optr)&t_send1, (Optr)PSend22702, (Optr)&t_block_return);
    Block PBlock22696 = new_Block_with(empty_Array, empty_Array, PThreadedCode22697, 1, PSend22702);
    // ifFalse:. 
    Send PSend22695 = new_Send((Optr)PSend22694, SMB_ifFalse_, 1, (Optr)PBlock22696);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend22705 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend22706 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend22705, (Optr)VAR_request_0_0);
    Array PThreadedCode22704 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22705, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend22706, (Optr)&t_block_return);
    Block PBlock22703 = new_Block_with(empty_Array, empty_Array, PThreadedCode22704, 1, PSend22706);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22708 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22710 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22709 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22710, (Optr)&t_method_return);
    Block PBlock22707 = new_Block_with(PArray22708, empty_Array, PThreadedCode22709, 1, PSend22710);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22711 = new_Send((Optr)PBlock22703, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22707);
    Array PThreadedCode22615 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22616, (Optr)&t_push1, (Optr)string_22617, (Optr)&t_send1, (Optr)PSend22618, (Optr)&t_send_ifTrue_, (Optr)PSend22619, (Optr)PBlock22620, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22626, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22627, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22628, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22629, (Optr)&t_send1, (Optr)PSend22630, (Optr)&t_send_ifFalse_, (Optr)PSend22631, (Optr)PBlock22632, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22637, (Optr)&t_send1, (Optr)PSend22664, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22665, (Optr)&t_push1, (Optr)string_22666, (Optr)&t_send1, (Optr)PSend22667, (Optr)&t_send_ifTrue_, (Optr)PSend22668, (Optr)PBlock22669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22681, (Optr)&t_send1, (Optr)PSend22685, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22686, (Optr)&t_push1, (Optr)string_22687, (Optr)&t_send1, (Optr)PSend22688, (Optr)&t_push_closure, (Optr)PBlock22689, (Optr)&t_send1, (Optr)PSend22694, (Optr)&t_send_ifFalse_, (Optr)PSend22695, (Optr)PBlock22696, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22703, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22707, (Optr)&t_send2, (Optr)PSend22711, (Optr)&t_method_return);
    Block PBlock22613 = new_Block_with(PArray22614, empty_Array, PThreadedCode22615, 9, PSend22619, PAssign22626, PAssign22627, PSend22631, PSend22664, PSend22668, PSend22685, PSend22695, PSend22711);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22712 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22613);
    Array PThreadedCode22612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22613, (Optr)&t_send1, (Optr)PSend22712, (Optr)&t_method_return);
    Method PMethod22609 = new_Method_with(PArray22610, PArray22611, empty_Array, PThreadedCode22612, 1, PSend22712);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22609, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray22714 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend22716 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22715 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22716, (Optr)&t_method_return);
    Method PMethod22713 = new_Method_with(PArray22714, empty_Array, empty_Array, PThreadedCode22715, 1, PSend22716);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22713, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22718 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22722 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22721 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend22722, (Optr)&t_block_return);
    Block PBlock22720 = new_Block_with(empty_Array, empty_Array, PThreadedCode22721, 1, PSend22722);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22723 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22720);
    Array PThreadedCode22719 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22720, (Optr)&t_send1, (Optr)PSend22723, (Optr)&t_method_return);
    Method PMethod22717 = new_Method_with(PArray22718, empty_Array, empty_Array, PThreadedCode22719, 1, PSend22723);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod22717, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode22725 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22725, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22724, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray22727 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray22728 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_22736 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_22736_Const = new_Constant((Optr)string_22736);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22737 = new_String(L"<h1>Internal Server Error: ");
    Constant string_22737_Const = new_Constant((Optr)string_22737);
    // ,. 
    Send PSend22735 = new_Send((Optr)string_22736_Const, SMB__append_, 1, (Optr)string_22737_Const);
    // ,. 
    Send PSend22734 = new_Send((Optr)PSend22735, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_22738 = new_String(L"</h1><pre>");
    Constant string_22738_Const = new_Constant((Optr)string_22738);
    // ,. 
    Send PSend22733 = new_Send((Optr)PSend22734, SMB__append_, 1, (Optr)string_22738_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22740 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22741 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend22739 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend22740, (Optr)PSend22741);
    // ,. 
    Send PSend22732 = new_Send((Optr)PSend22733, SMB__append_, 1, (Optr)PSend22739);
    String string_22742 = new_String(L"</pre></body></html>");
    Constant string_22742_Const = new_Constant((Optr)string_22742);
    // ,. 
    Send PSend22731 = new_Send((Optr)PSend22732, SMB__append_, 1, (Optr)string_22742_Const);
    Assign PAssign22730 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend22731);
    SmallInt int_500 = new_SmallInt(500);
    String string_22743 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_22743_Const = new_Constant((Optr)string_22743);
    // sendResponseCode:content:type:close:. 
    Send PSend22744 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_22743_Const, (Optr)true_Const);
    Array PThreadedCode22729 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign22730, (Optr)&t_push1, (Optr)string_22736, (Optr)&t_push1, (Optr)string_22737, (Optr)&t_send1, (Optr)PSend22735, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend22734, (Optr)&t_push1, (Optr)string_22738, (Optr)&t_send1, (Optr)PSend22733, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22740, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22741, (Optr)&t_send2, (Optr)PSend22739, (Optr)&t_send1, (Optr)PSend22732, (Optr)&t_push1, (Optr)string_22742, (Optr)&t_send1, (Optr)PSend22731, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_22743, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend22744, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22726 = new_Method_with(PArray22727, PArray22728, empty_Array, PThreadedCode22729, 3, PAssign22730, PSend22744, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod22726, WebClient_Core_WebServer_Class);
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
    Send PSend22751 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend22750 = new_Send((Optr)PSend22751, SMB_serverString, 0);
    Assign PAssign22749 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend22750);
    Array PThreadedCode22748 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22749, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22751, (Optr)&t_send0, (Optr)PSend22750, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22747 = new_Block_with(empty_Array, empty_Array, PThreadedCode22748, 1, PAssign22749);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22752 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock22747);
    Array PThreadedCode22746 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock22747, (Optr)&t_send1, (Optr)PSend22752, (Optr)&t_method_return);
    Method PMethod22745 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22746, 1, PSend22752);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22745, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22754 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22758 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22759 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend22758);
    Array PThreadedCode22757 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend22758, (Optr)&t_send1, (Optr)PSend22759, (Optr)&t_block_return);
    Block PBlock22756 = new_Block_with(empty_Array, empty_Array, PThreadedCode22757, 1, PSend22759);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22760 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock22756);
    Array PThreadedCode22755 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock22756, (Optr)&t_send1, (Optr)PSend22760, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22753 = new_Method_with(PArray22754, empty_Array, empty_Array, PThreadedCode22755, 2, PSend22760, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod22753, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22764 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend22766 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22767 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode22765 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22767, (Optr)&t_method_return);
    Block PBlock22763 = new_Block_with(PArray22764, empty_Array, PThreadedCode22765, 2, PSend22766, PSend22767);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22768 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22769 = new_Send((Optr)PBlock22763, SMB_value_, 1, (Optr)PSend22768);
    Array PThreadedCode22762 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22763, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend22768, (Optr)&t_send1, (Optr)PSend22769, (Optr)&t_method_return);
    Method PMethod22761 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22762, 1, PSend22769);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod22761, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22771 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22773 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22773, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22770 = new_Method_with(PArray22771, empty_Array, empty_Array, PThreadedCode22772, 2, PAssign22773, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22770, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode22775 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22775, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22774, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode22777 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22777, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22776, WebClient_Core_WebServer_Class);
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
    Send PSend22780 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22781 = new_Send((Optr)PSend22780, SMB_serverDate, 0);
    Array PThreadedCode22779 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22780, (Optr)&t_send0, (Optr)PSend22781, (Optr)&t_method_return);
    Method PMethod22778 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22779, 1, PSend22781);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22778, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray22783 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend22785 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend22786 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend22785);
    Array PThreadedCode22784 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22785, (Optr)&t_send2, (Optr)PSend22786, (Optr)&t_method_return);
    Method PMethod22782 = new_Method_with(PArray22783, empty_Array, empty_Array, PThreadedCode22784, 1, PSend22786);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod22782, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray22788 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22790 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22791 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend22790);
    Array PThreadedCode22789 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend22790, (Optr)&t_send1, (Optr)PSend22791, (Optr)&t_method_return);
    Method PMethod22787 = new_Method_with(PArray22788, empty_Array, empty_Array, PThreadedCode22789, 1, PSend22791);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod22787, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray22793 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22796 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_22798 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_22798_Const = new_Constant((Optr)string_22798);
    // nextPutAll:. 
    Send PSend22799 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_22798_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22800 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode22797 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_22798, (Optr)&t_send1, (Optr)PSend22799, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22800, (Optr)&t_method_return);
    Block PBlock22795 = new_Block_with(PArray22796, empty_Array, PThreadedCode22797, 2, PSend22799, PSend22800);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22801 = new_Send((Optr)PBlock22795, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode22794 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22795, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend22801, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22792 = new_Method_with(PArray22793, empty_Array, empty_Array, PThreadedCode22794, 2, PSend22801, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod22792, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray22803 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22805 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22804 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22805, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22802 = new_Method_with(PArray22803, empty_Array, empty_Array, PThreadedCode22804, 2, PAssign22805, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22802, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22807 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode22812 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22811 = new_Block_with(empty_Array, empty_Array, PThreadedCode22812, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend22813 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22811);
    Array PThreadedCode22810 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22811, (Optr)&t_send2, (Optr)PSend22813, (Optr)&t_block_return);
    Block PBlock22809 = new_Block_with(empty_Array, empty_Array, PThreadedCode22810, 1, PSend22813);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22814 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22809);
    Array PThreadedCode22808 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22809, (Optr)&t_send1, (Optr)PSend22814, (Optr)&t_method_return);
    Method PMethod22806 = new_Method_with(PArray22807, empty_Array, empty_Array, PThreadedCode22808, 1, PSend22814);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod22806, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22816 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22818 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22817 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22818, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22815 = new_Method_with(PArray22816, empty_Array, empty_Array, PThreadedCode22817, 2, PAssign22818, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22815, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray22820 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22824 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22825 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22826 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend22824, (Optr)PSend22825);
    Array PThreadedCode22823 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22824, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend22825, (Optr)&t_send2, (Optr)PSend22826, (Optr)&t_block_return);
    Block PBlock22822 = new_Block_with(empty_Array, empty_Array, PThreadedCode22823, 1, PSend22826);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22827 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22822);
    Array PThreadedCode22821 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22822, (Optr)&t_send1, (Optr)PSend22827, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22819 = new_Method_with(PArray22820, empty_Array, empty_Array, PThreadedCode22821, 2, PSend22827, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod22819, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray22829 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22833 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode22835 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22834 = new_Block_with(empty_Array, empty_Array, PThreadedCode22835, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend22836 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend22833, (Optr)PBlock22834);
    Array PThreadedCode22832 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22833, (Optr)&t_push_closure, (Optr)PBlock22834, (Optr)&t_send2, (Optr)PSend22836, (Optr)&t_block_return);
    Block PBlock22831 = new_Block_with(empty_Array, empty_Array, PThreadedCode22832, 1, PSend22836);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22837 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22831);
    Array PThreadedCode22830 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22831, (Optr)&t_send1, (Optr)PSend22837, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22828 = new_Method_with(PArray22829, empty_Array, empty_Array, PThreadedCode22830, 2, PSend22837, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod22828, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_22840 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode22839 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22840, (Optr)&t_method_return);
    Constant string_22840_Const = new_Constant((Optr)string_22840);
    Method PMethod22838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22839, 1, string_22840_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod22838, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22845 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign22846 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode22844 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend22845, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22846, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22843 = new_Block_with(empty_Array, empty_Array, PThreadedCode22844, 2, PSend22845, PAssign22846);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22847 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock22843);
    Array PThreadedCode22842 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22843, (Optr)&t_send1, (Optr)PSend22847, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22842, 2, PSend22847, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod22841, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray22849 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray22852 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend22856 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend22855 = new_Send((Optr)PSend22856, SMB_asUTC, 0);
    Assign PAssign22854 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend22855);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend22857 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_22858 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22858_Const = new_Constant((Optr)string_22858);
    // ,. 
    Send PSend22859 = new_Send((Optr)PSend22857, SMB__append_, 1, (Optr)string_22858_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22860 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend22859);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend22861 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22863 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend22865 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend22866 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend22867 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4725 = new_Character(L' ');
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // add:. 
    Send PSend22868 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4725_Const);
    // add:. 
    Send PSend22869 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend22870 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend22871 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22872 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode22864 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22865, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22866, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend22867, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend22868, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22870, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22871, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22872, (Optr)&t_method_return);
    Block PBlock22862 = new_Block_with(PArray22863, empty_Array, PThreadedCode22864, 8, PSend22865, PSend22866, PSend22867, PSend22868, PSend22869, PSend22870, PSend22871, PSend22872);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22873 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22874 = new_Send((Optr)PBlock22862, SMB_value_, 1, (Optr)PSend22873);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22875 = new_Send((Optr)PSend22874, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend22876 = new_Send((Optr)PSend22861, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend22875);
    Array PArray22878 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend22880 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend22881 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend22882 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend22881);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend22883 = new_Send((Optr)PSend22882, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend22884 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend22883);
    Array PThreadedCode22879 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22880, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22881, (Optr)&t_send1, (Optr)PSend22882, (Optr)&t_send0, (Optr)PSend22883, (Optr)&t_send1, (Optr)PSend22884, (Optr)&t_method_return);
    Block PBlock22877 = new_Block_with(PArray22878, empty_Array, PThreadedCode22879, 2, PSend22880, PSend22884);
    // value:. 
    Send PSend22885 = new_Send((Optr)PBlock22877, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_22886 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_22886_Const = new_Constant((Optr)string_22886);
    // writeAll:. 
    Send PSend22887 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_22886_Const);
    Array PThreadedCode22853 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign22854, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend22856, (Optr)&t_send0, (Optr)PSend22855, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22857, (Optr)&t_push1, (Optr)string_22858, (Optr)&t_send1, (Optr)PSend22859, (Optr)&t_send1, (Optr)PSend22860, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend22861, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock22862, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22873, (Optr)&t_send1, (Optr)PSend22874, (Optr)&t_send0, (Optr)PSend22875, (Optr)&t_send2, (Optr)PSend22876, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22877, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend22885, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_22886, (Optr)&t_send1, (Optr)PSend22887, (Optr)&t_method_return);
    Block PBlock22851 = new_Block_with(PArray22852, empty_Array, PThreadedCode22853, 5, PAssign22854, PSend22860, PSend22876, PSend22885, PSend22887);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend22888 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock22851);
    Array PThreadedCode22850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock22851, (Optr)&t_send1, (Optr)PSend22888, (Optr)&t_method_return);
    Method PMethod22848 = new_Method_with(empty_Array, PArray22849, empty_Array, PThreadedCode22850, 1, PSend22888);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22848, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_22891 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode22890 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22891, (Optr)&t_method_return);
    Constant string_22891_Const = new_Constant((Optr)string_22891);
    Method PMethod22889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22890, 1, string_22891_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod22889, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_22894 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode22893 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22894, (Optr)&t_method_return);
    Constant string_22894_Const = new_Constant((Optr)string_22894);
    Method PMethod22892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22893, 1, string_22894_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22892, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22900 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign22899 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend22900);
    Array PThreadedCode22898 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22899, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22900, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22897 = new_Block_with(empty_Array, empty_Array, PThreadedCode22898, 1, PAssign22899);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22901 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock22897);
    Array PThreadedCode22896 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock22897, (Optr)&t_send1, (Optr)PSend22901, (Optr)&t_method_return);
    Method PMethod22895 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22896, 1, PSend22901);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod22895, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray22903 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22906 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22905 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend22906);
    // new. 
    Send PSend22908 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22907 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend22908);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend22909 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend22910 = new_Send((Optr)PSend22909, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend22911 = new_Send((Optr)PSend22910, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend22912 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_22913 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray22915 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend22917 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_22918 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22918_Const = new_Constant((Optr)string_22918);
    // send200Response:contentType:. 
    Send PSend22919 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend22917, (Optr)string_22918_Const);
    Array PThreadedCode22916 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22917, (Optr)&t_push1, (Optr)string_22918, (Optr)&t_send2, (Optr)PSend22919, (Optr)&t_method_return);
    Block PBlock22914 = new_Block_with(PArray22915, empty_Array, PThreadedCode22916, 1, PSend22919);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_22913_Const = new_Constant((Optr)string_22913);
    // addService:action:. 
    Send PSend22920 = new_Send((Optr)PSend22912, SMB_addService_action_, 2, (Optr)string_22913_Const, (Optr)PBlock22914);
    Array PThreadedCode22904 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22905, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22906, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22907, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22908, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22909, (Optr)&t_send0, (Optr)PSend22910, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend22911, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend22912, (Optr)&t_push1, (Optr)string_22913, (Optr)&t_push_closure, (Optr)PBlock22914, (Optr)&t_send2, (Optr)PSend22920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22902 = new_Method_with(empty_Array, PArray22903, empty_Array, PThreadedCode22904, 5, PAssign22905, PAssign22907, PSend22911, PSend22920, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod22902, HEADER(WebClient_Core_WebServer_Class));
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