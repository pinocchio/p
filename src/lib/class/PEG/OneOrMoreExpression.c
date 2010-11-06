#include <lib/class/PEG/OneOrMoreExpression.h>


Optr layout_PEG_OneOrMoreExpression_Class_class;
Optr layout_PEG_OneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19693 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19696 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19698 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19702 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19701 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19702, (Optr)&t_block_return);
    Block PBlock19700 = new_Block_with(empty_Array, empty_Array, PThreadedCode19701, 1, PSend19702);
    // ifFalse:. 
    Send PSend19699 = new_Send((Optr)PSend19698, SMB_ifFalse_, 1, (Optr)PBlock19700);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19705 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // parseOn:. 
    Send PSend19706 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19704 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19705, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19706, (Optr)&t_block_return);
    Block PBlock19703 = new_Block_with(empty_Array, empty_Array, PThreadedCode19704, 2, PSend19705, PSend19706);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19707 = new_Send((Optr)PBlock19703, SMB_whileTrue, 0);
    Array PThreadedCode19697 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19698, (Optr)&t_send_ifFalse_, (Optr)PSend19699, (Optr)PBlock19700, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19703, (Optr)&t_send0, (Optr)PSend19707, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19695 = new_Block_with(PArray19696, empty_Array, PThreadedCode19697, 3, PSend19699, PSend19707, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19708 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19695);
    Array PThreadedCode19694 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19695, (Optr)&t_send1, (Optr)PSend19708, (Optr)&t_method_return);
    Method PMethod19692 = new_Method_with(PArray19693, empty_Array, empty_Array, PThreadedCode19694, 1, PSend19708);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19692, PEG_OneOrMoreExpression_Class);
    store_method(PEG_OneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19710 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19713 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19715 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19719 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19718 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19719, (Optr)&t_block_return);
    Block PBlock19717 = new_Block_with(empty_Array, empty_Array, PThreadedCode19718, 1, PSend19719);
    // ifFalse:. 
    Send PSend19716 = new_Send((Optr)PSend19715, SMB_ifFalse_, 1, (Optr)PBlock19717);
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    // omitSkipWhitespace. 
    Send PSend19722 = new_Send((Optr)VAR_input_0_0, SMB_omitSkipWhitespace, 0);
    // omitMatch:. 
    Send PSend19723 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19721 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19722, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19723, (Optr)&t_block_return);
    Block PBlock19720 = new_Block_with(empty_Array, empty_Array, PThreadedCode19721, 2, PSend19722, PSend19723);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19724 = new_Send((Optr)PBlock19720, SMB_whileTrue, 0);
    Array PThreadedCode19714 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19715, (Optr)&t_send_ifFalse_, (Optr)PSend19716, (Optr)PBlock19717, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19720, (Optr)&t_send0, (Optr)PSend19724, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19712 = new_Block_with(PArray19713, empty_Array, PThreadedCode19714, 3, PSend19716, PSend19724, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19725 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19712);
    Array PThreadedCode19711 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19712, (Optr)&t_send1, (Optr)PSend19725, (Optr)&t_method_return);
    Method PMethod19709 = new_Method_with(PArray19710, empty_Array, empty_Array, PThreadedCode19711, 1, PSend19725);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19709, PEG_OneOrMoreExpression_Class);
    store_method(PEG_OneOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGOneOrMoreExpression_layout() {
    layout_PEG_OneOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OneOrMoreExpression = new_Symbol(L"OneOrMoreExpression");
    layout_PEG_OneOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OneOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_OneOrMoreExpression_Class = (Class)new_Class(PEG_ZeroOrMoreExpression_Class, layout_PEG_OneOrMoreExpression_Class_class);
    PEG_OneOrMoreExpression_Class->layout = layout_PEG_OneOrMoreExpression;
    PEG_OneOrMoreExpression_Class->name = SMB_OneOrMoreExpression;
    
}

void init_PEG_PEGOneOrMoreExpression_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}