#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15217 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend15218 = new_Send((Optr)PSend15217, SMB_hash, 0);
    Array PThreadedCode15216 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15217, (Optr)&t_send0, (Optr)PSend15218, (Optr)&t_method_return);
    Method PMethod15215 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15216, 1, PSend15218);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod15215, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15221 = new_Super(SMB_initialize, 0);
    Array PThreadedCode15220 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15221, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15219 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15220, 2, PSuper15221, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15219, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15223 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15226 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15228 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15232 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15231 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15232, (Optr)&t_block_return);
    Block PBlock15230 = new_Block_with(empty_Array, empty_Array, PThreadedCode15231, 1, PSend15232);
    // ifFalse:. 
    Send PSend15229 = new_Send((Optr)PSuper15228, SMB_ifFalse_, 1, (Optr)PBlock15230);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15233 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend15234 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend15235 = new_Send((Optr)PSend15233, SMB__equals_, 1, (Optr)PSend15234);
    // escape:. 
    Send PSend15239 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15238 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15239, (Optr)&t_block_return);
    Block PBlock15237 = new_Block_with(empty_Array, empty_Array, PThreadedCode15238, 1, PSend15239);
    // ifFalse:. 
    Send PSend15236 = new_Send((Optr)PSend15235, SMB_ifFalse_, 1, (Optr)PBlock15237);
    Array PThreadedCode15227 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15228, (Optr)&t_send_ifFalse_, (Optr)PSend15229, (Optr)PBlock15230, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15233, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15234, (Optr)&t_send1, (Optr)PSend15235, (Optr)&t_send_ifFalse_, (Optr)PSend15236, (Optr)PBlock15237, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15225 = new_Block_with(PArray15226, empty_Array, PThreadedCode15227, 3, PSend15229, PSend15236, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15240 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15225);
    Array PThreadedCode15224 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15225, (Optr)&t_send1, (Optr)PSend15240, (Optr)&t_method_return);
    Method PMethod15222 = new_Method_with(PArray15223, empty_Array, empty_Array, PThreadedCode15224, 1, PSend15240);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15222, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15242 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15245 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign15244 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15245);
    Array PThreadedCode15243 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15244, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend15245, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15241 = new_Method_with(PArray15242, empty_Array, empty_Array, PThreadedCode15243, 2, PAssign15244, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod15241, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15247 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend15249 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode15248 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15249, (Optr)&t_method_return);
    Method PMethod15246 = new_Method_with(PArray15247, empty_Array, empty_Array, PThreadedCode15248, 1, PSend15249);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15246, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15251 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15253 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5738 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5738_Const = new_Constant((Optr)char_5738);
    // <<. 
    Send PSend15254 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5738_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15255 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend15256 = new_Send((Optr)PSend15254, SMB__shiftLeft_, 1, (Optr)PSend15255);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend15257 = new_Send((Optr)PSend15256, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode15252 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15253, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5738, (Optr)&t_send1, (Optr)PSend15254, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15255, (Optr)&t_send1, (Optr)PSend15256, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend15257, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15250 = new_Method_with(PArray15251, empty_Array, empty_Array, PThreadedCode15252, 3, PSuper15253, PSend15257, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15250, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray15259 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend15261 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend15262 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15261);
    Array PThreadedCode15260 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend15261, (Optr)&t_send2, (Optr)PSend15262, (Optr)&t_method_return);
    Method PMethod15258 = new_Method_with(PArray15259, empty_Array, empty_Array, PThreadedCode15260, 1, PSend15262);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod15258, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode15264 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod15263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15264, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod15263, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray15266 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15268 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend15269 = new_Send((Optr)PSend15268, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode15267 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15268, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend15269, (Optr)&t_method_return);
    Method PMethod15265 = new_Method_with(PArray15266, empty_Array, empty_Array, PThreadedCode15267, 1, PSend15269);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15265, HEADER(Smalltalk_AST_Variable_Class));
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