#include <lib/class/Kernel/Object/True.h>


Optr layout_Kernel_Object_True_Class_class;


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    String string_311 = new_String(L"true");
    Array PThreadedCode310 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_311, (Optr)&t_method_return);
    Constant string_311_Const = new_Constant((Optr)string_311);
    Method PMethod309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode310, 1, string_311_Const);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod309, True_Class);
    store_method(True_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_ifTrue_ifFalse_() {
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Variable VAR_ifTrue_0_0 = new_Variable_named(L"ifTrue", 0);
    Variable VAR_ifFalse_0_1 = new_Variable_named(L"ifFalse", 0);
    Array PArray313 = new_Array_with(2, (Optr)VAR_ifTrue_0_0, (Optr)VAR_ifFalse_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend315 = new_Send((Optr)VAR_ifTrue_0_0, SMB_value, 0);
    Array PThreadedCode314 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifTrue_0_0, (Optr)&t_send0, (Optr)PSend315, (Optr)&t_method_return);
    Method PMethod312 = new_Method_with(PArray313, empty_Array, empty_Array, PThreadedCode314, 1, PSend315);
    
    MethodClosure MC_SMB_ifTrue_ifFalse_ = new_MethodClosure((Method)PMethod312, True_Class);
    store_method(True_Class, SMB_ifTrue_ifFalse_, MC_SMB_ifTrue_ifFalse_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Array PThreadedCode317 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod316 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode317, 1, false_Const);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod316, True_Class);
    store_method(True_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_ifFalse_ifTrue_() {
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Variable VAR_ifFalse_0_0 = new_Variable_named(L"ifFalse", 0);
    Variable VAR_ifTrue_0_1 = new_Variable_named(L"ifTrue", 0);
    Array PArray319 = new_Array_with(2, (Optr)VAR_ifFalse_0_0, (Optr)VAR_ifTrue_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend321 = new_Send((Optr)VAR_ifTrue_0_1, SMB_value, 0);
    Array PThreadedCode320 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifTrue_0_1, (Optr)&t_send0, (Optr)PSend321, (Optr)&t_method_return);
    Method PMethod318 = new_Method_with(PArray319, empty_Array, empty_Array, PThreadedCode320, 1, PSend321);
    
    MethodClosure MC_SMB_ifFalse_ifTrue_ = new_MethodClosure((Method)PMethod318, True_Class);
    store_method(True_Class, SMB_ifFalse_ifTrue_, MC_SMB_ifFalse_ifTrue_);
}


static void init_SMB_ifTrue_() {
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Variable VAR_ifTrue_0_0 = new_Variable_named(L"ifTrue", 0);
    Array PArray323 = new_Array_with(1, (Optr)VAR_ifTrue_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend325 = new_Send((Optr)VAR_ifTrue_0_0, SMB_value, 0);
    Array PThreadedCode324 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifTrue_0_0, (Optr)&t_send0, (Optr)PSend325, (Optr)&t_method_return);
    Method PMethod322 = new_Method_with(PArray323, empty_Array, empty_Array, PThreadedCode324, 1, PSend325);
    
    MethodClosure MC_SMB_ifTrue_ = new_MethodClosure((Method)PMethod322, True_Class);
    store_method(True_Class, SMB_ifTrue_, MC_SMB_ifTrue_);
}


static void init_SMB_or_() {
    Symbol SMB_or_ = new_Symbol(L"or:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray327 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode328 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod326 = new_Method_with(PArray327, empty_Array, empty_Array, PThreadedCode328, 1, self);
    
    MethodClosure MC_SMB_or_ = new_MethodClosure((Method)PMethod326, True_Class);
    store_method(True_Class, SMB_or_, MC_SMB_or_);
}


static void init_SMB_ifFalse_() {
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR_ifFalse_0_0 = new_Variable_named(L"ifFalse", 0);
    Array PArray330 = new_Array_with(1, (Optr)VAR_ifFalse_0_0);
    Array PThreadedCode331 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Method PMethod329 = new_Method_with(PArray330, empty_Array, empty_Array, PThreadedCode331, 1, nil_Const);
    
    MethodClosure MC_SMB_ifFalse_ = new_MethodClosure((Method)PMethod329, True_Class);
    store_method(True_Class, SMB_ifFalse_, MC_SMB_ifFalse_);
}


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray333 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend335 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend336 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode334 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend335, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend336, (Optr)&t_method_return);
    Method PMethod332 = new_Method_with(PArray333, empty_Array, empty_Array, PThreadedCode334, 2, PSend335, PSend336);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod332, True_Class);
    store_method(True_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_and_() {
    Symbol SMB_and_ = new_Symbol(L"and:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray338 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend340 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode339 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend340, (Optr)&t_method_return);
    Method PMethod337 = new_Method_with(PArray338, empty_Array, empty_Array, PThreadedCode339, 1, PSend340);
    
    MethodClosure MC_SMB_and_ = new_MethodClosure((Method)PMethod337, True_Class);
    store_method(True_Class, SMB_and_, MC_SMB_and_);
}

void init_Kernel_Object_True_layout() {
    layout_Kernel_Object_True_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Object_True_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Object_True_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Object_True_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Object_True_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Object_True_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_True = new_Symbol(L"True");
    True_Class = (Class)new_Class(Kernel_Object_Boolean_Class, layout_Kernel_Object_True_Class_class);
    Class_set_superclass(True_Class, Kernel_Object_Boolean_Class);
    True_Class->layout = empty_object_layout;
    HEADER(True_Class)->layout = layout_Kernel_Object_True_Class_class;
    True_Class->name = SMB_True;
    
}

void init_Kernel_Object_True_methods() {
    init_SMB_asString();
    init_SMB_ifTrue_ifFalse_();
    init_SMB_not();
    init_SMB_ifFalse_ifTrue_();
    init_SMB_ifTrue_();
    init_SMB_or_();
    init_SMB_ifFalse_();
    init_SMB_whileTrue_();
    init_SMB_and_();
    
}