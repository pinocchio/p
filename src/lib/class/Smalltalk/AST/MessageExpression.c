#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15310 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15312 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15311 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15312, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15309 = new_Method_with(PArray15310, empty_Array, empty_Array, PThreadedCode15311, 2, PAssign15312, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15309, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15314 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15316 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15315 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15316, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15313 = new_Method_with(PArray15314, empty_Array, empty_Array, PThreadedCode15315, 2, PAssign15316, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15313, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15318 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod15317 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15318, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15317, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15321 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15323 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign15322 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend15323);
    Array PThreadedCode15320 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15321, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15322, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15323, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15320, 3, PSuper15321, PAssign15322, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15319, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15325 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15328 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15330 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15334 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15333 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15334, (Optr)&t_block_return);
    Block PBlock15332 = new_Block_with(empty_Array, empty_Array, PThreadedCode15333, 1, PSend15334);
    // ifFalse:. 
    Send PSend15331 = new_Send((Optr)PSuper15330, SMB_ifFalse_, 1, (Optr)PBlock15332);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15335 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15336 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15337 = new_Send((Optr)PSend15335, SMB__equals_, 1, (Optr)PSend15336);
    // escape:. 
    Send PSend15341 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15340 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15341, (Optr)&t_block_return);
    Block PBlock15339 = new_Block_with(empty_Array, empty_Array, PThreadedCode15340, 1, PSend15341);
    // ifFalse:. 
    Send PSend15338 = new_Send((Optr)PSend15337, SMB_ifFalse_, 1, (Optr)PBlock15339);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15342 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15343 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15344 = new_Send((Optr)PSend15342, SMB__equals_, 1, (Optr)PSend15343);
    // escape:. 
    Send PSend15348 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15347 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15348, (Optr)&t_block_return);
    Block PBlock15346 = new_Block_with(empty_Array, empty_Array, PThreadedCode15347, 1, PSend15348);
    // ifFalse:. 
    Send PSend15345 = new_Send((Optr)PSend15344, SMB_ifFalse_, 1, (Optr)PBlock15346);
    Array PThreadedCode15329 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15330, (Optr)&t_send_ifFalse_, (Optr)PSend15331, (Optr)PBlock15332, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15335, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15336, (Optr)&t_send1, (Optr)PSend15337, (Optr)&t_send_ifFalse_, (Optr)PSend15338, (Optr)PBlock15339, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15342, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15343, (Optr)&t_send1, (Optr)PSend15344, (Optr)&t_send_ifFalse_, (Optr)PSend15345, (Optr)PBlock15346, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15327 = new_Block_with(PArray15328, empty_Array, PThreadedCode15329, 4, PSend15331, PSend15338, PSend15345, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15349 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15327);
    Array PThreadedCode15326 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15327, (Optr)&t_send1, (Optr)PSend15349, (Optr)&t_method_return);
    Method PMethod15324 = new_Method_with(PArray15325, empty_Array, empty_Array, PThreadedCode15326, 1, PSend15349);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15324, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15351 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15353 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15352 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15353, (Optr)&t_method_return);
    Method PMethod15350 = new_Method_with(PArray15351, empty_Array, empty_Array, PThreadedCode15352, 1, PSend15353);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15350, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15357 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15356 = new_Block_with(empty_Array, empty_Array, PThreadedCode15357, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15360 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15359 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15360, (Optr)&t_block_return);
    Block PBlock15358 = new_Block_with(empty_Array, empty_Array, PThreadedCode15359, 1, PSend15360);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15361 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15356, (Optr)PBlock15358);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15364 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15365 = new_Send((Optr)PSend15364, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15363 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15364, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15365, (Optr)&t_block_return);
    Block PBlock15362 = new_Block_with(empty_Array, empty_Array, PThreadedCode15363, 1, PSend15365);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15366 = new_Send((Optr)PSend15361, SMB_or_, 1, (Optr)PBlock15362);
    Array PThreadedCode15355 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15356, (Optr)&t_push_closure, (Optr)PBlock15358, (Optr)&t_send2, (Optr)PSend15361, (Optr)&t_push_closure, (Optr)PBlock15362, (Optr)&t_send1, (Optr)PSend15366, (Optr)&t_method_return);
    Method PMethod15354 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15355, 1, PSend15366);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15354, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15368 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15367 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15368, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15367, Smalltalk_AST_MessageExpression_Class);
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