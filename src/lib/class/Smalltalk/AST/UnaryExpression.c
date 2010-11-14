#include <lib/class/Smalltalk/AST/UnaryExpression.h>


Optr layout_Smalltalk_AST_UnaryExpression_Class_class;
Optr slot_Smalltalk_AST_UnaryExpression_receiver;
Optr layout_Smalltalk_AST_UnaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15380 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15382 = new_Assign((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15381 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15382, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15379 = new_Method_with(PArray15380, empty_Array, empty_Array, PThreadedCode15381, 2, PAssign15382, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15379, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15384 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15383 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15384, 1, slot_Smalltalk_AST_UnaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15383, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15386 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15389 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15391 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15395 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15394 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15395, (Optr)&t_block_return);
    Block PBlock15393 = new_Block_with(empty_Array, empty_Array, PThreadedCode15394, 1, PSend15395);
    // ifFalse:. 
    Send PSend15392 = new_Send((Optr)PSuper15391, SMB_ifFalse_, 1, (Optr)PBlock15393);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15396 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15397 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15398 = new_Send((Optr)PSend15396, SMB__equals_, 1, (Optr)PSend15397);
    // escape:. 
    Send PSend15402 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15401 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15402, (Optr)&t_block_return);
    Block PBlock15400 = new_Block_with(empty_Array, empty_Array, PThreadedCode15401, 1, PSend15402);
    // ifFalse:. 
    Send PSend15399 = new_Send((Optr)PSend15398, SMB_ifFalse_, 1, (Optr)PBlock15400);
    Array PThreadedCode15390 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15391, (Optr)&t_send_ifFalse_, (Optr)PSend15392, (Optr)PBlock15393, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15396, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15397, (Optr)&t_send1, (Optr)PSend15398, (Optr)&t_send_ifFalse_, (Optr)PSend15399, (Optr)PBlock15400, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15388 = new_Block_with(PArray15389, empty_Array, PThreadedCode15390, 3, PSend15392, PSend15399, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15403 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15388);
    Array PThreadedCode15387 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15388, (Optr)&t_send1, (Optr)PSend15403, (Optr)&t_method_return);
    Method PMethod15385 = new_Method_with(PArray15386, empty_Array, empty_Array, PThreadedCode15387, 1, PSend15403);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15385, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15405 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    // visitUnaryExpression:. 
    Send PSend15407 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnaryExpression_, 1, (Optr)self);
    Array PThreadedCode15406 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15407, (Optr)&t_method_return);
    Method PMethod15404 = new_Method_with(PArray15405, empty_Array, empty_Array, PThreadedCode15406, 1, PSend15407);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15404, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15409 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15411 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15412 = new_Send((Optr)PSend15411, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15413 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15414 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15410 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15411, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15413, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15414, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15408 = new_Method_with(PArray15409, empty_Array, empty_Array, PThreadedCode15410, 4, PSend15412, PSend15413, PSuper15414, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15408, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15418 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15417 = new_Block_with(empty_Array, empty_Array, PThreadedCode15418, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15421 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15420 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15421, (Optr)&t_block_return);
    Block PBlock15419 = new_Block_with(empty_Array, empty_Array, PThreadedCode15420, 1, PSend15421);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15422 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15417, (Optr)PBlock15419);
    Array PThreadedCode15416 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15417, (Optr)&t_push_closure, (Optr)PBlock15419, (Optr)&t_send2, (Optr)PSend15422, (Optr)&t_method_return);
    Method PMethod15415 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15416, 1, PSend15422);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15415, Smalltalk_AST_UnaryExpression_Class);
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