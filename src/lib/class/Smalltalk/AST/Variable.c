#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14828 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend14829 = new_Send((Optr)PSend14828, SMB_hash, 0);
    Array PThreadedCode14827 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14828, (Optr)&t_send0, (Optr)PSend14829, (Optr)&t_method_return);
    Method PMethod14826 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14827, 1, PSend14829);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod14826, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14832 = new_Super(SMB_initialize, 0);
    Array PThreadedCode14831 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14832, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14830 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14831, 2, PSuper14832, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14830, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14834 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14837 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14839 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14843 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14842 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14843, (Optr)&t_block_return);
    Block PBlock14841 = new_Block_with(empty_Array, empty_Array, PThreadedCode14842, 1, PSend14843);
    // ifFalse:. 
    Send PSend14840 = new_Send((Optr)PSuper14839, SMB_ifFalse_, 1, (Optr)PBlock14841);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14844 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend14845 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend14846 = new_Send((Optr)PSend14844, SMB__equals_, 1, (Optr)PSend14845);
    // escape:. 
    Send PSend14850 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14849 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14850, (Optr)&t_block_return);
    Block PBlock14848 = new_Block_with(empty_Array, empty_Array, PThreadedCode14849, 1, PSend14850);
    // ifFalse:. 
    Send PSend14847 = new_Send((Optr)PSend14846, SMB_ifFalse_, 1, (Optr)PBlock14848);
    Array PThreadedCode14838 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14839, (Optr)&t_send_ifFalse_, (Optr)PSend14840, (Optr)PBlock14841, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14844, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14845, (Optr)&t_send1, (Optr)PSend14846, (Optr)&t_send_ifFalse_, (Optr)PSend14847, (Optr)PBlock14848, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14836 = new_Block_with(PArray14837, empty_Array, PThreadedCode14838, 3, PSend14840, PSend14847, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14851 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14836);
    Array PThreadedCode14835 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14836, (Optr)&t_send1, (Optr)PSend14851, (Optr)&t_method_return);
    Method PMethod14833 = new_Method_with(PArray14834, empty_Array, empty_Array, PThreadedCode14835, 1, PSend14851);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14833, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14853 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14856 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign14855 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend14856);
    Array PThreadedCode14854 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign14855, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend14856, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14852 = new_Method_with(PArray14853, empty_Array, empty_Array, PThreadedCode14854, 2, PAssign14855, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod14852, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14858 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend14860 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode14859 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend14860, (Optr)&t_method_return);
    Method PMethod14857 = new_Method_with(PArray14858, empty_Array, empty_Array, PThreadedCode14859, 1, PSend14860);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14857, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray14862 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper14864 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend14865 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14866 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend14867 = new_Send((Optr)PSend14865, SMB__shiftLeft_, 1, (Optr)PSend14866);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend14868 = new_Send((Optr)PSend14867, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode14863 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper14864, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend14865, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14866, (Optr)&t_send1, (Optr)PSend14867, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend14868, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14861 = new_Method_with(PArray14862, empty_Array, empty_Array, PThreadedCode14863, 3, PSuper14864, PSend14868, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod14861, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray14870 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend14872 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend14873 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend14872);
    Array PThreadedCode14871 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend14872, (Optr)&t_send2, (Optr)PSend14873, (Optr)&t_method_return);
    Method PMethod14869 = new_Method_with(PArray14870, empty_Array, empty_Array, PThreadedCode14871, 1, PSend14873);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod14869, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode14875 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod14874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14875, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod14874, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray14877 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14879 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14880 = new_Send((Optr)PSend14879, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode14878 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14879, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend14880, (Optr)&t_method_return);
    Method PMethod14876 = new_Method_with(PArray14877, empty_Array, empty_Array, PThreadedCode14878, 1, PSend14880);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod14876, HEADER(Smalltalk_AST_Variable_Class));
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