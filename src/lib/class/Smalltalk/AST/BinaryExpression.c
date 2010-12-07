#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15657 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15659 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15658 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15659, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15656 = new_Method_with(PArray15657, empty_Array, empty_Array, PThreadedCode15658, 2, PAssign15659, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15656, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15661 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15660 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15661, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15660, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15664 = new_Super(SMB_initialize, 0);
    Assign PAssign15665 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15663 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15664, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15665, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15663, 3, PSuper15664, PAssign15665, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15662, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15667 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15670 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15672 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15676 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15675 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15676, (Optr)&t_block_return);
    Block PBlock15674 = new_Block_with(empty_Array, empty_Array, PThreadedCode15675, 1, PSend15676);
    // ifFalse:. 
    Send PSend15673 = new_Send((Optr)PSuper15672, SMB_ifFalse_, 1, (Optr)PBlock15674);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15677 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15678 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15679 = new_Send((Optr)PSend15677, SMB__equals_, 1, (Optr)PSend15678);
    // escape:. 
    Send PSend15683 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15682 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15683, (Optr)&t_block_return);
    Block PBlock15681 = new_Block_with(empty_Array, empty_Array, PThreadedCode15682, 1, PSend15683);
    // ifFalse:. 
    Send PSend15680 = new_Send((Optr)PSend15679, SMB_ifFalse_, 1, (Optr)PBlock15681);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15684 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15685 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15686 = new_Send((Optr)PSend15684, SMB__equals_, 1, (Optr)PSend15685);
    // escape:. 
    Send PSend15690 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15689 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15690, (Optr)&t_block_return);
    Block PBlock15688 = new_Block_with(empty_Array, empty_Array, PThreadedCode15689, 1, PSend15690);
    // ifFalse:. 
    Send PSend15687 = new_Send((Optr)PSend15686, SMB_ifFalse_, 1, (Optr)PBlock15688);
    Array PThreadedCode15671 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15672, (Optr)&t_send_ifFalse_, (Optr)PSend15673, (Optr)PBlock15674, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15677, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15678, (Optr)&t_send1, (Optr)PSend15679, (Optr)&t_send_ifFalse_, (Optr)PSend15680, (Optr)PBlock15681, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15684, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15685, (Optr)&t_send1, (Optr)PSend15686, (Optr)&t_send_ifFalse_, (Optr)PSend15687, (Optr)PBlock15688, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15669 = new_Block_with(PArray15670, empty_Array, PThreadedCode15671, 4, PSend15673, PSend15680, PSend15687, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15691 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15669);
    Array PThreadedCode15668 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15669, (Optr)&t_send1, (Optr)PSend15691, (Optr)&t_method_return);
    Method PMethod15666 = new_Method_with(PArray15667, empty_Array, empty_Array, PThreadedCode15668, 1, PSend15691);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15666, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15693 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15695 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15694 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15695, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15692 = new_Method_with(PArray15693, empty_Array, empty_Array, PThreadedCode15694, 2, PAssign15695, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15692, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15697 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15699 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15698 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15699, (Optr)&t_method_return);
    Method PMethod15696 = new_Method_with(PArray15697, empty_Array, empty_Array, PThreadedCode15698, 1, PSend15699);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15696, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15701 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15700 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15701, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15700, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15703 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15705 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15706 = new_Send((Optr)PSend15705, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15707 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15708 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15709 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15710 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15711 = new_Send((Optr)PSend15710, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15704 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15705, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15706, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15707, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15709, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15710, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15711, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15702 = new_Method_with(PArray15703, empty_Array, empty_Array, PThreadedCode15704, 6, PSend15706, PSend15707, PSuper15708, PSend15709, PSend15711, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15702, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15714 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15713 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15714, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15713, 2, PAssign15714, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15712, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15718 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15717 = new_Block_with(empty_Array, empty_Array, PThreadedCode15718, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15721 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15720 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15721, (Optr)&t_block_return);
    Block PBlock15719 = new_Block_with(empty_Array, empty_Array, PThreadedCode15720, 1, PSend15721);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15722 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15717, (Optr)PBlock15719);
    // hasReturnExpression. 
    Send PSend15725 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15724 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15725, (Optr)&t_block_return);
    Block PBlock15723 = new_Block_with(empty_Array, empty_Array, PThreadedCode15724, 1, PSend15725);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15726 = new_Send((Optr)PSend15722, SMB_or_, 1, (Optr)PBlock15723);
    Array PThreadedCode15716 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15717, (Optr)&t_push_closure, (Optr)PBlock15719, (Optr)&t_send2, (Optr)PSend15722, (Optr)&t_push_closure, (Optr)PBlock15723, (Optr)&t_send1, (Optr)PSend15726, (Optr)&t_method_return);
    Method PMethod15715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15716, 1, PSend15726);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15715, Smalltalk_AST_BinaryExpression_Class);
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