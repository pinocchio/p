#include <lib/class/PEG/OneOrMoreExpression.h>


Optr layout_PEG_OneOrMoreExpression_Class_class;
Optr layout_PEG_OneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19552 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19555 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19557 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19561 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19560 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19561, (Optr)&t_block_return);
    Block PBlock19559 = new_Block_with(empty_Array, empty_Array, PThreadedCode19560, 1, PSend19561);
    // ifFalse:. 
    Send PSend19558 = new_Send((Optr)PSend19557, SMB_ifFalse_, 1, (Optr)PBlock19559);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19564 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // parseOn:. 
    Send PSend19565 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19563 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19564, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19565, (Optr)&t_block_return);
    Block PBlock19562 = new_Block_with(empty_Array, empty_Array, PThreadedCode19563, 2, PSend19564, PSend19565);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19566 = new_Send((Optr)PBlock19562, SMB_whileTrue, 0);
    Array PThreadedCode19556 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19557, (Optr)&t_send_ifFalse_, (Optr)PSend19558, (Optr)PBlock19559, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19562, (Optr)&t_send0, (Optr)PSend19566, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19554 = new_Block_with(PArray19555, empty_Array, PThreadedCode19556, 3, PSend19558, PSend19566, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19567 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19554);
    Array PThreadedCode19553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19554, (Optr)&t_send1, (Optr)PSend19567, (Optr)&t_method_return);
    Method PMethod19551 = new_Method_with(PArray19552, empty_Array, empty_Array, PThreadedCode19553, 1, PSend19567);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19551, PEG_OneOrMoreExpression_Class);
    store_method(PEG_OneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19569 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19572 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19574 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19578 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19577 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19578, (Optr)&t_block_return);
    Block PBlock19576 = new_Block_with(empty_Array, empty_Array, PThreadedCode19577, 1, PSend19578);
    // ifFalse:. 
    Send PSend19575 = new_Send((Optr)PSend19574, SMB_ifFalse_, 1, (Optr)PBlock19576);
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    // omitSkipWhitespace. 
    Send PSend19581 = new_Send((Optr)VAR_input_0_0, SMB_omitSkipWhitespace, 0);
    // omitMatch:. 
    Send PSend19582 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19580 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19581, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19582, (Optr)&t_block_return);
    Block PBlock19579 = new_Block_with(empty_Array, empty_Array, PThreadedCode19580, 2, PSend19581, PSend19582);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19583 = new_Send((Optr)PBlock19579, SMB_whileTrue, 0);
    Array PThreadedCode19573 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19574, (Optr)&t_send_ifFalse_, (Optr)PSend19575, (Optr)PBlock19576, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19579, (Optr)&t_send0, (Optr)PSend19583, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19571 = new_Block_with(PArray19572, empty_Array, PThreadedCode19573, 3, PSend19575, PSend19583, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19584 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19571);
    Array PThreadedCode19570 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19571, (Optr)&t_send1, (Optr)PSend19584, (Optr)&t_method_return);
    Method PMethod19568 = new_Method_with(PArray19569, empty_Array, empty_Array, PThreadedCode19570, 1, PSend19584);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19568, PEG_OneOrMoreExpression_Class);
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