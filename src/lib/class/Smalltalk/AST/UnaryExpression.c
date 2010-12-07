#include <lib/class/Smalltalk/AST/UnaryExpression.h>


Optr layout_Smalltalk_AST_UnaryExpression_Class_class;
Optr slot_Smalltalk_AST_UnaryExpression_receiver;
Optr layout_Smalltalk_AST_UnaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray15412 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15414 = new_Assign((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15414, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15411 = new_Method_with(PArray15412, empty_Array, empty_Array, PThreadedCode15413, 2, PAssign15414, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15411, Smalltalk_AST_UnaryExpression_Class);
=======
    Array PArray15378 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15380 = new_Assign((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15379 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15380, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15377 = new_Method_with(PArray15378, empty_Array, empty_Array, PThreadedCode15379, 2, PAssign15380, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15377, Smalltalk_AST_UnaryExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
<<<<<<< HEAD
    Array PThreadedCode15416 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15415 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15416, 1, slot_Smalltalk_AST_UnaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15415, Smalltalk_AST_UnaryExpression_Class);
=======
    Array PThreadedCode15382 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15381 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15382, 1, slot_Smalltalk_AST_UnaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15381, Smalltalk_AST_UnaryExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray15418 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15421 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15423 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15427 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15426 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15427, (Optr)&t_block_return);
    Block PBlock15425 = new_Block_with(empty_Array, empty_Array, PThreadedCode15426, 1, PSend15427);
    // ifFalse:. 
    Send PSend15424 = new_Send((Optr)PSuper15423, SMB_ifFalse_, 1, (Optr)PBlock15425);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15428 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15429 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15430 = new_Send((Optr)PSend15428, SMB__equals_, 1, (Optr)PSend15429);
    // escape:. 
    Send PSend15434 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15433 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15434, (Optr)&t_block_return);
    Block PBlock15432 = new_Block_with(empty_Array, empty_Array, PThreadedCode15433, 1, PSend15434);
    // ifFalse:. 
    Send PSend15431 = new_Send((Optr)PSend15430, SMB_ifFalse_, 1, (Optr)PBlock15432);
    Array PThreadedCode15422 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15423, (Optr)&t_send_ifFalse_, (Optr)PSend15424, (Optr)PBlock15425, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15428, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15429, (Optr)&t_send1, (Optr)PSend15430, (Optr)&t_send_ifFalse_, (Optr)PSend15431, (Optr)PBlock15432, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15420 = new_Block_with(PArray15421, empty_Array, PThreadedCode15422, 3, PSend15424, PSend15431, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15435 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15420);
    Array PThreadedCode15419 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15420, (Optr)&t_send1, (Optr)PSend15435, (Optr)&t_method_return);
    Method PMethod15417 = new_Method_with(PArray15418, empty_Array, empty_Array, PThreadedCode15419, 1, PSend15435);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15417, Smalltalk_AST_UnaryExpression_Class);
=======
    Array PArray15384 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15387 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15389 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15393 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15392 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15393, (Optr)&t_block_return);
    Block PBlock15391 = new_Block_with(empty_Array, empty_Array, PThreadedCode15392, 1, PSend15393);
    // ifFalse:. 
    Send PSend15390 = new_Send((Optr)PSuper15389, SMB_ifFalse_, 1, (Optr)PBlock15391);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15394 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15395 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15396 = new_Send((Optr)PSend15394, SMB__equals_, 1, (Optr)PSend15395);
    // escape:. 
    Send PSend15400 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15399 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15400, (Optr)&t_block_return);
    Block PBlock15398 = new_Block_with(empty_Array, empty_Array, PThreadedCode15399, 1, PSend15400);
    // ifFalse:. 
    Send PSend15397 = new_Send((Optr)PSend15396, SMB_ifFalse_, 1, (Optr)PBlock15398);
    Array PThreadedCode15388 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15389, (Optr)&t_send_ifFalse_, (Optr)PSend15390, (Optr)PBlock15391, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15394, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15395, (Optr)&t_send1, (Optr)PSend15396, (Optr)&t_send_ifFalse_, (Optr)PSend15397, (Optr)PBlock15398, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15386 = new_Block_with(PArray15387, empty_Array, PThreadedCode15388, 3, PSend15390, PSend15397, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15401 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15386);
    Array PThreadedCode15385 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15386, (Optr)&t_send1, (Optr)PSend15401, (Optr)&t_method_return);
    Method PMethod15383 = new_Method_with(PArray15384, empty_Array, empty_Array, PThreadedCode15385, 1, PSend15401);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15383, Smalltalk_AST_UnaryExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15437 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    // visitUnaryExpression:. 
    Send PSend15439 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnaryExpression_, 1, (Optr)self);
    Array PThreadedCode15438 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15439, (Optr)&t_method_return);
    Method PMethod15436 = new_Method_with(PArray15437, empty_Array, empty_Array, PThreadedCode15438, 1, PSend15439);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15436, Smalltalk_AST_UnaryExpression_Class);
