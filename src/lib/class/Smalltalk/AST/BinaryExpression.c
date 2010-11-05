#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15295 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15297 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15296 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15297, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15294 = new_Method_with(PArray15295, empty_Array, empty_Array, PThreadedCode15296, 2, PAssign15297, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15294, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15299 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15298 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15299, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15298, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15302 = new_Super(SMB_initialize, 0);
    Assign PAssign15303 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15301 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15302, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15303, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15300 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15301, 3, PSuper15302, PAssign15303, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15300, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15305 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15308 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15310 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15314 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15313 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15314, (Optr)&t_block_return);
    Block PBlock15312 = new_Block_with(empty_Array, empty_Array, PThreadedCode15313, 1, PSend15314);
    // ifFalse:. 
    Send PSend15311 = new_Send((Optr)PSuper15310, SMB_ifFalse_, 1, (Optr)PBlock15312);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15315 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15316 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15317 = new_Send((Optr)PSend15315, SMB__equals_, 1, (Optr)PSend15316);
    // escape:. 
    Send PSend15321 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15320 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15321, (Optr)&t_block_return);
    Block PBlock15319 = new_Block_with(empty_Array, empty_Array, PThreadedCode15320, 1, PSend15321);
    // ifFalse:. 
    Send PSend15318 = new_Send((Optr)PSend15317, SMB_ifFalse_, 1, (Optr)PBlock15319);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15322 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15323 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15324 = new_Send((Optr)PSend15322, SMB__equals_, 1, (Optr)PSend15323);
    // escape:. 
    Send PSend15328 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15327 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15328, (Optr)&t_block_return);
    Block PBlock15326 = new_Block_with(empty_Array, empty_Array, PThreadedCode15327, 1, PSend15328);
    // ifFalse:. 
    Send PSend15325 = new_Send((Optr)PSend15324, SMB_ifFalse_, 1, (Optr)PBlock15326);
    Array PThreadedCode15309 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15310, (Optr)&t_send_ifFalse_, (Optr)PSend15311, (Optr)PBlock15312, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15315, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15316, (Optr)&t_send1, (Optr)PSend15317, (Optr)&t_send_ifFalse_, (Optr)PSend15318, (Optr)PBlock15319, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15322, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15323, (Optr)&t_send1, (Optr)PSend15324, (Optr)&t_send_ifFalse_, (Optr)PSend15325, (Optr)PBlock15326, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15307 = new_Block_with(PArray15308, empty_Array, PThreadedCode15309, 4, PSend15311, PSend15318, PSend15325, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15329 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15307);
    Array PThreadedCode15306 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15307, (Optr)&t_send1, (Optr)PSend15329, (Optr)&t_method_return);
    Method PMethod15304 = new_Method_with(PArray15305, empty_Array, empty_Array, PThreadedCode15306, 1, PSend15329);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15304, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15331 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15333 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15332 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15333, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15330 = new_Method_with(PArray15331, empty_Array, empty_Array, PThreadedCode15332, 2, PAssign15333, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15330, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15335 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15337 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15336 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15337, (Optr)&t_method_return);
    Method PMethod15334 = new_Method_with(PArray15335, empty_Array, empty_Array, PThreadedCode15336, 1, PSend15337);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15334, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15339 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15338 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15339, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15338, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15341 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15343 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15344 = new_Send((Optr)PSend15343, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15345 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15346 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15347 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15348 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15349 = new_Send((Optr)PSend15348, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15342 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15343, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15345, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15347, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15348, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15349, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15340 = new_Method_with(PArray15341, empty_Array, empty_Array, PThreadedCode15342, 6, PSend15344, PSend15345, PSuper15346, PSend15347, PSend15349, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15340, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15352 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15351 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15352, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15350 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15351, 2, PAssign15352, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15350, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15356 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15355 = new_Block_with(empty_Array, empty_Array, PThreadedCode15356, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15359 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15358 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15359, (Optr)&t_block_return);
    Block PBlock15357 = new_Block_with(empty_Array, empty_Array, PThreadedCode15358, 1, PSend15359);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15360 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15355, (Optr)PBlock15357);
    // hasReturnExpression. 
    Send PSend15363 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15362 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15363, (Optr)&t_block_return);
    Block PBlock15361 = new_Block_with(empty_Array, empty_Array, PThreadedCode15362, 1, PSend15363);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15364 = new_Send((Optr)PSend15360, SMB_or_, 1, (Optr)PBlock15361);
    Array PThreadedCode15354 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15355, (Optr)&t_push_closure, (Optr)PBlock15357, (Optr)&t_send2, (Optr)PSend15360, (Optr)&t_push_closure, (Optr)PBlock15361, (Optr)&t_send1, (Optr)PSend15364, (Optr)&t_method_return);
    Method PMethod15353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15354, 1, PSend15364);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15353, Smalltalk_AST_BinaryExpression_Class);
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