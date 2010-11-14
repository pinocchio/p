#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15625 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15627 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15626 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15627, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15624 = new_Method_with(PArray15625, empty_Array, empty_Array, PThreadedCode15626, 2, PAssign15627, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15624, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15629 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15629, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15628, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15632 = new_Super(SMB_initialize, 0);
    Assign PAssign15633 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15631 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15632, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15633, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15631, 3, PSuper15632, PAssign15633, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15630, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15635 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15638 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15640 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15644 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15643 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15644, (Optr)&t_block_return);
    Block PBlock15642 = new_Block_with(empty_Array, empty_Array, PThreadedCode15643, 1, PSend15644);
    // ifFalse:. 
    Send PSend15641 = new_Send((Optr)PSuper15640, SMB_ifFalse_, 1, (Optr)PBlock15642);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15645 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15646 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15647 = new_Send((Optr)PSend15645, SMB__equals_, 1, (Optr)PSend15646);
    // escape:. 
    Send PSend15651 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15650 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15651, (Optr)&t_block_return);
    Block PBlock15649 = new_Block_with(empty_Array, empty_Array, PThreadedCode15650, 1, PSend15651);
    // ifFalse:. 
    Send PSend15648 = new_Send((Optr)PSend15647, SMB_ifFalse_, 1, (Optr)PBlock15649);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15652 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15653 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15654 = new_Send((Optr)PSend15652, SMB__equals_, 1, (Optr)PSend15653);
    // escape:. 
    Send PSend15658 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15657 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15658, (Optr)&t_block_return);
    Block PBlock15656 = new_Block_with(empty_Array, empty_Array, PThreadedCode15657, 1, PSend15658);
    // ifFalse:. 
    Send PSend15655 = new_Send((Optr)PSend15654, SMB_ifFalse_, 1, (Optr)PBlock15656);
    Array PThreadedCode15639 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15640, (Optr)&t_send_ifFalse_, (Optr)PSend15641, (Optr)PBlock15642, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15645, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15646, (Optr)&t_send1, (Optr)PSend15647, (Optr)&t_send_ifFalse_, (Optr)PSend15648, (Optr)PBlock15649, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15652, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15653, (Optr)&t_send1, (Optr)PSend15654, (Optr)&t_send_ifFalse_, (Optr)PSend15655, (Optr)PBlock15656, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15637 = new_Block_with(PArray15638, empty_Array, PThreadedCode15639, 4, PSend15641, PSend15648, PSend15655, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15659 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15637);
    Array PThreadedCode15636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15637, (Optr)&t_send1, (Optr)PSend15659, (Optr)&t_method_return);
    Method PMethod15634 = new_Method_with(PArray15635, empty_Array, empty_Array, PThreadedCode15636, 1, PSend15659);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15634, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15661 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15663 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15662 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15663, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15660 = new_Method_with(PArray15661, empty_Array, empty_Array, PThreadedCode15662, 2, PAssign15663, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15660, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15665 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15667 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15666 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15667, (Optr)&t_method_return);
    Method PMethod15664 = new_Method_with(PArray15665, empty_Array, empty_Array, PThreadedCode15666, 1, PSend15667);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15664, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15669 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15668 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15669, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15668, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15671 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15673 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15674 = new_Send((Optr)PSend15673, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15675 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15676 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15677 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15678 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15679 = new_Send((Optr)PSend15678, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15672 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15673, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15675, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15676, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15677, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15678, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15679, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15670 = new_Method_with(PArray15671, empty_Array, empty_Array, PThreadedCode15672, 6, PSend15674, PSend15675, PSuper15676, PSend15677, PSend15679, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15670, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15682 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15681 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15682, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15680 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15681, 2, PAssign15682, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15680, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15686 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15685 = new_Block_with(empty_Array, empty_Array, PThreadedCode15686, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15689 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15688 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15689, (Optr)&t_block_return);
    Block PBlock15687 = new_Block_with(empty_Array, empty_Array, PThreadedCode15688, 1, PSend15689);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15690 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15685, (Optr)PBlock15687);
    // hasReturnExpression. 
    Send PSend15693 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15692 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15693, (Optr)&t_block_return);
    Block PBlock15691 = new_Block_with(empty_Array, empty_Array, PThreadedCode15692, 1, PSend15693);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15694 = new_Send((Optr)PSend15690, SMB_or_, 1, (Optr)PBlock15691);
    Array PThreadedCode15684 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15685, (Optr)&t_push_closure, (Optr)PBlock15687, (Optr)&t_send2, (Optr)PSend15690, (Optr)&t_push_closure, (Optr)PBlock15691, (Optr)&t_send1, (Optr)PSend15694, (Optr)&t_method_return);
    Method PMethod15683 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15684, 1, PSend15694);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15683, Smalltalk_AST_BinaryExpression_Class);
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