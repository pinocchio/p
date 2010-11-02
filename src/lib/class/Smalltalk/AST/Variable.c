#include <lib/class/Smalltalk/AST/Variable.h>


Optr layout_Smalltalk_AST_Variable_Class_class;
Optr slot_Smalltalk_AST_Variable_name;
Optr slot_Smalltalk_AST_Variable_type;
Optr layout_Smalltalk_AST_Variable;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14798 = new_Send((Optr)self, SMB_name, 0);
    // hash. 
    Send PSend14799 = new_Send((Optr)PSend14798, SMB_hash, 0);
    Array PThreadedCode14797 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14798, (Optr)&t_send0, (Optr)PSend14799, (Optr)&t_method_return);
    Method PMethod14796 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14797, 1, PSend14799);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod14796, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14802 = new_Super(SMB_initialize, 0);
    Array PThreadedCode14801 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14801, 2, PSuper14802, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14800, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14804 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14807 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14809 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14813 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14812 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14813, (Optr)&t_block_return);
    Block PBlock14811 = new_Block_with(empty_Array, empty_Array, PThreadedCode14812, 1, PSend14813);
    // ifFalse:. 
    Send PSend14810 = new_Send((Optr)PSuper14809, SMB_ifFalse_, 1, (Optr)PBlock14811);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14814 = new_Send((Optr)self, SMB_name, 0);
    // name. 
    Send PSend14815 = new_Send((Optr)VAR_other_0_0, SMB_name, 0);
    // =. 
    Send PSend14816 = new_Send((Optr)PSend14814, SMB__equals_, 1, (Optr)PSend14815);
    // escape:. 
    Send PSend14820 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14819 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14820, (Optr)&t_block_return);
    Block PBlock14818 = new_Block_with(empty_Array, empty_Array, PThreadedCode14819, 1, PSend14820);
    // ifFalse:. 
    Send PSend14817 = new_Send((Optr)PSend14816, SMB_ifFalse_, 1, (Optr)PBlock14818);
    Array PThreadedCode14808 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14809, (Optr)&t_send_ifFalse_, (Optr)PSend14810, (Optr)PBlock14811, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14814, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14815, (Optr)&t_send1, (Optr)PSend14816, (Optr)&t_send_ifFalse_, (Optr)PSend14817, (Optr)PBlock14818, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14806 = new_Block_with(PArray14807, empty_Array, PThreadedCode14808, 3, PSend14810, PSend14817, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14821 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14806);
    Array PThreadedCode14805 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14806, (Optr)&t_send1, (Optr)PSend14821, (Optr)&t_method_return);
    Method PMethod14803 = new_Method_with(PArray14804, empty_Array, empty_Array, PThreadedCode14805, 1, PSend14821);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14803, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14823 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14826 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign14825 = new_Assign((Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend14826);
    Array PThreadedCode14824 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign14825, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend14826, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14822 = new_Method_with(PArray14823, empty_Array, empty_Array, PThreadedCode14824, 2, PAssign14825, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod14822, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14828 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend14830 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode14829 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend14830, (Optr)&t_method_return);
    Method PMethod14827 = new_Method_with(PArray14828, empty_Array, empty_Array, PThreadedCode14829, 1, PSend14830);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14827, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray14832 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper14834 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5746 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5746_Const = new_Constant((Optr)char_5746);
    // <<. 
    Send PSend14835 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5746_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend14836 = new_Send((Optr)self, SMB_name, 0);
    // <<. 
    Send PSend14837 = new_Send((Optr)PSend14835, SMB__shiftLeft_, 1, (Optr)PSend14836);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend14838 = new_Send((Optr)PSend14837, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode14833 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper14834, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5746, (Optr)&t_send1, (Optr)PSend14835, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14836, (Optr)&t_send1, (Optr)PSend14837, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend14838, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14831 = new_Method_with(PArray14832, empty_Array, empty_Array, PThreadedCode14833, 3, PSuper14834, PSend14838, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod14831, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray14840 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend14842 = new_Send((Optr)VAR_scope_0_0, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    // named:at:. 
    Send PSend14843 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)PSend14842);
    Array PThreadedCode14841 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_push_variable, (Optr)VAR_scope_0_0, (Optr)&t_send0, (Optr)PSend14842, (Optr)&t_send2, (Optr)PSend14843, (Optr)&t_method_return);
    Method PMethod14839 = new_Method_with(PArray14840, empty_Array, empty_Array, PThreadedCode14841, 1, PSend14843);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod14839, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode14845 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Variable_name, (Optr)&t_method_return);
    Method PMethod14844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14845, 1, slot_Smalltalk_AST_Variable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod14844, Smalltalk_AST_Variable_Class);
    store_method(Smalltalk_AST_Variable_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray14847 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14849 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14850 = new_Send((Optr)PSend14849, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode14848 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14849, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend14850, (Optr)&t_method_return);
    Method PMethod14846 = new_Method_with(PArray14847, empty_Array, empty_Array, PThreadedCode14848, 1, PSend14850);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod14846, HEADER(Smalltalk_AST_Variable_Class));
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