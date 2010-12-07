#include <lib/class/IO/Environment.h>


Optr slot_IO_Environment_Class_class_instance;
Optr layout_IO_Environment_Class_class;
Optr slot_IO_Environment_bindings;
Optr layout_IO_Environment;


static void init_SMB_environ() {
    Symbol SMB_environ = new_Symbol(L"environ");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    Annotation PAnnotation9819 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_environ, (Optr)SMB_IO_minus_Environment);
    Array PArray9818 = new_Array_with(1, (Optr)PAnnotation9819);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9821 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9820 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9821, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9817 = new_NativeMethod_with(empty_Array, empty_Array, PArray9818, PThreadedCode9820, 2, PSend9821, self);
    
    MethodClosure MC_SMB_environ = new_MethodClosure((Method)PNativeMethod9817, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environ, MC_SMB_environ);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode9823 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_method_return);
    Method PMethod9822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9823, 1, slot_IO_Environment_bindings);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod9822, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    // loadEnvironment. 
    Send PSend9826 = new_Send((Optr)self, SMB_loadEnvironment, 0);
    Array PThreadedCode9825 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9826, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9824 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9825, 2, PSend9826, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9824, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray9828 = new_Array_with(1, (Optr)VAR_key_0_0);
    // at:. 
    Send PSend9830 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode9829 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend9830, (Optr)&t_method_return);
    Method PMethod9827 = new_Method_with(PArray9828, empty_Array, empty_Array, PThreadedCode9829, 1, PSend9830);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod9827, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_loadEnvironment() {
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    Variable VAR_env_0_0 = new_Variable_named(L"env", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray9832 = new_Array_with(3, (Optr)VAR_env_0_0, (Optr)VAR_parser_0_1, (Optr)VAR_value_0_2);
    Symbol SMB_environ = new_Symbol(L"environ");
    // environ. 
    Send PSend9835 = new_Send((Optr)self, SMB_environ, 0);
    Assign PAssign9834 = new_Assign((Optr)VAR_env_0_0, (Optr)PSend9835);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9837 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9836 = new_Assign((Optr)slot_IO_Environment_bindings, (Optr)PSend9837);
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    String string_9840 = new_String(L"ENTRY");
    Constant string_9840_Const = new_Constant((Optr)string_9840);
    Character char_9847 = new_Character(L'=');
    Constant char_9847_Const = new_Constant((Optr)char_9847);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend9846 = new_Send((Optr)char_9847_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9845 = new_Send((Optr)PSend9846, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend9844 = new_Send((Optr)PSend9845, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend9843 = new_Send((Optr)PSend9844, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend9842 = new_Send((Optr)PSend9843, SMB__logicAnd_, 1, (Optr)char_9847_Const);
    Variable VAR_scanner_1_0 = new_Variable_named(L"scanner", 1);
    Array PArray9849 = new_Array_with(1, (Optr)VAR_scanner_1_0);
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend9851 = new_Send((Optr)VAR_scanner_1_0, SMB_upToEnd, 0);
    Array PThreadedCode9850 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_scanner_1_0, (Optr)&t_send0, (Optr)PSend9851, (Optr)&t_method_return);
    Block PBlock9848 = new_Block_with(PArray9849, empty_Array, PThreadedCode9850, 1, PSend9851);
    // &&. 
    Send PSend9841 = new_Send((Optr)PSend9842, SMB__logicAnd_, 1, (Optr)PBlock9848);
    Variable VAR_nv_1_0 = new_Variable_named(L"nv", 1);
    Array PArray9853 = new_Array_with(1, (Optr)VAR_nv_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend9856 = new_Send((Optr)VAR_nv_1_0, SMB_removeLast, 0);
    Assign PAssign9855 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend9856);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend9857 = new_Send((Optr)VAR_nv_1_0, SMB_asSymbol, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend9858 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_put_, 2, (Optr)PSend9857, (Optr)VAR_value_0_2);
    Array PThreadedCode9854 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign9855, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9856, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9857, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend9858, (Optr)&t_method_return);
    Block PBlock9852 = new_Block_with(PArray9853, empty_Array, PThreadedCode9854, 2, PAssign9855, PSend9858);
    // named:parsing:semantics:. 
    Send PSend9839 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_semantics_, 3, (Optr)string_9840_Const, (Optr)PSend9841, (Optr)PBlock9852);
    Assign PAssign9838 = new_Assign((Optr)VAR_parser_0_1, (Optr)PSend9839);
    Variable VAR_entry_1_0 = new_Variable_named(L"entry", 1);
    Array PArray9860 = new_Array_with(1, (Optr)VAR_entry_1_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend9862 = new_Send((Optr)VAR_parser_0_1, SMB_parse_, 1, (Optr)VAR_entry_1_0);
    Array PThreadedCode9861 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_variable, (Optr)VAR_entry_1_0, (Optr)&t_send1, (Optr)PSend9862, (Optr)&t_method_return);
    Block PBlock9859 = new_Block_with(PArray9860, empty_Array, PThreadedCode9861, 1, PSend9862);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend9863 = new_Send((Optr)VAR_env_0_0, SMB_do_, 1, (Optr)PBlock9859);
    Array PThreadedCode9833 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign9834, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9835, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9836, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9837, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9838, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_9840, (Optr)&t_push1, (Optr)char_9847, (Optr)&t_send0, (Optr)PSend9846, (Optr)&t_send0, (Optr)PSend9845, (Optr)&t_send0, (Optr)PSend9844, (Optr)&t_send0, (Optr)PSend9843, (Optr)&t_push1, (Optr)char_9847, (Optr)&t_send1, (Optr)PSend9842, (Optr)&t_push_closure, (Optr)PBlock9848, (Optr)&t_send1, (Optr)PSend9841, (Optr)&t_push_closure, (Optr)PBlock9852, (Optr)&t_send3, (Optr)PSend9839, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_env_0_0, (Optr)&t_push_closure, (Optr)PBlock9859, (Optr)&t_send1, (Optr)PSend9863, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9831 = new_Method_with(empty_Array, PArray9832, empty_Array, PThreadedCode9833, 5, PAssign9834, PAssign9836, PAssign9838, PSend9863, self);
    
    MethodClosure MC_SMB_loadEnvironment = new_MethodClosure((Method)PMethod9831, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_loadEnvironment, MC_SMB_loadEnvironment);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray9865 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    // at:ifAbsent:. 
    Send PSend9867 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode9866 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend9867, (Optr)&t_method_return);
    Method PMethod9864 = new_Method_with(PArray9865, empty_Array, empty_Array, PThreadedCode9866, 1, PSend9867);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod9864, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    String string_9870 = new_String(L"plugin/io/Environment.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Environment_Const = new_Constant((Optr)SMB_IO_minus_Environment);
    Constant string_9870_Const = new_Constant((Optr)string_9870);
    // require:at:. 
    Send PSend9871 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Environment_Const, (Optr)string_9870_Const);
    Array PThreadedCode9869 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Environment, (Optr)&t_push1, (Optr)string_9870, (Optr)&t_send2, (Optr)PSend9871, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9869, 2, PSend9871, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9868, HEADER(IO_Environment_Class));
    store_method(HEADER(IO_Environment_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9877 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9876 = new_Assign((Optr)slot_IO_Environment_Class_class_instance, (Optr)PSend9877);
    Array PThreadedCode9875 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9876, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9877, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9874 = new_Block_with(empty_Array, empty_Array, PThreadedCode9875, 1, PAssign9876);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9878 = new_Send((Optr)slot_IO_Environment_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9874);
    Array PThreadedCode9873 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9874, (Optr)&t_send1, (Optr)PSend9878, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9873, 2, PSend9878, slot_IO_Environment_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9872, HEADER(IO_Environment_Class));
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