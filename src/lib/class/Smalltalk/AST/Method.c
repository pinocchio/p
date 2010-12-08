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
    Array PArray15786 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15788 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15788, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15785 = new_Method_with(PArray15786, empty_Array, empty_Array, PThreadedCode15787, 2, PAssign15788, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15785, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15790 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15792 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15794 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15796 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15797 = new_Send((Optr)PSend15796, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15795 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15796, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15797, (Optr)&t_method_return);
    Block PBlock15793 = new_Block_with(PArray15794, empty_Array, PThreadedCode15795, 1, PSend15797);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15798 = new_Send((Optr)PSend15792, SMB_anySatisfy_, 1, (Optr)PBlock15793);
    Array PThreadedCode15791 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15792, (Optr)&t_push_closure, (Optr)PBlock15793, (Optr)&t_send1, (Optr)PSend15798, (Optr)&t_method_return);
    Method PMethod15789 = new_Method_with(PArray15790, empty_Array, empty_Array, PThreadedCode15791, 1, PSend15798);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15789, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15800 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15803 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15805 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15809 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15808 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15809, (Optr)&t_block_return);
    Block PBlock15807 = new_Block_with(empty_Array, empty_Array, PThreadedCode15808, 1, PSend15809);
    // ifFalse:. 
    Send PSend15806 = new_Send((Optr)PSuper15805, SMB_ifFalse_, 1, (Optr)PBlock15807);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15810 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15811 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15812 = new_Send((Optr)PSend15810, SMB__equals_, 1, (Optr)PSend15811);
    // escape:. 
    Send PSend15816 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15815 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15816, (Optr)&t_block_return);
    Block PBlock15814 = new_Block_with(empty_Array, empty_Array, PThreadedCode15815, 1, PSend15816);
    // ifFalse:. 
    Send PSend15813 = new_Send((Optr)PSend15812, SMB_ifFalse_, 1, (Optr)PBlock15814);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15817 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15818 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15819 = new_Send((Optr)PSend15817, SMB__equals_, 1, (Optr)PSend15818);
    // escape:. 
    Send PSend15823 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15822 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15823, (Optr)&t_block_return);
    Block PBlock15821 = new_Block_with(empty_Array, empty_Array, PThreadedCode15822, 1, PSend15823);
    // ifFalse:. 
    Send PSend15820 = new_Send((Optr)PSend15819, SMB_ifFalse_, 1, (Optr)PBlock15821);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15824 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15825 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15826 = new_Send((Optr)PSend15824, SMB__equals_, 1, (Optr)PSend15825);
    // escape:. 
    Send PSend15830 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15829 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15830, (Optr)&t_block_return);
    Block PBlock15828 = new_Block_with(empty_Array, empty_Array, PThreadedCode15829, 1, PSend15830);
    // ifFalse:. 
    Send PSend15827 = new_Send((Optr)PSend15826, SMB_ifFalse_, 1, (Optr)PBlock15828);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15831 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15832 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15833 = new_Send((Optr)PSend15831, SMB__equals_, 1, (Optr)PSend15832);
    // escape:. 
    Send PSend15837 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15836 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15837, (Optr)&t_block_return);
    Block PBlock15835 = new_Block_with(empty_Array, empty_Array, PThreadedCode15836, 1, PSend15837);
    // ifFalse:. 
    Send PSend15834 = new_Send((Optr)PSend15833, SMB_ifFalse_, 1, (Optr)PBlock15835);
    Array PThreadedCode15804 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15805, (Optr)&t_send_ifFalse_, (Optr)PSend15806, (Optr)PBlock15807, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15810, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15811, (Optr)&t_send1, (Optr)PSend15812, (Optr)&t_send_ifFalse_, (Optr)PSend15813, (Optr)PBlock15814, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15817, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15818, (Optr)&t_send1, (Optr)PSend15819, (Optr)&t_send_ifFalse_, (Optr)PSend15820, (Optr)PBlock15821, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15824, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15825, (Optr)&t_send1, (Optr)PSend15826, (Optr)&t_send_ifFalse_, (Optr)PSend15827, (Optr)PBlock15828, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15831, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15832, (Optr)&t_send1, (Optr)PSend15833, (Optr)&t_send_ifFalse_, (Optr)PSend15834, (Optr)PBlock15835, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15802 = new_Block_with(PArray15803, empty_Array, PThreadedCode15804, 6, PSend15806, PSend15813, PSend15820, PSend15827, PSend15834, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15838 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15802);
    Array PThreadedCode15801 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15802, (Optr)&t_send1, (Optr)PSend15838, (Optr)&t_method_return);
    Method PMethod15799 = new_Method_with(PArray15800, empty_Array, empty_Array, PThreadedCode15801, 1, PSend15838);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15799, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15840 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15840, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15839, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15842 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15844 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15843 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15844, (Optr)&t_method_return);
    Method PMethod15841 = new_Method_with(PArray15842, empty_Array, empty_Array, PThreadedCode15843, 1, PSend15844);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15841, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15846 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15845 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15846, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15845, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15848 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15850 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5738 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5738_Const = new_Constant((Optr)char_5738);
    // <<. 
    Send PSend15851 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5738_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15852 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15853 = new_Send((Optr)PSend15852, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend15854 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode15849 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15850, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5738, (Optr)&t_send1, (Optr)PSend15851, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15852, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15853, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend15854, (Optr)&t_method_return);
    Method PMethod15847 = new_Method_with(PArray15848, empty_Array, empty_Array, PThreadedCode15849, 4, PSuper15850, PSend15851, PSend15853, PSend15854);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15847, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15856 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15856, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15855, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15859 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15860 = new_Send((Optr)PSend15859, SMB_hasReturnExpression, 0);
    Array PThreadedCode15858 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15859, (Optr)&t_send0, (Optr)PSend15860, (Optr)&t_method_return);
    Method PMethod15857 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15858, 1, PSend15860);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15857, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15862 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15864 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15863 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15864, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15861 = new_Method_with(PArray15862, empty_Array, empty_Array, PThreadedCode15863, 2, PAssign15864, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15861, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15866 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15865 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15866, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15865, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15868 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15870 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15869 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15870, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15867 = new_Method_with(PArray15868, empty_Array, empty_Array, PThreadedCode15869, 2, PAssign15870, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15867, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15872 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15872, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15871, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15874 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15876 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15875 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15876, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15873 = new_Method_with(PArray15874, empty_Array, empty_Array, PThreadedCode15875, 2, PAssign15876, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15873, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15878 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15880 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15879 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15880, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15877 = new_Method_with(PArray15878, empty_Array, empty_Array, PThreadedCode15879, 2, PAssign15880, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15877, Smalltalk_AST_Method_Class);
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