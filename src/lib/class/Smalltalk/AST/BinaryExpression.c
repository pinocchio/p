#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15436 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15438 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15437 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15438, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15435 = new_Method_with(PArray15436, empty_Array, empty_Array, PThreadedCode15437, 2, PAssign15438, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15435, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15440 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15439 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15440, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15439, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15443 = new_Super(SMB_initialize, 0);
    Assign PAssign15444 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15442 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15443, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15444, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15441 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15442, 3, PSuper15443, PAssign15444, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15441, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15446 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15449 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15451 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15455 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15454 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15455, (Optr)&t_block_return);
    Block PBlock15453 = new_Block_with(empty_Array, empty_Array, PThreadedCode15454, 1, PSend15455);
    // ifFalse:. 
    Send PSend15452 = new_Send((Optr)PSuper15451, SMB_ifFalse_, 1, (Optr)PBlock15453);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15456 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15457 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15458 = new_Send((Optr)PSend15456, SMB__equals_, 1, (Optr)PSend15457);
    // escape:. 
    Send PSend15462 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15461 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15462, (Optr)&t_block_return);
    Block PBlock15460 = new_Block_with(empty_Array, empty_Array, PThreadedCode15461, 1, PSend15462);
    // ifFalse:. 
    Send PSend15459 = new_Send((Optr)PSend15458, SMB_ifFalse_, 1, (Optr)PBlock15460);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15463 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15464 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15465 = new_Send((Optr)PSend15463, SMB__equals_, 1, (Optr)PSend15464);
    // escape:. 
    Send PSend15469 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15468 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15469, (Optr)&t_block_return);
    Block PBlock15467 = new_Block_with(empty_Array, empty_Array, PThreadedCode15468, 1, PSend15469);
    // ifFalse:. 
    Send PSend15466 = new_Send((Optr)PSend15465, SMB_ifFalse_, 1, (Optr)PBlock15467);
    Array PThreadedCode15450 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15451, (Optr)&t_send_ifFalse_, (Optr)PSend15452, (Optr)PBlock15453, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15456, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15457, (Optr)&t_send1, (Optr)PSend15458, (Optr)&t_send_ifFalse_, (Optr)PSend15459, (Optr)PBlock15460, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15463, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15464, (Optr)&t_send1, (Optr)PSend15465, (Optr)&t_send_ifFalse_, (Optr)PSend15466, (Optr)PBlock15467, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15448 = new_Block_with(PArray15449, empty_Array, PThreadedCode15450, 4, PSend15452, PSend15459, PSend15466, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15470 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15448);
    Array PThreadedCode15447 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15448, (Optr)&t_send1, (Optr)PSend15470, (Optr)&t_method_return);
    Method PMethod15445 = new_Method_with(PArray15446, empty_Array, empty_Array, PThreadedCode15447, 1, PSend15470);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15445, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15472 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15474 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15473 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15474, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15471 = new_Method_with(PArray15472, empty_Array, empty_Array, PThreadedCode15473, 2, PAssign15474, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15471, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15476 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15478 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15477 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15478, (Optr)&t_method_return);
    Method PMethod15475 = new_Method_with(PArray15476, empty_Array, empty_Array, PThreadedCode15477, 1, PSend15478);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15475, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15480 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15479 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15480, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15479, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15482 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15484 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15485 = new_Send((Optr)PSend15484, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15486 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15487 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15488 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15489 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15490 = new_Send((Optr)PSend15489, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15483 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15484, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15486, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15487, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15488, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15489, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15490, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15481 = new_Method_with(PArray15482, empty_Array, empty_Array, PThreadedCode15483, 6, PSend15485, PSend15486, PSuper15487, PSend15488, PSend15490, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15481, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15493 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15492 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15493, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15491 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15492, 2, PAssign15493, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15491, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15497 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15496 = new_Block_with(empty_Array, empty_Array, PThreadedCode15497, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15500 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15499 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15500, (Optr)&t_block_return);
    Block PBlock15498 = new_Block_with(empty_Array, empty_Array, PThreadedCode15499, 1, PSend15500);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15501 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15496, (Optr)PBlock15498);
    // hasReturnExpression. 
    Send PSend15504 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15503 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15504, (Optr)&t_block_return);
    Block PBlock15502 = new_Block_with(empty_Array, empty_Array, PThreadedCode15503, 1, PSend15504);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15505 = new_Send((Optr)PSend15501, SMB_or_, 1, (Optr)PBlock15502);
    Array PThreadedCode15495 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15496, (Optr)&t_push_closure, (Optr)PBlock15498, (Optr)&t_send2, (Optr)PSend15501, (Optr)&t_push_closure, (Optr)PBlock15502, (Optr)&t_send1, (Optr)PSend15505, (Optr)&t_method_return);
    Method PMethod15494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15495, 1, PSend15505);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15494, Smalltalk_AST_BinaryExpression_Class);
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