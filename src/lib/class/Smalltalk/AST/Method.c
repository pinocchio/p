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
    Array PArray15538 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15540 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15539 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15540, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15537 = new_Method_with(PArray15538, empty_Array, empty_Array, PThreadedCode15539, 2, PAssign15540, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15537, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15542 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15544 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15546 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15548 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15549 = new_Send((Optr)PSend15548, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15547 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15548, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15549, (Optr)&t_method_return);
    Block PBlock15545 = new_Block_with(PArray15546, empty_Array, PThreadedCode15547, 1, PSend15549);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15550 = new_Send((Optr)PSend15544, SMB_anySatisfy_, 1, (Optr)PBlock15545);
    Array PThreadedCode15543 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15544, (Optr)&t_push_closure, (Optr)PBlock15545, (Optr)&t_send1, (Optr)PSend15550, (Optr)&t_method_return);
    Method PMethod15541 = new_Method_with(PArray15542, empty_Array, empty_Array, PThreadedCode15543, 1, PSend15550);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15541, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15552 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15555 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15557 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15561 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15560 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15561, (Optr)&t_block_return);
    Block PBlock15559 = new_Block_with(empty_Array, empty_Array, PThreadedCode15560, 1, PSend15561);
    // ifFalse:. 
    Send PSend15558 = new_Send((Optr)PSuper15557, SMB_ifFalse_, 1, (Optr)PBlock15559);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15562 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15563 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15564 = new_Send((Optr)PSend15562, SMB__equals_, 1, (Optr)PSend15563);
    // escape:. 
    Send PSend15568 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15567 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15568, (Optr)&t_block_return);
    Block PBlock15566 = new_Block_with(empty_Array, empty_Array, PThreadedCode15567, 1, PSend15568);
    // ifFalse:. 
    Send PSend15565 = new_Send((Optr)PSend15564, SMB_ifFalse_, 1, (Optr)PBlock15566);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15569 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15570 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15571 = new_Send((Optr)PSend15569, SMB__equals_, 1, (Optr)PSend15570);
    // escape:. 
    Send PSend15575 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15574 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15575, (Optr)&t_block_return);
    Block PBlock15573 = new_Block_with(empty_Array, empty_Array, PThreadedCode15574, 1, PSend15575);
    // ifFalse:. 
    Send PSend15572 = new_Send((Optr)PSend15571, SMB_ifFalse_, 1, (Optr)PBlock15573);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15576 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15577 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15578 = new_Send((Optr)PSend15576, SMB__equals_, 1, (Optr)PSend15577);
    // escape:. 
    Send PSend15582 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15581 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15582, (Optr)&t_block_return);
    Block PBlock15580 = new_Block_with(empty_Array, empty_Array, PThreadedCode15581, 1, PSend15582);
    // ifFalse:. 
    Send PSend15579 = new_Send((Optr)PSend15578, SMB_ifFalse_, 1, (Optr)PBlock15580);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15583 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15584 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15585 = new_Send((Optr)PSend15583, SMB__equals_, 1, (Optr)PSend15584);
    // escape:. 
    Send PSend15589 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15588 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15589, (Optr)&t_block_return);
    Block PBlock15587 = new_Block_with(empty_Array, empty_Array, PThreadedCode15588, 1, PSend15589);
    // ifFalse:. 
    Send PSend15586 = new_Send((Optr)PSend15585, SMB_ifFalse_, 1, (Optr)PBlock15587);
    Array PThreadedCode15556 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15557, (Optr)&t_send_ifFalse_, (Optr)PSend15558, (Optr)PBlock15559, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15562, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15563, (Optr)&t_send1, (Optr)PSend15564, (Optr)&t_send_ifFalse_, (Optr)PSend15565, (Optr)PBlock15566, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15569, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15570, (Optr)&t_send1, (Optr)PSend15571, (Optr)&t_send_ifFalse_, (Optr)PSend15572, (Optr)PBlock15573, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15576, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15577, (Optr)&t_send1, (Optr)PSend15578, (Optr)&t_send_ifFalse_, (Optr)PSend15579, (Optr)PBlock15580, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15583, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15584, (Optr)&t_send1, (Optr)PSend15585, (Optr)&t_send_ifFalse_, (Optr)PSend15586, (Optr)PBlock15587, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15554 = new_Block_with(PArray15555, empty_Array, PThreadedCode15556, 6, PSend15558, PSend15565, PSend15572, PSend15579, PSend15586, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15590 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15554);
    Array PThreadedCode15553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15554, (Optr)&t_send1, (Optr)PSend15590, (Optr)&t_method_return);
    Method PMethod15551 = new_Method_with(PArray15552, empty_Array, empty_Array, PThreadedCode15553, 1, PSend15590);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15551, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15592 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15592, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15591, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15594 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15596 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15595 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15596, (Optr)&t_method_return);
    Method PMethod15593 = new_Method_with(PArray15594, empty_Array, empty_Array, PThreadedCode15595, 1, PSend15596);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15593, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15598 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15597 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15598, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15597, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15600 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15602 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend15603 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15604 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15605 = new_Send((Optr)PSend15604, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15606 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15601 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend15603, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15604, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15606, (Optr)&t_method_return);
    Method PMethod15599 = new_Method_with(PArray15600, empty_Array, empty_Array, PThreadedCode15601, 4, PSuper15602, PSend15603, PSend15605, PSend15606);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15599, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15608 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15608, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15607, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15611 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15612 = new_Send((Optr)PSend15611, SMB_hasReturnExpression, 0);
    Array PThreadedCode15610 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15611, (Optr)&t_send0, (Optr)PSend15612, (Optr)&t_method_return);
    Method PMethod15609 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15610, 1, PSend15612);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15609, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15614 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15616 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15616, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15613 = new_Method_with(PArray15614, empty_Array, empty_Array, PThreadedCode15615, 2, PAssign15616, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15613, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15618 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15617 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15618, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15617, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15620 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15622 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15621 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15622, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15619 = new_Method_with(PArray15620, empty_Array, empty_Array, PThreadedCode15621, 2, PAssign15622, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15619, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15624 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15624, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15623, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15626 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15628 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15628, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15625 = new_Method_with(PArray15626, empty_Array, empty_Array, PThreadedCode15627, 2, PAssign15628, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15625, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15630 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15632 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15631 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15632, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15629 = new_Method_with(PArray15630, empty_Array, empty_Array, PThreadedCode15631, 2, PAssign15632, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15629, Smalltalk_AST_Method_Class);
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