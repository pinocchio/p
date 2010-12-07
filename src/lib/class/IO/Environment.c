#include <lib/class/IO/Environment.h>


Optr slot_IO_Environment_Class_class_instance;
Optr layout_IO_Environment_Class_class;
Optr slot_IO_Environment_bindings;
Optr layout_IO_Environment;


static void init_SMB_environ() {
    Symbol SMB_environ = new_Symbol(L"environ");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    Annotation PAnnotation9853 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_environ, (Optr)SMB_IO_minus_Environment);
    Array PArray9852 = new_Array_with(1, (Optr)PAnnotation9853);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9855 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9854 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9855, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9851 = new_NativeMethod_with(empty_Array, empty_Array, PArray9852, PThreadedCode9854, 2, PSend9855, self);
    
    MethodClosure MC_SMB_environ = new_MethodClosure((Method)PNativeMethod9851, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environ, MC_SMB_environ);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode9857 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_method_return);
    Method PMethod9856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9857, 1, slot_IO_Environment_bindings);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod9856, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    // loadEnvironment. 
    Send PSend9860 = new_Send((Optr)self, SMB_loadEnvironment, 0);
    Array PThreadedCode9859 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9860, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9859, 2, PSend9860, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9858, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray9862 = new_Array_with(1, (Optr)VAR_key_0_0);
    // at:. 
    Send PSend9864 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode9863 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend9864, (Optr)&t_method_return);
    Method PMethod9861 = new_Method_with(PArray9862, empty_Array, empty_Array, PThreadedCode9863, 1, PSend9864);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod9861, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_loadEnvironment() {
    Symbol SMB_loadEnvironment = new_Symbol(L"loadEnvironment");
    Variable VAR_env_0_0 = new_Variable_named(L"env", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray9866 = new_Array_with(3, (Optr)VAR_env_0_0, (Optr)VAR_parser_0_1, (Optr)VAR_value_0_2);
    Symbol SMB_environ = new_Symbol(L"environ");
    // environ. 
    Send PSend9869 = new_Send((Optr)self, SMB_environ, 0);
    Assign PAssign9868 = new_Assign((Optr)VAR_env_0_0, (Optr)PSend9869);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9871 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9870 = new_Assign((Optr)slot_IO_Environment_bindings, (Optr)PSend9871);
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    String string_9874 = new_String(L"ENTRY");
    Constant string_9874_Const = new_Constant((Optr)string_9874);
    Character char_9881 = new_Character(L'=');
    Constant char_9881_Const = new_Constant((Optr)char_9881);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend9880 = new_Send((Optr)char_9881_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9879 = new_Send((Optr)PSend9880, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend9878 = new_Send((Optr)PSend9879, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend9877 = new_Send((Optr)PSend9878, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend9876 = new_Send((Optr)PSend9877, SMB__logicAnd_, 1, (Optr)char_9881_Const);
    Variable VAR_scanner_1_0 = new_Variable_named(L"scanner", 1);
    Array PArray9883 = new_Array_with(1, (Optr)VAR_scanner_1_0);
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend9885 = new_Send((Optr)VAR_scanner_1_0, SMB_upToEnd, 0);
    Array PThreadedCode9884 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_scanner_1_0, (Optr)&t_send0, (Optr)PSend9885, (Optr)&t_method_return);
    Block PBlock9882 = new_Block_with(PArray9883, empty_Array, PThreadedCode9884, 1, PSend9885);
    // &&. 
    Send PSend9875 = new_Send((Optr)PSend9876, SMB__logicAnd_, 1, (Optr)PBlock9882);
    Variable VAR_nv_1_0 = new_Variable_named(L"nv", 1);
    Array PArray9887 = new_Array_with(1, (Optr)VAR_nv_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend9890 = new_Send((Optr)VAR_nv_1_0, SMB_removeLast, 0);
    Assign PAssign9889 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend9890);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend9891 = new_Send((Optr)VAR_nv_1_0, SMB_asSymbol, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend9892 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_put_, 2, (Optr)PSend9891, (Optr)VAR_value_0_2);
    Array PThreadedCode9888 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign9889, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_nv_1_0, (Optr)&t_send0, (Optr)PSend9891, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend9892, (Optr)&t_method_return);
    Block PBlock9886 = new_Block_with(PArray9887, empty_Array, PThreadedCode9888, 2, PAssign9889, PSend9892);
    // named:parsing:semantics:. 
    Send PSend9873 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_semantics_, 3, (Optr)string_9874_Const, (Optr)PSend9875, (Optr)PBlock9886);
    Assign PAssign9872 = new_Assign((Optr)VAR_parser_0_1, (Optr)PSend9873);
    Variable VAR_entry_1_0 = new_Variable_named(L"entry", 1);
    Array PArray9894 = new_Array_with(1, (Optr)VAR_entry_1_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend9896 = new_Send((Optr)VAR_parser_0_1, SMB_parse_, 1, (Optr)VAR_entry_1_0);
    Array PThreadedCode9895 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_variable, (Optr)VAR_entry_1_0, (Optr)&t_send1, (Optr)PSend9896, (Optr)&t_method_return);
    Block PBlock9893 = new_Block_with(PArray9894, empty_Array, PThreadedCode9895, 1, PSend9896);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend9897 = new_Send((Optr)VAR_env_0_0, SMB_do_, 1, (Optr)PBlock9893);
    Array PThreadedCode9867 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign9868, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9870, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9871, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9872, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_9874, (Optr)&t_push1, (Optr)char_9881, (Optr)&t_send0, (Optr)PSend9880, (Optr)&t_send0, (Optr)PSend9879, (Optr)&t_send0, (Optr)PSend9878, (Optr)&t_send0, (Optr)PSend9877, (Optr)&t_push1, (Optr)char_9881, (Optr)&t_send1, (Optr)PSend9876, (Optr)&t_push_closure, (Optr)PBlock9882, (Optr)&t_send1, (Optr)PSend9875, (Optr)&t_push_closure, (Optr)PBlock9886, (Optr)&t_send3, (Optr)PSend9873, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_env_0_0, (Optr)&t_push_closure, (Optr)PBlock9893, (Optr)&t_send1, (Optr)PSend9897, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9865 = new_Method_with(empty_Array, PArray9866, empty_Array, PThreadedCode9867, 5, PAssign9868, PAssign9870, PAssign9872, PSend9897, self);
    
    MethodClosure MC_SMB_loadEnvironment = new_MethodClosure((Method)PMethod9865, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_loadEnvironment, MC_SMB_loadEnvironment);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray9899 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    // at:ifAbsent:. 
    Send PSend9901 = new_Send((Optr)slot_IO_Environment_bindings, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode9900 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Environment_bindings, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend9901, (Optr)&t_method_return);
    Method PMethod9898 = new_Method_with(PArray9899, empty_Array, empty_Array, PThreadedCode9900, 1, PSend9901);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod9898, IO_Environment_Class);
    store_method(IO_Environment_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Environment = new_Symbol(L"IO.Environment");
    String string_9904 = new_String(L"plugin/io/Environment.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Environment_Const = new_Constant((Optr)SMB_IO_minus_Environment);
    Constant string_9904_Const = new_Constant((Optr)string_9904);
    // require:at:. 
    Send PSend9905 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Environment_Const, (Optr)string_9904_Const);
    Array PThreadedCode9903 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Environment, (Optr)&t_push1, (Optr)string_9904, (Optr)&t_send2, (Optr)PSend9905, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9903, 2, PSend9905, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9902, HEADER(IO_Environment_Class));
    store_method(HEADER(IO_Environment_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9911 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9910 = new_Assign((Optr)slot_IO_Environment_Class_class_instance, (Optr)PSend9911);
    Array PThreadedCode9909 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9910, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9911, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9908 = new_Block_with(empty_Array, empty_Array, PThreadedCode9909, 1, PAssign9910);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9912 = new_Send((Optr)slot_IO_Environment_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9908);
    Array PThreadedCode9907 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9908, (Optr)&t_send1, (Optr)PSend9912, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Environment_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9906 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9907, 2, PSend9912, slot_IO_Environment_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9906, HEADER(IO_Environment_Class));
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