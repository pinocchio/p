#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15312 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15314 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15313 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15314, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15311 = new_Method_with(PArray15312, empty_Array, empty_Array, PThreadedCode15313, 2, PAssign15314, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15311, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15316 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15318 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15317 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15318, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15315 = new_Method_with(PArray15316, empty_Array, empty_Array, PThreadedCode15317, 2, PAssign15318, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15315, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15320 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod15319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15320, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15319, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15323 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15325 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign15324 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend15325);
    Array PThreadedCode15322 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15323, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15324, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15325, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15321 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15322, 3, PSuper15323, PAssign15324, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15321, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15327 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15330 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15332 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15336 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15335 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15336, (Optr)&t_block_return);
    Block PBlock15334 = new_Block_with(empty_Array, empty_Array, PThreadedCode15335, 1, PSend15336);
    // ifFalse:. 
    Send PSend15333 = new_Send((Optr)PSuper15332, SMB_ifFalse_, 1, (Optr)PBlock15334);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15337 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15338 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15339 = new_Send((Optr)PSend15337, SMB__equals_, 1, (Optr)PSend15338);
    // escape:. 
    Send PSend15343 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15342 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15343, (Optr)&t_block_return);
    Block PBlock15341 = new_Block_with(empty_Array, empty_Array, PThreadedCode15342, 1, PSend15343);
    // ifFalse:. 
    Send PSend15340 = new_Send((Optr)PSend15339, SMB_ifFalse_, 1, (Optr)PBlock15341);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15344 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15345 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15346 = new_Send((Optr)PSend15344, SMB__equals_, 1, (Optr)PSend15345);
    // escape:. 
    Send PSend15350 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15349 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15350, (Optr)&t_block_return);
    Block PBlock15348 = new_Block_with(empty_Array, empty_Array, PThreadedCode15349, 1, PSend15350);
    // ifFalse:. 
    Send PSend15347 = new_Send((Optr)PSend15346, SMB_ifFalse_, 1, (Optr)PBlock15348);
    Array PThreadedCode15331 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15332, (Optr)&t_send_ifFalse_, (Optr)PSend15333, (Optr)PBlock15334, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15337, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15338, (Optr)&t_send1, (Optr)PSend15339, (Optr)&t_send_ifFalse_, (Optr)PSend15340, (Optr)PBlock15341, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15344, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15345, (Optr)&t_send1, (Optr)PSend15346, (Optr)&t_send_ifFalse_, (Optr)PSend15347, (Optr)PBlock15348, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15329 = new_Block_with(PArray15330, empty_Array, PThreadedCode15331, 4, PSend15333, PSend15340, PSend15347, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15351 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15329);
    Array PThreadedCode15328 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15329, (Optr)&t_send1, (Optr)PSend15351, (Optr)&t_method_return);
    Method PMethod15326 = new_Method_with(PArray15327, empty_Array, empty_Array, PThreadedCode15328, 1, PSend15351);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15326, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15353 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15355 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15354 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15355, (Optr)&t_method_return);
    Method PMethod15352 = new_Method_with(PArray15353, empty_Array, empty_Array, PThreadedCode15354, 1, PSend15355);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15352, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15359 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15358 = new_Block_with(empty_Array, empty_Array, PThreadedCode15359, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15362 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15361 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15362, (Optr)&t_block_return);
    Block PBlock15360 = new_Block_with(empty_Array, empty_Array, PThreadedCode15361, 1, PSend15362);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15363 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15358, (Optr)PBlock15360);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15366 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15367 = new_Send((Optr)PSend15366, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15365 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15366, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15367, (Optr)&t_block_return);
    Block PBlock15364 = new_Block_with(empty_Array, empty_Array, PThreadedCode15365, 1, PSend15367);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15368 = new_Send((Optr)PSend15363, SMB_or_, 1, (Optr)PBlock15364);
    Array PThreadedCode15357 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15358, (Optr)&t_push_closure, (Optr)PBlock15360, (Optr)&t_send2, (Optr)PSend15363, (Optr)&t_push_closure, (Optr)PBlock15364, (Optr)&t_send1, (Optr)PSend15368, (Optr)&t_method_return);
    Method PMethod15356 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15357, 1, PSend15368);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15356, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15370 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15370, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15369, Smalltalk_AST_MessageExpression_Class);
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