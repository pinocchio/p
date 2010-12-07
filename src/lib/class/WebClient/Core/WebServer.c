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
<<<<<<< HEAD
    Array PArray22603 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_handlerProcess_0_1 = new_Variable_named(L"handlerProcess", 0);
    Array PArray22604 = new_Array_with(1, (Optr)VAR_handlerProcess_0_1);
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    // handleConnectionFrom:. 
    Send PSend22614 = new_Send((Optr)self, SMB_handleConnectionFrom_, 1, (Optr)VAR_aSocket_0_0);
    Array PThreadedCode22613 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22614, (Optr)&t_block_return);
    Block PBlock22612 = new_Block_with(empty_Array, empty_Array, PThreadedCode22613, 1, PSend22614);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray22616 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22618 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22617 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22618, (Optr)&t_method_return);
    Block PBlock22615 = new_Block_with(PArray22616, empty_Array, PThreadedCode22617, 1, PSend22618);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22619 = new_Send((Optr)PBlock22612, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22615);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend22622 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Array PThreadedCode22624 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22623 = new_Block_with(empty_Array, empty_Array, PThreadedCode22624, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend22625 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_remove_ifAbsent_, 2, (Optr)PSend22622, (Optr)PBlock22623);
    Array PThreadedCode22621 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend22622, (Optr)&t_push_closure, (Optr)PBlock22623, (Optr)&t_send2, (Optr)PSend22625, (Optr)&t_block_return);
    Block PBlock22620 = new_Block_with(empty_Array, empty_Array, PThreadedCode22621, 1, PSend22625);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22626 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22620);
    Array PThreadedCode22611 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock22612, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22615, (Optr)&t_send2, (Optr)PSend22619, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22620, (Optr)&t_send1, (Optr)PSend22626, (Optr)&t_block_return);
    Block PBlock22610 = new_Block_with(empty_Array, empty_Array, PThreadedCode22611, 2, PSend22619, PSend22626);
    // destroy. 
    Send PSend22629 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Array PThreadedCode22628 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22629, (Optr)&t_block_return);
    Block PBlock22627 = new_Block_with(empty_Array, empty_Array, PThreadedCode22628, 1, PSend22629);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22630 = new_Send((Optr)PBlock22610, SMB_ensure_, 1, (Optr)PBlock22627);
    Array PThreadedCode22609 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22610, (Optr)&t_push_closure, (Optr)PBlock22627, (Optr)&t_send1, (Optr)PSend22630, (Optr)&t_block_return);
    Block PBlock22608 = new_Block_with(empty_Array, empty_Array, PThreadedCode22609, 1, PSend22630);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22607 = new_Send((Optr)PBlock22608, SMB_fork, 0);
    Assign PAssign22606 = new_Assign((Optr)VAR_handlerProcess_0_1, (Optr)PSend22607);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22633 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_add_, 1, (Optr)VAR_handlerProcess_0_1);
    Array PThreadedCode22632 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_variable, (Optr)VAR_handlerProcess_0_1, (Optr)&t_send1, (Optr)PSend22633, (Optr)&t_block_return);
    Block PBlock22631 = new_Block_with(empty_Array, empty_Array, PThreadedCode22632, 1, PSend22633);
    // critical:. 
    Send PSend22634 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22631);
    Array PThreadedCode22605 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign22606, (Optr)&t_push_closure, (Optr)PBlock22608, (Optr)&t_send0, (Optr)PSend22607, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22631, (Optr)&t_send1, (Optr)PSend22634, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22602 = new_Method_with(PArray22603, PArray22604, empty_Array, PThreadedCode22605, 3, PAssign22606, PSend22634, self);
    
    MethodClosure MC_SMB_asyncHandleConnectionFrom_ = new_MethodClosure((Method)PMethod22602, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_asyncHandleConnectionFrom_, MC_SMB_asyncHandleConnectionFrom_);
}


static void init_SMB_sessionAt_ifAbsentPut_() {
    Symbol SMB_sessionAt_ifAbsentPut_ = new_Symbol(L"sessionAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
<<<<<<< HEAD
    Array PArray22636 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode22641 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_block_return);
    Block PBlock22640 = new_Block_with(empty_Array, empty_Array, PThreadedCode22641, 1, VAR_session_0_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend22642 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22640);
    Array PThreadedCode22639 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22640, (Optr)&t_send2, (Optr)PSend22642, (Optr)&t_block_return);
    Block PBlock22638 = new_Block_with(empty_Array, empty_Array, PThreadedCode22639, 1, PSend22642);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22643 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22638);
    Array PThreadedCode22637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22638, (Optr)&t_send1, (Optr)PSend22643, (Optr)&t_method_return);
    Method PMethod22635 = new_Method_with(PArray22636, empty_Array, empty_Array, PThreadedCode22637, 1, PSend22643);
    
    MethodClosure MC_SMB_sessionAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod22635, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_ifAbsentPut_, MC_SMB_sessionAt_ifAbsentPut_);
}


static void init_SMB_accessLog() {
    Symbol SMB_accessLog = new_Symbol(L"accessLog");
<<<<<<< HEAD
    Array PThreadedCode22645 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22645, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22644, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22462 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_method_return);
    Method PMethod22461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22462, 1, slot_WebClient_Core_WebServer_accessLog);
    
    MethodClosure MC_SMB_accessLog = new_MethodClosure((Method)PMethod22461, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog, MC_SMB_accessLog);
}


static void init_SMB_builtinHttpMethods() {
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
<<<<<<< HEAD
    String string_22648 = new_String(L"HEAD");
    String string_22649 = new_String(L"TRACE");
    String string_22650 = new_String(L"OPTIONS");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant string_22648_Const = new_Constant((Optr)string_22648);
    Constant string_22649_Const = new_Constant((Optr)string_22649);
    Constant string_22650_Const = new_Constant((Optr)string_22650);
    // with:with:with:. 
    Send PSend22651 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)string_22648_Const, (Optr)string_22649_Const, (Optr)string_22650_Const);
    Array PThreadedCode22647 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22648, (Optr)&t_push1, (Optr)string_22649, (Optr)&t_push1, (Optr)string_22650, (Optr)&t_send3, (Optr)PSend22651, (Optr)&t_method_return);
    Method PMethod22646 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22647, 1, PSend22651);
    
    MethodClosure MC_SMB_builtinHttpMethods = new_MethodClosure((Method)PMethod22646, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_builtinHttpMethods, MC_SMB_builtinHttpMethods);
}


static void init_SMB_logRequest_response_() {
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_response_0_1 = new_Variable_named(L"response", 0);
<<<<<<< HEAD
    Array PArray22653 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_response_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22656 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22660 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22659 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22660, (Optr)&t_block_return);
    Block PBlock22658 = new_Block_with(empty_Array, empty_Array, PThreadedCode22659, 1, PSend22660);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22661 = new_Send((Optr)slot_WebClient_Core_WebServer_accessLog, SMB_ifNil_, 1, (Optr)PBlock22658);
    Array PThreadedCode22657 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)&t_push_closure, (Optr)PBlock22658, (Optr)&t_send1, (Optr)PSend22661, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22655 = new_Block_with(PArray22656, empty_Array, PThreadedCode22657, 2, PSend22661, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22662 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22655);
    Array PThreadedCode22654 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22655, (Optr)&t_send1, (Optr)PSend22662, (Optr)&t_method_return);
    Method PMethod22652 = new_Method_with(PArray22653, empty_Array, empty_Array, PThreadedCode22654, 1, PSend22662);
    
    MethodClosure MC_SMB_logRequest_response_ = new_MethodClosure((Method)PMethod22652, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_logRequest_response_, MC_SMB_logRequest_response_);
}


static void init_SMB_listenOn_() {
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
<<<<<<< HEAD
    Array PArray22664 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22666 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22665 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22666, (Optr)&t_method_return);
    Method PMethod22663 = new_Method_with(PArray22664, empty_Array, empty_Array, PThreadedCode22665, 1, PSend22666);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22663, WebClient_Core_WebServer_Class);
=======
    Array PArray22481 = new_Array_with(1, (Optr)VAR_aPort_0_0);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22483 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)VAR_aPort_0_0, (Optr)nil_Const);
    Array PThreadedCode22482 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend22483, (Optr)&t_method_return);
    Method PMethod22480 = new_Method_with(PArray22481, empty_Array, empty_Array, PThreadedCode22482, 1, PSend22483);
    
    MethodClosure MC_SMB_listenOn_ = new_MethodClosure((Method)PMethod22480, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_, MC_SMB_listenOn_);
}


static void init_SMB_listenerProcess() {
    Symbol SMB_listenerProcess = new_Symbol(L"listenerProcess");
<<<<<<< HEAD
    Array PThreadedCode22668 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22668, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22667, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22485 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_method_return);
    Method PMethod22484 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22485, 1, slot_WebClient_Core_WebServer_listenerProcess);
    
    MethodClosure MC_SMB_listenerProcess = new_MethodClosure((Method)PMethod22484, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_listenerProcess, MC_SMB_listenerProcess);
}


static void init_SMB_reportBadRequestOn_() {
    Symbol SMB_reportBadRequestOn_ = new_Symbol(L"reportBadRequestOn:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
<<<<<<< HEAD
    Array PArray22670 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray22671 = new_Array_with(1, (Optr)VAR_message_0_1);
    String string_22675 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_22675_Const = new_Constant((Optr)string_22675);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22676 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_22676_Const = new_Constant((Optr)string_22676);
    // ,. 
    Send PSend22674 = new_Send((Optr)string_22675_Const, SMB__append_, 1, (Optr)string_22676_Const);
    Assign PAssign22673 = new_Assign((Optr)VAR_message_0_1, (Optr)PSend22674);
    String string_22679 = new_String(L"HTTP/1.0 400 Bad Request");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend22680 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    Constant string_22679_Const = new_Constant((Optr)string_22679);
    // ,. 
    Send PSend22681 = new_Send((Optr)string_22679_Const, SMB__append_, 1, (Optr)PSend22680);
    String string_22682 = new_String(L"Content-Type:\ttext/html; charset=utf-8");
    Constant string_22682_Const = new_Constant((Optr)string_22682);
    // ,. 
    Send PSend22683 = new_Send((Optr)PSend22681, SMB__append_, 1, (Optr)string_22682_Const);
    // crlf. 
    Send PSend22684 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22685 = new_Send((Optr)PSend22683, SMB__append_, 1, (Optr)PSend22684);
    String string_22686 = new_String(L"Connection: close");
    Constant string_22686_Const = new_Constant((Optr)string_22686);
    // ,. 
    Send PSend22687 = new_Send((Optr)PSend22685, SMB__append_, 1, (Optr)string_22686_Const);
    // crlf. 
    Send PSend22688 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22689 = new_Send((Optr)PSend22687, SMB__append_, 1, (Optr)PSend22688);
    String string_22690 = new_String(L"Content-Length: ");
    Constant string_22690_Const = new_Constant((Optr)string_22690);
    // ,. 
    Send PSend22691 = new_Send((Optr)PSend22689, SMB__append_, 1, (Optr)string_22690_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22692 = new_Send((Optr)VAR_message_0_1, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22693 = new_Send((Optr)PSend22692, SMB_asString, 0);
    // ,. 
    Send PSend22694 = new_Send((Optr)PSend22691, SMB__append_, 1, (Optr)PSend22693);
    // crlf. 
    Send PSend22695 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22696 = new_Send((Optr)PSend22694, SMB__append_, 1, (Optr)PSend22695);
    // crlf. 
    Send PSend22697 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // ,. 
    Send PSend22698 = new_Send((Optr)PSend22696, SMB__append_, 1, (Optr)PSend22697);
    // ,. 
    Send PSend22699 = new_Send((Optr)PSend22698, SMB__append_, 1, (Optr)VAR_message_0_1);
    Symbol SMB_sendData_ = new_Symbol(L"sendData:");
    // sendData:. 
    Send PSend22700 = new_Send((Optr)VAR_aSocket_0_0, SMB_sendData_, 1, (Optr)PSend22699);
    Array PThreadedCode22678 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_push1, (Optr)string_22679, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22680, (Optr)&t_send1, (Optr)PSend22681, (Optr)&t_push1, (Optr)string_22682, (Optr)&t_send1, (Optr)PSend22683, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22684, (Optr)&t_send1, (Optr)PSend22685, (Optr)&t_push1, (Optr)string_22686, (Optr)&t_send1, (Optr)PSend22687, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22688, (Optr)&t_send1, (Optr)PSend22689, (Optr)&t_push1, (Optr)string_22690, (Optr)&t_send1, (Optr)PSend22691, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send0, (Optr)PSend22692, (Optr)&t_send0, (Optr)PSend22693, (Optr)&t_send1, (Optr)PSend22694, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22695, (Optr)&t_send1, (Optr)PSend22696, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22697, (Optr)&t_send1, (Optr)PSend22698, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_send1, (Optr)PSend22699, (Optr)&t_send1, (Optr)PSend22700, (Optr)&t_block_return);
    Block PBlock22677 = new_Block_with(empty_Array, empty_Array, PThreadedCode22678, 1, PSend22700);
    Array PThreadedCode22702 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22701 = new_Block_with(empty_Array, empty_Array, PThreadedCode22702, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22703 = new_Send((Optr)PBlock22677, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22701);
    Array PThreadedCode22672 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign22673, (Optr)&t_push1, (Optr)string_22675, (Optr)&t_push1, (Optr)string_22676, (Optr)&t_send1, (Optr)PSend22674, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22677, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22701, (Optr)&t_send2, (Optr)PSend22703, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22669 = new_Method_with(PArray22670, PArray22671, empty_Array, PThreadedCode22672, 3, PAssign22673, PSend22703, self);
    
    MethodClosure MC_SMB_reportBadRequestOn_ = new_MethodClosure((Method)PMethod22669, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_reportBadRequestOn_, MC_SMB_reportBadRequestOn_);
}


static void init_SMB_serverString_() {
    Symbol SMB_serverString_ = new_Symbol(L"serverString:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray22705 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22707 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22706 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22707, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22704 = new_Method_with(PArray22705, empty_Array, empty_Array, PThreadedCode22706, 1, PAssign22707);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22704, WebClient_Core_WebServer_Class);
=======
    Array PArray22522 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22524 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)VAR_aString_0_0);
    Array PThreadedCode22523 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign22524, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod22521 = new_Method_with(PArray22522, empty_Array, empty_Array, PThreadedCode22523, 1, PAssign22524);
    
    MethodClosure MC_SMB_serverString_ = new_MethodClosure((Method)PMethod22521, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_serverString_, MC_SMB_serverString_);
}


static void init_SMB_logAction() {
    Symbol SMB_logAction = new_Symbol(L"logAction");
<<<<<<< HEAD
    Array PThreadedCode22709 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22709, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22708, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22526 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_method_return);
    Method PMethod22525 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22526, 1, slot_WebClient_Core_WebServer_logAction);
    
    MethodClosure MC_SMB_logAction = new_MethodClosure((Method)PMethod22525, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_logAction, MC_SMB_logAction);
}


