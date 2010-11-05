#include <lib/class/Testing/ResumableTestFailure.h>


Optr layout_Testing_ResumableTestFailure_Class_class;
Optr layout_Testing_ResumableTestFailure;


static void init_SMB_sunitExitWith_() {
    Symbol SMB_sunitExitWith_ = new_Symbol(L"sunitExitWith:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray12039 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_resume_ = new_Symbol(L"resume:");
    // resume:. 
    Send PSend12041 = new_Send((Optr)self, SMB_resume_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode12040 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend12041, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12038 = new_Method_with(PArray12039, empty_Array, empty_Array, PThreadedCode12040, 2, PSend12041, self);
    
    MethodClosure MC_SMB_sunitExitWith_ = new_MethodClosure((Method)PMethod12038, Testing_ResumableTestFailure_Class);
    store_method(Testing_ResumableTestFailure_Class, SMB_sunitExitWith_, MC_SMB_sunitExitWith_);
}


static void init_SMB_isResumable() {
    Symbol SMB_isResumable = new_Symbol(L"isResumable");
    Array PThreadedCode12043 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod12042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12043, 1, true_Const);
    
    MethodClosure MC_SMB_isResumable = new_MethodClosure((Method)PMethod12042, Testing_ResumableTestFailure_Class);
    store_method(Testing_ResumableTestFailure_Class, SMB_isResumable, MC_SMB_isResumable);
}

void init_Testing_ResumableTestFailure_layout() {
    layout_Testing_ResumableTestFailure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_ResumableTestFailure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_ResumableTestFailure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_ResumableTestFailure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_ResumableTestFailure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_ResumableTestFailure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ResumableTestFailure = new_Symbol(L"ResumableTestFailure");
    layout_Testing_ResumableTestFailure = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Testing_ResumableTestFailure)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    Testing_ResumableTestFailure_Class = (Class)new_Class(Testing_TestFailure_Class, layout_Testing_ResumableTestFailure_Class_class);
    Class_set_superclass(Testing_ResumableTestFailure_Class, Testing_TestFailure_Class);
    Testing_ResumableTestFailure_Class->layout = layout_Testing_ResumableTestFailure;
    HEADER(Testing_ResumableTestFailure_Class)->layout = layout_Testing_ResumableTestFailure_Class_class;
    Testing_ResumableTestFailure_Class->name = SMB_ResumableTestFailure;
    
}

void init_Testing_ResumableTestFailure_methods() {
    init_SMB_sunitExitWith_();
    init_SMB_isResumable();
    
}