#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15265 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15267 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15266 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15267, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15264 = new_Method_with(PArray15265, empty_Array, empty_Array, PThreadedCode15266, 2, PAssign15267, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15264, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15269 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15268 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15269, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15268, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15272 = new_Super(SMB_initialize, 0);
    Assign PAssign15273 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15271 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15272, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15273, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15270 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15271, 3, PSuper15272, PAssign15273, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15270, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15275 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15278 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15280 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15284 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15283 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15284, (Optr)&t_block_return);
    Block PBlock15282 = new_Block_with(empty_Array, empty_Array, PThreadedCode15283, 1, PSend15284);
    // ifFalse:. 
    Send PSend15281 = new_Send((Optr)PSuper15280, SMB_ifFalse_, 1, (Optr)PBlock15282);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15285 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15286 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15287 = new_Send((Optr)PSend15285, SMB__equals_, 1, (Optr)PSend15286);
    // escape:. 
    Send PSend15291 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15290 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15291, (Optr)&t_block_return);
    Block PBlock15289 = new_Block_with(empty_Array, empty_Array, PThreadedCode15290, 1, PSend15291);
    // ifFalse:. 
    Send PSend15288 = new_Send((Optr)PSend15287, SMB_ifFalse_, 1, (Optr)PBlock15289);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15292 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15293 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15294 = new_Send((Optr)PSend15292, SMB__equals_, 1, (Optr)PSend15293);
    // escape:. 
    Send PSend15298 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15297 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15298, (Optr)&t_block_return);
    Block PBlock15296 = new_Block_with(empty_Array, empty_Array, PThreadedCode15297, 1, PSend15298);
    // ifFalse:. 
    Send PSend15295 = new_Send((Optr)PSend15294, SMB_ifFalse_, 1, (Optr)PBlock15296);
    Array PThreadedCode15279 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15280, (Optr)&t_send_ifFalse_, (Optr)PSend15281, (Optr)PBlock15282, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15285, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15286, (Optr)&t_send1, (Optr)PSend15287, (Optr)&t_send_ifFalse_, (Optr)PSend15288, (Optr)PBlock15289, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15292, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15293, (Optr)&t_send1, (Optr)PSend15294, (Optr)&t_send_ifFalse_, (Optr)PSend15295, (Optr)PBlock15296, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15277 = new_Block_with(PArray15278, empty_Array, PThreadedCode15279, 4, PSend15281, PSend15288, PSend15295, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15299 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15277);
    Array PThreadedCode15276 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15277, (Optr)&t_send1, (Optr)PSend15299, (Optr)&t_method_return);
    Method PMethod15274 = new_Method_with(PArray15275, empty_Array, empty_Array, PThreadedCode15276, 1, PSend15299);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15274, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15301 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15303 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15302 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15303, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15300 = new_Method_with(PArray15301, empty_Array, empty_Array, PThreadedCode15302, 2, PAssign15303, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15300, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15305 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15307 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15306 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15307, (Optr)&t_method_return);
    Method PMethod15304 = new_Method_with(PArray15305, empty_Array, empty_Array, PThreadedCode15306, 1, PSend15307);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15304, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15309 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15308 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15309, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15308, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15311 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15313 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15314 = new_Send((Optr)PSend15313, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15315 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15316 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15317 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15318 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15319 = new_Send((Optr)PSend15318, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15312 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15313, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15314, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15315, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15317, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15318, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15319, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15310 = new_Method_with(PArray15311, empty_Array, empty_Array, PThreadedCode15312, 6, PSend15314, PSend15315, PSuper15316, PSend15317, PSend15319, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15310, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15322 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15321 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15322, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15321, 2, PAssign15322, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15320, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15326 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15325 = new_Block_with(empty_Array, empty_Array, PThreadedCode15326, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15329 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15328 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15329, (Optr)&t_block_return);
    Block PBlock15327 = new_Block_with(empty_Array, empty_Array, PThreadedCode15328, 1, PSend15329);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15330 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15325, (Optr)PBlock15327);
    // hasReturnExpression. 
    Send PSend15333 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15332 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15333, (Optr)&t_block_return);
    Block PBlock15331 = new_Block_with(empty_Array, empty_Array, PThreadedCode15332, 1, PSend15333);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15334 = new_Send((Optr)PSend15330, SMB_or_, 1, (Optr)PBlock15331);
    Array PThreadedCode15324 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15325, (Optr)&t_push_closure, (Optr)PBlock15327, (Optr)&t_send2, (Optr)PSend15330, (Optr)&t_push_closure, (Optr)PBlock15331, (Optr)&t_send1, (Optr)PSend15334, (Optr)&t_method_return);
    Method PMethod15323 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15324, 1, PSend15334);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15323, Smalltalk_AST_BinaryExpression_Class);
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