static void init_SMB_startListener() {
    Symbol SMB_startListener = new_Symbol(L"startListener");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
<<<<<<< HEAD
    Send PSend22712 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_runListener = new_Symbol(L"runListener");
    // runListener. 
    Send PSend22717 = new_Send((Optr)self, SMB_runListener, 0);
    Array PThreadedCode22716 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22717, (Optr)&t_block_return);
    Block PBlock22715 = new_Block_with(empty_Array, empty_Array, PThreadedCode22716, 1, PSend22717);
    Symbol SMB_fork = new_Symbol(L"fork");
    // fork. 
    Send PSend22714 = new_Send((Optr)PBlock22715, SMB_fork, 0);
    Assign PAssign22713 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)PSend22714);
    Array PThreadedCode22711 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22712, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22713, (Optr)&t_push_closure, (Optr)PBlock22715, (Optr)&t_send0, (Optr)PSend22714, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22711, 3, PSend22712, PAssign22713, self);
    
    MethodClosure MC_SMB_startListener = new_MethodClosure((Method)PMethod22710, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_startListener, MC_SMB_startListener);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
<<<<<<< HEAD
    Send PSend22721 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign22720 = new_Assign((Optr)slot_WebClient_Core_WebServer_mutex, (Optr)PSend22721);
    // new. 
    Send PSend22723 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22722 = new_Assign((Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)PSend22723);
    // new. 
    Send PSend22725 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign22724 = new_Assign((Optr)slot_WebClient_Core_WebServer_connections, (Optr)PSend22725);
    // new. 
    Send PSend22727 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22726 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)PSend22727);
    // new. 
    Send PSend22729 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22728 = new_Assign((Optr)slot_WebClient_Core_WebServer_nonceCache, (Optr)PSend22729);
    // new. 
    Send PSend22731 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign22730 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)PSend22731);
    Variable VAR_aString_1_0 = new_Variable_named(L"aString", 1);
    Array PArray22733 = new_Array_with(1, (Optr)VAR_aString_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22736 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend22738 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend22739 = new_Send((Optr)VAR__receiver__2_0, SMB_writeAll_, 1, (Optr)VAR_aString_1_0);
    Array PThreadedCode22737 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22738, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aString_1_0, (Optr)&t_send1, (Optr)PSend22739, (Optr)&t_method_return);
    Block PBlock22735 = new_Block_with(PArray22736, empty_Array, PThreadedCode22737, 2, PSend22738, PSend22739);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend22740 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22741 = new_Send((Optr)PBlock22735, SMB_value_, 1, (Optr)PSend22740);
    Array PThreadedCode22734 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22735, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend22740, (Optr)&t_send1, (Optr)PSend22741, (Optr)&t_method_return);
    Block PBlock22732 = new_Block_with(PArray22733, empty_Array, PThreadedCode22734, 1, PSend22741);
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    // logAction:. 
    Send PSend22742 = new_Send((Optr)self, SMB_logAction_, 1, (Optr)PBlock22732);
    Array PThreadedCode22719 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign22720, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend22721, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22722, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22723, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22724, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend22725, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22726, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22727, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22728, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22729, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22730, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend22731, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22732, (Optr)&t_send1, (Optr)PSend22742, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22719, 8, PAssign22720, PAssign22722, PAssign22724, PAssign22726, PAssign22728, PAssign22730, PSend22742, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod22718, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_errorHandler_() {
    Symbol SMB_errorHandler_ = new_Symbol(L"errorHandler:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray22744 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22746 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22745 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22746, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22743 = new_Method_with(PArray22744, empty_Array, empty_Array, PThreadedCode22745, 2, PAssign22746, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22743, WebClient_Core_WebServer_Class);
=======
    Array PArray22561 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22563 = new_Assign((Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22562 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22563, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22560 = new_Method_with(PArray22561, empty_Array, empty_Array, PThreadedCode22562, 2, PAssign22563, self);
    
    MethodClosure MC_SMB_errorHandler_ = new_MethodClosure((Method)PMethod22560, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler_, MC_SMB_errorHandler_);
}


static void init_SMB_handleConnectionFrom_() {
    Symbol SMB_handleConnectionFrom_ = new_Symbol(L"handleConnectionFrom:");
    Variable VAR_aSocket_0_0 = new_Variable_named(L"aSocket", 0);
<<<<<<< HEAD
    Array PArray22748 = new_Array_with(1, (Optr)VAR_aSocket_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Variable VAR_request_0_2 = new_Variable_named(L"request", 0);
    Array PArray22749 = new_Array_with(2, (Optr)VAR_stream_0_1, (Optr)VAR_request_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22752 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22759 = new_Send((Optr)PSocketStream_classReference, SMB_on_, 1, (Optr)VAR_aSocket_0_0);
    Assign PAssign22758 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend22759);
    Array PThreadedCode22757 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22758, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send1, (Optr)PSend22759, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22756 = new_Block_with(empty_Array, empty_Array, PThreadedCode22757, 1, PAssign22758);
    String string_22762 = new_String(L"No support for SSL in Pinocchio");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22762_Const = new_Constant((Optr)string_22762);
    // error:. 
    Send PSend22763 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22762_Const);
    Array PThreadedCode22761 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22762, (Optr)&t_send1, (Optr)PSend22763, (Optr)&t_block_return);
    Block PBlock22760 = new_Block_with(empty_Array, empty_Array, PThreadedCode22761, 1, PSend22763);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend22764 = new_Send((Optr)slot_WebClient_Core_WebServer_certName, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22756, (Optr)PBlock22760);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22767 = new_Send((Optr)VAR_aSocket_0_0, SMB_isConnected, 0);
    Array PThreadedCode22766 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22767, (Optr)&t_block_return);
    Block PBlock22765 = new_Block_with(empty_Array, empty_Array, PThreadedCode22766, 1, PSend22767);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend22770 = new_Send((Optr)VAR_stream_0_1, SMB_peek, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22773 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22774 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22773);
    Array PThreadedCode22772 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22773, (Optr)&t_send1, (Optr)PSend22774, (Optr)&t_block_return);
    Block PBlock22771 = new_Block_with(empty_Array, empty_Array, PThreadedCode22772, 1, PSend22774);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22775 = new_Send((Optr)PSend22770, SMB_ifNil_, 1, (Optr)PBlock22771);
    String string_22776 = new_String(L"WebServer>>handleConnectionFrom:: peek successful");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_22776_Const = new_Constant((Optr)string_22776);
    // warn:. 
    Send PSend22777 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22776_Const);
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    // newRequest. 
    Send PSend22779 = new_Send((Optr)self, SMB_newRequest, 0);
    Assign PAssign22778 = new_Assign((Optr)VAR_request_0_2, (Optr)PSend22779);
    String string_22780 = new_String(L"WebServer>>handleConnectionFrom:: request created");
    Constant string_22780_Const = new_Constant((Optr)string_22780);
    // warn:. 
    Send PSend22781 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22780_Const);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22784 = new_Send((Optr)VAR_request_0_2, SMB_readFrom_, 1, (Optr)VAR_stream_0_1);
    Array PThreadedCode22783 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend22784, (Optr)&t_block_return);
    Block PBlock22782 = new_Block_with(empty_Array, empty_Array, PThreadedCode22783, 1, PSend22784);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22786 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // destroy. 
    Send PSend22788 = new_Send((Optr)VAR_aSocket_0_0, SMB_destroy, 0);
    // escape:. 
    Send PSend22789 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22788);
    Array PThreadedCode22787 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSocket_0_0, (Optr)&t_send0, (Optr)PSend22788, (Optr)&t_send1, (Optr)PSend22789, (Optr)&t_method_return);
    Block PBlock22785 = new_Block_with(PArray22786, empty_Array, PThreadedCode22787, 1, PSend22789);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22790 = new_Send((Optr)PBlock22782, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22785);
    String string_22791 = new_String(L"WebServer>>handleConnectionFrom:: request read in successfully");
    Constant string_22791_Const = new_Constant((Optr)string_22791);
    // warn:. 
    Send PSend22792 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_22791_Const);
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    // dispatchRequest:. 
    Send PSend22793 = new_Send((Optr)self, SMB_dispatchRequest_, 1, (Optr)VAR_request_0_2);
    Array PThreadedCode22769 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend22770, (Optr)&t_push_closure, (Optr)PBlock22771, (Optr)&t_send1, (Optr)PSend22775, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22776, (Optr)&t_send1, (Optr)PSend22777, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22778, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22780, (Optr)&t_send1, (Optr)PSend22781, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22782, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22785, (Optr)&t_send2, (Optr)PSend22790, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22791, (Optr)&t_send1, (Optr)PSend22792, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_2, (Optr)&t_send1, (Optr)PSend22793, (Optr)&t_block_return);
    Block PBlock22768 = new_Block_with(empty_Array, empty_Array, PThreadedCode22769, 7, PSend22775, PSend22777, PAssign22778, PSend22781, PSend22790, PSend22792, PSend22793);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22794 = new_Send((Optr)PBlock22765, SMB_whileTrue_, 1, (Optr)PBlock22768);
    Array PThreadedCode22755 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_push_closure, (Optr)PBlock22756, (Optr)&t_push_closure, (Optr)PBlock22760, (Optr)&t_send2, (Optr)PSend22764, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22765, (Optr)&t_push_closure, (Optr)PBlock22768, (Optr)&t_send1, (Optr)PSend22794, (Optr)&t_block_return);
    Block PBlock22754 = new_Block_with(empty_Array, empty_Array, PThreadedCode22755, 2, PSend22764, PSend22794);
    Array PArray22796 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22798 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22797 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22798, (Optr)&t_method_return);
    Block PBlock22795 = new_Block_with(PArray22796, empty_Array, PThreadedCode22797, 1, PSend22798);
    // on:do:. 
    Send PSend22799 = new_Send((Optr)PBlock22754, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22795);
    Array PThreadedCode22753 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22754, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22795, (Optr)&t_send2, (Optr)PSend22799, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22751 = new_Block_with(PArray22752, empty_Array, PThreadedCode22753, 2, PSend22799, self);
    // on:. 
    Send PSend22800 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22751);
    Array PThreadedCode22750 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22751, (Optr)&t_send1, (Optr)PSend22800, (Optr)&t_method_return);
    Method PMethod22747 = new_Method_with(PArray22748, PArray22749, empty_Array, PThreadedCode22750, 1, PSend22800);
    
    MethodClosure MC_SMB_handleConnectionFrom_ = new_MethodClosure((Method)PMethod22747, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_handleConnectionFrom_, MC_SMB_handleConnectionFrom_);
}


