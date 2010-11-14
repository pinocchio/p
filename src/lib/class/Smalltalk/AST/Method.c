#include <lib/class/Smalltalk/AST/Method.h>


Optr layout_Smalltalk_AST_Method_Class_class;
Optr slot_Smalltalk_AST_Method_message;
Optr slot_Smalltalk_AST_Method_annotations;
Optr slot_Smalltalk_AST_Method_temporaries;
Optr slot_Smalltalk_AST_Method_statements;
Optr slot_Smalltalk_AST_Method_sourceObject;
Optr layout_Smalltalk_AST_Method;


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15727 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15729 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15728 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15729, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15726 = new_Method_with(PArray15727, empty_Array, empty_Array, PThreadedCode15728, 2, PAssign15729, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15726, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15731 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15733 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15735 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15737 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15738 = new_Send((Optr)PSend15737, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15736 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15737, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15738, (Optr)&t_method_return);
    Block PBlock15734 = new_Block_with(PArray15735, empty_Array, PThreadedCode15736, 1, PSend15738);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15739 = new_Send((Optr)PSend15733, SMB_anySatisfy_, 1, (Optr)PBlock15734);
    Array PThreadedCode15732 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15733, (Optr)&t_push_closure, (Optr)PBlock15734, (Optr)&t_send1, (Optr)PSend15739, (Optr)&t_method_return);
    Method PMethod15730 = new_Method_with(PArray15731, empty_Array, empty_Array, PThreadedCode15732, 1, PSend15739);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15730, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15741 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15744 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15746 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15750 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15749 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15750, (Optr)&t_block_return);
    Block PBlock15748 = new_Block_with(empty_Array, empty_Array, PThreadedCode15749, 1, PSend15750);
    // ifFalse:. 
    Send PSend15747 = new_Send((Optr)PSuper15746, SMB_ifFalse_, 1, (Optr)PBlock15748);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15751 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15752 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15753 = new_Send((Optr)PSend15751, SMB__equals_, 1, (Optr)PSend15752);
    // escape:. 
    Send PSend15757 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15756 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15757, (Optr)&t_block_return);
    Block PBlock15755 = new_Block_with(empty_Array, empty_Array, PThreadedCode15756, 1, PSend15757);
    // ifFalse:. 
    Send PSend15754 = new_Send((Optr)PSend15753, SMB_ifFalse_, 1, (Optr)PBlock15755);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15758 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15759 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15760 = new_Send((Optr)PSend15758, SMB__equals_, 1, (Optr)PSend15759);
    // escape:. 
    Send PSend15764 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15763 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15764, (Optr)&t_block_return);
    Block PBlock15762 = new_Block_with(empty_Array, empty_Array, PThreadedCode15763, 1, PSend15764);
    // ifFalse:. 
    Send PSend15761 = new_Send((Optr)PSend15760, SMB_ifFalse_, 1, (Optr)PBlock15762);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15765 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15766 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15767 = new_Send((Optr)PSend15765, SMB__equals_, 1, (Optr)PSend15766);
    // escape:. 
    Send PSend15771 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15770 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15771, (Optr)&t_block_return);
    Block PBlock15769 = new_Block_with(empty_Array, empty_Array, PThreadedCode15770, 1, PSend15771);
    // ifFalse:. 
    Send PSend15768 = new_Send((Optr)PSend15767, SMB_ifFalse_, 1, (Optr)PBlock15769);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15772 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15773 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15774 = new_Send((Optr)PSend15772, SMB__equals_, 1, (Optr)PSend15773);
    // escape:. 
    Send PSend15778 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15777 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15778, (Optr)&t_block_return);
    Block PBlock15776 = new_Block_with(empty_Array, empty_Array, PThreadedCode15777, 1, PSend15778);
    // ifFalse:. 
    Send PSend15775 = new_Send((Optr)PSend15774, SMB_ifFalse_, 1, (Optr)PBlock15776);
    Array PThreadedCode15745 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15746, (Optr)&t_send_ifFalse_, (Optr)PSend15747, (Optr)PBlock15748, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15751, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15752, (Optr)&t_send1, (Optr)PSend15753, (Optr)&t_send_ifFalse_, (Optr)PSend15754, (Optr)PBlock15755, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15758, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15759, (Optr)&t_send1, (Optr)PSend15760, (Optr)&t_send_ifFalse_, (Optr)PSend15761, (Optr)PBlock15762, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15765, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15766, (Optr)&t_send1, (Optr)PSend15767, (Optr)&t_send_ifFalse_, (Optr)PSend15768, (Optr)PBlock15769, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15772, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15773, (Optr)&t_send1, (Optr)PSend15774, (Optr)&t_send_ifFalse_, (Optr)PSend15775, (Optr)PBlock15776, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15743 = new_Block_with(PArray15744, empty_Array, PThreadedCode15745, 6, PSend15747, PSend15754, PSend15761, PSend15768, PSend15775, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15779 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15743);
    Array PThreadedCode15742 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15743, (Optr)&t_send1, (Optr)PSend15779, (Optr)&t_method_return);
    Method PMethod15740 = new_Method_with(PArray15741, empty_Array, empty_Array, PThreadedCode15742, 1, PSend15779);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15740, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15781 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15780 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15781, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15780, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15783 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15785 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15784 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15785, (Optr)&t_method_return);
    Method PMethod15782 = new_Method_with(PArray15783, empty_Array, empty_Array, PThreadedCode15784, 1, PSend15785);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15782, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15787 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15787, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15786, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15789 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15791 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend15792 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15793 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15794 = new_Send((Optr)PSend15793, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15795 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15790 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15791, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15792, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15793, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15795, (Optr)&t_method_return);
    Method PMethod15788 = new_Method_with(PArray15789, empty_Array, empty_Array, PThreadedCode15790, 4, PSuper15791, PSend15792, PSend15794, PSend15795);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15788, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15797 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15796 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15797, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15796, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15800 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15801 = new_Send((Optr)PSend15800, SMB_hasReturnExpression, 0);
    Array PThreadedCode15799 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15800, (Optr)&t_send0, (Optr)PSend15801, (Optr)&t_method_return);
    Method PMethod15798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15799, 1, PSend15801);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15798, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15803 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15805 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15804 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15805, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15802 = new_Method_with(PArray15803, empty_Array, empty_Array, PThreadedCode15804, 2, PAssign15805, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15802, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15807 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15806 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15807, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15806, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15809 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15811 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15810 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15811, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15808 = new_Method_with(PArray15809, empty_Array, empty_Array, PThreadedCode15810, 2, PAssign15811, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15808, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15813 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15812 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15813, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15812, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15815 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15817 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15817, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15814 = new_Method_with(PArray15815, empty_Array, empty_Array, PThreadedCode15816, 2, PAssign15817, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15814, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15819 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15821 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15820 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15821, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15818 = new_Method_with(PArray15819, empty_Array, empty_Array, PThreadedCode15820, 2, PAssign15821, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15818, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject_, MC_SMB_sourceObject_);
}

void init_Smalltalk_AST_ASTMethod_layout() {
    layout_Smalltalk_AST_Method_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Method = new_Symbol(L"Method");
    slot_Smalltalk_AST_Method_message = (Optr)new_Slot(0, L"message");
    slot_Smalltalk_AST_Method_annotations = (Optr)new_Slot(1, L"annotations");
    slot_Smalltalk_AST_Method_temporaries = (Optr)new_Slot(2, L"temporaries");
    slot_Smalltalk_AST_Method_statements = (Optr)new_Slot(3, L"statements");
    slot_Smalltalk_AST_Method_sourceObject = (Optr)new_Slot(4, L"sourceObject");
    layout_Smalltalk_AST_Method = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Method)->values[0] = slot_Smalltalk_AST_Method_message; // message 
    ((Array)layout_Smalltalk_AST_Method)->values[1] = slot_Smalltalk_AST_Method_annotations; // annotations 
    ((Array)layout_Smalltalk_AST_Method)->values[2] = slot_Smalltalk_AST_Method_temporaries; // temporaries 
    ((Array)layout_Smalltalk_AST_Method)->values[3] = slot_Smalltalk_AST_Method_statements; // statements 
    ((Array)layout_Smalltalk_AST_Method)->values[4] = slot_Smalltalk_AST_Method_sourceObject; // sourceObject 
    Smalltalk_AST_Method_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Method_Class_class);
    Smalltalk_AST_Method_Class->layout = layout_Smalltalk_AST_Method;
    Smalltalk_AST_Method_Class->name = SMB_Method;
    
}

void init_Smalltalk_AST_ASTMethod_methods() {
    init_SMB_message_();
    init_SMB_annotatedWith_();
    init_SMB__equals_();
    init_SMB_statements();
    init_SMB_accept_();
    init_SMB_annotations();
    init_SMB_printOn_();
    init_SMB_message();
    init_SMB_hasReturnExpression();
    init_SMB_statements_();
    init_SMB_temporaries();
    init_SMB_temporaries_();
    init_SMB_sourceObject();
    init_SMB_annotations_();
    init_SMB_sourceObject_();
    
}