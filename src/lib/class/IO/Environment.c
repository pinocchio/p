#include <lib/class/IO/Environment.h>


Optr slot_IO_Environment_Class_class_instance;
Optr layout_IO_Environment_Class_class;
Optr slot_IO_Environment_bindings;
Optr layout_IO_Environment;


static void init_SMB_environ() {
    Symbol SMB_environ = new_Symbol(L"environ");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    Annotation PAnnotation9621 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_environ, (Optr)SMB_IO_minus_Environment);
    Array PArray9620 = new_Array_with(1, (Optr)PAnnotation9621);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9623 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9622 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9623, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9619 = new_NativeMethod_with(empty_Array, empty_Array, PArray9620, PThreadedCode9622, 2, PSend9623, self);
    
    MethodClosure MC_SMB_environ = new_MethodClosure((Method)PNativeMethod9619, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environ, MC_SMB_environ);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode9625 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_method_return);
    Method PMethod9624 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9625, 1, slot_IO_Environment_bindings);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod9624, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    // loadEnvironment. 
    Send PSend9628 = new_Send((Optr)self, SMB_loadEnvironment, 0);
    Array PThreadedCode9627 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9628, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9627, 2, PSend9628, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9626, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray9630 = new_Array_with(1, (Optr)VAR_key_0_0);
    // at:. 
    Send PSend9632 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode9631 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend9632, (Optr)&t_method_return);
    Method PMethod9629 = new_Method_with(PArray9630, empty_Array, empty_Array, PThreadedCode9631, 1, PSend9632);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod9629, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_loadEnvironment() {
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    Variable VAR_env_0_0 = new_Variable_named(L"env", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray9634 = new_Array_with(3, (Optr)VAR_env_0_0, (Optr)VAR_parser_0_1, (Optr)VAR_value_0_2);
    Symbol SMB_environ = new_Symbol(L"environ");
    // environ. 
    Send PSend9637 = new_Send((Optr)self, SMB_environ, 0);
    Assign PAssign9636 = new_Assign((Optr)VAR_env_0_0, (Optr)PSend9637);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9639 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9638 = new_Assign((Optr)slot_IO_Environment_bindings, (Optr)PSend9639);
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    String string_9642 = new_String(L"ENTRY");
    Constant string_9642_Const = new_Constant((Optr)string_9642);
    Character char_9649 = new_Character(L'=');
    Constant char_9649_Const = new_Constant((Optr)char_9649);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend9648 = new_Send((Optr)char_9649_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9647 = new_Send((Optr)PSend9648, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend9646 = new_Send((Optr)PSend9647, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend9645 = new_Send((Optr)PSend9646, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend9644 = new_Send((Optr)PSend9645, SMB__logicAnd_, 1, (Optr)char_9649_Const);
    Variable VAR_scanner_1_0 = new_Variable_named(L"scanner", 1);
    Array PArray9651 = new_Array_with(1, (Optr)VAR_scanner_1_0);
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend9653 = new_Send((Optr)VAR_scanner_1_0, SMB_upToEnd, 0);
    Array PThreadedCode9652 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_scanner_1_0, (Optr)&t_send0, (Optr)PSend9653, (Optr)&t_method_return);
    Block PBlock9650 = new_Block_with(PArray9651, empty_Array, PThreadedCode9652, 1, PSend9653);
    // &&. 
    Send PSend9643 = new_Send((Optr)PSend9644, SMB__logicAnd_, 1, (Optr)PBlock9650);
    Variable VAR_nv_1_0 = new_Variable_named(L"nv", 1);
    Array PArray9655 = new_Array_with(1, (Optr)VAR_nv_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend9658 = new_Send((Optr)VAR_nv_1_0, SMB_removeLast, 0);
    Assign PAssign9657 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend9658);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend9659 = new_Send((Optr)VAR_nv_1_0, SMB_asSymbol, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend9660 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_put_, 2, (Optr)PSend9659, (Optr)VAR_value_0_2);
    Array PThreadedCode9656 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign9657, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9658, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9659, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend9660, (Optr)&t_method_return);
    Block PBlock9654 = new_Block_with(PArray9655, empty_Array, PThreadedCode9656, 2, PAssign9657, PSend9660);
    // named:parsing:semantics:. 
    Send PSend9641 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_semantics_, 3, (Optr)string_9642_Const, (Optr)PSend9643, (Optr)PBlock9654);
    Assign PAssign9640 = new_Assign((Optr)VAR_parser_0_1, (Optr)PSend9641);
    Variable VAR_entry_1_0 = new_Variable_named(L"entry", 1);
    Array PArray9662 = new_Array_with(1, (Optr)VAR_entry_1_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend9664 = new_Send((Optr)VAR_parser_0_1, SMB_parse_, 1, (Optr)VAR_entry_1_0);
    Array PThreadedCode9663 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_variable, (Optr)VAR_entry_1_0, (Optr)&t_send1, (Optr)PSend9664, (Optr)&t_method_return);
    Block PBlock9661 = new_Block_with(PArray9662, empty_Array, PThreadedCode9663, 1, PSend9664);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend9665 = new_Send((Optr)VAR_env_0_0, SMB_do_, 1, (Optr)PBlock9661);
    Array PThreadedCode9635 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign9636, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9637, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9638, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9639, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9640, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_9642, (Optr)&t_push1, (Optr)char_9649, (Optr)&t_send0, (Optr)PSend9648, (Optr)&t_send0, (Optr)PSend9647, (Optr)&t_send0, (Optr)PSend9646, (Optr)&t_send0, (Optr)PSend9645, (Optr)&t_push1, (Optr)char_9649, (Optr)&t_send1, (Optr)PSend9644, (Optr)&t_push_closure, (Optr)PBlock9650, (Optr)&t_send1, (Optr)PSend9643, (Optr)&t_push_closure, (Optr)PBlock9654, (Optr)&t_send3, (Optr)PSend9641, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_env_0_0, (Optr)&t_push_closure, (Optr)PBlock9661, (Optr)&t_send1, (Optr)PSend9665, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9633 = new_Method_with(empty_Array, PArray9634, empty_Array, PThreadedCode9635, 5, PAssign9636, PAssign9638, PAssign9640, PSend9665, self);
    
    MethodClosure MC_SMB_loadEnvironment = new_MethodClosure((Method)PMethod9633, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_loadEnvironment, MC_SMB_loadEnvironment);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray9667 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    // at:ifAbsent:. 
    Send PSend9669 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode9668 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend9669, (Optr)&t_method_return);
    Method PMethod9666 = new_Method_with(PArray9667, empty_Array, empty_Array, PThreadedCode9668, 1, PSend9669);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod9666, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    String string_9672 = new_String(L"plugin/io/Environment.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Environment_Const = new_Constant((Optr)SMB_IO_minus_Environment);
    Constant string_9672_Const = new_Constant((Optr)string_9672);
    // require:at:. 
    Send PSend9673 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Environment_Const, (Optr)string_9672_Const);
    Array PThreadedCode9671 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Environment, (Optr)&t_push1, (Optr)string_9672, (Optr)&t_send2, (Optr)PSend9673, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9670 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9671, 2, PSend9673, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9670, HEADER(IO_Environment_Class));
    store_method(HEADER(IO_Environment_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9679 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9678 = new_Assign((Optr)slot_IO_Environment_Class_class_instance, (Optr)PSend9679);
    Array PThreadedCode9677 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9678, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9679, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9676 = new_Block_with(empty_Array, empty_Array, PThreadedCode9677, 1, PAssign9678);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9680 = new_Send((Optr)slot_IO_Environment_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9676);
    Array PThreadedCode9675 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9676, (Optr)&t_send1, (Optr)PSend9680, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9675, 2, PSend9680, slot_IO_Environment_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9674, HEADER(IO_Environment_Class));
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