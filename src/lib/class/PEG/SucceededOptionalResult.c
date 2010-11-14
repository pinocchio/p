#include <lib/class/PEG/SucceededOptionalResult.h>


Optr layout_PEG_SucceededOptionalResult_Class_class;
Optr slot_PEG_SucceededOptionalResult_result;
Optr layout_PEG_SucceededOptionalResult;


static void init_SMB_ifMatched_() {
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray20210 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20212 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)slot_PEG_SucceededOptionalResult_result);
    Array PThreadedCode20211 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_send1, (Optr)PSend20212, (Optr)&t_method_return);
    Method PMethod20209 = new_Method_with(PArray20210, empty_Array, empty_Array, PThreadedCode20211, 1, PSend20212);
    
    MethodClosure MC_SMB_ifMatched_ = new_MethodClosure((Method)PMethod20209, PEG_SucceededOptionalResult_Class);
    store_method(PEG_SucceededOptionalResult_Class, SMB_ifMatched_, MC_SMB_ifMatched_);
}


static void init_SMB_ifMatched_ifFailed_() {
    Symbol SMB_ifMatched_ifFailed_ = new_Symbol(L"ifMatched:ifFailed:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_alternative_0_1 = new_Variable_named(L"alternative", 0);
    Array PArray20214 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_alternative_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20216 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)slot_PEG_SucceededOptionalResult_result);
    Array PThreadedCode20215 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_send1, (Optr)PSend20216, (Optr)&t_method_return);
    Method PMethod20213 = new_Method_with(PArray20214, empty_Array, empty_Array, PThreadedCode20215, 1, PSend20216);
    
    MethodClosure MC_SMB_ifMatched_ifFailed_ = new_MethodClosure((Method)PMethod20213, PEG_SucceededOptionalResult_Class);
    store_method(PEG_SucceededOptionalResult_Class, SMB_ifMatched_ifFailed_, MC_SMB_ifMatched_ifFailed_);
}


static void init_SMB_result() {
    Symbol SMB_result = new_Symbol(L"result");
    Array PThreadedCode20218 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_method_return);
    Method PMethod20217 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20218, 1, slot_PEG_SucceededOptionalResult_result);
    
    MethodClosure MC_SMB_result = new_MethodClosure((Method)PMethod20217, PEG_SucceededOptionalResult_Class);
    store_method(PEG_SucceededOptionalResult_Class, SMB_result, MC_SMB_result);
}


static void init_SMB_resultIfFailed_() {
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    Variable VAR_alternative_0_0 = new_Variable_named(L"alternative", 0);
    Array PArray20220 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Array PThreadedCode20221 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_method_return);
    Method PMethod20219 = new_Method_with(PArray20220, empty_Array, empty_Array, PThreadedCode20221, 1, slot_PEG_SucceededOptionalResult_result);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod20219, PEG_SucceededOptionalResult_Class);
    store_method(PEG_SucceededOptionalResult_Class, SMB_resultIfFailed_, MC_SMB_resultIfFailed_);
}


static void init_SMB_result_() {
    Symbol SMB_result_ = new_Symbol(L"result:");
    Variable VAR_newResult_0_0 = new_Variable_named(L"newResult", 0);
    Array PArray20223 = new_Array_with(1, (Optr)VAR_newResult_0_0);
    Assign PAssign20225 = new_Assign((Optr)slot_PEG_SucceededOptionalResult_result, (Optr)VAR_newResult_0_0);
    Array PThreadedCode20224 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20225, (Optr)&t_push_variable, (Optr)VAR_newResult_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20222 = new_Method_with(PArray20223, empty_Array, empty_Array, PThreadedCode20224, 2, PAssign20225, self);
    
    MethodClosure MC_SMB_result_ = new_MethodClosure((Method)PMethod20222, PEG_SucceededOptionalResult_Class);
    store_method(PEG_SucceededOptionalResult_Class, SMB_result_, MC_SMB_result_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray20227 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper20229 = new_Super(SMB_basicNew, 0);
    Symbol SMB_result_ = new_Symbol(L"result:");
    // result:. 
    Send PSend20230 = new_Send((Optr)PSuper20229, SMB_result_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode20228 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper20229, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend20230, (Optr)&t_method_return);
    Method PMethod20226 = new_Method_with(PArray20227, empty_Array, empty_Array, PThreadedCode20228, 1, PSend20230);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod20226, HEADER(PEG_SucceededOptionalResult_Class));
    store_method(HEADER(PEG_SucceededOptionalResult_Class), SMB_on_, MC_SMB_on_);
}

void init_PEG_PEGSucceededOptionalResult_layout() {
    layout_PEG_SucceededOptionalResult_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_SucceededOptionalResult_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_SucceededOptionalResult_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_SucceededOptionalResult_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_SucceededOptionalResult_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_SucceededOptionalResult_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SucceededOptionalResult = new_Symbol(L"SucceededOptionalResult");
    slot_PEG_SucceededOptionalResult_result = (Optr)new_Slot(0, L"result");
    layout_PEG_SucceededOptionalResult = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_SucceededOptionalResult)->values[0] = slot_PEG_SucceededOptionalResult_result; // result 
    PEG_SucceededOptionalResult_Class = (Class)new_Class(PEG_OptionalResult_Class, layout_PEG_SucceededOptionalResult_Class_class);
    PEG_SucceededOptionalResult_Class->layout = layout_PEG_SucceededOptionalResult;
    PEG_SucceededOptionalResult_Class->name = SMB_SucceededOptionalResult;
    
}

void init_PEG_PEGSucceededOptionalResult_methods() {
    init_SMB_ifMatched_();
    init_SMB_ifMatched_ifFailed_();
    init_SMB_result();
    init_SMB_resultIfFailed_();
    init_SMB_result_();
    init_class_SMB_on_();
    
}