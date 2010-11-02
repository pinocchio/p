#include <lib/class/IO/Environment.h>


Optr slot_IO_Environment_Class_class_instance;
Optr layout_IO_Environment_Class_class;
Optr slot_IO_Environment_bindings;
Optr layout_IO_Environment;


static void init_SMB_environ() {
    Symbol SMB_environ = new_Symbol(L"environ");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    Annotation PAnnotation9559 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_environ, (Optr)SMB_IO_minus_Environment);
    Array PArray9558 = new_Array_with(1, (Optr)PAnnotation9559);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9561 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9560 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9561, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9557 = new_NativeMethod_with(empty_Array, empty_Array, PArray9558, PThreadedCode9560, 2, PSend9561, self);
    
    MethodClosure MC_SMB_environ = new_MethodClosure((Method)PNativeMethod9557, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environ, MC_SMB_environ);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode9563 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_method_return);
    Method PMethod9562 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9563, 1, slot_IO_Environment_bindings);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod9562, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    // loadEnvironment. 
    Send PSend9566 = new_Send((Optr)self, SMB_loadEnvironment, 0);
    Array PThreadedCode9565 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9566, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9564 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9565, 2, PSend9566, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9564, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray9568 = new_Array_with(1, (Optr)VAR_key_0_0);
    // at:. 
    Send PSend9570 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode9569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend9570, (Optr)&t_method_return);
    Method PMethod9567 = new_Method_with(PArray9568, empty_Array, empty_Array, PThreadedCode9569, 1, PSend9570);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod9567, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_loadEnvironment() {
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    Variable VAR_env_0_0 = new_Variable_named(L"env", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray9572 = new_Array_with(3, (Optr)VAR_env_0_0, (Optr)VAR_parser_0_1, (Optr)VAR_value_0_2);
    Symbol SMB_environ = new_Symbol(L"environ");
    // environ. 
    Send PSend9575 = new_Send((Optr)self, SMB_environ, 0);
    Assign PAssign9574 = new_Assign((Optr)VAR_env_0_0, (Optr)PSend9575);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9577 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9576 = new_Assign((Optr)slot_IO_Environment_bindings, (Optr)PSend9577);
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    String string_9580 = new_String(L"ENTRY");
    Constant string_9580_Const = new_Constant((Optr)string_9580);
    Character char_9587 = new_Character(L'=');
    Constant char_9587_Const = new_Constant((Optr)char_9587);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend9586 = new_Send((Optr)char_9587_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9585 = new_Send((Optr)PSend9586, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend9584 = new_Send((Optr)PSend9585, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend9583 = new_Send((Optr)PSend9584, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend9582 = new_Send((Optr)PSend9583, SMB__logicAnd_, 1, (Optr)char_9587_Const);
    Variable VAR_scanner_1_0 = new_Variable_named(L"scanner", 1);
    Array PArray9589 = new_Array_with(1, (Optr)VAR_scanner_1_0);
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend9591 = new_Send((Optr)VAR_scanner_1_0, SMB_upToEnd, 0);
    Array PThreadedCode9590 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_scanner_1_0, (Optr)&t_send0, (Optr)PSend9591, (Optr)&t_method_return);
    Block PBlock9588 = new_Block_with(PArray9589, empty_Array, PThreadedCode9590, 1, PSend9591);
    // &&. 
    Send PSend9581 = new_Send((Optr)PSend9582, SMB__logicAnd_, 1, (Optr)PBlock9588);
    Variable VAR_nv_1_0 = new_Variable_named(L"nv", 1);
    Array PArray9593 = new_Array_with(1, (Optr)VAR_nv_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend9596 = new_Send((Optr)VAR_nv_1_0, SMB_removeLast, 0);
    Assign PAssign9595 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend9596);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend9597 = new_Send((Optr)VAR_nv_1_0, SMB_asSymbol, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend9598 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_put_, 2, (Optr)PSend9597, (Optr)VAR_value_0_2);
    Array PThreadedCode9594 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign9595, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9596, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9597, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend9598, (Optr)&t_method_return);
    Block PBlock9592 = new_Block_with(PArray9593, empty_Array, PThreadedCode9594, 2, PAssign9595, PSend9598);
    // named:parsing:semantics:. 
    Send PSend9579 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_semantics_, 3, (Optr)string_9580_Const, (Optr)PSend9581, (Optr)PBlock9592);
    Assign PAssign9578 = new_Assign((Optr)VAR_parser_0_1, (Optr)PSend9579);
    Variable VAR_entry_1_0 = new_Variable_named(L"entry", 1);
    Array PArray9600 = new_Array_with(1, (Optr)VAR_entry_1_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend9602 = new_Send((Optr)VAR_parser_0_1, SMB_parse_, 1, (Optr)VAR_entry_1_0);
    Array PThreadedCode9601 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_variable, (Optr)VAR_entry_1_0, (Optr)&t_send1, (Optr)PSend9602, (Optr)&t_method_return);
    Block PBlock9599 = new_Block_with(PArray9600, empty_Array, PThreadedCode9601, 1, PSend9602);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend9603 = new_Send((Optr)VAR_env_0_0, SMB_do_, 1, (Optr)PBlock9599);
    Array PThreadedCode9573 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign9574, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9575, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9576, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9577, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9578, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_9580, (Optr)&t_push1, (Optr)char_9587, (Optr)&t_send0, (Optr)PSend9586, (Optr)&t_send0, (Optr)PSend9585, (Optr)&t_send0, (Optr)PSend9584, (Optr)&t_send0, (Optr)PSend9583, (Optr)&t_push1, (Optr)char_9587, (Optr)&t_send1, (Optr)PSend9582, (Optr)&t_push_closure, (Optr)PBlock9588, (Optr)&t_send1, (Optr)PSend9581, (Optr)&t_push_closure, (Optr)PBlock9592, (Optr)&t_send3, (Optr)PSend9579, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_env_0_0, (Optr)&t_push_closure, (Optr)PBlock9599, (Optr)&t_send1, (Optr)PSend9603, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9571 = new_Method_with(empty_Array, PArray9572, empty_Array, PThreadedCode9573, 5, PAssign9574, PAssign9576, PAssign9578, PSend9603, self);
    
    MethodClosure MC_SMB_loadEnvironment = new_MethodClosure((Method)PMethod9571, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_loadEnvironment, MC_SMB_loadEnvironment);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray9605 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    // at:ifAbsent:. 
    Send PSend9607 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode9606 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend9607, (Optr)&t_method_return);
    Method PMethod9604 = new_Method_with(PArray9605, empty_Array, empty_Array, PThreadedCode9606, 1, PSend9607);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod9604, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    String string_9610 = new_String(L"plugin/io/Environment.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Environment_Const = new_Constant((Optr)SMB_IO_minus_Environment);
    Constant string_9610_Const = new_Constant((Optr)string_9610);
    // require:at:. 
    Send PSend9611 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Environment_Const, (Optr)string_9610_Const);
    Array PThreadedCode9609 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Environment, (Optr)&t_push1, (Optr)string_9610, (Optr)&t_send2, (Optr)PSend9611, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9608 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9609, 2, PSend9611, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9608, HEADER(IO_Environment_Class));
    store_method(HEADER(IO_Environment_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9617 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9616 = new_Assign((Optr)slot_IO_Environment_Class_class_instance, (Optr)PSend9617);
    Array PThreadedCode9615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9616, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9617, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9614 = new_Block_with(empty_Array, empty_Array, PThreadedCode9615, 1, PAssign9616);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9618 = new_Send((Optr)slot_IO_Environment_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9614);
    Array PThreadedCode9613 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9614, (Optr)&t_send1, (Optr)PSend9618, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9613, 2, PSend9618, slot_IO_Environment_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9612, HEADER(IO_Environment_Class));
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