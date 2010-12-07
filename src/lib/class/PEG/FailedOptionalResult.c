#include <lib/class/PEG/FailedOptionalResult.h>


Optr layout_PEG_FailedOptionalResult_Class_class;


static void init_class_SMB_ifMatched_() {
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
<<<<<<< HEAD
    Array PArray20264 = new_Array_with(1, (Optr)VAR_block_0_0);
    Array PThreadedCode20265 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20263 = new_Method_with(PArray20264, empty_Array, empty_Array, PThreadedCode20265, 1, self);
    
    MethodClosure MC_SMB_ifMatched_ = new_MethodClosure((Method)PMethod20263, HEADER(PEG_FailedOptionalResult_Class));
=======
    Array PArray20230 = new_Array_with(1, (Optr)VAR_block_0_0);
    Array PThreadedCode20231 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20229 = new_Method_with(PArray20230, empty_Array, empty_Array, PThreadedCode20231, 1, self);
    
    MethodClosure MC_SMB_ifMatched_ = new_MethodClosure((Method)PMethod20229, HEADER(PEG_FailedOptionalResult_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(PEG_FailedOptionalResult_Class), SMB_ifMatched_, MC_SMB_ifMatched_);
}


static void init_class_SMB_ifMatched_ifFailed_() {
    Symbol SMB_ifMatched_ifFailed_ = new_Symbol(L"ifMatched:ifFailed:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_alternative_0_1 = new_Variable_named(L"alternative", 0);
<<<<<<< HEAD
    Array PArray20267 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_alternative_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend20269 = new_Send((Optr)VAR_alternative_0_1, SMB_value, 0);
    Array PThreadedCode20268 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_alternative_0_1, (Optr)&t_send0, (Optr)PSend20269, (Optr)&t_method_return);
    Method PMethod20266 = new_Method_with(PArray20267, empty_Array, empty_Array, PThreadedCode20268, 1, PSend20269);
    
    MethodClosure MC_SMB_ifMatched_ifFailed_ = new_MethodClosure((Method)PMethod20266, HEADER(PEG_FailedOptionalResult_Class));
=======
    Array PArray20233 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_alternative_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend20235 = new_Send((Optr)VAR_alternative_0_1, SMB_value, 0);
    Array PThreadedCode20234 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_alternative_0_1, (Optr)&t_send0, (Optr)PSend20235, (Optr)&t_method_return);
    Method PMethod20232 = new_Method_with(PArray20233, empty_Array, empty_Array, PThreadedCode20234, 1, PSend20235);
    
    MethodClosure MC_SMB_ifMatched_ifFailed_ = new_MethodClosure((Method)PMethod20232, HEADER(PEG_FailedOptionalResult_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(PEG_FailedOptionalResult_Class), SMB_ifMatched_ifFailed_, MC_SMB_ifMatched_ifFailed_);
}


static void init_class_SMB_new() {
    /*
    new
// 	"The receiver can only have one instance. Create it or complain that
// 	one already exists."
// 
// 	thisClass class ~~ self
// 		ifTrue: [^thisClass := self basicNew]
// 		ifFalse: [self error: 'A Metaclass should only have one instance!']
    */
    Symbol SMB_new = new_Symbol(L"new");
<<<<<<< HEAD
    Array PThreadedCode20271 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20270 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20271, 1, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod20270, HEADER(PEG_FailedOptionalResult_Class));
=======
    Array PThreadedCode20237 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20236 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20237, 1, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod20236, HEADER(PEG_FailedOptionalResult_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(PEG_FailedOptionalResult_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_resultIfFailed_() {
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    Variable VAR_alternative_0_0 = new_Variable_named(L"alternative", 0);
<<<<<<< HEAD
    Array PArray20273 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend20275 = new_Send((Optr)VAR_alternative_0_0, SMB_value, 0);
    Array PThreadedCode20274 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_alternative_0_0, (Optr)&t_send0, (Optr)PSend20275, (Optr)&t_method_return);
    Method PMethod20272 = new_Method_with(PArray20273, empty_Array, empty_Array, PThreadedCode20274, 1, PSend20275);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod20272, HEADER(PEG_FailedOptionalResult_Class));
=======
    Array PArray20239 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend20241 = new_Send((Optr)VAR_alternative_0_0, SMB_value, 0);
    Array PThreadedCode20240 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_alternative_0_0, (Optr)&t_send0, (Optr)PSend20241, (Optr)&t_method_return);
    Method PMethod20238 = new_Method_with(PArray20239, empty_Array, empty_Array, PThreadedCode20240, 1, PSend20241);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod20238, HEADER(PEG_FailedOptionalResult_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(PEG_FailedOptionalResult_Class), SMB_resultIfFailed_, MC_SMB_resultIfFailed_);
}

void init_PEG_PEGFailedOptionalResult_layout() {
    layout_PEG_FailedOptionalResult_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_FailedOptionalResult_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_FailedOptionalResult_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_FailedOptionalResult_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_FailedOptionalResult_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_FailedOptionalResult_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_FailedOptionalResult = new_Symbol(L"FailedOptionalResult");
    PEG_FailedOptionalResult_Class = (Class)new_Class(PEG_OptionalResult_Class, layout_PEG_FailedOptionalResult_Class_class);
    PEG_FailedOptionalResult_Class->layout = empty_object_layout;
    PEG_FailedOptionalResult_Class->name = SMB_FailedOptionalResult;
    
}

void init_PEG_PEGFailedOptionalResult_methods() {
    init_class_SMB_ifMatched_();
    init_class_SMB_ifMatched_ifFailed_();
    init_class_SMB_new();
    init_class_SMB_resultIfFailed_();
    
}