=======
    Array PArray15403 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    // visitUnaryExpression:. 
    Send PSend15405 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnaryExpression_, 1, (Optr)self);
    Array PThreadedCode15404 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15405, (Optr)&t_method_return);
    Method PMethod15402 = new_Method_with(PArray15403, empty_Array, empty_Array, PThreadedCode15404, 1, PSend15405);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15402, Smalltalk_AST_UnaryExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray15441 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15443 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15444 = new_Send((Optr)PSend15443, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15445 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15446 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15442 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15443, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15444, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15445, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15446, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15440 = new_Method_with(PArray15441, empty_Array, empty_Array, PThreadedCode15442, 4, PSend15444, PSend15445, PSuper15446, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15440, Smalltalk_AST_UnaryExpression_Class);
=======
    Array PArray15407 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15409 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15410 = new_Send((Optr)PSend15409, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15411 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15412 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15408 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15409, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15411, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15412, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15406 = new_Method_with(PArray15407, empty_Array, empty_Array, PThreadedCode15408, 4, PSend15410, PSend15411, PSuper15412, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15406, Smalltalk_AST_UnaryExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
<<<<<<< HEAD
    Array PThreadedCode15450 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15449 = new_Block_with(empty_Array, empty_Array, PThreadedCode15450, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15453 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15452 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15453, (Optr)&t_block_return);
    Block PBlock15451 = new_Block_with(empty_Array, empty_Array, PThreadedCode15452, 1, PSend15453);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15454 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15449, (Optr)PBlock15451);
    Array PThreadedCode15448 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15449, (Optr)&t_push_closure, (Optr)PBlock15451, (Optr)&t_send2, (Optr)PSend15454, (Optr)&t_method_return);
    Method PMethod15447 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15448, 1, PSend15454);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15447, Smalltalk_AST_UnaryExpression_Class);
=======
    Array PThreadedCode15416 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15415 = new_Block_with(empty_Array, empty_Array, PThreadedCode15416, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15419 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15418 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15419, (Optr)&t_block_return);
    Block PBlock15417 = new_Block_with(empty_Array, empty_Array, PThreadedCode15418, 1, PSend15419);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15420 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15415, (Optr)PBlock15417);
    Array PThreadedCode15414 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15415, (Optr)&t_push_closure, (Optr)PBlock15417, (Optr)&t_send2, (Optr)PSend15420, (Optr)&t_method_return);
    Method PMethod15413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15414, 1, PSend15420);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15413, Smalltalk_AST_UnaryExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTUnaryExpression_layout() {
    layout_Smalltalk_AST_UnaryExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UnaryExpression = new_Symbol(L"UnaryExpression");
    slot_Smalltalk_AST_UnaryExpression_receiver = (Optr)new_Slot(1, L"receiver");
    layout_Smalltalk_AST_UnaryExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_UnaryExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_UnaryExpression)->values[1] = slot_Smalltalk_AST_UnaryExpression_receiver; // receiver 
    Smalltalk_AST_UnaryExpression_Class = (Class)new_Class(Smalltalk_AST_UnarySelector_Class, layout_Smalltalk_AST_UnaryExpression_Class_class);
    Smalltalk_AST_UnaryExpression_Class->layout = layout_Smalltalk_AST_UnaryExpression;
    Smalltalk_AST_UnaryExpression_Class->name = SMB_UnaryExpression;
    
}

void init_Smalltalk_AST_ASTUnaryExpression_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_hasReturnExpression();
    
}