static void init_SMB_connections() {
    Symbol SMB_connections = new_Symbol(L"connections");
<<<<<<< HEAD
    Array PThreadedCode22802 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22802, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22801, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22619 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_method_return);
    Method PMethod22618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22619, 1, slot_WebClient_Core_WebServer_connections);
    
    MethodClosure MC_SMB_connections = new_MethodClosure((Method)PMethod22618, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_connections, MC_SMB_connections);
}


static void init_SMB_vault() {
    Symbol SMB_vault = new_Symbol(L"vault");
<<<<<<< HEAD
    Array PThreadedCode22804 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22804, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22803, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22621 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_vault, (Optr)&t_method_return);
    Method PMethod22620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22621, 1, slot_WebClient_Core_WebServer_vault);
    
    MethodClosure MC_SMB_vault = new_MethodClosure((Method)PMethod22620, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_vault, MC_SMB_vault);
}


static void init_SMB_sessions_() {
    Symbol SMB_sessions_ = new_Symbol(L"sessions:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
<<<<<<< HEAD
    Array PArray22806 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22808 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22807 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22808, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22805 = new_Method_with(PArray22806, empty_Array, empty_Array, PThreadedCode22807, 2, PAssign22808, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22805, WebClient_Core_WebServer_Class);
=======
    Array PArray22623 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign22625 = new_Assign((Optr)slot_WebClient_Core_WebServer_sessions, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode22624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22625, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22622 = new_Method_with(PArray22623, empty_Array, empty_Array, PThreadedCode22624, 2, PAssign22625, self);
    
    MethodClosure MC_SMB_sessions_ = new_MethodClosure((Method)PMethod22622, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_sessions_, MC_SMB_sessions_);
}


static void init_SMB_isStopped() {
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
<<<<<<< HEAD
    Send PSend22811 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22810 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22811, (Optr)&t_method_return);
    Method PMethod22809 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22810, 1, PSend22811);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22809, WebClient_Core_WebServer_Class);
=======
    Send PSend22628 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22627 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22628, (Optr)&t_method_return);
    Method PMethod22626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22627, 1, PSend22628);
    
    MethodClosure MC_SMB_isStopped = new_MethodClosure((Method)PMethod22626, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_isStopped, MC_SMB_isStopped);
}


static void init_SMB_runListener() {
    Symbol SMB_runListener = new_Symbol(L"runListener");
    Variable VAR_connectionSocket_0_0 = new_Variable_named(L"connectionSocket", 0);
<<<<<<< HEAD
    Array PArray22813 = new_Array_with(1, (Optr)VAR_connectionSocket_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22816 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    // isNotNil. 
    Send PSend22824 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isNotNil, 0);
    Symbol SMB_isValid = new_Symbol(L"isValid");
    // isValid. 
    Send PSend22827 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Array PThreadedCode22826 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22827, (Optr)&t_block_return);
    Block PBlock22825 = new_Block_with(empty_Array, empty_Array, PThreadedCode22826, 1, PSend22827);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22828 = new_Send((Optr)PSend22824, SMB_and_, 1, (Optr)PBlock22825);
    Array PThreadedCode22823 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22824, (Optr)&t_push_closure, (Optr)PBlock22825, (Optr)&t_send1, (Optr)PSend22828, (Optr)&t_block_return);
    Block PBlock22822 = new_Block_with(empty_Array, empty_Array, PThreadedCode22823, 1, PSend22828);
    Symbol SMB_accept = new_Symbol(L"accept");
    // accept. 
    Send PSend22832 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_accept, 0);
    Assign PAssign22831 = new_Assign((Optr)VAR_connectionSocket_0_0, (Optr)PSend22832);
    Symbol SMB_asyncHandleConnectionFrom_ = new_Symbol(L"asyncHandleConnectionFrom:");
    // asyncHandleConnectionFrom:. 
    Send PSend22835 = new_Send((Optr)self, SMB_asyncHandleConnectionFrom_, 1, (Optr)VAR_connectionSocket_0_0);
    Array PThreadedCode22834 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_send1, (Optr)PSend22835, (Optr)&t_block_return);
    Block PBlock22833 = new_Block_with(empty_Array, empty_Array, PThreadedCode22834, 1, PSend22835);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22836 = new_Send((Optr)VAR_connectionSocket_0_0, SMB_ifNotNil_, 1, (Optr)PBlock22833);
    Array PThreadedCode22830 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign22831, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22832, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_connectionSocket_0_0, (Optr)&t_push_closure, (Optr)PBlock22833, (Optr)&t_send1, (Optr)PSend22836, (Optr)&t_block_return);
    Block PBlock22829 = new_Block_with(empty_Array, empty_Array, PThreadedCode22830, 2, PAssign22831, PSend22836);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22837 = new_Send((Optr)PBlock22822, SMB_whileTrue_, 1, (Optr)PBlock22829);
    Array PThreadedCode22821 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22822, (Optr)&t_push_closure, (Optr)PBlock22829, (Optr)&t_send1, (Optr)PSend22837, (Optr)&t_block_return);
    Block PBlock22820 = new_Block_with(empty_Array, empty_Array, PThreadedCode22821, 1, PSend22837);
    String string_22840 = new_String(L"listener terminating, socket: ");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray22842 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_statusString = new_Symbol(L"statusString");
    // statusString. 
    Send PSend22844 = new_Send((Optr)VAR_s_2_0, SMB_statusString, 0);
    Array PThreadedCode22843 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_send0, (Optr)PSend22844, (Optr)&t_method_return);
    Block PBlock22841 = new_Block_with(PArray22842, empty_Array, PThreadedCode22843, 1, PSend22844);
    // ifNotNil:. 
    Send PSend22845 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22841);
    Constant string_22840_Const = new_Constant((Optr)string_22840);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22846 = new_Send((Optr)string_22840_Const, SMB__append_, 1, (Optr)PSend22845);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22847 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22846);
    Symbol SMB_notNil = new_Symbol(L"notNil");
    // notNil. 
    Send PSend22848 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_notNil, 0);
    // isValid. 
    Send PSend22851 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_isValid, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22852 = new_Send((Optr)PSend22851, SMB_not, 0);
    Array PThreadedCode22850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22851, (Optr)&t_send0, (Optr)PSend22852, (Optr)&t_block_return);
    Block PBlock22849 = new_Block_with(empty_Array, empty_Array, PThreadedCode22850, 1, PSend22852);
    // and:. 
    Send PSend22853 = new_Send((Optr)PSend22848, SMB_and_, 1, (Optr)PBlock22849);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22857 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Assign PAssign22858 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    // listenOn:interface:. 
    Send PSend22859 = new_Send((Optr)self, SMB_listenOn_interface_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)slot_WebClient_Core_WebServer_interface);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22860 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22859);
    Array PThreadedCode22856 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22857, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22858, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send2, (Optr)PSend22859, (Optr)&t_send1, (Optr)PSend22860, (Optr)&t_block_return);
    Block PBlock22855 = new_Block_with(empty_Array, empty_Array, PThreadedCode22856, 3, PSend22857, PAssign22858, PSend22860);
    // ifTrue:. 
    Send PSend22854 = new_Send((Optr)PSend22853, SMB_ifTrue_, 1, (Optr)PBlock22855);
    Array PThreadedCode22839 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22840, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22841, (Optr)&t_send1, (Optr)PSend22845, (Optr)&t_send1, (Optr)PSend22846, (Optr)&t_send1, (Optr)PSend22847, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22848, (Optr)&t_push_closure, (Optr)PBlock22849, (Optr)&t_send1, (Optr)PSend22853, (Optr)&t_send_ifTrue_, (Optr)PSend22854, (Optr)PBlock22855, (Optr)&t_block_return);
    Block PBlock22838 = new_Block_with(empty_Array, empty_Array, PThreadedCode22839, 2, PSend22847, PSend22854);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22861 = new_Send((Optr)PBlock22820, SMB_ensure_, 1, (Optr)PBlock22838);
    Array PThreadedCode22819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22820, (Optr)&t_push_closure, (Optr)PBlock22838, (Optr)&t_send1, (Optr)PSend22861, (Optr)&t_block_return);
    Block PBlock22818 = new_Block_with(empty_Array, empty_Array, PThreadedCode22819, 1, PSend22861);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22863 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22865 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22864 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22865, (Optr)&t_method_return);
    Block PBlock22862 = new_Block_with(PArray22863, empty_Array, PThreadedCode22864, 1, PSend22865);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22866 = new_Send((Optr)PBlock22818, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22862);
    Array PThreadedCode22817 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock22818, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22862, (Optr)&t_send2, (Optr)PSend22866, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22815 = new_Block_with(PArray22816, empty_Array, PThreadedCode22817, 2, PSend22866, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22867 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22815);
    Array PThreadedCode22814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22815, (Optr)&t_send1, (Optr)PSend22867, (Optr)&t_method_return);
    Method PMethod22812 = new_Method_with(empty_Array, PArray22813, empty_Array, PThreadedCode22814, 1, PSend22867);
    
    MethodClosure MC_SMB_runListener = new_MethodClosure((Method)PMethod22812, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_runListener, MC_SMB_runListener);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    // stopListener. 
<<<<<<< HEAD
    Send PSend22870 = new_Send((Optr)self, SMB_stopListener, 0);
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    // destroyConnections. 
    Send PSend22871 = new_Send((Optr)self, SMB_destroyConnections, 0);
    // destroy. 
    Send PSend22874 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_destroy, 0);
    Array PThreadedCode22873 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_send0, (Optr)PSend22874, (Optr)&t_block_return);
    Block PBlock22872 = new_Block_with(empty_Array, empty_Array, PThreadedCode22873, 1, PSend22874);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22875 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_ifNotNil_, 1, (Optr)PBlock22872);
    Array PThreadedCode22869 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22870, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22871, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_closure, (Optr)PBlock22872, (Optr)&t_send1, (Optr)PSend22875, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22869, 4, PSend22870, PSend22871, PSend22875, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22868, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray22877 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22879 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22879, (Optr)&t_method_return);
    Method PMethod22876 = new_Method_with(PArray22877, empty_Array, empty_Array, PThreadedCode22878, 1, PSend22879);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22876, WebClient_Core_WebServer_Class);
=======
    Array PArray22694 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // critical:. 
    Send PSend22696 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22695 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22696, (Optr)&t_method_return);
    Method PMethod22693 = new_Method_with(PArray22694, empty_Array, empty_Array, PThreadedCode22695, 1, PSend22696);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod22693, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_destroyConnections() {
    Symbol SMB_destroyConnections = new_Symbol(L"destroyConnections");
    Variable VAR_p_1_0 = new_Variable_named(L"p", 1);
<<<<<<< HEAD
    Array PArray22885 = new_Array_with(1, (Optr)VAR_p_1_0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend22887 = new_Send((Optr)VAR_p_1_0, SMB_terminate, 0);
    Array PThreadedCode22886 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_p_1_0, (Optr)&t_send0, (Optr)PSend22887, (Optr)&t_method_return);
    Block PBlock22884 = new_Block_with(PArray22885, empty_Array, PThreadedCode22886, 1, PSend22887);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22888 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_do_, 1, (Optr)PBlock22884);
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend22889 = new_Send((Optr)slot_WebClient_Core_WebServer_connections, SMB_removeAll, 0);
    Array PThreadedCode22883 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_push_closure, (Optr)PBlock22884, (Optr)&t_send1, (Optr)PSend22888, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_connections, (Optr)&t_send0, (Optr)PSend22889, (Optr)&t_block_return);
    Block PBlock22882 = new_Block_with(empty_Array, empty_Array, PThreadedCode22883, 2, PSend22888, PSend22889);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend22890 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22882);
    Array PThreadedCode22881 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22882, (Optr)&t_send1, (Optr)PSend22890, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22881, 2, PSend22890, self);
    
    MethodClosure MC_SMB_destroyConnections = new_MethodClosure((Method)PMethod22880, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_destroyConnections, MC_SMB_destroyConnections);
}


