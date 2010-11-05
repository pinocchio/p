#include <lib/class/Runtime/Continuation.h>


Optr layout_Runtime_Continuation_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Array PArray8261 = new_Array_with(1, (Optr)VAR_aContinuation_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8263 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8264 = new_Send((Optr)VAR_aContinuation_0_0, SMB_species, 0);
    // =. 
    Send PSend8265 = new_Send((Optr)PSend8263, SMB__equals_, 1, (Optr)PSend8264);
    Array PThreadedCode8262 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8263, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend8264, (Optr)&t_send1, (Optr)PSend8265, (Optr)&t_method_return);
    Method PMethod8260 = new_Method_with(PArray8261, empty_Array, empty_Array, PThreadedCode8262, 1, PSend8265);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8260, Continuation_Class);
    store_method(Continuation_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_continue() {
    Symbol SMB_continue = new_Symbol(L"continue");
    Symbol SMB_continue_ = new_Symbol(L"continue:");
    // continue:. 
    Send PSend8268 = new_Send((Optr)self, SMB_continue_, 1, (Optr)nil_Const);
    Array PThreadedCode8267 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend8268, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8267, 2, PSend8268, self);
    
    MethodClosure MC_SMB_continue = new_MethodClosure((Method)PMethod8266, Continuation_Class);
    store_method(Continuation_Class, SMB_continue, MC_SMB_continue);
}


static void init_SMB_continue_() {
    Symbol SMB_continue_ = new_Symbol(L"continue:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray8270 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationContinue_message_ = new_Symbol(L"continuationContinue:message:");
    Annotation PAnnotation8272 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationContinue_message_);
    Array PArray8271 = new_Array_with(1, (Optr)PAnnotation8272);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8274 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8273 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8274, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8269 = new_ReflectionMethod_with(PArray8270, empty_Array, PArray8271, PThreadedCode8273, 2, PSend8274, self);
    
    MethodClosure MC_SMB_continue_ = new_MethodClosure((Method)PReflectionMethod8269, Continuation_Class);
    store_method(Continuation_Class, SMB_continue_, MC_SMB_continue_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8276 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continuationOn_message_ = new_Symbol(L"continuationOn:message:");
    Annotation PAnnotation8278 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continuationOn_message_);
    Array PArray8277 = new_Array_with(1, (Optr)PAnnotation8278);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8280 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8279 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8280, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8275 = new_ReflectionMethod_with(PArray8276, empty_Array, PArray8277, PThreadedCode8279, 2, PSend8280, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod8275, HEADER(Continuation_Class));
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