#include <lib/class/PEG/ZeroOrMoreExpression.h>


Optr layout_PEG_ZeroOrMoreExpression_Class_class;
Optr slot_PEG_ZeroOrMoreExpression_child;
Optr layout_PEG_ZeroOrMoreExpression;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray19603 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19606 = new_Send((Optr)VAR_expression_0_0, SMB_asChildParser, 0);
    Assign PAssign19605 = new_Assign((Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)PSend19606);
    Array PThreadedCode19604 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19605, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send0, (Optr)PSend19606, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19602 = new_Method_with(PArray19603, empty_Array, empty_Array, PThreadedCode19604, 2, PAssign19605, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19602, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Array PThreadedCode19608 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19608, 1, self);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod19607, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19610 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19614 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // parseOn:. 
    Send PSend19615 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19613 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19614, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19615, (Optr)&t_block_return);
    Block PBlock19612 = new_Block_with(empty_Array, empty_Array, PThreadedCode19613, 2, PSend19614, PSend19615);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19616 = new_Send((Optr)PBlock19612, SMB_whileTrue, 0);
    Array PThreadedCode19611 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19612, (Optr)&t_send0, (Optr)PSend19616, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19609 = new_Method_with(PArray19610, empty_Array, empty_Array, PThreadedCode19611, 2, PSend19616, true_Const);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19609, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_child() {
    Symbol SMB_child = new_Symbol(L"child");
    Array PThreadedCode19618 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_method_return);
    Method PMethod19617 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19618, 1, slot_PEG_ZeroOrMoreExpression_child);
    
    MethodClosure MC_SMB_child = new_MethodClosure((Method)PMethod19617, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_child, MC_SMB_child);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19620 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    // omitSkipWhitespace. 
    Send PSend19624 = new_Send((Optr)VAR_input_0_0, SMB_omitSkipWhitespace, 0);
    // omitMatch:. 
    Send PSend19625 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19623 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19624, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19625, (Optr)&t_block_return);
    Block PBlock19622 = new_Block_with(empty_Array, empty_Array, PThreadedCode19623, 2, PSend19624, PSend19625);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19626 = new_Send((Optr)PBlock19622, SMB_whileTrue, 0);
    Array PThreadedCode19621 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19622, (Optr)&t_send0, (Optr)PSend19626, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19619 = new_Method_with(PArray19620, empty_Array, empty_Array, PThreadedCode19621, 2, PSend19626, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19619, PEG_ZeroOrMoreExpression_Class);
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