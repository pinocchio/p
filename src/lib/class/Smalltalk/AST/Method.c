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
    Array PArray15563 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15565 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15565, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15562 = new_Method_with(PArray15563, empty_Array, empty_Array, PThreadedCode15564, 2, PAssign15565, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15562, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15567 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15569 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15571 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15573 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15574 = new_Send((Optr)PSend15573, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15572 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15573, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15574, (Optr)&t_method_return);
    Block PBlock15570 = new_Block_with(PArray15571, empty_Array, PThreadedCode15572, 1, PSend15574);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15575 = new_Send((Optr)PSend15569, SMB_anySatisfy_, 1, (Optr)PBlock15570);
    Array PThreadedCode15568 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15569, (Optr)&t_push_closure, (Optr)PBlock15570, (Optr)&t_send1, (Optr)PSend15575, (Optr)&t_method_return);
    Method PMethod15566 = new_Method_with(PArray15567, empty_Array, empty_Array, PThreadedCode15568, 1, PSend15575);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15566, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15577 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15580 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15582 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15586 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15585 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15586, (Optr)&t_block_return);
    Block PBlock15584 = new_Block_with(empty_Array, empty_Array, PThreadedCode15585, 1, PSend15586);
    // ifFalse:. 
    Send PSend15583 = new_Send((Optr)PSuper15582, SMB_ifFalse_, 1, (Optr)PBlock15584);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15587 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15588 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15589 = new_Send((Optr)PSend15587, SMB__equals_, 1, (Optr)PSend15588);
    // escape:. 
    Send PSend15593 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15592 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15593, (Optr)&t_block_return);
    Block PBlock15591 = new_Block_with(empty_Array, empty_Array, PThreadedCode15592, 1, PSend15593);
    // ifFalse:. 
    Send PSend15590 = new_Send((Optr)PSend15589, SMB_ifFalse_, 1, (Optr)PBlock15591);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15594 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15595 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15596 = new_Send((Optr)PSend15594, SMB__equals_, 1, (Optr)PSend15595);
    // escape:. 
    Send PSend15600 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15599 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15600, (Optr)&t_block_return);
    Block PBlock15598 = new_Block_with(empty_Array, empty_Array, PThreadedCode15599, 1, PSend15600);
    // ifFalse:. 
    Send PSend15597 = new_Send((Optr)PSend15596, SMB_ifFalse_, 1, (Optr)PBlock15598);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15601 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15602 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15603 = new_Send((Optr)PSend15601, SMB__equals_, 1, (Optr)PSend15602);
    // escape:. 
    Send PSend15607 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15606 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15607, (Optr)&t_block_return);
    Block PBlock15605 = new_Block_with(empty_Array, empty_Array, PThreadedCode15606, 1, PSend15607);
    // ifFalse:. 
    Send PSend15604 = new_Send((Optr)PSend15603, SMB_ifFalse_, 1, (Optr)PBlock15605);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15608 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15609 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15610 = new_Send((Optr)PSend15608, SMB__equals_, 1, (Optr)PSend15609);
    // escape:. 
    Send PSend15614 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15613 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15614, (Optr)&t_block_return);
    Block PBlock15612 = new_Block_with(empty_Array, empty_Array, PThreadedCode15613, 1, PSend15614);
    // ifFalse:. 
    Send PSend15611 = new_Send((Optr)PSend15610, SMB_ifFalse_, 1, (Optr)PBlock15612);
    Array PThreadedCode15581 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15582, (Optr)&t_send_ifFalse_, (Optr)PSend15583, (Optr)PBlock15584, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15587, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15588, (Optr)&t_send1, (Optr)PSend15589, (Optr)&t_send_ifFalse_, (Optr)PSend15590, (Optr)PBlock15591, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15594, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15595, (Optr)&t_send1, (Optr)PSend15596, (Optr)&t_send_ifFalse_, (Optr)PSend15597, (Optr)PBlock15598, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15601, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15602, (Optr)&t_send1, (Optr)PSend15603, (Optr)&t_send_ifFalse_, (Optr)PSend15604, (Optr)PBlock15605, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15608, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15609, (Optr)&t_send1, (Optr)PSend15610, (Optr)&t_send_ifFalse_, (Optr)PSend15611, (Optr)PBlock15612, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15579 = new_Block_with(PArray15580, empty_Array, PThreadedCode15581, 6, PSend15583, PSend15590, PSend15597, PSend15604, PSend15611, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15615 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15579);
    Array PThreadedCode15578 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15579, (Optr)&t_send1, (Optr)PSend15615, (Optr)&t_method_return);
    Method PMethod15576 = new_Method_with(PArray15577, empty_Array, empty_Array, PThreadedCode15578, 1, PSend15615);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15576, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15617 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15617, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15616, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15619 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15621 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15620 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15621, (Optr)&t_method_return);
    Method PMethod15618 = new_Method_with(PArray15619, empty_Array, empty_Array, PThreadedCode15620, 1, PSend15621);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15618, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15623 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15623, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15622, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15625 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15627 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend15628 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15629 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15630 = new_Send((Optr)PSend15629, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend15631 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode15626 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15627, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15628, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15629, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend15631, (Optr)&t_method_return);
    Method PMethod15624 = new_Method_with(PArray15625, empty_Array, empty_Array, PThreadedCode15626, 4, PSuper15627, PSend15628, PSend15630, PSend15631);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15624, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15633 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15633, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15632, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15636 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15637 = new_Send((Optr)PSend15636, SMB_hasReturnExpression, 0);
    Array PThreadedCode15635 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15636, (Optr)&t_send0, (Optr)PSend15637, (Optr)&t_method_return);
    Method PMethod15634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15635, 1, PSend15637);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15634, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15639 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15641 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15640 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15641, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15638 = new_Method_with(PArray15639, empty_Array, empty_Array, PThreadedCode15640, 2, PAssign15641, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15638, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15643 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15643, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15642, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15645 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15647 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15647, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15644 = new_Method_with(PArray15645, empty_Array, empty_Array, PThreadedCode15646, 2, PAssign15647, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15644, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15649 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15649, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15648, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15651 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15653 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15652 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15653, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15650 = new_Method_with(PArray15651, empty_Array, empty_Array, PThreadedCode15652, 2, PAssign15653, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15650, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15655 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15657 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15656 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15657, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15654 = new_Method_with(PArray15655, empty_Array, empty_Array, PThreadedCode15656, 2, PAssign15657, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15654, Smalltalk_AST_Method_Class);
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