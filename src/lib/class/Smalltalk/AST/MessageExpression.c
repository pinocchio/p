#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15123 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15125 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15125, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15122 = new_Method_with(PArray15123, empty_Array, empty_Array, PThreadedCode15124, 2, PAssign15125, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15122, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15127 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15129 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15129, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15126 = new_Method_with(PArray15127, empty_Array, empty_Array, PThreadedCode15128, 2, PAssign15129, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15126, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15131 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod15130 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15131, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15130, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15134 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15136 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign15135 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend15136);
    Array PThreadedCode15133 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15134, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15135, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15136, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15132 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15133, 3, PSuper15134, PAssign15135, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15132, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15138 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15141 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15143 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15147 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15146 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15147, (Optr)&t_block_return);
    Block PBlock15145 = new_Block_with(empty_Array, empty_Array, PThreadedCode15146, 1, PSend15147);
    // ifFalse:. 
    Send PSend15144 = new_Send((Optr)PSuper15143, SMB_ifFalse_, 1, (Optr)PBlock15145);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15148 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15149 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15150 = new_Send((Optr)PSend15148, SMB__equals_, 1, (Optr)PSend15149);
    // escape:. 
    Send PSend15154 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15153 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15154, (Optr)&t_block_return);
    Block PBlock15152 = new_Block_with(empty_Array, empty_Array, PThreadedCode15153, 1, PSend15154);
    // ifFalse:. 
    Send PSend15151 = new_Send((Optr)PSend15150, SMB_ifFalse_, 1, (Optr)PBlock15152);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15155 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15156 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15157 = new_Send((Optr)PSend15155, SMB__equals_, 1, (Optr)PSend15156);
    // escape:. 
    Send PSend15161 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15160 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15161, (Optr)&t_block_return);
    Block PBlock15159 = new_Block_with(empty_Array, empty_Array, PThreadedCode15160, 1, PSend15161);
    // ifFalse:. 
    Send PSend15158 = new_Send((Optr)PSend15157, SMB_ifFalse_, 1, (Optr)PBlock15159);
    Array PThreadedCode15142 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15143, (Optr)&t_send_ifFalse_, (Optr)PSend15144, (Optr)PBlock15145, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15148, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15149, (Optr)&t_send1, (Optr)PSend15150, (Optr)&t_send_ifFalse_, (Optr)PSend15151, (Optr)PBlock15152, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15155, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15156, (Optr)&t_send1, (Optr)PSend15157, (Optr)&t_send_ifFalse_, (Optr)PSend15158, (Optr)PBlock15159, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15140 = new_Block_with(PArray15141, empty_Array, PThreadedCode15142, 4, PSend15144, PSend15151, PSend15158, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15162 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15140);
    Array PThreadedCode15139 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15140, (Optr)&t_send1, (Optr)PSend15162, (Optr)&t_method_return);
    Method PMethod15137 = new_Method_with(PArray15138, empty_Array, empty_Array, PThreadedCode15139, 1, PSend15162);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15137, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15164 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15166 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15165 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15166, (Optr)&t_method_return);
    Method PMethod15163 = new_Method_with(PArray15164, empty_Array, empty_Array, PThreadedCode15165, 1, PSend15166);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15163, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15170 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15169 = new_Block_with(empty_Array, empty_Array, PThreadedCode15170, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15173 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15172 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15173, (Optr)&t_block_return);
    Block PBlock15171 = new_Block_with(empty_Array, empty_Array, PThreadedCode15172, 1, PSend15173);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15174 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15169, (Optr)PBlock15171);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15177 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15178 = new_Send((Optr)PSend15177, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15176 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15177, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15178, (Optr)&t_block_return);
    Block PBlock15175 = new_Block_with(empty_Array, empty_Array, PThreadedCode15176, 1, PSend15178);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15179 = new_Send((Optr)PSend15174, SMB_or_, 1, (Optr)PBlock15175);
    Array PThreadedCode15168 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15169, (Optr)&t_push_closure, (Optr)PBlock15171, (Optr)&t_send2, (Optr)PSend15174, (Optr)&t_push_closure, (Optr)PBlock15175, (Optr)&t_send1, (Optr)PSend15179, (Optr)&t_method_return);
    Method PMethod15167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15168, 1, PSend15179);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15167, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15181 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15180 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15181, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15180, Smalltalk_AST_MessageExpression_Class);
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