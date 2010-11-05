#include <lib/class/Smalltalk/AST/Method.h>


Optr layout_Smalltalk_AST_Method_Class_class;
Optr slot_Smalltalk_AST_Method_message;
Optr slot_Smalltalk_AST_Method_annotations;
Optr slot_Smalltalk_AST_Method_temporaries;
Optr slot_Smalltalk_AST_Method_statements;
Optr slot_Smalltalk_AST_Method_sourceObject;
Optr layout_Smalltalk_AST_Method;


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15527 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15529 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15528 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15529, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15526 = new_Method_with(PArray15527, empty_Array, empty_Array, PThreadedCode15528, 2, PAssign15529, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15526, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15531 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15533 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15535 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15537 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15538 = new_Send((Optr)PSend15537, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15536 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15537, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15538, (Optr)&t_method_return);
    Block PBlock15534 = new_Block_with(PArray15535, empty_Array, PThreadedCode15536, 1, PSend15538);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15539 = new_Send((Optr)PSend15533, SMB_anySatisfy_, 1, (Optr)PBlock15534);
    Array PThreadedCode15532 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15533, (Optr)&t_push_closure, (Optr)PBlock15534, (Optr)&t_send1, (Optr)PSend15539, (Optr)&t_method_return);
    Method PMethod15530 = new_Method_with(PArray15531, empty_Array, empty_Array, PThreadedCode15532, 1, PSend15539);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15530, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15541 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15544 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15546 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15550 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15549 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15550, (Optr)&t_block_return);
    Block PBlock15548 = new_Block_with(empty_Array, empty_Array, PThreadedCode15549, 1, PSend15550);
    // ifFalse:. 
    Send PSend15547 = new_Send((Optr)PSuper15546, SMB_ifFalse_, 1, (Optr)PBlock15548);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15551 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15552 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15553 = new_Send((Optr)PSend15551, SMB__equals_, 1, (Optr)PSend15552);
    // escape:. 
    Send PSend15557 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15556 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15557, (Optr)&t_block_return);
    Block PBlock15555 = new_Block_with(empty_Array, empty_Array, PThreadedCode15556, 1, PSend15557);
    // ifFalse:. 
    Send PSend15554 = new_Send((Optr)PSend15553, SMB_ifFalse_, 1, (Optr)PBlock15555);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15558 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15559 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15560 = new_Send((Optr)PSend15558, SMB__equals_, 1, (Optr)PSend15559);
    // escape:. 
    Send PSend15564 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15563 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15564, (Optr)&t_block_return);
    Block PBlock15562 = new_Block_with(empty_Array, empty_Array, PThreadedCode15563, 1, PSend15564);
    // ifFalse:. 
    Send PSend15561 = new_Send((Optr)PSend15560, SMB_ifFalse_, 1, (Optr)PBlock15562);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15565 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15566 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15567 = new_Send((Optr)PSend15565, SMB__equals_, 1, (Optr)PSend15566);
    // escape:. 
    Send PSend15571 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15570 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15571, (Optr)&t_block_return);
    Block PBlock15569 = new_Block_with(empty_Array, empty_Array, PThreadedCode15570, 1, PSend15571);
    // ifFalse:. 
    Send PSend15568 = new_Send((Optr)PSend15567, SMB_ifFalse_, 1, (Optr)PBlock15569);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15572 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15573 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15574 = new_Send((Optr)PSend15572, SMB__equals_, 1, (Optr)PSend15573);
    // escape:. 
    Send PSend15578 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15577 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15578, (Optr)&t_block_return);
    Block PBlock15576 = new_Block_with(empty_Array, empty_Array, PThreadedCode15577, 1, PSend15578);
    // ifFalse:. 
    Send PSend15575 = new_Send((Optr)PSend15574, SMB_ifFalse_, 1, (Optr)PBlock15576);
    Array PThreadedCode15545 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15546, (Optr)&t_send_ifFalse_, (Optr)PSend15547, (Optr)PBlock15548, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15551, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15552, (Optr)&t_send1, (Optr)PSend15553, (Optr)&t_send_ifFalse_, (Optr)PSend15554, (Optr)PBlock15555, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15558, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15559, (Optr)&t_send1, (Optr)PSend15560, (Optr)&t_send_ifFalse_, (Optr)PSend15561, (Optr)PBlock15562, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15565, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15566, (Optr)&t_send1, (Optr)PSend15567, (Optr)&t_send_ifFalse_, (Optr)PSend15568, (Optr)PBlock15569, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15572, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15573, (Optr)&t_send1, (Optr)PSend15574, (Optr)&t_send_ifFalse_, (Optr)PSend15575, (Optr)PBlock15576, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15543 = new_Block_with(PArray15544, empty_Array, PThreadedCode15545, 6, PSend15547, PSend15554, PSend15561, PSend15568, PSend15575, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15579 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15543);
    Array PThreadedCode15542 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15543, (Optr)&t_send1, (Optr)PSend15579, (Optr)&t_method_return);
    Method PMethod15540 = new_Method_with(PArray15541, empty_Array, empty_Array, PThreadedCode15542, 1, PSend15579);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15540, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15581 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15581, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15580, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15583 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15585 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15584 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15585, (Optr)&t_method_return);
    Method PMethod15582 = new_Method_with(PArray15583, empty_Array, empty_Array, PThreadedCode15584, 1, PSend15585);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15582, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15587 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15587, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15586, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15589 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15591 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend15592 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15593 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15594 = new_Send((Optr)PSend15593, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend15595 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode15590 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15591, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15592, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15593, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15594, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend15595, (Optr)&t_method_return);
    Method PMethod15588 = new_Method_with(PArray15589, empty_Array, empty_Array, PThreadedCode15590, 4, PSuper15591, PSend15592, PSend15594, PSend15595);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15588, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15597 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15597, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15596, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15600 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15601 = new_Send((Optr)PSend15600, SMB_hasReturnExpression, 0);
    Array PThreadedCode15599 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15600, (Optr)&t_send0, (Optr)PSend15601, (Optr)&t_method_return);
    Method PMethod15598 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15599, 1, PSend15601);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15598, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15603 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15605 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15604 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15605, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15602 = new_Method_with(PArray15603, empty_Array, empty_Array, PThreadedCode15604, 2, PAssign15605, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15602, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15607 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15607, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15606, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15609 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15611 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15610 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15611, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15608 = new_Method_with(PArray15609, empty_Array, empty_Array, PThreadedCode15610, 2, PAssign15611, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15608, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15613 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15613, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15612, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15615 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15617 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15617, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15614 = new_Method_with(PArray15615, empty_Array, empty_Array, PThreadedCode15616, 2, PAssign15617, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15614, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15619 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15621 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15620 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15621, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15618 = new_Method_with(PArray15619, empty_Array, empty_Array, PThreadedCode15620, 2, PAssign15621, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15618, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject_, MC_SMB_sourceObject_);
}

void init_Smalltalk_AST_ASTMethod_layout() {
    layout_Smalltalk_AST_Method_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Method = new_Symbol(L"Method");
    slot_Smalltalk_AST_Method_message = (Optr)new_Slot(0, L"message");
    slot_Smalltalk_AST_Method_annotations = (Optr)new_Slot(1, L"annotations");
    slot_Smalltalk_AST_Method_temporaries = (Optr)new_Slot(2, L"temporaries");
    slot_Smalltalk_AST_Method_statements = (Optr)new_Slot(3, L"statements");
    slot_Smalltalk_AST_Method_sourceObject = (Optr)new_Slot(4, L"sourceObject");
    layout_Smalltalk_AST_Method = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Method)->values[0] = slot_Smalltalk_AST_Method_message; // message 
    ((Array)layout_Smalltalk_AST_Method)->values[1] = slot_Smalltalk_AST_Method_annotations; // annotations 
    ((Array)layout_Smalltalk_AST_Method)->values[2] = slot_Smalltalk_AST_Method_temporaries; // temporaries 
    ((Array)layout_Smalltalk_AST_Method)->values[3] = slot_Smalltalk_AST_Method_statements; // statements 
    ((Array)layout_Smalltalk_AST_Method)->values[4] = slot_Smalltalk_AST_Method_sourceObject; // sourceObject 
    Smalltalk_AST_Method_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Method_Class_class);
    Smalltalk_AST_Method_Class->layout = layout_Smalltalk_AST_Method;
    Smalltalk_AST_Method_Class->name = SMB_Method;
    
}

void init_Smalltalk_AST_ASTMethod_methods() {
    init_SMB_message_();
    init_SMB_annotatedWith_();
    init_SMB__equals_();
    init_SMB_statements();
    init_SMB_accept_();
    init_SMB_annotations();
    init_SMB_printOn_();
    init_SMB_message();
    init_SMB_hasReturnExpression();
    init_SMB_statements_();
    init_SMB_temporaries();
    init_SMB_temporaries_();
    init_SMB_sourceObject();
    init_SMB_annotations_();
    init_SMB_sourceObject_();
    
}