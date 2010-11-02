#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19439 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19442 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19444 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19448 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19447 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19448, (Optr)&t_block_return);
    Block PBlock19446 = new_Block_with(empty_Array, empty_Array, PThreadedCode19447, 1, PSend19448);
    // ifFalse:. 
    Send PSend19445 = new_Send((Optr)PSend19444, SMB_ifFalse_, 1, (Optr)PBlock19446);
    // parseOn:. 
    Send PSend19451 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19450 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19451, (Optr)&t_block_return);
    Block PBlock19449 = new_Block_with(empty_Array, empty_Array, PThreadedCode19450, 1, PSend19451);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19452 = new_Send((Optr)PBlock19449, SMB_whileTrue, 0);
    Array PThreadedCode19443 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19444, (Optr)&t_send_ifFalse_, (Optr)PSend19445, (Optr)PBlock19446, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19449, (Optr)&t_send0, (Optr)PSend19452, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19441 = new_Block_with(PArray19442, empty_Array, PThreadedCode19443, 3, PSend19445, PSend19452, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19453 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19441);
    Array PThreadedCode19440 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19441, (Optr)&t_send1, (Optr)PSend19453, (Optr)&t_method_return);
    Method PMethod19438 = new_Method_with(PArray19439, empty_Array, empty_Array, PThreadedCode19440, 1, PSend19453);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19438, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19455 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19458 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19460 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19464 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19463 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19464, (Optr)&t_block_return);
    Block PBlock19462 = new_Block_with(empty_Array, empty_Array, PThreadedCode19463, 1, PSend19464);
    // ifFalse:. 
    Send PSend19461 = new_Send((Optr)PSend19460, SMB_ifFalse_, 1, (Optr)PBlock19462);
    // omitMatch:. 
    Send PSend19467 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19466 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19467, (Optr)&t_block_return);
    Block PBlock19465 = new_Block_with(empty_Array, empty_Array, PThreadedCode19466, 1, PSend19467);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19468 = new_Send((Optr)PBlock19465, SMB_whileTrue, 0);
    Array PThreadedCode19459 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19460, (Optr)&t_send_ifFalse_, (Optr)PSend19461, (Optr)PBlock19462, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19465, (Optr)&t_send0, (Optr)PSend19468, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19457 = new_Block_with(PArray19458, empty_Array, PThreadedCode19459, 3, PSend19461, PSend19468, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19469 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19457);
    Array PThreadedCode19456 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19457, (Optr)&t_send1, (Optr)PSend19469, (Optr)&t_method_return);
    Method PMethod19454 = new_Method_with(PArray19455, empty_Array, empty_Array, PThreadedCode19456, 1, PSend19469);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19454, PEG_StrongOneOrMoreExpression_Class);
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