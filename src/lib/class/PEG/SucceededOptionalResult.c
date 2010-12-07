#include <lib/class/PEG/SucceededOptionalResult.h>


Optr layout_PEG_SucceededOptionalResult_Class_class;
Optr slot_PEG_SucceededOptionalResult_result;
Optr layout_PEG_SucceededOptionalResult;


static void init_SMB_ifMatched_() {
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
<<<<<<< HEAD
    Array PArray20242 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20244 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)slot_PEG_SucceededOptionalResult_result);
    Array PThreadedCode20243 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_send1, (Optr)PSend20244, (Optr)&t_method_return);
    Method PMethod20241 = new_Method_with(PArray20242, empty_Array, empty_Array, PThreadedCode20243, 1, PSend20244);
    
    MethodClosure MC_SMB_ifMatched_ = new_MethodClosure((Method)PMethod20241, PEG_SucceededOptionalResult_Class);
=======
    Array PArray20208 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20210 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)slot_PEG_SucceededOptionalResult_result);
    Array PThreadedCode20209 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_send1, (Optr)PSend20210, (Optr)&t_method_return);
    Method PMethod20207 = new_Method_with(PArray20208, empty_Array, empty_Array, PThreadedCode20209, 1, PSend20210);
    
    MethodClosure MC_SMB_ifMatched_ = new_MethodClosure((Method)PMethod20207, PEG_SucceededOptionalResult_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_SucceededOptionalResult_Class, SMB_ifMatched_, MC_SMB_ifMatched_);
}


static void init_SMB_ifMatched_ifFailed_() {
    Symbol SMB_ifMatched_ifFailed_ = new_Symbol(L"ifMatched:ifFailed:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_alternative_0_1 = new_Variable_named(L"alternative", 0);
<<<<<<< HEAD
    Array PArray20246 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_alternative_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20248 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)slot_PEG_SucceededOptionalResult_result);
    Array PThreadedCode20247 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_send1, (Optr)PSend20248, (Optr)&t_method_return);
    Method PMethod20245 = new_Method_with(PArray20246, empty_Array, empty_Array, PThreadedCode20247, 1, PSend20248);
    
    MethodClosure MC_SMB_ifMatched_ifFailed_ = new_MethodClosure((Method)PMethod20245, PEG_SucceededOptionalResult_Class);
=======
    Array PArray20212 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_alternative_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20214 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)slot_PEG_SucceededOptionalResult_result);
    Array PThreadedCode20213 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_send1, (Optr)PSend20214, (Optr)&t_method_return);
    Method PMethod20211 = new_Method_with(PArray20212, empty_Array, empty_Array, PThreadedCode20213, 1, PSend20214);
    
    MethodClosure MC_SMB_ifMatched_ifFailed_ = new_MethodClosure((Method)PMethod20211, PEG_SucceededOptionalResult_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_SucceededOptionalResult_Class, SMB_ifMatched_ifFailed_, MC_SMB_ifMatched_ifFailed_);
}


static void init_SMB_result() {
    Symbol SMB_result = new_Symbol(L"result");
<<<<<<< HEAD
    Array PThreadedCode20250 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_method_return);
    Method PMethod20249 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20250, 1, slot_PEG_SucceededOptionalResult_result);
    
    MethodClosure MC_SMB_result = new_MethodClosure((Method)PMethod20249, PEG_SucceededOptionalResult_Class);
=======
    Array PThreadedCode20216 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_method_return);
    Method PMethod20215 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20216, 1, slot_PEG_SucceededOptionalResult_result);
    
    MethodClosure MC_SMB_result = new_MethodClosure((Method)PMethod20215, PEG_SucceededOptionalResult_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_SucceededOptionalResult_Class, SMB_result, MC_SMB_result);
}


static void init_SMB_resultIfFailed_() {
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    Variable VAR_alternative_0_0 = new_Variable_named(L"alternative", 0);
<<<<<<< HEAD
    Array PArray20252 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Array PThreadedCode20253 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_method_return);
    Method PMethod20251 = new_Method_with(PArray20252, empty_Array, empty_Array, PThreadedCode20253, 1, slot_PEG_SucceededOptionalResult_result);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod20251, PEG_SucceededOptionalResult_Class);
=======
    Array PArray20218 = new_Array_with(1, (Optr)VAR_alternative_0_0);
    Array PThreadedCode20219 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SucceededOptionalResult_result, (Optr)&t_method_return);
    Method PMethod20217 = new_Method_with(PArray20218, empty_Array, empty_Array, PThreadedCode20219, 1, slot_PEG_SucceededOptionalResult_result);
    
    MethodClosure MC_SMB_resultIfFailed_ = new_MethodClosure((Method)PMethod20217, PEG_SucceededOptionalResult_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_SucceededOptionalResult_Class, SMB_resultIfFailed_, MC_SMB_resultIfFailed_);
}


static void init_SMB_result_() {
    Symbol SMB_result_ = new_Symbol(L"result:");
    Variable VAR_newResult_0_0 = new_Variable_named(L"newResult", 0);
<<<<<<< HEAD
    Array PArray20255 = new_Array_with(1, (Optr)VAR_newResult_0_0);
    Assign PAssign20257 = new_Assign((Optr)slot_PEG_SucceededOptionalResult_result, (Optr)VAR_newResult_0_0);
    Array PThreadedCode20256 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20257, (Optr)&t_push_variable, (Optr)VAR_newResult_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20254 = new_Method_with(PArray20255, empty_Array, empty_Array, PThreadedCode20256, 2, PAssign20257, self);
    
    MethodClosure MC_SMB_result_ = new_MethodClosure((Method)PMethod20254, PEG_SucceededOptionalResult_Class);
=======
    Array PArray20221 = new_Array_with(1, (Optr)VAR_newResult_0_0);
    Assign PAssign20223 = new_Assign((Optr)slot_PEG_SucceededOptionalResult_result, (Optr)VAR_newResult_0_0);
    Array PThreadedCode20222 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20223, (Optr)&t_push_variable, (Optr)VAR_newResult_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20220 = new_Method_with(PArray20221, empty_Array, empty_Array, PThreadedCode20222, 2, PAssign20223, self);
    
    MethodClosure MC_SMB_result_ = new_MethodClosure((Method)PMethod20220, PEG_SucceededOptionalResult_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_SucceededOptionalResult_Class, SMB_result_, MC_SMB_result_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray20259 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper20261 = new_Super(SMB_basicNew, 0);
    Symbol SMB_result_ = new_Symbol(L"result:");
    // result:. 
    Send PSend20262 = new_Send((Optr)PSuper20261, SMB_result_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode20260 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper20261, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend20262, (Optr)&t_method_return);
    Method PMethod20258 = new_Method_with(PArray20259, empty_Array, empty_Array, PThreadedCode20260, 1, PSend20262);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod20258, HEADER(PEG_SucceededOptionalResult_Class));
=======
    Array PArray20225 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper20227 = new_Super(SMB_basicNew, 0);
    Symbol SMB_result_ = new_Symbol(L"result:");
    // result:. 
    Send PSend20228 = new_Send((Optr)PSuper20227, SMB_result_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode20226 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper20227, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend20228, (Optr)&t_method_return);
    Method PMethod20224 = new_Method_with(PArray20225, empty_Array, empty_Array, PThreadedCode20226, 1, PSend20228);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod20224, HEADER(PEG_SucceededOptionalResult_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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