#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19635 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19638 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19640 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19644 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19643 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19644, (Optr)&t_block_return);
    Block PBlock19642 = new_Block_with(empty_Array, empty_Array, PThreadedCode19643, 1, PSend19644);
    // ifFalse:. 
    Send PSend19641 = new_Send((Optr)PSend19640, SMB_ifFalse_, 1, (Optr)PBlock19642);
    // parseOn:. 
    Send PSend19647 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19647, (Optr)&t_block_return);
    Block PBlock19645 = new_Block_with(empty_Array, empty_Array, PThreadedCode19646, 1, PSend19647);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19648 = new_Send((Optr)PBlock19645, SMB_whileTrue, 0);
    Array PThreadedCode19639 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19640, (Optr)&t_send_ifFalse_, (Optr)PSend19641, (Optr)PBlock19642, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19645, (Optr)&t_send0, (Optr)PSend19648, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19637 = new_Block_with(PArray19638, empty_Array, PThreadedCode19639, 3, PSend19641, PSend19648, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19649 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19637);
    Array PThreadedCode19636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19637, (Optr)&t_send1, (Optr)PSend19649, (Optr)&t_method_return);
    Method PMethod19634 = new_Method_with(PArray19635, empty_Array, empty_Array, PThreadedCode19636, 1, PSend19649);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19634, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19651 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19654 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19656 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19660 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19659 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19660, (Optr)&t_block_return);
    Block PBlock19658 = new_Block_with(empty_Array, empty_Array, PThreadedCode19659, 1, PSend19660);
    // ifFalse:. 
    Send PSend19657 = new_Send((Optr)PSend19656, SMB_ifFalse_, 1, (Optr)PBlock19658);
    // omitMatch:. 
    Send PSend19663 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19662 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19663, (Optr)&t_block_return);
    Block PBlock19661 = new_Block_with(empty_Array, empty_Array, PThreadedCode19662, 1, PSend19663);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19664 = new_Send((Optr)PBlock19661, SMB_whileTrue, 0);
    Array PThreadedCode19655 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19656, (Optr)&t_send_ifFalse_, (Optr)PSend19657, (Optr)PBlock19658, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19661, (Optr)&t_send0, (Optr)PSend19664, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19653 = new_Block_with(PArray19654, empty_Array, PThreadedCode19655, 3, PSend19657, PSend19664, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19665 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19653);
    Array PThreadedCode19652 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19653, (Optr)&t_send1, (Optr)PSend19665, (Optr)&t_method_return);
    Method PMethod19650 = new_Method_with(PArray19651, empty_Array, empty_Array, PThreadedCode19652, 1, PSend19665);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19650, PEG_StrongOneOrMoreExpression_Class);
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