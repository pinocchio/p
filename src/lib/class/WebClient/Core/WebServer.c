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
    Array PArray22743 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22744 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22754 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22753 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22754, (Optr)&t_block_return);
    Block PBlock22752 = new_Block_with(empty_Array, empty_Array, PThreadedCode22753, 1, PSend22754);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22756 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22758 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22757 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22758, (Optr)&t_method_return);
    Block PBlock22755 = new_Block_with(PArray22756, empty_Array, PThreadedCode22757, 1, PSend22758);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22759 = new_Send((Optr)PBlock22752, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22755);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22762 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22764 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22763 = new_Block_with(empty_Array, empty_Array, PThreadedCode22764, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22765 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22762, (Optr)PBlock22763);
    Array PThreadedCode22761 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22762, (Optr)&t_push_closure, (Optr)PBlock22763, (Optr)&t_send2, (Optr)PSend22765, (Optr)&t_block_return);
    Block PBlock22760 = new_Block_with(empty_Array, empty_Array, PThreadedCode22761, 1, PSend22765);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22766 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22760);
    Array PThreadedCode22751 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22752, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22755, (Optr)&t_send2, (Optr)PSend22759, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22760, (Optr)&t_send1, (Optr)PSend22766, (Optr)&t_block_return);
    Block PBlock22750 = new_Block_with(empty_Array, empty_Array, PThreadedCode22751, 2, PSend22759, PSend22766);
    // destroy. 
    Send PSend22769 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22768 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22769, (Optr)&t_block_return);
    Block PBlock22767 = new_Block_with(empty_Array, empty_Array, PThreadedCode22768, 1, PSend22769);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22770 = new_Send((Optr)PBlock22750, SMB_ensure_, 1, (Optr)PBlock22767);
    Array PThreadedCode22749 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22750, (Optr)&t_push_closure, (Optr)PBlock22767, (Optr)&t_send1, (Optr)PSend22770, (Optr)&t_block_return);
    Block PBlock22748 = new_Block_with(empty_Array, empty_Array, PThreadedCode22749, 1, PSend22770);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22747 = new_Send((Optr)PBlock22748, SMB_fork, 0);
    Assign PAssign22746 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22747);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22773 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22773, (Optr)&t_block_return);
    Block PBlock22771 = new_Block_with(empty_Array, empty_Array, PThreadedCode22772, 1, PSend22773);
    // critical:. 
    Send PSend22774 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22771);
    Array PThreadedCode22745 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22746, (Optr)&t_push_closure, (Optr)PBlock22748, (Optr)&t_send0, (Optr)PSend22747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22771, (Optr)&t_send1, (Optr)PSend22774, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22742 = new_Method_with(PArray22743, PArray22744, empty_Array, PThreadedCode22745, 3, PAssign22746, PSend22774, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22742, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray22776 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22781 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22780 = new_Block_with(empty_Array, empty_Array, PThreadedCode22781, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22782 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22780);
    Array PThreadedCode22779 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22780, (Optr)&t_send2, (Optr)PSend22782, (Optr)&t_block_return);
    Block PBlock22778 = new_Block_with(empty_Array, empty_Array, PThreadedCode22779, 1, PSend22782);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22783 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22778);
    Array PThreadedCode22777 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22778, (Optr)&t_send1, (Optr)PSend22783, (Optr)&t_method_return);
    Method PMethod22775 = new_Method_with(PArray22776, empty_Array, empty_Array, PThreadedCode22777, 1, PSend22783);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22775, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
    Array PThreadedCode22785 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22785, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22784, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    String string_22788 = new_String(L"HEAD");
    String string_22789 = new_String(L"TRACE");
    String string_22790 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22788_Const = new_Constant((Optr)string_22788);
    Constant string_22789_Const = new_Constant((Optr)string_22789);
    Constant string_22790_Const = new_Constant((Optr)string_22790);
    // with:with:with:. 
    Send PSend22791 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22788_Const, (Optr)string_22789_Const, (Optr)string_22790_Const);
    Array PThreadedCode22787 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22788, (Optr)&t_push1, (Optr)string_22789, (Optr)&t_push1, (Optr)string_22790, (Optr)&t_send3, (Optr)PSend22791, (Optr)&t_method_return);
    Method PMethod22786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22787, 1, PSend22791);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22786, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
    Array PArray22793 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22796 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22800 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22799 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22800, (Optr)&t_block_return);
    Block PBlock22798 = new_Block_with(empty_Array, empty_Array, PThreadedCode22799, 1, PSend22800);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22801 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22798);
    Array PThreadedCode22797 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22798, (Optr)&t_send1, (Optr)PSend22801, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22795 = new_Block_with(PArray22796, empty_Array, PThreadedCode22797, 2, PSend22801, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22802 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22795);
    Array PThreadedCode22794 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22795, (Optr)&t_send1, (Optr)PSend22802, (Optr)&t_method_return);
    Method PMethod22792 = new_Method_with(PArray22793, empty_Array, empty_Array, PThreadedCode22794, 1, PSend22802);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22792, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Array PArray22804 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22806 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22805 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22806, (Optr)&t_method_return);
    Method PMethod22803 = new_Method_with(PArray22804, empty_Array, empty_Array, PThreadedCode22805, 1, PSend22806);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22803, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
    Array PThreadedCode22808 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22807 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22808, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22807, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22810 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22811 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22815 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22815_Const = new_Constant((Optr)string_22815);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22816 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22816_Const = new_Constant((Optr)string_22816);
    // ,. 
    Send PSend22814 = new_Send((Optr)string_22815_Const, SMB__append_, 1, (Optr)string_22816_Const);
    Assign PAssign22813 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22814);
    String string_22819 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22820 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22819_Const = new_Constant((Optr)string_22819);
    // ,. 
    Send PSend22821 = new_Send((Optr)string_22819_Const, SMB__append_, 1, (Optr)PSend22820);
    String string_22822 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22822_Const = new_Constant((Optr)string_22822);
    // ,. 
    Send PSend22823 = new_Send((Optr)PSend22821, SMB__append_, 1, (Optr)string_22822_Const);
    // crlf. 
    Send PSend22824 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22825 = new_Send((Optr)PSend22823, SMB__append_, 1, (Optr)PSend22824);
    String string_22826 = new_String(L"Connection: close");
    Constant string_22826_Const = new_Constant((Optr)string_22826);
    // ,. 
    Send PSend22827 = new_Send((Optr)PSend22825, SMB__append_, 1, (Optr)string_22826_Const);
    // crlf. 
    Send PSend22828 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22829 = new_Send((Optr)PSend22827, SMB__append_, 1, (Optr)PSend22828);
    String string_22830 = new_String(L"Content-Length: ");
    Constant string_22830_Const = new_Constant((Optr)string_22830);
    // ,. 
    Send PSend22831 = new_Send((Optr)PSend22829, SMB__append_, 1, (Optr)string_22830_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22832 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22833 = new_Send((Optr)PSend22832, SMB_asString, 0);
    // ,. 
    Send PSend22834 = new_Send((Optr)PSend22831, SMB__append_, 1, (Optr)PSend22833);
    // crlf. 
    Send PSend22835 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22836 = new_Send((Optr)PSend22834, SMB__append_, 1, (Optr)PSend22835);
    // crlf. 
    Send PSend22837 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22838 = new_Send((Optr)PSend22836, SMB__append_, 1, (Optr)PSend22837);
    // ,. 
    Send PSend22839 = new_Send((Optr)PSend22838, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22840 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22839);
    Array PThreadedCode22818 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22819, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22820, (Optr)&t_send1, (Optr)PSend22821, (Optr)&t_push1, (Optr)string_22822, (Optr)&t_send1, (Optr)PSend22823, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22824, (Optr)&t_send1, (Optr)PSend22825, (Optr)&t_push1, (Optr)string_22826, (Optr)&t_send1, (Optr)PSend22827, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22828, (Optr)&t_send1, (Optr)PSend22829, (Optr)&t_push1, (Optr)string_22830, (Optr)&t_send1, (Optr)PSend22831, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22832, (Optr)&t_send0, (Optr)PSend22833, (Optr)&t_send1, (Optr)PSend22834, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22835, (Optr)&t_send1, (Optr)PSend22836, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22837, (Optr)&t_send1, (Optr)PSend22838, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22839, (Optr)&t_send1, (Optr)PSend22840, (Optr)&t_block_return);
    Block PBlock22817 = new_Block_with(empty_Array, empty_Array, PThreadedCode22818, 1, PSend22840);
    Array PThreadedCode22842 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22841 = new_Block_with(empty_Array, empty_Array, PThreadedCode22842, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22843 = new_Send((Optr)PBlock22817, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22841);
    Array PThreadedCode22812 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22813, (Optr)&t_push1, (Optr)string_22815, (Optr)&t_push1, (Optr)string_22816, (Optr)&t_send1, (Optr)PSend22814, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22817, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22841, (Optr)&t_send2, (Optr)PSend22843, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22809 = new_Method_with(PArray22810, PArray22811, empty_Array, PThreadedCode22812, 3, PAssign22813, PSend22843, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22809, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22845 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22847 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22846 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22847, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22844 = new_Method_with(PArray22845, empty_Array, empty_Array, PThreadedCode22846, 1, PAssign22847);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22844, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
    Array PThreadedCode22849 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22849, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22848, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend22852 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22857 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22856 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22857, (Optr)&t_block_return);
    Block PBlock22855 = new_Block_with(empty_Array, empty_Array, PThreadedCode22856, 1, PSend22857);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22854 = new_Send((Optr)PBlock22855, SMB_fork, 0);
    Assign PAssign22853 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22854);
    Array PThreadedCode22851 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22852, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22853, (Optr)&t_push_closure, (Optr)PBlock22855, (Optr)&t_send0, (Optr)PSend22854, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22851, 3, PSend22852, PAssign22853, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22850, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22861 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22860 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22861);
    // new. 
    Send PSend22863 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22862 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22863);
    // new. 
    Send PSend22865 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22864 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22865);
    // new. 
    Send PSend22867 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22866 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22867);
    // new. 
    Send PSend22869 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22868 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22869);
    // new. 
    Send PSend22871 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22870 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22871);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22873 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22876 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22878 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22879 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22877 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22878, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22879, (Optr)&t_method_return);
    Block PBlock22875 = new_Block_with(PArray22876, empty_Array, PThreadedCode22877, 2, PSend22878, PSend22879);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22880 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22881 = new_Send((Optr)PBlock22875, SMB_value_, 1, (Optr)PSend22880);
    Array PThreadedCode22874 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22875, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22880, (Optr)&t_send1, (Optr)PSend22881, (Optr)&t_method_return);
    Block PBlock22872 = new_Block_with(PArray22873, empty_Array, PThreadedCode22874, 1, PSend22881);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22882 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22872);
    Array PThreadedCode22859 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22860, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22861, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22862, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22863, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22864, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22865, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22866, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22867, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22868, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22870, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22871, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22872, (Optr)&t_send1, (Optr)PSend22882, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22859, 8, PAssign22860, PAssign22862, PAssign22864, PAssign22866, PAssign22868, PAssign22870, PSend22882, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22858, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22884 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22886 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22885 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22886, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22883 = new_Method_with(PArray22884, empty_Array, empty_Array, PThreadedCode22885, 2, PAssign22886, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22883, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
    Array PArray22888 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22889 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22892 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22899 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22898 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22899);
    Array PThreadedCode22897 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22898, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22899, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22896 = new_Block_with(empty_Array, empty_Array, PThreadedCode22897, 1, PAssign22898);
    String string_22902 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22902_Const = new_Constant((Optr)string_22902);
    // error:. 
    Send PSend22903 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22902_Const);
    Array PThreadedCode22901 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22902, (Optr)&t_send1, (Optr)PSend22903, (Optr)&t_block_return);
    Block PBlock22900 = new_Block_with(empty_Array, empty_Array, PThreadedCode22901, 1, PSend22903);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22904 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22896, (Optr)PBlock22900);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22907 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22906 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22907, (Optr)&t_block_return);
    Block PBlock22905 = new_Block_with(empty_Array, empty_Array, PThreadedCode22906, 1, PSend22907);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22910 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22913 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22914 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22913);
    Array PThreadedCode22912 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22913, (Optr)&t_send1, (Optr)PSend22914, (Optr)&t_block_return);
    Block PBlock22911 = new_Block_with(empty_Array, empty_Array, PThreadedCode22912, 1, PSend22914);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22915 = new_Send((Optr)PSend22910, SMB_ifNil_, 1, (Optr)PBlock22911);
    String string_22916 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22916_Const = new_Constant((Optr)string_22916);
    // warn:. 
    Send PSend22917 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22916_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22919 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22918 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22919);
    String string_22920 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22920_Const = new_Constant((Optr)string_22920);
    // warn:. 
    Send PSend22921 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22920_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22924 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22923 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22924, (Optr)&t_block_return);
    Block PBlock22922 = new_Block_with(empty_Array, empty_Array, PThreadedCode22923, 1, PSend22924);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22926 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22928 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22929 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22928);
    Array PThreadedCode22927 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22928, (Optr)&t_send1, (Optr)PSend22929, (Optr)&t_method_return);
    Block PBlock22925 = new_Block_with(PArray22926, empty_Array, PThreadedCode22927, 1, PSend22929);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22930 = new_Send((Optr)PBlock22922, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22925);
    String string_22931 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22931_Const = new_Constant((Optr)string_22931);
    // warn:. 
    Send PSend22932 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22931_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22933 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22909 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22910, (Optr)&t_push_closure, (Optr)PBlock22911, (Optr)&t_send1, (Optr)PSend22915, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22916, (Optr)&t_send1, (Optr)PSend22917, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22918, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22919, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22920, (Optr)&t_send1, (Optr)PSend22921, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22922, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22925, (Optr)&t_send2, (Optr)PSend22930, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22931, (Optr)&t_send1, (Optr)PSend22932, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22933, (Optr)&t_block_return);
    Block PBlock22908 = new_Block_with(empty_Array, empty_Array, PThreadedCode22909, 7, PSend22915, PSend22917, PAssign22918, PSend22921, PSend22930, PSend22932, PSend22933);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22934 = new_Send((Optr)PBlock22905, SMB_whileTrue_, 1, (Optr)PBlock22908);
    Array PThreadedCode22895 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22896, (Optr)&t_push_closure, (Optr)PBlock22900, (Optr)&t_send2, (Optr)PSend22904, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22905, (Optr)&t_push_closure, (Optr)PBlock22908, (Optr)&t_send1, (Optr)PSend22934, (Optr)&t_block_return);
    Block PBlock22894 = new_Block_with(empty_Array, empty_Array, PThreadedCode22895, 2, PSend22904, PSend22934);
    Array PArray22936 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22938 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22937 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22938, (Optr)&t_method_return);
    Block PBlock22935 = new_Block_with(PArray22936, empty_Array, PThreadedCode22937, 1, PSend22938);
    // on:do:. 
    Send PSend22939 = new_Send((Optr)PBlock22894, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22935);
    Array PThreadedCode22893 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22894, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22935, (Optr)&t_send2, (Optr)PSend22939, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22891 = new_Block_with(PArray22892, empty_Array, PThreadedCode22893, 2, PSend22939, self);
    // on:. 
    Send PSend22940 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22891);
    Array PThreadedCode22890 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22891, (Optr)&t_send1, (Optr)PSend22940, (Optr)&t_method_return);
    Method PMethod22887 = new_Method_with(PArray22888, PArray22889, empty_Array, PThreadedCode22890, 1, PSend22940);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22887, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
    Array PThreadedCode22942 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22942, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22941, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
    Array PThreadedCode22944 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22944, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22943, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray22946 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22948 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22947 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22948, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22945 = new_Method_with(PArray22946, empty_Array, empty_Array, PThreadedCode22947, 2, PAssign22948, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22945, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22951 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22950 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22951, (Optr)&t_method_return);
    Method PMethod22949 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22950, 1, PSend22951);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22949, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
    Array PArray22953 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22956 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22964 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22967 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22966 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22967, (Optr)&t_block_return);
    Block PBlock22965 = new_Block_with(empty_Array, empty_Array, PThreadedCode22966, 1, PSend22967);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22968 = new_Send((Optr)PSend22964, SMB_and_, 1, (Optr)PBlock22965);
    Array PThreadedCode22963 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22964, (Optr)&t_push_closure, (Optr)PBlock22965, (Optr)&t_send1, (Optr)PSend22968, (Optr)&t_block_return);
    Block PBlock22962 = new_Block_with(empty_Array, empty_Array, PThreadedCode22963, 1, PSend22968);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22972 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22971 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22972);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22975 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22974 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22975, (Optr)&t_block_return);
    Block PBlock22973 = new_Block_with(empty_Array, empty_Array, PThreadedCode22974, 1, PSend22975);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22976 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22973);
    Array PThreadedCode22970 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22971, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22972, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22973, (Optr)&t_send1, (Optr)PSend22976, (Optr)&t_block_return);
    Block PBlock22969 = new_Block_with(empty_Array, empty_Array, PThreadedCode22970, 2, PAssign22971, PSend22976);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22977 = new_Send((Optr)PBlock22962, SMB_whileTrue_, 1, (Optr)PBlock22969);
    Array PThreadedCode22961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22962, (Optr)&t_push_closure, (Optr)PBlock22969, (Optr)&t_send1, (Optr)PSend22977, (Optr)&t_block_return);
    Block PBlock22960 = new_Block_with(empty_Array, empty_Array, PThreadedCode22961, 1, PSend22977);
    String string_22980 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22982 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22984 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22983 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22984, (Optr)&t_method_return);
    Block PBlock22981 = new_Block_with(PArray22982, empty_Array, PThreadedCode22983, 1, PSend22984);
    // ifNotNil:. 
    Send PSend22985 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22981);
    Constant string_22980_Const = new_Constant((Optr)string_22980);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22986 = new_Send((Optr)string_22980_Const, SMB__append_, 1, (Optr)PSend22985);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22987 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22986);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22988 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22991 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22992 = new_Send((Optr)PSend22991, SMB_not, 0);
    Array PThreadedCode22990 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22991, (Optr)&t_send0, (Optr)PSend22992, (Optr)&t_block_return);
    Block PBlock22989 = new_Block_with(empty_Array, empty_Array, PThreadedCode22990, 1, PSend22992);
    // and:. 
    Send PSend22993 = new_Send((Optr)PSend22988, SMB_and_, 1, (Optr)PBlock22989);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22997 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22998 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22999 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23000 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22999);
    Array PThreadedCode22996 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22997, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22998, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22999, (Optr)&t_send1, (Optr)PSend23000, (Optr)&t_block_return);
    Block PBlock22995 = new_Block_with(empty_Array, empty_Array, PThreadedCode22996, 3, PSend22997, PAssign22998, PSend23000);
    // ifTrue:. 
    Send PSend22994 = new_Send((Optr)PSend22993, SMB_ifTrue_, 1, (Optr)PBlock22995);
    Array PThreadedCode22979 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22980, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22981, (Optr)&t_send1, (Optr)PSend22985, (Optr)&t_send1, (Optr)PSend22986, (Optr)&t_send1, (Optr)PSend22987, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22988, (Optr)&t_push_closure, (Optr)PBlock22989, (Optr)&t_send1, (Optr)PSend22993, (Optr)&t_send_ifTrue_, (Optr)PSend22994, (Optr)PBlock22995, (Optr)&t_block_return);
    Block PBlock22978 = new_Block_with(empty_Array, empty_Array, PThreadedCode22979, 2, PSend22987, PSend22994);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend23001 = new_Send((Optr)PBlock22960, SMB_ensure_, 1, (Optr)PBlock22978);
    Array PThreadedCode22959 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22960, (Optr)&t_push_closure, (Optr)PBlock22978, (Optr)&t_send1, (Optr)PSend23001, (Optr)&t_block_return);
    Block PBlock22958 = new_Block_with(empty_Array, empty_Array, PThreadedCode22959, 1, PSend23001);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray23003 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend23005 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode23004 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend23005, (Optr)&t_method_return);
    Block PBlock23002 = new_Block_with(PArray23003, empty_Array, PThreadedCode23004, 1, PSend23005);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23006 = new_Send((Optr)PBlock22958, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock23002);
    Array PThreadedCode22957 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22958, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock23002, (Optr)&t_send2, (Optr)PSend23006, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22955 = new_Block_with(PArray22956, empty_Array, PThreadedCode22957, 2, PSend23006, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23007 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22955);
    Array PThreadedCode22954 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22955, (Optr)&t_send1, (Optr)PSend23007, (Optr)&t_method_return);
    Method PMethod22952 = new_Method_with(empty_Array, PArray22953, empty_Array, PThreadedCode22954, 1, PSend23007);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22952, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
    Send PSend23010 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend23011 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend23014 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode23013 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend23014, (Optr)&t_block_return);
    Block PBlock23012 = new_Block_with(empty_Array, empty_Array, PThreadedCode23013, 1, PSend23014);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23015 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock23012);
    Array PThreadedCode23009 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23010, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23011, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock23012, (Optr)&t_send1, (Optr)PSend23015, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23009, 4, PSend23010, PSend23011, PSend23015, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23008, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23017 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend23019 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23018 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend23019, (Optr)&t_method_return);
    Method PMethod23016 = new_Method_with(PArray23017, empty_Array, empty_Array, PThreadedCode23018, 1, PSend23019);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod23016, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
    Array PArray23025 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend23027 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode23026 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend23027, (Optr)&t_method_return);
    Block PBlock23024 = new_Block_with(PArray23025, empty_Array, PThreadedCode23026, 1, PSend23027);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23028 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock23024);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend23029 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode23023 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock23024, (Optr)&t_send1, (Optr)PSend23028, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend23029, (Optr)&t_block_return);
    Block PBlock23022 = new_Block_with(empty_Array, empty_Array, PThreadedCode23023, 2, PSend23028, PSend23029);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23030 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23022);
    Array PThreadedCode23021 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23022, (Optr)&t_send1, (Optr)PSend23030, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23020 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23021, 2, PSend23030, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod23020, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    String string_23033 = new_String(L"GET");
    String string_23034 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_23033_Const = new_Constant((Optr)string_23033);
    Constant string_23034_Const = new_Constant((Optr)string_23034);
    // with:with:. 
    Send PSend23035 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_23033_Const, (Optr)string_23034_Const);
    Array PThreadedCode23032 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_23033, (Optr)&t_push1, (Optr)string_23034, (Optr)&t_send2, (Optr)PSend23035, (Optr)&t_method_return);
    Method PMethod23031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23032, 1, PSend23035);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod23031, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
    Array PThreadedCode23037 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod23036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23037, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod23036, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
    Array PArray23039 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray23040 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign23042 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign23043 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_23048 = new_String(L"*");
    Array PThreadedCode23047 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23048, (Optr)&t_block_return);
    Constant string_23048_Const = new_Constant((Optr)string_23048);
    Block PBlock23046 = new_Block_with(empty_Array, empty_Array, PThreadedCode23047, 1, string_23048_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23051 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode23050 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend23051, (Optr)&t_block_return);
    Block PBlock23049 = new_Block_with(empty_Array, empty_Array, PThreadedCode23050, 1, PSend23051);
    // ifNil:ifNotNil:. 
    Send PSend23045 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23046, (Optr)PBlock23049);
    Assign PAssign23044 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend23045);
    String string_23052 = new_String(L"Listener starting (interface: ");
    Constant string_23052_Const = new_Constant((Optr)string_23052);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23053 = new_Send((Optr)string_23052_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_23054 = new_String(L" port: ");
    Constant string_23054_Const = new_Constant((Optr)string_23054);
    // ,. 
    Send PSend23055 = new_Send((Optr)PSend23053, SMB__append_, 1, (Optr)string_23054_Const);
    // ,. 
    Send PSend23056 = new_Send((Optr)PSend23055, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_23057 = new_String(L")");
    Constant string_23057_Const = new_Constant((Optr)string_23057);
    // ,. 
    Send PSend23058 = new_Send((Optr)PSend23056, SMB__append_, 1, (Optr)string_23057_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend23059 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend23058);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend23061 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign23060 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend23061);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend23064 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode23063 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend23064, (Optr)&t_block_return);
    Block PBlock23062 = new_Block_with(empty_Array, empty_Array, PThreadedCode23063, 1, PSend23064);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend23067 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode23066 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend23067, (Optr)&t_block_return);
    Block PBlock23065 = new_Block_with(empty_Array, empty_Array, PThreadedCode23066, 1, PSend23067);
    // ifNil:ifNotNil:. 
    Send PSend23068 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23062, (Optr)PBlock23065);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend23069 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode23041 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign23042, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23043, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23044, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock23046, (Optr)&t_push_closure, (Optr)PBlock23049, (Optr)&t_send2, (Optr)PSend23045, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23052, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend23053, (Optr)&t_push1, (Optr)string_23054, (Optr)&t_send1, (Optr)PSend23055, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend23056, (Optr)&t_push1, (Optr)string_23057, (Optr)&t_send1, (Optr)PSend23058, (Optr)&t_send1, (Optr)PSend23059, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23060, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend23061, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock23062, (Optr)&t_push_closure, (Optr)PBlock23065, (Optr)&t_send2, (Optr)PSend23068, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23069, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23038 = new_Method_with(PArray23039, PArray23040, empty_Array, PThreadedCode23041, 8, PAssign23042, PAssign23043, PAssign23044, PSend23059, PAssign23060, PSend23068, PSend23069, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod23038, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
    Array PThreadedCode23071 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod23070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23071, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod23070, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray23073 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend23075 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend23076 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend23075);
    Array PThreadedCode23074 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23075, (Optr)&t_send3, (Optr)PSend23076, (Optr)&t_method_return);
    Method PMethod23072 = new_Method_with(PArray23073, empty_Array, empty_Array, PThreadedCode23074, 1, PSend23076);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod23072, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend23081 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode23080 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend23081, (Optr)&t_block_return);
    Block PBlock23079 = new_Block_with(empty_Array, empty_Array, PThreadedCode23080, 1, PSend23081);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23082 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock23079);
    Assign PAssign23083 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode23078 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock23079, (Optr)&t_send1, (Optr)PSend23082, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23083, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23078, 3, PSend23082, PAssign23083, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod23077, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
    Array PArray23085 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign23087 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode23086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23087, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23084 = new_Method_with(PArray23085, empty_Array, empty_Array, PThreadedCode23086, 2, PAssign23087, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod23084, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
    Send PSend23090 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23091 = new_Send((Optr)PSend23090, SMB_not, 0);
    Array PThreadedCode23089 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23090, (Optr)&t_send0, (Optr)PSend23091, (Optr)&t_method_return);
    Method PMethod23088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23089, 1, PSend23091);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod23088, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
    Array PThreadedCode23093 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod23092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23093, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod23092, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
    Array PArray23095 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray23096 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23099 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23101 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23102 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23102_Const = new_Constant((Optr)string_23102);
    // =. 
    Send PSend23103 = new_Send((Optr)PSend23101, SMB__equals_, 1, (Optr)string_23102_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23107 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_23108 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23108_Const = new_Constant((Optr)string_23108);
    // send200Response:contentType:. 
    Send PSend23109 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend23107, (Optr)string_23108_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23110 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23109);
    Array PThreadedCode23106 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23107, (Optr)&t_push1, (Optr)string_23108, (Optr)&t_send2, (Optr)PSend23109, (Optr)&t_send1, (Optr)PSend23110, (Optr)&t_block_return);
    Block PBlock23105 = new_Block_with(empty_Array, empty_Array, PThreadedCode23106, 1, PSend23110);
    // ifTrue:. 
    Send PSend23104 = new_Send((Optr)PSend23103, SMB_ifTrue_, 1, (Optr)PBlock23105);
    Assign PAssign23111 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23113 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign23112 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23113);
    String string_23114 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23114_Const = new_Constant((Optr)string_23114);
    // beginsWith:. 
    Send PSend23115 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_23114_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23121 = new_String(L"/");
    Constant string_23121_Const = new_Constant((Optr)string_23121);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23120 = new_Send((Optr)string_23121_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign23119 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23120);
    Array PThreadedCode23118 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign23119, (Optr)&t_push1, (Optr)string_23121, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend23120, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23117 = new_Block_with(empty_Array, empty_Array, PThreadedCode23118, 1, PAssign23119);
    // ifFalse:. 
    Send PSend23116 = new_Send((Optr)PSend23115, SMB_ifFalse_, 1, (Optr)PBlock23117);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend23126 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23129 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode23128 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23129, (Optr)&t_block_return);
    Block PBlock23127 = new_Block_with(empty_Array, empty_Array, PThreadedCode23128, 1, PSend23129);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23130 = new_Send((Optr)PSend23126, SMB_and_, 1, (Optr)PBlock23127);
    Array PThreadedCode23125 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend23126, (Optr)&t_push_closure, (Optr)PBlock23127, (Optr)&t_send1, (Optr)PSend23130, (Optr)&t_block_return);
    Block PBlock23124 = new_Block_with(empty_Array, empty_Array, PThreadedCode23125, 1, PSend23130);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode23136 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23135 = new_Block_with(empty_Array, empty_Array, PThreadedCode23136, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend23134 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock23135);
    Assign PAssign23133 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend23134);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_23139 = new_Character(L'/');
    Constant char_23139_Const = new_Constant((Optr)char_23139);
    // copyUpToLast:. 
    Send PSend23138 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_23139_Const);
    Assign PAssign23137 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend23138);
    Array PThreadedCode23132 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23133, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock23135, (Optr)&t_send2, (Optr)PSend23134, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23137, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_23139, (Optr)&t_send1, (Optr)PSend23138, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23131 = new_Block_with(empty_Array, empty_Array, PThreadedCode23132, 2, PAssign23133, PAssign23137);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23140 = new_Send((Optr)PBlock23124, SMB_whileTrue_, 1, (Optr)PBlock23131);
    String string_23145 = new_String(L"/");
    Constant string_23145_Const = new_Constant((Optr)string_23145);
    Array PThreadedCode23147 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23146 = new_Block_with(empty_Array, empty_Array, PThreadedCode23147, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend23144 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_23145_Const, (Optr)PBlock23146);
    Assign PAssign23143 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend23144);
    Array PThreadedCode23142 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23143, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_23145, (Optr)&t_push_closure, (Optr)PBlock23146, (Optr)&t_send2, (Optr)PSend23144, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23141 = new_Block_with(empty_Array, empty_Array, PThreadedCode23142, 1, PAssign23143);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23148 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock23141);
    Array PThreadedCode23123 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock23124, (Optr)&t_push_closure, (Optr)PBlock23131, (Optr)&t_send1, (Optr)PSend23140, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23141, (Optr)&t_send1, (Optr)PSend23148, (Optr)&t_block_return);
    Block PBlock23122 = new_Block_with(empty_Array, empty_Array, PThreadedCode23123, 2, PSend23140, PSend23148);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23149 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23122);
    // method. 
    Send PSend23150 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23151 = new_String(L"OPTIONS");
    Constant string_23151_Const = new_Constant((Optr)string_23151);
    // =. 
    Send PSend23152 = new_Send((Optr)PSend23150, SMB__equals_, 1, (Optr)string_23151_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend23156 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend23159 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode23158 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23159, (Optr)&t_block_return);
    Block PBlock23157 = new_Block_with(empty_Array, empty_Array, PThreadedCode23158, 1, PSend23159);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23162 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode23161 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend23162, (Optr)&t_block_return);
    Block PBlock23160 = new_Block_with(empty_Array, empty_Array, PThreadedCode23161, 1, PSend23162);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23163 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23157, (Optr)PBlock23160);
    // ,. 
    Send PSend23164 = new_Send((Optr)PSend23156, SMB__append_, 1, (Optr)PSend23163);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend23165 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend23164);
    Array PThreadedCode23155 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23156, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23157, (Optr)&t_push_closure, (Optr)PBlock23160, (Optr)&t_send2, (Optr)PSend23163, (Optr)&t_send1, (Optr)PSend23164, (Optr)&t_send1, (Optr)PSend23165, (Optr)&t_block_return);
    Block PBlock23154 = new_Block_with(empty_Array, empty_Array, PThreadedCode23155, 1, PSend23165);
    // ifTrue:. 
    Send PSend23153 = new_Send((Optr)PSend23152, SMB_ifTrue_, 1, (Optr)PBlock23154);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend23168 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend23169 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23168);
    Array PThreadedCode23167 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23168, (Optr)&t_send1, (Optr)PSend23169, (Optr)&t_block_return);
    Block PBlock23166 = new_Block_with(empty_Array, empty_Array, PThreadedCode23167, 1, PSend23169);
    // ifNil:. 
    Send PSend23170 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock23166);
    // method. 
    Send PSend23171 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23172 = new_String(L"HEAD");
    Constant string_23172_Const = new_Constant((Optr)string_23172);
    // =. 
    Send PSend23173 = new_Send((Optr)PSend23171, SMB__equals_, 1, (Optr)string_23172_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend23176 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend23177 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend23178 = new_Send((Optr)PSend23176, SMB_includes_, 1, (Optr)PSend23177);
    Array PThreadedCode23175 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23176, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23177, (Optr)&t_send1, (Optr)PSend23178, (Optr)&t_block_return);
    Block PBlock23174 = new_Block_with(empty_Array, empty_Array, PThreadedCode23175, 1, PSend23178);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23179 = new_Send((Optr)PSend23173, SMB_or_, 1, (Optr)PBlock23174);
    // builtinHttpMethods. 
    Send PSend23183 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend23184 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend23185 = new_Send((Optr)PSend23183, SMB__append_, 1, (Optr)PSend23184);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend23186 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend23185);
    // escape:. 
    Send PSend23187 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23186);
    Array PThreadedCode23182 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23183, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend23184, (Optr)&t_send1, (Optr)PSend23185, (Optr)&t_send1, (Optr)PSend23186, (Optr)&t_send1, (Optr)PSend23187, (Optr)&t_block_return);
    Block PBlock23181 = new_Block_with(empty_Array, empty_Array, PThreadedCode23182, 1, PSend23187);
    // ifFalse:. 
    Send PSend23180 = new_Send((Optr)PSend23179, SMB_ifFalse_, 1, (Optr)PBlock23181);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend23190 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend23191 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend23190, (Optr)VAR_request_0_0);
    Array PThreadedCode23189 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23190, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend23191, (Optr)&t_block_return);
    Block PBlock23188 = new_Block_with(empty_Array, empty_Array, PThreadedCode23189, 1, PSend23191);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray23193 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend23195 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode23194 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend23195, (Optr)&t_method_return);
    Block PBlock23192 = new_Block_with(PArray23193, empty_Array, PThreadedCode23194, 1, PSend23195);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23196 = new_Send((Optr)PBlock23188, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock23192);
    Array PThreadedCode23100 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23101, (Optr)&t_push1, (Optr)string_23102, (Optr)&t_send1, (Optr)PSend23103, (Optr)&t_send_ifTrue_, (Optr)PSend23104, (Optr)PBlock23105, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23111, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23112, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend23113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_23114, (Optr)&t_send1, (Optr)PSend23115, (Optr)&t_send_ifFalse_, (Optr)PSend23116, (Optr)PBlock23117, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23122, (Optr)&t_send1, (Optr)PSend23149, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23150, (Optr)&t_push1, (Optr)string_23151, (Optr)&t_send1, (Optr)PSend23152, (Optr)&t_send_ifTrue_, (Optr)PSend23153, (Optr)PBlock23154, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23166, (Optr)&t_send1, (Optr)PSend23170, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23171, (Optr)&t_push1, (Optr)string_23172, (Optr)&t_send1, (Optr)PSend23173, (Optr)&t_push_closure, (Optr)PBlock23174, (Optr)&t_send1, (Optr)PSend23179, (Optr)&t_send_ifFalse_, (Optr)PSend23180, (Optr)PBlock23181, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23188, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock23192, (Optr)&t_send2, (Optr)PSend23196, (Optr)&t_method_return);
    Block PBlock23098 = new_Block_with(PArray23099, empty_Array, PThreadedCode23100, 9, PSend23104, PAssign23111, PAssign23112, PSend23116, PSend23149, PSend23153, PSend23170, PSend23180, PSend23196);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23197 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23098);
    Array PThreadedCode23097 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23098, (Optr)&t_send1, (Optr)PSend23197, (Optr)&t_method_return);
    Method PMethod23094 = new_Method_with(PArray23095, PArray23096, empty_Array, PThreadedCode23097, 1, PSend23197);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod23094, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Array PArray23199 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
    Send PSend23201 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode23200 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend23201, (Optr)&t_method_return);
    Method PMethod23198 = new_Method_with(PArray23199, empty_Array, empty_Array, PThreadedCode23200, 1, PSend23201);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod23198, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
    Array PArray23203 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23207 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode23206 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend23207, (Optr)&t_block_return);
    Block PBlock23205 = new_Block_with(empty_Array, empty_Array, PThreadedCode23206, 1, PSend23207);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23208 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23205);
    Array PThreadedCode23204 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23205, (Optr)&t_send1, (Optr)PSend23208, (Optr)&t_method_return);
    Method PMethod23202 = new_Method_with(PArray23203, empty_Array, empty_Array, PThreadedCode23204, 1, PSend23208);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod23202, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
    Array PThreadedCode23210 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod23209 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23210, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod23209, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
    Array PArray23212 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray23213 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_23221 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23221_Const = new_Constant((Optr)string_23221);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23222 = new_String(L"<h1>Internal Server Error: ");
    Constant string_23222_Const = new_Constant((Optr)string_23222);
    // ,. 
    Send PSend23220 = new_Send((Optr)string_23221_Const, SMB__append_, 1, (Optr)string_23222_Const);
    // ,. 
    Send PSend23219 = new_Send((Optr)PSend23220, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_23223 = new_String(L"</h1><pre>");
    Constant string_23223_Const = new_Constant((Optr)string_23223);
    // ,. 
    Send PSend23218 = new_Send((Optr)PSend23219, SMB__append_, 1, (Optr)string_23223_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23225 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23226 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23224 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23225, (Optr)PSend23226);
    // ,. 
    Send PSend23217 = new_Send((Optr)PSend23218, SMB__append_, 1, (Optr)PSend23224);
    String string_23227 = new_String(L"</pre></body></html>");
    Constant string_23227_Const = new_Constant((Optr)string_23227);
    // ,. 
    Send PSend23216 = new_Send((Optr)PSend23217, SMB__append_, 1, (Optr)string_23227_Const);
    Assign PAssign23215 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend23216);
    SmallInt int_500 = new_SmallInt(500);
    String string_23228 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23228_Const = new_Constant((Optr)string_23228);
    // sendResponseCode:content:type:close:. 
    Send PSend23229 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_23228_Const, (Optr)true_Const);
    Array PThreadedCode23214 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign23215, (Optr)&t_push1, (Optr)string_23221, (Optr)&t_push1, (Optr)string_23222, (Optr)&t_send1, (Optr)PSend23220, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend23219, (Optr)&t_push1, (Optr)string_23223, (Optr)&t_send1, (Optr)PSend23218, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23225, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23226, (Optr)&t_send2, (Optr)PSend23224, (Optr)&t_send1, (Optr)PSend23217, (Optr)&t_push1, (Optr)string_23227, (Optr)&t_send1, (Optr)PSend23216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_23228, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23229, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23211 = new_Method_with(PArray23212, PArray23213, empty_Array, PThreadedCode23214, 3, PAssign23215, PSend23229, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod23211, WebClient_Core_WebServer_Class);
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
    Send PSend23236 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend23235 = new_Send((Optr)PSend23236, SMB_serverString, 0);
    Assign PAssign23234 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend23235);
    Array PThreadedCode23233 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign23234, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23236, (Optr)&t_send0, (Optr)PSend23235, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23232 = new_Block_with(empty_Array, empty_Array, PThreadedCode23233, 1, PAssign23234);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23237 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock23232);
    Array PThreadedCode23231 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock23232, (Optr)&t_send1, (Optr)PSend23237, (Optr)&t_method_return);
    Method PMethod23230 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23231, 1, PSend23237);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23230, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23239 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend23243 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend23244 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend23243);
    Array PThreadedCode23242 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend23243, (Optr)&t_send1, (Optr)PSend23244, (Optr)&t_block_return);
    Block PBlock23241 = new_Block_with(empty_Array, empty_Array, PThreadedCode23242, 1, PSend23244);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23245 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock23241);
    Array PThreadedCode23240 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock23241, (Optr)&t_send1, (Optr)PSend23245, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23238 = new_Method_with(PArray23239, empty_Array, empty_Array, PThreadedCode23240, 2, PSend23245, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod23238, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23249 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend23251 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23252 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23250 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23251, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23252, (Optr)&t_method_return);
    Block PBlock23248 = new_Block_with(PArray23249, empty_Array, PThreadedCode23250, 2, PSend23251, PSend23252);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23253 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23254 = new_Send((Optr)PBlock23248, SMB_value_, 1, (Optr)PSend23253);
    Array PThreadedCode23247 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23248, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend23253, (Optr)&t_send1, (Optr)PSend23254, (Optr)&t_method_return);
    Method PMethod23246 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23247, 1, PSend23254);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod23246, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray23256 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign23258 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode23257 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23258, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23255 = new_Method_with(PArray23256, empty_Array, empty_Array, PThreadedCode23257, 2, PAssign23258, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod23255, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
    Array PThreadedCode23260 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod23259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23260, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod23259, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
    Array PThreadedCode23262 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod23261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23262, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod23261, WebClient_Core_WebServer_Class);
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
    Send PSend23265 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend23266 = new_Send((Optr)PSend23265, SMB_serverDate, 0);
    Array PThreadedCode23264 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23265, (Optr)&t_send0, (Optr)PSend23266, (Optr)&t_method_return);
    Method PMethod23263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23264, 1, PSend23266);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23263, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Array PArray23268 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend23270 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend23271 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend23270);
    Array PThreadedCode23269 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23270, (Optr)&t_send2, (Optr)PSend23271, (Optr)&t_method_return);
    Method PMethod23267 = new_Method_with(PArray23268, empty_Array, empty_Array, PThreadedCode23269, 1, PSend23271);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod23267, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
    Array PArray23273 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend23275 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend23276 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend23275);
    Array PThreadedCode23274 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend23275, (Optr)&t_send1, (Optr)PSend23276, (Optr)&t_method_return);
    Method PMethod23272 = new_Method_with(PArray23273, empty_Array, empty_Array, PThreadedCode23274, 1, PSend23276);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod23272, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
    Array PArray23278 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23281 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_23283 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23283_Const = new_Constant((Optr)string_23283);
    // nextPutAll:. 
    Send PSend23284 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_23283_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23285 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode23282 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_23283, (Optr)&t_send1, (Optr)PSend23284, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23285, (Optr)&t_method_return);
    Block PBlock23280 = new_Block_with(PArray23281, empty_Array, PThreadedCode23282, 2, PSend23284, PSend23285);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23286 = new_Send((Optr)PBlock23280, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode23279 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23280, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend23286, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23277 = new_Method_with(PArray23278, empty_Array, empty_Array, PThreadedCode23279, 2, PSend23286, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod23277, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
    Array PArray23288 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign23290 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode23289 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23290, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23287 = new_Method_with(PArray23288, empty_Array, empty_Array, PThreadedCode23289, 2, PAssign23290, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod23287, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23292 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode23297 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23296 = new_Block_with(empty_Array, empty_Array, PThreadedCode23297, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend23298 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23296);
    Array PThreadedCode23295 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23296, (Optr)&t_send2, (Optr)PSend23298, (Optr)&t_block_return);
    Block PBlock23294 = new_Block_with(empty_Array, empty_Array, PThreadedCode23295, 1, PSend23298);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23299 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23294);
    Array PThreadedCode23293 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23294, (Optr)&t_send1, (Optr)PSend23299, (Optr)&t_method_return);
    Method PMethod23291 = new_Method_with(PArray23292, empty_Array, empty_Array, PThreadedCode23293, 1, PSend23299);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod23291, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23301 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23303 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode23302 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23303, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23300 = new_Method_with(PArray23301, empty_Array, empty_Array, PThreadedCode23302, 2, PAssign23303, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod23300, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
    Array PArray23305 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23309 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend23310 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23311 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend23309, (Optr)PSend23310);
    Array PThreadedCode23308 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend23309, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend23310, (Optr)&t_send2, (Optr)PSend23311, (Optr)&t_block_return);
    Block PBlock23307 = new_Block_with(empty_Array, empty_Array, PThreadedCode23308, 1, PSend23311);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23312 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23307);
    Array PThreadedCode23306 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23307, (Optr)&t_send1, (Optr)PSend23312, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23304 = new_Method_with(PArray23305, empty_Array, empty_Array, PThreadedCode23306, 2, PSend23312, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod23304, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Array PArray23314 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23318 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode23320 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23319 = new_Block_with(empty_Array, empty_Array, PThreadedCode23320, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend23321 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend23318, (Optr)PBlock23319);
    Array PThreadedCode23317 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend23318, (Optr)&t_push_closure, (Optr)PBlock23319, (Optr)&t_send2, (Optr)PSend23321, (Optr)&t_block_return);
    Block PBlock23316 = new_Block_with(empty_Array, empty_Array, PThreadedCode23317, 1, PSend23321);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23322 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23316);
    Array PThreadedCode23315 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23316, (Optr)&t_send1, (Optr)PSend23322, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23313 = new_Method_with(PArray23314, empty_Array, empty_Array, PThreadedCode23315, 2, PSend23322, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod23313, WebClient_Core_WebServer_Class);
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_23325 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode23324 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23325, (Optr)&t_method_return);
    Constant string_23325_Const = new_Constant((Optr)string_23325);
    Method PMethod23323 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23324, 1, string_23325_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod23323, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23330 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign23331 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode23329 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend23330, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23331, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23328 = new_Block_with(empty_Array, empty_Array, PThreadedCode23329, 2, PSend23330, PAssign23331);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23332 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock23328);
    Array PThreadedCode23327 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23328, (Optr)&t_send1, (Optr)PSend23332, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23326 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23327, 2, PSend23332, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod23326, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
    Array PArray23334 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23337 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend23341 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend23340 = new_Send((Optr)PSend23341, SMB_asUTC, 0);
    Assign PAssign23339 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend23340);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend23342 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_23343 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23343_Const = new_Constant((Optr)string_23343);
    // ,. 
    Send PSend23344 = new_Send((Optr)PSend23342, SMB__append_, 1, (Optr)string_23343_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23345 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend23344);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend23346 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23348 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend23350 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend23351 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend23352 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4728 = new_Character(L' ');
    Constant char_4728_Const = new_Constant((Optr)char_4728);
    // add:. 
    Send PSend23353 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4728_Const);
    // add:. 
    Send PSend23354 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend23355 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend23356 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23357 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode23349 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23350, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23351, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend23352, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4728, (Optr)&t_send1, (Optr)PSend23353, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23354, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23356, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23357, (Optr)&t_method_return);
    Block PBlock23347 = new_Block_with(PArray23348, empty_Array, PThreadedCode23349, 8, PSend23350, PSend23351, PSend23352, PSend23353, PSend23354, PSend23355, PSend23356, PSend23357);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23358 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23359 = new_Send((Optr)PBlock23347, SMB_value_, 1, (Optr)PSend23358);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23360 = new_Send((Optr)PSend23359, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend23361 = new_Send((Optr)PSend23346, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend23360);
    Array PArray23363 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23365 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend23366 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend23367 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend23366);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend23368 = new_Send((Optr)PSend23367, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend23369 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23368);
    Array PThreadedCode23364 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23365, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23366, (Optr)&t_send1, (Optr)PSend23367, (Optr)&t_send0, (Optr)PSend23368, (Optr)&t_send1, (Optr)PSend23369, (Optr)&t_method_return);
    Block PBlock23362 = new_Block_with(PArray23363, empty_Array, PThreadedCode23364, 2, PSend23365, PSend23369);
    // value:. 
    Send PSend23370 = new_Send((Optr)PBlock23362, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_23371 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_23371_Const = new_Constant((Optr)string_23371);
    // writeAll:. 
    Send PSend23372 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_23371_Const);
    Array PThreadedCode23338 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23339, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend23341, (Optr)&t_send0, (Optr)PSend23340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23342, (Optr)&t_push1, (Optr)string_23343, (Optr)&t_send1, (Optr)PSend23344, (Optr)&t_send1, (Optr)PSend23345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23346, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock23347, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23358, (Optr)&t_send1, (Optr)PSend23359, (Optr)&t_send0, (Optr)PSend23360, (Optr)&t_send2, (Optr)PSend23361, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23362, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23370, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_23371, (Optr)&t_send1, (Optr)PSend23372, (Optr)&t_method_return);
    Block PBlock23336 = new_Block_with(PArray23337, empty_Array, PThreadedCode23338, 5, PAssign23339, PSend23345, PSend23361, PSend23370, PSend23372);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23373 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23336);
    Array PThreadedCode23335 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23336, (Optr)&t_send1, (Optr)PSend23373, (Optr)&t_method_return);
    Method PMethod23333 = new_Method_with(empty_Array, PArray23334, empty_Array, PThreadedCode23335, 1, PSend23373);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23333, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    String string_23376 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode23375 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23376, (Optr)&t_method_return);
    Constant string_23376_Const = new_Constant((Optr)string_23376);
    Method PMethod23374 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23375, 1, string_23376_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod23374, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
    String string_23379 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode23378 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23379, (Optr)&t_method_return);
    Constant string_23379_Const = new_Constant((Optr)string_23379);
    Method PMethod23377 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23378, 1, string_23379_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23377, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23385 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign23384 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend23385);
    Array PThreadedCode23383 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23384, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23385, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23382 = new_Block_with(empty_Array, empty_Array, PThreadedCode23383, 1, PAssign23384);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23386 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock23382);
    Array PThreadedCode23381 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23382, (Optr)&t_send1, (Optr)PSend23386, (Optr)&t_method_return);
    Method PMethod23380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23381, 1, PSend23386);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod23380, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
    Array PArray23388 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23391 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign23390 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend23391);
    // new. 
    Send PSend23393 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23392 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend23393);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend23394 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend23395 = new_Send((Optr)PSend23394, SMB_default, 0);
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
    Send PSend23396 = new_Send((Optr)PSend23395, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend23397 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_23398 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray23400 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend23402 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_23403 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23403_Const = new_Constant((Optr)string_23403);
    // send200Response:contentType:. 
    Send PSend23404 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend23402, (Optr)string_23403_Const);
    Array PThreadedCode23401 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23402, (Optr)&t_push1, (Optr)string_23403, (Optr)&t_send2, (Optr)PSend23404, (Optr)&t_method_return);
    Block PBlock23399 = new_Block_with(PArray23400, empty_Array, PThreadedCode23401, 1, PSend23404);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_23398_Const = new_Constant((Optr)string_23398);
    // addService:action:. 
    Send PSend23405 = new_Send((Optr)PSend23397, SMB_addService_action_, 2, (Optr)string_23398_Const, (Optr)PBlock23399);
    Array PThreadedCode23389 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23390, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend23391, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23392, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23393, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23394, (Optr)&t_send0, (Optr)PSend23395, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend23396, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23397, (Optr)&t_push1, (Optr)string_23398, (Optr)&t_push_closure, (Optr)PBlock23399, (Optr)&t_send2, (Optr)PSend23405, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23387 = new_Method_with(empty_Array, PArray23388, empty_Array, PThreadedCode23389, 5, PAssign23390, PAssign23392, PSend23396, PSend23405, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod23387, HEADER(WebClient_Core_WebServer_Class));
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