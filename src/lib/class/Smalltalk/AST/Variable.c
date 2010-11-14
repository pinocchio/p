#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15158 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend15159 = new_Send((Optr)PSend15158, SMB_hash, 0);
    Array PThreadedCode15157 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15158, (Optr)&t_send0, (Optr)PSend15159, (Optr)&t_method_return);
    Method PMethod15156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15157, 1, PSend15159);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod15156, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15162 = new_Super(SMB_initialize, 0);
    Array PThreadedCode15161 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15162, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15160 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15161, 2, PSuper15162, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15160, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15164 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15167 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15169 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15173 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15172 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15173, (Optr)&t_block_return);
    Block PBlock15171 = new_Block_with(empty_Array, empty_Array, PThreadedCode15172, 1, PSend15173);
    // ifFalse:. 
    Send PSend15170 = new_Send((Optr)PSuper15169, SMB_ifFalse_, 1, (Optr)PBlock15171);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15174 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend15175 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend15176 = new_Send((Optr)PSend15174, SMB__equals_, 1, (Optr)PSend15175);
    // escape:. 
    Send PSend15180 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15179 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15180, (Optr)&t_block_return);
    Block PBlock15178 = new_Block_with(empty_Array, empty_Array, PThreadedCode15179, 1, PSend15180);
    // ifFalse:. 
    Send PSend15177 = new_Send((Optr)PSend15176, SMB_ifFalse_, 1, (Optr)PBlock15178);
    Array PThreadedCode15168 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15169, (Optr)&t_send_ifFalse_, (Optr)PSend15170, (Optr)PBlock15171, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15174, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15175, (Optr)&t_send1, (Optr)PSend15176, (Optr)&t_send_ifFalse_, (Optr)PSend15177, (Optr)PBlock15178, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15166 = new_Block_with(PArray15167, empty_Array, PThreadedCode15168, 3, PSend15170, PSend15177, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15181 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15166);
    Array PThreadedCode15165 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15166, (Optr)&t_send1, (Optr)PSend15181, (Optr)&t_method_return);
    Method PMethod15163 = new_Method_with(PArray15164, empty_Array, empty_Array, PThreadedCode15165, 1, PSend15181);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15163, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15183 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15186 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign15185 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15186);
    Array PThreadedCode15184 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15185, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend15186, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15182 = new_Method_with(PArray15183, empty_Array, empty_Array, PThreadedCode15184, 2, PAssign15185, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod15182, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15188 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend15190 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode15189 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15190, (Optr)&t_method_return);
    Method PMethod15187 = new_Method_with(PArray15188, empty_Array, empty_Array, PThreadedCode15189, 1, PSend15190);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15187, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15192 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15194 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend15195 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15196 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend15197 = new_Send((Optr)PSend15195, SMB__shiftLeft_, 1, (Optr)PSend15196);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15198 = new_Send((Optr)PSend15197, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15193 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15194, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15195, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15196, (Optr)&t_send1, (Optr)PSend15197, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15198, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15191 = new_Method_with(PArray15192, empty_Array, empty_Array, PThreadedCode15193, 3, PSuper15194, PSend15198, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15191, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray15200 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend15202 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend15203 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15202);
    Array PThreadedCode15201 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend15202, (Optr)&t_send2, (Optr)PSend15203, (Optr)&t_method_return);
    Method PMethod15199 = new_Method_with(PArray15200, empty_Array, empty_Array, PThreadedCode15201, 1, PSend15203);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod15199, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode15205 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod15204 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15205, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod15204, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray15207 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15209 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend15210 = new_Send((Optr)PSend15209, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode15208 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15209, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend15210, (Optr)&t_method_return);
    Method PMethod15206 = new_Method_with(PArray15207, empty_Array, empty_Array, PThreadedCode15208, 1, PSend15210);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15206, HEADER(Smalltalk_AST_Variable_Class));
    store_method(HEADER(Smalltalk_AST_Variable_Class), SMB_named_, MC_SMB_named_);
}

void init_Smalltalk_AST_ASTVariable_layout() {
    layout_Smalltalk_AST_Variable_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Variable_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Variable_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Variable_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Variable_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Variable_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Variable = new_Symbol(L"Variable");
    slot_Smalltalk_AST_Variable_name = (Optr)new_Slot(0, L"name");
    slot_Smalltalk_AST_Variable_type = (Optr)new_Slot(1, L"type");
    layout_Smalltalk_AST_Variable = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_Variable)->values[0] = slot_Smalltalk_AST_Variable_name; // name 
    ((Array)layout_Smalltalk_AST_Variable)->values[1] = slot_Smalltalk_AST_Variable_type; // type 
    Smalltalk_AST_Variable_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Variable_Class_class);
    Smalltalk_AST_Variable_Class->layout = layout_Smalltalk_AST_Variable;
    Smalltalk_AST_Variable_Class->name = SMB_Variable;
    
}

void init_Smalltalk_AST_ASTVariable_methods() {
    init_SMB_hash();
    init_SMB_initialize();
    init_SMB__equals_();
    init_SMB_name_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_asVariableAt_();
    init_SMB_name();
    init_class_SMB_named_();
    
}