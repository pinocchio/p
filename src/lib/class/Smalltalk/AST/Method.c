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
    Array PArray15397 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15399 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15398 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15399, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15396 = new_Method_with(PArray15397, empty_Array, empty_Array, PThreadedCode15398, 2, PAssign15399, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15396, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15401 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15403 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15405 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15407 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15408 = new_Send((Optr)PSend15407, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15406 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15407, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15408, (Optr)&t_method_return);
    Block PBlock15404 = new_Block_with(PArray15405, empty_Array, PThreadedCode15406, 1, PSend15408);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15409 = new_Send((Optr)PSend15403, SMB_anySatisfy_, 1, (Optr)PBlock15404);
    Array PThreadedCode15402 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15403, (Optr)&t_push_closure, (Optr)PBlock15404, (Optr)&t_send1, (Optr)PSend15409, (Optr)&t_method_return);
    Method PMethod15400 = new_Method_with(PArray15401, empty_Array, empty_Array, PThreadedCode15402, 1, PSend15409);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15400, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15411 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15414 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15416 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15420 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15419 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15420, (Optr)&t_block_return);
    Block PBlock15418 = new_Block_with(empty_Array, empty_Array, PThreadedCode15419, 1, PSend15420);
    // ifFalse:. 
    Send PSend15417 = new_Send((Optr)PSuper15416, SMB_ifFalse_, 1, (Optr)PBlock15418);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15421 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15422 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15423 = new_Send((Optr)PSend15421, SMB__equals_, 1, (Optr)PSend15422);
    // escape:. 
    Send PSend15427 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15426 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15427, (Optr)&t_block_return);
    Block PBlock15425 = new_Block_with(empty_Array, empty_Array, PThreadedCode15426, 1, PSend15427);
    // ifFalse:. 
    Send PSend15424 = new_Send((Optr)PSend15423, SMB_ifFalse_, 1, (Optr)PBlock15425);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15428 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15429 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15430 = new_Send((Optr)PSend15428, SMB__equals_, 1, (Optr)PSend15429);
    // escape:. 
    Send PSend15434 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15433 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15434, (Optr)&t_block_return);
    Block PBlock15432 = new_Block_with(empty_Array, empty_Array, PThreadedCode15433, 1, PSend15434);
    // ifFalse:. 
    Send PSend15431 = new_Send((Optr)PSend15430, SMB_ifFalse_, 1, (Optr)PBlock15432);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15435 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15436 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15437 = new_Send((Optr)PSend15435, SMB__equals_, 1, (Optr)PSend15436);
    // escape:. 
    Send PSend15441 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15440 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15441, (Optr)&t_block_return);
    Block PBlock15439 = new_Block_with(empty_Array, empty_Array, PThreadedCode15440, 1, PSend15441);
    // ifFalse:. 
    Send PSend15438 = new_Send((Optr)PSend15437, SMB_ifFalse_, 1, (Optr)PBlock15439);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15442 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15443 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15444 = new_Send((Optr)PSend15442, SMB__equals_, 1, (Optr)PSend15443);
    // escape:. 
    Send PSend15448 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15447 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15448, (Optr)&t_block_return);
    Block PBlock15446 = new_Block_with(empty_Array, empty_Array, PThreadedCode15447, 1, PSend15448);
    // ifFalse:. 
    Send PSend15445 = new_Send((Optr)PSend15444, SMB_ifFalse_, 1, (Optr)PBlock15446);
    Array PThreadedCode15415 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15416, (Optr)&t_send_ifFalse_, (Optr)PSend15417, (Optr)PBlock15418, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15421, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15422, (Optr)&t_send1, (Optr)PSend15423, (Optr)&t_send_ifFalse_, (Optr)PSend15424, (Optr)PBlock15425, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15428, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15429, (Optr)&t_send1, (Optr)PSend15430, (Optr)&t_send_ifFalse_, (Optr)PSend15431, (Optr)PBlock15432, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15435, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15436, (Optr)&t_send1, (Optr)PSend15437, (Optr)&t_send_ifFalse_, (Optr)PSend15438, (Optr)PBlock15439, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15442, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15443, (Optr)&t_send1, (Optr)PSend15444, (Optr)&t_send_ifFalse_, (Optr)PSend15445, (Optr)PBlock15446, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15413 = new_Block_with(PArray15414, empty_Array, PThreadedCode15415, 6, PSend15417, PSend15424, PSend15431, PSend15438, PSend15445, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15449 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15413);
    Array PThreadedCode15412 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15413, (Optr)&t_send1, (Optr)PSend15449, (Optr)&t_method_return);
    Method PMethod15410 = new_Method_with(PArray15411, empty_Array, empty_Array, PThreadedCode15412, 1, PSend15449);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15410, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15451 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15450 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15451, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15450, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15453 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15455 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15454 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15455, (Optr)&t_method_return);
    Method PMethod15452 = new_Method_with(PArray15453, empty_Array, empty_Array, PThreadedCode15454, 1, PSend15455);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15452, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15457 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15456 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15457, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15456, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15459 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15461 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend15462 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15463 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15464 = new_Send((Optr)PSend15463, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend15465 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode15460 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15461, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15462, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15463, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15464, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend15465, (Optr)&t_method_return);
    Method PMethod15458 = new_Method_with(PArray15459, empty_Array, empty_Array, PThreadedCode15460, 4, PSuper15461, PSend15462, PSend15464, PSend15465);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15458, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15467 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15466 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15467, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15466, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15470 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15471 = new_Send((Optr)PSend15470, SMB_hasReturnExpression, 0);
    Array PThreadedCode15469 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15470, (Optr)&t_send0, (Optr)PSend15471, (Optr)&t_method_return);
    Method PMethod15468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15469, 1, PSend15471);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15468, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15473 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15475 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15474 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15475, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15472 = new_Method_with(PArray15473, empty_Array, empty_Array, PThreadedCode15474, 2, PAssign15475, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15472, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15477 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15476 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15477, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15476, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15479 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15481 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15480 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15481, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15478 = new_Method_with(PArray15479, empty_Array, empty_Array, PThreadedCode15480, 2, PAssign15481, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15478, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15483 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15482 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15483, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15482, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15485 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15487 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15486 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15487, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15484 = new_Method_with(PArray15485, empty_Array, empty_Array, PThreadedCode15486, 2, PAssign15487, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15484, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15489 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15491 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15490 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15491, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15488 = new_Method_with(PArray15489, empty_Array, empty_Array, PThreadedCode15490, 2, PAssign15491, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15488, Smalltalk_AST_Method_Class);
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