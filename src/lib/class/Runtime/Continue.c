#include <lib/class/Runtime/Continue.h>


Optr layout_Runtime_Continue_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aContinue_0_0 = new_Variable_named(L"aContinue", 0);
    Array PArray7578 = new_Array_with(1, (Optr)VAR_aContinue_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7580 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7581 = new_Send((Optr)VAR_aContinue_0_0, SMB_species, 0);
    // =. 
    Send PSend7582 = new_Send((Optr)PSend7580, SMB__equals_, 1, (Optr)PSend7581);
    Array PThreadedCode7579 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7580, (Optr)&t_push_variable, (Optr)VAR_aContinue_0_0, (Optr)&t_send0, (Optr)PSend7581, (Optr)&t_send1, (Optr)PSend7582, (Optr)&t_method_return);
    Method PMethod7577 = new_Method_with(PArray7578, empty_Array, empty_Array, PThreadedCode7579, 1, PSend7582);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7577, Continue_Class);
    store_method(Continue_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_escape_() {
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray7584 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Annotation PAnnotation7586 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continueEscape_message_);
    Array PArray7585 = new_Array_with(1, (Optr)PAnnotation7586);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7588 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7587 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7588, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7583 = new_ReflectionMethod_with(PArray7584, empty_Array, PArray7585, PThreadedCode7587, 2, PSend7588, self);
    
    MethodClosure MC_SMB_escape_ = new_MethodClosure((Method)PReflectionMethod7583, Continue_Class);
    store_method(Continue_Class, SMB_escape_, MC_SMB_escape_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7590 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Annotation PAnnotation7592 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continueOn_message_);
    Array PArray7591 = new_Array_with(1, (Optr)PAnnotation7592);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7594 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7593 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7594, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7589 = new_ReflectionMethod_with(PArray7590, empty_Array, PArray7591, PThreadedCode7593, 2, PSend7594, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod7589, HEADER(Continue_Class));
    store_method(HEADER(Continue_Class), SMB_on_, MC_SMB_on_);
}

void init_Runtime_PContinue_layout() {
    layout_Runtime_Continue_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_Continue_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_Continue_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_Continue_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_Continue_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_Continue_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Continue = new_Symbol(L"Continue");
    Continue_Class = (Class)new_Class(Object_Class, layout_Runtime_Continue_Class_class);
    Continue_Class->layout = empty_object_layout;
    Continue_Class->name = SMB_Continue;
    
}

void init_Runtime_PContinue_methods() {
    init_SMB__equals_();
    init_SMB_escape_();
    init_class_SMB_on_();
    
}