#include <lib/class/Kernel/AST/Variable.h>


Optr layout_Kernel_AST_Variable_Class_class;
Optr slot_Kernel_AST_Variable_localId;
Optr slot_Kernel_AST_Variable_scopeId;
Optr layout_Kernel_AST_Variable;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray4739 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    // lookupAt:in:. 
    Send PSend4741 = new_Send((Optr)VAR_context_0_0, SMB_lookupAt_in_, 2, (Optr)slot_Kernel_AST_Variable_localId, (Optr)slot_Kernel_AST_Variable_scopeId);
    Array PThreadedCode4740 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_send2, (Optr)PSend4741, (Optr)&t_method_return);
    Method PMethod4738 = new_Method_with(PArray4739, empty_Array, empty_Array, PThreadedCode4740, 1, PSend4741);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod4738, Variable_Class);
    store_method(Variable_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_localId() {
    Symbol SMB_localId = new_Symbol(L"localId");
    Array PThreadedCode4743 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_method_return);
    Method PMethod4742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4743, 1, slot_Kernel_AST_Variable_localId);
    
    MethodClosure MC_SMB_localId = new_MethodClosure((Method)PMethod4742, Variable_Class);
    store_method(Variable_Class, SMB_localId, MC_SMB_localId);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray4745 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    // assignAt:in:to:. 
    Send PSend4747 = new_Send((Optr)VAR_anObject_0_1, SMB_assignAt_in_to_, 3, (Optr)slot_Kernel_AST_Variable_localId, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)VAR_value_0_0);
    Array PThreadedCode4746 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send3, (Optr)PSend4747, (Optr)&t_method_return);
    Method PMethod4744 = new_Method_with(PArray4745, empty_Array, empty_Array, PThreadedCode4746, 1, PSend4747);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod4744, Variable_Class);
    store_method(Variable_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_cloneAt_() {
    Symbol SMB_cloneAt_ = new_Symbol(L"cloneAt:");
    Variable VAR_idx_0_0 = new_Variable_named(L"idx", 0);
    Array PArray4749 = new_Array_with(1, (Optr)VAR_idx_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4752 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend4754 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)slot_Kernel_AST_AbstractVariable_name);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4755 = new_Send((Optr)VAR__receiver__1_0, SMB_localId_, 1, (Optr)slot_Kernel_AST_Variable_localId);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4756 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_idx_0_0);
    Array PThreadedCode4753 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractVariable_name, (Optr)&t_send1, (Optr)PSend4754, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_send1, (Optr)PSend4755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_idx_0_0, (Optr)&t_send1, (Optr)PSend4756, (Optr)&t_method_return);
    Block PBlock4751 = new_Block_with(PArray4752, empty_Array, PThreadedCode4753, 3, PSend4754, PSend4755, PSend4756);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4757 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4758 = new_Send((Optr)PSend4757, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4759 = new_Send((Optr)PBlock4751, SMB_value_, 1, (Optr)PSend4758);
    Array PThreadedCode4750 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock4751, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4757, (Optr)&t_send0, (Optr)PSend4758, (Optr)&t_send1, (Optr)PSend4759, (Optr)&t_method_return);
    Method PMethod4748 = new_Method_with(PArray4749, empty_Array, empty_Array, PThreadedCode4750, 1, PSend4759);
    
    MethodClosure MC_SMB_cloneAt_ = new_MethodClosure((Method)PMethod4748, Variable_Class);
    store_method(Variable_Class, SMB_cloneAt_, MC_SMB_cloneAt_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray4761 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4764 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4766 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4767 = new_Send((Optr)VAR_aVariable_0_0, SMB_species, 0);
    // =. 
    Send PSend4768 = new_Send((Optr)PSend4766, SMB__equals_, 1, (Optr)PSend4767);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4772 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4771 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4772, (Optr)&t_block_return);
    Block PBlock4770 = new_Block_with(empty_Array, empty_Array, PThreadedCode4771, 1, PSend4772);
    // ifFalse:. 
    Send PSend4769 = new_Send((Optr)PSend4768, SMB_ifFalse_, 1, (Optr)PBlock4770);
    Symbol SMB_localId = new_Symbol(L"localId");
    // localId. 
    Send PSend4773 = new_Send((Optr)VAR_aVariable_0_0, SMB_localId, 0);
    // =. 
    Send PSend4774 = new_Send((Optr)slot_Kernel_AST_Variable_localId, SMB__equals_, 1, (Optr)PSend4773);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend4777 = new_Send((Optr)VAR_aVariable_0_0, SMB_scopeId, 0);
    // =. 
    Send PSend4778 = new_Send((Optr)slot_Kernel_AST_Variable_scopeId, SMB__equals_, 1, (Optr)PSend4777);
    Array PThreadedCode4776 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4777, (Optr)&t_send1, (Optr)PSend4778, (Optr)&t_block_return);
    Block PBlock4775 = new_Block_with(empty_Array, empty_Array, PThreadedCode4776, 1, PSend4778);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend4779 = new_Send((Optr)PSend4774, SMB_and_, 1, (Optr)PBlock4775);
    Array PThreadedCode4765 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4766, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4767, (Optr)&t_send1, (Optr)PSend4768, (Optr)&t_send_ifFalse_, (Optr)PSend4769, (Optr)PBlock4770, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_localId, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send0, (Optr)PSend4773, (Optr)&t_send1, (Optr)PSend4774, (Optr)&t_push_closure, (Optr)PBlock4775, (Optr)&t_send1, (Optr)PSend4779, (Optr)&t_method_return);
    Block PBlock4763 = new_Block_with(PArray4764, empty_Array, PThreadedCode4765, 2, PSend4769, PSend4779);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4780 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4763);
    Array PThreadedCode4762 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4763, (Optr)&t_send1, (Optr)PSend4780, (Optr)&t_method_return);
    Method PMethod4760 = new_Method_with(PArray4761, empty_Array, empty_Array, PThreadedCode4762, 1, PSend4780);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4760, Variable_Class);
    store_method(Variable_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_scopeId() {
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    Array PThreadedCode4782 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Variable_scopeId, (Optr)&t_method_return);
    Method PMethod4781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4782, 1, slot_Kernel_AST_Variable_scopeId);
    
    MethodClosure MC_SMB_scopeId = new_MethodClosure((Method)PMethod4781, Variable_Class);
    store_method(Variable_Class, SMB_scopeId, MC_SMB_scopeId);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4784 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    // visitVariable:. 
    Send PSend4786 = new_Send((Optr)VAR_visitor_0_0, SMB_visitVariable_, 1, (Optr)self);
    Array PThreadedCode4785 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4786, (Optr)&t_method_return);
    Method PMethod4783 = new_Method_with(PArray4784, empty_Array, empty_Array, PThreadedCode4785, 1, PSend4786);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4783, Variable_Class);
    store_method(Variable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_scopeId_() {
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4788 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4790 = new_Assign((Optr)slot_Kernel_AST_Variable_scopeId, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4789 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4790, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4787 = new_Method_with(PArray4788, empty_Array, empty_Array, PThreadedCode4789, 2, PAssign4790, self);
    
    MethodClosure MC_SMB_scopeId_ = new_MethodClosure((Method)PMethod4787, Variable_Class);
    store_method(Variable_Class, SMB_scopeId_, MC_SMB_scopeId_);
}


static void init_SMB_localId_() {
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4792 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4794 = new_Assign((Optr)slot_Kernel_AST_Variable_localId, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4794, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4791 = new_Method_with(PArray4792, empty_Array, empty_Array, PThreadedCode4793, 2, PAssign4794, self);
    
    MethodClosure MC_SMB_localId_ = new_MethodClosure((Method)PMethod4791, Variable_Class);
    store_method(Variable_Class, SMB_localId_, MC_SMB_localId_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4796 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper4798 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4728 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4728_Const = new_Constant((Optr)char_4728);
    // <<. 
    Send PSend4799 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4728_Const);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend4800 = new_Send((Optr)self, SMB_scopeId, 0);
    // printOn:. 
    Send PSend4801 = new_Send((Optr)PSend4800, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4802 = new_Character(L'@');
    Constant char_4802_Const = new_Constant((Optr)char_4802);
    // <<. 
    Send PSend4803 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4802_Const);
    Symbol SMB_localId = new_Symbol(L"localId");
    // localId. 
    Send PSend4804 = new_Send((Optr)self, SMB_localId, 0);
    // printOn:. 
    Send PSend4805 = new_Send((Optr)PSend4804, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode4797 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper4798, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4728, (Optr)&t_send1, (Optr)PSend4799, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4800, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4801, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4802, (Optr)&t_send1, (Optr)PSend4803, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4804, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4805, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4795 = new_Method_with(PArray4796, empty_Array, empty_Array, PThreadedCode4797, 6, PSuper4798, PSend4799, PSend4801, PSend4803, PSend4805, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod4795, Variable_Class);
    store_method(Variable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_localId_scopeId_() {
    Symbol SMB_localId_scopeId_ = new_Symbol(L"localId:scopeId:");
    Variable VAR_localId_0_0 = new_Variable_named(L"localId", 0);
    Variable VAR_scopeId_0_1 = new_Variable_named(L"scopeId", 0);
    Array PArray4807 = new_Array_with(2, (Optr)VAR_localId_0_0, (Optr)VAR_scopeId_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4810 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4812 = new_Send((Optr)VAR__receiver__1_0, SMB_localId_, 1, (Optr)VAR_localId_0_0);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4813 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_scopeId_0_1);
    Array PThreadedCode4811 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_localId_0_0, (Optr)&t_send1, (Optr)PSend4812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_scopeId_0_1, (Optr)&t_send1, (Optr)PSend4813, (Optr)&t_method_return);
    Block PBlock4809 = new_Block_with(PArray4810, empty_Array, PThreadedCode4811, 2, PSend4812, PSend4813);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4814 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4815 = new_Send((Optr)PBlock4809, SMB_value_, 1, (Optr)PSend4814);
    Array PThreadedCode4808 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock4809, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4814, (Optr)&t_send1, (Optr)PSend4815, (Optr)&t_method_return);
    Method PMethod4806 = new_Method_with(PArray4807, empty_Array, empty_Array, PThreadedCode4808, 1, PSend4815);
    
    MethodClosure MC_SMB_localId_scopeId_ = new_MethodClosure((Method)PMethod4806, HEADER(Variable_Class));
    store_method(HEADER(Variable_Class), SMB_localId_scopeId_, MC_SMB_localId_scopeId_);
}


static void init_class_SMB_named_at_() {
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_scopeId_0_1 = new_Variable_named(L"scopeId", 0);
    Array PArray4817 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_scopeId_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4820 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend4822 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_scopeId_ = new_Symbol(L"scopeId:");
    // scopeId:. 
    Send PSend4823 = new_Send((Optr)VAR__receiver__1_0, SMB_scopeId_, 1, (Optr)VAR_scopeId_0_1);
    Array PThreadedCode4821 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend4822, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_scopeId_0_1, (Optr)&t_send1, (Optr)PSend4823, (Optr)&t_method_return);
    Block PBlock4819 = new_Block_with(PArray4820, empty_Array, PThreadedCode4821, 2, PSend4822, PSend4823);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4824 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4825 = new_Send((Optr)PBlock4819, SMB_value_, 1, (Optr)PSend4824);
    Array PThreadedCode4818 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock4819, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4824, (Optr)&t_send1, (Optr)PSend4825, (Optr)&t_method_return);
    Method PMethod4816 = new_Method_with(PArray4817, empty_Array, empty_Array, PThreadedCode4818, 1, PSend4825);
    
    MethodClosure MC_SMB_named_at_ = new_MethodClosure((Method)PMethod4816, HEADER(Variable_Class));
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