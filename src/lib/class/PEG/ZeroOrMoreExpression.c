#include <lib/class/PEG/ZeroOrMoreExpression.h>


Optr layout_PEG_ZeroOrMoreExpression_Class_class;
Optr slot_PEG_ZeroOrMoreExpression_child;
Optr layout_PEG_ZeroOrMoreExpression;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray19635 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19638 = new_Send((Optr)VAR_expression_0_0, SMB_asChildParser, 0);
    Assign PAssign19637 = new_Assign((Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)PSend19638);
    Array PThreadedCode19636 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19637, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send0, (Optr)PSend19638, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19634 = new_Method_with(PArray19635, empty_Array, empty_Array, PThreadedCode19636, 2, PAssign19637, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19634, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Array PThreadedCode19640 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19639 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19640, 1, self);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod19639, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19642 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19646 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // parseOn:. 
    Send PSend19647 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19645 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19646, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19647, (Optr)&t_block_return);
    Block PBlock19644 = new_Block_with(empty_Array, empty_Array, PThreadedCode19645, 2, PSend19646, PSend19647);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19648 = new_Send((Optr)PBlock19644, SMB_whileTrue, 0);
    Array PThreadedCode19643 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19644, (Optr)&t_send0, (Optr)PSend19648, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19641 = new_Method_with(PArray19642, empty_Array, empty_Array, PThreadedCode19643, 2, PSend19648, true_Const);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19641, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_child() {
    Symbol SMB_child = new_Symbol(L"child");
    Array PThreadedCode19650 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_method_return);
    Method PMethod19649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19650, 1, slot_PEG_ZeroOrMoreExpression_child);
    
    MethodClosure MC_SMB_child = new_MethodClosure((Method)PMethod19649, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_child, MC_SMB_child);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19652 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    // omitSkipWhitespace. 
    Send PSend19656 = new_Send((Optr)VAR_input_0_0, SMB_omitSkipWhitespace, 0);
    // omitMatch:. 
    Send PSend19657 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19655 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19656, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19657, (Optr)&t_block_return);
    Block PBlock19654 = new_Block_with(empty_Array, empty_Array, PThreadedCode19655, 2, PSend19656, PSend19657);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19658 = new_Send((Optr)PBlock19654, SMB_whileTrue, 0);
    Array PThreadedCode19653 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19654, (Optr)&t_send0, (Optr)PSend19658, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19651 = new_Method_with(PArray19652, empty_Array, empty_Array, PThreadedCode19653, 2, PSend19658, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19651, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGZeroOrMoreExpression_layout() {
    layout_PEG_ZeroOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ZeroOrMoreExpression = new_Symbol(L"ZeroOrMoreExpression");
    slot_PEG_ZeroOrMoreExpression_child = (Optr)new_Slot(0, L"child");
    layout_PEG_ZeroOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_ZeroOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_ZeroOrMoreExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_ZeroOrMoreExpression_Class_class);
    PEG_ZeroOrMoreExpression_Class->layout = layout_PEG_ZeroOrMoreExpression;
    PEG_ZeroOrMoreExpression_Class->name = SMB_ZeroOrMoreExpression;
    
}

void init_PEG_PEGZeroOrMoreExpression_methods() {
    init_SMB_initialize_();
    init_SMB_optional();
    init_SMB_parseOn_();
    init_SMB_child();
    init_SMB_omitMatch_();
    
}