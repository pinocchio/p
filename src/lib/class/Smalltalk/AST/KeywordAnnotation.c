#include <lib/class/Smalltalk/AST/KeywordAnnotation.h>


Optr layout_Smalltalk_AST_KeywordAnnotation_Class_class;
Optr slot_Smalltalk_AST_KeywordAnnotation_arguments;
Optr layout_Smalltalk_AST_KeywordAnnotation;


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15827 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15829 = new_Assign((Optr)slot_Smalltalk_AST_KeywordAnnotation_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15828 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15829, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15826 = new_Method_with(PArray15827, empty_Array, empty_Array, PThreadedCode15828, 2, PAssign15829, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15826, Smalltalk_AST_KeywordAnnotation_Class);
    store_method(Smalltalk_AST_KeywordAnnotation_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15831 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15834 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15836 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15840 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15839 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15840, (Optr)&t_block_return);
    Block PBlock15838 = new_Block_with(empty_Array, empty_Array, PThreadedCode15839, 1, PSend15840);
    // ifFalse:. 
    Send PSend15837 = new_Send((Optr)PSuper15836, SMB_ifFalse_, 1, (Optr)PBlock15838);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15841 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15842 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15843 = new_Send((Optr)PSend15841, SMB__equals_, 1, (Optr)PSend15842);
    // escape:. 
    Send PSend15847 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15846 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15847, (Optr)&t_block_return);
    Block PBlock15845 = new_Block_with(empty_Array, empty_Array, PThreadedCode15846, 1, PSend15847);
    // ifFalse:. 
    Send PSend15844 = new_Send((Optr)PSend15843, SMB_ifFalse_, 1, (Optr)PBlock15845);
    Array PThreadedCode15835 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15836, (Optr)&t_send_ifFalse_, (Optr)PSend15837, (Optr)PBlock15838, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15841, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15842, (Optr)&t_send1, (Optr)PSend15843, (Optr)&t_send_ifFalse_, (Optr)PSend15844, (Optr)PBlock15845, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15833 = new_Block_with(PArray15834, empty_Array, PThreadedCode15835, 3, PSend15837, PSend15844, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15848 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15833);
    Array PThreadedCode15832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15833, (Optr)&t_send1, (Optr)PSend15848, (Optr)&t_method_return);
    Method PMethod15830 = new_Method_with(PArray15831, empty_Array, empty_Array, PThreadedCode15832, 1, PSend15848);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15830, Smalltalk_AST_KeywordAnnotation_Class);
    store_method(Smalltalk_AST_KeywordAnnotation_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15850 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitKeywordAnnotation_ = new_Symbol(L"visitKeywordAnnotation:");
    // visitKeywordAnnotation:. 
    Send PSend15852 = new_Send((Optr)VAR_visitor_0_0, SMB_visitKeywordAnnotation_, 1, (Optr)self);
    Array PThreadedCode15851 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15852, (Optr)&t_method_return);
    Method PMethod15849 = new_Method_with(PArray15850, empty_Array, empty_Array, PThreadedCode15851, 1, PSend15852);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15849, Smalltalk_AST_KeywordAnnotation_Class);
    store_method(Smalltalk_AST_KeywordAnnotation_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15854 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_KeywordAnnotation_arguments, (Optr)&t_method_return);
    Method PMethod15853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15854, 1, slot_Smalltalk_AST_KeywordAnnotation_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15853, Smalltalk_AST_KeywordAnnotation_Class);
    store_method(Smalltalk_AST_KeywordAnnotation_Class, SMB_arguments, MC_SMB_arguments);
}

void init_Smalltalk_AST_ASTKeywordAnnotation_layout() {
    layout_Smalltalk_AST_KeywordAnnotation_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_KeywordAnnotation_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_KeywordAnnotation_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_KeywordAnnotation_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_KeywordAnnotation_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_KeywordAnnotation_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_KeywordAnnotation = new_Symbol(L"KeywordAnnotation");
    slot_Smalltalk_AST_KeywordAnnotation_arguments = (Optr)new_Slot(1, L"arguments");
    layout_Smalltalk_AST_KeywordAnnotation = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_KeywordAnnotation)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_KeywordAnnotation)->values[1] = slot_Smalltalk_AST_KeywordAnnotation_arguments; // arguments 
    Smalltalk_AST_KeywordAnnotation_Class = (Class)new_Class(Smalltalk_AST_KeywordSelector_Class, layout_Smalltalk_AST_KeywordAnnotation_Class_class);
    Smalltalk_AST_KeywordAnnotation_Class->layout = layout_Smalltalk_AST_KeywordAnnotation;
    Smalltalk_AST_KeywordAnnotation_Class->name = SMB_KeywordAnnotation;
    
}

void init_Smalltalk_AST_ASTKeywordAnnotation_methods() {
    init_SMB_arguments_();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_arguments();
    
}