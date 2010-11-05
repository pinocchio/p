#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14982 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14984 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14983 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14984, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14981 = new_Method_with(PArray14982, empty_Array, empty_Array, PThreadedCode14983, 2, PAssign14984, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod14981, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14986 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14988 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14987 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14988, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14985 = new_Method_with(PArray14986, empty_Array, empty_Array, PThreadedCode14987, 2, PAssign14988, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod14985, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode14990 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod14989 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14990, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod14989, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14993 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14995 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign14994 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend14995);
    Array PThreadedCode14992 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14993, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14994, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend14995, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14992, 3, PSuper14993, PAssign14994, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14991, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14997 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15000 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15002 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15006 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15005 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15006, (Optr)&t_block_return);
    Block PBlock15004 = new_Block_with(empty_Array, empty_Array, PThreadedCode15005, 1, PSend15006);
    // ifFalse:. 
    Send PSend15003 = new_Send((Optr)PSuper15002, SMB_ifFalse_, 1, (Optr)PBlock15004);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15007 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15008 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15009 = new_Send((Optr)PSend15007, SMB__equals_, 1, (Optr)PSend15008);
    // escape:. 
    Send PSend15013 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15012 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15013, (Optr)&t_block_return);
    Block PBlock15011 = new_Block_with(empty_Array, empty_Array, PThreadedCode15012, 1, PSend15013);
    // ifFalse:. 
    Send PSend15010 = new_Send((Optr)PSend15009, SMB_ifFalse_, 1, (Optr)PBlock15011);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15014 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15015 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15016 = new_Send((Optr)PSend15014, SMB__equals_, 1, (Optr)PSend15015);
    // escape:. 
    Send PSend15020 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15019 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15020, (Optr)&t_block_return);
    Block PBlock15018 = new_Block_with(empty_Array, empty_Array, PThreadedCode15019, 1, PSend15020);
    // ifFalse:. 
    Send PSend15017 = new_Send((Optr)PSend15016, SMB_ifFalse_, 1, (Optr)PBlock15018);
    Array PThreadedCode15001 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15002, (Optr)&t_send_ifFalse_, (Optr)PSend15003, (Optr)PBlock15004, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15007, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15008, (Optr)&t_send1, (Optr)PSend15009, (Optr)&t_send_ifFalse_, (Optr)PSend15010, (Optr)PBlock15011, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15014, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15015, (Optr)&t_send1, (Optr)PSend15016, (Optr)&t_send_ifFalse_, (Optr)PSend15017, (Optr)PBlock15018, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14999 = new_Block_with(PArray15000, empty_Array, PThreadedCode15001, 4, PSend15003, PSend15010, PSend15017, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15021 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14999);
    Array PThreadedCode14998 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14999, (Optr)&t_send1, (Optr)PSend15021, (Optr)&t_method_return);
    Method PMethod14996 = new_Method_with(PArray14997, empty_Array, empty_Array, PThreadedCode14998, 1, PSend15021);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14996, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15023 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15025 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15024 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15025, (Optr)&t_method_return);
    Method PMethod15022 = new_Method_with(PArray15023, empty_Array, empty_Array, PThreadedCode15024, 1, PSend15025);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15022, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15029 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15028 = new_Block_with(empty_Array, empty_Array, PThreadedCode15029, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15032 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15031 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15032, (Optr)&t_block_return);
    Block PBlock15030 = new_Block_with(empty_Array, empty_Array, PThreadedCode15031, 1, PSend15032);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15033 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15028, (Optr)PBlock15030);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15036 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15037 = new_Send((Optr)PSend15036, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15035 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15036, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15037, (Optr)&t_block_return);
    Block PBlock15034 = new_Block_with(empty_Array, empty_Array, PThreadedCode15035, 1, PSend15037);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15038 = new_Send((Optr)PSend15033, SMB_or_, 1, (Optr)PBlock15034);
    Array PThreadedCode15027 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15028, (Optr)&t_push_closure, (Optr)PBlock15030, (Optr)&t_send2, (Optr)PSend15033, (Optr)&t_push_closure, (Optr)PBlock15034, (Optr)&t_send1, (Optr)PSend15038, (Optr)&t_method_return);
    Method PMethod15026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15027, 1, PSend15038);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15026, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15040 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15040, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15039, Smalltalk_AST_MessageExpression_Class);
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