static void init_SMB_defaultHttpMethods() {
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
<<<<<<< HEAD
    String string_22893 = new_String(L"GET");
    String string_22894 = new_String(L"POST");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_22893_Const = new_Constant((Optr)string_22893);
    Constant string_22894_Const = new_Constant((Optr)string_22894);
    // with:with:. 
    Send PSend22895 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_22893_Const, (Optr)string_22894_Const);
    Array PThreadedCode22892 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_22893, (Optr)&t_push1, (Optr)string_22894, (Optr)&t_send2, (Optr)PSend22895, (Optr)&t_method_return);
    Method PMethod22891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22892, 1, PSend22895);
    
    MethodClosure MC_SMB_defaultHttpMethods = new_MethodClosure((Method)PMethod22891, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_defaultHttpMethods, MC_SMB_defaultHttpMethods);
}


static void init_SMB_listenerInterface() {
    Symbol SMB_listenerInterface = new_Symbol(L"listenerInterface");
<<<<<<< HEAD
    Array PThreadedCode22897 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22897, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22896, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22714 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_method_return);
    Method PMethod22713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22714, 1, slot_WebClient_Core_WebServer_interface);
    
    MethodClosure MC_SMB_listenerInterface = new_MethodClosure((Method)PMethod22713, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_listenerInterface, MC_SMB_listenerInterface);
}


static void init_SMB_listenOn_interface_backlogSize_() {
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
    Variable VAR_backlog_0_2 = new_Variable_named(L"backlog", 0);
<<<<<<< HEAD
    Array PArray22899 = new_Array_with(3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)VAR_backlog_0_2);
    Variable VAR_ipString_0_3 = new_Variable_named(L"ipString", 0);
    Array PArray22900 = new_Array_with(1, (Optr)VAR_ipString_0_3);
    Assign PAssign22902 = new_Assign((Optr)slot_WebClient_Core_WebServer_interface, (Optr)VAR_anInterface_0_1);
    Assign PAssign22903 = new_Assign((Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_aPort_0_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    String string_22908 = new_String(L"*");
    Array PThreadedCode22907 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22908, (Optr)&t_block_return);
    Constant string_22908_Const = new_Constant((Optr)string_22908);
    Block PBlock22906 = new_Block_with(empty_Array, empty_Array, PThreadedCode22907, 1, string_22908_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22911 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_asString, 0);
    Array PThreadedCode22910 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send0, (Optr)PSend22911, (Optr)&t_block_return);
    Block PBlock22909 = new_Block_with(empty_Array, empty_Array, PThreadedCode22910, 1, PSend22911);
    // ifNil:ifNotNil:. 
    Send PSend22905 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22906, (Optr)PBlock22909);
    Assign PAssign22904 = new_Assign((Optr)VAR_ipString_0_3, (Optr)PSend22905);
    String string_22912 = new_String(L"Listener starting (interface: ");
    Constant string_22912_Const = new_Constant((Optr)string_22912);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22913 = new_Send((Optr)string_22912_Const, SMB__append_, 1, (Optr)VAR_ipString_0_3);
    String string_22914 = new_String(L" port: ");
    Constant string_22914_Const = new_Constant((Optr)string_22914);
    // ,. 
    Send PSend22915 = new_Send((Optr)PSend22913, SMB__append_, 1, (Optr)string_22914_Const);
    // ,. 
    Send PSend22916 = new_Send((Optr)PSend22915, SMB__append_, 1, (Optr)slot_WebClient_Core_WebServer_port);
    String string_22917 = new_String(L")");
    Constant string_22917_Const = new_Constant((Optr)string_22917);
    // ,. 
    Send PSend22918 = new_Send((Optr)PSend22916, SMB__append_, 1, (Optr)string_22917_Const);
    Symbol SMB_log_ = new_Symbol(L"log:");
    // log:. 
    Send PSend22919 = new_Send((Optr)self, SMB_log_, 1, (Optr)PSend22918);
    Symbol SMB_newTCP = new_Symbol(L"newTCP");
    // newTCP. 
    Send PSend22921 = new_Send((Optr)PSocket_classReference, SMB_newTCP, 0);
    Assign PAssign22920 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)PSend22921);
    Symbol SMB_listenOn_backlogSize_ = new_Symbol(L"listenOn:backlogSize:");
    // listenOn:backlogSize:. 
    Send PSend22924 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_, 2, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2);
    Array PThreadedCode22923 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_send2, (Optr)PSend22924, (Optr)&t_block_return);
    Block PBlock22922 = new_Block_with(empty_Array, empty_Array, PThreadedCode22923, 1, PSend22924);
    Symbol SMB_listenOn_backlogSize_interface_ = new_Symbol(L"listenOn:backlogSize:interface:");
    // listenOn:backlogSize:interface:. 
    Send PSend22927 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerSocket, SMB_listenOn_backlogSize_interface_, 3, (Optr)slot_WebClient_Core_WebServer_port, (Optr)VAR_backlog_0_2, (Optr)slot_WebClient_Core_WebServer_interface);
    Array PThreadedCode22926 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_push_variable, (Optr)VAR_backlog_0_2, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_send3, (Optr)PSend22927, (Optr)&t_block_return);
    Block PBlock22925 = new_Block_with(empty_Array, empty_Array, PThreadedCode22926, 1, PSend22927);
    // ifNil:ifNotNil:. 
    Send PSend22928 = new_Send((Optr)slot_WebClient_Core_WebServer_interface, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22922, (Optr)PBlock22925);
    Symbol SMB_startListener = new_Symbol(L"startListener");
    // startListener. 
    Send PSend22929 = new_Send((Optr)self, SMB_startListener, 0);
    Array PThreadedCode22901 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign22902, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22903, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22904, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22906, (Optr)&t_push_closure, (Optr)PBlock22909, (Optr)&t_send2, (Optr)PSend22905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22912, (Optr)&t_push_variable, (Optr)VAR_ipString_0_3, (Optr)&t_send1, (Optr)PSend22913, (Optr)&t_push1, (Optr)string_22914, (Optr)&t_send1, (Optr)PSend22915, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_send1, (Optr)PSend22916, (Optr)&t_push1, (Optr)string_22917, (Optr)&t_send1, (Optr)PSend22918, (Optr)&t_send1, (Optr)PSend22919, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22920, (Optr)&t_push_class_reference, (Optr)PSocket_classReference, (Optr)&t_send0, (Optr)PSend22921, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_interface, (Optr)&t_push_closure, (Optr)PBlock22922, (Optr)&t_push_closure, (Optr)PBlock22925, (Optr)&t_send2, (Optr)PSend22928, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22929, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22898 = new_Method_with(PArray22899, PArray22900, empty_Array, PThreadedCode22901, 8, PAssign22902, PAssign22903, PAssign22904, PSend22919, PAssign22920, PSend22928, PSend22929, self);
    
    MethodClosure MC_SMB_listenOn_interface_backlogSize_ = new_MethodClosure((Method)PMethod22898, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_backlogSize_, MC_SMB_listenOn_interface_backlogSize_);
}


static void init_SMB_sessions() {
    Symbol SMB_sessions = new_Symbol(L"sessions");
<<<<<<< HEAD
    Array PThreadedCode22931 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22930 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22931, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22930, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22748 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_method_return);
    Method PMethod22747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22748, 1, slot_WebClient_Core_WebServer_sessions);
    
    MethodClosure MC_SMB_sessions = new_MethodClosure((Method)PMethod22747, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_sessions, MC_SMB_sessions);
}


static void init_SMB_addService_action_() {
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
<<<<<<< HEAD
    Array PArray22933 = new_Array_with(2, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend22935 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    // addService:action:methods:. 
    Send PSend22936 = new_Send((Optr)self, SMB_addService_action_methods_, 3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)PSend22935);
    Array PThreadedCode22934 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22935, (Optr)&t_send3, (Optr)PSend22936, (Optr)&t_method_return);
    Method PMethod22932 = new_Method_with(PArray22933, empty_Array, empty_Array, PThreadedCode22934, 1, PSend22936);
    
    MethodClosure MC_SMB_addService_action_ = new_MethodClosure((Method)PMethod22932, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_, MC_SMB_addService_action_);
}


static void init_SMB_stopListener() {
    Symbol SMB_stopListener = new_Symbol(L"stopListener");
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
<<<<<<< HEAD
    Send PSend22941 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_terminate, 0);
    Array PThreadedCode22940 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_send0, (Optr)PSend22941, (Optr)&t_block_return);
    Block PBlock22939 = new_Block_with(empty_Array, empty_Array, PThreadedCode22940, 1, PSend22941);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22942 = new_Send((Optr)slot_WebClient_Core_WebServer_listenerProcess, SMB_ifNotNil_, 1, (Optr)PBlock22939);
    Assign PAssign22943 = new_Assign((Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)nil_Const);
    Array PThreadedCode22938 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerProcess, (Optr)&t_push_closure, (Optr)PBlock22939, (Optr)&t_send1, (Optr)PSend22942, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22943, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22937 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22938, 3, PSend22942, PAssign22943, self);
    
    MethodClosure MC_SMB_stopListener = new_MethodClosure((Method)PMethod22937, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_stopListener, MC_SMB_stopListener);
}


static void init_SMB_logAction_() {
    Symbol SMB_logAction_ = new_Symbol(L"logAction:");
    Variable VAR_aBlockOrMessage_0_0 = new_Variable_named(L"aBlockOrMessage", 0);
<<<<<<< HEAD
    Array PArray22945 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22947 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22946 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22947, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22944 = new_Method_with(PArray22945, empty_Array, empty_Array, PThreadedCode22946, 2, PAssign22947, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22944, WebClient_Core_WebServer_Class);
=======
    Array PArray22762 = new_Array_with(1, (Optr)VAR_aBlockOrMessage_0_0);
    Assign PAssign22764 = new_Assign((Optr)slot_WebClient_Core_WebServer_logAction, (Optr)VAR_aBlockOrMessage_0_0);
    Array PThreadedCode22763 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22764, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22761 = new_Method_with(PArray22762, empty_Array, empty_Array, PThreadedCode22763, 2, PAssign22764, self);
    
    MethodClosure MC_SMB_logAction_ = new_MethodClosure((Method)PMethod22761, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_logAction_, MC_SMB_logAction_);
}


static void init_SMB_isRunning() {
    Symbol SMB_isRunning = new_Symbol(L"isRunning");
    Symbol SMB_isStopped = new_Symbol(L"isStopped");
    // isStopped. 
<<<<<<< HEAD
    Send PSend22950 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22951 = new_Send((Optr)PSend22950, SMB_not, 0);
    Array PThreadedCode22949 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22950, (Optr)&t_send0, (Optr)PSend22951, (Optr)&t_method_return);
    Method PMethod22948 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22949, 1, PSend22951);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22948, WebClient_Core_WebServer_Class);
=======
    Send PSend22767 = new_Send((Optr)self, SMB_isStopped, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22768 = new_Send((Optr)PSend22767, SMB_not, 0);
    Array PThreadedCode22766 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22767, (Optr)&t_send0, (Optr)PSend22768, (Optr)&t_method_return);
    Method PMethod22765 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22766, 1, PSend22768);
    
    MethodClosure MC_SMB_isRunning = new_MethodClosure((Method)PMethod22765, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_isRunning, MC_SMB_isRunning);
}


static void init_SMB_listenerSocket() {
    Symbol SMB_listenerSocket = new_Symbol(L"listenerSocket");
<<<<<<< HEAD
    Array PThreadedCode22953 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22952 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22953, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22952, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22770 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_listenerSocket, (Optr)&t_method_return);
    Method PMethod22769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22770, 1, slot_WebClient_Core_WebServer_listenerSocket);
    
    MethodClosure MC_SMB_listenerSocket = new_MethodClosure((Method)PMethod22769, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_listenerSocket, MC_SMB_listenerSocket);
}


