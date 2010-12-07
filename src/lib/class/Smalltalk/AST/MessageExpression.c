#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15344 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15346 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15345 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15346, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15343 = new_Method_with(PArray15344, empty_Array, empty_Array, PThreadedCode15345, 2, PAssign15346, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15343, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15348 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15350 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15349 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15350, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15347 = new_Method_with(PArray15348, empty_Array, empty_Array, PThreadedCode15349, 2, PAssign15350, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15347, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15352 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod15351 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15352, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15351, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15355 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15357 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign15356 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend15357);
    Array PThreadedCode15354 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15355, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15356, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15357, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15354, 3, PSuper15355, PAssign15356, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15353, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15359 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15362 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15364 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15368 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15367 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15368, (Optr)&t_block_return);
    Block PBlock15366 = new_Block_with(empty_Array, empty_Array, PThreadedCode15367, 1, PSend15368);
    // ifFalse:. 
    Send PSend15365 = new_Send((Optr)PSuper15364, SMB_ifFalse_, 1, (Optr)PBlock15366);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15369 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15370 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15371 = new_Send((Optr)PSend15369, SMB__equals_, 1, (Optr)PSend15370);
    // escape:. 
    Send PSend15375 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15374 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15375, (Optr)&t_block_return);
    Block PBlock15373 = new_Block_with(empty_Array, empty_Array, PThreadedCode15374, 1, PSend15375);
    // ifFalse:. 
    Send PSend15372 = new_Send((Optr)PSend15371, SMB_ifFalse_, 1, (Optr)PBlock15373);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15376 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15377 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15378 = new_Send((Optr)PSend15376, SMB__equals_, 1, (Optr)PSend15377);
    // escape:. 
    Send PSend15382 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15381 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15382, (Optr)&t_block_return);
    Block PBlock15380 = new_Block_with(empty_Array, empty_Array, PThreadedCode15381, 1, PSend15382);
    // ifFalse:. 
    Send PSend15379 = new_Send((Optr)PSend15378, SMB_ifFalse_, 1, (Optr)PBlock15380);
    Array PThreadedCode15363 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15364, (Optr)&t_send_ifFalse_, (Optr)PSend15365, (Optr)PBlock15366, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15369, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15370, (Optr)&t_send1, (Optr)PSend15371, (Optr)&t_send_ifFalse_, (Optr)PSend15372, (Optr)PBlock15373, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15376, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15377, (Optr)&t_send1, (Optr)PSend15378, (Optr)&t_send_ifFalse_, (Optr)PSend15379, (Optr)PBlock15380, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15361 = new_Block_with(PArray15362, empty_Array, PThreadedCode15363, 4, PSend15365, PSend15372, PSend15379, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15383 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15361);
    Array PThreadedCode15360 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15361, (Optr)&t_send1, (Optr)PSend15383, (Optr)&t_method_return);
    Method PMethod15358 = new_Method_with(PArray15359, empty_Array, empty_Array, PThreadedCode15360, 1, PSend15383);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15358, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15385 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15387 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15386 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15387, (Optr)&t_method_return);
    Method PMethod15384 = new_Method_with(PArray15385, empty_Array, empty_Array, PThreadedCode15386, 1, PSend15387);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15384, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15391 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15390 = new_Block_with(empty_Array, empty_Array, PThreadedCode15391, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15394 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15393 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15394, (Optr)&t_block_return);
    Block PBlock15392 = new_Block_with(empty_Array, empty_Array, PThreadedCode15393, 1, PSend15394);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15395 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15390, (Optr)PBlock15392);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15398 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15399 = new_Send((Optr)PSend15398, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15397 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15398, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15399, (Optr)&t_block_return);
    Block PBlock15396 = new_Block_with(empty_Array, empty_Array, PThreadedCode15397, 1, PSend15399);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15400 = new_Send((Optr)PSend15395, SMB_or_, 1, (Optr)PBlock15396);
    Array PThreadedCode15389 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15390, (Optr)&t_push_closure, (Optr)PBlock15392, (Optr)&t_send2, (Optr)PSend15395, (Optr)&t_push_closure, (Optr)PBlock15396, (Optr)&t_send1, (Optr)PSend15400, (Optr)&t_method_return);
    Method PMethod15388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15389, 1, PSend15400);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15388, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15402 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15401 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15402, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15401, Smalltalk_AST_MessageExpression_Class);
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