#include <lib/class/Runtime/Continuation.h>


Optr layout_Runtime_Continuation_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
<<<<<<< HEAD
    Array PArray8527 = new_Array_with(1, (Optr)VAR_aContinuation_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8529 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8530 = new_Send((Optr)VAR_aContinuation_0_0, SMB_species, 0);
    // =. 
    Send PSend8531 = new_Send((Optr)PSend8529, SMB__equals_, 1, (Optr)PSend8530);
    Array PThreadedCode8528 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8529, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend8530, (Optr)&t_send1, (Optr)PSend8531, (Optr)&t_method_return);
    Method PMethod8526 = new_Method_with(PArray8527, empty_Array, empty_Array, PThreadedCode8528, 1, PSend8531);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8526, Continuation_Class);
=======
    Array PArray8493 = new_Array_with(1, (Optr)VAR_aContinuation_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8495 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8496 = new_Send((Optr)VAR_aContinuation_0_0, SMB_species, 0);
    // =. 
    Send PSend8497 = new_Send((Optr)PSend8495, SMB__equals_, 1, (Optr)PSend8496);
    Array PThreadedCode8494 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8495, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend8496, (Optr)&t_send1, (Optr)PSend8497, (Optr)&t_method_return);
    Method PMethod8492 = new_Method_with(PArray8493, empty_Array, empty_Array, PThreadedCode8494, 1, PSend8497);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8492, Continuation_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Continuation_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_continue() {
    Symbol SMB_continue = new_Symbol(L"continue");
    Symbol SMB_continue_ = new_Symbol(L"continue:");
    // continue:. 
<<<<<<< HEAD
    Send PSend8534 = new_Send((Optr)self, SMB_continue_, 1, (Optr)nil_Const);
    Array PThreadedCode8533 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend8534, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8533, 2, PSend8534, self);
    
    MethodClosure MC_SMB_continue = new_MethodClosure((Method)PMethod8532, Continuation_Class);
=======
    Send PSend8500 = new_Send((Optr)self, SMB_continue_, 1, (Optr)nil_Const);
    Array PThreadedCode8499 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend8500, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8499, 2, PSend8500, self);
    
    MethodClosure MC_SMB_continue = new_MethodClosure((Method)PMethod8498, Continuation_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Continuation_Class, SMB_continue, MC_SMB_continue);
}


static void init_SMB_continue_() {
    Symbol SMB_continue_ = new_Symbol(L"continue:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray8536 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationContinue_message_ = new_Symbol(L"continuationContinue:message:");
    Annotation PAnnotation8538 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationContinue_message_);
    Array PArray8537 = new_Array_with(1, (Optr)PAnnotation8538);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8540 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8539 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8540, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8535 = new_ReflectionMethod_with(PArray8536, empty_Array, PArray8537, PThreadedCode8539, 2, PSend8540, self);
    
    MethodClosure MC_SMB_continue_ = new_MethodClosure((Method)PReflectionMethod8535, Continuation_Class);
=======
    Array PArray8502 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationContinue_message_ = new_Symbol(L"continuationContinue:message:");
    Annotation PAnnotation8504 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationContinue_message_);
    Array PArray8503 = new_Array_with(1, (Optr)PAnnotation8504);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8506 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8505 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8506, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8501 = new_ReflectionMethod_with(PArray8502, empty_Array, PArray8503, PThreadedCode8505, 2, PSend8506, self);
    
    MethodClosure MC_SMB_continue_ = new_MethodClosure((Method)PReflectionMethod8501, Continuation_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Continuation_Class, SMB_continue_, MC_SMB_continue_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray8542 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationOn_message_ = new_Symbol(L"continuationOn:message:");
    Annotation PAnnotation8544 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationOn_message_);
    Array PArray8543 = new_Array_with(1, (Optr)PAnnotation8544);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8546 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8545 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8546, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8541 = new_ReflectionMethod_with(PArray8542, empty_Array, PArray8543, PThreadedCode8545, 2, PSend8546, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod8541, HEADER(Continuation_Class));
=======
    Array PArray8508 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationOn_message_ = new_Symbol(L"continuationOn:message:");
    Annotation PAnnotation8510 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationOn_message_);
    Array PArray8509 = new_Array_with(1, (Optr)PAnnotation8510);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8512 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8511 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8512, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8507 = new_ReflectionMethod_with(PArray8508, empty_Array, PArray8509, PThreadedCode8511, 2, PSend8512, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod8507, HEADER(Continuation_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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