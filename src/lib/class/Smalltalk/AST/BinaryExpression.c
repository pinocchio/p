#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15425 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15427 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15426 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15427, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15424 = new_Method_with(PArray15425, empty_Array, empty_Array, PThreadedCode15426, 2, PAssign15427, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15424, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15429 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15429, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15428, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15432 = new_Super(SMB_initialize, 0);
    Assign PAssign15433 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15431 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15432, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15433, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15430 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15431, 3, PSuper15432, PAssign15433, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15430, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15435 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15438 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15440 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15444 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15443 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15444, (Optr)&t_block_return);
    Block PBlock15442 = new_Block_with(empty_Array, empty_Array, PThreadedCode15443, 1, PSend15444);
    // ifFalse:. 
    Send PSend15441 = new_Send((Optr)PSuper15440, SMB_ifFalse_, 1, (Optr)PBlock15442);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15445 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15446 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15447 = new_Send((Optr)PSend15445, SMB__equals_, 1, (Optr)PSend15446);
    // escape:. 
    Send PSend15451 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15450 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15451, (Optr)&t_block_return);
    Block PBlock15449 = new_Block_with(empty_Array, empty_Array, PThreadedCode15450, 1, PSend15451);
    // ifFalse:. 
    Send PSend15448 = new_Send((Optr)PSend15447, SMB_ifFalse_, 1, (Optr)PBlock15449);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15452 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15453 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15454 = new_Send((Optr)PSend15452, SMB__equals_, 1, (Optr)PSend15453);
    // escape:. 
    Send PSend15458 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15457 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15458, (Optr)&t_block_return);
    Block PBlock15456 = new_Block_with(empty_Array, empty_Array, PThreadedCode15457, 1, PSend15458);
    // ifFalse:. 
    Send PSend15455 = new_Send((Optr)PSend15454, SMB_ifFalse_, 1, (Optr)PBlock15456);
    Array PThreadedCode15439 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15440, (Optr)&t_send_ifFalse_, (Optr)PSend15441, (Optr)PBlock15442, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15445, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15446, (Optr)&t_send1, (Optr)PSend15447, (Optr)&t_send_ifFalse_, (Optr)PSend15448, (Optr)PBlock15449, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15452, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15453, (Optr)&t_send1, (Optr)PSend15454, (Optr)&t_send_ifFalse_, (Optr)PSend15455, (Optr)PBlock15456, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15437 = new_Block_with(PArray15438, empty_Array, PThreadedCode15439, 4, PSend15441, PSend15448, PSend15455, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15459 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15437);
    Array PThreadedCode15436 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15437, (Optr)&t_send1, (Optr)PSend15459, (Optr)&t_method_return);
    Method PMethod15434 = new_Method_with(PArray15435, empty_Array, empty_Array, PThreadedCode15436, 1, PSend15459);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15434, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15461 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15463 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15462 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15463, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15460 = new_Method_with(PArray15461, empty_Array, empty_Array, PThreadedCode15462, 2, PAssign15463, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15460, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15465 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15467 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15466 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15467, (Optr)&t_method_return);
    Method PMethod15464 = new_Method_with(PArray15465, empty_Array, empty_Array, PThreadedCode15466, 1, PSend15467);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15464, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15469 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15469, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15468, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15471 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15473 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15474 = new_Send((Optr)PSend15473, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15475 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15476 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15477 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15478 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15479 = new_Send((Optr)PSend15478, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15472 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15473, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15474, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15475, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15476, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15477, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15478, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15479, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15470 = new_Method_with(PArray15471, empty_Array, empty_Array, PThreadedCode15472, 6, PSend15474, PSend15475, PSuper15476, PSend15477, PSend15479, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15470, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15482 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15481 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15482, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15481, 2, PAssign15482, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15480, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15486 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15485 = new_Block_with(empty_Array, empty_Array, PThreadedCode15486, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15489 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15488 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15489, (Optr)&t_block_return);
    Block PBlock15487 = new_Block_with(empty_Array, empty_Array, PThreadedCode15488, 1, PSend15489);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15490 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15485, (Optr)PBlock15487);
    // hasReturnExpression. 
    Send PSend15493 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15492 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15493, (Optr)&t_block_return);
    Block PBlock15491 = new_Block_with(empty_Array, empty_Array, PThreadedCode15492, 1, PSend15493);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15494 = new_Send((Optr)PSend15490, SMB_or_, 1, (Optr)PBlock15491);
    Array PThreadedCode15484 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15485, (Optr)&t_push_closure, (Optr)PBlock15487, (Optr)&t_send2, (Optr)PSend15490, (Optr)&t_push_closure, (Optr)PBlock15491, (Optr)&t_send1, (Optr)PSend15494, (Optr)&t_method_return);
    Method PMethod15483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15484, 1, PSend15494);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15483, Smalltalk_AST_BinaryExpression_Class);
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