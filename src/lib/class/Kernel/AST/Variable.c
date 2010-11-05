#include <lib/class/Kernel/AST/Variable.h>


Optr layout_Kernel_AST_Variable_Class_class;
Optr slot_Kernel_AST_Variable_localId;
Optr slot_Kernel_AST_Variable_scopeId;
Optr layout_Kernel_AST_Variable;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray4736 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    // lookupAt:in:. 
    Send PSend4738 = new_Send((Optr)VAR_context_0_0, SMB_lookupAt_in_, 2, (Optr)slot_Kernel_AST_Variable_localId, (Optr)slot_Kernel_AST_Variable_scopeId);
    Array PThreadedCode4737 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_send2, (Optr)PSend4738, (Optr)&t_method_return);
    Method PMethod4735 = new_Method_with(PArray4736, empty_Array, empty_Array, PThreadedCode4737, 1, PSend4738);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod4735, Variable_Class);
    store_method(Variable_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_localId() {
    Symbol SMB_localId = new_Symbol(L"localId");
    Array PThreadedCode4740 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_method_return);
    Method PMethod4739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4740, 1, slot_Kernel_AST_Variable_localId);
    
    MethodClosure MC_SMB_localId = new_MethodClosure((Method)PMethod4739, Variable_Class);
    store_method(Variable_Class, SMB_localId, MC_SMB_localId);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray4742 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    // assignAt:in:to:. 
    Send PSend4744 = new_Send((Optr)VAR_anObject_0_1, SMB_assignAt_in_to_, 3, (Optr)slot_Kernel_AST_Variable_localId, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)VAR_value_0_0);
    Array PThreadedCode4743 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send3, (Optr)PSend4744, (Optr)&t_method_return);
    Method PMethod4741 = new_Method_with(PArray4742, empty_Array, empty_Array, PThreadedCode4743, 1, PSend4744);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod4741, Variable_Class);
    store_method(Variable_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_cloneAt_() {
    Symbol SMB_cloneAt_ = new_Symbol(L"cloneAt:");
    Variable VAR_idx_0_0 = new_Variable_named(L"idx", 0);
    Array PArray4746 = new_Array_with(1, (Optr)VAR_idx_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4749 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend4751 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)slot_Kernel_AST_AbstractVariable_name);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4752 = new_Send((Optr)VAR__receiver__1_0, SMB_localId_, 1, (Optr)slot_Kernel_AST_Variable_localId);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4753 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_idx_0_0);
    Array PThreadedCode4750 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractVariable_name, (Optr)&t_send1, (Optr)PSend4751, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_send1, (Optr)PSend4752, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_idx_0_0, (Optr)&t_send1, (Optr)PSend4753, (Optr)&t_method_return);
    Block PBlock4748 = new_Block_with(PArray4749, empty_Array, PThreadedCode4750, 3, PSend4751, PSend4752, PSend4753);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4754 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4755 = new_Send((Optr)PSend4754, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4756 = new_Send((Optr)PBlock4748, SMB_value_, 1, (Optr)PSend4755);
    Array PThreadedCode4747 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock4748, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4754, (Optr)&t_send0, (Optr)PSend4755, (Optr)&t_send1, (Optr)PSend4756, (Optr)&t_method_return);
    Method PMethod4745 = new_Method_with(PArray4746, empty_Array, empty_Array, PThreadedCode4747, 1, PSend4756);
    
    MethodClosure MC_SMB_cloneAt_ = new_MethodClosure((Method)PMethod4745, Variable_Class);
    store_method(Variable_Class, SMB_cloneAt_, MC_SMB_cloneAt_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray4758 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4761 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4763 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4764 = new_Send((Optr)VAR_aVariable_0_0, SMB_species, 0);
    // =. 
    Send PSend4765 = new_Send((Optr)PSend4763, SMB__equals_, 1, (Optr)PSend4764);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4769 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4768 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4769, (Optr)&t_block_return);
    Block PBlock4767 = new_Block_with(empty_Array, empty_Array, PThreadedCode4768, 1, PSend4769);
    // ifFalse:. 
    Send PSend4766 = new_Send((Optr)PSend4765, SMB_ifFalse_, 1, (Optr)PBlock4767);
    Symbol SMB_localId = new_Symbol(L"localId");
    // localId. 
    Send PSend4770 = new_Send((Optr)VAR_aVariable_0_0, SMB_localId, 0);
    // =. 
    Send PSend4771 = new_Send((Optr)slot_Kernel_AST_Variable_localId, SMB__equals_, 1, (Optr)PSend4770);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend4774 = new_Send((Optr)VAR_aVariable_0_0, SMB_scopeId, 0);
    // =. 
    Send PSend4775 = new_Send((Optr)slot_Kernel_AST_Variable_scopeId, SMB__equals_, 1, (Optr)PSend4774);
    Array PThreadedCode4773 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4774, (Optr)&t_send1, (Optr)PSend4775, (Optr)&t_block_return);
    Block PBlock4772 = new_Block_with(empty_Array, empty_Array, PThreadedCode4773, 1, PSend4775);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend4776 = new_Send((Optr)PSend4771, SMB_and_, 1, (Optr)PBlock4772);
    Array PThreadedCode4762 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4763, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4764, (Optr)&t_send1, (Optr)PSend4765, (Optr)&t_send_ifFalse_, (Optr)PSend4766, (Optr)PBlock4767, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4770, (Optr)&t_send1, (Optr)PSend4771, (Optr)&t_push_closure, (Optr)PBlock4772, (Optr)&t_send1, (Optr)PSend4776, (Optr)&t_method_return);
    Block PBlock4760 = new_Block_with(PArray4761, empty_Array, PThreadedCode4762, 2, PSend4766, PSend4776);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4777 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4760);
    Array PThreadedCode4759 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4760, (Optr)&t_send1, (Optr)PSend4777, (Optr)&t_method_return);
    Method PMethod4757 = new_Method_with(PArray4758, empty_Array, empty_Array, PThreadedCode4759, 1, PSend4777);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4757, Variable_Class);
    store_method(Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_scopeId() {
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    Array PThreadedCode4779 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_method_return);
    Method PMethod4778 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4779, 1, slot_Kernel_AST_Variable_scopeId);
    
    MethodClosure MC_SMB_scopeId = new_MethodClosure((Method)PMethod4778, Variable_Class);
    store_method(Variable_Class, SMB_scopeId, MC_SMB_scopeId);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4781 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend4783 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode4782 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4783, (Optr)&t_method_return);
    Method PMethod4780 = new_Method_with(PArray4781, empty_Array, empty_Array, PThreadedCode4782, 1, PSend4783);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4780, Variable_Class);
    store_method(Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_scopeId_() {
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4785 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4787 = new_Assign((Optr)slot_Kernel_AST_Variable_scopeId, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4786 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4787, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4784 = new_Method_with(PArray4785, empty_Array, empty_Array, PThreadedCode4786, 2, PAssign4787, self);
    
    MethodClosure MC_SMB_scopeId_ = new_MethodClosure((Method)PMethod4784, Variable_Class);
    store_method(Variable_Class, SMB_scopeId_, MC_SMB_scopeId_);
}


static void init_SMB_localId_() {
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4789 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4791 = new_Assign((Optr)slot_Kernel_AST_Variable_localId, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4790 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4791, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4788 = new_Method_with(PArray4789, empty_Array, empty_Array, PThreadedCode4790, 2, PAssign4791, self);
    
    MethodClosure MC_SMB_localId_ = new_MethodClosure((Method)PMethod4788, Variable_Class);
    store_method(Variable_Class, SMB_localId_, MC_SMB_localId_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4793 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper4795 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4725 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // <<. 
    Send PSend4796 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4725_Const);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend4797 = new_Send((Optr)self, SMB_scopeId, 0);
    // printOn:. 
    Send PSend4798 = new_Send((Optr)PSend4797, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4799 = new_Character(L'@');
    Constant char_4799_Const = new_Constant((Optr)char_4799);
    // <<. 
    Send PSend4800 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4799_Const);
    Symbol SMB_localId = new_Symbol(L"localId");
    // localId. 
    Send PSend4801 = new_Send((Optr)self, SMB_localId, 0);
    // printOn:. 
    Send PSend4802 = new_Send((Optr)PSend4801, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode4794 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper4795, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend4796, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4797, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4798, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4799, (Optr)&t_send1, (Optr)PSend4800, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4801, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4792 = new_Method_with(PArray4793, empty_Array, empty_Array, PThreadedCode4794, 6, PSuper4795, PSend4796, PSend4798, PSend4800, PSend4802, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod4792, Variable_Class);
    store_method(Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_localId_scopeId_() {
    Symbol SMB_localId_scopeId_ = new_Symbol(L"localId:scopeId:");
    Variable VAR_localId_0_0 = new_Variable_named(L"localId", 0);
    Variable VAR_scopeId_0_1 = new_Variable_named(L"scopeId", 0);
    Array PArray4804 = new_Array_with(2, (Optr)VAR_localId_0_0, (Optr)VAR_scopeId_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4807 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4809 = new_Send((Optr)VAR__receiver__1_0, SMB_localId_, 1, (Optr)VAR_localId_0_0);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4810 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_scopeId_0_1);
    Array PThreadedCode4808 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_localId_0_0, (Optr)&t_send1, (Optr)PSend4809, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_scopeId_0_1, (Optr)&t_send1, (Optr)PSend4810, (Optr)&t_method_return);
    Block PBlock4806 = new_Block_with(PArray4807, empty_Array, PThreadedCode4808, 2, PSend4809, PSend4810);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4811 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4812 = new_Send((Optr)PBlock4806, SMB_value_, 1, (Optr)PSend4811);
    Array PThreadedCode4805 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock4806, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4811, (Optr)&t_send1, (Optr)PSend4812, (Optr)&t_method_return);
    Method PMethod4803 = new_Method_with(PArray4804, empty_Array, empty_Array, PThreadedCode4805, 1, PSend4812);
    
    MethodClosure MC_SMB_localId_scopeId_ = new_MethodClosure((Method)PMethod4803, HEADER(Variable_Class));
    store_method(HEADER(Variable_Class), SMB_localId_scopeId_, MC_SMB_localId_scopeId_);
}


static void init_class_SMB_named_at_() {
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_scopeId_0_1 = new_Variable_named(L"scopeId", 0);
    Array PArray4814 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_scopeId_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4817 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend4819 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4820 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_scopeId_0_1);
    Array PThreadedCode4818 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend4819, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_scopeId_0_1, (Optr)&t_send1, (Optr)PSend4820, (Optr)&t_method_return);
    Block PBlock4816 = new_Block_with(PArray4817, empty_Array, PThreadedCode4818, 2, PSend4819, PSend4820);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4821 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4822 = new_Send((Optr)PBlock4816, SMB_value_, 1, (Optr)PSend4821);
    Array PThreadedCode4815 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock4816, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4821, (Optr)&t_send1, (Optr)PSend4822, (Optr)&t_method_return);
    Method PMethod4813 = new_Method_with(PArray4814, empty_Array, empty_Array, PThreadedCode4815, 1, PSend4822);
    
    MethodClosure MC_SMB_named_at_ = new_MethodClosure((Method)PMethod4813, HEADER(Variable_Class));
    store_method(HEADER(Variable_Class), SMB_named_at_, MC_SMB_named_at_);
}

void init_Kernel_AST_PVariable_layout() {
    layout_Kernel_AST_Variable_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Variable_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Variable_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Variable_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Variable_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Variable_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Variable = new_Symbol(L"Variable");
    slot_Kernel_AST_Variable_localId = (Optr)new_Slot(1, L"localId");
    slot_Kernel_AST_Variable_scopeId = (Optr)new_Slot(2, L"scopeId");
    layout_Kernel_AST_Variable = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Kernel_AST_Variable)->values[0] = slot_Kernel_AST_AbstractVariable_name; // name 
    ((Array)layout_Kernel_AST_Variable)->values[1] = slot_Kernel_AST_Variable_localId; // localId 
    ((Array)layout_Kernel_AST_Variable)->values[2] = slot_Kernel_AST_Variable_scopeId; // scopeId 
    Variable_Class = (Class)new_Class(Kernel_AST_AbstractVariable_Class, layout_Kernel_AST_Variable_Class_class);
    Variable_Class->layout = layout_Kernel_AST_Variable;
    Variable_Class->name = SMB_Variable;
    
}

void init_Kernel_AST_PVariable_methods() {
    init_SMB_readFrom_();
    init_SMB_localId();
    init_SMB_assign_on_();
    init_SMB_cloneAt_();
    init_SMB__equals_();
    init_SMB_scopeId();
    init_SMB_accept_();
    init_SMB_scopeId_();
    init_SMB_localId_();
    init_SMB_printOn_();
    init_class_SMB_localId_scopeId_();
    init_class_SMB_named_at_();
    
}