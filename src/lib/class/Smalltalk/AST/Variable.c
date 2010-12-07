#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
<<<<<<< HEAD
    Send PSend15190 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend15191 = new_Send((Optr)PSend15190, SMB_hash, 0);
    Array PThreadedCode15189 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15190, (Optr)&t_send0, (Optr)PSend15191, (Optr)&t_method_return);
    Method PMethod15188 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15189, 1, PSend15191);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod15188, Smalltalk_AST_Variable_Class);
=======
    Send PSend15156 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend15157 = new_Send((Optr)PSend15156, SMB_hash, 0);
    Array PThreadedCode15155 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15156, (Optr)&t_send0, (Optr)PSend15157, (Optr)&t_method_return);
    Method PMethod15154 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15155, 1, PSend15157);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod15154, Smalltalk_AST_Variable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper15194 = new_Super(SMB_initialize, 0);
    Array PThreadedCode15193 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15194, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15192 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15193, 2, PSuper15194, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15192, Smalltalk_AST_Variable_Class);
=======
    Super PSuper15160 = new_Super(SMB_initialize, 0);
    Array PThreadedCode15159 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15160, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15158 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15159, 2, PSuper15160, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15158, Smalltalk_AST_Variable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray15196 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15199 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15201 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15205 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15204 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15205, (Optr)&t_block_return);
    Block PBlock15203 = new_Block_with(empty_Array, empty_Array, PThreadedCode15204, 1, PSend15205);
    // ifFalse:. 
    Send PSend15202 = new_Send((Optr)PSuper15201, SMB_ifFalse_, 1, (Optr)PBlock15203);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15206 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend15207 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend15208 = new_Send((Optr)PSend15206, SMB__equals_, 1, (Optr)PSend15207);
    // escape:. 
    Send PSend15212 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15211 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15212, (Optr)&t_block_return);
    Block PBlock15210 = new_Block_with(empty_Array, empty_Array, PThreadedCode15211, 1, PSend15212);
    // ifFalse:. 
    Send PSend15209 = new_Send((Optr)PSend15208, SMB_ifFalse_, 1, (Optr)PBlock15210);
    Array PThreadedCode15200 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15201, (Optr)&t_send_ifFalse_, (Optr)PSend15202, (Optr)PBlock15203, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15206, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15207, (Optr)&t_send1, (Optr)PSend15208, (Optr)&t_send_ifFalse_, (Optr)PSend15209, (Optr)PBlock15210, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15198 = new_Block_with(PArray15199, empty_Array, PThreadedCode15200, 3, PSend15202, PSend15209, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15213 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15198);
    Array PThreadedCode15197 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15198, (Optr)&t_send1, (Optr)PSend15213, (Optr)&t_method_return);
    Method PMethod15195 = new_Method_with(PArray15196, empty_Array, empty_Array, PThreadedCode15197, 1, PSend15213);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15195, Smalltalk_AST_Variable_Class);
=======
    Array PArray15162 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15165 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15167 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15171 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15170 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15171, (Optr)&t_block_return);
    Block PBlock15169 = new_Block_with(empty_Array, empty_Array, PThreadedCode15170, 1, PSend15171);
    // ifFalse:. 
    Send PSend15168 = new_Send((Optr)PSuper15167, SMB_ifFalse_, 1, (Optr)PBlock15169);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15172 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend15173 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend15174 = new_Send((Optr)PSend15172, SMB__equals_, 1, (Optr)PSend15173);
    // escape:. 
    Send PSend15178 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15177 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15178, (Optr)&t_block_return);
    Block PBlock15176 = new_Block_with(empty_Array, empty_Array, PThreadedCode15177, 1, PSend15178);
    // ifFalse:. 
    Send PSend15175 = new_Send((Optr)PSend15174, SMB_ifFalse_, 1, (Optr)PBlock15176);
    Array PThreadedCode15166 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15167, (Optr)&t_send_ifFalse_, (Optr)PSend15168, (Optr)PBlock15169, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15172, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15173, (Optr)&t_send1, (Optr)PSend15174, (Optr)&t_send_ifFalse_, (Optr)PSend15175, (Optr)PBlock15176, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15164 = new_Block_with(PArray15165, empty_Array, PThreadedCode15166, 3, PSend15168, PSend15175, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15179 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15164);
    Array PThreadedCode15163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15164, (Optr)&t_send1, (Optr)PSend15179, (Optr)&t_method_return);
    Method PMethod15161 = new_Method_with(PArray15162, empty_Array, empty_Array, PThreadedCode15163, 1, PSend15179);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15161, Smalltalk_AST_Variable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray15215 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15218 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign15217 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15218);
    Array PThreadedCode15216 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15217, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend15218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15214 = new_Method_with(PArray15215, empty_Array, empty_Array, PThreadedCode15216, 2, PAssign15217, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod15214, Smalltalk_AST_Variable_Class);
