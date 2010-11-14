#include <lib/class/Runtime/Continue.h>


Optr layout_Runtime_Continue_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aContinue_0_0 = new_Variable_named(L"aContinue", 0);
    Array PArray7836 = new_Array_with(1, (Optr)VAR_aContinue_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7838 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7839 = new_Send((Optr)VAR_aContinue_0_0, SMB_species, 0);
    // =. 
    Send PSend7840 = new_Send((Optr)PSend7838, SMB__equals_, 1, (Optr)PSend7839);
    Array PThreadedCode7837 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7838, (Optr)&t_push_variable, (Optr)VAR_aContinue_0_0, (Optr)&t_send0, (Optr)PSend7839, (Optr)&t_send1, (Optr)PSend7840, (Optr)&t_method_return);
    Method PMethod7835 = new_Method_with(PArray7836, empty_Array, empty_Array, PThreadedCode7837, 1, PSend7840);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7835, Continue_Class);
    store_method(Continue_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_escape_() {
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray7842 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Annotation PAnnotation7844 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continueEscape_message_);
    Array PArray7843 = new_Array_with(1, (Optr)PAnnotation7844);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7846 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7845 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7846, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7841 = new_ReflectionMethod_with(PArray7842, empty_Array, PArray7843, PThreadedCode7845, 2, PSend7846, self);
    
    MethodClosure MC_SMB_escape_ = new_MethodClosure((Method)PReflectionMethod7841, Continue_Class);
    store_method(Continue_Class, SMB_escape_, MC_SMB_escape_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7848 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Annotation PAnnotation7850 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continueOn_message_);
    Array PArray7849 = new_Array_with(1, (Optr)PAnnotation7850);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7852 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7851 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7852, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7847 = new_ReflectionMethod_with(PArray7848, empty_Array, PArray7849, PThreadedCode7851, 2, PSend7852, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod7847, HEADER(Continue_Class));
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