#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14969 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend14970 = new_Send((Optr)PSend14969, SMB_hash, 0);
    Array PThreadedCode14968 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14969, (Optr)&t_send0, (Optr)PSend14970, (Optr)&t_method_return);
    Method PMethod14967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14968, 1, PSend14970);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod14967, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14973 = new_Super(SMB_initialize, 0);
    Array PThreadedCode14972 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14973, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14971 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14972, 2, PSuper14973, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14971, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14975 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14978 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14980 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14984 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14983 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14984, (Optr)&t_block_return);
    Block PBlock14982 = new_Block_with(empty_Array, empty_Array, PThreadedCode14983, 1, PSend14984);
    // ifFalse:. 
    Send PSend14981 = new_Send((Optr)PSuper14980, SMB_ifFalse_, 1, (Optr)PBlock14982);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14985 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend14986 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend14987 = new_Send((Optr)PSend14985, SMB__equals_, 1, (Optr)PSend14986);
    // escape:. 
    Send PSend14991 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14990 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14991, (Optr)&t_block_return);
    Block PBlock14989 = new_Block_with(empty_Array, empty_Array, PThreadedCode14990, 1, PSend14991);
    // ifFalse:. 
    Send PSend14988 = new_Send((Optr)PSend14987, SMB_ifFalse_, 1, (Optr)PBlock14989);
    Array PThreadedCode14979 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14980, (Optr)&t_send_ifFalse_, (Optr)PSend14981, (Optr)PBlock14982, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14985, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14986, (Optr)&t_send1, (Optr)PSend14987, (Optr)&t_send_ifFalse_, (Optr)PSend14988, (Optr)PBlock14989, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14977 = new_Block_with(PArray14978, empty_Array, PThreadedCode14979, 3, PSend14981, PSend14988, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14992 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14977);
    Array PThreadedCode14976 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14977, (Optr)&t_send1, (Optr)PSend14992, (Optr)&t_method_return);
    Method PMethod14974 = new_Method_with(PArray14975, empty_Array, empty_Array, PThreadedCode14976, 1, PSend14992);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14974, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14994 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14997 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign14996 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend14997);
    Array PThreadedCode14995 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign14996, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend14997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14993 = new_Method_with(PArray14994, empty_Array, empty_Array, PThreadedCode14995, 2, PAssign14996, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod14993, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14999 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend15001 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode15000 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15001, (Optr)&t_method_return);
    Method PMethod14998 = new_Method_with(PArray14999, empty_Array, empty_Array, PThreadedCode15000, 1, PSend15001);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14998, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15003 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15005 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend15006 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend15007 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend15008 = new_Send((Optr)PSend15006, SMB__shiftLeft_, 1, (Optr)PSend15007);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15009 = new_Send((Optr)PSend15008, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15004 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend15006, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15007, (Optr)&t_send1, (Optr)PSend15008, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15009, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15002 = new_Method_with(PArray15003, empty_Array, empty_Array, PThreadedCode15004, 3, PSuper15005, PSend15009, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15002, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray15011 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend15013 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend15014 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend15013);
    Array PThreadedCode15012 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend15013, (Optr)&t_send2, (Optr)PSend15014, (Optr)&t_method_return);
    Method PMethod15010 = new_Method_with(PArray15011, empty_Array, empty_Array, PThreadedCode15012, 1, PSend15014);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod15010, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode15016 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod15015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15016, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod15015, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray15018 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15020 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend15021 = new_Send((Optr)PSend15020, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode15019 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15020, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend15021, (Optr)&t_method_return);
    Method PMethod15017 = new_Method_with(PArray15018, empty_Array, empty_Array, PThreadedCode15019, 1, PSend15021);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15017, HEADER(Smalltalk_AST_Variable_Class));
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