=======
    Array PArray15181 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15184 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign15183 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15184);
    Array PThreadedCode15182 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15183, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend15184, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15180 = new_Method_with(PArray15181, empty_Array, empty_Array, PThreadedCode15182, 2, PAssign15183, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod15180, Smalltalk_AST_Variable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15220 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend15222 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode15221 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15222, (Optr)&t_method_return);
    Method PMethod15219 = new_Method_with(PArray15220, empty_Array, empty_Array, PThreadedCode15221, 1, PSend15222);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15219, Smalltalk_AST_Variable_Class);
=======
    Array PArray15186 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend15188 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode15187 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15188, (Optr)&t_method_return);
    Method PMethod15185 = new_Method_with(PArray15186, empty_Array, empty_Array, PThreadedCode15187, 1, PSend15188);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15185, Smalltalk_AST_Variable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray15224 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15226 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
=======
    Array PArray15190 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15192 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
<<<<<<< HEAD
    Send PSend15227 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15228 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend15229 = new_Send((Optr)PSend15227, SMB__shiftLeft_, 1, (Optr)PSend15228);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15230 = new_Send((Optr)PSend15229, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15225 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15227, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15228, (Optr)&t_send1, (Optr)PSend15229, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15230, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15223 = new_Method_with(PArray15224, empty_Array, empty_Array, PThreadedCode15225, 3, PSuper15226, PSend15230, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15223, Smalltalk_AST_Variable_Class);
=======
    Send PSend15193 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15194 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend15195 = new_Send((Optr)PSend15193, SMB__shiftLeft_, 1, (Optr)PSend15194);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15196 = new_Send((Optr)PSend15195, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15191 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15193, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15194, (Optr)&t_send1, (Optr)PSend15195, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15196, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15189 = new_Method_with(PArray15190, empty_Array, empty_Array, PThreadedCode15191, 3, PSuper15192, PSend15196, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15189, Smalltalk_AST_Variable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
<<<<<<< HEAD
    Array PArray15232 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend15234 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend15235 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15234);
    Array PThreadedCode15233 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend15234, (Optr)&t_send2, (Optr)PSend15235, (Optr)&t_method_return);
    Method PMethod15231 = new_Method_with(PArray15232, empty_Array, empty_Array, PThreadedCode15233, 1, PSend15235);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod15231, Smalltalk_AST_Variable_Class);
=======
    Array PArray15198 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend15200 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend15201 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15200);
    Array PThreadedCode15199 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend15200, (Optr)&t_send2, (Optr)PSend15201, (Optr)&t_method_return);
    Method PMethod15197 = new_Method_with(PArray15198, empty_Array, empty_Array, PThreadedCode15199, 1, PSend15201);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod15197, Smalltalk_AST_Variable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
<<<<<<< HEAD
    Array PThreadedCode15237 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod15236 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15237, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod15236, Smalltalk_AST_Variable_Class);
=======
    Array PThreadedCode15203 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod15202 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15203, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod15202, Smalltalk_AST_Variable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
<<<<<<< HEAD
    Array PArray15239 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15241 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend15242 = new_Send((Optr)PSend15241, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode15240 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15241, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend15242, (Optr)&t_method_return);
    Method PMethod15238 = new_Method_with(PArray15239, empty_Array, empty_Array, PThreadedCode15240, 1, PSend15242);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15238, HEADER(Smalltalk_AST_Variable_Class));
=======
    Array PArray15205 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15207 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend15208 = new_Send((Optr)PSend15207, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode15206 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15207, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend15208, (Optr)&t_method_return);
    Method PMethod15204 = new_Method_with(PArray15205, empty_Array, empty_Array, PThreadedCode15206, 1, PSend15208);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15204, HEADER(Smalltalk_AST_Variable_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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