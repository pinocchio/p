#include <lib/class/IO/Environment.h>


Optr slot_IO_Environment_Class_class_instance;
Optr layout_IO_Environment_Class_class;
Optr slot_IO_Environment_bindings;
Optr layout_IO_Environment;


static void init_SMB_environ() {
    Symbol SMB_environ = new_Symbol(L"environ");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    Annotation PAnnotation9548 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_environ, (Optr)SMB_IO_minus_Environment);
    Array PArray9547 = new_Array_with(1, (Optr)PAnnotation9548);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9550 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9549 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9550, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9546 = new_NativeMethod_with(empty_Array, empty_Array, PArray9547, PThreadedCode9549, 2, PSend9550, self);
    
    MethodClosure MC_SMB_environ = new_MethodClosure((Method)PNativeMethod9546, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environ, MC_SMB_environ);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode9552 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_method_return);
    Method PMethod9551 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9552, 1, slot_IO_Environment_bindings);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod9551, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    // loadEnvironment. 
    Send PSend9555 = new_Send((Optr)self, SMB_loadEnvironment, 0);
    Array PThreadedCode9554 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9555, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9554, 2, PSend9555, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9553, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray9557 = new_Array_with(1, (Optr)VAR_key_0_0);
    // at:. 
    Send PSend9559 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode9558 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend9559, (Optr)&t_method_return);
    Method PMethod9556 = new_Method_with(PArray9557, empty_Array, empty_Array, PThreadedCode9558, 1, PSend9559);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod9556, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_loadEnvironment() {
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    Variable VAR_env_0_0 = new_Variable_named(L"env", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray9561 = new_Array_with(3, (Optr)VAR_env_0_0, (Optr)VAR_parser_0_1, (Optr)VAR_value_0_2);
    Symbol SMB_environ = new_Symbol(L"environ");
    // environ. 
    Send PSend9564 = new_Send((Optr)self, SMB_environ, 0);
    Assign PAssign9563 = new_Assign((Optr)VAR_env_0_0, (Optr)PSend9564);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9566 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9565 = new_Assign((Optr)slot_IO_Environment_bindings, (Optr)PSend9566);
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    String string_9569 = new_String(L"ENTRY");
    Constant string_9569_Const = new_Constant((Optr)string_9569);
    Character char_9576 = new_Character(L'=');
    Constant char_9576_Const = new_Constant((Optr)char_9576);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend9575 = new_Send((Optr)char_9576_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9574 = new_Send((Optr)PSend9575, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend9573 = new_Send((Optr)PSend9574, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend9572 = new_Send((Optr)PSend9573, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend9571 = new_Send((Optr)PSend9572, SMB__logicAnd_, 1, (Optr)char_9576_Const);
    Variable VAR_scanner_1_0 = new_Variable_named(L"scanner", 1);
    Array PArray9578 = new_Array_with(1, (Optr)VAR_scanner_1_0);
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend9580 = new_Send((Optr)VAR_scanner_1_0, SMB_upToEnd, 0);
    Array PThreadedCode9579 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_scanner_1_0, (Optr)&t_send0, (Optr)PSend9580, (Optr)&t_method_return);
    Block PBlock9577 = new_Block_with(PArray9578, empty_Array, PThreadedCode9579, 1, PSend9580);
    // &&. 
    Send PSend9570 = new_Send((Optr)PSend9571, SMB__logicAnd_, 1, (Optr)PBlock9577);
    Variable VAR_nv_1_0 = new_Variable_named(L"nv", 1);
    Array PArray9582 = new_Array_with(1, (Optr)VAR_nv_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend9585 = new_Send((Optr)VAR_nv_1_0, SMB_removeLast, 0);
    Assign PAssign9584 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend9585);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend9586 = new_Send((Optr)VAR_nv_1_0, SMB_asSymbol, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend9587 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_put_, 2, (Optr)PSend9586, (Optr)VAR_value_0_2);
    Array PThreadedCode9583 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign9584, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9585, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9586, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend9587, (Optr)&t_method_return);
    Block PBlock9581 = new_Block_with(PArray9582, empty_Array, PThreadedCode9583, 2, PAssign9584, PSend9587);
    // named:parsing:semantics:. 
    Send PSend9568 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_semantics_, 3, (Optr)string_9569_Const, (Optr)PSend9570, (Optr)PBlock9581);
    Assign PAssign9567 = new_Assign((Optr)VAR_parser_0_1, (Optr)PSend9568);
    Variable VAR_entry_1_0 = new_Variable_named(L"entry", 1);
    Array PArray9589 = new_Array_with(1, (Optr)VAR_entry_1_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend9591 = new_Send((Optr)VAR_parser_0_1, SMB_parse_, 1, (Optr)VAR_entry_1_0);
    Array PThreadedCode9590 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_variable, (Optr)VAR_entry_1_0, (Optr)&t_send1, (Optr)PSend9591, (Optr)&t_method_return);
    Block PBlock9588 = new_Block_with(PArray9589, empty_Array, PThreadedCode9590, 1, PSend9591);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend9592 = new_Send((Optr)VAR_env_0_0, SMB_do_, 1, (Optr)PBlock9588);
    Array PThreadedCode9562 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign9563, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9565, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9566, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9567, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_9569, (Optr)&t_push1, (Optr)char_9576, (Optr)&t_send0, (Optr)PSend9575, (Optr)&t_send0, (Optr)PSend9574, (Optr)&t_send0, (Optr)PSend9573, (Optr)&t_send0, (Optr)PSend9572, (Optr)&t_push1, (Optr)char_9576, (Optr)&t_send1, (Optr)PSend9571, (Optr)&t_push_closure, (Optr)PBlock9577, (Optr)&t_send1, (Optr)PSend9570, (Optr)&t_push_closure, (Optr)PBlock9581, (Optr)&t_send3, (Optr)PSend9568, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_env_0_0, (Optr)&t_push_closure, (Optr)PBlock9588, (Optr)&t_send1, (Optr)PSend9592, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9560 = new_Method_with(empty_Array, PArray9561, empty_Array, PThreadedCode9562, 5, PAssign9563, PAssign9565, PAssign9567, PSend9592, self);
    
    MethodClosure MC_SMB_loadEnvironment = new_MethodClosure((Method)PMethod9560, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_loadEnvironment, MC_SMB_loadEnvironment);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray9594 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    // at:ifAbsent:. 
    Send PSend9596 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode9595 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend9596, (Optr)&t_method_return);
    Method PMethod9593 = new_Method_with(PArray9594, empty_Array, empty_Array, PThreadedCode9595, 1, PSend9596);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod9593, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    String string_9599 = new_String(L"plugin/io/Environment.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Environment_Const = new_Constant((Optr)SMB_IO_minus_Environment);
    Constant string_9599_Const = new_Constant((Optr)string_9599);
    // require:at:. 
    Send PSend9600 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Environment_Const, (Optr)string_9599_Const);
    Array PThreadedCode9598 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Environment, (Optr)&t_push1, (Optr)string_9599, (Optr)&t_send2, (Optr)PSend9600, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9597 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9598, 2, PSend9600, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9597, HEADER(IO_Environment_Class));
    store_method(HEADER(IO_Environment_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9606 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9605 = new_Assign((Optr)slot_IO_Environment_Class_class_instance, (Optr)PSend9606);
    Array PThreadedCode9604 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9605, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9606, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9603 = new_Block_with(empty_Array, empty_Array, PThreadedCode9604, 1, PAssign9605);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9607 = new_Send((Optr)slot_IO_Environment_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9603);
    Array PThreadedCode9602 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9603, (Optr)&t_send1, (Optr)PSend9607, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9601 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9602, 2, PSend9607, slot_IO_Environment_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9601, HEADER(IO_Environment_Class));
    store_method(HEADER(IO_Environment_Class), SMB_instance, MC_SMB_instance);
}

void init_IO_PEnvironment_layout() {
    slot_IO_Environment_Class_class_instance = (Optr)new_Slot(5, L"instance");
    layout_IO_Environment_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_IO_Environment_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Environment_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Environment_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Environment_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Environment_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_IO_Environment_Class_class)->values[5] = slot_IO_Environment_Class_class_instance; // instance 
    
    Symbol  SMB_Environment = new_Symbol(L"Environment");
    slot_IO_Environment_bindings = (Optr)new_Slot(0, L"bindings");
    layout_IO_Environment = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_IO_Environment)->values[0] = slot_IO_Environment_bindings; // bindings 
    IO_Environment_Class = (Class)new_Class(Object_Class, layout_IO_Environment_Class_class);
    IO_Environment_Class->layout = layout_IO_Environment;
    IO_Environment_Class->name = SMB_Environment;
    
}

void init_IO_PEnvironment_methods() {
    init_SMB_environ();
    init_SMB_environment();
    init_SMB_initialize();
    init_SMB_at_();
    init_SMB_loadEnvironment();
    init_SMB_at_ifAbsent_();
    init_class_SMB_initialize();
    init_class_SMB_instance();
    
}