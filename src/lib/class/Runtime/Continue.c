#include <lib/class/Runtime/Continue.h>


Optr layout_Runtime_Continue_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aContinue_0_0 = new_Variable_named(L"aContinue", 0);
    Array PArray7602 = new_Array_with(1, (Optr)VAR_aContinue_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7604 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7605 = new_Send((Optr)VAR_aContinue_0_0, SMB_species, 0);
    // =. 
    Send PSend7606 = new_Send((Optr)PSend7604, SMB__equals_, 1, (Optr)PSend7605);
    Array PThreadedCode7603 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7604, (Optr)&t_push_variable, (Optr)VAR_aContinue_0_0, (Optr)&t_send0, (Optr)PSend7605, (Optr)&t_send1, (Optr)PSend7606, (Optr)&t_method_return);
    Method PMethod7601 = new_Method_with(PArray7602, empty_Array, empty_Array, PThreadedCode7603, 1, PSend7606);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7601, Continue_Class);
    store_method(Continue_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_escape_() {
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray7608 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Annotation PAnnotation7610 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continueEscape_message_);
    Array PArray7609 = new_Array_with(1, (Optr)PAnnotation7610);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7612 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7611 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7612, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7607 = new_ReflectionMethod_with(PArray7608, empty_Array, PArray7609, PThreadedCode7611, 2, PSend7612, self);
    
    MethodClosure MC_SMB_escape_ = new_MethodClosure((Method)PReflectionMethod7607, Continue_Class);
    store_method(Continue_Class, SMB_escape_, MC_SMB_escape_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7614 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Annotation PAnnotation7616 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continueOn_message_);
    Array PArray7615 = new_Array_with(1, (Optr)PAnnotation7616);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7618 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7617 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7618, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7613 = new_ReflectionMethod_with(PArray7614, empty_Array, PArray7615, PThreadedCode7617, 2, PSend7618, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod7613, HEADER(Continue_Class));
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