#include <lib/class/Runtime/Continuation.h>


Optr layout_Runtime_Continuation_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Array PArray8306 = new_Array_with(1, (Optr)VAR_aContinuation_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8308 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8309 = new_Send((Optr)VAR_aContinuation_0_0, SMB_species, 0);
    // =. 
    Send PSend8310 = new_Send((Optr)PSend8308, SMB__equals_, 1, (Optr)PSend8309);
    Array PThreadedCode8307 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8308, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend8309, (Optr)&t_send1, (Optr)PSend8310, (Optr)&t_method_return);
    Method PMethod8305 = new_Method_with(PArray8306, empty_Array, empty_Array, PThreadedCode8307, 1, PSend8310);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8305, Continuation_Class);
    store_method(Continuation_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_continue() {
    Symbol SMB_continue = new_Symbol(L"continue");
    Symbol SMB_continue_ = new_Symbol(L"continue:");
    // continue:. 
    Send PSend8313 = new_Send((Optr)self, SMB_continue_, 1, (Optr)nil_Const);
    Array PThreadedCode8312 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend8313, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8311 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8312, 2, PSend8313, self);
    
    MethodClosure MC_SMB_continue = new_MethodClosure((Method)PMethod8311, Continuation_Class);
    store_method(Continuation_Class, SMB_continue, MC_SMB_continue);
}


static void init_SMB_continue_() {
    Symbol SMB_continue_ = new_Symbol(L"continue:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray8315 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationContinue_message_ = new_Symbol(L"continuationContinue:message:");
    Annotation PAnnotation8317 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationContinue_message_);
    Array PArray8316 = new_Array_with(1, (Optr)PAnnotation8317);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8319 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8318 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8319, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8314 = new_ReflectionMethod_with(PArray8315, empty_Array, PArray8316, PThreadedCode8318, 2, PSend8319, self);
    
    MethodClosure MC_SMB_continue_ = new_MethodClosure((Method)PReflectionMethod8314, Continuation_Class);
    store_method(Continuation_Class, SMB_continue_, MC_SMB_continue_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8321 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationOn_message_ = new_Symbol(L"continuationOn:message:");
    Annotation PAnnotation8323 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationOn_message_);
    Array PArray8322 = new_Array_with(1, (Optr)PAnnotation8323);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8325 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8324 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8325, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8320 = new_ReflectionMethod_with(PArray8321, empty_Array, PArray8322, PThreadedCode8324, 2, PSend8325, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod8320, HEADER(Continuation_Class));
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