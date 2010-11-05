#include <lib/class/Concurrency/AtomicBoolean.h>


Optr layout_Concurrency_AtomicBoolean_Class_class;
Optr slot_Concurrency_AtomicBoolean_value;
Optr layout_Concurrency_AtomicBoolean;


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Assign PAssign24394 = new_Assign((Optr)slot_Concurrency_AtomicBoolean_value, (Optr)false_Const);
    Array PThreadedCode24393 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign24394, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24392 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24393, 2, PAssign24394, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24392, Concurrency_AtomicBoolean_Class);
    store_method(Concurrency_AtomicBoolean_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode24396 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Concurrency_AtomicBoolean_value, (Optr)&t_method_return);
    Method PMethod24395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24396, 1, slot_Concurrency_AtomicBoolean_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod24395, Concurrency_AtomicBoolean_Class);
    store_method(Concurrency_AtomicBoolean_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray24398 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Assign PAssign24400 = new_Assign((Optr)slot_Concurrency_AtomicBoolean_value, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode24399 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24400, (Optr)&t_push_variable, (Optr)VAR_aBoolean_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24397 = new_Method_with(PArray24398, empty_Array, empty_Array, PThreadedCode24399, 2, PAssign24400, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod24397, Concurrency_AtomicBoolean_Class);
    store_method(Concurrency_AtomicBoolean_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_testAndSet() {
    Symbol SMB_testAndSet = new_Symbol(L"testAndSet");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_Concurrency_minus_AtomicBoolean = new_Symbol(L"Concurrency.AtomicBoolean");
    String string_24404 = new_String(L"\n    if (${value} == true) {\n        ^true;\n    } else {\n        ${value} = true;\n        ^false;\n    }\n\t");
    Annotation PAnnotation24403 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_testAndSet, (Optr)SMB_Concurrency_minus_AtomicBoolean, (Optr)string_24404);
    Array PArray24402 = new_Array_with(1, (Optr)PAnnotation24403);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend24406 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode24405 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24406, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod24401 = new_NativeMethod_with(empty_Array, empty_Array, PArray24402, PThreadedCode24405, 2, PSend24406, self);
    
    MethodClosure MC_SMB_testAndSet = new_MethodClosure((Method)PNativeMethod24401, Concurrency_AtomicBoolean_Class);
    store_method(Concurrency_AtomicBoolean_Class, SMB_testAndSet, MC_SMB_testAndSet);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Concurrency_minus_AtomicBoolean = new_Symbol(L"Concurrency.AtomicBoolean");
    String string_24409 = new_String(L"plugin/concurrency/AtomicBoolean.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Concurrency_minus_AtomicBoolean_Const = new_Constant((Optr)SMB_Concurrency_minus_AtomicBoolean);
    Constant string_24409_Const = new_Constant((Optr)string_24409);
    // require:at:. 
    Send PSend24410 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Concurrency_minus_AtomicBoolean_Const, (Optr)string_24409_Const);
    Array PThreadedCode24408 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Concurrency_minus_AtomicBoolean, (Optr)&t_push1, (Optr)string_24409, (Optr)&t_send2, (Optr)PSend24410, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24407 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24408, 2, PSend24410, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24407, HEADER(Concurrency_AtomicBoolean_Class));
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