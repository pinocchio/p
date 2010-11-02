#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14952 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14954 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14953 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14954, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14951 = new_Method_with(PArray14952, empty_Array, empty_Array, PThreadedCode14953, 2, PAssign14954, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod14951, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14956 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14958 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14957 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14958, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14955 = new_Method_with(PArray14956, empty_Array, empty_Array, PThreadedCode14957, 2, PAssign14958, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod14955, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode14960 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod14959 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14960, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod14959, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14963 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14965 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign14964 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend14965);
    Array PThreadedCode14962 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14963, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14964, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend14965, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14962, 3, PSuper14963, PAssign14964, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14961, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14967 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14970 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14972 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14976 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14975 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14976, (Optr)&t_block_return);
    Block PBlock14974 = new_Block_with(empty_Array, empty_Array, PThreadedCode14975, 1, PSend14976);
    // ifFalse:. 
    Send PSend14973 = new_Send((Optr)PSuper14972, SMB_ifFalse_, 1, (Optr)PBlock14974);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend14977 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend14978 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend14979 = new_Send((Optr)PSend14977, SMB__equals_, 1, (Optr)PSend14978);
    // escape:. 
    Send PSend14983 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14982 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14983, (Optr)&t_block_return);
    Block PBlock14981 = new_Block_with(empty_Array, empty_Array, PThreadedCode14982, 1, PSend14983);
    // ifFalse:. 
    Send PSend14980 = new_Send((Optr)PSend14979, SMB_ifFalse_, 1, (Optr)PBlock14981);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend14984 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend14985 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend14986 = new_Send((Optr)PSend14984, SMB__equals_, 1, (Optr)PSend14985);
    // escape:. 
    Send PSend14990 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14989 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14990, (Optr)&t_block_return);
    Block PBlock14988 = new_Block_with(empty_Array, empty_Array, PThreadedCode14989, 1, PSend14990);
    // ifFalse:. 
    Send PSend14987 = new_Send((Optr)PSend14986, SMB_ifFalse_, 1, (Optr)PBlock14988);
    Array PThreadedCode14971 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14972, (Optr)&t_send_ifFalse_, (Optr)PSend14973, (Optr)PBlock14974, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14977, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14978, (Optr)&t_send1, (Optr)PSend14979, (Optr)&t_send_ifFalse_, (Optr)PSend14980, (Optr)PBlock14981, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14984, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14985, (Optr)&t_send1, (Optr)PSend14986, (Optr)&t_send_ifFalse_, (Optr)PSend14987, (Optr)PBlock14988, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14969 = new_Block_with(PArray14970, empty_Array, PThreadedCode14971, 4, PSend14973, PSend14980, PSend14987, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14991 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14969);
    Array PThreadedCode14968 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14969, (Optr)&t_send1, (Optr)PSend14991, (Optr)&t_method_return);
    Method PMethod14966 = new_Method_with(PArray14967, empty_Array, empty_Array, PThreadedCode14968, 1, PSend14991);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14966, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14993 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend14995 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode14994 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend14995, (Optr)&t_method_return);
    Method PMethod14992 = new_Method_with(PArray14993, empty_Array, empty_Array, PThreadedCode14994, 1, PSend14995);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14992, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode14999 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock14998 = new_Block_with(empty_Array, empty_Array, PThreadedCode14999, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15002 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15001 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15002, (Optr)&t_block_return);
    Block PBlock15000 = new_Block_with(empty_Array, empty_Array, PThreadedCode15001, 1, PSend15002);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15003 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock14998, (Optr)PBlock15000);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15006 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15007 = new_Send((Optr)PSend15006, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15005 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15006, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15007, (Optr)&t_block_return);
    Block PBlock15004 = new_Block_with(empty_Array, empty_Array, PThreadedCode15005, 1, PSend15007);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15008 = new_Send((Optr)PSend15003, SMB_or_, 1, (Optr)PBlock15004);
    Array PThreadedCode14997 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock14998, (Optr)&t_push_closure, (Optr)PBlock15000, (Optr)&t_send2, (Optr)PSend15003, (Optr)&t_push_closure, (Optr)PBlock15004, (Optr)&t_send1, (Optr)PSend15008, (Optr)&t_method_return);
    Method PMethod14996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14997, 1, PSend15008);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod14996, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15010 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15010, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15009, Smalltalk_AST_MessageExpression_Class);
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