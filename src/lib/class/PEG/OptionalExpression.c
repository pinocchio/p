#include <lib/class/PEG/OptionalExpression.h>


Optr layout_PEG_OptionalExpression_Class_class;
Optr slot_PEG_OptionalExpression_child;
Optr layout_PEG_OptionalExpression;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray19663 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19666 = new_Send((Optr)VAR_expression_0_0, SMB_asChildParser, 0);
    Assign PAssign19665 = new_Assign((Optr)slot_PEG_OptionalExpression_child, (Optr)PSend19666);
    Array PThreadedCode19664 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19665, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send0, (Optr)PSend19666, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19662 = new_Method_with(PArray19663, empty_Array, empty_Array, PThreadedCode19664, 2, PAssign19665, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19662, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Array PThreadedCode19668 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19668, 1, self);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod19667, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19670 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19673 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19675 = new_Send((Optr)slot_PEG_OptionalExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19679 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19680 = new_Send((Optr)PSend19679, SMB_push_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19681 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19678 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19679, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend19680, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19681, (Optr)&t_block_return);
    Block PBlock19677 = new_Block_with(empty_Array, empty_Array, PThreadedCode19678, 2, PSend19680, PSend19681);
    // ifFalse:. 
    Send PSend19676 = new_Send((Optr)PSend19675, SMB_ifFalse_, 1, (Optr)PBlock19677);
    // stack. 
    Send PSend19682 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // stack. 
    Send PSend19683 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19684 = new_Send((Optr)PSend19683, SMB_peek, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19685 = new_Send((Optr)PEGSucceededOptionalResult_classReference, SMB_on_, 1, (Optr)PSend19684);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend19686 = new_Send((Optr)PSend19682, SMB_poke_, 1, (Optr)PSend19685);
    Array PThreadedCode19674 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_OptionalExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19675, (Optr)&t_send_ifFalse_, (Optr)PSend19676, (Optr)PBlock19677, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19682, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19683, (Optr)&t_send0, (Optr)PSend19684, (Optr)&t_send1, (Optr)PSend19685, (Optr)&t_send1, (Optr)PSend19686, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19672 = new_Block_with(PArray19673, empty_Array, PThreadedCode19674, 3, PSend19676, PSend19686, true_Const);
    // on:. 
    Send PSend19687 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19672);
    Array PThreadedCode19671 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19672, (Optr)&t_send1, (Optr)PSend19687, (Optr)&t_method_return);
    Method PMethod19669 = new_Method_with(PArray19670, empty_Array, empty_Array, PThreadedCode19671, 1, PSend19687);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19669, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19689 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19691 = new_Send((Optr)slot_PEG_OptionalExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19690 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PEG_OptionalExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19691, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19688 = new_Method_with(PArray19689, empty_Array, empty_Array, PThreadedCode19690, 2, PSend19691, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19688, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGOptionalExpression_layout() {
    layout_PEG_OptionalExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OptionalExpression = new_Symbol(L"OptionalExpression");
    slot_PEG_OptionalExpression_child = (Optr)new_Slot(0, L"child");
    layout_PEG_OptionalExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OptionalExpression)->values[0] = slot_PEG_OptionalExpression_child; // child 
    PEG_OptionalExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_OptionalExpression_Class_class);
    PEG_OptionalExpression_Class->layout = layout_PEG_OptionalExpression;
    PEG_OptionalExpression_Class->name = SMB_OptionalExpression;
    
}

void init_PEG_PEGOptionalExpression_methods() {
    init_SMB_initialize_();
    init_SMB_optional();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}