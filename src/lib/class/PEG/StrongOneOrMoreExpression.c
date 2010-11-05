#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19469 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19472 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19474 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19478 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19477 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19478, (Optr)&t_block_return);
    Block PBlock19476 = new_Block_with(empty_Array, empty_Array, PThreadedCode19477, 1, PSend19478);
    // ifFalse:. 
    Send PSend19475 = new_Send((Optr)PSend19474, SMB_ifFalse_, 1, (Optr)PBlock19476);
    // parseOn:. 
    Send PSend19481 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19480 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19481, (Optr)&t_block_return);
    Block PBlock19479 = new_Block_with(empty_Array, empty_Array, PThreadedCode19480, 1, PSend19481);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19482 = new_Send((Optr)PBlock19479, SMB_whileTrue, 0);
    Array PThreadedCode19473 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19474, (Optr)&t_send_ifFalse_, (Optr)PSend19475, (Optr)PBlock19476, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19479, (Optr)&t_send0, (Optr)PSend19482, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19471 = new_Block_with(PArray19472, empty_Array, PThreadedCode19473, 3, PSend19475, PSend19482, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19483 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19471);
    Array PThreadedCode19470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19471, (Optr)&t_send1, (Optr)PSend19483, (Optr)&t_method_return);
    Method PMethod19468 = new_Method_with(PArray19469, empty_Array, empty_Array, PThreadedCode19470, 1, PSend19483);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19468, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19485 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19488 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19490 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19494 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19493 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19494, (Optr)&t_block_return);
    Block PBlock19492 = new_Block_with(empty_Array, empty_Array, PThreadedCode19493, 1, PSend19494);
    // ifFalse:. 
    Send PSend19491 = new_Send((Optr)PSend19490, SMB_ifFalse_, 1, (Optr)PBlock19492);
    // omitMatch:. 
    Send PSend19497 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19497, (Optr)&t_block_return);
    Block PBlock19495 = new_Block_with(empty_Array, empty_Array, PThreadedCode19496, 1, PSend19497);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19498 = new_Send((Optr)PBlock19495, SMB_whileTrue, 0);
    Array PThreadedCode19489 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19490, (Optr)&t_send_ifFalse_, (Optr)PSend19491, (Optr)PBlock19492, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19495, (Optr)&t_send0, (Optr)PSend19498, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19487 = new_Block_with(PArray19488, empty_Array, PThreadedCode19489, 3, PSend19491, PSend19498, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19499 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19487);
    Array PThreadedCode19486 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19487, (Optr)&t_send1, (Optr)PSend19499, (Optr)&t_method_return);
    Method PMethod19484 = new_Method_with(PArray19485, empty_Array, empty_Array, PThreadedCode19486, 1, PSend19499);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19484, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGStrongOneOrMoreExpression_layout() {
    layout_PEG_StrongOneOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StrongOneOrMoreExpression = new_Symbol(L"StrongOneOrMoreExpression");
    layout_PEG_StrongOneOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_StrongOneOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_StrongOneOrMoreExpression_Class = (Class)new_Class(PEG_StrongZeroOrMoreExpression_Class, layout_PEG_StrongOneOrMoreExpression_Class_class);
    PEG_StrongOneOrMoreExpression_Class->layout = layout_PEG_StrongOneOrMoreExpression;
    PEG_StrongOneOrMoreExpression_Class->name = SMB_StrongOneOrMoreExpression;
    
}

void init_PEG_PEGStrongOneOrMoreExpression_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}