#include <lib/class/PEG/FailedOptionalResult.h>


Optr layout_PEG_FailedOptionalResult_Class_class;


static void init_class_SMB_ifMatched_() {
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray20361 = new_Array_with(1, (Optr)VAR_block_0_0);
    Array PThreadedCode20362 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20360 = new_Method_with(PArray20361, empty_Array, empty_Array, PThreadedCode20362, 1, self);
    
    MethodClosure MC_SMB_ifMatched_ = new_MethodClosure((Method)PMethod20360, HEADER(PEG_FailedOptionalResult_Class));
    store_method(HEADER(PEG_FailedOptionalResult_Class), SMB_ifMatched_, MC_SMB_ifMatched_);
}


static void init_class_SMB_ifMatched_ifFailed_() {
    Symbol SMB_ifMatched_ifFailed_ = new_Symbol(L"ifMatched:ifFailed:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_alternative_0_1 = new_Variable_named(L"alternative", 0);
    Array PArray20364 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_alternative_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend20366 = new_Send((Optr)VAR_alternative_0_1, SMB_value, 0);
    Array PThreadedCode20365 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_alternative_0_1, (Optr)&t_send0, (Optr)PSend20366, (Optr)&t_method_return);
    Method PMethod20363 = new_Method_with(PArray20364, empty_Array, empty_Array, PThreadedCode20365, 1, PSend20366);
    
    MethodClosure MC_SMB_ifMatched_ifFailed_ = new_MethodClosure((Method)PMethod20363, HEADER(PEG_FailedOptionalResult_Class));
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
    Array PThreadedCode20368 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20367 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20368, 1, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod20367, HEADER(PEG_FailedOptionalResult_Class));
    store_method(HEADER(PEG_FailedOptionalResult_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_resultIfFailed_() {
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    Variable VAR_alternative_0_0 = new_Variable_named(L"alternative", 0);
    Array PArray20370 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend20372 = new_Send((Optr)VAR_alternative_0_0, SMB_value, 0);
    Array PThreadedCode20371 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_alternative_0_0, (Optr)&t_send0, (Optr)PSend20372, (Optr)&t_method_return);
    Method PMethod20369 = new_Method_with(PArray20370, empty_Array, empty_Array, PThreadedCode20371, 1, PSend20372);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod20369, HEADER(PEG_FailedOptionalResult_Class));
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