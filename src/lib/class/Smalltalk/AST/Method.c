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
    Array PArray15454 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15456 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15455 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15456, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15453 = new_Method_with(PArray15454, empty_Array, empty_Array, PThreadedCode15455, 2, PAssign15456, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15453, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15458 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15460 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15462 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15464 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15465 = new_Send((Optr)PSend15464, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15463 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15464, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15465, (Optr)&t_method_return);
    Block PBlock15461 = new_Block_with(PArray15462, empty_Array, PThreadedCode15463, 1, PSend15465);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15466 = new_Send((Optr)PSend15460, SMB_anySatisfy_, 1, (Optr)PBlock15461);
    Array PThreadedCode15459 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15460, (Optr)&t_push_closure, (Optr)PBlock15461, (Optr)&t_send1, (Optr)PSend15466, (Optr)&t_method_return);
    Method PMethod15457 = new_Method_with(PArray15458, empty_Array, empty_Array, PThreadedCode15459, 1, PSend15466);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15457, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15468 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15471 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15473 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15477 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15476 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15477, (Optr)&t_block_return);
    Block PBlock15475 = new_Block_with(empty_Array, empty_Array, PThreadedCode15476, 1, PSend15477);
    // ifFalse:. 
    Send PSend15474 = new_Send((Optr)PSuper15473, SMB_ifFalse_, 1, (Optr)PBlock15475);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15478 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15479 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15480 = new_Send((Optr)PSend15478, SMB__equals_, 1, (Optr)PSend15479);
    // escape:. 
    Send PSend15484 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15483 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15484, (Optr)&t_block_return);
    Block PBlock15482 = new_Block_with(empty_Array, empty_Array, PThreadedCode15483, 1, PSend15484);
    // ifFalse:. 
    Send PSend15481 = new_Send((Optr)PSend15480, SMB_ifFalse_, 1, (Optr)PBlock15482);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15485 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15486 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15487 = new_Send((Optr)PSend15485, SMB__equals_, 1, (Optr)PSend15486);
    // escape:. 
    Send PSend15491 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15490 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15491, (Optr)&t_block_return);
    Block PBlock15489 = new_Block_with(empty_Array, empty_Array, PThreadedCode15490, 1, PSend15491);
    // ifFalse:. 
    Send PSend15488 = new_Send((Optr)PSend15487, SMB_ifFalse_, 1, (Optr)PBlock15489);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15492 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15493 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15494 = new_Send((Optr)PSend15492, SMB__equals_, 1, (Optr)PSend15493);
    // escape:. 
    Send PSend15498 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15497 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15498, (Optr)&t_block_return);
    Block PBlock15496 = new_Block_with(empty_Array, empty_Array, PThreadedCode15497, 1, PSend15498);
    // ifFalse:. 
    Send PSend15495 = new_Send((Optr)PSend15494, SMB_ifFalse_, 1, (Optr)PBlock15496);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15499 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15500 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15501 = new_Send((Optr)PSend15499, SMB__equals_, 1, (Optr)PSend15500);
    // escape:. 
    Send PSend15505 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15504 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15505, (Optr)&t_block_return);
    Block PBlock15503 = new_Block_with(empty_Array, empty_Array, PThreadedCode15504, 1, PSend15505);
    // ifFalse:. 
    Send PSend15502 = new_Send((Optr)PSend15501, SMB_ifFalse_, 1, (Optr)PBlock15503);
    Array PThreadedCode15472 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15473, (Optr)&t_send_ifFalse_, (Optr)PSend15474, (Optr)PBlock15475, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15478, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15479, (Optr)&t_send1, (Optr)PSend15480, (Optr)&t_send_ifFalse_, (Optr)PSend15481, (Optr)PBlock15482, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15485, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15486, (Optr)&t_send1, (Optr)PSend15487, (Optr)&t_send_ifFalse_, (Optr)PSend15488, (Optr)PBlock15489, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15492, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15493, (Optr)&t_send1, (Optr)PSend15494, (Optr)&t_send_ifFalse_, (Optr)PSend15495, (Optr)PBlock15496, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15499, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15500, (Optr)&t_send1, (Optr)PSend15501, (Optr)&t_send_ifFalse_, (Optr)PSend15502, (Optr)PBlock15503, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15470 = new_Block_with(PArray15471, empty_Array, PThreadedCode15472, 6, PSend15474, PSend15481, PSend15488, PSend15495, PSend15502, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15506 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15470);
    Array PThreadedCode15469 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15470, (Optr)&t_send1, (Optr)PSend15506, (Optr)&t_method_return);
    Method PMethod15467 = new_Method_with(PArray15468, empty_Array, empty_Array, PThreadedCode15469, 1, PSend15506);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15467, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15508 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15507 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15508, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15507, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15510 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15512 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15511 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15512, (Optr)&t_method_return);
    Method PMethod15509 = new_Method_with(PArray15510, empty_Array, empty_Array, PThreadedCode15511, 1, PSend15512);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15509, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15514 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15514, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15513, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15516 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15518 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend15519 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15520 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15521 = new_Send((Optr)PSend15520, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15522 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15517 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15518, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend15519, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15520, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15522, (Optr)&t_method_return);
    Method PMethod15515 = new_Method_with(PArray15516, empty_Array, empty_Array, PThreadedCode15517, 4, PSuper15518, PSend15519, PSend15521, PSend15522);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15515, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15524 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15523 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15524, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15523, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15527 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15528 = new_Send((Optr)PSend15527, SMB_hasReturnExpression, 0);
    Array PThreadedCode15526 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15527, (Optr)&t_send0, (Optr)PSend15528, (Optr)&t_method_return);
    Method PMethod15525 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15526, 1, PSend15528);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15525, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15530 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15532 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15532, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15529 = new_Method_with(PArray15530, empty_Array, empty_Array, PThreadedCode15531, 2, PAssign15532, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15529, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15534 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15533 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15534, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15533, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15536 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15538 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15538, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15535 = new_Method_with(PArray15536, empty_Array, empty_Array, PThreadedCode15537, 2, PAssign15538, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15535, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15540 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15540, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15539, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15542 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15544 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15543 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15544, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15541 = new_Method_with(PArray15542, empty_Array, empty_Array, PThreadedCode15543, 2, PAssign15544, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15541, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15546 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15548 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15547 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15548, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15545 = new_Method_with(PArray15546, empty_Array, empty_Array, PThreadedCode15547, 2, PAssign15548, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15545, Smalltalk_AST_Method_Class);
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