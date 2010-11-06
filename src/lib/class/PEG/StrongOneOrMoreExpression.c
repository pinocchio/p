#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19610 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19613 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19615 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19619 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19618 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19619, (Optr)&t_block_return);
    Block PBlock19617 = new_Block_with(empty_Array, empty_Array, PThreadedCode19618, 1, PSend19619);
    // ifFalse:. 
    Send PSend19616 = new_Send((Optr)PSend19615, SMB_ifFalse_, 1, (Optr)PBlock19617);
    // parseOn:. 
    Send PSend19622 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19621 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19622, (Optr)&t_block_return);
    Block PBlock19620 = new_Block_with(empty_Array, empty_Array, PThreadedCode19621, 1, PSend19622);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19623 = new_Send((Optr)PBlock19620, SMB_whileTrue, 0);
    Array PThreadedCode19614 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19615, (Optr)&t_send_ifFalse_, (Optr)PSend19616, (Optr)PBlock19617, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19620, (Optr)&t_send0, (Optr)PSend19623, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19612 = new_Block_with(PArray19613, empty_Array, PThreadedCode19614, 3, PSend19616, PSend19623, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19624 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19612);
    Array PThreadedCode19611 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19612, (Optr)&t_send1, (Optr)PSend19624, (Optr)&t_method_return);
    Method PMethod19609 = new_Method_with(PArray19610, empty_Array, empty_Array, PThreadedCode19611, 1, PSend19624);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19609, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19626 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19629 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19631 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19635 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19634 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19635, (Optr)&t_block_return);
    Block PBlock19633 = new_Block_with(empty_Array, empty_Array, PThreadedCode19634, 1, PSend19635);
    // ifFalse:. 
    Send PSend19632 = new_Send((Optr)PSend19631, SMB_ifFalse_, 1, (Optr)PBlock19633);
    // omitMatch:. 
    Send PSend19638 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19638, (Optr)&t_block_return);
    Block PBlock19636 = new_Block_with(empty_Array, empty_Array, PThreadedCode19637, 1, PSend19638);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19639 = new_Send((Optr)PBlock19636, SMB_whileTrue, 0);
    Array PThreadedCode19630 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19631, (Optr)&t_send_ifFalse_, (Optr)PSend19632, (Optr)PBlock19633, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19636, (Optr)&t_send0, (Optr)PSend19639, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19628 = new_Block_with(PArray19629, empty_Array, PThreadedCode19630, 3, PSend19632, PSend19639, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19640 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19628);
    Array PThreadedCode19627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19628, (Optr)&t_send1, (Optr)PSend19640, (Optr)&t_method_return);
    Method PMethod19625 = new_Method_with(PArray19626, empty_Array, empty_Array, PThreadedCode19627, 1, PSend19640);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19625, PEG_StrongOneOrMoreExpression_Class);
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