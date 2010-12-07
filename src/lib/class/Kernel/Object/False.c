#include <lib/class/Kernel/Object/False.h>


Optr layout_Kernel_Object_False_Class_class;


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    String string_352 = new_String(L"false");
    Array PThreadedCode351 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_352, (Optr)&t_method_return);
    Constant string_352_Const = new_Constant((Optr)string_352);
    Method PMethod350 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode351, 1, string_352_Const);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod350, False_Class);
    store_method(False_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_ifTrue_ifFalse_() {
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Variable VAR_ifTrue_0_0 = new_Variable_named(L"ifTrue", 0);
    Variable VAR_ifFalse_0_1 = new_Variable_named(L"ifFalse", 0);
    Array PArray354 = new_Array_with(2, (Optr)VAR_ifTrue_0_0, (Optr)VAR_ifFalse_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend356 = new_Send((Optr)VAR_ifFalse_0_1, SMB_value, 0);
    Array PThreadedCode355 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifFalse_0_1, (Optr)&t_send0, (Optr)PSend356, (Optr)&t_method_return);
    Method PMethod353 = new_Method_with(PArray354, empty_Array, empty_Array, PThreadedCode355, 1, PSend356);
    
    MethodClosure MC_SMB_ifTrue_ifFalse_ = new_MethodClosure((Method)PMethod353, False_Class);
    store_method(False_Class, SMB_ifTrue_ifFalse_, MC_SMB_ifTrue_ifFalse_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Array PThreadedCode358 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod357 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode358, 1, true_Const);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod357, False_Class);
    store_method(False_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_ifFalse_ifTrue_() {
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Variable VAR_ifFalse_0_0 = new_Variable_named(L"ifFalse", 0);
    Variable VAR_ifTrue_0_1 = new_Variable_named(L"ifTrue", 0);
    Array PArray360 = new_Array_with(2, (Optr)VAR_ifFalse_0_0, (Optr)VAR_ifTrue_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend362 = new_Send((Optr)VAR_ifFalse_0_0, SMB_value, 0);
    Array PThreadedCode361 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifFalse_0_0, (Optr)&t_send0, (Optr)PSend362, (Optr)&t_method_return);
    Method PMethod359 = new_Method_with(PArray360, empty_Array, empty_Array, PThreadedCode361, 1, PSend362);
    
    MethodClosure MC_SMB_ifFalse_ifTrue_ = new_MethodClosure((Method)PMethod359, False_Class);
    store_method(False_Class, SMB_ifFalse_ifTrue_, MC_SMB_ifFalse_ifTrue_);
}


static void init_SMB_ifTrue_() {
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Variable VAR_ifTrue_0_0 = new_Variable_named(L"ifTrue", 0);
    Array PArray364 = new_Array_with(1, (Optr)VAR_ifTrue_0_0);
    Array PThreadedCode365 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Method PMethod363 = new_Method_with(PArray364, empty_Array, empty_Array, PThreadedCode365, 1, nil_Const);
    
    MethodClosure MC_SMB_ifTrue_ = new_MethodClosure((Method)PMethod363, False_Class);
    store_method(False_Class, SMB_ifTrue_, MC_SMB_ifTrue_);
}


static void init_SMB_or_() {
    Symbol SMB_or_ = new_Symbol(L"or:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray367 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend369 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode368 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend369, (Optr)&t_method_return);
    Method PMethod366 = new_Method_with(PArray367, empty_Array, empty_Array, PThreadedCode368, 1, PSend369);
    
    MethodClosure MC_SMB_or_ = new_MethodClosure((Method)PMethod366, False_Class);
    store_method(False_Class, SMB_or_, MC_SMB_or_);
}


static void init_SMB_ifFalse_() {
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR_ifFalse_0_0 = new_Variable_named(L"ifFalse", 0);
    Array PArray371 = new_Array_with(1, (Optr)VAR_ifFalse_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend373 = new_Send((Optr)VAR_ifFalse_0_0, SMB_value, 0);
    Array PThreadedCode372 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ifFalse_0_0, (Optr)&t_send0, (Optr)PSend373, (Optr)&t_method_return);
    Method PMethod370 = new_Method_with(PArray371, empty_Array, empty_Array, PThreadedCode372, 1, PSend373);
    
    MethodClosure MC_SMB_ifFalse_ = new_MethodClosure((Method)PMethod370, False_Class);
    store_method(False_Class, SMB_ifFalse_, MC_SMB_ifFalse_);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray375 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend377 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend378 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode376 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend377, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend378, (Optr)&t_method_return);
    Method PMethod374 = new_Method_with(PArray375, empty_Array, empty_Array, PThreadedCode376, 2, PSend377, PSend378);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod374, False_Class);
    store_method(False_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_and_() {
    Symbol SMB_and_ = new_Symbol(L"and:");
    Variable VAR_aBoolean_0_0 = new_Variable_named(L"aBoolean", 0);
    Array PArray380 = new_Array_with(1, (Optr)VAR_aBoolean_0_0);
    Array PThreadedCode381 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod379 = new_Method_with(PArray380, empty_Array, empty_Array, PThreadedCode381, 1, self);
    
    MethodClosure MC_SMB_and_ = new_MethodClosure((Method)PMethod379, False_Class);
    store_method(False_Class, SMB_and_, MC_SMB_and_);
}

void init_Kernel_Object_False_layout() {
    layout_Kernel_Object_False_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Object_False_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Object_False_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Object_False_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Object_False_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Object_False_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_False = new_Symbol(L"False");
    False_Class = (Class)new_Class(Kernel_Object_Boolean_Class, layout_Kernel_Object_False_Class_class);
    Class_set_superclass(False_Class, Kernel_Object_Boolean_Class);
    False_Class->layout = empty_object_layout;
    HEADER(False_Class)->layout = layout_Kernel_Object_False_Class_class;
    False_Class->name = SMB_False;
    
}

void init_Kernel_Object_False_methods() {
    init_SMB_asString();
    init_SMB_ifTrue_ifFalse_();
    init_SMB_not();
    init_SMB_ifFalse_ifTrue_();
    init_SMB_ifTrue_();
    init_SMB_or_();
    init_SMB_ifFalse_();
    init_SMB_whileFalse_();
    init_SMB_and_();
    
}