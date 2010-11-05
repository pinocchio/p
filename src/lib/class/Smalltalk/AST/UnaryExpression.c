#include <lib/class/Smalltalk/AST/UnaryExpression.h>


Optr layout_Smalltalk_AST_UnaryExpression_Class_class;
Optr slot_Smalltalk_AST_UnaryExpression_receiver;
Optr layout_Smalltalk_AST_UnaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15050 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15052 = new_Assign((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15051 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15052, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15049 = new_Method_with(PArray15050, empty_Array, empty_Array, PThreadedCode15051, 2, PAssign15052, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15049, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15054 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15054, 1, slot_Smalltalk_AST_UnaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15053, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15056 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15059 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15061 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15064 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15065, (Optr)&t_block_return);
    Block PBlock15063 = new_Block_with(empty_Array, empty_Array, PThreadedCode15064, 1, PSend15065);
    // ifFalse:. 
    Send PSend15062 = new_Send((Optr)PSuper15061, SMB_ifFalse_, 1, (Optr)PBlock15063);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15066 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15067 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15068 = new_Send((Optr)PSend15066, SMB__equals_, 1, (Optr)PSend15067);
    // escape:. 
    Send PSend15072 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15071 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15072, (Optr)&t_block_return);
    Block PBlock15070 = new_Block_with(empty_Array, empty_Array, PThreadedCode15071, 1, PSend15072);
    // ifFalse:. 
    Send PSend15069 = new_Send((Optr)PSend15068, SMB_ifFalse_, 1, (Optr)PBlock15070);
    Array PThreadedCode15060 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15061, (Optr)&t_send_ifFalse_, (Optr)PSend15062, (Optr)PBlock15063, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15066, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15067, (Optr)&t_send1, (Optr)PSend15068, (Optr)&t_send_ifFalse_, (Optr)PSend15069, (Optr)PBlock15070, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15058 = new_Block_with(PArray15059, empty_Array, PThreadedCode15060, 3, PSend15062, PSend15069, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15073 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15058);
    Array PThreadedCode15057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15058, (Optr)&t_send1, (Optr)PSend15073, (Optr)&t_method_return);
    Method PMethod15055 = new_Method_with(PArray15056, empty_Array, empty_Array, PThreadedCode15057, 1, PSend15073);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15055, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15075 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    // visitUnaryExpression:. 
    Send PSend15077 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnaryExpression_, 1, (Optr)self);
    Array PThreadedCode15076 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15077, (Optr)&t_method_return);
    Method PMethod15074 = new_Method_with(PArray15075, empty_Array, empty_Array, PThreadedCode15076, 1, PSend15077);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15074, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15079 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15081 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15082 = new_Send((Optr)PSend15081, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15083 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15084 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15080 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15081, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15082, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15083, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15084, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15078 = new_Method_with(PArray15079, empty_Array, empty_Array, PThreadedCode15080, 4, PSend15082, PSend15083, PSuper15084, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15078, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15088 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15087 = new_Block_with(empty_Array, empty_Array, PThreadedCode15088, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15091 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15090 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15091, (Optr)&t_block_return);
    Block PBlock15089 = new_Block_with(empty_Array, empty_Array, PThreadedCode15090, 1, PSend15091);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15092 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15087, (Optr)PBlock15089);
    Array PThreadedCode15086 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15087, (Optr)&t_push_closure, (Optr)PBlock15089, (Optr)&t_send2, (Optr)PSend15092, (Optr)&t_method_return);
    Method PMethod15085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15086, 1, PSend15092);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15085, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTUnaryExpression_layout() {
    layout_Smalltalk_AST_UnaryExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UnaryExpression = new_Symbol(L"UnaryExpression");
    slot_Smalltalk_AST_UnaryExpression_receiver = (Optr)new_Slot(1, L"receiver");
    layout_Smalltalk_AST_UnaryExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_UnaryExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_UnaryExpression)->values[1] = slot_Smalltalk_AST_UnaryExpression_receiver; // receiver 
    Smalltalk_AST_UnaryExpression_Class = (Class)new_Class(Smalltalk_AST_UnarySelector_Class, layout_Smalltalk_AST_UnaryExpression_Class_class);
    Smalltalk_AST_UnaryExpression_Class->layout = layout_Smalltalk_AST_UnaryExpression;
    Smalltalk_AST_UnaryExpression_Class->name = SMB_UnaryExpression;
    
}

void init_Smalltalk_AST_ASTUnaryExpression_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_hasReturnExpression();
    
}