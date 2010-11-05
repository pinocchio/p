#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14994 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend14995 = new_Send((Optr)PSend14994, SMB_hash, 0);
    Array PThreadedCode14993 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14994, (Optr)&t_send0, (Optr)PSend14995, (Optr)&t_method_return);
    Method PMethod14992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14993, 1, PSend14995);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod14992, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14998 = new_Super(SMB_initialize, 0);
    Array PThreadedCode14997 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14998, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14997, 2, PSuper14998, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14996, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15000 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15003 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15005 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15009 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15008 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15009, (Optr)&t_block_return);
    Block PBlock15007 = new_Block_with(empty_Array, empty_Array, PThreadedCode15008, 1, PSend15009);
    // ifFalse:. 
    Send PSend15006 = new_Send((Optr)PSuper15005, SMB_ifFalse_, 1, (Optr)PBlock15007);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15010 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend15011 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend15012 = new_Send((Optr)PSend15010, SMB__equals_, 1, (Optr)PSend15011);
    // escape:. 
    Send PSend15016 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15015 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15016, (Optr)&t_block_return);
    Block PBlock15014 = new_Block_with(empty_Array, empty_Array, PThreadedCode15015, 1, PSend15016);
    // ifFalse:. 
    Send PSend15013 = new_Send((Optr)PSend15012, SMB_ifFalse_, 1, (Optr)PBlock15014);
    Array PThreadedCode15004 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15005, (Optr)&t_send_ifFalse_, (Optr)PSend15006, (Optr)PBlock15007, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15010, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15011, (Optr)&t_send1, (Optr)PSend15012, (Optr)&t_send_ifFalse_, (Optr)PSend15013, (Optr)PBlock15014, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15002 = new_Block_with(PArray15003, empty_Array, PThreadedCode15004, 3, PSend15006, PSend15013, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15017 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15002);
    Array PThreadedCode15001 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15002, (Optr)&t_send1, (Optr)PSend15017, (Optr)&t_method_return);
    Method PMethod14999 = new_Method_with(PArray15000, empty_Array, empty_Array, PThreadedCode15001, 1, PSend15017);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14999, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15019 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15022 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign15021 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15022);
    Array PThreadedCode15020 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15021, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend15022, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15018 = new_Method_with(PArray15019, empty_Array, empty_Array, PThreadedCode15020, 2, PAssign15021, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod15018, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15024 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend15026 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode15025 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15026, (Optr)&t_method_return);
    Method PMethod15023 = new_Method_with(PArray15024, empty_Array, empty_Array, PThreadedCode15025, 1, PSend15026);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15023, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15028 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15030 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend15031 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15032 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend15033 = new_Send((Optr)PSend15031, SMB__shiftLeft_, 1, (Optr)PSend15032);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend15034 = new_Send((Optr)PSend15033, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode15029 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15031, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15032, (Optr)&t_send1, (Optr)PSend15033, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend15034, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15027 = new_Method_with(PArray15028, empty_Array, empty_Array, PThreadedCode15029, 3, PSuper15030, PSend15034, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15027, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray15036 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend15038 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend15039 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15038);
    Array PThreadedCode15037 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend15038, (Optr)&t_send2, (Optr)PSend15039, (Optr)&t_method_return);
    Method PMethod15035 = new_Method_with(PArray15036, empty_Array, empty_Array, PThreadedCode15037, 1, PSend15039);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod15035, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode15041 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod15040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15041, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod15040, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray15043 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15045 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend15046 = new_Send((Optr)PSend15045, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode15044 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15045, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend15046, (Optr)&t_method_return);
    Method PMethod15042 = new_Method_with(PArray15043, empty_Array, empty_Array, PThreadedCode15044, 1, PSend15046);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15042, HEADER(Smalltalk_AST_Variable_Class));
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