#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15461 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15463 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15462 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15463, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15460 = new_Method_with(PArray15461, empty_Array, empty_Array, PThreadedCode15462, 2, PAssign15463, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15460, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15465 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15464 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15465, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15464, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15468 = new_Super(SMB_initialize, 0);
    Assign PAssign15469 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15467 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15468, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15469, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15466 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15467, 3, PSuper15468, PAssign15469, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15466, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15471 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15474 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15476 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15480 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15479 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15480, (Optr)&t_block_return);
    Block PBlock15478 = new_Block_with(empty_Array, empty_Array, PThreadedCode15479, 1, PSend15480);
    // ifFalse:. 
    Send PSend15477 = new_Send((Optr)PSuper15476, SMB_ifFalse_, 1, (Optr)PBlock15478);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15481 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15482 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15483 = new_Send((Optr)PSend15481, SMB__equals_, 1, (Optr)PSend15482);
    // escape:. 
    Send PSend15487 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15486 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15487, (Optr)&t_block_return);
    Block PBlock15485 = new_Block_with(empty_Array, empty_Array, PThreadedCode15486, 1, PSend15487);
    // ifFalse:. 
    Send PSend15484 = new_Send((Optr)PSend15483, SMB_ifFalse_, 1, (Optr)PBlock15485);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15488 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15489 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15490 = new_Send((Optr)PSend15488, SMB__equals_, 1, (Optr)PSend15489);
    // escape:. 
    Send PSend15494 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15493 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15494, (Optr)&t_block_return);
    Block PBlock15492 = new_Block_with(empty_Array, empty_Array, PThreadedCode15493, 1, PSend15494);
    // ifFalse:. 
    Send PSend15491 = new_Send((Optr)PSend15490, SMB_ifFalse_, 1, (Optr)PBlock15492);
    Array PThreadedCode15475 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15476, (Optr)&t_send_ifFalse_, (Optr)PSend15477, (Optr)PBlock15478, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15481, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15482, (Optr)&t_send1, (Optr)PSend15483, (Optr)&t_send_ifFalse_, (Optr)PSend15484, (Optr)PBlock15485, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15488, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15489, (Optr)&t_send1, (Optr)PSend15490, (Optr)&t_send_ifFalse_, (Optr)PSend15491, (Optr)PBlock15492, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15473 = new_Block_with(PArray15474, empty_Array, PThreadedCode15475, 4, PSend15477, PSend15484, PSend15491, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15495 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15473);
    Array PThreadedCode15472 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15473, (Optr)&t_send1, (Optr)PSend15495, (Optr)&t_method_return);
    Method PMethod15470 = new_Method_with(PArray15471, empty_Array, empty_Array, PThreadedCode15472, 1, PSend15495);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15470, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15497 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15499 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15498 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15499, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15496 = new_Method_with(PArray15497, empty_Array, empty_Array, PThreadedCode15498, 2, PAssign15499, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15496, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15501 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15503 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15502 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15503, (Optr)&t_method_return);
    Method PMethod15500 = new_Method_with(PArray15501, empty_Array, empty_Array, PThreadedCode15502, 1, PSend15503);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15500, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15505 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15504 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15505, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15504, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15507 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15509 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15510 = new_Send((Optr)PSend15509, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15511 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15512 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15513 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15514 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15515 = new_Send((Optr)PSend15514, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15508 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15509, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15510, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15511, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15512, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15513, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15514, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15515, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15506 = new_Method_with(PArray15507, empty_Array, empty_Array, PThreadedCode15508, 6, PSend15510, PSend15511, PSuper15512, PSend15513, PSend15515, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15506, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15518 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15517 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15518, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15516 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15517, 2, PAssign15518, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15516, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15522 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15521 = new_Block_with(empty_Array, empty_Array, PThreadedCode15522, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15525 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15524 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15525, (Optr)&t_block_return);
    Block PBlock15523 = new_Block_with(empty_Array, empty_Array, PThreadedCode15524, 1, PSend15525);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15526 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15521, (Optr)PBlock15523);
    // hasReturnExpression. 
    Send PSend15529 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15528 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15529, (Optr)&t_block_return);
    Block PBlock15527 = new_Block_with(empty_Array, empty_Array, PThreadedCode15528, 1, PSend15529);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15530 = new_Send((Optr)PSend15526, SMB_or_, 1, (Optr)PBlock15527);
    Array PThreadedCode15520 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15521, (Optr)&t_push_closure, (Optr)PBlock15523, (Optr)&t_send2, (Optr)PSend15526, (Optr)&t_push_closure, (Optr)PBlock15527, (Optr)&t_send1, (Optr)PSend15530, (Optr)&t_method_return);
    Method PMethod15519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15520, 1, PSend15530);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15519, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTBinaryExpression_layout() {
    layout_Smalltalk_AST_BinaryExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BinaryExpression = new_Symbol(L"BinaryExpression");
    slot_Smalltalk_AST_BinaryExpression_receiver = (Optr)new_Slot(1, L"receiver");
    slot_Smalltalk_AST_BinaryExpression_argument = (Optr)new_Slot(2, L"argument");
    slot_Smalltalk_AST_BinaryExpression_scoped = (Optr)new_Slot(3, L"scoped");
    layout_Smalltalk_AST_BinaryExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Smalltalk_AST_BinaryExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_BinaryExpression)->values[1] = slot_Smalltalk_AST_BinaryExpression_receiver; // receiver 
    ((Array)layout_Smalltalk_AST_BinaryExpression)->values[2] = slot_Smalltalk_AST_BinaryExpression_argument; // argument 
    ((Array)layout_Smalltalk_AST_BinaryExpression)->values[3] = slot_Smalltalk_AST_BinaryExpression_scoped; // scoped 
    Smalltalk_AST_BinaryExpression_Class = (Class)new_Class(Smalltalk_AST_BinarySelector_Class, layout_Smalltalk_AST_BinaryExpression_Class_class);
    Smalltalk_AST_BinaryExpression_Class->layout = layout_Smalltalk_AST_BinaryExpression;
    Smalltalk_AST_BinaryExpression_Class->name = SMB_BinaryExpression;
    
}

void init_Smalltalk_AST_ASTBinaryExpression_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB_initialize();
    init_SMB__equals_();
    init_SMB_argument_();
    init_SMB_accept_();
    init_SMB_argument();
    init_SMB_printOn_();
    init_SMB_scoped();
    init_SMB_hasReturnExpression();
    
}