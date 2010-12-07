#include <lib/class/Smalltalk/AST/UnaryExpression.h>


Optr layout_Smalltalk_AST_UnaryExpression_Class_class;
Optr slot_Smalltalk_AST_UnaryExpression_receiver;
Optr layout_Smalltalk_AST_UnaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15412 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15414 = new_Assign((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15414, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15411 = new_Method_with(PArray15412, empty_Array, empty_Array, PThreadedCode15413, 2, PAssign15414, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15411, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15416 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15415 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15416, 1, slot_Smalltalk_AST_UnaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15415, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
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
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15437 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    // visitUnaryExpression:. 
    Send PSend15439 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnaryExpression_, 1, (Optr)self);
    Array PThreadedCode15438 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15439, (Optr)&t_method_return);
    Method PMethod15436 = new_Method_with(PArray15437, empty_Array, empty_Array, PThreadedCode15438, 1, PSend15439);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15436, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
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
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
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