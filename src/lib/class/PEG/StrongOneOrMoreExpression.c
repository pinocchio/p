#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19599 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19602 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19604 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19608 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19607 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19608, (Optr)&t_block_return);
    Block PBlock19606 = new_Block_with(empty_Array, empty_Array, PThreadedCode19607, 1, PSend19608);
    // ifFalse:. 
    Send PSend19605 = new_Send((Optr)PSend19604, SMB_ifFalse_, 1, (Optr)PBlock19606);
    // parseOn:. 
    Send PSend19611 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19610 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19611, (Optr)&t_block_return);
    Block PBlock19609 = new_Block_with(empty_Array, empty_Array, PThreadedCode19610, 1, PSend19611);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19612 = new_Send((Optr)PBlock19609, SMB_whileTrue, 0);
    Array PThreadedCode19603 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19604, (Optr)&t_send_ifFalse_, (Optr)PSend19605, (Optr)PBlock19606, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19609, (Optr)&t_send0, (Optr)PSend19612, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19601 = new_Block_with(PArray19602, empty_Array, PThreadedCode19603, 3, PSend19605, PSend19612, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19613 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19601);
    Array PThreadedCode19600 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19601, (Optr)&t_send1, (Optr)PSend19613, (Optr)&t_method_return);
    Method PMethod19598 = new_Method_with(PArray19599, empty_Array, empty_Array, PThreadedCode19600, 1, PSend19613);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19598, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19615 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19618 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19620 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19624 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19623 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19624, (Optr)&t_block_return);
    Block PBlock19622 = new_Block_with(empty_Array, empty_Array, PThreadedCode19623, 1, PSend19624);
    // ifFalse:. 
    Send PSend19621 = new_Send((Optr)PSend19620, SMB_ifFalse_, 1, (Optr)PBlock19622);
    // omitMatch:. 
    Send PSend19627 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19626 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19627, (Optr)&t_block_return);
    Block PBlock19625 = new_Block_with(empty_Array, empty_Array, PThreadedCode19626, 1, PSend19627);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19628 = new_Send((Optr)PBlock19625, SMB_whileTrue, 0);
    Array PThreadedCode19619 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19620, (Optr)&t_send_ifFalse_, (Optr)PSend19621, (Optr)PBlock19622, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19625, (Optr)&t_send0, (Optr)PSend19628, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19617 = new_Block_with(PArray19618, empty_Array, PThreadedCode19619, 3, PSend19621, PSend19628, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19629 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19617);
    Array PThreadedCode19616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19617, (Optr)&t_send1, (Optr)PSend19629, (Optr)&t_method_return);
    Method PMethod19614 = new_Method_with(PArray19615, empty_Array, empty_Array, PThreadedCode19616, 1, PSend19629);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19614, PEG_StrongOneOrMoreExpression_Class);
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