static void init_SMB_dispatchRequest_url_() {
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
    Variable VAR_dispatchUrl_0_1 = new_Variable_named(L"dispatchUrl", 0);
<<<<<<< HEAD
    Array PArray22955 = new_Array_with(2, (Optr)VAR_request_0_0, (Optr)VAR_dispatchUrl_0_1);
    Variable VAR_entryUrl_0_2 = new_Variable_named(L"entryUrl", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray22956 = new_Array_with(2, (Optr)VAR_entryUrl_0_2, (Optr)VAR_action_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22959 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend22961 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_22962 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22962_Const = new_Constant((Optr)string_22962);
    // =. 
    Send PSend22963 = new_Send((Optr)PSend22961, SMB__equals_, 1, (Optr)string_22962_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22967 = new_Send((Optr)VAR_request_0_0, SMB_asString, 0);
    String string_22968 = new_String(L"message/http");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_22968_Const = new_Constant((Optr)string_22968);
    // send200Response:contentType:. 
    Send PSend22969 = new_Send((Optr)VAR_request_0_0, SMB_send200Response_contentType_, 2, (Optr)PSend22967, (Optr)string_22968_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22970 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22969);
    Array PThreadedCode22966 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22967, (Optr)&t_push1, (Optr)string_22968, (Optr)&t_send2, (Optr)PSend22969, (Optr)&t_send1, (Optr)PSend22970, (Optr)&t_block_return);
    Block PBlock22965 = new_Block_with(empty_Array, empty_Array, PThreadedCode22966, 1, PSend22970);
    // ifTrue:. 
    Send PSend22964 = new_Send((Optr)PSend22963, SMB_ifTrue_, 1, (Optr)PBlock22965);
    Assign PAssign22971 = new_Assign((Optr)VAR_action_0_3, (Optr)nil_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22973 = new_Send((Optr)VAR_dispatchUrl_0_1, SMB_asLowercase, 0);
    Assign PAssign22972 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22973);
    String string_22974 = new_String(L"/");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_22974_Const = new_Constant((Optr)string_22974);
    // beginsWith:. 
    Send PSend22975 = new_Send((Optr)VAR_entryUrl_0_2, SMB_beginsWith_, 1, (Optr)string_22974_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_22981 = new_String(L"/");
    Constant string_22981_Const = new_Constant((Optr)string_22981);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22980 = new_Send((Optr)string_22981_Const, SMB__append_, 1, (Optr)VAR_entryUrl_0_2);
    Assign PAssign22979 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22980);
    Array PThreadedCode22978 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign22979, (Optr)&t_push1, (Optr)string_22981, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send1, (Optr)PSend22980, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22977 = new_Block_with(empty_Array, empty_Array, PThreadedCode22978, 1, PAssign22979);
    // ifFalse:. 
    Send PSend22976 = new_Send((Optr)PSend22975, SMB_ifFalse_, 1, (Optr)PBlock22977);
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    // notEmpty. 
    Send PSend22986 = new_Send((Optr)VAR_entryUrl_0_2, SMB_notEmpty, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22989 = new_Send((Optr)VAR_action_0_3, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode22988 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22989, (Optr)&t_block_return);
    Block PBlock22987 = new_Block_with(empty_Array, empty_Array, PThreadedCode22988, 1, PSend22989);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22990 = new_Send((Optr)PSend22986, SMB_and_, 1, (Optr)PBlock22987);
    Array PThreadedCode22985 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_send0, (Optr)PSend22986, (Optr)&t_push_closure, (Optr)PBlock22987, (Optr)&t_send1, (Optr)PSend22990, (Optr)&t_block_return);
    Block PBlock22984 = new_Block_with(empty_Array, empty_Array, PThreadedCode22985, 1, PSend22990);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Array PThreadedCode22996 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock22995 = new_Block_with(empty_Array, empty_Array, PThreadedCode22996, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend22994 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)VAR_entryUrl_0_2, (Optr)PBlock22995);
    Assign PAssign22993 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend22994);
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Character char_22999 = new_Character(L'/');
    Constant char_22999_Const = new_Constant((Optr)char_22999);
    // copyUpToLast:. 
    Send PSend22998 = new_Send((Optr)VAR_entryUrl_0_2, SMB_copyUpToLast_, 1, (Optr)char_22999_Const);
    Assign PAssign22997 = new_Assign((Optr)VAR_entryUrl_0_2, (Optr)PSend22998);
    Array PThreadedCode22992 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign22993, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push_closure, (Optr)PBlock22995, (Optr)&t_send2, (Optr)PSend22994, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22997, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)char_22999, (Optr)&t_send1, (Optr)PSend22998, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22991 = new_Block_with(empty_Array, empty_Array, PThreadedCode22992, 2, PAssign22993, PAssign22997);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23000 = new_Send((Optr)PBlock22984, SMB_whileTrue_, 1, (Optr)PBlock22991);
    String string_23005 = new_String(L"/");
    Constant string_23005_Const = new_Constant((Optr)string_23005);
    Array PThreadedCode23007 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23006 = new_Block_with(empty_Array, empty_Array, PThreadedCode23007, 1, nil_Const);
    // at:ifAbsent:. 
    Send PSend23004 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_ifAbsent_, 2, (Optr)string_23005_Const, (Optr)PBlock23006);
    Assign PAssign23003 = new_Assign((Optr)VAR_action_0_3, (Optr)PSend23004);
    Array PThreadedCode23002 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23003, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push1, (Optr)string_23005, (Optr)&t_push_closure, (Optr)PBlock23006, (Optr)&t_send2, (Optr)PSend23004, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23001 = new_Block_with(empty_Array, empty_Array, PThreadedCode23002, 1, PAssign23003);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23008 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock23001);
    Array PThreadedCode22983 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock22984, (Optr)&t_push_closure, (Optr)PBlock22991, (Optr)&t_send1, (Optr)PSend23000, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23001, (Optr)&t_send1, (Optr)PSend23008, (Optr)&t_block_return);
    Block PBlock22982 = new_Block_with(empty_Array, empty_Array, PThreadedCode22983, 2, PSend23000, PSend23008);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23009 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock22982);
    // method. 
    Send PSend23010 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23011 = new_String(L"OPTIONS");
    Constant string_23011_Const = new_Constant((Optr)string_23011);
    // =. 
    Send PSend23012 = new_Send((Optr)PSend23010, SMB__equals_, 1, (Optr)string_23011_Const);
    Symbol SMB_builtinHttpMethods = new_Symbol(L"builtinHttpMethods");
    // builtinHttpMethods. 
    Send PSend23016 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    Symbol SMB_defaultHttpMethods = new_Symbol(L"defaultHttpMethods");
    // defaultHttpMethods. 
    Send PSend23019 = new_Send((Optr)self, SMB_defaultHttpMethods, 0);
    Array PThreadedCode23018 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23019, (Optr)&t_block_return);
    Block PBlock23017 = new_Block_with(empty_Array, empty_Array, PThreadedCode23018, 1, PSend23019);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23022 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    Array PThreadedCode23021 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend23022, (Optr)&t_block_return);
    Block PBlock23020 = new_Block_with(empty_Array, empty_Array, PThreadedCode23021, 1, PSend23022);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23023 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23017, (Optr)PBlock23020);
    // ,. 
    Send PSend23024 = new_Send((Optr)PSend23016, SMB__append_, 1, (Optr)PSend23023);
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    // sendOptionsResponse:. 
    Send PSend23025 = new_Send((Optr)VAR_request_0_0, SMB_sendOptionsResponse_, 1, (Optr)PSend23024);
    Array PThreadedCode23015 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23016, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23017, (Optr)&t_push_closure, (Optr)PBlock23020, (Optr)&t_send2, (Optr)PSend23023, (Optr)&t_send1, (Optr)PSend23024, (Optr)&t_send1, (Optr)PSend23025, (Optr)&t_block_return);
    Block PBlock23014 = new_Block_with(empty_Array, empty_Array, PThreadedCode23015, 1, PSend23025);
    // ifTrue:. 
    Send PSend23013 = new_Send((Optr)PSend23012, SMB_ifTrue_, 1, (Optr)PBlock23014);
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    // send404Response. 
    Send PSend23028 = new_Send((Optr)VAR_request_0_0, SMB_send404Response, 0);
    // escape:. 
    Send PSend23029 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23028);
    Array PThreadedCode23027 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23028, (Optr)&t_send1, (Optr)PSend23029, (Optr)&t_block_return);
    Block PBlock23026 = new_Block_with(empty_Array, empty_Array, PThreadedCode23027, 1, PSend23029);
    // ifNil:. 
    Send PSend23030 = new_Send((Optr)VAR_action_0_3, SMB_ifNil_, 1, (Optr)PBlock23026);
    // method. 
    Send PSend23031 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    String string_23032 = new_String(L"HEAD");
    Constant string_23032_Const = new_Constant((Optr)string_23032);
    // =. 
    Send PSend23033 = new_Send((Optr)PSend23031, SMB__equals_, 1, (Optr)string_23032_Const);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
<<<<<<< HEAD
    Send PSend23036 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_1_Const);
    // method. 
    Send PSend23037 = new_Send((Optr)VAR_request_0_0, SMB_method, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend23038 = new_Send((Optr)PSend23036, SMB_includes_, 1, (Optr)PSend23037);
    Array PThreadedCode23035 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23036, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23037, (Optr)&t_send1, (Optr)PSend23038, (Optr)&t_block_return);
    Block PBlock23034 = new_Block_with(empty_Array, empty_Array, PThreadedCode23035, 1, PSend23038);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23039 = new_Send((Optr)PSend23033, SMB_or_, 1, (Optr)PBlock23034);
    // builtinHttpMethods. 
    Send PSend23043 = new_Send((Optr)self, SMB_builtinHttpMethods, 0);
    // first. 
    Send PSend23044 = new_Send((Optr)VAR_action_0_3, SMB_first, 0);
    // ,. 
    Send PSend23045 = new_Send((Optr)PSend23043, SMB__append_, 1, (Optr)PSend23044);
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    // send405Response:. 
    Send PSend23046 = new_Send((Optr)VAR_request_0_0, SMB_send405Response_, 1, (Optr)PSend23045);
    // escape:. 
    Send PSend23047 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23046);
    Array PThreadedCode23042 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23043, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send0, (Optr)PSend23044, (Optr)&t_send1, (Optr)PSend23045, (Optr)&t_send1, (Optr)PSend23046, (Optr)&t_send1, (Optr)PSend23047, (Optr)&t_block_return);
    Block PBlock23041 = new_Block_with(empty_Array, empty_Array, PThreadedCode23042, 1, PSend23047);
    // ifFalse:. 
    Send PSend23040 = new_Send((Optr)PSend23039, SMB_ifFalse_, 1, (Optr)PBlock23041);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend23050 = new_Send((Optr)VAR_action_0_3, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    // invokeAction:request:. 
    Send PSend23051 = new_Send((Optr)self, SMB_invokeAction_request_, 2, (Optr)PSend23050, (Optr)VAR_request_0_0);
    Array PThreadedCode23049 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23050, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send2, (Optr)PSend23051, (Optr)&t_block_return);
    Block PBlock23048 = new_Block_with(empty_Array, empty_Array, PThreadedCode23049, 1, PSend23051);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray23053 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend23055 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode23054 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend23055, (Optr)&t_method_return);
    Block PBlock23052 = new_Block_with(PArray23053, empty_Array, PThreadedCode23054, 1, PSend23055);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend23056 = new_Send((Optr)PBlock23048, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock23052);
    Array PThreadedCode22960 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend22961, (Optr)&t_push1, (Optr)string_22962, (Optr)&t_send1, (Optr)PSend22963, (Optr)&t_send_ifTrue_, (Optr)PSend22964, (Optr)PBlock22965, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22971, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22972, (Optr)&t_push_variable, (Optr)VAR_dispatchUrl_0_1, (Optr)&t_send0, (Optr)PSend22973, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_entryUrl_0_2, (Optr)&t_push1, (Optr)string_22974, (Optr)&t_send1, (Optr)PSend22975, (Optr)&t_send_ifFalse_, (Optr)PSend22976, (Optr)PBlock22977, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock22982, (Optr)&t_send1, (Optr)PSend23009, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23010, (Optr)&t_push1, (Optr)string_23011, (Optr)&t_send1, (Optr)PSend23012, (Optr)&t_send_ifTrue_, (Optr)PSend23013, (Optr)PBlock23014, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_push_closure, (Optr)PBlock23026, (Optr)&t_send1, (Optr)PSend23030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23031, (Optr)&t_push1, (Optr)string_23032, (Optr)&t_send1, (Optr)PSend23033, (Optr)&t_push_closure, (Optr)PBlock23034, (Optr)&t_send1, (Optr)PSend23039, (Optr)&t_send_ifFalse_, (Optr)PSend23040, (Optr)PBlock23041, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23048, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock23052, (Optr)&t_send2, (Optr)PSend23056, (Optr)&t_method_return);
    Block PBlock22958 = new_Block_with(PArray22959, empty_Array, PThreadedCode22960, 9, PSend22964, PAssign22971, PAssign22972, PSend22976, PSend23009, PSend23013, PSend23030, PSend23040, PSend23056);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23057 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22958);
    Array PThreadedCode22957 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22958, (Optr)&t_send1, (Optr)PSend23057, (Optr)&t_method_return);
    Method PMethod22954 = new_Method_with(PArray22955, PArray22956, empty_Array, PThreadedCode22957, 1, PSend23057);
    
    MethodClosure MC_SMB_dispatchRequest_url_ = new_MethodClosure((Method)PMethod22954, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_url_, MC_SMB_dispatchRequest_url_);
}


