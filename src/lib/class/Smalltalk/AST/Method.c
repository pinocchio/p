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
    Array PArray15367 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15369 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15368 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15369, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15366 = new_Method_with(PArray15367, empty_Array, empty_Array, PThreadedCode15368, 2, PAssign15369, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15366, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15371 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15373 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15375 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15377 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15378 = new_Send((Optr)PSend15377, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15376 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15377, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15378, (Optr)&t_method_return);
    Block PBlock15374 = new_Block_with(PArray15375, empty_Array, PThreadedCode15376, 1, PSend15378);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15379 = new_Send((Optr)PSend15373, SMB_anySatisfy_, 1, (Optr)PBlock15374);
    Array PThreadedCode15372 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15373, (Optr)&t_push_closure, (Optr)PBlock15374, (Optr)&t_send1, (Optr)PSend15379, (Optr)&t_method_return);
    Method PMethod15370 = new_Method_with(PArray15371, empty_Array, empty_Array, PThreadedCode15372, 1, PSend15379);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15370, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15381 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15384 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15386 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15390 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15389 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15390, (Optr)&t_block_return);
    Block PBlock15388 = new_Block_with(empty_Array, empty_Array, PThreadedCode15389, 1, PSend15390);
    // ifFalse:. 
    Send PSend15387 = new_Send((Optr)PSuper15386, SMB_ifFalse_, 1, (Optr)PBlock15388);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15391 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15392 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15393 = new_Send((Optr)PSend15391, SMB__equals_, 1, (Optr)PSend15392);
    // escape:. 
    Send PSend15397 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15396 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15397, (Optr)&t_block_return);
    Block PBlock15395 = new_Block_with(empty_Array, empty_Array, PThreadedCode15396, 1, PSend15397);
    // ifFalse:. 
    Send PSend15394 = new_Send((Optr)PSend15393, SMB_ifFalse_, 1, (Optr)PBlock15395);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15398 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15399 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15400 = new_Send((Optr)PSend15398, SMB__equals_, 1, (Optr)PSend15399);
    // escape:. 
    Send PSend15404 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15403 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15404, (Optr)&t_block_return);
    Block PBlock15402 = new_Block_with(empty_Array, empty_Array, PThreadedCode15403, 1, PSend15404);
    // ifFalse:. 
    Send PSend15401 = new_Send((Optr)PSend15400, SMB_ifFalse_, 1, (Optr)PBlock15402);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15405 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15406 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15407 = new_Send((Optr)PSend15405, SMB__equals_, 1, (Optr)PSend15406);
    // escape:. 
    Send PSend15411 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15410 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15411, (Optr)&t_block_return);
    Block PBlock15409 = new_Block_with(empty_Array, empty_Array, PThreadedCode15410, 1, PSend15411);
    // ifFalse:. 
    Send PSend15408 = new_Send((Optr)PSend15407, SMB_ifFalse_, 1, (Optr)PBlock15409);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15412 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15413 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15414 = new_Send((Optr)PSend15412, SMB__equals_, 1, (Optr)PSend15413);
    // escape:. 
    Send PSend15418 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15417 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15418, (Optr)&t_block_return);
    Block PBlock15416 = new_Block_with(empty_Array, empty_Array, PThreadedCode15417, 1, PSend15418);
    // ifFalse:. 
    Send PSend15415 = new_Send((Optr)PSend15414, SMB_ifFalse_, 1, (Optr)PBlock15416);
    Array PThreadedCode15385 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15386, (Optr)&t_send_ifFalse_, (Optr)PSend15387, (Optr)PBlock15388, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15391, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15392, (Optr)&t_send1, (Optr)PSend15393, (Optr)&t_send_ifFalse_, (Optr)PSend15394, (Optr)PBlock15395, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15398, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15399, (Optr)&t_send1, (Optr)PSend15400, (Optr)&t_send_ifFalse_, (Optr)PSend15401, (Optr)PBlock15402, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15405, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15406, (Optr)&t_send1, (Optr)PSend15407, (Optr)&t_send_ifFalse_, (Optr)PSend15408, (Optr)PBlock15409, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15412, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15413, (Optr)&t_send1, (Optr)PSend15414, (Optr)&t_send_ifFalse_, (Optr)PSend15415, (Optr)PBlock15416, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15383 = new_Block_with(PArray15384, empty_Array, PThreadedCode15385, 6, PSend15387, PSend15394, PSend15401, PSend15408, PSend15415, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15419 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15383);
    Array PThreadedCode15382 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15383, (Optr)&t_send1, (Optr)PSend15419, (Optr)&t_method_return);
    Method PMethod15380 = new_Method_with(PArray15381, empty_Array, empty_Array, PThreadedCode15382, 1, PSend15419);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15380, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15421 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15421, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15420, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15423 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15425 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15424 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15425, (Optr)&t_method_return);
    Method PMethod15422 = new_Method_with(PArray15423, empty_Array, empty_Array, PThreadedCode15424, 1, PSend15425);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15422, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15427 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15427, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15426, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15429 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15431 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5746 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5746_Const = new_Constant((Optr)char_5746);
    // <<. 
    Send PSend15432 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5746_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15433 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15434 = new_Send((Optr)PSend15433, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15435 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15430 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15431, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5746, (Optr)&t_send1, (Optr)PSend15432, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15433, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15435, (Optr)&t_method_return);
    Method PMethod15428 = new_Method_with(PArray15429, empty_Array, empty_Array, PThreadedCode15430, 4, PSuper15431, PSend15432, PSend15434, PSend15435);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15428, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15437 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15436 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15437, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15436, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15440 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15441 = new_Send((Optr)PSend15440, SMB_hasReturnExpression, 0);
    Array PThreadedCode15439 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15440, (Optr)&t_send0, (Optr)PSend15441, (Optr)&t_method_return);
    Method PMethod15438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15439, 1, PSend15441);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15438, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15443 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15445 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15444 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15445, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15442 = new_Method_with(PArray15443, empty_Array, empty_Array, PThreadedCode15444, 2, PAssign15445, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15442, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15447 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15446 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15447, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15446, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15449 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15451 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15450 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15451, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15448 = new_Method_with(PArray15449, empty_Array, empty_Array, PThreadedCode15450, 2, PAssign15451, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15448, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15453 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15452 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15453, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15452, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15455 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15457 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15456 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15457, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15454 = new_Method_with(PArray15455, empty_Array, empty_Array, PThreadedCode15456, 2, PAssign15457, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15454, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15459 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15461 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15460 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15461, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15458 = new_Method_with(PArray15459, empty_Array, empty_Array, PThreadedCode15460, 2, PAssign15461, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15458, Smalltalk_AST_Method_Class);
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