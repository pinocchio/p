#include <lib/class/PEG/OptionalResult.h>


Optr layout_PEG_OptionalResult_Class_class;


static void init_SMB_resultIfFailed_() {
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    Variable VAR_alternative_0_0 = new_Variable_named(L"alternative", 0);
    Array PArray19846 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend19848 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode19847 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19848, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19845 = new_Method_with(PArray19846, empty_Array, empty_Array, PThreadedCode19847, 2, PSend19848, self);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod19845, PEG_OptionalResult_Class);
    store_method(PEG_OptionalResult_Class, SMB_resultIfFailed_, MC_SMB_resultIfFailed_);
}

void init_PEG_PEGOptionalResult_layout() {
    layout_PEG_OptionalResult_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OptionalResult_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OptionalResult_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OptionalResult_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OptionalResult_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OptionalResult_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OptionalResult = new_Symbol(L"OptionalResult");
    PEG_OptionalResult_Class = (Class)new_Class(Object_Class, layout_PEG_OptionalResult_Class_class);
    PEG_OptionalResult_Class->layout = empty_object_layout;
    PEG_OptionalResult_Class->name = SMB_OptionalResult;
    
}

void init_PEG_PEGOptionalResult_methods() {
    init_SMB_resultIfFailed_();
    
}