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
    Array PArray22646 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22647 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22657 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22656 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22657, (Optr)&t_block_return);
    Block PBlock22655 = new_Block_with(empty_Array, empty_Array, PThreadedCode22656, 1, PSend22657);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22659 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22661 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22660 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22661, (Optr)&t_method_return);
    Block PBlock22658 = new_Block_with(PArray22659, empty_Array, PThreadedCode22660, 1, PSend22661);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22662 = new_Send((Optr)PBlock22655, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22658);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22665 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22667 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22666 = new_Block_with(empty_Array, empty_Array, PThreadedCode22667, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22668 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22665, (Optr)PBlock22666);
    Array PThreadedCode22664 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22665, (Optr)&t_push_closure, (Optr)PBlock22666, (Optr)&t_send2, (Optr)PSend22668, (Optr)&t_block_return);
    Block PBlock22663 = new_Block_with(empty_Array, empty_Array, PThreadedCode22664, 1, PSend22668);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22669 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22663);
    Array PThreadedCode22654 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22655, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22658, (Optr)&t_send2, (Optr)PSend22662, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22663, (Optr)&t_send1, (Optr)PSend22669, (Optr)&t_block_return);
    Block PBlock22653 = new_Block_with(empty_Array, empty_Array, PThreadedCode22654, 2, PSend22662, PSend22669);
    // destroy. 
    Send PSend22672 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22671 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22672, (Optr)&t_block_return);
    Block PBlock22670 = new_Block_with(empty_Array, empty_Array, PThreadedCode22671, 1, PSend22672);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22673 = new_Send((Optr)PBlock22653, SMB_ensure_, 1, (Optr)PBlock22670);
    Array PThreadedCode22652 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22653, (Optr)&t_push_closure, (Optr)PBlock22670, (Optr)&t_send1, (Optr)PSend22673, (Optr)&t_block_return);
    Block PBlock22651 = new_Block_with(empty_Array, empty_Array, PThreadedCode22652, 1, PSend22673);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22650 = new_Send((Optr)PBlock22651, SMB_fork, 0);
    Assign PAssign22649 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22650);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22676 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22675 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22676, (Optr)&t_block_return);
    Block PBlock22674 = new_Block_with(empty_Array, empty_Array, PThreadedCode22675, 1, PSend22676);
    // critical:. 
    Send PSend22677 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22674);
    Array PThreadedCode22648 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22649, (Optr)&t_push_closure, (Optr)PBlock22651, (Optr)&t_send0, (Optr)PSend22650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22674, (Optr)&t_send1, (Optr)PSend22677, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22645 = new_Method_with(PArray22646, PArray22647, empty_Array, PThreadedCode22648, 3, PAssign22649, PSend22677, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22645, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22679 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22684 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22683 = new_Block_with(empty_Array, empty_Array, PThreadedCode22684, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22685 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22683);
    Array PThreadedCode22682 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22683, (Optr)&t_send2, (Optr)PSend22685, (Optr)&t_block_return);
    Block PBlock22681 = new_Block_with(empty_Array, empty_Array, PThreadedCode22682, 1, PSend22685);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22686 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22681);
    Array PThreadedCode22680 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22681, (Optr)&t_send1, (Optr)PSend22686, (Optr)&t_method_return);
    Method PMethod22678 = new_Method_with(PArray22679, empty_Array, empty_Array, PThreadedCode22680, 1, PSend22686);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22678, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22688 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22688, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22687, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22691 = new_String(L"HEAD");
    String string_22692 = new_String(L"TRACE");
    String string_22693 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22691_Const = new_Constant((Optr)string_22691);
    Constant string_22692_Const = new_Constant((Optr)string_22692);
    Constant string_22693_Const = new_Constant((Optr)string_22693);
    // with:with:with:. 
    Send PSend22694 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22691_Const, (Optr)string_22692_Const, (Optr)string_22693_Const);
    Array PThreadedCode22690 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22691, (Optr)&t_push1, (Optr)string_22692, (Optr)&t_push1, (Optr)string_22693, (Optr)&t_send3, (Optr)PSend22694, (Optr)&t_method_return);
    Method PMethod22689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22690, 1, PSend22694);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22689, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22696 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22699 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22703 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22702 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22703, (Optr)&t_block_return);
    Block PBlock22701 = new_Block_with(empty_Array, empty_Array, PThreadedCode22702, 1, PSend22703);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22704 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22701);
    Array PThreadedCode22700 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22701, (Optr)&t_send1, (Optr)PSend22704, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22698 = new_Block_with(PArray22699, empty_Array, PThreadedCode22700, 2, PSend22704, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22705 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22698);
    Array PThreadedCode22697 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22698, (Optr)&t_send1, (Optr)PSend22705, (Optr)&t_method_return);
    Method PMethod22695 = new_Method_with(PArray22696, empty_Array, empty_Array, PThreadedCode22697, 1, PSend22705);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22695, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22707 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22709 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22708 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22709, (Optr)&t_method_return);
    Method PMethod22706 = new_Method_with(PArray22707, empty_Array, empty_Array, PThreadedCode22708, 1, PSend22709);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22706, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22711 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22711, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22710, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22713 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22714 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22718 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22718_Const = new_Constant((Optr)string_22718);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22719 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22719_Const = new_Constant((Optr)string_22719);
    // ,. 
    Send PSend22717 = new_Send((Optr)string_22718_Const, SMB__append_, 1, (Optr)string_22719_Const);
    Assign PAssign22716 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22717);
    String string_22722 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22723 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22722_Const = new_Constant((Optr)string_22722);
    // ,. 
    Send PSend22724 = new_Send((Optr)string_22722_Const, SMB__append_, 1, (Optr)PSend22723);
    String string_22725 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22725_Const = new_Constant((Optr)string_22725);
    // ,. 
    Send PSend22726 = new_Send((Optr)PSend22724, SMB__append_, 1, (Optr)string_22725_Const);
    // crlf. 
    Send PSend22727 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22728 = new_Send((Optr)PSend22726, SMB__append_, 1, (Optr)PSend22727);
    String string_22729 = new_String(L"Connection: close");
    Constant string_22729_Const = new_Constant((Optr)string_22729);
    // ,. 
    Send PSend22730 = new_Send((Optr)PSend22728, SMB__append_, 1, (Optr)string_22729_Const);
    // crlf. 
    Send PSend22731 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22732 = new_Send((Optr)PSend22730, SMB__append_, 1, (Optr)PSend22731);
    String string_22733 = new_String(L"Content-Length: ");
    Constant string_22733_Const = new_Constant((Optr)string_22733);
    // ,. 
    Send PSend22734 = new_Send((Optr)PSend22732, SMB__append_, 1, (Optr)string_22733_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22735 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22736 = new_Send((Optr)PSend22735, SMB_asString, 0);
    // ,. 
    Send PSend22737 = new_Send((Optr)PSend22734, SMB__append_, 1, (Optr)PSend22736);
    // crlf. 
    Send PSend22738 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22739 = new_Send((Optr)PSend22737, SMB__append_, 1, (Optr)PSend22738);
    // crlf. 
    Send PSend22740 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22741 = new_Send((Optr)PSend22739, SMB__append_, 1, (Optr)PSend22740);
    // ,. 
    Send PSend22742 = new_Send((Optr)PSend22741, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22743 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22742);
    Array PThreadedCode22721 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22722, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22723, (Optr)&t_send1, (Optr)PSend22724, (Optr)&t_push1, (Optr)string_22725, (Optr)&t_send1, (Optr)PSend22726, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22727, (Optr)&t_send1, (Optr)PSend22728, (Optr)&t_push1, (Optr)string_22729, (Optr)&t_send1, (Optr)PSend22730, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22731, (Optr)&t_send1, (Optr)PSend22732, (Optr)&t_push1, (Optr)string_22733, (Optr)&t_send1, (Optr)PSend22734, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22735, (Optr)&t_send0, (Optr)PSend22736, (Optr)&t_send1, (Optr)PSend22737, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22738, (Optr)&t_send1, (Optr)PSend22739, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22740, (Optr)&t_send1, (Optr)PSend22741, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22742, (Optr)&t_send1, (Optr)PSend22743, (Optr)&t_block_return);
    Block PBlock22720 = new_Block_with(empty_Array, empty_Array, PThreadedCode22721, 1, PSend22743);
    Array PThreadedCode22745 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22744 = new_Block_with(empty_Array, empty_Array, PThreadedCode22745, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22746 = new_Send((Optr)PBlock22720, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22744);
    Array PThreadedCode22715 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22716, (Optr)&t_push1, (Optr)string_22718, (Optr)&t_push1, (Optr)string_22719, (Optr)&t_send1, (Optr)PSend22717, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22720, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22744, (Optr)&t_send2, (Optr)PSend22746, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22712 = new_Method_with(PArray22713, PArray22714, empty_Array, PThreadedCode22715, 3, PAssign22716, PSend22746, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22712, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22748 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22750 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22749 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22750, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22747 = new_Method_with(PArray22748, empty_Array, empty_Array, PThreadedCode22749, 1, PAssign22750);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22747, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22752 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22751 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22752, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22751, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22755 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22760 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22759 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22760, (Optr)&t_block_return);
    Block PBlock22758 = new_Block_with(empty_Array, empty_Array, PThreadedCode22759, 1, PSend22760);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22757 = new_Send((Optr)PBlock22758, SMB_fork, 0);
    Assign PAssign22756 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22757);
    Array PThreadedCode22754 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22755, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22756, (Optr)&t_push_closure, (Optr)PBlock22758, (Optr)&t_send0, (Optr)PSend22757, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22754, 3, PSend22755, PAssign22756, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22753, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22764 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22763 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22764);
    // new. 
    Send PSend22766 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22765 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22766);
    // new. 
    Send PSend22768 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22767 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22768);
    // new. 
    Send PSend22770 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22769 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22770);
    // new. 
    Send PSend22772 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22771 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22772);
    // new. 
    Send PSend22774 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22773 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22774);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22776 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22779 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22781 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22782 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22780 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22782, (Optr)&t_method_return);
    Block PBlock22778 = new_Block_with(PArray22779, empty_Array, PThreadedCode22780, 2, PSend22781, PSend22782);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22783 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22784 = new_Send((Optr)PBlock22778, SMB_value_, 1, (Optr)PSend22783);
    Array PThreadedCode22777 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22778, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22783, (Optr)&t_send1, (Optr)PSend22784, (Optr)&t_method_return);
    Block PBlock22775 = new_Block_with(PArray22776, empty_Array, PThreadedCode22777, 1, PSend22784);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22785 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22775);
    Array PThreadedCode22762 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22763, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22764, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22765, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22766, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22767, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22768, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22769, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22770, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22771, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22772, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22773, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22774, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22775, (Optr)&t_send1, (Optr)PSend22785, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22761 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22762, 8, PAssign22763, PAssign22765, PAssign22767, PAssign22769, PAssign22771, PAssign22773, PSend22785, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22761, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22787 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22789 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22788 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22789, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22786 = new_Method_with(PArray22787, empty_Array, empty_Array, PThreadedCode22788, 2, PAssign22789, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22786, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22791 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22792 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22795 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22802 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22801 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22802);
    Array PThreadedCode22800 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22801, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22802, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22799 = new_Block_with(empty_Array, empty_Array, PThreadedCode22800, 1, PAssign22801);
    String string_22805 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22805_Const = new_Constant((Optr)string_22805);
    // error:. 
    Send PSend22806 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22805_Const);
    Array PThreadedCode22804 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22805, (Optr)&t_send1, (Optr)PSend22806, (Optr)&t_block_return);
    Block PBlock22803 = new_Block_with(empty_Array, empty_Array, PThreadedCode22804, 1, PSend22806);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22807 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22799, (Optr)PBlock22803);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22810 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22809 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22810, (Optr)&t_block_return);
    Block PBlock22808 = new_Block_with(empty_Array, empty_Array, PThreadedCode22809, 1, PSend22810);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22813 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22816 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22817 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22816);
    Array PThreadedCode22815 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22816, (Optr)&t_send1, (Optr)PSend22817, (Optr)&t_block_return);
    Block PBlock22814 = new_Block_with(empty_Array, empty_Array, PThreadedCode22815, 1, PSend22817);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22818 = new_Send((Optr)PSend22813, SMB_ifNil_, 1, (Optr)PBlock22814);
    String string_22819 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22819_Const = new_Constant((Optr)string_22819);
    // warn:. 
    Send PSend22820 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22819_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22822 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22821 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22822);
    String string_22823 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22823_Const = new_Constant((Optr)string_22823);
    // warn:. 
    Send PSend22824 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22823_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22827 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22826 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22827, (Optr)&t_block_return);
    Block PBlock22825 = new_Block_with(empty_Array, empty_Array, PThreadedCode22826, 1, PSend22827);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22829 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22831 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22832 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22831);
    Array PThreadedCode22830 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22831, (Optr)&t_send1, (Optr)PSend22832, (Optr)&t_method_return);
    Block PBlock22828 = new_Block_with(PArray22829, empty_Array, PThreadedCode22830, 1, PSend22832);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22833 = new_Send((Optr)PBlock22825, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22828);
    String string_22834 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22834_Const = new_Constant((Optr)string_22834);
    // warn:. 
    Send PSend22835 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22834_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22836 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22812 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22813, (Optr)&t_push_closure, (Optr)PBlock22814, (Optr)&t_send1, (Optr)PSend22818, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22819, (Optr)&t_send1, (Optr)PSend22820, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22821, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22822, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22823, (Optr)&t_send1, (Optr)PSend22824, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22825, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22828, (Optr)&t_send2, (Optr)PSend22833, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22834, (Optr)&t_send1, (Optr)PSend22835, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22836, (Optr)&t_block_return);
    Block PBlock22811 = new_Block_with(empty_Array, empty_Array, PThreadedCode22812, 7, PSend22818, PSend22820, PAssign22821, PSend22824, PSend22833, PSend22835, PSend22836);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22837 = new_Send((Optr)PBlock22808, SMB_whileTrue_, 1, (Optr)PBlock22811);
    Array PThreadedCode22798 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22799, (Optr)&t_push_closure, (Optr)PBlock22803, (Optr)&t_send2, (Optr)PSend22807, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22808, (Optr)&t_push_closure, (Optr)PBlock22811, (Optr)&t_send1, (Optr)PSend22837, (Optr)&t_block_return);
    Block PBlock22797 = new_Block_with(empty_Array, empty_Array, PThreadedCode22798, 2, PSend22807, PSend22837);
    Array PArray22839 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22841 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22840 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22841, (Optr)&t_method_return);
    Block PBlock22838 = new_Block_with(PArray22839, empty_Array, PThreadedCode22840, 1, PSend22841);
    // on:do:. 
    Send PSend22842 = new_Send((Optr)PBlock22797, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22838);
    Array PThreadedCode22796 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22797, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22838, (Optr)&t_send2, (Optr)PSend22842, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22794 = new_Block_with(PArray22795, empty_Array, PThreadedCode22796, 2, PSend22842, self);
    // on:. 
    Send PSend22843 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22794);
    Array PThreadedCode22793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22794, (Optr)&t_send1, (Optr)PSend22843, (Optr)&t_method_return);
    Method PMethod22790 = new_Method_with(PArray22791, PArray22792, empty_Array, PThreadedCode22793, 1, PSend22843);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22790, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22845 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22845, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22844, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22847 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22847, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22846, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22849 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22851 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22851, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22848 = new_Method_with(PArray22849, empty_Array, empty_Array, PThreadedCode22850, 2, PAssign22851, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22848, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22854 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22853 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22854, (Optr)&t_method_return);
    Method PMethod22852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22853, 1, PSend22854);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22852, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22856 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22859 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22867 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22870 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22869 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22870, (Optr)&t_block_return);
    Block PBlock22868 = new_Block_with(empty_Array, empty_Array, PThreadedCode22869, 1, PSend22870);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22871 = new_Send((Optr)PSend22867, SMB_and_, 1, (Optr)PBlock22868);
    Array PThreadedCode22866 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22867, (Optr)&t_push_closure, (Optr)PBlock22868, (Optr)&t_send1, (Optr)PSend22871, (Optr)&t_block_return);
    Block PBlock22865 = new_Block_with(empty_Array, empty_Array, PThreadedCode22866, 1, PSend22871);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22875 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22874 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22875);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22878 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22877 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22878, (Optr)&t_block_return);
    Block PBlock22876 = new_Block_with(empty_Array, empty_Array, PThreadedCode22877, 1, PSend22878);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22879 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22876);
    Array PThreadedCode22873 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22874, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22875, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22876, (Optr)&t_send1, (Optr)PSend22879, (Optr)&t_block_return);
    Block PBlock22872 = new_Block_with(empty_Array, empty_Array, PThreadedCode22873, 2, PAssign22874, PSend22879);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22880 = new_Send((Optr)PBlock22865, SMB_whileTrue_, 1, (Optr)PBlock22872);
    Array PThreadedCode22864 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22865, (Optr)&t_push_closure, (Optr)PBlock22872, (Optr)&t_send1, (Optr)PSend22880, (Optr)&t_block_return);
    Block PBlock22863 = new_Block_with(empty_Array, empty_Array, PThreadedCode22864, 1, PSend22880);
    String string_22883 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22885 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22887 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22886 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22887, (Optr)&t_method_return);
    Block PBlock22884 = new_Block_with(PArray22885, empty_Array, PThreadedCode22886, 1, PSend22887);
    // ifNotNil:. 
    Send PSend22888 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22884);
    Constant string_22883_Const = new_Constant((Optr)string_22883);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22889 = new_Send((Optr)string_22883_Const, SMB__append_, 1, (Optr)PSend22888);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22890 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22889);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22891 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22894 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22895 = new_Send((Optr)PSend22894, SMB_not, 0);
    Array PThreadedCode22893 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22894, (Optr)&t_send0, (Optr)PSend22895, (Optr)&t_block_return);
    Block PBlock22892 = new_Block_with(empty_Array, empty_Array, PThreadedCode22893, 1, PSend22895);
    // and:. 
    Send PSend22896 = new_Send((Optr)PSend22891, SMB_and_, 1, (Optr)PBlock22892);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22900 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22901 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22902 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22903 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22902);
    Array PThreadedCode22899 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22900, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22901, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22902, (Optr)&t_send1, (Optr)PSend22903, (Optr)&t_block_return);
    Block PBlock22898 = new_Block_with(empty_Array, empty_Array, PThreadedCode22899, 3, PSend22900, PAssign22901, PSend22903);
    // ifTrue:. 
    Send PSend22897 = new_Send((Optr)PSend22896, SMB_ifTrue_, 1, (Optr)PBlock22898);
    Array PThreadedCode22882 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22883, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22884, (Optr)&t_send1, (Optr)PSend22888, (Optr)&t_send1, (Optr)PSend22889, (Optr)&t_send1, (Optr)PSend22890, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22891, (Optr)&t_push_closure, (Optr)PBlock22892, (Optr)&t_send1, (Optr)PSend22896, (Optr)&t_send_ifTrue_, (Optr)PSend22897, (Optr)PBlock22898, (Optr)&t_block_return);
    Block PBlock22881 = new_Block_with(empty_Array, empty_Array, PThreadedCode22882, 2, PSend22890, PSend22897);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22904 = new_Send((Optr)PBlock22863, SMB_ensure_, 1, (Optr)PBlock22881);
    Array PThreadedCode22862 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22863, (Optr)&t_push_closure, (Optr)PBlock22881, (Optr)&t_send1, (Optr)PSend22904, (Optr)&t_block_return);
    Block PBlock22861 = new_Block_with(empty_Array, empty_Array, PThreadedCode22862, 1, PSend22904);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22906 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22908 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22907 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22908, (Optr)&t_method_return);
    Block PBlock22905 = new_Block_with(PArray22906, empty_Array, PThreadedCode22907, 1, PSend22908);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22909 = new_Send((Optr)PBlock22861, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22905);
    Array PThreadedCode22860 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22861, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22905, (Optr)&t_send2, (Optr)PSend22909, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22858 = new_Block_with(PArray22859, empty_Array, PThreadedCode22860, 2, PSend22909, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22910 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22858);
    Array PThreadedCode22857 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22858, (Optr)&t_send1, (Optr)PSend22910, (Optr)&t_method_return);
    Method PMethod22855 = new_Method_with(empty_Array, PArray22856, empty_Array, PThreadedCode22857, 1, PSend22910);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22855, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22913 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22914 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22917 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22916 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22917, (Optr)&t_block_return);
    Block PBlock22915 = new_Block_with(empty_Array, empty_Array, PThreadedCode22916, 1, PSend22917);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22918 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22915);
    Array PThreadedCode22912 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22913, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22914, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22915, (Optr)&t_send1, (Optr)PSend22918, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22912, 4, PSend22913, PSend22914, PSend22918, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22911, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22920 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22922 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22921 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22922, (Optr)&t_method_return);
    Method PMethod22919 = new_Method_with(PArray22920, empty_Array, empty_Array, PThreadedCode22921, 1, PSend22922);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22919, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22928 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22930 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22929 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22930, (Optr)&t_method_return);
    Block PBlock22927 = new_Block_with(PArray22928, empty_Array, PThreadedCode22929, 1, PSend22930);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22931 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22927);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22932 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22926 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22927, (Optr)&t_send1, (Optr)PSend22931, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22932, (Optr)&t_block_return);
    Block PBlock22925 = new_Block_with(empty_Array, empty_Array, PThreadedCode22926, 2, PSend22931, PSend22932);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22933 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22925);
    Array PThreadedCode22924 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22925, (Optr)&t_send1, (Optr)PSend22933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22924, 2, PSend22933, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22923, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22936 = new_String(L"GET");
    String string_22937 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22936_Const = new_Constant((Optr)string_22936);
    Constant string_22937_Const = new_Constant((Optr)string_22937);
    // with:with:. 
    Send PSend22938 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22936_Const, (Optr)string_22937_Const);
    Array PThreadedCode22935 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22936, (Optr)&t_push1, (Optr)string_22937, (Optr)&t_send2, (Optr)PSend22938, (Optr)&t_method_return);
    Method PMethod22934 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22935, 1, PSend22938);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22934, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22940 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22939 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22940, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22939, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22942 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22943 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22945 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22946 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22951 = new_String(L"*");
    Array PThreadedCode22950 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22951, (Optr)&t_block_return);
    Constant string_22951_Const = new_Constant((Optr)string_22951);
    Block PBlock22949 = new_Block_with(empty_Array, empty_Array, PThreadedCode22950, 1, string_22951_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22954 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22953 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22954, (Optr)&t_block_return);
    Block PBlock22952 = new_Block_with(empty_Array, empty_Array, PThreadedCode22953, 1, PSend22954);
    // ifNil:ifNotNil:. 
    Send PSend22948 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22949, (Optr)PBlock22952);
    Assign PAssign22947 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22948);
    String string_22955 = new_String(L"Listener starting (interface: ");
    Constant string_22955_Const = new_Constant((Optr)string_22955);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22956 = new_Send((Optr)string_22955_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22957 = new_String(L" port: ");
    Constant string_22957_Const = new_Constant((Optr)string_22957);
    // ,. 
    Send PSend22958 = new_Send((Optr)PSend22956, SMB__append_, 1, (Optr)string_22957_Const);
    // ,. 
    Send PSend22959 = new_Send((Optr)PSend22958, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22960 = new_String(L")");
    Constant string_22960_Const = new_Constant((Optr)string_22960);
    // ,. 
    Send PSend22961 = new_Send((Optr)PSend22959, SMB__append_, 1, (Optr)string_22960_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22962 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22961);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22964 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22963 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22964);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22967 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22966 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22967, (Optr)&t_block_return);
    Block PBlock22965 = new_Block_with(empty_Array, empty_Array, PThreadedCode22966, 1, PSend22967);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22970 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22969 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22970, (Optr)&t_block_return);
    Block PBlock22968 = new_Block_with(empty_Array, empty_Array, PThreadedCode22969, 1, PSend22970);
    // ifNil:ifNotNil:. 
    Send PSend22971 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22965, (Optr)PBlock22968);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22972 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22944 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22945, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22946, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22947, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22949, (Optr)&t_push_closure, (Optr)PBlock22952, (Optr)&t_send2, (Optr)PSend22948, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22955, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22956, (Optr)&t_push1, (Optr)string_22957, (Optr)&t_send1, (Optr)PSend22958, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22959, (Optr)&t_push1, (Optr)string_22960, (Optr)&t_send1, (Optr)PSend22961, (Optr)&t_send1, (Optr)PSend22962, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22963, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22964, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22965, (Optr)&t_push_closure, (Optr)PBlock22968, (Optr)&t_send2, (Optr)PSend22971, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22972, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22941 = new_Method_with(PArray22942, PArray22943, empty_Array, PThreadedCode22944, 8, PAssign22945, PAssign22946, PAssign22947, PSend22962, PAssign22963, PSend22971, PSend22972, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22941, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22974 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22973 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22974, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22973, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22976 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22978 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22979 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22978);
    Array PThreadedCode22977 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22978, (Optr)&t_send3, (Optr)PSend22979, (Optr)&t_method_return);
    Method PMethod22975 = new_Method_with(PArray22976, empty_Array, empty_Array, PThreadedCode22977, 1, PSend22979);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22975, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22984 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22983 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22984, (Optr)&t_block_return);
    Block PBlock22982 = new_Block_with(empty_Array, empty_Array, PThreadedCode22983, 1, PSend22984);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22985 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22982);
    Assign PAssign22986 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22981 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22982, (Optr)&t_send1, (Optr)PSend22985, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22986, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22980 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22981, 3, PSend22985, PAssign22986, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22980, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22988 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22990 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22989 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22990, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22987 = new_Method_with(PArray22988, empty_Array, empty_Array, PThreadedCode22989, 2, PAssign22990, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22987, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22993 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22994 = new_Send((Optr)PSend22993, SMB_not, 0);
    Array PThreadedCode22992 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22993, (Optr)&t_send0, (Optr)PSend22994, (Optr)&t_method_return);
    Method PMethod22991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22992, 1, PSend22994);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22991, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22996 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22995 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22996, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22995, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22998 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22999 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23002 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23004 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23005 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23005_Const = new_Constant((Optr)string_23005);
    // =. 
    Send PSend23006 = new_Send((Optr)PSend23004, SMB__equals_, 1, (Optr)string_23005_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23010 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_23011 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23011_Const = new_Constant((Optr)string_23011);
    // send200Response:contentType:. 
    Send PSend23012 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend23010, (Optr)string_23011_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23013 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23012);
    Array PThreadedCode23009 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23010, (Optr)&t_push1, (Optr)string_23011, (Optr)&t_send2, (Optr)PSend23012, (Optr)&t_send1, (Optr)PSend23013, (Optr)&t_block_return);
    Block PBlock23008 = new_Block_with(empty_Array, empty_Array, PThreadedCode23009, 1, PSend23013);
    // ifTrue:. 
    Send PSend23007 = new_Send((Optr)PSend23006, SMB_ifTrue_, 1, (Optr)PBlock23008);
    Assign PAssign23014 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23016 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign23015 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23016);
    String string_23017 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23017_Const = new_Constant((Optr)string_23017);
    // beginsWith:. 
    Send PSend23018 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_23017_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23024 = new_String(L"/");
    Constant string_23024_Const = new_Constant((Optr)string_23024);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23023 = new_Send((Optr)string_23024_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign23022 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23023);
    Array PThreadedCode23021 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign23022, (Optr)&t_push1, (Optr)string_23024, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend23023, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23020 = new_Block_with(empty_Array, empty_Array, PThreadedCode23021, 1, PAssign23022);
    // ifFalse:. 
    Send PSend23019 = new_Send((Optr)PSend23018, SMB_ifFalse_, 1, (Optr)PBlock23020);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend23029 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23032 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode23031 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23032, (Optr)&t_block_return);
    Block PBlock23030 = new_Block_with(empty_Array, empty_Array, PThreadedCode23031, 1, PSend23032);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23033 = new_Send((Optr)PSend23029, SMB_and_, 1, (Optr)PBlock23030);
    Array PThreadedCode23028 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend23029, (Optr)&t_push_closure, (Optr)PBlock23030, (Optr)&t_send1, (Optr)PSend23033, (Optr)&t_block_return);
    Block PBlock23027 = new_Block_with(empty_Array, empty_Array, PThreadedCode23028, 1, PSend23033);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode23039 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23038 = new_Block_with(empty_Array, empty_Array, PThreadedCode23039, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend23037 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock23038);
    Assign PAssign23036 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend23037);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_23042 = new_Character(L'/');
    Constant char_23042_Const = new_Constant((Optr)char_23042);
    // copyUpToLast:. 
    Send PSend23041 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_23042_Const);
    Assign PAssign23040 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23041);
    Array PThreadedCode23035 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23036, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock23038, (Optr)&t_send2, (Optr)PSend23037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23040, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_23042, (Optr)&t_send1, (Optr)PSend23041, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23034 = new_Block_with(empty_Array, empty_Array, PThreadedCode23035, 2, PAssign23036, PAssign23040);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23043 = new_Send((Optr)PBlock23027, SMB_whileTrue_, 1, (Optr)PBlock23034);
    String string_23048 = new_String(L"/");
    Constant string_23048_Const = new_Constant((Optr)string_23048);
    Array PThreadedCode23050 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23049 = new_Block_with(empty_Array, empty_Array, PThreadedCode23050, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend23047 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_23048_Const, (Optr)PBlock23049);
    Assign PAssign23046 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend23047);
    Array PThreadedCode23045 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23046, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_23048, (Optr)&t_push_closure, (Optr)PBlock23049, (Optr)&t_send2, (Optr)PSend23047, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23044 = new_Block_with(empty_Array, empty_Array, PThreadedCode23045, 1, PAssign23046);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23051 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock23044);
    Array PThreadedCode23026 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock23027, (Optr)&t_push_closure, (Optr)PBlock23034, (Optr)&t_send1, (Optr)PSend23043, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23044, (Optr)&t_send1, (Optr)PSend23051, (Optr)&t_block_return);
    Block PBlock23025 = new_Block_with(empty_Array, empty_Array, PThreadedCode23026, 2, PSend23043, PSend23051);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23052 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23025);
    // method. 
    Send PSend23053 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23054 = new_String(L"OPTIONS");
    Constant string_23054_Const = new_Constant((Optr)string_23054);
    // =. 
    Send PSend23055 = new_Send((Optr)PSend23053, SMB__equals_, 1, (Optr)string_23054_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend23059 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend23062 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode23061 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23062, (Optr)&t_block_return);
    Block PBlock23060 = new_Block_with(empty_Array, empty_Array, PThreadedCode23061, 1, PSend23062);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23065 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode23064 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend23065, (Optr)&t_block_return);
    Block PBlock23063 = new_Block_with(empty_Array, empty_Array, PThreadedCode23064, 1, PSend23065);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23066 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23060, (Optr)PBlock23063);
    // ,. 
    Send PSend23067 = new_Send((Optr)PSend23059, SMB__append_, 1, (Optr)PSend23066);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend23068 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend23067);
    Array PThreadedCode23058 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23059, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23060, (Optr)&t_push_closure, (Optr)PBlock23063, (Optr)&t_send2, (Optr)PSend23066, (Optr)&t_send1, (Optr)PSend23067, (Optr)&t_send1, (Optr)PSend23068, (Optr)&t_block_return);
    Block PBlock23057 = new_Block_with(empty_Array, empty_Array, PThreadedCode23058, 1, PSend23068);
    // ifTrue:. 
    Send PSend23056 = new_Send((Optr)PSend23055, SMB_ifTrue_, 1, (Optr)PBlock23057);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend23071 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend23072 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23071);
    Array PThreadedCode23070 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23071, (Optr)&t_send1, (Optr)PSend23072, (Optr)&t_block_return);
    Block PBlock23069 = new_Block_with(empty_Array, empty_Array, PThreadedCode23070, 1, PSend23072);
    // ifNil:. 
    Send PSend23073 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock23069);
    // method. 
    Send PSend23074 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23075 = new_String(L"HEAD");
    Constant string_23075_Const = new_Constant((Optr)string_23075);
    // =. 
    Send PSend23076 = new_Send((Optr)PSend23074, SMB__equals_, 1, (Optr)string_23075_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend23079 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend23080 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend23081 = new_Send((Optr)PSend23079, SMB_includes_, 1, (Optr)PSend23080);
    Array PThreadedCode23078 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23079, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23080, (Optr)&t_send1, (Optr)PSend23081, (Optr)&t_block_return);
    Block PBlock23077 = new_Block_with(empty_Array, empty_Array, PThreadedCode23078, 1, PSend23081);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23082 = new_Send((Optr)PSend23076, SMB_or_, 1, (Optr)PBlock23077);
    // builtinHttpMethods. 
    Send PSend23086 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend23087 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend23088 = new_Send((Optr)PSend23086, SMB__append_, 1, (Optr)PSend23087);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend23089 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend23088);
    // escape:. 
    Send PSend23090 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23089);
    Array PThreadedCode23085 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23086, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend23087, (Optr)&t_send1, (Optr)PSend23088, (Optr)&t_send1, (Optr)PSend23089, (Optr)&t_send1, (Optr)PSend23090, (Optr)&t_block_return);
    Block PBlock23084 = new_Block_with(empty_Array, empty_Array, PThreadedCode23085, 1, PSend23090);
    // ifFalse:. 
    Send PSend23083 = new_Send((Optr)PSend23082, SMB_ifFalse_, 1, (Optr)PBlock23084);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend23093 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend23094 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend23093, (Optr)VAR_request_0_0);
    Array PThreadedCode23092 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23093, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend23094, (Optr)&t_block_return);
    Block PBlock23091 = new_Block_with(empty_Array, empty_Array, PThreadedCode23092, 1, PSend23094);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray23096 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend23098 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode23097 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend23098, (Optr)&t_method_return);
    Block PBlock23095 = new_Block_with(PArray23096, empty_Array, PThreadedCode23097, 1, PSend23098);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23099 = new_Send((Optr)PBlock23091, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock23095);
    Array PThreadedCode23003 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23004, (Optr)&t_push1, (Optr)string_23005, (Optr)&t_send1, (Optr)PSend23006, (Optr)&t_send_ifTrue_, (Optr)PSend23007, (Optr)PBlock23008, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23014, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23015, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend23016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_23017, (Optr)&t_send1, (Optr)PSend23018, (Optr)&t_send_ifFalse_, (Optr)PSend23019, (Optr)PBlock23020, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23025, (Optr)&t_send1, (Optr)PSend23052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23053, (Optr)&t_push1, (Optr)string_23054, (Optr)&t_send1, (Optr)PSend23055, (Optr)&t_send_ifTrue_, (Optr)PSend23056, (Optr)PBlock23057, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23069, (Optr)&t_send1, (Optr)PSend23073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23074, (Optr)&t_push1, (Optr)string_23075, (Optr)&t_send1, (Optr)PSend23076, (Optr)&t_push_closure, (Optr)PBlock23077, (Optr)&t_send1, (Optr)PSend23082, (Optr)&t_send_ifFalse_, (Optr)PSend23083, (Optr)PBlock23084, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23091, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock23095, (Optr)&t_send2, (Optr)PSend23099, (Optr)&t_method_return);
    Block PBlock23001 = new_Block_with(PArray23002, empty_Array, PThreadedCode23003, 9, PSend23007, PAssign23014, PAssign23015, PSend23019, PSend23052, PSend23056, PSend23073, PSend23083, PSend23099);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23100 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23001);
    Array PThreadedCode23000 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23001, (Optr)&t_send1, (Optr)PSend23100, (Optr)&t_method_return);
    Method PMethod22997 = new_Method_with(PArray22998, PArray22999, empty_Array, PThreadedCode23000, 1, PSend23100);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22997, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray23102 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend23104 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode23103 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend23104, (Optr)&t_method_return);
    Method PMethod23101 = new_Method_with(PArray23102, empty_Array, empty_Array, PThreadedCode23103, 1, PSend23104);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod23101, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray23106 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23110 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode23109 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend23110, (Optr)&t_block_return);
    Block PBlock23108 = new_Block_with(empty_Array, empty_Array, PThreadedCode23109, 1, PSend23110);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23111 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23108);
    Array PThreadedCode23107 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23108, (Optr)&t_send1, (Optr)PSend23111, (Optr)&t_method_return);
    Method PMethod23105 = new_Method_with(PArray23106, empty_Array, empty_Array, PThreadedCode23107, 1, PSend23111);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod23105, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode23113 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod23112 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23113, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod23112, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray23115 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray23116 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_23124 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23124_Const = new_Constant((Optr)string_23124);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23125 = new_String(L"<h1>Internal Server Error: ");
    Constant string_23125_Const = new_Constant((Optr)string_23125);
    // ,. 
    Send PSend23123 = new_Send((Optr)string_23124_Const, SMB__append_, 1, (Optr)string_23125_Const);
    // ,. 
    Send PSend23122 = new_Send((Optr)PSend23123, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_23126 = new_String(L"</h1><pre>");
    Constant string_23126_Const = new_Constant((Optr)string_23126);
    // ,. 
    Send PSend23121 = new_Send((Optr)PSend23122, SMB__append_, 1, (Optr)string_23126_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23128 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23129 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23127 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23128, (Optr)PSend23129);
    // ,. 
    Send PSend23120 = new_Send((Optr)PSend23121, SMB__append_, 1, (Optr)PSend23127);
    String string_23130 = new_String(L"</pre></body></html>");
    Constant string_23130_Const = new_Constant((Optr)string_23130);
    // ,. 
    Send PSend23119 = new_Send((Optr)PSend23120, SMB__append_, 1, (Optr)string_23130_Const);
    Assign PAssign23118 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend23119);
    SmallInt int_500 = new_SmallInt(500);
    String string_23131 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23131_Const = new_Constant((Optr)string_23131);
    // sendResponseCode:content:type:close:. 
    Send PSend23132 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_23131_Const, (Optr)true_Const);
    Array PThreadedCode23117 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign23118, (Optr)&t_push1, (Optr)string_23124, (Optr)&t_push1, (Optr)string_23125, (Optr)&t_send1, (Optr)PSend23123, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend23122, (Optr)&t_push1, (Optr)string_23126, (Optr)&t_send1, (Optr)PSend23121, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23128, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23129, (Optr)&t_send2, (Optr)PSend23127, (Optr)&t_send1, (Optr)PSend23120, (Optr)&t_push1, (Optr)string_23130, (Optr)&t_send1, (Optr)PSend23119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_23131, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23132, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23114 = new_Method_with(PArray23115, PArray23116, empty_Array, PThreadedCode23117, 3, PAssign23118, PSend23132, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod23114, WebClient_Core_WebServer_Class);
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
    Send PSend23139 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend23138 = new_Send((Optr)PSend23139, SMB_serverString, 0);
    Assign PAssign23137 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend23138);
    Array PThreadedCode23136 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign23137, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23139, (Optr)&t_send0, (Optr)PSend23138, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23135 = new_Block_with(empty_Array, empty_Array, PThreadedCode23136, 1, PAssign23137);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23140 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock23135);
    Array PThreadedCode23134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock23135, (Optr)&t_send1, (Optr)PSend23140, (Optr)&t_method_return);
    Method PMethod23133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23134, 1, PSend23140);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23133, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23142 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend23146 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend23147 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend23146);
    Array PThreadedCode23145 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend23146, (Optr)&t_send1, (Optr)PSend23147, (Optr)&t_block_return);
    Block PBlock23144 = new_Block_with(empty_Array, empty_Array, PThreadedCode23145, 1, PSend23147);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23148 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock23144);
    Array PThreadedCode23143 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock23144, (Optr)&t_send1, (Optr)PSend23148, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23141 = new_Method_with(PArray23142, empty_Array, empty_Array, PThreadedCode23143, 2, PSend23148, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod23141, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23152 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend23154 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23155 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23153 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23154, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23155, (Optr)&t_method_return);
    Block PBlock23151 = new_Block_with(PArray23152, empty_Array, PThreadedCode23153, 2, PSend23154, PSend23155);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23156 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23157 = new_Send((Optr)PBlock23151, SMB_value_, 1, (Optr)PSend23156);
    Array PThreadedCode23150 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23151, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend23156, (Optr)&t_send1, (Optr)PSend23157, (Optr)&t_method_return);
    Method PMethod23149 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23150, 1, PSend23157);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod23149, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray23159 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign23161 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode23160 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23161, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23158 = new_Method_with(PArray23159, empty_Array, empty_Array, PThreadedCode23160, 2, PAssign23161, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod23158, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode23163 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod23162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23163, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod23162, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode23165 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod23164 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23165, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod23164, WebClient_Core_WebServer_Class);
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
    Send PSend23168 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend23169 = new_Send((Optr)PSend23168, SMB_serverDate, 0);
    Array PThreadedCode23167 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23168, (Optr)&t_send0, (Optr)PSend23169, (Optr)&t_method_return);
    Method PMethod23166 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23167, 1, PSend23169);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23166, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray23171 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend23173 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend23174 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend23173);
    Array PThreadedCode23172 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23173, (Optr)&t_send2, (Optr)PSend23174, (Optr)&t_method_return);
    Method PMethod23170 = new_Method_with(PArray23171, empty_Array, empty_Array, PThreadedCode23172, 1, PSend23174);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod23170, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray23176 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend23178 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend23179 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend23178);
    Array PThreadedCode23177 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend23178, (Optr)&t_send1, (Optr)PSend23179, (Optr)&t_method_return);
    Method PMethod23175 = new_Method_with(PArray23176, empty_Array, empty_Array, PThreadedCode23177, 1, PSend23179);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod23175, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray23181 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23184 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_23186 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23186_Const = new_Constant((Optr)string_23186);
    // nextPutAll:. 
    Send PSend23187 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_23186_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23188 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode23185 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_23186, (Optr)&t_send1, (Optr)PSend23187, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23188, (Optr)&t_method_return);
    Block PBlock23183 = new_Block_with(PArray23184, empty_Array, PThreadedCode23185, 2, PSend23187, PSend23188);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23189 = new_Send((Optr)PBlock23183, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode23182 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23183, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend23189, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23180 = new_Method_with(PArray23181, empty_Array, empty_Array, PThreadedCode23182, 2, PSend23189, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod23180, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray23191 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign23193 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode23192 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23193, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23190 = new_Method_with(PArray23191, empty_Array, empty_Array, PThreadedCode23192, 2, PAssign23193, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod23190, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23195 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode23200 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23199 = new_Block_with(empty_Array, empty_Array, PThreadedCode23200, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend23201 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23199);
    Array PThreadedCode23198 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23199, (Optr)&t_send2, (Optr)PSend23201, (Optr)&t_block_return);
    Block PBlock23197 = new_Block_with(empty_Array, empty_Array, PThreadedCode23198, 1, PSend23201);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23202 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23197);
    Array PThreadedCode23196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23197, (Optr)&t_send1, (Optr)PSend23202, (Optr)&t_method_return);
    Method PMethod23194 = new_Method_with(PArray23195, empty_Array, empty_Array, PThreadedCode23196, 1, PSend23202);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod23194, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23204 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23206 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode23205 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23206, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23203 = new_Method_with(PArray23204, empty_Array, empty_Array, PThreadedCode23205, 2, PAssign23206, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod23203, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray23208 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23212 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend23213 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23214 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend23212, (Optr)PSend23213);
    Array PThreadedCode23211 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend23212, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend23213, (Optr)&t_send2, (Optr)PSend23214, (Optr)&t_block_return);
    Block PBlock23210 = new_Block_with(empty_Array, empty_Array, PThreadedCode23211, 1, PSend23214);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23215 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23210);
    Array PThreadedCode23209 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23210, (Optr)&t_send1, (Optr)PSend23215, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23207 = new_Method_with(PArray23208, empty_Array, empty_Array, PThreadedCode23209, 2, PSend23215, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod23207, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray23217 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23221 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode23223 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23222 = new_Block_with(empty_Array, empty_Array, PThreadedCode23223, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend23224 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend23221, (Optr)PBlock23222);
    Array PThreadedCode23220 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend23221, (Optr)&t_push_closure, (Optr)PBlock23222, (Optr)&t_send2, (Optr)PSend23224, (Optr)&t_block_return);
    Block PBlock23219 = new_Block_with(empty_Array, empty_Array, PThreadedCode23220, 1, PSend23224);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23225 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23219);
    Array PThreadedCode23218 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23219, (Optr)&t_send1, (Optr)PSend23225, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23216 = new_Method_with(PArray23217, empty_Array, empty_Array, PThreadedCode23218, 2, PSend23225, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod23216, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_23228 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode23227 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23228, (Optr)&t_method_return);
    Constant string_23228_Const = new_Constant((Optr)string_23228);
    Method PMethod23226 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23227, 1, string_23228_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod23226, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23233 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign23234 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode23232 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend23233, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23234, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23231 = new_Block_with(empty_Array, empty_Array, PThreadedCode23232, 2, PSend23233, PAssign23234);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23235 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock23231);
    Array PThreadedCode23230 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23231, (Optr)&t_send1, (Optr)PSend23235, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23229 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23230, 2, PSend23235, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod23229, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray23237 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23240 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend23244 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend23243 = new_Send((Optr)PSend23244, SMB_asUTC, 0);
    Assign PAssign23242 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend23243);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend23245 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_23246 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23246_Const = new_Constant((Optr)string_23246);
    // ,. 
    Send PSend23247 = new_Send((Optr)PSend23245, SMB__append_, 1, (Optr)string_23246_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23248 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend23247);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend23249 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23251 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend23253 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend23254 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend23255 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend23256 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend23257 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend23258 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend23259 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23260 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode23252 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23253, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23254, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend23255, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend23256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23257, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23258, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23259, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23260, (Optr)&t_method_return);
    Block PBlock23250 = new_Block_with(PArray23251, empty_Array, PThreadedCode23252, 8, PSend23253, PSend23254, PSend23255, PSend23256, PSend23257, PSend23258, PSend23259, PSend23260);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23261 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23262 = new_Send((Optr)PBlock23250, SMB_value_, 1, (Optr)PSend23261);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23263 = new_Send((Optr)PSend23262, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend23264 = new_Send((Optr)PSend23249, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend23263);
    Array PArray23266 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23268 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend23269 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend23270 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend23269);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend23271 = new_Send((Optr)PSend23270, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend23272 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23271);
    Array PThreadedCode23267 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23269, (Optr)&t_send1, (Optr)PSend23270, (Optr)&t_send0, (Optr)PSend23271, (Optr)&t_send1, (Optr)PSend23272, (Optr)&t_method_return);
    Block PBlock23265 = new_Block_with(PArray23266, empty_Array, PThreadedCode23267, 2, PSend23268, PSend23272);
    // value:. 
    Send PSend23273 = new_Send((Optr)PBlock23265, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_23274 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_23274_Const = new_Constant((Optr)string_23274);
    // writeAll:. 
    Send PSend23275 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_23274_Const);
    Array PThreadedCode23241 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23242, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend23244, (Optr)&t_send0, (Optr)PSend23243, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23245, (Optr)&t_push1, (Optr)string_23246, (Optr)&t_send1, (Optr)PSend23247, (Optr)&t_send1, (Optr)PSend23248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23249, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock23250, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23261, (Optr)&t_send1, (Optr)PSend23262, (Optr)&t_send0, (Optr)PSend23263, (Optr)&t_send2, (Optr)PSend23264, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23265, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23273, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_23274, (Optr)&t_send1, (Optr)PSend23275, (Optr)&t_method_return);
    Block PBlock23239 = new_Block_with(PArray23240, empty_Array, PThreadedCode23241, 5, PAssign23242, PSend23248, PSend23264, PSend23273, PSend23275);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23276 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23239);
    Array PThreadedCode23238 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23239, (Optr)&t_send1, (Optr)PSend23276, (Optr)&t_method_return);
    Method PMethod23236 = new_Method_with(empty_Array, PArray23237, empty_Array, PThreadedCode23238, 1, PSend23276);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23236, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_23279 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode23278 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23279, (Optr)&t_method_return);
    Constant string_23279_Const = new_Constant((Optr)string_23279);
    Method PMethod23277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23278, 1, string_23279_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod23277, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_23282 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode23281 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23282, (Optr)&t_method_return);
    Constant string_23282_Const = new_Constant((Optr)string_23282);
    Method PMethod23280 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23281, 1, string_23282_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23280, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23288 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign23287 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend23288);
    Array PThreadedCode23286 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23287, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23288, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23285 = new_Block_with(empty_Array, empty_Array, PThreadedCode23286, 1, PAssign23287);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23289 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock23285);
    Array PThreadedCode23284 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23285, (Optr)&t_send1, (Optr)PSend23289, (Optr)&t_method_return);
    Method PMethod23283 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23284, 1, PSend23289);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod23283, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray23291 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23294 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign23293 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend23294);
    // new. 
    Send PSend23296 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23295 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend23296);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend23297 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend23298 = new_Send((Optr)PSend23297, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend23299 = new_Send((Optr)PSend23298, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend23300 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_23301 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray23303 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend23305 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_23306 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23306_Const = new_Constant((Optr)string_23306);
    // send200Response:contentType:. 
    Send PSend23307 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend23305, (Optr)string_23306_Const);
    Array PThreadedCode23304 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23305, (Optr)&t_push1, (Optr)string_23306, (Optr)&t_send2, (Optr)PSend23307, (Optr)&t_method_return);
    Block PBlock23302 = new_Block_with(PArray23303, empty_Array, PThreadedCode23304, 1, PSend23307);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_23301_Const = new_Constant((Optr)string_23301);
    // addService:action:. 
    Send PSend23308 = new_Send((Optr)PSend23300, SMB_addService_action_, 2, (Optr)string_23301_Const, (Optr)PBlock23302);
    Array PThreadedCode23292 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23293, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend23294, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23295, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23296, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23297, (Optr)&t_send0, (Optr)PSend23298, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend23299, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23300, (Optr)&t_push1, (Optr)string_23301, (Optr)&t_push_closure, (Optr)PBlock23302, (Optr)&t_send2, (Optr)PSend23308, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23290 = new_Method_with(empty_Array, PArray23291, empty_Array, PThreadedCode23292, 5, PAssign23293, PAssign23295, PSend23299, PSend23308, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod23290, HEADER(WebClient_Core_WebServer_Class));
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