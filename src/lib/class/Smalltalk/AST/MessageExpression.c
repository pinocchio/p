#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15371 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15373 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15372 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15373, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15370 = new_Method_with(PArray15371, empty_Array, empty_Array, PThreadedCode15372, 2, PAssign15373, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15370, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15375 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15377 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15376 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15377, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15374 = new_Method_with(PArray15375, empty_Array, empty_Array, PThreadedCode15376, 2, PAssign15377, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15374, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15379 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod15378 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15379, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15378, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15382 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15384 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign15383 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend15384);
    Array PThreadedCode15381 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15382, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15383, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15381, 3, PSuper15382, PAssign15383, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15380, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
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
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15396 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15397 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15398 = new_Send((Optr)PSend15396, SMB__equals_, 1, (Optr)PSend15397);
    // escape:. 
    Send PSend15402 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15401 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15402, (Optr)&t_block_return);
    Block PBlock15400 = new_Block_with(empty_Array, empty_Array, PThreadedCode15401, 1, PSend15402);
    // ifFalse:. 
    Send PSend15399 = new_Send((Optr)PSend15398, SMB_ifFalse_, 1, (Optr)PBlock15400);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15403 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15404 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15405 = new_Send((Optr)PSend15403, SMB__equals_, 1, (Optr)PSend15404);
    // escape:. 
    Send PSend15409 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15408 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15409, (Optr)&t_block_return);
    Block PBlock15407 = new_Block_with(empty_Array, empty_Array, PThreadedCode15408, 1, PSend15409);
    // ifFalse:. 
    Send PSend15406 = new_Send((Optr)PSend15405, SMB_ifFalse_, 1, (Optr)PBlock15407);
    Array PThreadedCode15390 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15391, (Optr)&t_send_ifFalse_, (Optr)PSend15392, (Optr)PBlock15393, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15396, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15397, (Optr)&t_send1, (Optr)PSend15398, (Optr)&t_send_ifFalse_, (Optr)PSend15399, (Optr)PBlock15400, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15403, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15404, (Optr)&t_send1, (Optr)PSend15405, (Optr)&t_send_ifFalse_, (Optr)PSend15406, (Optr)PBlock15407, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15388 = new_Block_with(PArray15389, empty_Array, PThreadedCode15390, 4, PSend15392, PSend15399, PSend15406, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15410 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15388);
    Array PThreadedCode15387 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15388, (Optr)&t_send1, (Optr)PSend15410, (Optr)&t_method_return);
    Method PMethod15385 = new_Method_with(PArray15386, empty_Array, empty_Array, PThreadedCode15387, 1, PSend15410);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15385, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15412 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15414 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15413 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15414, (Optr)&t_method_return);
    Method PMethod15411 = new_Method_with(PArray15412, empty_Array, empty_Array, PThreadedCode15413, 1, PSend15414);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15411, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15418 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15417 = new_Block_with(empty_Array, empty_Array, PThreadedCode15418, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15421 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15420 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15421, (Optr)&t_block_return);
    Block PBlock15419 = new_Block_with(empty_Array, empty_Array, PThreadedCode15420, 1, PSend15421);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15422 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15417, (Optr)PBlock15419);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15425 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15426 = new_Send((Optr)PSend15425, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15424 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15425, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15426, (Optr)&t_block_return);
    Block PBlock15423 = new_Block_with(empty_Array, empty_Array, PThreadedCode15424, 1, PSend15426);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15427 = new_Send((Optr)PSend15422, SMB_or_, 1, (Optr)PBlock15423);
    Array PThreadedCode15416 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15417, (Optr)&t_push_closure, (Optr)PBlock15419, (Optr)&t_send2, (Optr)PSend15422, (Optr)&t_push_closure, (Optr)PBlock15423, (Optr)&t_send1, (Optr)PSend15427, (Optr)&t_method_return);
    Method PMethod15415 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15416, 1, PSend15427);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15415, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15429 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15429, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15428, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments, MC_SMB_arguments);
}

void init_Smalltalk_AST_ASTMessageExpression_layout() {
    layout_Smalltalk_AST_MessageExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MessageExpression = new_Symbol(L"MessageExpression");
    slot_Smalltalk_AST_MessageExpression_receiver = (Optr)new_Slot(1, L"receiver");
    slot_Smalltalk_AST_MessageExpression_arguments = (Optr)new_Slot(2, L"arguments");
    layout_Smalltalk_AST_MessageExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[1] = slot_Smalltalk_AST_MessageExpression_receiver; // receiver 
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[2] = slot_Smalltalk_AST_MessageExpression_arguments; // arguments 
    Smalltalk_AST_MessageExpression_Class = (Class)new_Class(Smalltalk_AST_KeywordSelector_Class, layout_Smalltalk_AST_MessageExpression_Class_class);
    Smalltalk_AST_MessageExpression_Class->layout = layout_Smalltalk_AST_MessageExpression;
    Smalltalk_AST_MessageExpression_Class->name = SMB_MessageExpression;
    
}

void init_Smalltalk_AST_ASTMessageExpression_methods() {
    init_SMB_receiver_();
    init_SMB_arguments_();
    init_SMB_receiver();
    init_SMB_initialize();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    init_SMB_arguments();
    
}