#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15352 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15354 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15354, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15351 = new_Method_with(PArray15352, empty_Array, empty_Array, PThreadedCode15353, 2, PAssign15354, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15351, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15356 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15355 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15356, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15355, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15359 = new_Super(SMB_initialize, 0);
    Assign PAssign15360 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15358 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15359, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15360, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15357 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15358, 3, PSuper15359, PAssign15360, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15357, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15362 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15365 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15367 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15371 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15370 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15371, (Optr)&t_block_return);
    Block PBlock15369 = new_Block_with(empty_Array, empty_Array, PThreadedCode15370, 1, PSend15371);
    // ifFalse:. 
    Send PSend15368 = new_Send((Optr)PSuper15367, SMB_ifFalse_, 1, (Optr)PBlock15369);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15372 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15373 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15374 = new_Send((Optr)PSend15372, SMB__equals_, 1, (Optr)PSend15373);
    // escape:. 
    Send PSend15378 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15377 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15378, (Optr)&t_block_return);
    Block PBlock15376 = new_Block_with(empty_Array, empty_Array, PThreadedCode15377, 1, PSend15378);
    // ifFalse:. 
    Send PSend15375 = new_Send((Optr)PSend15374, SMB_ifFalse_, 1, (Optr)PBlock15376);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15379 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15380 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15381 = new_Send((Optr)PSend15379, SMB__equals_, 1, (Optr)PSend15380);
    // escape:. 
    Send PSend15385 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15384 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15385, (Optr)&t_block_return);
    Block PBlock15383 = new_Block_with(empty_Array, empty_Array, PThreadedCode15384, 1, PSend15385);
    // ifFalse:. 
    Send PSend15382 = new_Send((Optr)PSend15381, SMB_ifFalse_, 1, (Optr)PBlock15383);
    Array PThreadedCode15366 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15367, (Optr)&t_send_ifFalse_, (Optr)PSend15368, (Optr)PBlock15369, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15372, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15373, (Optr)&t_send1, (Optr)PSend15374, (Optr)&t_send_ifFalse_, (Optr)PSend15375, (Optr)PBlock15376, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15379, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15380, (Optr)&t_send1, (Optr)PSend15381, (Optr)&t_send_ifFalse_, (Optr)PSend15382, (Optr)PBlock15383, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15364 = new_Block_with(PArray15365, empty_Array, PThreadedCode15366, 4, PSend15368, PSend15375, PSend15382, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15386 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15364);
    Array PThreadedCode15363 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15364, (Optr)&t_send1, (Optr)PSend15386, (Optr)&t_method_return);
    Method PMethod15361 = new_Method_with(PArray15362, empty_Array, empty_Array, PThreadedCode15363, 1, PSend15386);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15361, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15388 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15390 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15389 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15390, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15387 = new_Method_with(PArray15388, empty_Array, empty_Array, PThreadedCode15389, 2, PAssign15390, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15387, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15392 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15394 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15393 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15394, (Optr)&t_method_return);
    Method PMethod15391 = new_Method_with(PArray15392, empty_Array, empty_Array, PThreadedCode15393, 1, PSend15394);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15391, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15396 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15396, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15395, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15398 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15400 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15401 = new_Send((Optr)PSend15400, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15402 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15403 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15404 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15405 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15406 = new_Send((Optr)PSend15405, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15399 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15400, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15401, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15402, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15403, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15404, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15405, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15406, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15397 = new_Method_with(PArray15398, empty_Array, empty_Array, PThreadedCode15399, 6, PSend15401, PSend15402, PSuper15403, PSend15404, PSend15406, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15397, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15409 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15408 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15409, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15407 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15408, 2, PAssign15409, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15407, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15413 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15412 = new_Block_with(empty_Array, empty_Array, PThreadedCode15413, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15416 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15415 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15416, (Optr)&t_block_return);
    Block PBlock15414 = new_Block_with(empty_Array, empty_Array, PThreadedCode15415, 1, PSend15416);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15417 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15412, (Optr)PBlock15414);
    // hasReturnExpression. 
    Send PSend15420 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15419 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15420, (Optr)&t_block_return);
    Block PBlock15418 = new_Block_with(empty_Array, empty_Array, PThreadedCode15419, 1, PSend15420);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15421 = new_Send((Optr)PSend15417, SMB_or_, 1, (Optr)PBlock15418);
    Array PThreadedCode15411 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15412, (Optr)&t_push_closure, (Optr)PBlock15414, (Optr)&t_send2, (Optr)PSend15417, (Optr)&t_push_closure, (Optr)PBlock15418, (Optr)&t_send1, (Optr)PSend15421, (Optr)&t_method_return);
    Method PMethod15410 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15411, 1, PSend15421);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15410, Smalltalk_AST_BinaryExpression_Class);
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