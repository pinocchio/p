#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15190 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend15191 = new_Send((Optr)PSend15190, SMB_hash, 0);
    Array PThreadedCode15189 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15190, (Optr)&t_send0, (Optr)PSend15191, (Optr)&t_method_return);
    Method PMethod15188 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15189, 1, PSend15191);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod15188, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15194 = new_Super(SMB_initialize, 0);
    Array PThreadedCode15193 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15194, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15192 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15193, 2, PSuper15194, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15192, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
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
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15215 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15218 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign15217 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15218);
    Array PThreadedCode15216 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15217, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend15218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15214 = new_Method_with(PArray15215, empty_Array, empty_Array, PThreadedCode15216, 2, PAssign15217, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod15214, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15220 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend15222 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode15221 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15222, (Optr)&t_method_return);
    Method PMethod15219 = new_Method_with(PArray15220, empty_Array, empty_Array, PThreadedCode15221, 1, PSend15222);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15219, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15224 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15226 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
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
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
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
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode15237 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod15236 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15237, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod15236, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
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