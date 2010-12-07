#include <lib/class/Runtime/Continue.h>


Optr layout_Runtime_Continue_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aContinue_0_0 = new_Variable_named(L"aContinue", 0);
    Array PArray7868 = new_Array_with(1, (Optr)VAR_aContinue_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7870 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7871 = new_Send((Optr)VAR_aContinue_0_0, SMB_species, 0);
    // =. 
    Send PSend7872 = new_Send((Optr)PSend7870, SMB__equals_, 1, (Optr)PSend7871);
    Array PThreadedCode7869 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7870, (Optr)&t_push_variable, (Optr)VAR_aContinue_0_0, (Optr)&t_send0, (Optr)PSend7871, (Optr)&t_send1, (Optr)PSend7872, (Optr)&t_method_return);
    Method PMethod7867 = new_Method_with(PArray7868, empty_Array, empty_Array, PThreadedCode7869, 1, PSend7872);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7867, Continue_Class);
    store_method(Continue_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_escape_() {
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray7874 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Annotation PAnnotation7876 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continueEscape_message_);
    Array PArray7875 = new_Array_with(1, (Optr)PAnnotation7876);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7878 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7877 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7878, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7873 = new_ReflectionMethod_with(PArray7874, empty_Array, PArray7875, PThreadedCode7877, 2, PSend7878, self);
    
    MethodClosure MC_SMB_escape_ = new_MethodClosure((Method)PReflectionMethod7873, Continue_Class);
    store_method(Continue_Class, SMB_escape_, MC_SMB_escape_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7880 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Annotation PAnnotation7882 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_continueOn_message_);
    Array PArray7881 = new_Array_with(1, (Optr)PAnnotation7882);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7884 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7883 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7884, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7879 = new_ReflectionMethod_with(PArray7880, empty_Array, PArray7881, PThreadedCode7883, 2, PSend7884, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PReflectionMethod7879, HEADER(Continue_Class));
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