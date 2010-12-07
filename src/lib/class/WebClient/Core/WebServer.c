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
    Array PArray22420 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22421 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22431 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22430 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22431, (Optr)&t_block_return);
    Block PBlock22429 = new_Block_with(empty_Array, empty_Array, PThreadedCode22430, 1, PSend22431);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22433 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22435 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22434 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22435, (Optr)&t_method_return);
    Block PBlock22432 = new_Block_with(PArray22433, empty_Array, PThreadedCode22434, 1, PSend22435);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22436 = new_Send((Optr)PBlock22429, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22432);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22439 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22441 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22440 = new_Block_with(empty_Array, empty_Array, PThreadedCode22441, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22442 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22439, (Optr)PBlock22440);
    Array PThreadedCode22438 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22439, (Optr)&t_push_closure, (Optr)PBlock22440, (Optr)&t_send2, (Optr)PSend22442, (Optr)&t_block_return);
    Block PBlock22437 = new_Block_with(empty_Array, empty_Array, PThreadedCode22438, 1, PSend22442);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22443 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22437);
    Array PThreadedCode22428 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22429, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22432, (Optr)&t_send2, (Optr)PSend22436, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22437, (Optr)&t_send1, (Optr)PSend22443, (Optr)&t_block_return);
    Block PBlock22427 = new_Block_with(empty_Array, empty_Array, PThreadedCode22428, 2, PSend22436, PSend22443);
    // destroy. 
    Send PSend22446 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22445 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22446, (Optr)&t_block_return);
    Block PBlock22444 = new_Block_with(empty_Array, empty_Array, PThreadedCode22445, 1, PSend22446);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22447 = new_Send((Optr)PBlock22427, SMB_ensure_, 1, (Optr)PBlock22444);
    Array PThreadedCode22426 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22427, (Optr)&t_push_closure, (Optr)PBlock22444, (Optr)&t_send1, (Optr)PSend22447, (Optr)&t_block_return);
    Block PBlock22425 = new_Block_with(empty_Array, empty_Array, PThreadedCode22426, 1, PSend22447);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22424 = new_Send((Optr)PBlock22425, SMB_fork, 0);
    Assign PAssign22423 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22424);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22450 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22449 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22450, (Optr)&t_block_return);
    Block PBlock22448 = new_Block_with(empty_Array, empty_Array, PThreadedCode22449, 1, PSend22450);
    // critical:. 
    Send PSend22451 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22448);
    Array PThreadedCode22422 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22423, (Optr)&t_push_closure, (Optr)PBlock22425, (Optr)&t_send0, (Optr)PSend22424, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22448, (Optr)&t_send1, (Optr)PSend22451, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22419 = new_Method_with(PArray22420, PArray22421, empty_Array, PThreadedCode22422, 3, PAssign22423, PSend22451, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22419, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22453 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22458 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22457 = new_Block_with(empty_Array, empty_Array, PThreadedCode22458, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22459 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22457);
    Array PThreadedCode22456 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22457, (Optr)&t_send2, (Optr)PSend22459, (Optr)&t_block_return);
    Block PBlock22455 = new_Block_with(empty_Array, empty_Array, PThreadedCode22456, 1, PSend22459);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22460 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22455);
    Array PThreadedCode22454 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22455, (Optr)&t_send1, (Optr)PSend22460, (Optr)&t_method_return);
    Method PMethod22452 = new_Method_with(PArray22453, empty_Array, empty_Array, PThreadedCode22454, 1, PSend22460);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22452, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22462 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22462, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22461, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22465 = new_String(L"HEAD");
    String string_22466 = new_String(L"TRACE");
    String string_22467 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22465_Const = new_Constant((Optr)string_22465);
    Constant string_22466_Const = new_Constant((Optr)string_22466);
    Constant string_22467_Const = new_Constant((Optr)string_22467);
    // with:with:with:. 
    Send PSend22468 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22465_Const, (Optr)string_22466_Const, (Optr)string_22467_Const);
    Array PThreadedCode22464 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22465, (Optr)&t_push1, (Optr)string_22466, (Optr)&t_push1, (Optr)string_22467, (Optr)&t_send3, (Optr)PSend22468, (Optr)&t_method_return);
    Method PMethod22463 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22464, 1, PSend22468);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22463, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22470 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22473 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22477 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22476 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22477, (Optr)&t_block_return);
    Block PBlock22475 = new_Block_with(empty_Array, empty_Array, PThreadedCode22476, 1, PSend22477);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22478 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22475);
    Array PThreadedCode22474 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22475, (Optr)&t_send1, (Optr)PSend22478, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22472 = new_Block_with(PArray22473, empty_Array, PThreadedCode22474, 2, PSend22478, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22479 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22472);
    Array PThreadedCode22471 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22472, (Optr)&t_send1, (Optr)PSend22479, (Optr)&t_method_return);
    Method PMethod22469 = new_Method_with(PArray22470, empty_Array, empty_Array, PThreadedCode22471, 1, PSend22479);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22469, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22481 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22483 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22482 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22483, (Optr)&t_method_return);
    Method PMethod22480 = new_Method_with(PArray22481, empty_Array, empty_Array, PThreadedCode22482, 1, PSend22483);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22480, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22485 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22484 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22485, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22484, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22487 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22488 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22492 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22492_Const = new_Constant((Optr)string_22492);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22493 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22493_Const = new_Constant((Optr)string_22493);
    // ,. 
    Send PSend22491 = new_Send((Optr)string_22492_Const, SMB__append_, 1, (Optr)string_22493_Const);
    Assign PAssign22490 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22491);
    String string_22496 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22497 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22496_Const = new_Constant((Optr)string_22496);
    // ,. 
    Send PSend22498 = new_Send((Optr)string_22496_Const, SMB__append_, 1, (Optr)PSend22497);
    String string_22499 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22499_Const = new_Constant((Optr)string_22499);
    // ,. 
    Send PSend22500 = new_Send((Optr)PSend22498, SMB__append_, 1, (Optr)string_22499_Const);
    // crlf. 
    Send PSend22501 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22502 = new_Send((Optr)PSend22500, SMB__append_, 1, (Optr)PSend22501);
    String string_22503 = new_String(L"Connection: close");
    Constant string_22503_Const = new_Constant((Optr)string_22503);
    // ,. 
    Send PSend22504 = new_Send((Optr)PSend22502, SMB__append_, 1, (Optr)string_22503_Const);
    // crlf. 
    Send PSend22505 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22506 = new_Send((Optr)PSend22504, SMB__append_, 1, (Optr)PSend22505);
    String string_22507 = new_String(L"Content-Length: ");
    Constant string_22507_Const = new_Constant((Optr)string_22507);
    // ,. 
    Send PSend22508 = new_Send((Optr)PSend22506, SMB__append_, 1, (Optr)string_22507_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22509 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22510 = new_Send((Optr)PSend22509, SMB_asString, 0);
    // ,. 
    Send PSend22511 = new_Send((Optr)PSend22508, SMB__append_, 1, (Optr)PSend22510);
    // crlf. 
    Send PSend22512 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22513 = new_Send((Optr)PSend22511, SMB__append_, 1, (Optr)PSend22512);
    // crlf. 
    Send PSend22514 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22515 = new_Send((Optr)PSend22513, SMB__append_, 1, (Optr)PSend22514);
    // ,. 
    Send PSend22516 = new_Send((Optr)PSend22515, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22517 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22516);
    Array PThreadedCode22495 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22496, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22497, (Optr)&t_send1, (Optr)PSend22498, (Optr)&t_push1, (Optr)string_22499, (Optr)&t_send1, (Optr)PSend22500, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22501, (Optr)&t_send1, (Optr)PSend22502, (Optr)&t_push1, (Optr)string_22503, (Optr)&t_send1, (Optr)PSend22504, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22505, (Optr)&t_send1, (Optr)PSend22506, (Optr)&t_push1, (Optr)string_22507, (Optr)&t_send1, (Optr)PSend22508, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22509, (Optr)&t_send0, (Optr)PSend22510, (Optr)&t_send1, (Optr)PSend22511, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22512, (Optr)&t_send1, (Optr)PSend22513, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22514, (Optr)&t_send1, (Optr)PSend22515, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22516, (Optr)&t_send1, (Optr)PSend22517, (Optr)&t_block_return);
    Block PBlock22494 = new_Block_with(empty_Array, empty_Array, PThreadedCode22495, 1, PSend22517);
    Array PThreadedCode22519 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22518 = new_Block_with(empty_Array, empty_Array, PThreadedCode22519, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22520 = new_Send((Optr)PBlock22494, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22518);
    Array PThreadedCode22489 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22490, (Optr)&t_push1, (Optr)string_22492, (Optr)&t_push1, (Optr)string_22493, (Optr)&t_send1, (Optr)PSend22491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22494, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22518, (Optr)&t_send2, (Optr)PSend22520, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22486 = new_Method_with(PArray22487, PArray22488, empty_Array, PThreadedCode22489, 3, PAssign22490, PSend22520, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22486, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22522 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22524 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22523 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22524, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22521 = new_Method_with(PArray22522, empty_Array, empty_Array, PThreadedCode22523, 1, PAssign22524);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22521, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22526 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22525 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22526, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22525, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22529 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22534 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22533 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22534, (Optr)&t_block_return);
    Block PBlock22532 = new_Block_with(empty_Array, empty_Array, PThreadedCode22533, 1, PSend22534);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22531 = new_Send((Optr)PBlock22532, SMB_fork, 0);
    Assign PAssign22530 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22531);
    Array PThreadedCode22528 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22529, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22530, (Optr)&t_push_closure, (Optr)PBlock22532, (Optr)&t_send0, (Optr)PSend22531, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22527 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22528, 3, PSend22529, PAssign22530, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22527, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22538 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22537 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22538);
    // new. 
    Send PSend22540 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22539 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22540);
    // new. 
    Send PSend22542 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22541 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22542);
    // new. 
    Send PSend22544 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22543 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22544);
    // new. 
    Send PSend22546 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22545 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22546);
    // new. 
    Send PSend22548 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22547 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22548);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22550 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22553 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22555 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22556 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22554 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22555, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22556, (Optr)&t_method_return);
    Block PBlock22552 = new_Block_with(PArray22553, empty_Array, PThreadedCode22554, 2, PSend22555, PSend22556);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22557 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22558 = new_Send((Optr)PBlock22552, SMB_value_, 1, (Optr)PSend22557);
    Array PThreadedCode22551 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22552, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22557, (Optr)&t_send1, (Optr)PSend22558, (Optr)&t_method_return);
    Block PBlock22549 = new_Block_with(PArray22550, empty_Array, PThreadedCode22551, 1, PSend22558);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22559 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22549);
    Array PThreadedCode22536 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22537, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22538, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22539, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22540, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22541, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22542, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22543, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22544, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22545, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22546, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22547, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22548, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22549, (Optr)&t_send1, (Optr)PSend22559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22535 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22536, 8, PAssign22537, PAssign22539, PAssign22541, PAssign22543, PAssign22545, PAssign22547, PSend22559, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22535, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22561 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22563 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22562 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22563, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22560 = new_Method_with(PArray22561, empty_Array, empty_Array, PThreadedCode22562, 2, PAssign22563, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22560, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22565 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22566 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22569 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22576 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22575 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22576);
    Array PThreadedCode22574 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22575, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22576, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22573 = new_Block_with(empty_Array, empty_Array, PThreadedCode22574, 1, PAssign22575);
    String string_22579 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22579_Const = new_Constant((Optr)string_22579);
    // error:. 
    Send PSend22580 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22579_Const);
    Array PThreadedCode22578 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22579, (Optr)&t_send1, (Optr)PSend22580, (Optr)&t_block_return);
    Block PBlock22577 = new_Block_with(empty_Array, empty_Array, PThreadedCode22578, 1, PSend22580);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22581 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22573, (Optr)PBlock22577);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22584 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22583 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22584, (Optr)&t_block_return);
    Block PBlock22582 = new_Block_with(empty_Array, empty_Array, PThreadedCode22583, 1, PSend22584);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22587 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22590 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22591 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22590);
    Array PThreadedCode22589 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22590, (Optr)&t_send1, (Optr)PSend22591, (Optr)&t_block_return);
    Block PBlock22588 = new_Block_with(empty_Array, empty_Array, PThreadedCode22589, 1, PSend22591);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22592 = new_Send((Optr)PSend22587, SMB_ifNil_, 1, (Optr)PBlock22588);
    String string_22593 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22593_Const = new_Constant((Optr)string_22593);
    // warn:. 
    Send PSend22594 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22593_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22596 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22595 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22596);
    String string_22597 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22597_Const = new_Constant((Optr)string_22597);
    // warn:. 
    Send PSend22598 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22597_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22601 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22600 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22601, (Optr)&t_block_return);
    Block PBlock22599 = new_Block_with(empty_Array, empty_Array, PThreadedCode22600, 1, PSend22601);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22603 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22605 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22606 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22605);
    Array PThreadedCode22604 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22605, (Optr)&t_send1, (Optr)PSend22606, (Optr)&t_method_return);
    Block PBlock22602 = new_Block_with(PArray22603, empty_Array, PThreadedCode22604, 1, PSend22606);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22607 = new_Send((Optr)PBlock22599, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22602);
    String string_22608 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22608_Const = new_Constant((Optr)string_22608);
    // warn:. 
    Send PSend22609 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22608_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22610 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22586 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22587, (Optr)&t_push_closure, (Optr)PBlock22588, (Optr)&t_send1, (Optr)PSend22592, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22593, (Optr)&t_send1, (Optr)PSend22594, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22595, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22596, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22597, (Optr)&t_send1, (Optr)PSend22598, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22599, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22602, (Optr)&t_send2, (Optr)PSend22607, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22608, (Optr)&t_send1, (Optr)PSend22609, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22610, (Optr)&t_block_return);
    Block PBlock22585 = new_Block_with(empty_Array, empty_Array, PThreadedCode22586, 7, PSend22592, PSend22594, PAssign22595, PSend22598, PSend22607, PSend22609, PSend22610);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22611 = new_Send((Optr)PBlock22582, SMB_whileTrue_, 1, (Optr)PBlock22585);
    Array PThreadedCode22572 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22573, (Optr)&t_push_closure, (Optr)PBlock22577, (Optr)&t_send2, (Optr)PSend22581, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22582, (Optr)&t_push_closure, (Optr)PBlock22585, (Optr)&t_send1, (Optr)PSend22611, (Optr)&t_block_return);
    Block PBlock22571 = new_Block_with(empty_Array, empty_Array, PThreadedCode22572, 2, PSend22581, PSend22611);
    Array PArray22613 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22615 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22614 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22615, (Optr)&t_method_return);
    Block PBlock22612 = new_Block_with(PArray22613, empty_Array, PThreadedCode22614, 1, PSend22615);
    // on:do:. 
    Send PSend22616 = new_Send((Optr)PBlock22571, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22612);
    Array PThreadedCode22570 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22571, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22612, (Optr)&t_send2, (Optr)PSend22616, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22568 = new_Block_with(PArray22569, empty_Array, PThreadedCode22570, 2, PSend22616, self);
    // on:. 
    Send PSend22617 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22568);
    Array PThreadedCode22567 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22568, (Optr)&t_send1, (Optr)PSend22617, (Optr)&t_method_return);
    Method PMethod22564 = new_Method_with(PArray22565, PArray22566, empty_Array, PThreadedCode22567, 1, PSend22617);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22564, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22619 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22619, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22618, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22621 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22621, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22620, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22623 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22625 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22625, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22622 = new_Method_with(PArray22623, empty_Array, empty_Array, PThreadedCode22624, 2, PAssign22625, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22622, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22628 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22627 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22628, (Optr)&t_method_return);
    Method PMethod22626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22627, 1, PSend22628);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22626, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22630 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22633 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22641 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22644 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22643 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22644, (Optr)&t_block_return);
    Block PBlock22642 = new_Block_with(empty_Array, empty_Array, PThreadedCode22643, 1, PSend22644);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22645 = new_Send((Optr)PSend22641, SMB_and_, 1, (Optr)PBlock22642);
    Array PThreadedCode22640 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22641, (Optr)&t_push_closure, (Optr)PBlock22642, (Optr)&t_send1, (Optr)PSend22645, (Optr)&t_block_return);
    Block PBlock22639 = new_Block_with(empty_Array, empty_Array, PThreadedCode22640, 1, PSend22645);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22649 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22648 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22649);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22652 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22651 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22652, (Optr)&t_block_return);
    Block PBlock22650 = new_Block_with(empty_Array, empty_Array, PThreadedCode22651, 1, PSend22652);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22653 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22650);
    Array PThreadedCode22647 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22648, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22649, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22650, (Optr)&t_send1, (Optr)PSend22653, (Optr)&t_block_return);
    Block PBlock22646 = new_Block_with(empty_Array, empty_Array, PThreadedCode22647, 2, PAssign22648, PSend22653);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22654 = new_Send((Optr)PBlock22639, SMB_whileTrue_, 1, (Optr)PBlock22646);
    Array PThreadedCode22638 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22639, (Optr)&t_push_closure, (Optr)PBlock22646, (Optr)&t_send1, (Optr)PSend22654, (Optr)&t_block_return);
    Block PBlock22637 = new_Block_with(empty_Array, empty_Array, PThreadedCode22638, 1, PSend22654);
    String string_22657 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22659 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22661 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22660 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22661, (Optr)&t_method_return);
    Block PBlock22658 = new_Block_with(PArray22659, empty_Array, PThreadedCode22660, 1, PSend22661);
    // ifNotNil:. 
    Send PSend22662 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22658);
    Constant string_22657_Const = new_Constant((Optr)string_22657);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22663 = new_Send((Optr)string_22657_Const, SMB__append_, 1, (Optr)PSend22662);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22664 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22663);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22665 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22668 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22669 = new_Send((Optr)PSend22668, SMB_not, 0);
    Array PThreadedCode22667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22668, (Optr)&t_send0, (Optr)PSend22669, (Optr)&t_block_return);
    Block PBlock22666 = new_Block_with(empty_Array, empty_Array, PThreadedCode22667, 1, PSend22669);
    // and:. 
    Send PSend22670 = new_Send((Optr)PSend22665, SMB_and_, 1, (Optr)PBlock22666);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22674 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22675 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22676 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22677 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22676);
    Array PThreadedCode22673 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22674, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22675, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22676, (Optr)&t_send1, (Optr)PSend22677, (Optr)&t_block_return);
    Block PBlock22672 = new_Block_with(empty_Array, empty_Array, PThreadedCode22673, 3, PSend22674, PAssign22675, PSend22677);
    // ifTrue:. 
    Send PSend22671 = new_Send((Optr)PSend22670, SMB_ifTrue_, 1, (Optr)PBlock22672);
    Array PThreadedCode22656 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22657, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22658, (Optr)&t_send1, (Optr)PSend22662, (Optr)&t_send1, (Optr)PSend22663, (Optr)&t_send1, (Optr)PSend22664, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22665, (Optr)&t_push_closure, (Optr)PBlock22666, (Optr)&t_send1, (Optr)PSend22670, (Optr)&t_send_ifTrue_, (Optr)PSend22671, (Optr)PBlock22672, (Optr)&t_block_return);
    Block PBlock22655 = new_Block_with(empty_Array, empty_Array, PThreadedCode22656, 2, PSend22664, PSend22671);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22678 = new_Send((Optr)PBlock22637, SMB_ensure_, 1, (Optr)PBlock22655);
    Array PThreadedCode22636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22637, (Optr)&t_push_closure, (Optr)PBlock22655, (Optr)&t_send1, (Optr)PSend22678, (Optr)&t_block_return);
    Block PBlock22635 = new_Block_with(empty_Array, empty_Array, PThreadedCode22636, 1, PSend22678);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22680 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22682 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22681 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22682, (Optr)&t_method_return);
    Block PBlock22679 = new_Block_with(PArray22680, empty_Array, PThreadedCode22681, 1, PSend22682);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22683 = new_Send((Optr)PBlock22635, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22679);
    Array PThreadedCode22634 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22635, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22679, (Optr)&t_send2, (Optr)PSend22683, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22632 = new_Block_with(PArray22633, empty_Array, PThreadedCode22634, 2, PSend22683, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22684 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22632);
    Array PThreadedCode22631 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22632, (Optr)&t_send1, (Optr)PSend22684, (Optr)&t_method_return);
    Method PMethod22629 = new_Method_with(empty_Array, PArray22630, empty_Array, PThreadedCode22631, 1, PSend22684);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22629, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22687 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22688 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22691 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22690 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22691, (Optr)&t_block_return);
    Block PBlock22689 = new_Block_with(empty_Array, empty_Array, PThreadedCode22690, 1, PSend22691);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22692 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22689);
    Array PThreadedCode22686 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22687, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22688, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22689, (Optr)&t_send1, (Optr)PSend22692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22686, 4, PSend22687, PSend22688, PSend22692, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22685, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22694 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22696 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22695 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22696, (Optr)&t_method_return);
    Method PMethod22693 = new_Method_with(PArray22694, empty_Array, empty_Array, PThreadedCode22695, 1, PSend22696);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22693, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22702 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22704 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22703 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22704, (Optr)&t_method_return);
    Block PBlock22701 = new_Block_with(PArray22702, empty_Array, PThreadedCode22703, 1, PSend22704);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22705 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22701);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22706 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22700 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22701, (Optr)&t_send1, (Optr)PSend22705, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22706, (Optr)&t_block_return);
    Block PBlock22699 = new_Block_with(empty_Array, empty_Array, PThreadedCode22700, 2, PSend22705, PSend22706);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22707 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22699);
    Array PThreadedCode22698 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22699, (Optr)&t_send1, (Optr)PSend22707, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22697 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22698, 2, PSend22707, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22697, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22710 = new_String(L"GET");
    String string_22711 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22710_Const = new_Constant((Optr)string_22710);
    Constant string_22711_Const = new_Constant((Optr)string_22711);
    // with:with:. 
    Send PSend22712 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22710_Const, (Optr)string_22711_Const);
    Array PThreadedCode22709 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22710, (Optr)&t_push1, (Optr)string_22711, (Optr)&t_send2, (Optr)PSend22712, (Optr)&t_method_return);
    Method PMethod22708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22709, 1, PSend22712);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22708, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22714 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22714, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22713, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22716 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22717 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22719 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22720 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22725 = new_String(L"*");
    Array PThreadedCode22724 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22725, (Optr)&t_block_return);
    Constant string_22725_Const = new_Constant((Optr)string_22725);
    Block PBlock22723 = new_Block_with(empty_Array, empty_Array, PThreadedCode22724, 1, string_22725_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22728 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22727 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22728, (Optr)&t_block_return);
    Block PBlock22726 = new_Block_with(empty_Array, empty_Array, PThreadedCode22727, 1, PSend22728);
    // ifNil:ifNotNil:. 
    Send PSend22722 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22723, (Optr)PBlock22726);
    Assign PAssign22721 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22722);
    String string_22729 = new_String(L"Listener starting (interface: ");
    Constant string_22729_Const = new_Constant((Optr)string_22729);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22730 = new_Send((Optr)string_22729_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22731 = new_String(L" port: ");
    Constant string_22731_Const = new_Constant((Optr)string_22731);
    // ,. 
    Send PSend22732 = new_Send((Optr)PSend22730, SMB__append_, 1, (Optr)string_22731_Const);
    // ,. 
    Send PSend22733 = new_Send((Optr)PSend22732, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22734 = new_String(L")");
    Constant string_22734_Const = new_Constant((Optr)string_22734);
    // ,. 
    Send PSend22735 = new_Send((Optr)PSend22733, SMB__append_, 1, (Optr)string_22734_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22736 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22735);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22738 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22737 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22738);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22741 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22740 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22741, (Optr)&t_block_return);
    Block PBlock22739 = new_Block_with(empty_Array, empty_Array, PThreadedCode22740, 1, PSend22741);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22744 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22743 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22744, (Optr)&t_block_return);
    Block PBlock22742 = new_Block_with(empty_Array, empty_Array, PThreadedCode22743, 1, PSend22744);
    // ifNil:ifNotNil:. 
    Send PSend22745 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22739, (Optr)PBlock22742);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22746 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22718 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22719, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22720, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22721, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22723, (Optr)&t_push_closure, (Optr)PBlock22726, (Optr)&t_send2, (Optr)PSend22722, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22729, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22730, (Optr)&t_push1, (Optr)string_22731, (Optr)&t_send1, (Optr)PSend22732, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22733, (Optr)&t_push1, (Optr)string_22734, (Optr)&t_send1, (Optr)PSend22735, (Optr)&t_send1, (Optr)PSend22736, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22737, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22738, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22739, (Optr)&t_push_closure, (Optr)PBlock22742, (Optr)&t_send2, (Optr)PSend22745, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22746, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22715 = new_Method_with(PArray22716, PArray22717, empty_Array, PThreadedCode22718, 8, PAssign22719, PAssign22720, PAssign22721, PSend22736, PAssign22737, PSend22745, PSend22746, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22715, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22748 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22748, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22747, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22750 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22752 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22753 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22752);
    Array PThreadedCode22751 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22752, (Optr)&t_send3, (Optr)PSend22753, (Optr)&t_method_return);
    Method PMethod22749 = new_Method_with(PArray22750, empty_Array, empty_Array, PThreadedCode22751, 1, PSend22753);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22749, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22758 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22757 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22758, (Optr)&t_block_return);
    Block PBlock22756 = new_Block_with(empty_Array, empty_Array, PThreadedCode22757, 1, PSend22758);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22759 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22756);
    Assign PAssign22760 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22755 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22756, (Optr)&t_send1, (Optr)PSend22759, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22760, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22754 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22755, 3, PSend22759, PAssign22760, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22754, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22762 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22764 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22763 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22764, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22761 = new_Method_with(PArray22762, empty_Array, empty_Array, PThreadedCode22763, 2, PAssign22764, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22761, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22767 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22768 = new_Send((Optr)PSend22767, SMB_not, 0);
    Array PThreadedCode22766 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22767, (Optr)&t_send0, (Optr)PSend22768, (Optr)&t_method_return);
    Method PMethod22765 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22766, 1, PSend22768);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22765, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22770 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22770, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22769, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22772 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22773 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22776 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22778 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22779 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22779_Const = new_Constant((Optr)string_22779);
    // =. 
    Send PSend22780 = new_Send((Optr)PSend22778, SMB__equals_, 1, (Optr)string_22779_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22784 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22785 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22785_Const = new_Constant((Optr)string_22785);
    // send200Response:contentType:. 
    Send PSend22786 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22784, (Optr)string_22785_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22787 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22786);
    Array PThreadedCode22783 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22784, (Optr)&t_push1, (Optr)string_22785, (Optr)&t_send2, (Optr)PSend22786, (Optr)&t_send1, (Optr)PSend22787, (Optr)&t_block_return);
    Block PBlock22782 = new_Block_with(empty_Array, empty_Array, PThreadedCode22783, 1, PSend22787);
    // ifTrue:. 
    Send PSend22781 = new_Send((Optr)PSend22780, SMB_ifTrue_, 1, (Optr)PBlock22782);
    Assign PAssign22788 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22790 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22789 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22790);
    String string_22791 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22791_Const = new_Constant((Optr)string_22791);
    // beginsWith:. 
    Send PSend22792 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22791_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22798 = new_String(L"/");
    Constant string_22798_Const = new_Constant((Optr)string_22798);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22797 = new_Send((Optr)string_22798_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22796 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22797);
    Array PThreadedCode22795 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22796, (Optr)&t_push1, (Optr)string_22798, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22797, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22794 = new_Block_with(empty_Array, empty_Array, PThreadedCode22795, 1, PAssign22796);
    // ifFalse:. 
    Send PSend22793 = new_Send((Optr)PSend22792, SMB_ifFalse_, 1, (Optr)PBlock22794);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22803 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22806 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22805 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22806, (Optr)&t_block_return);
    Block PBlock22804 = new_Block_with(empty_Array, empty_Array, PThreadedCode22805, 1, PSend22806);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22807 = new_Send((Optr)PSend22803, SMB_and_, 1, (Optr)PBlock22804);
    Array PThreadedCode22802 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22803, (Optr)&t_push_closure, (Optr)PBlock22804, (Optr)&t_send1, (Optr)PSend22807, (Optr)&t_block_return);
    Block PBlock22801 = new_Block_with(empty_Array, empty_Array, PThreadedCode22802, 1, PSend22807);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22813 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22812 = new_Block_with(empty_Array, empty_Array, PThreadedCode22813, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22811 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22812);
    Assign PAssign22810 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22811);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22816 = new_Character(L'/');
    Constant char_22816_Const = new_Constant((Optr)char_22816);
    // copyUpToLast:. 
    Send PSend22815 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22816_Const);
    Assign PAssign22814 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22815);
    Array PThreadedCode22809 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22810, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22812, (Optr)&t_send2, (Optr)PSend22811, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22814, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22816, (Optr)&t_send1, (Optr)PSend22815, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22808 = new_Block_with(empty_Array, empty_Array, PThreadedCode22809, 2, PAssign22810, PAssign22814);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22817 = new_Send((Optr)PBlock22801, SMB_whileTrue_, 1, (Optr)PBlock22808);
    String string_22822 = new_String(L"/");
    Constant string_22822_Const = new_Constant((Optr)string_22822);
    Array PThreadedCode22824 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22823 = new_Block_with(empty_Array, empty_Array, PThreadedCode22824, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22821 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_22822_Const, (Optr)PBlock22823);
    Assign PAssign22820 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22821);
    Array PThreadedCode22819 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22820, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_22822, (Optr)&t_push_closure, (Optr)PBlock22823, (Optr)&t_send2, (Optr)PSend22821, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22818 = new_Block_with(empty_Array, empty_Array, PThreadedCode22819, 1, PAssign22820);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22825 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22818);
    Array PThreadedCode22800 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22801, (Optr)&t_push_closure, (Optr)PBlock22808, (Optr)&t_send1, (Optr)PSend22817, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22818, (Optr)&t_send1, (Optr)PSend22825, (Optr)&t_block_return);
    Block PBlock22799 = new_Block_with(empty_Array, empty_Array, PThreadedCode22800, 2, PSend22817, PSend22825);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22826 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22799);
    // method. 
    Send PSend22827 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22828 = new_String(L"OPTIONS");
    Constant string_22828_Const = new_Constant((Optr)string_22828);
    // =. 
    Send PSend22829 = new_Send((Optr)PSend22827, SMB__equals_, 1, (Optr)string_22828_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend22833 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22836 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode22835 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22836, (Optr)&t_block_return);
    Block PBlock22834 = new_Block_with(empty_Array, empty_Array, PThreadedCode22835, 1, PSend22836);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend22839 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode22838 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22839, (Optr)&t_block_return);
    Block PBlock22837 = new_Block_with(empty_Array, empty_Array, PThreadedCode22838, 1, PSend22839);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22840 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22834, (Optr)PBlock22837);
    // ,. 
    Send PSend22841 = new_Send((Optr)PSend22833, SMB__append_, 1, (Optr)PSend22840);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend22842 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend22841);
    Array PThreadedCode22832 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22833, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22834, (Optr)&t_push_closure, (Optr)PBlock22837, (Optr)&t_send2, (Optr)PSend22840, (Optr)&t_send1, (Optr)PSend22841, (Optr)&t_send1, (Optr)PSend22842, (Optr)&t_block_return);
    Block PBlock22831 = new_Block_with(empty_Array, empty_Array, PThreadedCode22832, 1, PSend22842);
    // ifTrue:. 
    Send PSend22830 = new_Send((Optr)PSend22829, SMB_ifTrue_, 1, (Optr)PBlock22831);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend22845 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend22846 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22845);
    Array PThreadedCode22844 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22845, (Optr)&t_send1, (Optr)PSend22846, (Optr)&t_block_return);
    Block PBlock22843 = new_Block_with(empty_Array, empty_Array, PThreadedCode22844, 1, PSend22846);
    // ifNil:. 
    Send PSend22847 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22843);
    // method. 
    Send PSend22848 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22849 = new_String(L"HEAD");
    Constant string_22849_Const = new_Constant((Optr)string_22849);
    // =. 
    Send PSend22850 = new_Send((Optr)PSend22848, SMB__equals_, 1, (Optr)string_22849_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend22853 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend22854 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend22855 = new_Send((Optr)PSend22853, SMB_includes_, 1, (Optr)PSend22854);
    Array PThreadedCode22852 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22853, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22854, (Optr)&t_send1, (Optr)PSend22855, (Optr)&t_block_return);
    Block PBlock22851 = new_Block_with(empty_Array, empty_Array, PThreadedCode22852, 1, PSend22855);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22856 = new_Send((Optr)PSend22850, SMB_or_, 1, (Optr)PBlock22851);
    // builtinHttpMethods. 
    Send PSend22860 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend22861 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend22862 = new_Send((Optr)PSend22860, SMB__append_, 1, (Optr)PSend22861);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend22863 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend22862);
    // escape:. 
    Send PSend22864 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22863);
    Array PThreadedCode22859 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22860, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22861, (Optr)&t_send1, (Optr)PSend22862, (Optr)&t_send1, (Optr)PSend22863, (Optr)&t_send1, (Optr)PSend22864, (Optr)&t_block_return);
    Block PBlock22858 = new_Block_with(empty_Array, empty_Array, PThreadedCode22859, 1, PSend22864);
    // ifFalse:. 
    Send PSend22857 = new_Send((Optr)PSend22856, SMB_ifFalse_, 1, (Optr)PBlock22858);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend22867 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend22868 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend22867, (Optr)VAR_request_0_0);
    Array PThreadedCode22866 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22867, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend22868, (Optr)&t_block_return);
    Block PBlock22865 = new_Block_with(empty_Array, empty_Array, PThreadedCode22866, 1, PSend22868);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22870 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22872 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22871 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22872, (Optr)&t_method_return);
    Block PBlock22869 = new_Block_with(PArray22870, empty_Array, PThreadedCode22871, 1, PSend22872);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22873 = new_Send((Optr)PBlock22865, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22869);
    Array PThreadedCode22777 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22778, (Optr)&t_push1, (Optr)string_22779, (Optr)&t_send1, (Optr)PSend22780, (Optr)&t_send_ifTrue_, (Optr)PSend22781, (Optr)PBlock22782, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22788, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22789, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22790, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22791, (Optr)&t_send1, (Optr)PSend22792, (Optr)&t_send_ifFalse_, (Optr)PSend22793, (Optr)PBlock22794, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22799, (Optr)&t_send1, (Optr)PSend22826, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22827, (Optr)&t_push1, (Optr)string_22828, (Optr)&t_send1, (Optr)PSend22829, (Optr)&t_send_ifTrue_, (Optr)PSend22830, (Optr)PBlock22831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22843, (Optr)&t_send1, (Optr)PSend22847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22848, (Optr)&t_push1, (Optr)string_22849, (Optr)&t_send1, (Optr)PSend22850, (Optr)&t_push_closure, (Optr)PBlock22851, (Optr)&t_send1, (Optr)PSend22856, (Optr)&t_send_ifFalse_, (Optr)PSend22857, (Optr)PBlock22858, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22865, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22869, (Optr)&t_send2, (Optr)PSend22873, (Optr)&t_method_return);
    Block PBlock22775 = new_Block_with(PArray22776, empty_Array, PThreadedCode22777, 9, PSend22781, PAssign22788, PAssign22789, PSend22793, PSend22826, PSend22830, PSend22847, PSend22857, PSend22873);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22874 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22775);
    Array PThreadedCode22774 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22775, (Optr)&t_send1, (Optr)PSend22874, (Optr)&t_method_return);
    Method PMethod22771 = new_Method_with(PArray22772, PArray22773, empty_Array, PThreadedCode22774, 1, PSend22874);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22771, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray22876 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend22878 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22877 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22878, (Optr)&t_method_return);
    Method PMethod22875 = new_Method_with(PArray22876, empty_Array, empty_Array, PThreadedCode22877, 1, PSend22878);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22875, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22880 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22884 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22883 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend22884, (Optr)&t_block_return);
    Block PBlock22882 = new_Block_with(empty_Array, empty_Array, PThreadedCode22883, 1, PSend22884);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22885 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22882);
    Array PThreadedCode22881 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22882, (Optr)&t_send1, (Optr)PSend22885, (Optr)&t_method_return);
    Method PMethod22879 = new_Method_with(PArray22880, empty_Array, empty_Array, PThreadedCode22881, 1, PSend22885);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod22879, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode22887 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22887, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22886, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray22889 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray22890 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_22898 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_22898_Const = new_Constant((Optr)string_22898);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22899 = new_String(L"<h1>Internal Server Error: ");
    Constant string_22899_Const = new_Constant((Optr)string_22899);
    // ,. 
    Send PSend22897 = new_Send((Optr)string_22898_Const, SMB__append_, 1, (Optr)string_22899_Const);
    // ,. 
    Send PSend22896 = new_Send((Optr)PSend22897, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_22900 = new_String(L"</h1><pre>");
    Constant string_22900_Const = new_Constant((Optr)string_22900);
    // ,. 
    Send PSend22895 = new_Send((Optr)PSend22896, SMB__append_, 1, (Optr)string_22900_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22902 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22903 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend22901 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend22902, (Optr)PSend22903);
    // ,. 
    Send PSend22894 = new_Send((Optr)PSend22895, SMB__append_, 1, (Optr)PSend22901);
    String string_22904 = new_String(L"</pre></body></html>");
    Constant string_22904_Const = new_Constant((Optr)string_22904);
    // ,. 
    Send PSend22893 = new_Send((Optr)PSend22894, SMB__append_, 1, (Optr)string_22904_Const);
    Assign PAssign22892 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend22893);
    SmallInt int_500 = new_SmallInt(500);
    String string_22905 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_22905_Const = new_Constant((Optr)string_22905);
    // sendResponseCode:content:type:close:. 
    Send PSend22906 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_22905_Const, (Optr)true_Const);
    Array PThreadedCode22891 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign22892, (Optr)&t_push1, (Optr)string_22898, (Optr)&t_push1, (Optr)string_22899, (Optr)&t_send1, (Optr)PSend22897, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend22896, (Optr)&t_push1, (Optr)string_22900, (Optr)&t_send1, (Optr)PSend22895, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22902, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22903, (Optr)&t_send2, (Optr)PSend22901, (Optr)&t_send1, (Optr)PSend22894, (Optr)&t_push1, (Optr)string_22904, (Optr)&t_send1, (Optr)PSend22893, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_22905, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend22906, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22888 = new_Method_with(PArray22889, PArray22890, empty_Array, PThreadedCode22891, 3, PAssign22892, PSend22906, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod22888, WebClient_Core_WebServer_Class);
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
    Send PSend22913 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend22912 = new_Send((Optr)PSend22913, SMB_serverString, 0);
    Assign PAssign22911 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend22912);
    Array PThreadedCode22910 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22911, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22913, (Optr)&t_send0, (Optr)PSend22912, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22909 = new_Block_with(empty_Array, empty_Array, PThreadedCode22910, 1, PAssign22911);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22914 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock22909);
    Array PThreadedCode22908 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock22909, (Optr)&t_send1, (Optr)PSend22914, (Optr)&t_method_return);
    Method PMethod22907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22908, 1, PSend22914);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22907, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22916 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22920 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22921 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend22920);
    Array PThreadedCode22919 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend22920, (Optr)&t_send1, (Optr)PSend22921, (Optr)&t_block_return);
    Block PBlock22918 = new_Block_with(empty_Array, empty_Array, PThreadedCode22919, 1, PSend22921);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22922 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock22918);
    Array PThreadedCode22917 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock22918, (Optr)&t_send1, (Optr)PSend22922, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22915 = new_Method_with(PArray22916, empty_Array, empty_Array, PThreadedCode22917, 2, PSend22922, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod22915, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22926 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend22928 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22929 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode22927 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22928, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22929, (Optr)&t_method_return);
    Block PBlock22925 = new_Block_with(PArray22926, empty_Array, PThreadedCode22927, 2, PSend22928, PSend22929);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22930 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22931 = new_Send((Optr)PBlock22925, SMB_value_, 1, (Optr)PSend22930);
    Array PThreadedCode22924 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22925, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend22930, (Optr)&t_send1, (Optr)PSend22931, (Optr)&t_method_return);
    Method PMethod22923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22924, 1, PSend22931);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod22923, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22933 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22935 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22934 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22935, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22932 = new_Method_with(PArray22933, empty_Array, empty_Array, PThreadedCode22934, 2, PAssign22935, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22932, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode22937 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22937, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22936, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode22939 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22939, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22938, WebClient_Core_WebServer_Class);
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
    Send PSend22942 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22943 = new_Send((Optr)PSend22942, SMB_serverDate, 0);
    Array PThreadedCode22941 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22942, (Optr)&t_send0, (Optr)PSend22943, (Optr)&t_method_return);
    Method PMethod22940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22941, 1, PSend22943);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22940, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray22945 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend22947 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend22948 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend22947);
    Array PThreadedCode22946 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22947, (Optr)&t_send2, (Optr)PSend22948, (Optr)&t_method_return);
    Method PMethod22944 = new_Method_with(PArray22945, empty_Array, empty_Array, PThreadedCode22946, 1, PSend22948);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod22944, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray22950 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22952 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22953 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend22952);
    Array PThreadedCode22951 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend22952, (Optr)&t_send1, (Optr)PSend22953, (Optr)&t_method_return);
    Method PMethod22949 = new_Method_with(PArray22950, empty_Array, empty_Array, PThreadedCode22951, 1, PSend22953);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod22949, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray22955 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22958 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_22960 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_22960_Const = new_Constant((Optr)string_22960);
    // nextPutAll:. 
    Send PSend22961 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_22960_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22962 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode22959 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_22960, (Optr)&t_send1, (Optr)PSend22961, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22962, (Optr)&t_method_return);
    Block PBlock22957 = new_Block_with(PArray22958, empty_Array, PThreadedCode22959, 2, PSend22961, PSend22962);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22963 = new_Send((Optr)PBlock22957, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode22956 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22957, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend22963, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22954 = new_Method_with(PArray22955, empty_Array, empty_Array, PThreadedCode22956, 2, PSend22963, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod22954, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray22965 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22967 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22966 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22967, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22964 = new_Method_with(PArray22965, empty_Array, empty_Array, PThreadedCode22966, 2, PAssign22967, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22964, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22969 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode22974 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22973 = new_Block_with(empty_Array, empty_Array, PThreadedCode22974, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend22975 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22973);
    Array PThreadedCode22972 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22973, (Optr)&t_send2, (Optr)PSend22975, (Optr)&t_block_return);
    Block PBlock22971 = new_Block_with(empty_Array, empty_Array, PThreadedCode22972, 1, PSend22975);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22976 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22971);
    Array PThreadedCode22970 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22971, (Optr)&t_send1, (Optr)PSend22976, (Optr)&t_method_return);
    Method PMethod22968 = new_Method_with(PArray22969, empty_Array, empty_Array, PThreadedCode22970, 1, PSend22976);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod22968, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22978 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22980 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22979 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22980, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22977 = new_Method_with(PArray22978, empty_Array, empty_Array, PThreadedCode22979, 2, PAssign22980, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22977, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray22982 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22986 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22987 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22988 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend22986, (Optr)PSend22987);
    Array PThreadedCode22985 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22986, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend22987, (Optr)&t_send2, (Optr)PSend22988, (Optr)&t_block_return);
    Block PBlock22984 = new_Block_with(empty_Array, empty_Array, PThreadedCode22985, 1, PSend22988);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22989 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22984);
    Array PThreadedCode22983 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22984, (Optr)&t_send1, (Optr)PSend22989, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22981 = new_Method_with(PArray22982, empty_Array, empty_Array, PThreadedCode22983, 2, PSend22989, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod22981, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray22991 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22995 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode22997 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22996 = new_Block_with(empty_Array, empty_Array, PThreadedCode22997, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend22998 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend22995, (Optr)PBlock22996);
    Array PThreadedCode22994 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22995, (Optr)&t_push_closure, (Optr)PBlock22996, (Optr)&t_send2, (Optr)PSend22998, (Optr)&t_block_return);
    Block PBlock22993 = new_Block_with(empty_Array, empty_Array, PThreadedCode22994, 1, PSend22998);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22999 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22993);
    Array PThreadedCode22992 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22993, (Optr)&t_send1, (Optr)PSend22999, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22990 = new_Method_with(PArray22991, empty_Array, empty_Array, PThreadedCode22992, 2, PSend22999, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod22990, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23004 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign23005 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode23003 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend23004, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23005, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23002 = new_Block_with(empty_Array, empty_Array, PThreadedCode23003, 2, PSend23004, PAssign23005);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23006 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock23002);
    Array PThreadedCode23001 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23002, (Optr)&t_send1, (Optr)PSend23006, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23000 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23001, 2, PSend23006, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod23000, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray23008 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23011 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend23015 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend23014 = new_Send((Optr)PSend23015, SMB_asUTC, 0);
    Assign PAssign23013 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend23014);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend23016 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_23017 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23017_Const = new_Constant((Optr)string_23017);
    // ,. 
    Send PSend23018 = new_Send((Optr)PSend23016, SMB__append_, 1, (Optr)string_23017_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23019 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend23018);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend23020 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23022 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend23024 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend23025 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend23026 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend23027 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend23028 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend23029 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend23030 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23031 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode23023 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23024, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23025, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend23026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend23027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23031, (Optr)&t_method_return);
    Block PBlock23021 = new_Block_with(PArray23022, empty_Array, PThreadedCode23023, 8, PSend23024, PSend23025, PSend23026, PSend23027, PSend23028, PSend23029, PSend23030, PSend23031);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23032 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23033 = new_Send((Optr)PBlock23021, SMB_value_, 1, (Optr)PSend23032);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23034 = new_Send((Optr)PSend23033, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend23035 = new_Send((Optr)PSend23020, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend23034);
    Array PArray23037 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23039 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend23040 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend23041 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend23040);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend23042 = new_Send((Optr)PSend23041, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend23043 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23042);
    Array PThreadedCode23038 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23040, (Optr)&t_send1, (Optr)PSend23041, (Optr)&t_send0, (Optr)PSend23042, (Optr)&t_send1, (Optr)PSend23043, (Optr)&t_method_return);
    Block PBlock23036 = new_Block_with(PArray23037, empty_Array, PThreadedCode23038, 2, PSend23039, PSend23043);
    // value:. 
    Send PSend23044 = new_Send((Optr)PBlock23036, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_23045 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_23045_Const = new_Constant((Optr)string_23045);
    // writeAll:. 
    Send PSend23046 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_23045_Const);
    Array PThreadedCode23012 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23013, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend23015, (Optr)&t_send0, (Optr)PSend23014, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23016, (Optr)&t_push1, (Optr)string_23017, (Optr)&t_send1, (Optr)PSend23018, (Optr)&t_send1, (Optr)PSend23019, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23020, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock23021, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23032, (Optr)&t_send1, (Optr)PSend23033, (Optr)&t_send0, (Optr)PSend23034, (Optr)&t_send2, (Optr)PSend23035, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23036, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23044, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_23045, (Optr)&t_send1, (Optr)PSend23046, (Optr)&t_method_return);
    Block PBlock23010 = new_Block_with(PArray23011, empty_Array, PThreadedCode23012, 5, PAssign23013, PSend23019, PSend23035, PSend23044, PSend23046);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23047 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23010);
    Array PThreadedCode23009 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23010, (Optr)&t_send1, (Optr)PSend23047, (Optr)&t_method_return);
    Method PMethod23007 = new_Method_with(empty_Array, PArray23008, empty_Array, PThreadedCode23009, 1, PSend23047);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23007, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_23050 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode23049 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23050, (Optr)&t_method_return);
    Constant string_23050_Const = new_Constant((Optr)string_23050);
    Method PMethod23048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23049, 1, string_23050_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod23048, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_23053 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode23052 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23053, (Optr)&t_method_return);
    Constant string_23053_Const = new_Constant((Optr)string_23053);
    Method PMethod23051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23052, 1, string_23053_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23051, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23059 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign23058 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend23059);
    Array PThreadedCode23057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23058, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23059, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23056 = new_Block_with(empty_Array, empty_Array, PThreadedCode23057, 1, PAssign23058);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23060 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock23056);
    Array PThreadedCode23055 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23056, (Optr)&t_send1, (Optr)PSend23060, (Optr)&t_method_return);
    Method PMethod23054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23055, 1, PSend23060);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod23054, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray23062 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23065 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign23064 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend23065);
    // new. 
    Send PSend23067 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23066 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend23067);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend23068 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend23069 = new_Send((Optr)PSend23068, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend23070 = new_Send((Optr)PSend23069, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend23071 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_23072 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray23074 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend23076 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_23077 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23077_Const = new_Constant((Optr)string_23077);
    // send200Response:contentType:. 
    Send PSend23078 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend23076, (Optr)string_23077_Const);
    Array PThreadedCode23075 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23076, (Optr)&t_push1, (Optr)string_23077, (Optr)&t_send2, (Optr)PSend23078, (Optr)&t_method_return);
    Block PBlock23073 = new_Block_with(PArray23074, empty_Array, PThreadedCode23075, 1, PSend23078);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_23072_Const = new_Constant((Optr)string_23072);
    // addService:action:. 
    Send PSend23079 = new_Send((Optr)PSend23071, SMB_addService_action_, 2, (Optr)string_23072_Const, (Optr)PBlock23073);
    Array PThreadedCode23063 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23064, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend23065, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23066, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23068, (Optr)&t_send0, (Optr)PSend23069, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend23070, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23071, (Optr)&t_push1, (Optr)string_23072, (Optr)&t_push_closure, (Optr)PBlock23073, (Optr)&t_send2, (Optr)PSend23079, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23061 = new_Method_with(empty_Array, PArray23062, empty_Array, PThreadedCode23063, 5, PAssign23064, PAssign23066, PSend23070, PSend23079, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod23061, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_example, MC_SMB_example);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_23082 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode23081 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23082, (Optr)&t_method_return);
    Constant string_23082_Const = new_Constant((Optr)string_23082);
    Method PMethod23080 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23081, 1, string_23082_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod23080, HEADER(WebClient_Core_WebServer_Class));
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