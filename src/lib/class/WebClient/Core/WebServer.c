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
    Array PArray22422 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22423 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22433 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22432 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22433, (Optr)&t_block_return);
    Block PBlock22431 = new_Block_with(empty_Array, empty_Array, PThreadedCode22432, 1, PSend22433);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22435 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22437 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22436 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22437, (Optr)&t_method_return);
    Block PBlock22434 = new_Block_with(PArray22435, empty_Array, PThreadedCode22436, 1, PSend22437);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22438 = new_Send((Optr)PBlock22431, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22434);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22441 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22443 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22442 = new_Block_with(empty_Array, empty_Array, PThreadedCode22443, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22444 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22441, (Optr)PBlock22442);
    Array PThreadedCode22440 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22441, (Optr)&t_push_closure, (Optr)PBlock22442, (Optr)&t_send2, (Optr)PSend22444, (Optr)&t_block_return);
    Block PBlock22439 = new_Block_with(empty_Array, empty_Array, PThreadedCode22440, 1, PSend22444);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22445 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22439);
    Array PThreadedCode22430 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22431, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22434, (Optr)&t_send2, (Optr)PSend22438, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22439, (Optr)&t_send1, (Optr)PSend22445, (Optr)&t_block_return);
    Block PBlock22429 = new_Block_with(empty_Array, empty_Array, PThreadedCode22430, 2, PSend22438, PSend22445);
    // destroy. 
    Send PSend22448 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22447 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22448, (Optr)&t_block_return);
    Block PBlock22446 = new_Block_with(empty_Array, empty_Array, PThreadedCode22447, 1, PSend22448);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22449 = new_Send((Optr)PBlock22429, SMB_ensure_, 1, (Optr)PBlock22446);
    Array PThreadedCode22428 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22429, (Optr)&t_push_closure, (Optr)PBlock22446, (Optr)&t_send1, (Optr)PSend22449, (Optr)&t_block_return);
    Block PBlock22427 = new_Block_with(empty_Array, empty_Array, PThreadedCode22428, 1, PSend22449);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22426 = new_Send((Optr)PBlock22427, SMB_fork, 0);
    Assign PAssign22425 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22426);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22452 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22451 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22452, (Optr)&t_block_return);
    Block PBlock22450 = new_Block_with(empty_Array, empty_Array, PThreadedCode22451, 1, PSend22452);
    // critical:. 
    Send PSend22453 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22450);
    Array PThreadedCode22424 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22425, (Optr)&t_push_closure, (Optr)PBlock22427, (Optr)&t_send0, (Optr)PSend22426, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22450, (Optr)&t_send1, (Optr)PSend22453, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22421 = new_Method_with(PArray22422, PArray22423, empty_Array, PThreadedCode22424, 3, PAssign22425, PSend22453, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22421, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22455 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22460 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22459 = new_Block_with(empty_Array, empty_Array, PThreadedCode22460, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22461 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22459);
    Array PThreadedCode22458 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22459, (Optr)&t_send2, (Optr)PSend22461, (Optr)&t_block_return);
    Block PBlock22457 = new_Block_with(empty_Array, empty_Array, PThreadedCode22458, 1, PSend22461);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22462 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22457);
    Array PThreadedCode22456 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22457, (Optr)&t_send1, (Optr)PSend22462, (Optr)&t_method_return);
    Method PMethod22454 = new_Method_with(PArray22455, empty_Array, empty_Array, PThreadedCode22456, 1, PSend22462);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22454, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22464 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22463 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22464, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22463, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22467 = new_String(L"HEAD");
    String string_22468 = new_String(L"TRACE");
    String string_22469 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22467_Const = new_Constant((Optr)string_22467);
    Constant string_22468_Const = new_Constant((Optr)string_22468);
    Constant string_22469_Const = new_Constant((Optr)string_22469);
    // with:with:with:. 
    Send PSend22470 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22467_Const, (Optr)string_22468_Const, (Optr)string_22469_Const);
    Array PThreadedCode22466 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22467, (Optr)&t_push1, (Optr)string_22468, (Optr)&t_push1, (Optr)string_22469, (Optr)&t_send3, (Optr)PSend22470, (Optr)&t_method_return);
    Method PMethod22465 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22466, 1, PSend22470);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22465, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22472 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22475 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22479 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22478 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22479, (Optr)&t_block_return);
    Block PBlock22477 = new_Block_with(empty_Array, empty_Array, PThreadedCode22478, 1, PSend22479);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22480 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22477);
    Array PThreadedCode22476 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22477, (Optr)&t_send1, (Optr)PSend22480, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22474 = new_Block_with(PArray22475, empty_Array, PThreadedCode22476, 2, PSend22480, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22481 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22474);
    Array PThreadedCode22473 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22474, (Optr)&t_send1, (Optr)PSend22481, (Optr)&t_method_return);
    Method PMethod22471 = new_Method_with(PArray22472, empty_Array, empty_Array, PThreadedCode22473, 1, PSend22481);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22471, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22483 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22485 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22484 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22485, (Optr)&t_method_return);
    Method PMethod22482 = new_Method_with(PArray22483, empty_Array, empty_Array, PThreadedCode22484, 1, PSend22485);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22482, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22487 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22487, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22486, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22489 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22490 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22494 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22494_Const = new_Constant((Optr)string_22494);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22495 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22495_Const = new_Constant((Optr)string_22495);
    // ,. 
    Send PSend22493 = new_Send((Optr)string_22494_Const, SMB__append_, 1, (Optr)string_22495_Const);
    Assign PAssign22492 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22493);
    String string_22498 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22499 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22498_Const = new_Constant((Optr)string_22498);
    // ,. 
    Send PSend22500 = new_Send((Optr)string_22498_Const, SMB__append_, 1, (Optr)PSend22499);
    String string_22501 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22501_Const = new_Constant((Optr)string_22501);
    // ,. 
    Send PSend22502 = new_Send((Optr)PSend22500, SMB__append_, 1, (Optr)string_22501_Const);
    // crlf. 
    Send PSend22503 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22504 = new_Send((Optr)PSend22502, SMB__append_, 1, (Optr)PSend22503);
    String string_22505 = new_String(L"Connection: close");
    Constant string_22505_Const = new_Constant((Optr)string_22505);
    // ,. 
    Send PSend22506 = new_Send((Optr)PSend22504, SMB__append_, 1, (Optr)string_22505_Const);
    // crlf. 
    Send PSend22507 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22508 = new_Send((Optr)PSend22506, SMB__append_, 1, (Optr)PSend22507);
    String string_22509 = new_String(L"Content-Length: ");
    Constant string_22509_Const = new_Constant((Optr)string_22509);
    // ,. 
    Send PSend22510 = new_Send((Optr)PSend22508, SMB__append_, 1, (Optr)string_22509_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22511 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22512 = new_Send((Optr)PSend22511, SMB_asString, 0);
    // ,. 
    Send PSend22513 = new_Send((Optr)PSend22510, SMB__append_, 1, (Optr)PSend22512);
    // crlf. 
    Send PSend22514 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22515 = new_Send((Optr)PSend22513, SMB__append_, 1, (Optr)PSend22514);
    // crlf. 
    Send PSend22516 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22517 = new_Send((Optr)PSend22515, SMB__append_, 1, (Optr)PSend22516);
    // ,. 
    Send PSend22518 = new_Send((Optr)PSend22517, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22519 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22518);
    Array PThreadedCode22497 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22498, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22499, (Optr)&t_send1, (Optr)PSend22500, (Optr)&t_push1, (Optr)string_22501, (Optr)&t_send1, (Optr)PSend22502, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22503, (Optr)&t_send1, (Optr)PSend22504, (Optr)&t_push1, (Optr)string_22505, (Optr)&t_send1, (Optr)PSend22506, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22507, (Optr)&t_send1, (Optr)PSend22508, (Optr)&t_push1, (Optr)string_22509, (Optr)&t_send1, (Optr)PSend22510, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22511, (Optr)&t_send0, (Optr)PSend22512, (Optr)&t_send1, (Optr)PSend22513, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22514, (Optr)&t_send1, (Optr)PSend22515, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22516, (Optr)&t_send1, (Optr)PSend22517, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22518, (Optr)&t_send1, (Optr)PSend22519, (Optr)&t_block_return);
    Block PBlock22496 = new_Block_with(empty_Array, empty_Array, PThreadedCode22497, 1, PSend22519);
    Array PThreadedCode22521 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22520 = new_Block_with(empty_Array, empty_Array, PThreadedCode22521, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22522 = new_Send((Optr)PBlock22496, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22520);
    Array PThreadedCode22491 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22492, (Optr)&t_push1, (Optr)string_22494, (Optr)&t_push1, (Optr)string_22495, (Optr)&t_send1, (Optr)PSend22493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22496, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22520, (Optr)&t_send2, (Optr)PSend22522, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22488 = new_Method_with(PArray22489, PArray22490, empty_Array, PThreadedCode22491, 3, PAssign22492, PSend22522, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22488, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22524 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22526 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22525 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22526, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22523 = new_Method_with(PArray22524, empty_Array, empty_Array, PThreadedCode22525, 1, PAssign22526);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22523, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22528 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22527 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22528, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22527, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22531 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22536 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22535 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22536, (Optr)&t_block_return);
    Block PBlock22534 = new_Block_with(empty_Array, empty_Array, PThreadedCode22535, 1, PSend22536);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22533 = new_Send((Optr)PBlock22534, SMB_fork, 0);
    Assign PAssign22532 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22533);
    Array PThreadedCode22530 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22531, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22532, (Optr)&t_push_closure, (Optr)PBlock22534, (Optr)&t_send0, (Optr)PSend22533, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22529 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22530, 3, PSend22531, PAssign22532, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22529, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22540 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22539 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22540);
    // new. 
    Send PSend22542 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22541 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22542);
    // new. 
    Send PSend22544 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22543 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22544);
    // new. 
    Send PSend22546 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22545 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22546);
    // new. 
    Send PSend22548 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22547 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22548);
    // new. 
    Send PSend22550 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22549 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22550);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22552 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22555 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22557 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22558 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22556 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22557, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22558, (Optr)&t_method_return);
    Block PBlock22554 = new_Block_with(PArray22555, empty_Array, PThreadedCode22556, 2, PSend22557, PSend22558);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22559 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22560 = new_Send((Optr)PBlock22554, SMB_value_, 1, (Optr)PSend22559);
    Array PThreadedCode22553 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22554, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22559, (Optr)&t_send1, (Optr)PSend22560, (Optr)&t_method_return);
    Block PBlock22551 = new_Block_with(PArray22552, empty_Array, PThreadedCode22553, 1, PSend22560);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22561 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22551);
    Array PThreadedCode22538 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22539, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22540, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22541, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22542, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22543, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22544, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22545, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22546, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22547, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22548, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22549, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22550, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22551, (Optr)&t_send1, (Optr)PSend22561, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22538, 8, PAssign22539, PAssign22541, PAssign22543, PAssign22545, PAssign22547, PAssign22549, PSend22561, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22537, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22563 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22565 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22565, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22562 = new_Method_with(PArray22563, empty_Array, empty_Array, PThreadedCode22564, 2, PAssign22565, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22562, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22567 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22568 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22571 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22578 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22577 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22578);
    Array PThreadedCode22576 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22577, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22578, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22575 = new_Block_with(empty_Array, empty_Array, PThreadedCode22576, 1, PAssign22577);
    String string_22581 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22581_Const = new_Constant((Optr)string_22581);
    // error:. 
    Send PSend22582 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22581_Const);
    Array PThreadedCode22580 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22581, (Optr)&t_send1, (Optr)PSend22582, (Optr)&t_block_return);
    Block PBlock22579 = new_Block_with(empty_Array, empty_Array, PThreadedCode22580, 1, PSend22582);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22583 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22575, (Optr)PBlock22579);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22586 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22585 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22586, (Optr)&t_block_return);
    Block PBlock22584 = new_Block_with(empty_Array, empty_Array, PThreadedCode22585, 1, PSend22586);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22589 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22592 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22593 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22592);
    Array PThreadedCode22591 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22592, (Optr)&t_send1, (Optr)PSend22593, (Optr)&t_block_return);
    Block PBlock22590 = new_Block_with(empty_Array, empty_Array, PThreadedCode22591, 1, PSend22593);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22594 = new_Send((Optr)PSend22589, SMB_ifNil_, 1, (Optr)PBlock22590);
    String string_22595 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22595_Const = new_Constant((Optr)string_22595);
    // warn:. 
    Send PSend22596 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22595_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22598 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22597 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22598);
    String string_22599 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22599_Const = new_Constant((Optr)string_22599);
    // warn:. 
    Send PSend22600 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22599_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22603 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22602 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22603, (Optr)&t_block_return);
    Block PBlock22601 = new_Block_with(empty_Array, empty_Array, PThreadedCode22602, 1, PSend22603);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22605 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22607 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22608 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22607);
    Array PThreadedCode22606 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22607, (Optr)&t_send1, (Optr)PSend22608, (Optr)&t_method_return);
    Block PBlock22604 = new_Block_with(PArray22605, empty_Array, PThreadedCode22606, 1, PSend22608);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22609 = new_Send((Optr)PBlock22601, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22604);
    String string_22610 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22610_Const = new_Constant((Optr)string_22610);
    // warn:. 
    Send PSend22611 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22610_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22612 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22588 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22589, (Optr)&t_push_closure, (Optr)PBlock22590, (Optr)&t_send1, (Optr)PSend22594, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22595, (Optr)&t_send1, (Optr)PSend22596, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22597, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22598, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22599, (Optr)&t_send1, (Optr)PSend22600, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22601, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22604, (Optr)&t_send2, (Optr)PSend22609, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22610, (Optr)&t_send1, (Optr)PSend22611, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22612, (Optr)&t_block_return);
    Block PBlock22587 = new_Block_with(empty_Array, empty_Array, PThreadedCode22588, 7, PSend22594, PSend22596, PAssign22597, PSend22600, PSend22609, PSend22611, PSend22612);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22613 = new_Send((Optr)PBlock22584, SMB_whileTrue_, 1, (Optr)PBlock22587);
    Array PThreadedCode22574 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22575, (Optr)&t_push_closure, (Optr)PBlock22579, (Optr)&t_send2, (Optr)PSend22583, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22584, (Optr)&t_push_closure, (Optr)PBlock22587, (Optr)&t_send1, (Optr)PSend22613, (Optr)&t_block_return);
    Block PBlock22573 = new_Block_with(empty_Array, empty_Array, PThreadedCode22574, 2, PSend22583, PSend22613);
    Array PArray22615 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22617 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22616 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22617, (Optr)&t_method_return);
    Block PBlock22614 = new_Block_with(PArray22615, empty_Array, PThreadedCode22616, 1, PSend22617);
    // on:do:. 
    Send PSend22618 = new_Send((Optr)PBlock22573, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22614);
    Array PThreadedCode22572 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22573, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22614, (Optr)&t_send2, (Optr)PSend22618, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22570 = new_Block_with(PArray22571, empty_Array, PThreadedCode22572, 2, PSend22618, self);
    // on:. 
    Send PSend22619 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22570);
    Array PThreadedCode22569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22570, (Optr)&t_send1, (Optr)PSend22619, (Optr)&t_method_return);
    Method PMethod22566 = new_Method_with(PArray22567, PArray22568, empty_Array, PThreadedCode22569, 1, PSend22619);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22566, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22621 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22621, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22620, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22623 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22623, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22622, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22625 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22627 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22626 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22627, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22624 = new_Method_with(PArray22625, empty_Array, empty_Array, PThreadedCode22626, 2, PAssign22627, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22624, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22630 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22629 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22630, (Optr)&t_method_return);
    Method PMethod22628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22629, 1, PSend22630);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22628, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22632 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22635 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22643 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22646 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22645 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22646, (Optr)&t_block_return);
    Block PBlock22644 = new_Block_with(empty_Array, empty_Array, PThreadedCode22645, 1, PSend22646);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22647 = new_Send((Optr)PSend22643, SMB_and_, 1, (Optr)PBlock22644);
    Array PThreadedCode22642 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22643, (Optr)&t_push_closure, (Optr)PBlock22644, (Optr)&t_send1, (Optr)PSend22647, (Optr)&t_block_return);
    Block PBlock22641 = new_Block_with(empty_Array, empty_Array, PThreadedCode22642, 1, PSend22647);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22651 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22650 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22651);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22654 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22653 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22654, (Optr)&t_block_return);
    Block PBlock22652 = new_Block_with(empty_Array, empty_Array, PThreadedCode22653, 1, PSend22654);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22655 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22652);
    Array PThreadedCode22649 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22650, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22651, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22652, (Optr)&t_send1, (Optr)PSend22655, (Optr)&t_block_return);
    Block PBlock22648 = new_Block_with(empty_Array, empty_Array, PThreadedCode22649, 2, PAssign22650, PSend22655);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22656 = new_Send((Optr)PBlock22641, SMB_whileTrue_, 1, (Optr)PBlock22648);
    Array PThreadedCode22640 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22641, (Optr)&t_push_closure, (Optr)PBlock22648, (Optr)&t_send1, (Optr)PSend22656, (Optr)&t_block_return);
    Block PBlock22639 = new_Block_with(empty_Array, empty_Array, PThreadedCode22640, 1, PSend22656);
    String string_22659 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22661 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22663 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22662 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22663, (Optr)&t_method_return);
    Block PBlock22660 = new_Block_with(PArray22661, empty_Array, PThreadedCode22662, 1, PSend22663);
    // ifNotNil:. 
    Send PSend22664 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22660);
    Constant string_22659_Const = new_Constant((Optr)string_22659);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22665 = new_Send((Optr)string_22659_Const, SMB__append_, 1, (Optr)PSend22664);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22666 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22665);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22667 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22670 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22671 = new_Send((Optr)PSend22670, SMB_not, 0);
    Array PThreadedCode22669 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22670, (Optr)&t_send0, (Optr)PSend22671, (Optr)&t_block_return);
    Block PBlock22668 = new_Block_with(empty_Array, empty_Array, PThreadedCode22669, 1, PSend22671);
    // and:. 
    Send PSend22672 = new_Send((Optr)PSend22667, SMB_and_, 1, (Optr)PBlock22668);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22676 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22677 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22678 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22679 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22678);
    Array PThreadedCode22675 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22676, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22677, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22678, (Optr)&t_send1, (Optr)PSend22679, (Optr)&t_block_return);
    Block PBlock22674 = new_Block_with(empty_Array, empty_Array, PThreadedCode22675, 3, PSend22676, PAssign22677, PSend22679);
    // ifTrue:. 
    Send PSend22673 = new_Send((Optr)PSend22672, SMB_ifTrue_, 1, (Optr)PBlock22674);
    Array PThreadedCode22658 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22659, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22660, (Optr)&t_send1, (Optr)PSend22664, (Optr)&t_send1, (Optr)PSend22665, (Optr)&t_send1, (Optr)PSend22666, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22667, (Optr)&t_push_closure, (Optr)PBlock22668, (Optr)&t_send1, (Optr)PSend22672, (Optr)&t_send_ifTrue_, (Optr)PSend22673, (Optr)PBlock22674, (Optr)&t_block_return);
    Block PBlock22657 = new_Block_with(empty_Array, empty_Array, PThreadedCode22658, 2, PSend22666, PSend22673);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22680 = new_Send((Optr)PBlock22639, SMB_ensure_, 1, (Optr)PBlock22657);
    Array PThreadedCode22638 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22639, (Optr)&t_push_closure, (Optr)PBlock22657, (Optr)&t_send1, (Optr)PSend22680, (Optr)&t_block_return);
    Block PBlock22637 = new_Block_with(empty_Array, empty_Array, PThreadedCode22638, 1, PSend22680);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22682 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22684 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22683 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22684, (Optr)&t_method_return);
    Block PBlock22681 = new_Block_with(PArray22682, empty_Array, PThreadedCode22683, 1, PSend22684);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22685 = new_Send((Optr)PBlock22637, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22681);
    Array PThreadedCode22636 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22637, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22681, (Optr)&t_send2, (Optr)PSend22685, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22634 = new_Block_with(PArray22635, empty_Array, PThreadedCode22636, 2, PSend22685, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22686 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22634);
    Array PThreadedCode22633 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22634, (Optr)&t_send1, (Optr)PSend22686, (Optr)&t_method_return);
    Method PMethod22631 = new_Method_with(empty_Array, PArray22632, empty_Array, PThreadedCode22633, 1, PSend22686);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22631, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22689 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22690 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22693 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22692 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22693, (Optr)&t_block_return);
    Block PBlock22691 = new_Block_with(empty_Array, empty_Array, PThreadedCode22692, 1, PSend22693);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22694 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22691);
    Array PThreadedCode22688 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22689, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22690, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22691, (Optr)&t_send1, (Optr)PSend22694, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22688, 4, PSend22689, PSend22690, PSend22694, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22687, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22696 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22698 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22697 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22698, (Optr)&t_method_return);
    Method PMethod22695 = new_Method_with(PArray22696, empty_Array, empty_Array, PThreadedCode22697, 1, PSend22698);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22695, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22704 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22706 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22705 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22706, (Optr)&t_method_return);
    Block PBlock22703 = new_Block_with(PArray22704, empty_Array, PThreadedCode22705, 1, PSend22706);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22707 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22703);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22708 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22702 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22703, (Optr)&t_send1, (Optr)PSend22707, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22708, (Optr)&t_block_return);
    Block PBlock22701 = new_Block_with(empty_Array, empty_Array, PThreadedCode22702, 2, PSend22707, PSend22708);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22709 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22701);
    Array PThreadedCode22700 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22701, (Optr)&t_send1, (Optr)PSend22709, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22700, 2, PSend22709, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22699, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22712 = new_String(L"GET");
    String string_22713 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22712_Const = new_Constant((Optr)string_22712);
    Constant string_22713_Const = new_Constant((Optr)string_22713);
    // with:with:. 
    Send PSend22714 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22712_Const, (Optr)string_22713_Const);
    Array PThreadedCode22711 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22712, (Optr)&t_push1, (Optr)string_22713, (Optr)&t_send2, (Optr)PSend22714, (Optr)&t_method_return);
    Method PMethod22710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22711, 1, PSend22714);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22710, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22716 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22716, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22715, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22718 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22719 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22721 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22722 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22727 = new_String(L"*");
    Array PThreadedCode22726 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22727, (Optr)&t_block_return);
    Constant string_22727_Const = new_Constant((Optr)string_22727);
    Block PBlock22725 = new_Block_with(empty_Array, empty_Array, PThreadedCode22726, 1, string_22727_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22730 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22729 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22730, (Optr)&t_block_return);
    Block PBlock22728 = new_Block_with(empty_Array, empty_Array, PThreadedCode22729, 1, PSend22730);
    // ifNil:ifNotNil:. 
    Send PSend22724 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22725, (Optr)PBlock22728);
    Assign PAssign22723 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22724);
    String string_22731 = new_String(L"Listener starting (interface: ");
    Constant string_22731_Const = new_Constant((Optr)string_22731);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22732 = new_Send((Optr)string_22731_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22733 = new_String(L" port: ");
    Constant string_22733_Const = new_Constant((Optr)string_22733);
    // ,. 
    Send PSend22734 = new_Send((Optr)PSend22732, SMB__append_, 1, (Optr)string_22733_Const);
    // ,. 
    Send PSend22735 = new_Send((Optr)PSend22734, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22736 = new_String(L")");
    Constant string_22736_Const = new_Constant((Optr)string_22736);
    // ,. 
    Send PSend22737 = new_Send((Optr)PSend22735, SMB__append_, 1, (Optr)string_22736_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22738 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22737);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22740 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22739 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22740);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22743 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22742 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22743, (Optr)&t_block_return);
    Block PBlock22741 = new_Block_with(empty_Array, empty_Array, PThreadedCode22742, 1, PSend22743);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22746 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22745 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22746, (Optr)&t_block_return);
    Block PBlock22744 = new_Block_with(empty_Array, empty_Array, PThreadedCode22745, 1, PSend22746);
    // ifNil:ifNotNil:. 
    Send PSend22747 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22741, (Optr)PBlock22744);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22748 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22720 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22721, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22722, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22723, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22725, (Optr)&t_push_closure, (Optr)PBlock22728, (Optr)&t_send2, (Optr)PSend22724, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22731, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22732, (Optr)&t_push1, (Optr)string_22733, (Optr)&t_send1, (Optr)PSend22734, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22735, (Optr)&t_push1, (Optr)string_22736, (Optr)&t_send1, (Optr)PSend22737, (Optr)&t_send1, (Optr)PSend22738, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22739, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22741, (Optr)&t_push_closure, (Optr)PBlock22744, (Optr)&t_send2, (Optr)PSend22747, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22748, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22717 = new_Method_with(PArray22718, PArray22719, empty_Array, PThreadedCode22720, 8, PAssign22721, PAssign22722, PAssign22723, PSend22738, PAssign22739, PSend22747, PSend22748, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22717, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22750 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22749 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22750, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22749, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22752 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22754 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22755 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22754);
    Array PThreadedCode22753 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22754, (Optr)&t_send3, (Optr)PSend22755, (Optr)&t_method_return);
    Method PMethod22751 = new_Method_with(PArray22752, empty_Array, empty_Array, PThreadedCode22753, 1, PSend22755);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22751, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22760 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22759 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22760, (Optr)&t_block_return);
    Block PBlock22758 = new_Block_with(empty_Array, empty_Array, PThreadedCode22759, 1, PSend22760);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22761 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22758);
    Assign PAssign22762 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22757 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22758, (Optr)&t_send1, (Optr)PSend22761, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22762, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22757, 3, PSend22761, PAssign22762, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22756, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22764 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22766 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22765 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22766, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22763 = new_Method_with(PArray22764, empty_Array, empty_Array, PThreadedCode22765, 2, PAssign22766, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22763, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22769 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22770 = new_Send((Optr)PSend22769, SMB_not, 0);
    Array PThreadedCode22768 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22769, (Optr)&t_send0, (Optr)PSend22770, (Optr)&t_method_return);
    Method PMethod22767 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22768, 1, PSend22770);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22767, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22772 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22772, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22771, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22774 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22775 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22778 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22780 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22781 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22781_Const = new_Constant((Optr)string_22781);
    // =. 
    Send PSend22782 = new_Send((Optr)PSend22780, SMB__equals_, 1, (Optr)string_22781_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22786 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22787 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22787_Const = new_Constant((Optr)string_22787);
    // send200Response:contentType:. 
    Send PSend22788 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22786, (Optr)string_22787_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22789 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22788);
    Array PThreadedCode22785 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22786, (Optr)&t_push1, (Optr)string_22787, (Optr)&t_send2, (Optr)PSend22788, (Optr)&t_send1, (Optr)PSend22789, (Optr)&t_block_return);
    Block PBlock22784 = new_Block_with(empty_Array, empty_Array, PThreadedCode22785, 1, PSend22789);
    // ifTrue:. 
    Send PSend22783 = new_Send((Optr)PSend22782, SMB_ifTrue_, 1, (Optr)PBlock22784);
    Assign PAssign22790 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22792 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22791 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22792);
    String string_22793 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22793_Const = new_Constant((Optr)string_22793);
    // beginsWith:. 
    Send PSend22794 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22793_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22800 = new_String(L"/");
    Constant string_22800_Const = new_Constant((Optr)string_22800);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22799 = new_Send((Optr)string_22800_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22798 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22799);
    Array PThreadedCode22797 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22798, (Optr)&t_push1, (Optr)string_22800, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22799, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22796 = new_Block_with(empty_Array, empty_Array, PThreadedCode22797, 1, PAssign22798);
    // ifFalse:. 
    Send PSend22795 = new_Send((Optr)PSend22794, SMB_ifFalse_, 1, (Optr)PBlock22796);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22805 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22808 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22807 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22808, (Optr)&t_block_return);
    Block PBlock22806 = new_Block_with(empty_Array, empty_Array, PThreadedCode22807, 1, PSend22808);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22809 = new_Send((Optr)PSend22805, SMB_and_, 1, (Optr)PBlock22806);
    Array PThreadedCode22804 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22805, (Optr)&t_push_closure, (Optr)PBlock22806, (Optr)&t_send1, (Optr)PSend22809, (Optr)&t_block_return);
    Block PBlock22803 = new_Block_with(empty_Array, empty_Array, PThreadedCode22804, 1, PSend22809);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22815 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22814 = new_Block_with(empty_Array, empty_Array, PThreadedCode22815, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22813 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22814);
    Assign PAssign22812 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22813);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22818 = new_Character(L'/');
    Constant char_22818_Const = new_Constant((Optr)char_22818);
    // copyUpToLast:. 
    Send PSend22817 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22818_Const);
    Assign PAssign22816 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22817);
    Array PThreadedCode22811 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22812, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22814, (Optr)&t_send2, (Optr)PSend22813, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22816, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22818, (Optr)&t_send1, (Optr)PSend22817, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22810 = new_Block_with(empty_Array, empty_Array, PThreadedCode22811, 2, PAssign22812, PAssign22816);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22819 = new_Send((Optr)PBlock22803, SMB_whileTrue_, 1, (Optr)PBlock22810);
    String string_22824 = new_String(L"/");
    Constant string_22824_Const = new_Constant((Optr)string_22824);
    Array PThreadedCode22826 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22825 = new_Block_with(empty_Array, empty_Array, PThreadedCode22826, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22823 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_22824_Const, (Optr)PBlock22825);
    Assign PAssign22822 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22823);
    Array PThreadedCode22821 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22822, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_22824, (Optr)&t_push_closure, (Optr)PBlock22825, (Optr)&t_send2, (Optr)PSend22823, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22820 = new_Block_with(empty_Array, empty_Array, PThreadedCode22821, 1, PAssign22822);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22827 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22820);
    Array PThreadedCode22802 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22803, (Optr)&t_push_closure, (Optr)PBlock22810, (Optr)&t_send1, (Optr)PSend22819, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22820, (Optr)&t_send1, (Optr)PSend22827, (Optr)&t_block_return);
    Block PBlock22801 = new_Block_with(empty_Array, empty_Array, PThreadedCode22802, 2, PSend22819, PSend22827);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22828 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22801);
    // method. 
    Send PSend22829 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22830 = new_String(L"OPTIONS");
    Constant string_22830_Const = new_Constant((Optr)string_22830);
    // =. 
    Send PSend22831 = new_Send((Optr)PSend22829, SMB__equals_, 1, (Optr)string_22830_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend22835 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22838 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode22837 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22838, (Optr)&t_block_return);
    Block PBlock22836 = new_Block_with(empty_Array, empty_Array, PThreadedCode22837, 1, PSend22838);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend22841 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode22840 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22841, (Optr)&t_block_return);
    Block PBlock22839 = new_Block_with(empty_Array, empty_Array, PThreadedCode22840, 1, PSend22841);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22842 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22836, (Optr)PBlock22839);
    // ,. 
    Send PSend22843 = new_Send((Optr)PSend22835, SMB__append_, 1, (Optr)PSend22842);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend22844 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend22843);
    Array PThreadedCode22834 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22835, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22836, (Optr)&t_push_closure, (Optr)PBlock22839, (Optr)&t_send2, (Optr)PSend22842, (Optr)&t_send1, (Optr)PSend22843, (Optr)&t_send1, (Optr)PSend22844, (Optr)&t_block_return);
    Block PBlock22833 = new_Block_with(empty_Array, empty_Array, PThreadedCode22834, 1, PSend22844);
    // ifTrue:. 
    Send PSend22832 = new_Send((Optr)PSend22831, SMB_ifTrue_, 1, (Optr)PBlock22833);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend22847 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend22848 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22847);
    Array PThreadedCode22846 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22847, (Optr)&t_send1, (Optr)PSend22848, (Optr)&t_block_return);
    Block PBlock22845 = new_Block_with(empty_Array, empty_Array, PThreadedCode22846, 1, PSend22848);
    // ifNil:. 
    Send PSend22849 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock22845);
    // method. 
    Send PSend22850 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22851 = new_String(L"HEAD");
    Constant string_22851_Const = new_Constant((Optr)string_22851);
    // =. 
    Send PSend22852 = new_Send((Optr)PSend22850, SMB__equals_, 1, (Optr)string_22851_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend22855 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend22856 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend22857 = new_Send((Optr)PSend22855, SMB_includes_, 1, (Optr)PSend22856);
    Array PThreadedCode22854 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22855, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22856, (Optr)&t_send1, (Optr)PSend22857, (Optr)&t_block_return);
    Block PBlock22853 = new_Block_with(empty_Array, empty_Array, PThreadedCode22854, 1, PSend22857);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22858 = new_Send((Optr)PSend22852, SMB_or_, 1, (Optr)PBlock22853);
    // builtinHttpMethods. 
    Send PSend22862 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend22863 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend22864 = new_Send((Optr)PSend22862, SMB__append_, 1, (Optr)PSend22863);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend22865 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend22864);
    // escape:. 
    Send PSend22866 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22865);
    Array PThreadedCode22861 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22862, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend22863, (Optr)&t_send1, (Optr)PSend22864, (Optr)&t_send1, (Optr)PSend22865, (Optr)&t_send1, (Optr)PSend22866, (Optr)&t_block_return);
    Block PBlock22860 = new_Block_with(empty_Array, empty_Array, PThreadedCode22861, 1, PSend22866);
    // ifFalse:. 
    Send PSend22859 = new_Send((Optr)PSend22858, SMB_ifFalse_, 1, (Optr)PBlock22860);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend22869 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend22870 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend22869, (Optr)VAR_request_0_0);
    Array PThreadedCode22868 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22869, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend22870, (Optr)&t_block_return);
    Block PBlock22867 = new_Block_with(empty_Array, empty_Array, PThreadedCode22868, 1, PSend22870);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22872 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22874 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22873 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22874, (Optr)&t_method_return);
    Block PBlock22871 = new_Block_with(PArray22872, empty_Array, PThreadedCode22873, 1, PSend22874);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22875 = new_Send((Optr)PBlock22867, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22871);
    Array PThreadedCode22779 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22780, (Optr)&t_push1, (Optr)string_22781, (Optr)&t_send1, (Optr)PSend22782, (Optr)&t_send_ifTrue_, (Optr)PSend22783, (Optr)PBlock22784, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22790, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22791, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22792, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22793, (Optr)&t_send1, (Optr)PSend22794, (Optr)&t_send_ifFalse_, (Optr)PSend22795, (Optr)PBlock22796, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22801, (Optr)&t_send1, (Optr)PSend22828, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22829, (Optr)&t_push1, (Optr)string_22830, (Optr)&t_send1, (Optr)PSend22831, (Optr)&t_send_ifTrue_, (Optr)PSend22832, (Optr)PBlock22833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock22845, (Optr)&t_send1, (Optr)PSend22849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22850, (Optr)&t_push1, (Optr)string_22851, (Optr)&t_send1, (Optr)PSend22852, (Optr)&t_push_closure, (Optr)PBlock22853, (Optr)&t_send1, (Optr)PSend22858, (Optr)&t_send_ifFalse_, (Optr)PSend22859, (Optr)PBlock22860, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22867, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22871, (Optr)&t_send2, (Optr)PSend22875, (Optr)&t_method_return);
    Block PBlock22777 = new_Block_with(PArray22778, empty_Array, PThreadedCode22779, 9, PSend22783, PAssign22790, PAssign22791, PSend22795, PSend22828, PSend22832, PSend22849, PSend22859, PSend22875);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22876 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22777);
    Array PThreadedCode22776 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22777, (Optr)&t_send1, (Optr)PSend22876, (Optr)&t_method_return);
    Method PMethod22773 = new_Method_with(PArray22774, PArray22775, empty_Array, PThreadedCode22776, 1, PSend22876);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22773, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray22878 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend22880 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22879 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22880, (Optr)&t_method_return);
    Method PMethod22877 = new_Method_with(PArray22878, empty_Array, empty_Array, PThreadedCode22879, 1, PSend22880);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22877, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22882 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22886 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22885 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend22886, (Optr)&t_block_return);
    Block PBlock22884 = new_Block_with(empty_Array, empty_Array, PThreadedCode22885, 1, PSend22886);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22887 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22884);
    Array PThreadedCode22883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22884, (Optr)&t_send1, (Optr)PSend22887, (Optr)&t_method_return);
    Method PMethod22881 = new_Method_with(PArray22882, empty_Array, empty_Array, PThreadedCode22883, 1, PSend22887);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod22881, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode22889 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22889, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22888, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray22891 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray22892 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_22900 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_22900_Const = new_Constant((Optr)string_22900);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22901 = new_String(L"<h1>Internal Server Error: ");
    Constant string_22901_Const = new_Constant((Optr)string_22901);
    // ,. 
    Send PSend22899 = new_Send((Optr)string_22900_Const, SMB__append_, 1, (Optr)string_22901_Const);
    // ,. 
    Send PSend22898 = new_Send((Optr)PSend22899, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_22902 = new_String(L"</h1><pre>");
    Constant string_22902_Const = new_Constant((Optr)string_22902);
    // ,. 
    Send PSend22897 = new_Send((Optr)PSend22898, SMB__append_, 1, (Optr)string_22902_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22904 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22905 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend22903 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend22904, (Optr)PSend22905);
    // ,. 
    Send PSend22896 = new_Send((Optr)PSend22897, SMB__append_, 1, (Optr)PSend22903);
    String string_22906 = new_String(L"</pre></body></html>");
    Constant string_22906_Const = new_Constant((Optr)string_22906);
    // ,. 
    Send PSend22895 = new_Send((Optr)PSend22896, SMB__append_, 1, (Optr)string_22906_Const);
    Assign PAssign22894 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend22895);
    SmallInt int_500 = new_SmallInt(500);
    String string_22907 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_22907_Const = new_Constant((Optr)string_22907);
    // sendResponseCode:content:type:close:. 
    Send PSend22908 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_22907_Const, (Optr)true_Const);
    Array PThreadedCode22893 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign22894, (Optr)&t_push1, (Optr)string_22900, (Optr)&t_push1, (Optr)string_22901, (Optr)&t_send1, (Optr)PSend22899, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend22898, (Optr)&t_push1, (Optr)string_22902, (Optr)&t_send1, (Optr)PSend22897, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22904, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22905, (Optr)&t_send2, (Optr)PSend22903, (Optr)&t_send1, (Optr)PSend22896, (Optr)&t_push1, (Optr)string_22906, (Optr)&t_send1, (Optr)PSend22895, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_22907, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend22908, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22890 = new_Method_with(PArray22891, PArray22892, empty_Array, PThreadedCode22893, 3, PAssign22894, PSend22908, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod22890, WebClient_Core_WebServer_Class);
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
    Send PSend22915 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend22914 = new_Send((Optr)PSend22915, SMB_serverString, 0);
    Assign PAssign22913 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend22914);
    Array PThreadedCode22912 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22913, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22915, (Optr)&t_send0, (Optr)PSend22914, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22911 = new_Block_with(empty_Array, empty_Array, PThreadedCode22912, 1, PAssign22913);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22916 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock22911);
    Array PThreadedCode22910 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock22911, (Optr)&t_send1, (Optr)PSend22916, (Optr)&t_method_return);
    Method PMethod22909 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22910, 1, PSend22916);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod22909, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22918 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22922 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22923 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend22922);
    Array PThreadedCode22921 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend22922, (Optr)&t_send1, (Optr)PSend22923, (Optr)&t_block_return);
    Block PBlock22920 = new_Block_with(empty_Array, empty_Array, PThreadedCode22921, 1, PSend22923);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22924 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock22920);
    Array PThreadedCode22919 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock22920, (Optr)&t_send1, (Optr)PSend22924, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22917 = new_Method_with(PArray22918, empty_Array, empty_Array, PThreadedCode22919, 2, PSend22924, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod22917, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22928 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend22930 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend22931 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode22929 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22930, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22931, (Optr)&t_method_return);
    Block PBlock22927 = new_Block_with(PArray22928, empty_Array, PThreadedCode22929, 2, PSend22930, PSend22931);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22932 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22933 = new_Send((Optr)PBlock22927, SMB_value_, 1, (Optr)PSend22932);
    Array PThreadedCode22926 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22927, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend22932, (Optr)&t_send1, (Optr)PSend22933, (Optr)&t_method_return);
    Method PMethod22925 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22926, 1, PSend22933);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod22925, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22935 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22937 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22936 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22937, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22934 = new_Method_with(PArray22935, empty_Array, empty_Array, PThreadedCode22936, 2, PAssign22937, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22934, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode22939 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22939, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22938, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode22941 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22941, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22940, WebClient_Core_WebServer_Class);
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
    Send PSend22944 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22945 = new_Send((Optr)PSend22944, SMB_serverDate, 0);
    Array PThreadedCode22943 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22944, (Optr)&t_send0, (Optr)PSend22945, (Optr)&t_method_return);
    Method PMethod22942 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22943, 1, PSend22945);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22942, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray22947 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend22949 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend22950 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend22949);
    Array PThreadedCode22948 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22949, (Optr)&t_send2, (Optr)PSend22950, (Optr)&t_method_return);
    Method PMethod22946 = new_Method_with(PArray22947, empty_Array, empty_Array, PThreadedCode22948, 1, PSend22950);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod22946, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray22952 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22954 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend22955 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend22954);
    Array PThreadedCode22953 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend22954, (Optr)&t_send1, (Optr)PSend22955, (Optr)&t_method_return);
    Method PMethod22951 = new_Method_with(PArray22952, empty_Array, empty_Array, PThreadedCode22953, 1, PSend22955);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod22951, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray22957 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22960 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_22962 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_22962_Const = new_Constant((Optr)string_22962);
    // nextPutAll:. 
    Send PSend22963 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_22962_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend22964 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode22961 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_22962, (Optr)&t_send1, (Optr)PSend22963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22964, (Optr)&t_method_return);
    Block PBlock22959 = new_Block_with(PArray22960, empty_Array, PThreadedCode22961, 2, PSend22963, PSend22964);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22965 = new_Send((Optr)PBlock22959, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode22958 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22959, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend22965, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22956 = new_Method_with(PArray22957, empty_Array, empty_Array, PThreadedCode22958, 2, PSend22965, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod22956, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray22967 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22969 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22968 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22969, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22966 = new_Method_with(PArray22967, empty_Array, empty_Array, PThreadedCode22968, 2, PAssign22969, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22966, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22971 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode22976 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22975 = new_Block_with(empty_Array, empty_Array, PThreadedCode22976, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend22977 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22975);
    Array PThreadedCode22974 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22975, (Optr)&t_send2, (Optr)PSend22977, (Optr)&t_block_return);
    Block PBlock22973 = new_Block_with(empty_Array, empty_Array, PThreadedCode22974, 1, PSend22977);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22978 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22973);
    Array PThreadedCode22972 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22973, (Optr)&t_send1, (Optr)PSend22978, (Optr)&t_method_return);
    Method PMethod22970 = new_Method_with(PArray22971, empty_Array, empty_Array, PThreadedCode22972, 1, PSend22978);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod22970, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22980 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22982 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22981 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22982, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22979 = new_Method_with(PArray22980, empty_Array, empty_Array, PThreadedCode22981, 2, PAssign22982, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22979, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray22984 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22988 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend22989 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22990 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend22988, (Optr)PSend22989);
    Array PThreadedCode22987 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22988, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend22989, (Optr)&t_send2, (Optr)PSend22990, (Optr)&t_block_return);
    Block PBlock22986 = new_Block_with(empty_Array, empty_Array, PThreadedCode22987, 1, PSend22990);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22991 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22986);
    Array PThreadedCode22985 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22986, (Optr)&t_send1, (Optr)PSend22991, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22983 = new_Method_with(PArray22984, empty_Array, empty_Array, PThreadedCode22985, 2, PSend22991, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod22983, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray22993 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22997 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode22999 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22998 = new_Block_with(empty_Array, empty_Array, PThreadedCode22999, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend23000 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend22997, (Optr)PBlock22998);
    Array PThreadedCode22996 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend22997, (Optr)&t_push_closure, (Optr)PBlock22998, (Optr)&t_send2, (Optr)PSend23000, (Optr)&t_block_return);
    Block PBlock22995 = new_Block_with(empty_Array, empty_Array, PThreadedCode22996, 1, PSend23000);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23001 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22995);
    Array PThreadedCode22994 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22995, (Optr)&t_send1, (Optr)PSend23001, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22992 = new_Method_with(PArray22993, empty_Array, empty_Array, PThreadedCode22994, 2, PSend23001, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod22992, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23006 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign23007 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode23005 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend23006, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23007, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23004 = new_Block_with(empty_Array, empty_Array, PThreadedCode23005, 2, PSend23006, PAssign23007);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23008 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock23004);
    Array PThreadedCode23003 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23004, (Optr)&t_send1, (Optr)PSend23008, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23003, 2, PSend23008, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod23002, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray23010 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23013 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend23017 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend23016 = new_Send((Optr)PSend23017, SMB_asUTC, 0);
    Assign PAssign23015 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend23016);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend23018 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_23019 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23019_Const = new_Constant((Optr)string_23019);
    // ,. 
    Send PSend23020 = new_Send((Optr)PSend23018, SMB__append_, 1, (Optr)string_23019_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23021 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend23020);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend23022 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23024 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend23026 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend23027 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend23028 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend23029 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend23030 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend23031 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend23032 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23033 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode23025 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend23028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend23029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23032, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23033, (Optr)&t_method_return);
    Block PBlock23023 = new_Block_with(PArray23024, empty_Array, PThreadedCode23025, 8, PSend23026, PSend23027, PSend23028, PSend23029, PSend23030, PSend23031, PSend23032, PSend23033);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23034 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23035 = new_Send((Optr)PBlock23023, SMB_value_, 1, (Optr)PSend23034);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23036 = new_Send((Optr)PSend23035, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend23037 = new_Send((Optr)PSend23022, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend23036);
    Array PArray23039 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23041 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend23042 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend23043 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend23042);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend23044 = new_Send((Optr)PSend23043, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend23045 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23044);
    Array PThreadedCode23040 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23042, (Optr)&t_send1, (Optr)PSend23043, (Optr)&t_send0, (Optr)PSend23044, (Optr)&t_send1, (Optr)PSend23045, (Optr)&t_method_return);
    Block PBlock23038 = new_Block_with(PArray23039, empty_Array, PThreadedCode23040, 2, PSend23041, PSend23045);
    // value:. 
    Send PSend23046 = new_Send((Optr)PBlock23038, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_23047 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_23047_Const = new_Constant((Optr)string_23047);
    // writeAll:. 
    Send PSend23048 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_23047_Const);
    Array PThreadedCode23014 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23015, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend23017, (Optr)&t_send0, (Optr)PSend23016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23018, (Optr)&t_push1, (Optr)string_23019, (Optr)&t_send1, (Optr)PSend23020, (Optr)&t_send1, (Optr)PSend23021, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23022, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock23023, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23034, (Optr)&t_send1, (Optr)PSend23035, (Optr)&t_send0, (Optr)PSend23036, (Optr)&t_send2, (Optr)PSend23037, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23038, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23046, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_23047, (Optr)&t_send1, (Optr)PSend23048, (Optr)&t_method_return);
    Block PBlock23012 = new_Block_with(PArray23013, empty_Array, PThreadedCode23014, 5, PAssign23015, PSend23021, PSend23037, PSend23046, PSend23048);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23049 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23012);
    Array PThreadedCode23011 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23012, (Optr)&t_send1, (Optr)PSend23049, (Optr)&t_method_return);
    Method PMethod23009 = new_Method_with(empty_Array, PArray23010, empty_Array, PThreadedCode23011, 1, PSend23049);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23009, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_23052 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode23051 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23052, (Optr)&t_method_return);
    Constant string_23052_Const = new_Constant((Optr)string_23052);
    Method PMethod23050 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23051, 1, string_23052_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod23050, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_23055 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode23054 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23055, (Optr)&t_method_return);
    Constant string_23055_Const = new_Constant((Optr)string_23055);
    Method PMethod23053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23054, 1, string_23055_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23053, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23061 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign23060 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend23061);
    Array PThreadedCode23059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23060, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23061, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23058 = new_Block_with(empty_Array, empty_Array, PThreadedCode23059, 1, PAssign23060);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23062 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock23058);
    Array PThreadedCode23057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23058, (Optr)&t_send1, (Optr)PSend23062, (Optr)&t_method_return);
    Method PMethod23056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23057, 1, PSend23062);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod23056, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray23064 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23067 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign23066 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend23067);
    // new. 
    Send PSend23069 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23068 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend23069);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend23070 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend23071 = new_Send((Optr)PSend23070, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend23072 = new_Send((Optr)PSend23071, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend23073 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_23074 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray23076 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend23078 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_23079 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23079_Const = new_Constant((Optr)string_23079);
    // send200Response:contentType:. 
    Send PSend23080 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend23078, (Optr)string_23079_Const);
    Array PThreadedCode23077 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23078, (Optr)&t_push1, (Optr)string_23079, (Optr)&t_send2, (Optr)PSend23080, (Optr)&t_method_return);
    Block PBlock23075 = new_Block_with(PArray23076, empty_Array, PThreadedCode23077, 1, PSend23080);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_23074_Const = new_Constant((Optr)string_23074);
    // addService:action:. 
    Send PSend23081 = new_Send((Optr)PSend23073, SMB_addService_action_, 2, (Optr)string_23074_Const, (Optr)PBlock23075);
    Array PThreadedCode23065 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23066, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend23067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23068, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23069, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23070, (Optr)&t_send0, (Optr)PSend23071, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend23072, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23073, (Optr)&t_push1, (Optr)string_23074, (Optr)&t_push_closure, (Optr)PBlock23075, (Optr)&t_send2, (Optr)PSend23081, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23063 = new_Method_with(empty_Array, PArray23064, empty_Array, PThreadedCode23065, 5, PAssign23066, PAssign23068, PSend23072, PSend23081, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod23063, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_example, MC_SMB_example);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_23084 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode23083 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23084, (Optr)&t_method_return);
    Constant string_23084_Const = new_Constant((Optr)string_23084);
    Method PMethod23082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23083, 1, string_23084_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod23082, HEADER(WebClient_Core_WebServer_Class));
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