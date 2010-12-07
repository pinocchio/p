#include <lib/class/Kernel/AST/Variable.h>


Optr layout_Kernel_AST_Variable_Class_class;
Optr slot_Kernel_AST_Variable_localId;
Optr slot_Kernel_AST_Variable_scopeId;
Optr layout_Kernel_AST_Variable;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray4737 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    // lookupAt:in:. 
    Send PSend4739 = new_Send((Optr)VAR_context_0_0, SMB_lookupAt_in_, 2, (Optr)slot_Kernel_AST_Variable_localId, (Optr)slot_Kernel_AST_Variable_scopeId);
    Array PThreadedCode4738 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_send2, (Optr)PSend4739, (Optr)&t_method_return);
    Method PMethod4736 = new_Method_with(PArray4737, empty_Array, empty_Array, PThreadedCode4738, 1, PSend4739);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod4736, Variable_Class);
    store_method(Variable_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_localId() {
    Symbol SMB_localId = new_Symbol(L"localId");
    Array PThreadedCode4741 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_method_return);
    Method PMethod4740 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4741, 1, slot_Kernel_AST_Variable_localId);
    
    MethodClosure MC_SMB_localId = new_MethodClosure((Method)PMethod4740, Variable_Class);
    store_method(Variable_Class, SMB_localId, MC_SMB_localId);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray4743 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    // assignAt:in:to:. 
    Send PSend4745 = new_Send((Optr)VAR_anObject_0_1, SMB_assignAt_in_to_, 3, (Optr)slot_Kernel_AST_Variable_localId, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)VAR_value_0_0);
    Array PThreadedCode4744 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send3, (Optr)PSend4745, (Optr)&t_method_return);
    Method PMethod4742 = new_Method_with(PArray4743, empty_Array, empty_Array, PThreadedCode4744, 1, PSend4745);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod4742, Variable_Class);
    store_method(Variable_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_cloneAt_() {
    Symbol SMB_cloneAt_ = new_Symbol(L"cloneAt:");
    Variable VAR_idx_0_0 = new_Variable_named(L"idx", 0);
    Array PArray4747 = new_Array_with(1, (Optr)VAR_idx_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4750 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend4752 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)slot_Kernel_AST_AbstractVariable_name);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4753 = new_Send((Optr)VAR__receiver__1_0, SMB_localId_, 1, (Optr)slot_Kernel_AST_Variable_localId);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4754 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_idx_0_0);
    Array PThreadedCode4751 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractVariable_name, (Optr)&t_send1, (Optr)PSend4752, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_send1, (Optr)PSend4753, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_idx_0_0, (Optr)&t_send1, (Optr)PSend4754, (Optr)&t_method_return);
    Block PBlock4749 = new_Block_with(PArray4750, empty_Array, PThreadedCode4751, 3, PSend4752, PSend4753, PSend4754);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4755 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4756 = new_Send((Optr)PSend4755, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4757 = new_Send((Optr)PBlock4749, SMB_value_, 1, (Optr)PSend4756);
    Array PThreadedCode4748 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock4749, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4755, (Optr)&t_send0, (Optr)PSend4756, (Optr)&t_send1, (Optr)PSend4757, (Optr)&t_method_return);
    Method PMethod4746 = new_Method_with(PArray4747, empty_Array, empty_Array, PThreadedCode4748, 1, PSend4757);
    
    MethodClosure MC_SMB_cloneAt_ = new_MethodClosure((Method)PMethod4746, Variable_Class);
    store_method(Variable_Class, SMB_cloneAt_, MC_SMB_cloneAt_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray4759 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4762 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4764 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4765 = new_Send((Optr)VAR_aVariable_0_0, SMB_species, 0);
    // =. 
    Send PSend4766 = new_Send((Optr)PSend4764, SMB__equals_, 1, (Optr)PSend4765);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4770 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4769 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4770, (Optr)&t_block_return);
    Block PBlock4768 = new_Block_with(empty_Array, empty_Array, PThreadedCode4769, 1, PSend4770);
    // ifFalse:. 
    Send PSend4767 = new_Send((Optr)PSend4766, SMB_ifFalse_, 1, (Optr)PBlock4768);
    Symbol SMB_localId = new_Symbol(L"localId");
    // localId. 
    Send PSend4771 = new_Send((Optr)VAR_aVariable_0_0, SMB_localId, 0);
    // =. 
    Send PSend4772 = new_Send((Optr)slot_Kernel_AST_Variable_localId, SMB__equals_, 1, (Optr)PSend4771);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend4775 = new_Send((Optr)VAR_aVariable_0_0, SMB_scopeId, 0);
    // =. 
    Send PSend4776 = new_Send((Optr)slot_Kernel_AST_Variable_scopeId, SMB__equals_, 1, (Optr)PSend4775);
    Array PThreadedCode4774 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4775, (Optr)&t_send1, (Optr)PSend4776, (Optr)&t_block_return);
    Block PBlock4773 = new_Block_with(empty_Array, empty_Array, PThreadedCode4774, 1, PSend4776);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend4777 = new_Send((Optr)PSend4772, SMB_and_, 1, (Optr)PBlock4773);
    Array PThreadedCode4763 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4764, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4765, (Optr)&t_send1, (Optr)PSend4766, (Optr)&t_send_ifFalse_, (Optr)PSend4767, (Optr)PBlock4768, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4771, (Optr)&t_send1, (Optr)PSend4772, (Optr)&t_push_closure, (Optr)PBlock4773, (Optr)&t_send1, (Optr)PSend4777, (Optr)&t_method_return);
    Block PBlock4761 = new_Block_with(PArray4762, empty_Array, PThreadedCode4763, 2, PSend4767, PSend4777);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4778 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4761);
    Array PThreadedCode4760 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4761, (Optr)&t_send1, (Optr)PSend4778, (Optr)&t_method_return);
    Method PMethod4758 = new_Method_with(PArray4759, empty_Array, empty_Array, PThreadedCode4760, 1, PSend4778);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4758, Variable_Class);
    store_method(Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_scopeId() {
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    Array PThreadedCode4780 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_method_return);
    Method PMethod4779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4780, 1, slot_Kernel_AST_Variable_scopeId);
    
    MethodClosure MC_SMB_scopeId = new_MethodClosure((Method)PMethod4779, Variable_Class);
    store_method(Variable_Class, SMB_scopeId, MC_SMB_scopeId);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4782 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend4784 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode4783 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4784, (Optr)&t_method_return);
    Method PMethod4781 = new_Method_with(PArray4782, empty_Array, empty_Array, PThreadedCode4783, 1, PSend4784);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4781, Variable_Class);
    store_method(Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_scopeId_() {
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4786 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4788 = new_Assign((Optr)slot_Kernel_AST_Variable_scopeId, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4788, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4785 = new_Method_with(PArray4786, empty_Array, empty_Array, PThreadedCode4787, 2, PAssign4788, self);
    
    MethodClosure MC_SMB_scopeId_ = new_MethodClosure((Method)PMethod4785, Variable_Class);
    store_method(Variable_Class, SMB_scopeId_, MC_SMB_scopeId_);
}


static void init_SMB_localId_() {
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4790 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4792 = new_Assign((Optr)slot_Kernel_AST_Variable_localId, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4791 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4792, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4789 = new_Method_with(PArray4790, empty_Array, empty_Array, PThreadedCode4791, 2, PAssign4792, self);
    
    MethodClosure MC_SMB_localId_ = new_MethodClosure((Method)PMethod4789, Variable_Class);
    store_method(Variable_Class, SMB_localId_, MC_SMB_localId_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4794 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper4796 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4726 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // <<. 
    Send PSend4797 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4726_Const);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend4798 = new_Send((Optr)self, SMB_scopeId, 0);
    // printOn:. 
    Send PSend4799 = new_Send((Optr)PSend4798, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4800 = new_Character(L'@');
    Constant char_4800_Const = new_Constant((Optr)char_4800);
    // <<. 
    Send PSend4801 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4800_Const);
    Symbol SMB_localId = new_Symbol(L"localId");
    // localId. 
    Send PSend4802 = new_Send((Optr)self, SMB_localId, 0);
    // printOn:. 
    Send PSend4803 = new_Send((Optr)PSend4802, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode4795 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper4796, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend4797, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4798, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4799, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4800, (Optr)&t_send1, (Optr)PSend4801, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4802, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4803, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4793 = new_Method_with(PArray4794, empty_Array, empty_Array, PThreadedCode4795, 6, PSuper4796, PSend4797, PSend4799, PSend4801, PSend4803, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod4793, Variable_Class);
    store_method(Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_localId_scopeId_() {
    Symbol SMB_localId_scopeId_ = new_Symbol(L"localId:scopeId:");
    Variable VAR_localId_0_0 = new_Variable_named(L"localId", 0);
    Variable VAR_scopeId_0_1 = new_Variable_named(L"scopeId", 0);
    Array PArray4805 = new_Array_with(2, (Optr)VAR_localId_0_0, (Optr)VAR_scopeId_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4808 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4810 = new_Send((Optr)VAR__receiver__1_0, SMB_localId_, 1, (Optr)VAR_localId_0_0);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4811 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_scopeId_0_1);
    Array PThreadedCode4809 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_localId_0_0, (Optr)&t_send1, (Optr)PSend4810, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_scopeId_0_1, (Optr)&t_send1, (Optr)PSend4811, (Optr)&t_method_return);
    Block PBlock4807 = new_Block_with(PArray4808, empty_Array, PThreadedCode4809, 2, PSend4810, PSend4811);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4812 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4813 = new_Send((Optr)PBlock4807, SMB_value_, 1, (Optr)PSend4812);
    Array PThreadedCode4806 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock4807, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4812, (Optr)&t_send1, (Optr)PSend4813, (Optr)&t_method_return);
    Method PMethod4804 = new_Method_with(PArray4805, empty_Array, empty_Array, PThreadedCode4806, 1, PSend4813);
    
    MethodClosure MC_SMB_localId_scopeId_ = new_MethodClosure((Method)PMethod4804, HEADER(Variable_Class));
    store_method(HEADER(Variable_Class), SMB_localId_scopeId_, MC_SMB_localId_scopeId_);
}


static void init_class_SMB_named_at_() {
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_scopeId_0_1 = new_Variable_named(L"scopeId", 0);
    Array PArray4815 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_scopeId_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4818 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend4820 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4821 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_scopeId_0_1);
    Array PThreadedCode4819 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend4820, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_scopeId_0_1, (Optr)&t_send1, (Optr)PSend4821, (Optr)&t_method_return);
    Block PBlock4817 = new_Block_with(PArray4818, empty_Array, PThreadedCode4819, 2, PSend4820, PSend4821);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4822 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4823 = new_Send((Optr)PBlock4817, SMB_value_, 1, (Optr)PSend4822);
    Array PThreadedCode4816 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock4817, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4822, (Optr)&t_send1, (Optr)PSend4823, (Optr)&t_method_return);
    Method PMethod4814 = new_Method_with(PArray4815, empty_Array, empty_Array, PThreadedCode4816, 1, PSend4823);
    
    MethodClosure MC_SMB_named_at_ = new_MethodClosure((Method)PMethod4814, HEADER(Variable_Class));
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