static void init_SMB_listenOn_interface_() {
    Symbol SMB_listenOn_interface_ = new_Symbol(L"listenOn:interface:");
    Variable VAR_aPort_0_0 = new_Variable_named(L"aPort", 0);
    Variable VAR_anInterface_0_1 = new_Variable_named(L"anInterface", 0);
<<<<<<< HEAD
    Array PArray23059 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
=======
    Array PArray22876 = new_Array_with(2, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_listenOn_interface_backlogSize_ = new_Symbol(L"listenOn:interface:backlogSize:");
    Constant int_8_Const = new_Constant((Optr)int_8);
    // listenOn:interface:backlogSize:. 
<<<<<<< HEAD
    Send PSend23061 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode23060 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend23061, (Optr)&t_method_return);
    Method PMethod23058 = new_Method_with(PArray23059, empty_Array, empty_Array, PThreadedCode23060, 1, PSend23061);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod23058, WebClient_Core_WebServer_Class);
=======
    Send PSend22878 = new_Send((Optr)self, SMB_listenOn_interface_backlogSize_, 3, (Optr)VAR_aPort_0_0, (Optr)VAR_anInterface_0_1, (Optr)int_8_Const);
    Array PThreadedCode22877 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPort_0_0, (Optr)&t_push_variable, (Optr)VAR_anInterface_0_1, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send3, (Optr)PSend22878, (Optr)&t_method_return);
    Method PMethod22875 = new_Method_with(PArray22876, empty_Array, empty_Array, PThreadedCode22877, 1, PSend22878);
    
    MethodClosure MC_SMB_listenOn_interface_ = new_MethodClosure((Method)PMethod22875, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_listenOn_interface_, MC_SMB_listenOn_interface_);
}


static void init_SMB_sessionAt_put_() {
    Symbol SMB_sessionAt_put_ = new_Symbol(L"sessionAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_session_0_1 = new_Variable_named(L"session", 0);
<<<<<<< HEAD
    Array PArray23063 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23067 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_session_0_1);
    Array PThreadedCode23066 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_session_0_1, (Optr)&t_send2, (Optr)PSend23067, (Optr)&t_block_return);
    Block PBlock23065 = new_Block_with(empty_Array, empty_Array, PThreadedCode23066, 1, PSend23067);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23068 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23065);
    Array PThreadedCode23064 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23065, (Optr)&t_send1, (Optr)PSend23068, (Optr)&t_method_return);
    Method PMethod23062 = new_Method_with(PArray23063, empty_Array, empty_Array, PThreadedCode23064, 1, PSend23068);
    
    MethodClosure MC_SMB_sessionAt_put_ = new_MethodClosure((Method)PMethod23062, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_put_, MC_SMB_sessionAt_put_);
}


static void init_SMB_certName() {
    Symbol SMB_certName = new_Symbol(L"certName");
<<<<<<< HEAD
    Array PThreadedCode23070 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod23069 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23070, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod23069, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22887 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_certName, (Optr)&t_method_return);
    Method PMethod22886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22887, 1, slot_WebClient_Core_WebServer_certName);
    
    MethodClosure MC_SMB_certName = new_MethodClosure((Method)PMethod22886, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_certName, MC_SMB_certName);
}


static void init_SMB_reportInternalServerError_label_request_() {
    Symbol SMB_reportInternalServerError_label_request_ = new_Symbol(L"reportInternalServerError:label:request:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Variable VAR_errLabel_0_1 = new_Variable_named(L"errLabel", 0);
    Variable VAR_aRequest_0_2 = new_Variable_named(L"aRequest", 0);
<<<<<<< HEAD
    Array PArray23072 = new_Array_with(3, (Optr)VAR_errReport_0_0, (Optr)VAR_errLabel_0_1, (Optr)VAR_aRequest_0_2);
    Variable VAR_errLog_0_3 = new_Variable_named(L"errLog", 0);
    Array PArray23073 = new_Array_with(1, (Optr)VAR_errLog_0_3);
    String string_23081 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23081_Const = new_Constant((Optr)string_23081);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23082 = new_String(L"<h1>Internal Server Error: ");
    Constant string_23082_Const = new_Constant((Optr)string_23082);
    // ,. 
    Send PSend23080 = new_Send((Optr)string_23081_Const, SMB__append_, 1, (Optr)string_23082_Const);
    // ,. 
    Send PSend23079 = new_Send((Optr)PSend23080, SMB__append_, 1, (Optr)VAR_errLabel_0_1);
    String string_23083 = new_String(L"</h1><pre>");
    Constant string_23083_Const = new_Constant((Optr)string_23083);
    // ,. 
    Send PSend23078 = new_Send((Optr)PSend23079, SMB__append_, 1, (Optr)string_23083_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23085 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23086 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23084 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23085, (Optr)PSend23086);
    // ,. 
    Send PSend23077 = new_Send((Optr)PSend23078, SMB__append_, 1, (Optr)PSend23084);
    String string_23087 = new_String(L"</pre></body></html>");
    Constant string_23087_Const = new_Constant((Optr)string_23087);
    // ,. 
    Send PSend23076 = new_Send((Optr)PSend23077, SMB__append_, 1, (Optr)string_23087_Const);
    Assign PAssign23075 = new_Assign((Optr)VAR_errLog_0_3, (Optr)PSend23076);
    SmallInt int_500 = new_SmallInt(500);
    String string_23088 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23088_Const = new_Constant((Optr)string_23088);
    // sendResponseCode:content:type:close:. 
    Send PSend23089 = new_Send((Optr)VAR_aRequest_0_2, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_3, (Optr)string_23088_Const, (Optr)true_Const);
    Array PThreadedCode23074 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign23075, (Optr)&t_push1, (Optr)string_23081, (Optr)&t_push1, (Optr)string_23082, (Optr)&t_send1, (Optr)PSend23080, (Optr)&t_push_variable, (Optr)VAR_errLabel_0_1, (Optr)&t_send1, (Optr)PSend23079, (Optr)&t_push1, (Optr)string_23083, (Optr)&t_send1, (Optr)PSend23078, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23085, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23086, (Optr)&t_send2, (Optr)PSend23084, (Optr)&t_send1, (Optr)PSend23077, (Optr)&t_push1, (Optr)string_23087, (Optr)&t_send1, (Optr)PSend23076, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_2, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_3, (Optr)&t_push1, (Optr)string_23088, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23089, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23071 = new_Method_with(PArray23072, PArray23073, empty_Array, PThreadedCode23074, 3, PAssign23075, PSend23089, self);
    
    MethodClosure MC_SMB_reportInternalServerError_label_request_ = new_MethodClosure((Method)PMethod23071, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Send PSend23096 = new_Send((Optr)self, SMB_class, 0);
    // serverString. 
    Send PSend23095 = new_Send((Optr)PSend23096, SMB_serverString, 0);
    Assign PAssign23094 = new_Assign((Optr)slot_WebClient_Core_WebServer_serverString, (Optr)PSend23095);
    Array PThreadedCode23093 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign23094, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23096, (Optr)&t_send0, (Optr)PSend23095, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23092 = new_Block_with(empty_Array, empty_Array, PThreadedCode23093, 1, PAssign23094);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23097 = new_Send((Optr)slot_WebClient_Core_WebServer_serverString, SMB_ifNil_, 1, (Optr)PBlock23092);
    Array PThreadedCode23091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_serverString, (Optr)&t_push_closure, (Optr)PBlock23092, (Optr)&t_send1, (Optr)PSend23097, (Optr)&t_method_return);
    Method PMethod23090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23091, 1, PSend23097);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23090, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_serverString, MC_SMB_serverString);
}


static void init_SMB_log_() {
    Symbol SMB_log_ = new_Symbol(L"log:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray23099 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend23103 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend23104 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_valueWithArguments_, 1, (Optr)PSend23103);
    Array PThreadedCode23102 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend23103, (Optr)&t_send1, (Optr)PSend23104, (Optr)&t_block_return);
    Block PBlock23101 = new_Block_with(empty_Array, empty_Array, PThreadedCode23102, 1, PSend23104);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23105 = new_Send((Optr)slot_WebClient_Core_WebServer_logAction, SMB_ifNotNil_, 1, (Optr)PBlock23101);
    Array PThreadedCode23100 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_logAction, (Optr)&t_push_closure, (Optr)PBlock23101, (Optr)&t_send1, (Optr)PSend23105, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23098 = new_Method_with(PArray23099, empty_Array, empty_Array, PThreadedCode23100, 2, PSend23105, self);
    
    MethodClosure MC_SMB_log_ = new_MethodClosure((Method)PMethod23098, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_log_, MC_SMB_log_);
}


static void init_SMB_newRequest() {
    Symbol SMB_newRequest = new_Symbol(L"newRequest");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
<<<<<<< HEAD
    Array PArray23109 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_server_ = new_Symbol(L"server:");
    // server:. 
    Send PSend23111 = new_Send((Optr)VAR__receiver__1_0, SMB_server_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23112 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23110 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23111, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23112, (Optr)&t_method_return);
    Block PBlock23108 = new_Block_with(PArray23109, empty_Array, PThreadedCode23110, 2, PSend23111, PSend23112);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23113 = new_Send((Optr)PWebRequest_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23114 = new_Send((Optr)PBlock23108, SMB_value_, 1, (Optr)PSend23113);
    Array PThreadedCode23107 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23108, (Optr)&t_push_class_reference, (Optr)PWebRequest_classReference, (Optr)&t_send0, (Optr)PSend23113, (Optr)&t_send1, (Optr)PSend23114, (Optr)&t_method_return);
    Method PMethod23106 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23107, 1, PSend23114);
    
    MethodClosure MC_SMB_newRequest = new_MethodClosure((Method)PMethod23106, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_newRequest, MC_SMB_newRequest);
}


static void init_SMB_vault_() {
    Symbol SMB_vault_ = new_Symbol(L"vault:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray23116 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign23118 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode23117 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23118, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23115 = new_Method_with(PArray23116, empty_Array, empty_Array, PThreadedCode23117, 2, PAssign23118, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod23115, WebClient_Core_WebServer_Class);
=======
    Array PArray22933 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22935 = new_Assign((Optr)slot_WebClient_Core_WebServer_vault, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22934 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22935, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22932 = new_Method_with(PArray22933, empty_Array, empty_Array, PThreadedCode22934, 2, PAssign22935, self);
    
    MethodClosure MC_SMB_vault_ = new_MethodClosure((Method)PMethod22932, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_vault_, MC_SMB_vault_);
}


static void init_SMB_errorHandler() {
    Symbol SMB_errorHandler = new_Symbol(L"errorHandler");
<<<<<<< HEAD
    Array PThreadedCode23120 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod23119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23120, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod23119, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22937 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_errorHandler, (Optr)&t_method_return);
    Method PMethod22936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22937, 1, slot_WebClient_Core_WebServer_errorHandler);
    
    MethodClosure MC_SMB_errorHandler = new_MethodClosure((Method)PMethod22936, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_errorHandler, MC_SMB_errorHandler);
}


static void init_SMB_listenerPort() {
    Symbol SMB_listenerPort = new_Symbol(L"listenerPort");
<<<<<<< HEAD
    Array PThreadedCode23122 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod23121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23122, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod23121, WebClient_Core_WebServer_Class);
