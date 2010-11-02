#include <lib/class/PEG/OptionalExpression.h>


Optr layout_PEG_OptionalExpression_Class_class;
Optr slot_PEG_OptionalExpression_child;
Optr layout_PEG_OptionalExpression;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray19492 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19495 = new_Send((Optr)VAR_expression_0_0, SMB_asChildParser, 0);
    Assign PAssign19494 = new_Assign((Optr)slot_PEG_OptionalExpression_child, (Optr)PSend19495);
    Array PThreadedCode19493 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19494, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send0, (Optr)PSend19495, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19491 = new_Method_with(PArray19492, empty_Array, empty_Array, PThreadedCode19493, 2, PAssign19494, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19491, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Array PThreadedCode19497 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19497, 1, self);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod19496, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19499 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19502 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19504 = new_Send((Optr)slot_PEG_OptionalExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19508 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19509 = new_Send((Optr)PSend19508, SMB_push_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19510 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19507 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19508, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend19509, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19510, (Optr)&t_block_return);
    Block PBlock19506 = new_Block_with(empty_Array, empty_Array, PThreadedCode19507, 2, PSend19509, PSend19510);
    // ifFalse:. 
    Send PSend19505 = new_Send((Optr)PSend19504, SMB_ifFalse_, 1, (Optr)PBlock19506);
    // stack. 
    Send PSend19511 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // stack. 
    Send PSend19512 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19513 = new_Send((Optr)PSend19512, SMB_peek, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19514 = new_Send((Optr)PEGSucceededOptionalResult_classReference, SMB_on_, 1, (Optr)PSend19513);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend19515 = new_Send((Optr)PSend19511, SMB_poke_, 1, (Optr)PSend19514);
    Array PThreadedCode19503 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_OptionalExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19504, (Optr)&t_send_ifFalse_, (Optr)PSend19505, (Optr)PBlock19506, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19511, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19512, (Optr)&t_send0, (Optr)PSend19513, (Optr)&t_send1, (Optr)PSend19514, (Optr)&t_send1, (Optr)PSend19515, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19501 = new_Block_with(PArray19502, empty_Array, PThreadedCode19503, 3, PSend19505, PSend19515, true_Const);
    // on:. 
    Send PSend19516 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19501);
    Array PThreadedCode19500 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19501, (Optr)&t_send1, (Optr)PSend19516, (Optr)&t_method_return);
    Method PMethod19498 = new_Method_with(PArray19499, empty_Array, empty_Array, PThreadedCode19500, 1, PSend19516);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19498, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19518 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19520 = new_Send((Optr)slot_PEG_OptionalExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19519 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PEG_OptionalExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19520, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19517 = new_Method_with(PArray19518, empty_Array, empty_Array, PThreadedCode19519, 2, PSend19520, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19517, PEG_OptionalExpression_Class);
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