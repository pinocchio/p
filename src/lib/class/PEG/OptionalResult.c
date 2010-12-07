#include <lib/class/PEG/OptionalResult.h>


Optr layout_PEG_OptionalResult_Class_class;


static void init_SMB_resultIfFailed_() {
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    Variable VAR_alternative_0_0 = new_Variable_named(L"alternative", 0);
<<<<<<< HEAD
    Array PArray20238 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend20240 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode20239 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20240, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20237 = new_Method_with(PArray20238, empty_Array, empty_Array, PThreadedCode20239, 2, PSend20240, self);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod20237, PEG_OptionalResult_Class);
=======
    Array PArray20204 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend20206 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode20205 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20206, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20203 = new_Method_with(PArray20204, empty_Array, empty_Array, PThreadedCode20205, 2, PSend20206, self);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod20203, PEG_OptionalResult_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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