#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14885 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend14886 = new_Send((Optr)PSend14885, SMB_hash, 0);
    Array PThreadedCode14884 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14885, (Optr)&t_send0, (Optr)PSend14886, (Optr)&t_method_return);
    Method PMethod14883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14884, 1, PSend14886);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod14883, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14889 = new_Super(SMB_initialize, 0);
    Array PThreadedCode14888 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14889, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14887 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14888, 2, PSuper14889, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14887, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14891 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14894 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14896 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14900 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14899 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14900, (Optr)&t_block_return);
    Block PBlock14898 = new_Block_with(empty_Array, empty_Array, PThreadedCode14899, 1, PSend14900);
    // ifFalse:. 
    Send PSend14897 = new_Send((Optr)PSuper14896, SMB_ifFalse_, 1, (Optr)PBlock14898);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14901 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend14902 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend14903 = new_Send((Optr)PSend14901, SMB__equals_, 1, (Optr)PSend14902);
    // escape:. 
    Send PSend14907 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14906 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14907, (Optr)&t_block_return);
    Block PBlock14905 = new_Block_with(empty_Array, empty_Array, PThreadedCode14906, 1, PSend14907);
    // ifFalse:. 
    Send PSend14904 = new_Send((Optr)PSend14903, SMB_ifFalse_, 1, (Optr)PBlock14905);
    Array PThreadedCode14895 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14896, (Optr)&t_send_ifFalse_, (Optr)PSend14897, (Optr)PBlock14898, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14901, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14902, (Optr)&t_send1, (Optr)PSend14903, (Optr)&t_send_ifFalse_, (Optr)PSend14904, (Optr)PBlock14905, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14893 = new_Block_with(PArray14894, empty_Array, PThreadedCode14895, 3, PSend14897, PSend14904, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14908 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14893);
    Array PThreadedCode14892 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14893, (Optr)&t_send1, (Optr)PSend14908, (Optr)&t_method_return);
    Method PMethod14890 = new_Method_with(PArray14891, empty_Array, empty_Array, PThreadedCode14892, 1, PSend14908);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14890, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14910 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14913 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign14912 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend14913);
    Array PThreadedCode14911 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign14912, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend14913, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14909 = new_Method_with(PArray14910, empty_Array, empty_Array, PThreadedCode14911, 2, PAssign14912, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod14909, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14915 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend14917 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode14916 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend14917, (Optr)&t_method_return);
    Method PMethod14914 = new_Method_with(PArray14915, empty_Array, empty_Array, PThreadedCode14916, 1, PSend14917);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14914, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray14919 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper14921 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend14922 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14923 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend14924 = new_Send((Optr)PSend14922, SMB__shiftLeft_, 1, (Optr)PSend14923);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend14925 = new_Send((Optr)PSend14924, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode14920 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper14921, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend14922, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14923, (Optr)&t_send1, (Optr)PSend14924, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend14925, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14918 = new_Method_with(PArray14919, empty_Array, empty_Array, PThreadedCode14920, 3, PSuper14921, PSend14925, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod14918, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray14927 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend14929 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend14930 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend14929);
    Array PThreadedCode14928 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend14929, (Optr)&t_send2, (Optr)PSend14930, (Optr)&t_method_return);
    Method PMethod14926 = new_Method_with(PArray14927, empty_Array, empty_Array, PThreadedCode14928, 1, PSend14930);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod14926, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode14932 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod14931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14932, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod14931, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray14934 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14936 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14937 = new_Send((Optr)PSend14936, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode14935 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14936, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend14937, (Optr)&t_method_return);
    Method PMethod14933 = new_Method_with(PArray14934, empty_Array, empty_Array, PThreadedCode14935, 1, PSend14937);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod14933, HEADER(Smalltalk_AST_Variable_Class));
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