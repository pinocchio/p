#include <lib/class/Runtime/Continuation.h>


Optr layout_Runtime_Continuation_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Array PArray8495 = new_Array_with(1, (Optr)VAR_aContinuation_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8497 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8498 = new_Send((Optr)VAR_aContinuation_0_0, SMB_species, 0);
    // =. 
    Send PSend8499 = new_Send((Optr)PSend8497, SMB__equals_, 1, (Optr)PSend8498);
    Array PThreadedCode8496 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8497, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend8498, (Optr)&t_send1, (Optr)PSend8499, (Optr)&t_method_return);
    Method PMethod8494 = new_Method_with(PArray8495, empty_Array, empty_Array, PThreadedCode8496, 1, PSend8499);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8494, Continuation_Class);
    store_method(Continuation_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_continue() {
    Symbol SMB_continue = new_Symbol(L"continue");
    Symbol SMB_continue_ = new_Symbol(L"continue:");
    // continue:. 
    Send PSend8502 = new_Send((Optr)self, SMB_continue_, 1, (Optr)nil_Const);
    Array PThreadedCode8501 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend8502, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8500 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8501, 2, PSend8502, self);
    
    MethodClosure MC_SMB_continue = new_MethodClosure((Method)PMethod8500, Continuation_Class);
    store_method(Continuation_Class, SMB_continue, MC_SMB_continue);
}


static void init_SMB_continue_() {
    Symbol SMB_continue_ = new_Symbol(L"continue:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray8504 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationContinue_message_ = new_Symbol(L"continuationContinue:message:");
    Annotation PAnnotation8506 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationContinue_message_);
    Array PArray8505 = new_Array_with(1, (Optr)PAnnotation8506);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8508 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8507 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8508, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8503 = new_ReflectionMethod_with(PArray8504, empty_Array, PArray8505, PThreadedCode8507, 2, PSend8508, self);
    
    MethodClosure MC_SMB_continue_ = new_MethodClosure((Method)PReflectionMethod8503, Continuation_Class);
    store_method(Continuation_Class, SMB_continue_, MC_SMB_continue_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8510 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationOn_message_ = new_Symbol(L"continuationOn:message:");
    Annotation PAnnotation8512 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationOn_message_);
    Array PArray8511 = new_Array_with(1, (Optr)PAnnotation8512);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8514 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8513 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8514, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8509 = new_ReflectionMethod_with(PArray8510, empty_Array, PArray8511, PThreadedCode8513, 2, PSend8514, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod8509, HEADER(Continuation_Class));
    store_method(HEADER(Continuation_Class), SMB_on_, MC_SMB_on_);
}

void init_Runtime_PContinuation_layout() {
    layout_Runtime_Continuation_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_Continuation_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_Continuation_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_Continuation_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_Continuation_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_Continuation_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Continuation = new_Symbol(L"Continuation");
    Continuation_Class = (Class)new_Class(Object_Class, layout_Runtime_Continuation_Class_class);
    Continuation_Class->layout = empty_object_layout;
    Continuation_Class->name = SMB_Continuation;
    
}

void init_Runtime_PContinuation_methods() {
    init_SMB__equals_();
    init_SMB_continue();
    init_SMB_continue_();
    init_class_SMB_on_();
    
}