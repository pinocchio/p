#include <lib/class/PEG/FailedOptionalResult.h>


Optr layout_PEG_FailedOptionalResult_Class_class;


static void init_class_SMB_ifMatched_() {
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray19872 = new_Array_with(1, (Optr)VAR_block_0_0);
    Array PThreadedCode19873 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19871 = new_Method_with(PArray19872, empty_Array, empty_Array, PThreadedCode19873, 1, self);
    
    MethodClosure MC_SMB_ifMatched_ = new_MethodClosure((Method)PMethod19871, HEADER(PEG_FailedOptionalResult_Class));
    store_method(HEADER(PEG_FailedOptionalResult_Class), SMB_ifMatched_, MC_SMB_ifMatched_);
}


static void init_class_SMB_ifMatched_ifFailed_() {
    Symbol SMB_ifMatched_ifFailed_ = new_Symbol(L"ifMatched:ifFailed:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_alternative_0_1 = new_Variable_named(L"alternative", 0);
    Array PArray19875 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_alternative_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend19877 = new_Send((Optr)VAR_alternative_0_1, SMB_value, 0);
    Array PThreadedCode19876 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_alternative_0_1, (Optr)&t_send0, (Optr)PSend19877, (Optr)&t_method_return);
    Method PMethod19874 = new_Method_with(PArray19875, empty_Array, empty_Array, PThreadedCode19876, 1, PSend19877);
    
    MethodClosure MC_SMB_ifMatched_ifFailed_ = new_MethodClosure((Method)PMethod19874, HEADER(PEG_FailedOptionalResult_Class));
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
    Array PThreadedCode19879 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19878 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19879, 1, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod19878, HEADER(PEG_FailedOptionalResult_Class));
    store_method(HEADER(PEG_FailedOptionalResult_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_resultIfFailed_() {
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    Variable VAR_alternative_0_0 = new_Variable_named(L"alternative", 0);
    Array PArray19881 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend19883 = new_Send((Optr)VAR_alternative_0_0, SMB_value, 0);
    Array PThreadedCode19882 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_alternative_0_0, (Optr)&t_send0, (Optr)PSend19883, (Optr)&t_method_return);
    Method PMethod19880 = new_Method_with(PArray19881, empty_Array, empty_Array, PThreadedCode19882, 1, PSend19883);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod19880, HEADER(PEG_FailedOptionalResult_Class));
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