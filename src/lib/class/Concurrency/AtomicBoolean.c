#include <lib/class/Concurrency/AtomicBoolean.h>


Optr layout_Concurrency_AtomicBoolean_Class_class;
Optr slot_Concurrency_AtomicBoolean_value;
Optr layout_Concurrency_AtomicBoolean;


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Assign PAssign24915 = new_Assign((Optr)slot_Concurrency_AtomicBoolean_value, (Optr)false_Const);
    Array PThreadedCode24914 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign24915, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24914, 2, PAssign24915, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24913, Concurrency_AtomicBoolean_Class);
    store_method(Concurrency_AtomicBoolean_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode24917 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Concurrency_AtomicBoolean_value, (Optr)&t_method_return);
    Method PMethod24916 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24917, 1, slot_Concurrency_AtomicBoolean_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod24916, Concurrency_AtomicBoolean_Class);
    store_method(Concurrency_AtomicBoolean_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray24919 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign24921 = new_Assign((Optr)slot_Concurrency_AtomicBoolean_value, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode24920 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24921, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24918 = new_Method_with(PArray24919, empty_Array, empty_Array, PThreadedCode24920, 2, PAssign24921, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod24918, Concurrency_AtomicBoolean_Class);
    store_method(Concurrency_AtomicBoolean_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_testAndSet() {
    Symbol SMB_testAndSet = new_Symbol(L"testAndSet");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_Concurrency_minus_AtomicBoolean = new_Symbol(L"Concurrency.AtomicBoolean");
    String string_24925 = new_String(L"\n    if (${value} == true) {\n        ^true;\n    } else {\n        ${value} = true;\n        ^false;\n    }\n\t");
    Annotation PAnnotation24924 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_testAndSet, (Optr)SMB_Concurrency_minus_AtomicBoolean, (Optr)string_24925);
    Array PArray24923 = new_Array_with(1, (Optr)PAnnotation24924);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend24927 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode24926 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24927, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod24922 = new_NativeMethod_with(empty_Array, empty_Array, PArray24923, PThreadedCode24926, 2, PSend24927, self);
    
    MethodClosure MC_SMB_testAndSet = new_MethodClosure((Method)PNativeMethod24922, Concurrency_AtomicBoolean_Class);
    store_method(Concurrency_AtomicBoolean_Class, SMB_testAndSet, MC_SMB_testAndSet);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Concurrency_minus_AtomicBoolean = new_Symbol(L"Concurrency.AtomicBoolean");
    String string_24930 = new_String(L"plugin/concurrency/AtomicBoolean.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Concurrency_minus_AtomicBoolean_Const = new_Constant((Optr)SMB_Concurrency_minus_AtomicBoolean);
    Constant string_24930_Const = new_Constant((Optr)string_24930);
    // require:at:. 
    Send PSend24931 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Concurrency_minus_AtomicBoolean_Const, (Optr)string_24930_Const);
    Array PThreadedCode24929 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Concurrency_minus_AtomicBoolean, (Optr)&t_push1, (Optr)string_24930, (Optr)&t_send2, (Optr)PSend24931, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24929, 2, PSend24931, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24928, HEADER(Concurrency_AtomicBoolean_Class));
    store_method(HEADER(Concurrency_AtomicBoolean_Class), SMB_initialize, MC_SMB_initialize);
}

void init_Concurrency_PAtomicBoolean_layout() {
    layout_Concurrency_AtomicBoolean_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Concurrency_AtomicBoolean_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Concurrency_AtomicBoolean_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Concurrency_AtomicBoolean_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Concurrency_AtomicBoolean_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Concurrency_AtomicBoolean_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AtomicBoolean = new_Symbol(L"AtomicBoolean");
    slot_Concurrency_AtomicBoolean_value = (Optr)new_Slot(0, L"value");
    layout_Concurrency_AtomicBoolean = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Concurrency_AtomicBoolean)->values[0] = slot_Concurrency_AtomicBoolean_value; // value 
    Concurrency_AtomicBoolean_Class = (Class)new_Class(Object_Class, layout_Concurrency_AtomicBoolean_Class_class);
    Concurrency_AtomicBoolean_Class->layout = layout_Concurrency_AtomicBoolean;
    Concurrency_AtomicBoolean_Class->name = SMB_AtomicBoolean;
    
}

void init_Concurrency_PAtomicBoolean_methods() {
    init_SMB_initialize();
    init_SMB_value();
    init_SMB_value_();
    init_SMB_testAndSet();
    init_class_SMB_initialize();
    
}