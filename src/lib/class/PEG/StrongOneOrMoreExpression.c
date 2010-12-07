#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19831 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19834 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19836 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19840 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19839 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19840, (Optr)&t_block_return);
    Block PBlock19838 = new_Block_with(empty_Array, empty_Array, PThreadedCode19839, 1, PSend19840);
    // ifFalse:. 
    Send PSend19837 = new_Send((Optr)PSend19836, SMB_ifFalse_, 1, (Optr)PBlock19838);
    // parseOn:. 
    Send PSend19843 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19842 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19843, (Optr)&t_block_return);
    Block PBlock19841 = new_Block_with(empty_Array, empty_Array, PThreadedCode19842, 1, PSend19843);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19844 = new_Send((Optr)PBlock19841, SMB_whileTrue, 0);
    Array PThreadedCode19835 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19836, (Optr)&t_send_ifFalse_, (Optr)PSend19837, (Optr)PBlock19838, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19841, (Optr)&t_send0, (Optr)PSend19844, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19833 = new_Block_with(PArray19834, empty_Array, PThreadedCode19835, 3, PSend19837, PSend19844, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19845 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19833);
    Array PThreadedCode19832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19833, (Optr)&t_send1, (Optr)PSend19845, (Optr)&t_method_return);
    Method PMethod19830 = new_Method_with(PArray19831, empty_Array, empty_Array, PThreadedCode19832, 1, PSend19845);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19830, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19847 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19850 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19852 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19856 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19855 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19856, (Optr)&t_block_return);
    Block PBlock19854 = new_Block_with(empty_Array, empty_Array, PThreadedCode19855, 1, PSend19856);
    // ifFalse:. 
    Send PSend19853 = new_Send((Optr)PSend19852, SMB_ifFalse_, 1, (Optr)PBlock19854);
    // omitMatch:. 
    Send PSend19859 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19858 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19859, (Optr)&t_block_return);
    Block PBlock19857 = new_Block_with(empty_Array, empty_Array, PThreadedCode19858, 1, PSend19859);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19860 = new_Send((Optr)PBlock19857, SMB_whileTrue, 0);
    Array PThreadedCode19851 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19852, (Optr)&t_send_ifFalse_, (Optr)PSend19853, (Optr)PBlock19854, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19857, (Optr)&t_send0, (Optr)PSend19860, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19849 = new_Block_with(PArray19850, empty_Array, PThreadedCode19851, 3, PSend19853, PSend19860, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19861 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19849);
    Array PThreadedCode19848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19849, (Optr)&t_send1, (Optr)PSend19861, (Optr)&t_method_return);
    Method PMethod19846 = new_Method_with(PArray19847, empty_Array, empty_Array, PThreadedCode19848, 1, PSend19861);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19846, PEG_StrongOneOrMoreExpression_Class);
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