#include <lib/class/Kernel/Object/True.h>


Optr layout_Kernel_Object_True_Class_class;


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    String string_320 = new_String(L"true");
    Array PThreadedCode319 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_320, (Optr)&t_method_return);
    Constant string_320_Const = new_Constant((Optr)string_320);
    Method PMethod318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode319, 1, string_320_Const);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod318, True_Class);
    store_method(True_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_ifTrue_ifFalse_() {
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Variable VAR_ifTrue_0_0 = new_Variable_named(L"ifTrue", 0);
    Variable VAR_ifFalse_0_1 = new_Variable_named(L"ifFalse", 0);
    Array PArray322 = new_Array_with(2, (Optr)VAR_ifTrue_0_0, (Optr)VAR_ifFalse_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend324 = new_Send((Optr)VAR_ifTrue_0_0, SMB_value, 0);
    Array PThreadedCode323 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifTrue_0_0, (Optr)&t_send0, (Optr)PSend324, (Optr)&t_method_return);
    Method PMethod321 = new_Method_with(PArray322, empty_Array, empty_Array, PThreadedCode323, 1, PSend324);
    
    MethodClosure MC_SMB_ifTrue_ifFalse_ = new_MethodClosure((Method)PMethod321, True_Class);
    store_method(True_Class, SMB_ifTrue_ifFalse_, MC_SMB_ifTrue_ifFalse_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Array PThreadedCode326 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode326, 1, false_Const);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod325, True_Class);
    store_method(True_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_ifFalse_ifTrue_() {
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Variable VAR_ifFalse_0_0 = new_Variable_named(L"ifFalse", 0);
    Variable VAR_ifTrue_0_1 = new_Variable_named(L"ifTrue", 0);
    Array PArray328 = new_Array_with(2, (Optr)VAR_ifFalse_0_0, (Optr)VAR_ifTrue_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend330 = new_Send((Optr)VAR_ifTrue_0_1, SMB_value, 0);
    Array PThreadedCode329 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifTrue_0_1, (Optr)&t_send0, (Optr)PSend330, (Optr)&t_method_return);
    Method PMethod327 = new_Method_with(PArray328, empty_Array, empty_Array, PThreadedCode329, 1, PSend330);
    
    MethodClosure MC_SMB_ifFalse_ifTrue_ = new_MethodClosure((Method)PMethod327, True_Class);
    store_method(True_Class, SMB_ifFalse_ifTrue_, MC_SMB_ifFalse_ifTrue_);
}


static void init_SMB_ifTrue_() {
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Variable VAR_ifTrue_0_0 = new_Variable_named(L"ifTrue", 0);
    Array PArray332 = new_Array_with(1, (Optr)VAR_ifTrue_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend334 = new_Send((Optr)VAR_ifTrue_0_0, SMB_value, 0);
    Array PThreadedCode333 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifTrue_0_0, (Optr)&t_send0, (Optr)PSend334, (Optr)&t_method_return);
    Method PMethod331 = new_Method_with(PArray332, empty_Array, empty_Array, PThreadedCode333, 1, PSend334);
    
    MethodClosure MC_SMB_ifTrue_ = new_MethodClosure((Method)PMethod331, True_Class);
    store_method(True_Class, SMB_ifTrue_, MC_SMB_ifTrue_);
}


static void init_SMB_or_() {
    Symbol SMB_or_ = new_Symbol(L"or:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray336 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode337 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod335 = new_Method_with(PArray336, empty_Array, empty_Array, PThreadedCode337, 1, self);
    
    MethodClosure MC_SMB_or_ = new_MethodClosure((Method)PMethod335, True_Class);
    store_method(True_Class, SMB_or_, MC_SMB_or_);
}


static void init_SMB_ifFalse_() {
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR_ifFalse_0_0 = new_Variable_named(L"ifFalse", 0);
    Array PArray339 = new_Array_with(1, (Optr)VAR_ifFalse_0_0);
    Array PThreadedCode340 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Method PMethod338 = new_Method_with(PArray339, empty_Array, empty_Array, PThreadedCode340, 1, nil_Const);
    
    MethodClosure MC_SMB_ifFalse_ = new_MethodClosure((Method)PMethod338, True_Class);
    store_method(True_Class, SMB_ifFalse_, MC_SMB_ifFalse_);
}


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray342 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend344 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend345 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode343 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend344, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend345, (Optr)&t_method_return);
    Method PMethod341 = new_Method_with(PArray342, empty_Array, empty_Array, PThreadedCode343, 2, PSend344, PSend345);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod341, True_Class);
    store_method(True_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_and_() {
    Symbol SMB_and_ = new_Symbol(L"and:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray347 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend349 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode348 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend349, (Optr)&t_method_return);
    Method PMethod346 = new_Method_with(PArray347, empty_Array, empty_Array, PThreadedCode348, 1, PSend349);
    
    MethodClosure MC_SMB_and_ = new_MethodClosure((Method)PMethod346, True_Class);
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