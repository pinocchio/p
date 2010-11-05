#include <lib/class/IO/Environment.h>


Optr slot_IO_Environment_Class_class_instance;
Optr layout_IO_Environment_Class_class;
Optr slot_IO_Environment_bindings;
Optr layout_IO_Environment;


static void init_SMB_environ() {
    Symbol SMB_environ = new_Symbol(L"environ");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    Annotation PAnnotation9583 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_environ, (Optr)SMB_IO_minus_Environment);
    Array PArray9582 = new_Array_with(1, (Optr)PAnnotation9583);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9585 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9584 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9585, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9581 = new_NativeMethod_with(empty_Array, empty_Array, PArray9582, PThreadedCode9584, 2, PSend9585, self);
    
    MethodClosure MC_SMB_environ = new_MethodClosure((Method)PNativeMethod9581, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environ, MC_SMB_environ);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode9587 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_method_return);
    Method PMethod9586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9587, 1, slot_IO_Environment_bindings);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod9586, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    // loadEnvironment. 
    Send PSend9590 = new_Send((Optr)self, SMB_loadEnvironment, 0);
    Array PThreadedCode9589 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9590, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9589, 2, PSend9590, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9588, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray9592 = new_Array_with(1, (Optr)VAR_key_0_0);
    // at:. 
    Send PSend9594 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode9593 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend9594, (Optr)&t_method_return);
    Method PMethod9591 = new_Method_with(PArray9592, empty_Array, empty_Array, PThreadedCode9593, 1, PSend9594);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod9591, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_loadEnvironment() {
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    Variable VAR_env_0_0 = new_Variable_named(L"env", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray9596 = new_Array_with(3, (Optr)VAR_env_0_0, (Optr)VAR_parser_0_1, (Optr)VAR_value_0_2);
    Symbol SMB_environ = new_Symbol(L"environ");
    // environ. 
    Send PSend9599 = new_Send((Optr)self, SMB_environ, 0);
    Assign PAssign9598 = new_Assign((Optr)VAR_env_0_0, (Optr)PSend9599);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9601 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9600 = new_Assign((Optr)slot_IO_Environment_bindings, (Optr)PSend9601);
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    String string_9604 = new_String(L"ENTRY");
    Constant string_9604_Const = new_Constant((Optr)string_9604);
    Character char_9611 = new_Character(L'=');
    Constant char_9611_Const = new_Constant((Optr)char_9611);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend9610 = new_Send((Optr)char_9611_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9609 = new_Send((Optr)PSend9610, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend9608 = new_Send((Optr)PSend9609, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend9607 = new_Send((Optr)PSend9608, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend9606 = new_Send((Optr)PSend9607, SMB__logicAnd_, 1, (Optr)char_9611_Const);
    Variable VAR_scanner_1_0 = new_Variable_named(L"scanner", 1);
    Array PArray9613 = new_Array_with(1, (Optr)VAR_scanner_1_0);
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend9615 = new_Send((Optr)VAR_scanner_1_0, SMB_upToEnd, 0);
    Array PThreadedCode9614 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_scanner_1_0, (Optr)&t_send0, (Optr)PSend9615, (Optr)&t_method_return);
    Block PBlock9612 = new_Block_with(PArray9613, empty_Array, PThreadedCode9614, 1, PSend9615);
    // &&. 
    Send PSend9605 = new_Send((Optr)PSend9606, SMB__logicAnd_, 1, (Optr)PBlock9612);
    Variable VAR_nv_1_0 = new_Variable_named(L"nv", 1);
    Array PArray9617 = new_Array_with(1, (Optr)VAR_nv_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend9620 = new_Send((Optr)VAR_nv_1_0, SMB_removeLast, 0);
    Assign PAssign9619 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend9620);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend9621 = new_Send((Optr)VAR_nv_1_0, SMB_asSymbol, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend9622 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_put_, 2, (Optr)PSend9621, (Optr)VAR_value_0_2);
    Array PThreadedCode9618 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign9619, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9620, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9621, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend9622, (Optr)&t_method_return);
    Block PBlock9616 = new_Block_with(PArray9617, empty_Array, PThreadedCode9618, 2, PAssign9619, PSend9622);
    // named:parsing:semantics:. 
    Send PSend9603 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_semantics_, 3, (Optr)string_9604_Const, (Optr)PSend9605, (Optr)PBlock9616);
    Assign PAssign9602 = new_Assign((Optr)VAR_parser_0_1, (Optr)PSend9603);
    Variable VAR_entry_1_0 = new_Variable_named(L"entry", 1);
    Array PArray9624 = new_Array_with(1, (Optr)VAR_entry_1_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend9626 = new_Send((Optr)VAR_parser_0_1, SMB_parse_, 1, (Optr)VAR_entry_1_0);
    Array PThreadedCode9625 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_variable, (Optr)VAR_entry_1_0, (Optr)&t_send1, (Optr)PSend9626, (Optr)&t_method_return);
    Block PBlock9623 = new_Block_with(PArray9624, empty_Array, PThreadedCode9625, 1, PSend9626);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend9627 = new_Send((Optr)VAR_env_0_0, SMB_do_, 1, (Optr)PBlock9623);
    Array PThreadedCode9597 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign9598, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9599, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9600, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9601, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9602, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_9604, (Optr)&t_push1, (Optr)char_9611, (Optr)&t_send0, (Optr)PSend9610, (Optr)&t_send0, (Optr)PSend9609, (Optr)&t_send0, (Optr)PSend9608, (Optr)&t_send0, (Optr)PSend9607, (Optr)&t_push1, (Optr)char_9611, (Optr)&t_send1, (Optr)PSend9606, (Optr)&t_push_closure, (Optr)PBlock9612, (Optr)&t_send1, (Optr)PSend9605, (Optr)&t_push_closure, (Optr)PBlock9616, (Optr)&t_send3, (Optr)PSend9603, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_env_0_0, (Optr)&t_push_closure, (Optr)PBlock9623, (Optr)&t_send1, (Optr)PSend9627, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9595 = new_Method_with(empty_Array, PArray9596, empty_Array, PThreadedCode9597, 5, PAssign9598, PAssign9600, PAssign9602, PSend9627, self);
    
    MethodClosure MC_SMB_loadEnvironment = new_MethodClosure((Method)PMethod9595, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_loadEnvironment, MC_SMB_loadEnvironment);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray9629 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    // at:ifAbsent:. 
    Send PSend9631 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode9630 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend9631, (Optr)&t_method_return);
    Method PMethod9628 = new_Method_with(PArray9629, empty_Array, empty_Array, PThreadedCode9630, 1, PSend9631);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod9628, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    String string_9634 = new_String(L"plugin/io/Environment.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Environment_Const = new_Constant((Optr)SMB_IO_minus_Environment);
    Constant string_9634_Const = new_Constant((Optr)string_9634);
    // require:at:. 
    Send PSend9635 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Environment_Const, (Optr)string_9634_Const);
    Array PThreadedCode9633 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Environment, (Optr)&t_push1, (Optr)string_9634, (Optr)&t_send2, (Optr)PSend9635, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9633, 2, PSend9635, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9632, HEADER(IO_Environment_Class));
    store_method(HEADER(IO_Environment_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9641 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9640 = new_Assign((Optr)slot_IO_Environment_Class_class_instance, (Optr)PSend9641);
    Array PThreadedCode9639 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9640, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9641, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9638 = new_Block_with(empty_Array, empty_Array, PThreadedCode9639, 1, PAssign9640);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9642 = new_Send((Optr)slot_IO_Environment_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9638);
    Array PThreadedCode9637 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9638, (Optr)&t_send1, (Optr)PSend9642, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9636 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9637, 2, PSend9642, slot_IO_Environment_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9636, HEADER(IO_Environment_Class));
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