=======
    Array PThreadedCode22939 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_port, (Optr)&t_method_return);
    Method PMethod22938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22939, 1, slot_WebClient_Core_WebServer_port);
    
    MethodClosure MC_SMB_listenerPort = new_MethodClosure((Method)PMethod22938, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Send PSend23125 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend23126 = new_Send((Optr)PSend23125, SMB_serverDate, 0);
    Array PThreadedCode23124 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23125, (Optr)&t_send0, (Optr)PSend23126, (Optr)&t_method_return);
    Method PMethod23123 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23124, 1, PSend23126);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23123, WebClient_Core_WebServer_Class);
=======
    Send PSend22942 = new_Send((Optr)self, SMB_class, 0);
    // serverDate. 
    Send PSend22943 = new_Send((Optr)PSend22942, SMB_serverDate, 0);
    Array PThreadedCode22941 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22942, (Optr)&t_send0, (Optr)PSend22943, (Optr)&t_method_return);
    Method PMethod22940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22941, 1, PSend22943);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod22940, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_serverDate, MC_SMB_serverDate);
}


static void init_SMB_dispatchRequest_() {
    Symbol SMB_dispatchRequest_ = new_Symbol(L"dispatchRequest:");
    Variable VAR_request_0_0 = new_Variable_named(L"request", 0);
<<<<<<< HEAD
    Array PArray23128 = new_Array_with(1, (Optr)VAR_request_0_0);
    Symbol SMB_url = new_Symbol(L"url");
    // url. 
    Send PSend23130 = new_Send((Optr)VAR_request_0_0, SMB_url, 0);
    Symbol SMB_dispatchRequest_url_ = new_Symbol(L"dispatchRequest:url:");
    // dispatchRequest:url:. 
    Send PSend23131 = new_Send((Optr)self, SMB_dispatchRequest_url_, 2, (Optr)VAR_request_0_0, (Optr)PSend23130);
    Array PThreadedCode23129 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_push_variable, (Optr)VAR_request_0_0, (Optr)&t_send0, (Optr)PSend23130, (Optr)&t_send2, (Optr)PSend23131, (Optr)&t_method_return);
    Method PMethod23127 = new_Method_with(PArray23128, empty_Array, empty_Array, PThreadedCode23129, 1, PSend23131);
    
    MethodClosure MC_SMB_dispatchRequest_ = new_MethodClosure((Method)PMethod23127, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_dispatchRequest_, MC_SMB_dispatchRequest_);
}


static void init_SMB_invokeAction_request_() {
    Symbol SMB_invokeAction_request_ = new_Symbol(L"invokeAction:request:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Variable VAR_request_0_1 = new_Variable_named(L"request", 0);
<<<<<<< HEAD
    Array PArray23133 = new_Array_with(2, (Optr)VAR_action_0_0, (Optr)VAR_request_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend23135 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_request_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend23136 = new_Send((Optr)VAR_action_0_0, SMB_valueWithArguments_, 1, (Optr)PSend23135);
    Array PThreadedCode23134 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_request_0_1, (Optr)&t_send1, (Optr)PSend23135, (Optr)&t_send1, (Optr)PSend23136, (Optr)&t_method_return);
    Method PMethod23132 = new_Method_with(PArray23133, empty_Array, empty_Array, PThreadedCode23134, 1, PSend23136);
    
    MethodClosure MC_SMB_invokeAction_request_ = new_MethodClosure((Method)PMethod23132, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_invokeAction_request_, MC_SMB_invokeAction_request_);
}


static void init_SMB_systemInfoOn_() {
    Symbol SMB_systemInfoOn_ = new_Symbol(L"systemInfoOn:");
    Variable VAR_strm_0_0 = new_Variable_named(L"strm", 0);
<<<<<<< HEAD
    Array PArray23138 = new_Array_with(1, (Optr)VAR_strm_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23141 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_23143 = new_String(L"VM: Pinocchio");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23143_Const = new_Constant((Optr)string_23143);
    // nextPutAll:. 
    Send PSend23144 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)string_23143_Const);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23145 = new_Send((Optr)VAR__receiver__1_0, SMB_cr, 0);
    Array PThreadedCode23142 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)string_23143, (Optr)&t_send1, (Optr)PSend23144, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23145, (Optr)&t_method_return);
    Block PBlock23140 = new_Block_with(PArray23141, empty_Array, PThreadedCode23142, 2, PSend23144, PSend23145);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23146 = new_Send((Optr)PBlock23140, SMB_value_, 1, (Optr)VAR_strm_0_0);
    Array PThreadedCode23139 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock23140, (Optr)&t_push_variable, (Optr)VAR_strm_0_0, (Optr)&t_send1, (Optr)PSend23146, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23137 = new_Method_with(PArray23138, empty_Array, empty_Array, PThreadedCode23139, 2, PSend23146, self);
    
    MethodClosure MC_SMB_systemInfoOn_ = new_MethodClosure((Method)PMethod23137, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_systemInfoOn_, MC_SMB_systemInfoOn_);
}


static void init_SMB_accessLog_() {
    Symbol SMB_accessLog_ = new_Symbol(L"accessLog:");
    Variable VAR_aStreamOrFilename_0_0 = new_Variable_named(L"aStreamOrFilename", 0);
<<<<<<< HEAD
    Array PArray23148 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign23150 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode23149 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23150, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23147 = new_Method_with(PArray23148, empty_Array, empty_Array, PThreadedCode23149, 2, PAssign23150, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod23147, WebClient_Core_WebServer_Class);
=======
    Array PArray22965 = new_Array_with(1, (Optr)VAR_aStreamOrFilename_0_0);
    Assign PAssign22967 = new_Assign((Optr)slot_WebClient_Core_WebServer_accessLog, (Optr)VAR_aStreamOrFilename_0_0);
    Array PThreadedCode22966 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22967, (Optr)&t_push_variable, (Optr)VAR_aStreamOrFilename_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22964 = new_Method_with(PArray22965, empty_Array, empty_Array, PThreadedCode22966, 2, PAssign22967, self);
    
    MethodClosure MC_SMB_accessLog_ = new_MethodClosure((Method)PMethod22964, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_accessLog_, MC_SMB_accessLog_);
}


static void init_SMB_sessionAt_() {
    Symbol SMB_sessionAt_ = new_Symbol(L"sessionAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
<<<<<<< HEAD
    Array PArray23152 = new_Array_with(1, (Optr)VAR_key_0_0);
    Array PThreadedCode23157 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23156 = new_Block_with(empty_Array, empty_Array, PThreadedCode23157, 1, nil_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend23158 = new_Send((Optr)slot_WebClient_Core_WebServer_sessions, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23156);
    Array PThreadedCode23155 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_sessions, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23156, (Optr)&t_send2, (Optr)PSend23158, (Optr)&t_block_return);
    Block PBlock23154 = new_Block_with(empty_Array, empty_Array, PThreadedCode23155, 1, PSend23158);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23159 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23154);
    Array PThreadedCode23153 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23154, (Optr)&t_send1, (Optr)PSend23159, (Optr)&t_method_return);
    Method PMethod23151 = new_Method_with(PArray23152, empty_Array, empty_Array, PThreadedCode23153, 1, PSend23159);
    
    MethodClosure MC_SMB_sessionAt_ = new_MethodClosure((Method)PMethod23151, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_sessionAt_, MC_SMB_sessionAt_);
}


static void init_SMB_certName_() {
    Symbol SMB_certName_ = new_Symbol(L"certName:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray23161 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23163 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode23162 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23163, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23160 = new_Method_with(PArray23161, empty_Array, empty_Array, PThreadedCode23162, 2, PAssign23163, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod23160, WebClient_Core_WebServer_Class);
=======
    Array PArray22978 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22980 = new_Assign((Optr)slot_WebClient_Core_WebServer_certName, (Optr)VAR_aString_0_0);
    Array PThreadedCode22979 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22980, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22977 = new_Method_with(PArray22978, empty_Array, empty_Array, PThreadedCode22979, 2, PAssign22980, self);
    
    MethodClosure MC_SMB_certName_ = new_MethodClosure((Method)PMethod22977, WebClient_Core_WebServer_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_certName_, MC_SMB_certName_);
}


static void init_SMB_addService_action_methods_() {
    Symbol SMB_addService_action_methods_ = new_Symbol(L"addService:action:methods:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
    Variable VAR_aBlockOrMessage_0_1 = new_Variable_named(L"aBlockOrMessage", 0);
    Variable VAR_methods_0_2 = new_Variable_named(L"methods", 0);
<<<<<<< HEAD
    Array PArray23165 = new_Array_with(3, (Optr)VAR_entryPoint_0_0, (Optr)VAR_aBlockOrMessage_0_1, (Optr)VAR_methods_0_2);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23169 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend23170 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_methods_0_2, (Optr)VAR_aBlockOrMessage_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23171 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_at_put_, 2, (Optr)PSend23169, (Optr)PSend23170);
    Array PThreadedCode23168 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend23169, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_methods_0_2, (Optr)&t_push_variable, (Optr)VAR_aBlockOrMessage_0_1, (Optr)&t_send2, (Optr)PSend23170, (Optr)&t_send2, (Optr)PSend23171, (Optr)&t_block_return);
    Block PBlock23167 = new_Block_with(empty_Array, empty_Array, PThreadedCode23168, 1, PSend23171);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23172 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23167);
    Array PThreadedCode23166 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23167, (Optr)&t_send1, (Optr)PSend23172, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23164 = new_Method_with(PArray23165, empty_Array, empty_Array, PThreadedCode23166, 2, PSend23172, self);
    
    MethodClosure MC_SMB_addService_action_methods_ = new_MethodClosure((Method)PMethod23164, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_addService_action_methods_, MC_SMB_addService_action_methods_);
}


static void init_SMB_removeService_() {
    Symbol SMB_removeService_ = new_Symbol(L"removeService:");
    Variable VAR_entryPoint_0_0 = new_Variable_named(L"entryPoint", 0);
<<<<<<< HEAD
    Array PArray23174 = new_Array_with(1, (Optr)VAR_entryPoint_0_0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23178 = new_Send((Optr)VAR_entryPoint_0_0, SMB_asLowercase, 0);
    Array PThreadedCode23180 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock23179 = new_Block_with(empty_Array, empty_Array, PThreadedCode23180, 0);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend23181 = new_Send((Optr)slot_WebClient_Core_WebServer_entryPoints, SMB_removeKey_ifAbsent_, 2, (Optr)PSend23178, (Optr)PBlock23179);
    Array PThreadedCode23177 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_entryPoints, (Optr)&t_push_variable, (Optr)VAR_entryPoint_0_0, (Optr)&t_send0, (Optr)PSend23178, (Optr)&t_push_closure, (Optr)PBlock23179, (Optr)&t_send2, (Optr)PSend23181, (Optr)&t_block_return);
    Block PBlock23176 = new_Block_with(empty_Array, empty_Array, PThreadedCode23177, 1, PSend23181);
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    // critical:. 
    Send PSend23182 = new_Send((Optr)slot_WebClient_Core_WebServer_mutex, SMB_critical_, 1, (Optr)PBlock23176);
    Array PThreadedCode23175 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_mutex, (Optr)&t_push_closure, (Optr)PBlock23176, (Optr)&t_send1, (Optr)PSend23182, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23173 = new_Method_with(PArray23174, empty_Array, empty_Array, PThreadedCode23175, 2, PSend23182, self);
    
    MethodClosure MC_SMB_removeService_ = new_MethodClosure((Method)PMethod23173, WebClient_Core_WebServer_Class);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebServer_Class, SMB_removeService_, MC_SMB_removeService_);
}


