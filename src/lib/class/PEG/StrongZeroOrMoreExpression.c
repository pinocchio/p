#include <lib/class/PEG/StrongZeroOrMoreExpression.h>


Optr layout_PEG_StrongZeroOrMoreExpression_Class_class;
Optr layout_PEG_StrongZeroOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19626 = new_Array_with(1, (Optr)VAR_input_0_0);
    // parseOn:. 
    Send PSend19630 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19629 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19630, (Optr)&t_block_return);
    Block PBlock19628 = new_Block_with(empty_Array, empty_Array, PThreadedCode19629, 1, PSend19630);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19631 = new_Send((Optr)PBlock19628, SMB_whileTrue, 0);
    Array PThreadedCode19627 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19628, (Optr)&t_send0, (Optr)PSend19631, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19625 = new_Method_with(PArray19626, empty_Array, empty_Array, PThreadedCode19627, 2, PSend19631, true_Const);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19625, PEG_StrongZeroOrMoreExpression_Class);
    store_method(PEG_StrongZeroOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19633 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19637 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19637, (Optr)&t_block_return);
    Block PBlock19635 = new_Block_with(empty_Array, empty_Array, PThreadedCode19636, 1, PSend19637);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19638 = new_Send((Optr)PBlock19635, SMB_whileTrue, 0);
    Array PThreadedCode19634 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19635, (Optr)&t_send0, (Optr)PSend19638, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19632 = new_Method_with(PArray19633, empty_Array, empty_Array, PThreadedCode19634, 2, PSend19638, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19632, PEG_StrongZeroOrMoreExpression_Class);
    store_method(PEG_StrongZeroOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGStrongZeroOrMoreExpression_layout() {
    layout_PEG_StrongZeroOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StrongZeroOrMoreExpression = new_Symbol(L"StrongZeroOrMoreExpression");
    layout_PEG_StrongZeroOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_StrongZeroOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_StrongZeroOrMoreExpression_Class = (Class)new_Class(PEG_ZeroOrMoreExpression_Class, layout_PEG_StrongZeroOrMoreExpression_Class_class);
    PEG_StrongZeroOrMoreExpression_Class->layout = layout_PEG_StrongZeroOrMoreExpression;
    PEG_StrongZeroOrMoreExpression_Class->name = SMB_StrongZeroOrMoreExpression;
    
}

void init_PEG_PEGStrongZeroOrMoreExpression_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}