#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19526 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19529 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19531 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19535 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19534 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19535, (Optr)&t_block_return);
    Block PBlock19533 = new_Block_with(empty_Array, empty_Array, PThreadedCode19534, 1, PSend19535);
    // ifFalse:. 
    Send PSend19532 = new_Send((Optr)PSend19531, SMB_ifFalse_, 1, (Optr)PBlock19533);
    // parseOn:. 
    Send PSend19538 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19538, (Optr)&t_block_return);
    Block PBlock19536 = new_Block_with(empty_Array, empty_Array, PThreadedCode19537, 1, PSend19538);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19539 = new_Send((Optr)PBlock19536, SMB_whileTrue, 0);
    Array PThreadedCode19530 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19531, (Optr)&t_send_ifFalse_, (Optr)PSend19532, (Optr)PBlock19533, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19536, (Optr)&t_send0, (Optr)PSend19539, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19528 = new_Block_with(PArray19529, empty_Array, PThreadedCode19530, 3, PSend19532, PSend19539, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19540 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19528);
    Array PThreadedCode19527 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19528, (Optr)&t_send1, (Optr)PSend19540, (Optr)&t_method_return);
    Method PMethod19525 = new_Method_with(PArray19526, empty_Array, empty_Array, PThreadedCode19527, 1, PSend19540);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19525, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19542 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19545 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19547 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19551 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19550 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19551, (Optr)&t_block_return);
    Block PBlock19549 = new_Block_with(empty_Array, empty_Array, PThreadedCode19550, 1, PSend19551);
    // ifFalse:. 
    Send PSend19548 = new_Send((Optr)PSend19547, SMB_ifFalse_, 1, (Optr)PBlock19549);
    // omitMatch:. 
    Send PSend19554 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19554, (Optr)&t_block_return);
    Block PBlock19552 = new_Block_with(empty_Array, empty_Array, PThreadedCode19553, 1, PSend19554);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19555 = new_Send((Optr)PBlock19552, SMB_whileTrue, 0);
    Array PThreadedCode19546 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19547, (Optr)&t_send_ifFalse_, (Optr)PSend19548, (Optr)PBlock19549, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19552, (Optr)&t_send0, (Optr)PSend19555, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19544 = new_Block_with(PArray19545, empty_Array, PThreadedCode19546, 3, PSend19548, PSend19555, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19556 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19544);
    Array PThreadedCode19543 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19544, (Optr)&t_send1, (Optr)PSend19556, (Optr)&t_method_return);
    Method PMethod19541 = new_Method_with(PArray19542, empty_Array, empty_Array, PThreadedCode19543, 1, PSend19556);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19541, PEG_StrongOneOrMoreExpression_Class);
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