<<<<<<< HEAD
static void init_class_SMB_examplePage2() {
    Symbol SMB_examplePage2 = new_Symbol(L"examplePage2");
    String string_23185 = new_String(L"<html>\n<p id=\"status\">WebSocket: Not connected</p> \n<form> \n    <input type=\"text\" id=\"chat\" placeholder=\"type and press enter to chat\" /> \n</form> \n<p>To test, open two windows with Web Socket support, type a message above and press return.</p> \n<ul id=\"log\"></ul> \n\n<script>\n\nvar conn = {};\nvar log = document.getElementById(\"log\");\nvar chat = document.getElementById(\"chat\");\nvar form = chat.form;\nvar state = document.getElementById(\"status\"); \n \nif (window.WebSocket === undefined) {\n  state.innerHTML = \"(WebSockets not supported)\";\n} else {\n    conn = new WebSocket(\"ws://localhost:8080/broadcast\");\n    conn.onopen = function () {\n      state.innerHTML = \"WebSocket: Connected\";\n    };\n \n    conn.onmessage = function (event) {\n      log.innerHTML = \"<li>\" + event.data + \"</li>\" + log.innerHTML;\n    };\n    \n    conn.onclose = function (event) {\n      state.innerHTML = \"WebSocket: Closed\";\n    };\n\n\tform.addEventListener(\"submit\", function (event) {\n\t\tevent.preventDefault();\n\t\tif (conn.readyState === 1) {\n\t\t\tconn.send(chat.value);      \n\t\t\tchat.value = \"\";\n\t\t}\n\t}, false);\n};\n \n</script> \n\n</body>\n</html>");
    Array PThreadedCode23184 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23185, (Optr)&t_method_return);
    Constant string_23185_Const = new_Constant((Optr)string_23185);
    Method PMethod23183 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23184, 1, string_23185_Const);
    
    MethodClosure MC_SMB_examplePage2 = new_MethodClosure((Method)PMethod23183, HEADER(WebClient_Core_WebServer_Class));
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage2, MC_SMB_examplePage2);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
<<<<<<< HEAD
    Send PSend23190 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_destroy, 0);
    Assign PAssign23191 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)nil_Const);
    Array PThreadedCode23189 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_send0, (Optr)PSend23190, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23191, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23188 = new_Block_with(empty_Array, empty_Array, PThreadedCode23189, 2, PSend23190, PAssign23191);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23192 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNotNil_, 1, (Optr)PBlock23188);
    Array PThreadedCode23187 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23188, (Optr)&t_send1, (Optr)PSend23192, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23186 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23187, 2, PSend23192, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod23186, HEADER(WebClient_Core_WebServer_Class));
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_serverDate() {
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    Variable VAR_date_0_0 = new_Variable_named(L"date", 0);
<<<<<<< HEAD
    Array PArray23194 = new_Array_with(1, (Optr)VAR_date_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23197 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend23201 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend23200 = new_Send((Optr)PSend23201, SMB_asUTC, 0);
    Assign PAssign23199 = new_Assign((Optr)VAR_date_0_0, (Optr)PSend23200);
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    // dayOfWeekAbbreviation. 
    Send PSend23202 = new_Send((Optr)VAR_date_0_0, SMB_dayOfWeekAbbreviation, 0);
    String string_23203 = new_String(L", ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23203_Const = new_Constant((Optr)string_23203);
    // ,. 
    Send PSend23204 = new_Send((Optr)PSend23202, SMB__append_, 1, (Optr)string_23203_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23205 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)PSend23204);
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend23206 = new_Send((Optr)VAR_date_0_0, SMB_asDate, 0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23208 = new_Array_with(1, (Optr)VAR__receiver__2_0);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
<<<<<<< HEAD
    Send PSend23210 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend23211 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend23212 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend23213 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend23214 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    // add:. 
    Send PSend23215 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_1_Const);
    // add:. 
    Send PSend23216 = new_Send((Optr)VAR__receiver__2_0, SMB_add_, 1, (Optr)int_2_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23217 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode23209 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23211, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend23212, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend23213, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend23215, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23216, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23217, (Optr)&t_method_return);
    Block PBlock23207 = new_Block_with(PArray23208, empty_Array, PThreadedCode23209, 8, PSend23210, PSend23211, PSend23212, PSend23213, PSend23214, PSend23215, PSend23216, PSend23217);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23218 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23219 = new_Send((Optr)PBlock23207, SMB_value_, 1, (Optr)PSend23218);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23220 = new_Send((Optr)PSend23219, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend23221 = new_Send((Optr)PSend23206, SMB_printOn_format_, 2, (Optr)VAR_s_1_0, (Optr)PSend23220);
    Array PArray23223 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23225 = new_Send((Optr)VAR__receiver__2_0, SMB_space, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend23226 = new_Send((Optr)VAR_date_0_0, SMB_seconds, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend23227 = new_Send((Optr)Time_classReference, SMB_seconds_, 1, (Optr)PSend23226);
    Symbol SMB_print24 = new_Symbol(L"print24");
    // print24. 
    Send PSend23228 = new_Send((Optr)PSend23227, SMB_print24, 0);
    // nextPutAll:. 
    Send PSend23229 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23228);
    Array PThreadedCode23224 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23225, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23226, (Optr)&t_send1, (Optr)PSend23227, (Optr)&t_send0, (Optr)PSend23228, (Optr)&t_send1, (Optr)PSend23229, (Optr)&t_method_return);
    Block PBlock23222 = new_Block_with(PArray23223, empty_Array, PThreadedCode23224, 2, PSend23225, PSend23229);
    // value:. 
    Send PSend23230 = new_Send((Optr)PBlock23222, SMB_value_, 1, (Optr)VAR_s_1_0);
    String string_23231 = new_String(L" GMT");
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Constant string_23231_Const = new_Constant((Optr)string_23231);
    // writeAll:. 
    Send PSend23232 = new_Send((Optr)VAR_s_1_0, SMB_writeAll_, 1, (Optr)string_23231_Const);
    Array PThreadedCode23198 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23199, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend23201, (Optr)&t_send0, (Optr)PSend23200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23202, (Optr)&t_push1, (Optr)string_23203, (Optr)&t_send1, (Optr)PSend23204, (Optr)&t_send1, (Optr)PSend23205, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_date_0_0, (Optr)&t_send0, (Optr)PSend23206, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock23207, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23218, (Optr)&t_send1, (Optr)PSend23219, (Optr)&t_send0, (Optr)PSend23220, (Optr)&t_send2, (Optr)PSend23221, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23222, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23230, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_23231, (Optr)&t_send1, (Optr)PSend23232, (Optr)&t_method_return);
    Block PBlock23196 = new_Block_with(PArray23197, empty_Array, PThreadedCode23198, 5, PAssign23199, PSend23205, PSend23221, PSend23230, PSend23232);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23233 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23196);
    Array PThreadedCode23195 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23196, (Optr)&t_send1, (Optr)PSend23233, (Optr)&t_method_return);
    Method PMethod23193 = new_Method_with(empty_Array, PArray23194, empty_Array, PThreadedCode23195, 1, PSend23233);
    
    MethodClosure MC_SMB_serverDate = new_MethodClosure((Method)PMethod23193, HEADER(WebClient_Core_WebServer_Class));
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverDate, MC_SMB_serverDate);
}


static void init_class_SMB_examplePage() {
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
<<<<<<< HEAD
    String string_23236 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode23235 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23236, (Optr)&t_method_return);
    Constant string_23236_Const = new_Constant((Optr)string_23236);
    Method PMethod23234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23235, 1, string_23236_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod23234, HEADER(WebClient_Core_WebServer_Class));
=======
    String string_23050 = new_String(L"<html><h1>David rocks!</hi></html>");
    Array PThreadedCode23049 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23050, (Optr)&t_method_return);
    Constant string_23050_Const = new_Constant((Optr)string_23050);
    Method PMethod23048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23049, 1, string_23050_Const);
    
    MethodClosure MC_SMB_examplePage = new_MethodClosure((Method)PMethod23048, HEADER(WebClient_Core_WebServer_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_examplePage, MC_SMB_examplePage);
}


static void init_class_SMB_serverString() {
    Symbol SMB_serverString = new_Symbol(L"serverString");
<<<<<<< HEAD
    String string_23239 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode23238 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23239, (Optr)&t_method_return);
    Constant string_23239_Const = new_Constant((Optr)string_23239);
    Method PMethod23237 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23238, 1, string_23239_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23237, HEADER(WebClient_Core_WebServer_Class));
=======
    String string_23053 = new_String(L"WebServer/1.3 (Minimal port for Pinocchio)");
    Array PThreadedCode23052 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23053, (Optr)&t_method_return);
    Constant string_23053_Const = new_Constant((Optr)string_23053);
    Method PMethod23051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23052, 1, string_23053_Const);
    
    MethodClosure MC_SMB_serverString = new_MethodClosure((Method)PMethod23051, HEADER(WebClient_Core_WebServer_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_serverString, MC_SMB_serverString);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
<<<<<<< HEAD
    Send PSend23245 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign23244 = new_Assign((Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)PSend23245);
    Array PThreadedCode23243 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23244, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23245, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23242 = new_Block_with(empty_Array, empty_Array, PThreadedCode23243, 1, PAssign23244);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23246 = new_Send((Optr)slot_WebClient_Core_WebServer_Class_class_default, SMB_ifNil_, 1, (Optr)PBlock23242);
    Array PThreadedCode23241 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebServer_Class_class_default, (Optr)&t_push_closure, (Optr)PBlock23242, (Optr)&t_send1, (Optr)PSend23246, (Optr)&t_method_return);
    Method PMethod23240 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23241, 1, PSend23246);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod23240, HEADER(WebClient_Core_WebServer_Class));
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(WebClient_Core_WebServer_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_example() {
    Symbol SMB_example = new_Symbol(L"example");
    Variable VAR_mutex_0_0 = new_Variable_named(L"mutex", 0);
    Variable VAR_sockets_0_1 = new_Variable_named(L"sockets", 0);
<<<<<<< HEAD
    Array PArray23248 = new_Array_with(2, (Optr)VAR_mutex_0_0, (Optr)VAR_sockets_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23251 = new_Send((Optr)Mutex_classReference, SMB_new, 0);
    Assign PAssign23250 = new_Assign((Optr)VAR_mutex_0_0, (Optr)PSend23251);
    // new. 
    Send PSend23253 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23252 = new_Assign((Optr)VAR_sockets_0_1, (Optr)PSend23253);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend23254 = new_Send((Optr)PWebServer_classReference, SMB_reset, 0);
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend23255 = new_Send((Optr)PSend23254, SMB_default, 0);
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_8080 = new_SmallInt(8080);
    Symbol SMB_listenOn_ = new_Symbol(L"listenOn:");
    Constant int_8080_Const = new_Constant((Optr)int_8080);
    // listenOn:. 
<<<<<<< HEAD
    Send PSend23256 = new_Send((Optr)PSend23255, SMB_listenOn_, 1, (Optr)int_8080_Const);
    // default. 
    Send PSend23257 = new_Send((Optr)PWebServer_classReference, SMB_default, 0);
    String string_23258 = new_String(L"/");
    Variable VAR_req_1_0 = new_Variable_named(L"req", 1);
    Array PArray23260 = new_Array_with(1, (Optr)VAR_req_1_0);
    Symbol SMB_examplePage = new_Symbol(L"examplePage");
    // examplePage. 
    Send PSend23262 = new_Send((Optr)self, SMB_examplePage, 0);
    String string_23263 = new_String(L"text/html");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23263_Const = new_Constant((Optr)string_23263);
    // send200Response:contentType:. 
    Send PSend23264 = new_Send((Optr)VAR_req_1_0, SMB_send200Response_contentType_, 2, (Optr)PSend23262, (Optr)string_23263_Const);
    Array PThreadedCode23261 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_req_1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23262, (Optr)&t_push1, (Optr)string_23263, (Optr)&t_send2, (Optr)PSend23264, (Optr)&t_method_return);
    Block PBlock23259 = new_Block_with(PArray23260, empty_Array, PThreadedCode23261, 1, PSend23264);
    Symbol SMB_addService_action_ = new_Symbol(L"addService:action:");
    Constant string_23258_Const = new_Constant((Optr)string_23258);
    // addService:action:. 
    Send PSend23265 = new_Send((Optr)PSend23257, SMB_addService_action_, 2, (Optr)string_23258_Const, (Optr)PBlock23259);
    Array PThreadedCode23249 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23250, (Optr)&t_push_class_reference, (Optr)Mutex_classReference, (Optr)&t_send0, (Optr)PSend23251, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23252, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23253, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23254, (Optr)&t_send0, (Optr)PSend23255, (Optr)&t_push1, (Optr)int_8080, (Optr)&t_send1, (Optr)PSend23256, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_send0, (Optr)PSend23257, (Optr)&t_push1, (Optr)string_23258, (Optr)&t_push_closure, (Optr)PBlock23259, (Optr)&t_send2, (Optr)PSend23265, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23247 = new_Method_with(empty_Array, PArray23248, empty_Array, PThreadedCode23249, 5, PAssign23250, PAssign23252, PSend23256, PSend23265, self);
    
    MethodClosure MC_SMB_example = new_MethodClosure((Method)PMethod23247, HEADER(WebClient_Core_WebServer_Class));
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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