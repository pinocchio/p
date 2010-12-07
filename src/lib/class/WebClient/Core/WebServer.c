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
    Array PArray22641 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22642 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22652 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22651 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22652, (Optr)&t_block_return);
    Block PBlock22650 = new_Block_with(empty_Array, empty_Array, PThreadedCode22651, 1, PSend22652);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22654 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22656 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22655 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22656, (Optr)&t_method_return);
    Block PBlock22653 = new_Block_with(PArray22654, empty_Array, PThreadedCode22655, 1, PSend22656);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22657 = new_Send((Optr)PBlock22650, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22653);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22660 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22662 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22661 = new_Block_with(empty_Array, empty_Array, PThreadedCode22662, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22663 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22660, (Optr)PBlock22661);
    Array PThreadedCode22659 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22660, (Optr)&t_push_closure, (Optr)PBlock22661, (Optr)&t_send2, (Optr)PSend22663, (Optr)&t_block_return);
    Block PBlock22658 = new_Block_with(empty_Array, empty_Array, PThreadedCode22659, 1, PSend22663);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22664 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22658);
    Array PThreadedCode22649 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22650, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22653, (Optr)&t_send2, (Optr)PSend22657, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22658, (Optr)&t_send1, (Optr)PSend22664, (Optr)&t_block_return);
    Block PBlock22648 = new_Block_with(empty_Array, empty_Array, PThreadedCode22649, 2, PSend22657, PSend22664);
    // destroy. 
    Send PSend22667 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22666 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22667, (Optr)&t_block_return);
    Block PBlock22665 = new_Block_with(empty_Array, empty_Array, PThreadedCode22666, 1, PSend22667);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22668 = new_Send((Optr)PBlock22648, SMB_ensure_, 1, (Optr)PBlock22665);
    Array PThreadedCode22647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22648, (Optr)&t_push_closure, (Optr)PBlock22665, (Optr)&t_send1, (Optr)PSend22668, (Optr)&t_block_return);
    Block PBlock22646 = new_Block_with(empty_Array, empty_Array, PThreadedCode22647, 1, PSend22668);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22645 = new_Send((Optr)PBlock22646, SMB_fork, 0);
    Assign PAssign22644 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22645);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22671 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22670 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22671, (Optr)&t_block_return);
    Block PBlock22669 = new_Block_with(empty_Array, empty_Array, PThreadedCode22670, 1, PSend22671);
    // critical:. 
    Send PSend22672 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22669);
    Array PThreadedCode22643 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22644, (Optr)&t_push_closure, (Optr)PBlock22646, (Optr)&t_send0, (Optr)PSend22645, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22669, (Optr)&t_send1, (Optr)PSend22672, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22640 = new_Method_with(PArray22641, PArray22642, empty_Array, PThreadedCode22643, 3, PAssign22644, PSend22672, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22640, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22674 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22679 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22678 = new_Block_with(empty_Array, empty_Array, PThreadedCode22679, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22680 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22678);
    Array PThreadedCode22677 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22678, (Optr)&t_send2, (Optr)PSend22680, (Optr)&t_block_return);
    Block PBlock22676 = new_Block_with(empty_Array, empty_Array, PThreadedCode22677, 1, PSend22680);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22681 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22676);
    Array PThreadedCode22675 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22676, (Optr)&t_send1, (Optr)PSend22681, (Optr)&t_method_return);
    Method PMethod22673 = new_Method_with(PArray22674, empty_Array, empty_Array, PThreadedCode22675, 1, PSend22681);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22673, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22683 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22683, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22682, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22686 = new_String(L"HEAD");
    String string_22687 = new_String(L"TRACE");
    String string_22688 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22686_Const = new_Constant((Optr)string_22686);
    Constant string_22687_Const = new_Constant((Optr)string_22687);
    Constant string_22688_Const = new_Constant((Optr)string_22688);
    // with:with:with:. 
    Send PSend22689 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22686_Const, (Optr)string_22687_Const, (Optr)string_22688_Const);
    Array PThreadedCode22685 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22686, (Optr)&t_push1, (Optr)string_22687, (Optr)&t_push1, (Optr)string_22688, (Optr)&t_send3, (Optr)PSend22689, (Optr)&t_method_return);
    Method PMethod22684 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22685, 1, PSend22689);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22684, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22691 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22694 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22698 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22697 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22698, (Optr)&t_block_return);
    Block PBlock22696 = new_Block_with(empty_Array, empty_Array, PThreadedCode22697, 1, PSend22698);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22699 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22696);
    Array PThreadedCode22695 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22696, (Optr)&t_send1, (Optr)PSend22699, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22693 = new_Block_with(PArray22694, empty_Array, PThreadedCode22695, 2, PSend22699, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22700 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22693);
    Array PThreadedCode22692 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22693, (Optr)&t_send1, (Optr)PSend22700, (Optr)&t_method_return);
    Method PMethod22690 = new_Method_with(PArray22691, empty_Array, empty_Array, PThreadedCode22692, 1, PSend22700);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22690, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22702 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22704 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22703 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22704, (Optr)&t_method_return);
    Method PMethod22701 = new_Method_with(PArray22702, empty_Array, empty_Array, PThreadedCode22703, 1, PSend22704);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22701, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22706 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22706, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22705, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22708 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22709 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22713 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22713_Const = new_Constant((Optr)string_22713);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22714 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22714_Const = new_Constant((Optr)string_22714);
    // ,. 
    Send PSend22712 = new_Send((Optr)string_22713_Const, SMB__append_, 1, (Optr)string_22714_Const);
    Assign PAssign22711 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22712);
    String string_22717 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22718 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22717_Const = new_Constant((Optr)string_22717);
    // ,. 
    Send PSend22719 = new_Send((Optr)string_22717_Const, SMB__append_, 1, (Optr)PSend22718);
    String string_22720 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22720_Const = new_Constant((Optr)string_22720);
    // ,. 
    Send PSend22721 = new_Send((Optr)PSend22719, SMB__append_, 1, (Optr)string_22720_Const);
    // crlf. 
    Send PSend22722 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22723 = new_Send((Optr)PSend22721, SMB__append_, 1, (Optr)PSend22722);
    String string_22724 = new_String(L"Connection: close");
    Constant string_22724_Const = new_Constant((Optr)string_22724);
    // ,. 
    Send PSend22725 = new_Send((Optr)PSend22723, SMB__append_, 1, (Optr)string_22724_Const);
    // crlf. 
    Send PSend22726 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22727 = new_Send((Optr)PSend22725, SMB__append_, 1, (Optr)PSend22726);
    String string_22728 = new_String(L"Content-Length: ");
    Constant string_22728_Const = new_Constant((Optr)string_22728);
    // ,. 
    Send PSend22729 = new_Send((Optr)PSend22727, SMB__append_, 1, (Optr)string_22728_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22730 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22731 = new_Send((Optr)PSend22730, SMB_asString, 0);
    // ,. 
    Send PSend22732 = new_Send((Optr)PSend22729, SMB__append_, 1, (Optr)PSend22731);
    // crlf. 
    Send PSend22733 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22734 = new_Send((Optr)PSend22732, SMB__append_, 1, (Optr)PSend22733);
    // crlf. 
    Send PSend22735 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22736 = new_Send((Optr)PSend22734, SMB__append_, 1, (Optr)PSend22735);
    // ,. 
    Send PSend22737 = new_Send((Optr)PSend22736, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22738 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22737);
    Array PThreadedCode22716 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22717, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22718, (Optr)&t_send1, (Optr)PSend22719, (Optr)&t_push1, (Optr)string_22720, (Optr)&t_send1, (Optr)PSend22721, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22722, (Optr)&t_send1, (Optr)PSend22723, (Optr)&t_push1, (Optr)string_22724, (Optr)&t_send1, (Optr)PSend22725, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22726, (Optr)&t_send1, (Optr)PSend22727, (Optr)&t_push1, (Optr)string_22728, (Optr)&t_send1, (Optr)PSend22729, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22730, (Optr)&t_send0, (Optr)PSend22731, (Optr)&t_send1, (Optr)PSend22732, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22733, (Optr)&t_send1, (Optr)PSend22734, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22735, (Optr)&t_send1, (Optr)PSend22736, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22737, (Optr)&t_send1, (Optr)PSend22738, (Optr)&t_block_return);
    Block PBlock22715 = new_Block_with(empty_Array, empty_Array, PThreadedCode22716, 1, PSend22738);
    Array PThreadedCode22740 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22739 = new_Block_with(empty_Array, empty_Array, PThreadedCode22740, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22741 = new_Send((Optr)PBlock22715, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22739);
    Array PThreadedCode22710 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22711, (Optr)&t_push1, (Optr)string_22713, (Optr)&t_push1, (Optr)string_22714, (Optr)&t_send1, (Optr)PSend22712, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22715, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22739, (Optr)&t_send2, (Optr)PSend22741, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22707 = new_Method_with(PArray22708, PArray22709, empty_Array, PThreadedCode22710, 3, PAssign22711, PSend22741, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22707, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22743 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22745 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22744 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22745, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22742 = new_Method_with(PArray22743, empty_Array, empty_Array, PThreadedCode22744, 1, PAssign22745);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22742, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22747 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22746 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22747, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22746, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22750 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22755 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22754 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22755, (Optr)&t_block_return);
    Block PBlock22753 = new_Block_with(empty_Array, empty_Array, PThreadedCode22754, 1, PSend22755);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22752 = new_Send((Optr)PBlock22753, SMB_fork, 0);
    Assign PAssign22751 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22752);
    Array PThreadedCode22749 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22750, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22751, (Optr)&t_push_closure, (Optr)PBlock22753, (Optr)&t_send0, (Optr)PSend22752, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22748 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22749, 3, PSend22750, PAssign22751, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22748, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22759 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22758 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22759);
    // new. 
    Send PSend22761 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22760 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22761);
    // new. 
    Send PSend22763 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22762 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22763);
    // new. 
    Send PSend22765 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22764 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22765);
    // new. 
    Send PSend22767 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22766 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22767);
    // new. 
    Send PSend22769 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22768 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22769);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22771 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22774 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22776 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22777 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22775 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22776, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22777, (Optr)&t_method_return);
    Block PBlock22773 = new_Block_with(PArray22774, empty_Array, PThreadedCode22775, 2, PSend22776, PSend22777);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22778 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22779 = new_Send((Optr)PBlock22773, SMB_value_, 1, (Optr)PSend22778);
    Array PThreadedCode22772 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22773, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22778, (Optr)&t_send1, (Optr)PSend22779, (Optr)&t_method_return);
    Block PBlock22770 = new_Block_with(PArray22771, empty_Array, PThreadedCode22772, 1, PSend22779);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22780 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22770);
    Array PThreadedCode22757 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22758, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22759, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22760, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22761, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22762, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22763, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22764, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22765, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22766, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22767, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22768, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22769, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22770, (Optr)&t_send1, (Optr)PSend22780, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22757, 8, PAssign22758, PAssign22760, PAssign22762, PAssign22764, PAssign22766, PAssign22768, PSend22780, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22756, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22782 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22784 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22783 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22784, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22781 = new_Method_with(PArray22782, empty_Array, empty_Array, PThreadedCode22783, 2, PAssign22784, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22781, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22786 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22787 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22790 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22797 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22796 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22797);
    Array PThreadedCode22795 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22796, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22797, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22794 = new_Block_with(empty_Array, empty_Array, PThreadedCode22795, 1, PAssign22796);
    String string_22800 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22800_Const = new_Constant((Optr)string_22800);
    // error:. 
    Send PSend22801 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22800_Const);
    Array PThreadedCode22799 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22800, (Optr)&t_send1, (Optr)PSend22801, (Optr)&t_block_return);
    Block PBlock22798 = new_Block_with(empty_Array, empty_Array, PThreadedCode22799, 1, PSend22801);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22802 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22794, (Optr)PBlock22798);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22805 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22804 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22805, (Optr)&t_block_return);
    Block PBlock22803 = new_Block_with(empty_Array, empty_Array, PThreadedCode22804, 1, PSend22805);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22808 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22811 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22812 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22811);
    Array PThreadedCode22810 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22811, (Optr)&t_send1, (Optr)PSend22812, (Optr)&t_block_return);
    Block PBlock22809 = new_Block_with(empty_Array, empty_Array, PThreadedCode22810, 1, PSend22812);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22813 = new_Send((Optr)PSend22808, SMB_ifNil_, 1, (Optr)PBlock22809);
    String string_22814 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22814_Const = new_Constant((Optr)string_22814);
    // warn:. 
    Send PSend22815 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22814_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22817 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22816 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22817);
    String string_22818 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22818_Const = new_Constant((Optr)string_22818);
    // warn:. 
    Send PSend22819 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22818_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22822 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22821 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22822, (Optr)&t_block_return);
    Block PBlock22820 = new_Block_with(empty_Array, empty_Array, PThreadedCode22821, 1, PSend22822);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22824 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22826 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22827 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22826);
    Array PThreadedCode22825 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22826, (Optr)&t_send1, (Optr)PSend22827, (Optr)&t_method_return);
    Block PBlock22823 = new_Block_with(PArray22824, empty_Array, PThreadedCode22825, 1, PSend22827);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22828 = new_Send((Optr)PBlock22820, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22823);
    String string_22829 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22829_Const = new_Constant((Optr)string_22829);
    // warn:. 
    Send PSend22830 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22829_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22831 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22807 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22808, (Optr)&t_push_closure, (Optr)PBlock22809, (Optr)&t_send1, (Optr)PSend22813, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22814, (Optr)&t_send1, (Optr)PSend22815, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22816, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22817, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22818, (Optr)&t_send1, (Optr)PSend22819, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22820, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22823, (Optr)&t_send2, (Optr)PSend22828, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22829, (Optr)&t_send1, (Optr)PSend22830, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22831, (Optr)&t_block_return);
    Block PBlock22806 = new_Block_with(empty_Array, empty_Array, PThreadedCode22807, 7, PSend22813, PSend22815, PAssign22816, PSend22819, PSend22828, PSend22830, PSend22831);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22832 = new_Send((Optr)PBlock22803, SMB_whileTrue_, 1, (Optr)PBlock22806);
    Array PThreadedCode22793 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22794, (Optr)&t_push_closure, (Optr)PBlock22798, (Optr)&t_send2, (Optr)PSend22802, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22803, (Optr)&t_push_closure, (Optr)PBlock22806, (Optr)&t_send1, (Optr)PSend22832, (Optr)&t_block_return);
    Block PBlock22792 = new_Block_with(empty_Array, empty_Array, PThreadedCode22793, 2, PSend22802, PSend22832);
    Array PArray22834 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22836 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22835 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22836, (Optr)&t_method_return);
    Block PBlock22833 = new_Block_with(PArray22834, empty_Array, PThreadedCode22835, 1, PSend22836);
    // on:do:. 
    Send PSend22837 = new_Send((Optr)PBlock22792, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22833);
    Array PThreadedCode22791 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22792, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22833, (Optr)&t_send2, (Optr)PSend22837, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22789 = new_Block_with(PArray22790, empty_Array, PThreadedCode22791, 2, PSend22837, self);
    // on:. 
    Send PSend22838 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22789);
    Array PThreadedCode22788 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22789, (Optr)&t_send1, (Optr)PSend22838, (Optr)&t_method_return);
    Method PMethod22785 = new_Method_with(PArray22786, PArray22787, empty_Array, PThreadedCode22788, 1, PSend22838);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22785, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22840 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22840, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22839, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22842 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22842, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22841, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22844 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22846 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22845 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22846, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22843 = new_Method_with(PArray22844, empty_Array, empty_Array, PThreadedCode22845, 2, PAssign22846, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22843, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22849 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22848 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22849, (Optr)&t_method_return);
    Method PMethod22847 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22848, 1, PSend22849);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22847, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22851 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22854 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22862 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22865 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22864 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22865, (Optr)&t_block_return);
    Block PBlock22863 = new_Block_with(empty_Array, empty_Array, PThreadedCode22864, 1, PSend22865);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22866 = new_Send((Optr)PSend22862, SMB_and_, 1, (Optr)PBlock22863);
    Array PThreadedCode22861 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22862, (Optr)&t_push_closure, (Optr)PBlock22863, (Optr)&t_send1, (Optr)PSend22866, (Optr)&t_block_return);
    Block PBlock22860 = new_Block_with(empty_Array, empty_Array, PThreadedCode22861, 1, PSend22866);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22870 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22869 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22870);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22873 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22872 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22873, (Optr)&t_block_return);
    Block PBlock22871 = new_Block_with(empty_Array, empty_Array, PThreadedCode22872, 1, PSend22873);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22874 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22871);
    Array PThreadedCode22868 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22869, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22870, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22871, (Optr)&t_send1, (Optr)PSend22874, (Optr)&t_block_return);
    Block PBlock22867 = new_Block_with(empty_Array, empty_Array, PThreadedCode22868, 2, PAssign22869, PSend22874);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22875 = new_Send((Optr)PBlock22860, SMB_whileTrue_, 1, (Optr)PBlock22867);
    Array PThreadedCode22859 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22860, (Optr)&t_push_closure, (Optr)PBlock22867, (Optr)&t_send1, (Optr)PSend22875, (Optr)&t_block_return);
    Block PBlock22858 = new_Block_with(empty_Array, empty_Array, PThreadedCode22859, 1, PSend22875);
    String string_22878 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22880 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22882 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22881 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22882, (Optr)&t_method_return);
    Block PBlock22879 = new_Block_with(PArray22880, empty_Array, PThreadedCode22881, 1, PSend22882);
    // ifNotNil:. 
    Send PSend22883 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22879);
    Constant string_22878_Const = new_Constant((Optr)string_22878);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22884 = new_Send((Optr)string_22878_Const, SMB__append_, 1, (Optr)PSend22883);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22885 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22884);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22886 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22889 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22890 = new_Send((Optr)PSend22889, SMB_not, 0);
    Array PThreadedCode22888 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22889, (Optr)&t_send0, (Optr)PSend22890, (Optr)&t_block_return);
    Block PBlock22887 = new_Block_with(empty_Array, empty_Array, PThreadedCode22888, 1, PSend22890);
    // and:. 
    Send PSend22891 = new_Send((Optr)PSend22886, SMB_and_, 1, (Optr)PBlock22887);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22895 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22896 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22897 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22898 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22897);
    Array PThreadedCode22894 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22895, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22896, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22897, (Optr)&t_send1, (Optr)PSend22898, (Optr)&t_block_return);
    Block PBlock22893 = new_Block_with(empty_Array, empty_Array, PThreadedCode22894, 3, PSend22895, PAssign22896, PSend22898);
    // ifTrue:. 
    Send PSend22892 = new_Send((Optr)PSend22891, SMB_ifTrue_, 1, (Optr)PBlock22893);
    Array PThreadedCode22877 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22878, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22879, (Optr)&t_send1, (Optr)PSend22883, (Optr)&t_send1, (Optr)PSend22884, (Optr)&t_send1, (Optr)PSend22885, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22886, (Optr)&t_push_closure, (Optr)PBlock22887, (Optr)&t_send1, (Optr)PSend22891, (Optr)&t_send_ifTrue_, (Optr)PSend22892, (Optr)PBlock22893, (Optr)&t_block_return);
    Block PBlock22876 = new_Block_with(empty_Array, empty_Array, PThreadedCode22877, 2, PSend22885, PSend22892);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22899 = new_Send((Optr)PBlock22858, SMB_ensure_, 1, (Optr)PBlock22876);
    Array PThreadedCode22857 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22858, (Optr)&t_push_closure, (Optr)PBlock22876, (Optr)&t_send1, (Optr)PSend22899, (Optr)&t_block_return);
    Block PBlock22856 = new_Block_with(empty_Array, empty_Array, PThreadedCode22857, 1, PSend22899);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22901 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22903 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22902 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22903, (Optr)&t_method_return);
    Block PBlock22900 = new_Block_with(PArray22901, empty_Array, PThreadedCode22902, 1, PSend22903);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22904 = new_Send((Optr)PBlock22856, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22900);
    Array PThreadedCode22855 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22856, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22900, (Optr)&t_send2, (Optr)PSend22904, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22853 = new_Block_with(PArray22854, empty_Array, PThreadedCode22855, 2, PSend22904, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22905 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22853);
    Array PThreadedCode22852 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22853, (Optr)&t_send1, (Optr)PSend22905, (Optr)&t_method_return);
    Method PMethod22850 = new_Method_with(empty_Array, PArray22851, empty_Array, PThreadedCode22852, 1, PSend22905);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22850, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22908 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22909 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22912 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22911 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22912, (Optr)&t_block_return);
    Block PBlock22910 = new_Block_with(empty_Array, empty_Array, PThreadedCode22911, 1, PSend22912);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22913 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22910);
    Array PThreadedCode22907 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22908, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22909, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22910, (Optr)&t_send1, (Optr)PSend22913, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22906 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22907, 4, PSend22908, PSend22909, PSend22913, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22906, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22915 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22917 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22916 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22917, (Optr)&t_method_return);
    Method PMethod22914 = new_Method_with(PArray22915, empty_Array, empty_Array, PThreadedCode22916, 1, PSend22917);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22914, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray22923 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22925 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22924 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22925, (Optr)&t_method_return);
    Block PBlock22922 = new_Block_with(PArray22923, empty_Array, PThreadedCode22924, 1, PSend22925);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22926 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22922);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22927 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22921 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22922, (Optr)&t_send1, (Optr)PSend22926, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22927, (Optr)&t_block_return);
    Block PBlock22920 = new_Block_with(empty_Array, empty_Array, PThreadedCode22921, 2, PSend22926, PSend22927);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22928 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22920);
    Array PThreadedCode22919 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22920, (Optr)&t_send1, (Optr)PSend22928, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22918 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22919, 2, PSend22928, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22918, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_22931 = new_String(L"GET");
    String string_22932 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22931_Const = new_Constant((Optr)string_22931);
    Constant string_22932_Const = new_Constant((Optr)string_22932);
    // with:with:. 
    Send PSend22933 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22931_Const, (Optr)string_22932_Const);
    Array PThreadedCode22930 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22931, (Optr)&t_push1, (Optr)string_22932, (Optr)&t_send2, (Optr)PSend22933, (Optr)&t_method_return);
    Method PMethod22929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22930, 1, PSend22933);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22929, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode22935 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22934 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22935, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22934, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray22937 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22938 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22940 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22941 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22946 = new_String(L"*");
    Array PThreadedCode22945 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22946, (Optr)&t_block_return);
    Constant string_22946_Const = new_Constant((Optr)string_22946);
    Block PBlock22944 = new_Block_with(empty_Array, empty_Array, PThreadedCode22945, 1, string_22946_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22949 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22948 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22949, (Optr)&t_block_return);
    Block PBlock22947 = new_Block_with(empty_Array, empty_Array, PThreadedCode22948, 1, PSend22949);
    // ifNil:ifNotNil:. 
    Send PSend22943 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22944, (Optr)PBlock22947);
    Assign PAssign22942 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22943);
    String string_22950 = new_String(L"Listener starting (interface: ");
    Constant string_22950_Const = new_Constant((Optr)string_22950);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22951 = new_Send((Optr)string_22950_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22952 = new_String(L" port: ");
    Constant string_22952_Const = new_Constant((Optr)string_22952);
    // ,. 
    Send PSend22953 = new_Send((Optr)PSend22951, SMB__append_, 1, (Optr)string_22952_Const);
    // ,. 
    Send PSend22954 = new_Send((Optr)PSend22953, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22955 = new_String(L")");
    Constant string_22955_Const = new_Constant((Optr)string_22955);
    // ,. 
    Send PSend22956 = new_Send((Optr)PSend22954, SMB__append_, 1, (Optr)string_22955_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22957 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22956);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22959 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22958 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22959);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22962 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22961 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22962, (Optr)&t_block_return);
    Block PBlock22960 = new_Block_with(empty_Array, empty_Array, PThreadedCode22961, 1, PSend22962);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22965 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22964 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22965, (Optr)&t_block_return);
    Block PBlock22963 = new_Block_with(empty_Array, empty_Array, PThreadedCode22964, 1, PSend22965);
    // ifNil:ifNotNil:. 
    Send PSend22966 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22960, (Optr)PBlock22963);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22967 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22939 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22940, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22941, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22942, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22944, (Optr)&t_push_closure, (Optr)PBlock22947, (Optr)&t_send2, (Optr)PSend22943, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22950, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22951, (Optr)&t_push1, (Optr)string_22952, (Optr)&t_send1, (Optr)PSend22953, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22954, (Optr)&t_push1, (Optr)string_22955, (Optr)&t_send1, (Optr)PSend22956, (Optr)&t_send1, (Optr)PSend22957, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22958, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22959, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22960, (Optr)&t_push_closure, (Optr)PBlock22963, (Optr)&t_send2, (Optr)PSend22966, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22967, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22936 = new_Method_with(PArray22937, PArray22938, empty_Array, PThreadedCode22939, 8, PAssign22940, PAssign22941, PAssign22942, PSend22957, PAssign22958, PSend22966, PSend22967, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22936, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode22969 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22968 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22969, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22968, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22971 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22973 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22974 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22973);
    Array PThreadedCode22972 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22973, (Optr)&t_send3, (Optr)PSend22974, (Optr)&t_method_return);
    Method PMethod22970 = new_Method_with(PArray22971, empty_Array, empty_Array, PThreadedCode22972, 1, PSend22974);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22970, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22979 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22978 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22979, (Optr)&t_block_return);
    Block PBlock22977 = new_Block_with(empty_Array, empty_Array, PThreadedCode22978, 1, PSend22979);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22980 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22977);
    Assign PAssign22981 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22976 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22977, (Optr)&t_send1, (Optr)PSend22980, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22981, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22976, 3, PSend22980, PAssign22981, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22975, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray22983 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22985 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22984 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22985, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22982 = new_Method_with(PArray22983, empty_Array, empty_Array, PThreadedCode22984, 2, PAssign22985, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22982, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend22988 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22989 = new_Send((Optr)PSend22988, SMB_not, 0);
    Array PThreadedCode22987 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22988, (Optr)&t_send0, (Optr)PSend22989, (Optr)&t_method_return);
    Method PMethod22986 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22987, 1, PSend22989);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22986, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode22991 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22990 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22991, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22990, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray22993 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22994 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22997 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22999 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23000 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23000_Const = new_Constant((Optr)string_23000);
    // =. 
    Send PSend23001 = new_Send((Optr)PSend22999, SMB__equals_, 1, (Optr)string_23000_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23005 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_23006 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23006_Const = new_Constant((Optr)string_23006);
    // send200Response:contentType:. 
    Send PSend23007 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend23005, (Optr)string_23006_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23008 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23007);
    Array PThreadedCode23004 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23005, (Optr)&t_push1, (Optr)string_23006, (Optr)&t_send2, (Optr)PSend23007, (Optr)&t_send1, (Optr)PSend23008, (Optr)&t_block_return);
    Block PBlock23003 = new_Block_with(empty_Array, empty_Array, PThreadedCode23004, 1, PSend23008);
    // ifTrue:. 
    Send PSend23002 = new_Send((Optr)PSend23001, SMB_ifTrue_, 1, (Optr)PBlock23003);
    Assign PAssign23009 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23011 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign23010 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23011);
    String string_23012 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23012_Const = new_Constant((Optr)string_23012);
    // beginsWith:. 
    Send PSend23013 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_23012_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23019 = new_String(L"/");
    Constant string_23019_Const = new_Constant((Optr)string_23019);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23018 = new_Send((Optr)string_23019_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign23017 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23018);
    Array PThreadedCode23016 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign23017, (Optr)&t_push1, (Optr)string_23019, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend23018, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23015 = new_Block_with(empty_Array, empty_Array, PThreadedCode23016, 1, PAssign23017);
    // ifFalse:. 
    Send PSend23014 = new_Send((Optr)PSend23013, SMB_ifFalse_, 1, (Optr)PBlock23015);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend23024 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23027 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode23026 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23027, (Optr)&t_block_return);
    Block PBlock23025 = new_Block_with(empty_Array, empty_Array, PThreadedCode23026, 1, PSend23027);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23028 = new_Send((Optr)PSend23024, SMB_and_, 1, (Optr)PBlock23025);
    Array PThreadedCode23023 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend23024, (Optr)&t_push_closure, (Optr)PBlock23025, (Optr)&t_send1, (Optr)PSend23028, (Optr)&t_block_return);
    Block PBlock23022 = new_Block_with(empty_Array, empty_Array, PThreadedCode23023, 1, PSend23028);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode23034 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23033 = new_Block_with(empty_Array, empty_Array, PThreadedCode23034, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend23032 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock23033);
    Assign PAssign23031 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend23032);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_23037 = new_Character(L'/');
    Constant char_23037_Const = new_Constant((Optr)char_23037);
    // copyUpToLast:. 
    Send PSend23036 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_23037_Const);
    Assign PAssign23035 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23036);
    Array PThreadedCode23030 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23031, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock23033, (Optr)&t_send2, (Optr)PSend23032, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23035, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_23037, (Optr)&t_send1, (Optr)PSend23036, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23029 = new_Block_with(empty_Array, empty_Array, PThreadedCode23030, 2, PAssign23031, PAssign23035);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23038 = new_Send((Optr)PBlock23022, SMB_whileTrue_, 1, (Optr)PBlock23029);
    String string_23043 = new_String(L"/");
    Constant string_23043_Const = new_Constant((Optr)string_23043);
    Array PThreadedCode23045 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23044 = new_Block_with(empty_Array, empty_Array, PThreadedCode23045, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend23042 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_23043_Const, (Optr)PBlock23044);
    Assign PAssign23041 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend23042);
    Array PThreadedCode23040 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23041, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_23043, (Optr)&t_push_closure, (Optr)PBlock23044, (Optr)&t_send2, (Optr)PSend23042, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23039 = new_Block_with(empty_Array, empty_Array, PThreadedCode23040, 1, PAssign23041);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23046 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock23039);
    Array PThreadedCode23021 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock23022, (Optr)&t_push_closure, (Optr)PBlock23029, (Optr)&t_send1, (Optr)PSend23038, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23039, (Optr)&t_send1, (Optr)PSend23046, (Optr)&t_block_return);
    Block PBlock23020 = new_Block_with(empty_Array, empty_Array, PThreadedCode23021, 2, PSend23038, PSend23046);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23047 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23020);
    // method. 
    Send PSend23048 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23049 = new_String(L"OPTIONS");
    Constant string_23049_Const = new_Constant((Optr)string_23049);
    // =. 
    Send PSend23050 = new_Send((Optr)PSend23048, SMB__equals_, 1, (Optr)string_23049_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend23054 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend23057 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode23056 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23057, (Optr)&t_block_return);
    Block PBlock23055 = new_Block_with(empty_Array, empty_Array, PThreadedCode23056, 1, PSend23057);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23060 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode23059 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend23060, (Optr)&t_block_return);
    Block PBlock23058 = new_Block_with(empty_Array, empty_Array, PThreadedCode23059, 1, PSend23060);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23061 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23055, (Optr)PBlock23058);
    // ,. 
    Send PSend23062 = new_Send((Optr)PSend23054, SMB__append_, 1, (Optr)PSend23061);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend23063 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend23062);
    Array PThreadedCode23053 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23054, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23055, (Optr)&t_push_closure, (Optr)PBlock23058, (Optr)&t_send2, (Optr)PSend23061, (Optr)&t_send1, (Optr)PSend23062, (Optr)&t_send1, (Optr)PSend23063, (Optr)&t_block_return);
    Block PBlock23052 = new_Block_with(empty_Array, empty_Array, PThreadedCode23053, 1, PSend23063);
    // ifTrue:. 
    Send PSend23051 = new_Send((Optr)PSend23050, SMB_ifTrue_, 1, (Optr)PBlock23052);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend23066 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend23067 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23066);
    Array PThreadedCode23065 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23066, (Optr)&t_send1, (Optr)PSend23067, (Optr)&t_block_return);
    Block PBlock23064 = new_Block_with(empty_Array, empty_Array, PThreadedCode23065, 1, PSend23067);
    // ifNil:. 
    Send PSend23068 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock23064);
    // method. 
    Send PSend23069 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23070 = new_String(L"HEAD");
    Constant string_23070_Const = new_Constant((Optr)string_23070);
    // =. 
    Send PSend23071 = new_Send((Optr)PSend23069, SMB__equals_, 1, (Optr)string_23070_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend23074 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend23075 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend23076 = new_Send((Optr)PSend23074, SMB_includes_, 1, (Optr)PSend23075);
    Array PThreadedCode23073 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23074, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23075, (Optr)&t_send1, (Optr)PSend23076, (Optr)&t_block_return);
    Block PBlock23072 = new_Block_with(empty_Array, empty_Array, PThreadedCode23073, 1, PSend23076);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23077 = new_Send((Optr)PSend23071, SMB_or_, 1, (Optr)PBlock23072);
    // builtinHttpMethods. 
    Send PSend23081 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend23082 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend23083 = new_Send((Optr)PSend23081, SMB__append_, 1, (Optr)PSend23082);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend23084 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend23083);
    // escape:. 
    Send PSend23085 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23084);
    Array PThreadedCode23080 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23081, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend23082, (Optr)&t_send1, (Optr)PSend23083, (Optr)&t_send1, (Optr)PSend23084, (Optr)&t_send1, (Optr)PSend23085, (Optr)&t_block_return);
    Block PBlock23079 = new_Block_with(empty_Array, empty_Array, PThreadedCode23080, 1, PSend23085);
    // ifFalse:. 
    Send PSend23078 = new_Send((Optr)PSend23077, SMB_ifFalse_, 1, (Optr)PBlock23079);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend23088 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend23089 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend23088, (Optr)VAR_request_0_0);
    Array PThreadedCode23087 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23088, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend23089, (Optr)&t_block_return);
    Block PBlock23086 = new_Block_with(empty_Array, empty_Array, PThreadedCode23087, 1, PSend23089);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray23091 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend23093 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode23092 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend23093, (Optr)&t_method_return);
    Block PBlock23090 = new_Block_with(PArray23091, empty_Array, PThreadedCode23092, 1, PSend23093);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23094 = new_Send((Optr)PBlock23086, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock23090);
    Array PThreadedCode22998 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22999, (Optr)&t_push1, (Optr)string_23000, (Optr)&t_send1, (Optr)PSend23001, (Optr)&t_send_ifTrue_, (Optr)PSend23002, (Optr)PBlock23003, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23009, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23010, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend23011, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_23012, (Optr)&t_send1, (Optr)PSend23013, (Optr)&t_send_ifFalse_, (Optr)PSend23014, (Optr)PBlock23015, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23020, (Optr)&t_send1, (Optr)PSend23047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23048, (Optr)&t_push1, (Optr)string_23049, (Optr)&t_send1, (Optr)PSend23050, (Optr)&t_send_ifTrue_, (Optr)PSend23051, (Optr)PBlock23052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23064, (Optr)&t_send1, (Optr)PSend23068, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23069, (Optr)&t_push1, (Optr)string_23070, (Optr)&t_send1, (Optr)PSend23071, (Optr)&t_push_closure, (Optr)PBlock23072, (Optr)&t_send1, (Optr)PSend23077, (Optr)&t_send_ifFalse_, (Optr)PSend23078, (Optr)PBlock23079, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23086, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock23090, (Optr)&t_send2, (Optr)PSend23094, (Optr)&t_method_return);
    Block PBlock22996 = new_Block_with(PArray22997, empty_Array, PThreadedCode22998, 9, PSend23002, PAssign23009, PAssign23010, PSend23014, PSend23047, PSend23051, PSend23068, PSend23078, PSend23094);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23095 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22996);
    Array PThreadedCode22995 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22996, (Optr)&t_send1, (Optr)PSend23095, (Optr)&t_method_return);
    Method PMethod22992 = new_Method_with(PArray22993, PArray22994, empty_Array, PThreadedCode22995, 1, PSend23095);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22992, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray23097 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend23099 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode23098 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend23099, (Optr)&t_method_return);
    Method PMethod23096 = new_Method_with(PArray23097, empty_Array, empty_Array, PThreadedCode23098, 1, PSend23099);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod23096, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray23101 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23105 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode23104 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend23105, (Optr)&t_block_return);
    Block PBlock23103 = new_Block_with(empty_Array, empty_Array, PThreadedCode23104, 1, PSend23105);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23106 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23103);
    Array PThreadedCode23102 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23103, (Optr)&t_send1, (Optr)PSend23106, (Optr)&t_method_return);
    Method PMethod23100 = new_Method_with(PArray23101, empty_Array, empty_Array, PThreadedCode23102, 1, PSend23106);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod23100, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode23108 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod23107 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23108, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod23107, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray23110 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray23111 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_23119 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23119_Const = new_Constant((Optr)string_23119);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23120 = new_String(L"<h1>Internal Server Error: ");
    Constant string_23120_Const = new_Constant((Optr)string_23120);
    // ,. 
    Send PSend23118 = new_Send((Optr)string_23119_Const, SMB__append_, 1, (Optr)string_23120_Const);
    // ,. 
    Send PSend23117 = new_Send((Optr)PSend23118, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_23121 = new_String(L"</h1><pre>");
    Constant string_23121_Const = new_Constant((Optr)string_23121);
    // ,. 
    Send PSend23116 = new_Send((Optr)PSend23117, SMB__append_, 1, (Optr)string_23121_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23123 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23124 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23122 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23123, (Optr)PSend23124);
    // ,. 
    Send PSend23115 = new_Send((Optr)PSend23116, SMB__append_, 1, (Optr)PSend23122);
    String string_23125 = new_String(L"</pre></body></html>");
    Constant string_23125_Const = new_Constant((Optr)string_23125);
    // ,. 
    Send PSend23114 = new_Send((Optr)PSend23115, SMB__append_, 1, (Optr)string_23125_Const);
    Assign PAssign23113 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend23114);
    SmallInt int_500 = new_SmallInt(500);
    String string_23126 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23126_Const = new_Constant((Optr)string_23126);
    // sendResponseCode:content:type:close:. 
    Send PSend23127 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_23126_Const, (Optr)true_Const);
    Array PThreadedCode23112 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign23113, (Optr)&t_push1, (Optr)string_23119, (Optr)&t_push1, (Optr)string_23120, (Optr)&t_send1, (Optr)PSend23118, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend23117, (Optr)&t_push1, (Optr)string_23121, (Optr)&t_send1, (Optr)PSend23116, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23123, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23124, (Optr)&t_send2, (Optr)PSend23122, (Optr)&t_send1, (Optr)PSend23115, (Optr)&t_push1, (Optr)string_23125, (Optr)&t_send1, (Optr)PSend23114, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_23126, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23127, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23109 = new_Method_with(PArray23110, PArray23111, empty_Array, PThreadedCode23112, 3, PAssign23113, PSend23127, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod23109, WebClient_Core_WebServer_Class);
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
    Send PSend23134 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend23133 = new_Send((Optr)PSend23134, SMB_serverString, 0);
    Assign PAssign23132 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend23133);
    Array PThreadedCode23131 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign23132, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23134, (Optr)&t_send0, (Optr)PSend23133, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23130 = new_Block_with(empty_Array, empty_Array, PThreadedCode23131, 1, PAssign23132);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23135 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock23130);
    Array PThreadedCode23129 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock23130, (Optr)&t_send1, (Optr)PSend23135, (Optr)&t_method_return);
    Method PMethod23128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23129, 1, PSend23135);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23128, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23137 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend23141 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend23142 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend23141);
    Array PThreadedCode23140 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend23141, (Optr)&t_send1, (Optr)PSend23142, (Optr)&t_block_return);
    Block PBlock23139 = new_Block_with(empty_Array, empty_Array, PThreadedCode23140, 1, PSend23142);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23143 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock23139);
    Array PThreadedCode23138 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock23139, (Optr)&t_send1, (Optr)PSend23143, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23136 = new_Method_with(PArray23137, empty_Array, empty_Array, PThreadedCode23138, 2, PSend23143, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod23136, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23147 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend23149 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23150 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23148 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23149, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23150, (Optr)&t_method_return);
    Block PBlock23146 = new_Block_with(PArray23147, empty_Array, PThreadedCode23148, 2, PSend23149, PSend23150);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23151 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23152 = new_Send((Optr)PBlock23146, SMB_value_, 1, (Optr)PSend23151);
    Array PThreadedCode23145 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23146, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend23151, (Optr)&t_send1, (Optr)PSend23152, (Optr)&t_method_return);
    Method PMethod23144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23145, 1, PSend23152);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod23144, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray23154 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign23156 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode23155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23156, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23153 = new_Method_with(PArray23154, empty_Array, empty_Array, PThreadedCode23155, 2, PAssign23156, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod23153, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode23158 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod23157 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23158, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod23157, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode23160 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod23159 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23160, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod23159, WebClient_Core_WebServer_Class);
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
    Send PSend23163 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend23164 = new_Send((Optr)PSend23163, SMB_serverDate, 0);
    Array PThreadedCode23162 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23163, (Optr)&t_send0, (Optr)PSend23164, (Optr)&t_method_return);
    Method PMethod23161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23162, 1, PSend23164);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23161, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray23166 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend23168 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend23169 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend23168);
    Array PThreadedCode23167 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23168, (Optr)&t_send2, (Optr)PSend23169, (Optr)&t_method_return);
    Method PMethod23165 = new_Method_with(PArray23166, empty_Array, empty_Array, PThreadedCode23167, 1, PSend23169);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod23165, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray23171 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend23173 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend23174 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend23173);
    Array PThreadedCode23172 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend23173, (Optr)&t_send1, (Optr)PSend23174, (Optr)&t_method_return);
    Method PMethod23170 = new_Method_with(PArray23171, empty_Array, empty_Array, PThreadedCode23172, 1, PSend23174);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod23170, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray23176 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23179 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_23181 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23181_Const = new_Constant((Optr)string_23181);
    // nextPutAll:. 
    Send PSend23182 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_23181_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23183 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode23180 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_23181, (Optr)&t_send1, (Optr)PSend23182, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23183, (Optr)&t_method_return);
    Block PBlock23178 = new_Block_with(PArray23179, empty_Array, PThreadedCode23180, 2, PSend23182, PSend23183);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23184 = new_Send((Optr)PBlock23178, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode23177 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23178, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend23184, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23175 = new_Method_with(PArray23176, empty_Array, empty_Array, PThreadedCode23177, 2, PSend23184, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod23175, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray23186 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign23188 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode23187 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23188, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23185 = new_Method_with(PArray23186, empty_Array, empty_Array, PThreadedCode23187, 2, PAssign23188, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod23185, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23190 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode23195 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23194 = new_Block_with(empty_Array, empty_Array, PThreadedCode23195, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend23196 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23194);
    Array PThreadedCode23193 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23194, (Optr)&t_send2, (Optr)PSend23196, (Optr)&t_block_return);
    Block PBlock23192 = new_Block_with(empty_Array, empty_Array, PThreadedCode23193, 1, PSend23196);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23197 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23192);
    Array PThreadedCode23191 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23192, (Optr)&t_send1, (Optr)PSend23197, (Optr)&t_method_return);
    Method PMethod23189 = new_Method_with(PArray23190, empty_Array, empty_Array, PThreadedCode23191, 1, PSend23197);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod23189, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23199 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23201 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode23200 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23201, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23198 = new_Method_with(PArray23199, empty_Array, empty_Array, PThreadedCode23200, 2, PAssign23201, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod23198, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray23203 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23207 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend23208 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23209 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend23207, (Optr)PSend23208);
    Array PThreadedCode23206 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend23207, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend23208, (Optr)&t_send2, (Optr)PSend23209, (Optr)&t_block_return);
    Block PBlock23205 = new_Block_with(empty_Array, empty_Array, PThreadedCode23206, 1, PSend23209);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23210 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23205);
    Array PThreadedCode23204 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23205, (Optr)&t_send1, (Optr)PSend23210, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23202 = new_Method_with(PArray23203, empty_Array, empty_Array, PThreadedCode23204, 2, PSend23210, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod23202, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray23212 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23216 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode23218 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23217 = new_Block_with(empty_Array, empty_Array, PThreadedCode23218, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend23219 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend23216, (Optr)PBlock23217);
    Array PThreadedCode23215 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend23216, (Optr)&t_push_closure, (Optr)PBlock23217, (Optr)&t_send2, (Optr)PSend23219, (Optr)&t_block_return);
    Block PBlock23214 = new_Block_with(empty_Array, empty_Array, PThreadedCode23215, 1, PSend23219);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23220 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23214);
    Array PThreadedCode23213 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23214, (Optr)&t_send1, (Optr)PSend23220, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23211 = new_Method_with(PArray23212, empty_Array, empty_Array, PThreadedCode23213, 2, PSend23220, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod23211, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_23223 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode23222 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23223, (Optr)&t_method_return);
    Constant string_23223_Const = new_Constant((Optr)string_23223);
    Method PMethod23221 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23222, 1, string_23223_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod23221, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23228 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign23229 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode23227 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend23228, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23229, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23226 = new_Block_with(empty_Array, empty_Array, PThreadedCode23227, 2, PSend23228, PAssign23229);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23230 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock23226);
    Array PThreadedCode23225 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23226, (Optr)&t_send1, (Optr)PSend23230, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23224 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23225, 2, PSend23230, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod23224, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray23232 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23235 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend23239 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend23238 = new_Send((Optr)PSend23239, SMB_asUTC, 0);
    Assign PAssign23237 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend23238);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend23240 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_23241 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23241_Const = new_Constant((Optr)string_23241);
    // ,. 
    Send PSend23242 = new_Send((Optr)PSend23240, SMB__append_, 1, (Optr)string_23241_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23243 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend23242);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend23244 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23246 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend23248 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend23249 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend23250 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend23251 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend23252 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend23253 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend23254 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23255 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode23247 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23249, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend23250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend23251, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23252, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23253, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23254, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23255, (Optr)&t_method_return);
    Block PBlock23245 = new_Block_with(PArray23246, empty_Array, PThreadedCode23247, 8, PSend23248, PSend23249, PSend23250, PSend23251, PSend23252, PSend23253, PSend23254, PSend23255);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23256 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23257 = new_Send((Optr)PBlock23245, SMB_value_, 1, (Optr)PSend23256);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23258 = new_Send((Optr)PSend23257, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend23259 = new_Send((Optr)PSend23244, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend23258);
    Array PArray23261 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23263 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend23264 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend23265 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend23264);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend23266 = new_Send((Optr)PSend23265, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend23267 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23266);
    Array PThreadedCode23262 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23263, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23264, (Optr)&t_send1, (Optr)PSend23265, (Optr)&t_send0, (Optr)PSend23266, (Optr)&t_send1, (Optr)PSend23267, (Optr)&t_method_return);
    Block PBlock23260 = new_Block_with(PArray23261, empty_Array, PThreadedCode23262, 2, PSend23263, PSend23267);
    // value:. 
    Send PSend23268 = new_Send((Optr)PBlock23260, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_23269 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_23269_Const = new_Constant((Optr)string_23269);
    // writeAll:. 
    Send PSend23270 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_23269_Const);
    Array PThreadedCode23236 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23237, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend23239, (Optr)&t_send0, (Optr)PSend23238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23240, (Optr)&t_push1, (Optr)string_23241, (Optr)&t_send1, (Optr)PSend23242, (Optr)&t_send1, (Optr)PSend23243, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23244, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock23245, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23256, (Optr)&t_send1, (Optr)PSend23257, (Optr)&t_send0, (Optr)PSend23258, (Optr)&t_send2, (Optr)PSend23259, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23260, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_23269, (Optr)&t_send1, (Optr)PSend23270, (Optr)&t_method_return);
    Block PBlock23234 = new_Block_with(PArray23235, empty_Array, PThreadedCode23236, 5, PAssign23237, PSend23243, PSend23259, PSend23268, PSend23270);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23271 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23234);
    Array PThreadedCode23233 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23234, (Optr)&t_send1, (Optr)PSend23271, (Optr)&t_method_return);
    Method PMethod23231 = new_Method_with(empty_Array, PArray23232, empty_Array, PThreadedCode23233, 1, PSend23271);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23231, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_23274 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode23273 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23274, (Optr)&t_method_return);
    Constant string_23274_Const = new_Constant((Optr)string_23274);
    Method PMethod23272 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23273, 1, string_23274_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod23272, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_23277 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode23276 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23277, (Optr)&t_method_return);
    Constant string_23277_Const = new_Constant((Optr)string_23277);
    Method PMethod23275 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23276, 1, string_23277_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23275, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23283 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign23282 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend23283);
    Array PThreadedCode23281 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23282, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23283, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23280 = new_Block_with(empty_Array, empty_Array, PThreadedCode23281, 1, PAssign23282);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23284 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock23280);
    Array PThreadedCode23279 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23280, (Optr)&t_send1, (Optr)PSend23284, (Optr)&t_method_return);
    Method PMethod23278 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23279, 1, PSend23284);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod23278, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray23286 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23289 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign23288 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend23289);
    // new. 
    Send PSend23291 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23290 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend23291);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend23292 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend23293 = new_Send((Optr)PSend23292, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend23294 = new_Send((Optr)PSend23293, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend23295 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_23296 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray23298 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend23300 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_23301 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23301_Const = new_Constant((Optr)string_23301);
    // send200Response:contentType:. 
    Send PSend23302 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend23300, (Optr)string_23301_Const);
    Array PThreadedCode23299 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23300, (Optr)&t_push1, (Optr)string_23301, (Optr)&t_send2, (Optr)PSend23302, (Optr)&t_method_return);
    Block PBlock23297 = new_Block_with(PArray23298, empty_Array, PThreadedCode23299, 1, PSend23302);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_23296_Const = new_Constant((Optr)string_23296);
    // addService:action:. 
    Send PSend23303 = new_Send((Optr)PSend23295, SMB_addService_action_, 2, (Optr)string_23296_Const, (Optr)PBlock23297);
    Array PThreadedCode23287 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23288, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend23289, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23290, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23292, (Optr)&t_send0, (Optr)PSend23293, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend23294, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23295, (Optr)&t_push1, (Optr)string_23296, (Optr)&t_push_closure, (Optr)PBlock23297, (Optr)&t_send2, (Optr)PSend23303, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23285 = new_Method_with(empty_Array, PArray23286, empty_Array, PThreadedCode23287, 5, PAssign23288, PAssign23290, PSend23294, PSend23303, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod23285, HEADER(WebClient_Core_WebServer_Class));
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