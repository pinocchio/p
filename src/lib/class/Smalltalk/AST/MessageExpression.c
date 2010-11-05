#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15039 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15041 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15040 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15041, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15038 = new_Method_with(PArray15039, empty_Array, empty_Array, PThreadedCode15040, 2, PAssign15041, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15038, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15043 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15045 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15044 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15045, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15042 = new_Method_with(PArray15043, empty_Array, empty_Array, PThreadedCode15044, 2, PAssign15045, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15042, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15047 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod15046 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15047, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15046, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15050 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15052 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign15051 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend15052);
    Array PThreadedCode15049 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15050, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15051, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15052, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15049, 3, PSuper15050, PAssign15051, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15048, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15054 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15057 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15059 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15063 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15062 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15063, (Optr)&t_block_return);
    Block PBlock15061 = new_Block_with(empty_Array, empty_Array, PThreadedCode15062, 1, PSend15063);
    // ifFalse:. 
    Send PSend15060 = new_Send((Optr)PSuper15059, SMB_ifFalse_, 1, (Optr)PBlock15061);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15064 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15065 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15066 = new_Send((Optr)PSend15064, SMB__equals_, 1, (Optr)PSend15065);
    // escape:. 
    Send PSend15070 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15069 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15070, (Optr)&t_block_return);
    Block PBlock15068 = new_Block_with(empty_Array, empty_Array, PThreadedCode15069, 1, PSend15070);
    // ifFalse:. 
    Send PSend15067 = new_Send((Optr)PSend15066, SMB_ifFalse_, 1, (Optr)PBlock15068);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15071 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15072 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15073 = new_Send((Optr)PSend15071, SMB__equals_, 1, (Optr)PSend15072);
    // escape:. 
    Send PSend15077 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15076 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15077, (Optr)&t_block_return);
    Block PBlock15075 = new_Block_with(empty_Array, empty_Array, PThreadedCode15076, 1, PSend15077);
    // ifFalse:. 
    Send PSend15074 = new_Send((Optr)PSend15073, SMB_ifFalse_, 1, (Optr)PBlock15075);
    Array PThreadedCode15058 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15059, (Optr)&t_send_ifFalse_, (Optr)PSend15060, (Optr)PBlock15061, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15064, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15065, (Optr)&t_send1, (Optr)PSend15066, (Optr)&t_send_ifFalse_, (Optr)PSend15067, (Optr)PBlock15068, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15071, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15072, (Optr)&t_send1, (Optr)PSend15073, (Optr)&t_send_ifFalse_, (Optr)PSend15074, (Optr)PBlock15075, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15056 = new_Block_with(PArray15057, empty_Array, PThreadedCode15058, 4, PSend15060, PSend15067, PSend15074, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15078 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15056);
    Array PThreadedCode15055 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15056, (Optr)&t_send1, (Optr)PSend15078, (Optr)&t_method_return);
    Method PMethod15053 = new_Method_with(PArray15054, empty_Array, empty_Array, PThreadedCode15055, 1, PSend15078);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15053, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15080 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15082 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15081 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15082, (Optr)&t_method_return);
    Method PMethod15079 = new_Method_with(PArray15080, empty_Array, empty_Array, PThreadedCode15081, 1, PSend15082);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15079, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15086 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15085 = new_Block_with(empty_Array, empty_Array, PThreadedCode15086, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15089 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15088 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15089, (Optr)&t_block_return);
    Block PBlock15087 = new_Block_with(empty_Array, empty_Array, PThreadedCode15088, 1, PSend15089);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15090 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15085, (Optr)PBlock15087);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15093 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15094 = new_Send((Optr)PSend15093, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15092 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15093, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15094, (Optr)&t_block_return);
    Block PBlock15091 = new_Block_with(empty_Array, empty_Array, PThreadedCode15092, 1, PSend15094);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15095 = new_Send((Optr)PSend15090, SMB_or_, 1, (Optr)PBlock15091);
    Array PThreadedCode15084 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15085, (Optr)&t_push_closure, (Optr)PBlock15087, (Optr)&t_send2, (Optr)PSend15090, (Optr)&t_push_closure, (Optr)PBlock15091, (Optr)&t_send1, (Optr)PSend15095, (Optr)&t_method_return);
    Method PMethod15083 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15084, 1, PSend15095);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15083, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15097 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15096 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15097, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15096, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments, MC_SMB_arguments);
}

void init_Smalltalk_AST_ASTMessageExpression_layout() {
    layout_Smalltalk_AST_MessageExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MessageExpression = new_Symbol(L"MessageExpression");
    slot_Smalltalk_AST_MessageExpression_receiver = (Optr)new_Slot(1, L"receiver");
    slot_Smalltalk_AST_MessageExpression_arguments = (Optr)new_Slot(2, L"arguments");
    layout_Smalltalk_AST_MessageExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[1] = slot_Smalltalk_AST_MessageExpression_receiver; // receiver 
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[2] = slot_Smalltalk_AST_MessageExpression_arguments; // arguments 
    Smalltalk_AST_MessageExpression_Class = (Class)new_Class(Smalltalk_AST_KeywordSelector_Class, layout_Smalltalk_AST_MessageExpression_Class_class);
    Smalltalk_AST_MessageExpression_Class->layout = layout_Smalltalk_AST_MessageExpression;
    Smalltalk_AST_MessageExpression_Class->name = SMB_MessageExpression;
    
}

void init_Smalltalk_AST_ASTMessageExpression_methods() {
    init_SMB_receiver_();
    init_SMB_arguments_();
    init_SMB_receiver();
    init_SMB_initialize();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    init_SMB_arguments();
    
}