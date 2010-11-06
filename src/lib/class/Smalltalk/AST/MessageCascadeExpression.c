#include <lib/class/Smalltalk/AST/MessageCascadeExpression.h>


Optr layout_Smalltalk_AST_MessageCascadeExpression_Class_class;
Optr slot_Smalltalk_AST_MessageCascadeExpression_receiver;
Optr slot_Smalltalk_AST_MessageCascadeExpression_cascades;
Optr layout_Smalltalk_AST_MessageCascadeExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15898 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15900 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15900, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15897 = new_Method_with(PArray15898, empty_Array, empty_Array, PThreadedCode15899, 2, PAssign15900, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15897, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15902 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)&t_method_return);
    Method PMethod15901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15902, 1, slot_Smalltalk_AST_MessageCascadeExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15901, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15904 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15907 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15909 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15913 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15912 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15913, (Optr)&t_block_return);
    Block PBlock15911 = new_Block_with(empty_Array, empty_Array, PThreadedCode15912, 1, PSend15913);
    // ifFalse:. 
    Send PSend15910 = new_Send((Optr)PSuper15909, SMB_ifFalse_, 1, (Optr)PBlock15911);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend15914 = new_Send((Optr)self, SMB_cascades, 0);
    // cascades. 
    Send PSend15915 = new_Send((Optr)VAR_other_0_0, SMB_cascades, 0);
    // =. 
    Send PSend15916 = new_Send((Optr)PSend15914, SMB__equals_, 1, (Optr)PSend15915);
    // escape:. 
    Send PSend15920 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15919 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15920, (Optr)&t_block_return);
    Block PBlock15918 = new_Block_with(empty_Array, empty_Array, PThreadedCode15919, 1, PSend15920);
    // ifFalse:. 
    Send PSend15917 = new_Send((Optr)PSend15916, SMB_ifFalse_, 1, (Optr)PBlock15918);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15921 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15922 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15923 = new_Send((Optr)PSend15921, SMB__equals_, 1, (Optr)PSend15922);
    // escape:. 
    Send PSend15927 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15926 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15927, (Optr)&t_block_return);
    Block PBlock15925 = new_Block_with(empty_Array, empty_Array, PThreadedCode15926, 1, PSend15927);
    // ifFalse:. 
    Send PSend15924 = new_Send((Optr)PSend15923, SMB_ifFalse_, 1, (Optr)PBlock15925);
    Array PThreadedCode15908 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15909, (Optr)&t_send_ifFalse_, (Optr)PSend15910, (Optr)PBlock15911, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15914, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15915, (Optr)&t_send1, (Optr)PSend15916, (Optr)&t_send_ifFalse_, (Optr)PSend15917, (Optr)PBlock15918, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15921, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15922, (Optr)&t_send1, (Optr)PSend15923, (Optr)&t_send_ifFalse_, (Optr)PSend15924, (Optr)PBlock15925, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15906 = new_Block_with(PArray15907, empty_Array, PThreadedCode15908, 4, PSend15910, PSend15917, PSend15924, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15928 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15906);
    Array PThreadedCode15905 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15906, (Optr)&t_send1, (Optr)PSend15928, (Optr)&t_method_return);
    Method PMethod15903 = new_Method_with(PArray15904, empty_Array, empty_Array, PThreadedCode15905, 1, PSend15928);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15903, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_cascades() {
    Symbol SMB_cascades = new_Symbol(L"cascades");
    Array PThreadedCode15930 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_method_return);
    Method PMethod15929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15930, 1, slot_Smalltalk_AST_MessageCascadeExpression_cascades);
    
    MethodClosure MC_SMB_cascades = new_MethodClosure((Method)PMethod15929, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades, MC_SMB_cascades);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15932 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    // visitMessageCascadeExpression:. 
    Send PSend15934 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageCascadeExpression_, 1, (Optr)self);
    Array PThreadedCode15933 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15934, (Optr)&t_method_return);
    Method PMethod15931 = new_Method_with(PArray15932, empty_Array, empty_Array, PThreadedCode15933, 1, PSend15934);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15931, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_cascades_() {
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15936 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15938 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15937 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15938, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15935 = new_Method_with(PArray15936, empty_Array, empty_Array, PThreadedCode15937, 2, PAssign15938, self);
    
    MethodClosure MC_SMB_cascades_ = new_MethodClosure((Method)PMethod15935, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades_, MC_SMB_cascades_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15941 = new_Send((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15940 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15941, (Optr)&t_method_return);
    Method PMethod15939 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15940, 1, PSend15941);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15939, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_cascades = new_Symbol(L"cascades");
    Symbol  SMB_receivers = new_Symbol(L"receivers");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_cascades_Const = new_Constant((Optr)SMB_cascades);
    Constant SMB_receivers_Const = new_Constant((Optr)SMB_receivers);
    // with:with:. 
    Send PSend15944 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_cascades_Const, (Optr)SMB_receivers_Const);
    Array PThreadedCode15943 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_cascades, (Optr)&t_push1, (Optr)SMB_receivers, (Optr)&t_send2, (Optr)PSend15944, (Optr)&t_method_return);
    Method PMethod15942 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15943, 1, PSend15944);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15942, HEADER(Smalltalk_AST_MessageCascadeExpression_Class));
    store_method(HEADER(Smalltalk_AST_MessageCascadeExpression_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTMessageCascadeExpression_layout() {
    layout_Smalltalk_AST_MessageCascadeExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MessageCascadeExpression = new_Symbol(L"MessageCascadeExpression");
    slot_Smalltalk_AST_MessageCascadeExpression_receiver = (Optr)new_Slot(0, L"receiver");
    slot_Smalltalk_AST_MessageCascadeExpression_cascades = (Optr)new_Slot(1, L"cascades");
    layout_Smalltalk_AST_MessageCascadeExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression)->values[0] = slot_Smalltalk_AST_MessageCascadeExpression_receiver; // receiver 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression)->values[1] = slot_Smalltalk_AST_MessageCascadeExpression_cascades; // cascades 
    Smalltalk_AST_MessageCascadeExpression_Class = (Class)new_Class(Smalltalk_AST_Expression_Class, layout_Smalltalk_AST_MessageCascadeExpression_Class_class);
    Smalltalk_AST_MessageCascadeExpression_Class->layout = layout_Smalltalk_AST_MessageCascadeExpression;
    Smalltalk_AST_MessageCascadeExpression_Class->name = SMB_MessageCascadeExpression;
    
}

void init_Smalltalk_AST_ASTMessageCascadeExpression_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB__equals_();
    init_SMB_cascades();
    init_SMB_accept_();
    init_SMB_cascades_();
    init_SMB_hasReturnExpression();
    init_class_SMB_astSelectors();
    
}