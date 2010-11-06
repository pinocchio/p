#include <lib/class/IO/Environment.h>


Optr slot_IO_Environment_Class_class_instance;
Optr layout_IO_Environment_Class_class;
Optr slot_IO_Environment_bindings;
Optr layout_IO_Environment;


static void init_SMB_environ() {
    Symbol SMB_environ = new_Symbol(L"environ");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    Annotation PAnnotation9632 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_environ, (Optr)SMB_IO_minus_Environment);
    Array PArray9631 = new_Array_with(1, (Optr)PAnnotation9632);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9634 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9633 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9634, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9630 = new_NativeMethod_with(empty_Array, empty_Array, PArray9631, PThreadedCode9633, 2, PSend9634, self);
    
    MethodClosure MC_SMB_environ = new_MethodClosure((Method)PNativeMethod9630, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environ, MC_SMB_environ);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode9636 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_method_return);
    Method PMethod9635 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9636, 1, slot_IO_Environment_bindings);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod9635, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    // loadEnvironment. 
    Send PSend9639 = new_Send((Optr)self, SMB_loadEnvironment, 0);
    Array PThreadedCode9638 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9639, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9638, 2, PSend9639, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9637, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray9641 = new_Array_with(1, (Optr)VAR_key_0_0);
    // at:. 
    Send PSend9643 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode9642 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend9643, (Optr)&t_method_return);
    Method PMethod9640 = new_Method_with(PArray9641, empty_Array, empty_Array, PThreadedCode9642, 1, PSend9643);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod9640, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_loadEnvironment() {
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    Variable VAR_env_0_0 = new_Variable_named(L"env", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray9645 = new_Array_with(3, (Optr)VAR_env_0_0, (Optr)VAR_parser_0_1, (Optr)VAR_value_0_2);
    Symbol SMB_environ = new_Symbol(L"environ");
    // environ. 
    Send PSend9648 = new_Send((Optr)self, SMB_environ, 0);
    Assign PAssign9647 = new_Assign((Optr)VAR_env_0_0, (Optr)PSend9648);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9650 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9649 = new_Assign((Optr)slot_IO_Environment_bindings, (Optr)PSend9650);
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    String string_9653 = new_String(L"ENTRY");
    Constant string_9653_Const = new_Constant((Optr)string_9653);
    Character char_9660 = new_Character(L'=');
    Constant char_9660_Const = new_Constant((Optr)char_9660);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend9659 = new_Send((Optr)char_9660_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9658 = new_Send((Optr)PSend9659, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend9657 = new_Send((Optr)PSend9658, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend9656 = new_Send((Optr)PSend9657, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend9655 = new_Send((Optr)PSend9656, SMB__logicAnd_, 1, (Optr)char_9660_Const);
    Variable VAR_scanner_1_0 = new_Variable_named(L"scanner", 1);
    Array PArray9662 = new_Array_with(1, (Optr)VAR_scanner_1_0);
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend9664 = new_Send((Optr)VAR_scanner_1_0, SMB_upToEnd, 0);
    Array PThreadedCode9663 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_scanner_1_0, (Optr)&t_send0, (Optr)PSend9664, (Optr)&t_method_return);
    Block PBlock9661 = new_Block_with(PArray9662, empty_Array, PThreadedCode9663, 1, PSend9664);
    // &&. 
    Send PSend9654 = new_Send((Optr)PSend9655, SMB__logicAnd_, 1, (Optr)PBlock9661);
    Variable VAR_nv_1_0 = new_Variable_named(L"nv", 1);
    Array PArray9666 = new_Array_with(1, (Optr)VAR_nv_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend9669 = new_Send((Optr)VAR_nv_1_0, SMB_removeLast, 0);
    Assign PAssign9668 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend9669);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend9670 = new_Send((Optr)VAR_nv_1_0, SMB_asSymbol, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend9671 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_put_, 2, (Optr)PSend9670, (Optr)VAR_value_0_2);
    Array PThreadedCode9667 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign9668, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9669, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9670, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend9671, (Optr)&t_method_return);
    Block PBlock9665 = new_Block_with(PArray9666, empty_Array, PThreadedCode9667, 2, PAssign9668, PSend9671);
    // named:parsing:semantics:. 
    Send PSend9652 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_semantics_, 3, (Optr)string_9653_Const, (Optr)PSend9654, (Optr)PBlock9665);
    Assign PAssign9651 = new_Assign((Optr)VAR_parser_0_1, (Optr)PSend9652);
    Variable VAR_entry_1_0 = new_Variable_named(L"entry", 1);
    Array PArray9673 = new_Array_with(1, (Optr)VAR_entry_1_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend9675 = new_Send((Optr)VAR_parser_0_1, SMB_parse_, 1, (Optr)VAR_entry_1_0);
    Array PThreadedCode9674 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_variable, (Optr)VAR_entry_1_0, (Optr)&t_send1, (Optr)PSend9675, (Optr)&t_method_return);
    Block PBlock9672 = new_Block_with(PArray9673, empty_Array, PThreadedCode9674, 1, PSend9675);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend9676 = new_Send((Optr)VAR_env_0_0, SMB_do_, 1, (Optr)PBlock9672);
    Array PThreadedCode9646 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign9647, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9648, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9649, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9651, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_9653, (Optr)&t_push1, (Optr)char_9660, (Optr)&t_send0, (Optr)PSend9659, (Optr)&t_send0, (Optr)PSend9658, (Optr)&t_send0, (Optr)PSend9657, (Optr)&t_send0, (Optr)PSend9656, (Optr)&t_push1, (Optr)char_9660, (Optr)&t_send1, (Optr)PSend9655, (Optr)&t_push_closure, (Optr)PBlock9661, (Optr)&t_send1, (Optr)PSend9654, (Optr)&t_push_closure, (Optr)PBlock9665, (Optr)&t_send3, (Optr)PSend9652, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_env_0_0, (Optr)&t_push_closure, (Optr)PBlock9672, (Optr)&t_send1, (Optr)PSend9676, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9644 = new_Method_with(empty_Array, PArray9645, empty_Array, PThreadedCode9646, 5, PAssign9647, PAssign9649, PAssign9651, PSend9676, self);
    
    MethodClosure MC_SMB_loadEnvironment = new_MethodClosure((Method)PMethod9644, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_loadEnvironment, MC_SMB_loadEnvironment);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray9678 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    // at:ifAbsent:. 
    Send PSend9680 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode9679 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend9680, (Optr)&t_method_return);
    Method PMethod9677 = new_Method_with(PArray9678, empty_Array, empty_Array, PThreadedCode9679, 1, PSend9680);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod9677, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    String string_9683 = new_String(L"plugin/io/Environment.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Environment_Const = new_Constant((Optr)SMB_IO_minus_Environment);
    Constant string_9683_Const = new_Constant((Optr)string_9683);
    // require:at:. 
    Send PSend9684 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Environment_Const, (Optr)string_9683_Const);
    Array PThreadedCode9682 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Environment, (Optr)&t_push1, (Optr)string_9683, (Optr)&t_send2, (Optr)PSend9684, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9682, 2, PSend9684, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9681, HEADER(IO_Environment_Class));
    store_method(HEADER(IO_Environment_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9690 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9689 = new_Assign((Optr)slot_IO_Environment_Class_class_instance, (Optr)PSend9690);
    Array PThreadedCode9688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9689, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9690, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9687 = new_Block_with(empty_Array, empty_Array, PThreadedCode9688, 1, PAssign9689);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9691 = new_Send((Optr)slot_IO_Environment_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9687);
    Array PThreadedCode9686 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9687, (Optr)&t_send1, (Optr)PSend9691, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9686, 2, PSend9691, slot_IO_Environment_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9685, HEADER(IO_Environment_Class));
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