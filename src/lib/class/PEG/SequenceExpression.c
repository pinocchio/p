#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19771 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19770 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19771, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19770, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19775 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19774 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19775);
    Array PThreadedCode19773 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19774, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19775, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19772 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19773, 2, PAssign19774, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19772, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19779 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19778 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19779);
    Array PThreadedCode19777 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19778, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19777, 2, PAssign19778, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19776, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19781 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19782 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19785 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19784 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19785);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19786 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19787 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19788 = new_Send((Optr)PSend19786, SMB__equals_, 1, (Optr)PSend19787);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19792 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19794 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19796 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19797 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19796);
    Array PThreadedCode19795 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19796, (Optr)&t_send1, (Optr)PSend19797, (Optr)&t_method_return);
    Block PBlock19793 = new_Block_with(PArray19794, empty_Array, PThreadedCode19795, 1, PSend19797);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19798 = new_Send((Optr)PSend19792, SMB_do_, 1, (Optr)PBlock19793);
    Array PThreadedCode19791 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19792, (Optr)&t_push_closure, (Optr)PBlock19793, (Optr)&t_send1, (Optr)PSend19798, (Optr)&t_block_return);
    Block PBlock19790 = new_Block_with(empty_Array, empty_Array, PThreadedCode19791, 1, PSend19798);
    // asChildParser. 
    Send PSend19801 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19802 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19801);
    Array PThreadedCode19800 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19801, (Optr)&t_send1, (Optr)PSend19802, (Optr)&t_block_return);
    Block PBlock19799 = new_Block_with(empty_Array, empty_Array, PThreadedCode19800, 1, PSend19802);
    // ifTrue:ifFalse:. 
    Send PSend19789 = new_Send((Optr)PSend19788, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19790, (Optr)PBlock19799);
    Array PThreadedCode19783 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19784, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19785, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19786, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19787, (Optr)&t_send1, (Optr)PSend19788, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19789, (Optr)PBlock19790, (Optr)PBlock19799, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19780 = new_Method_with(PArray19781, PArray19782, empty_Array, PThreadedCode19783, 3, PAssign19784, PSend19789, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19780, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19804 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19805 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19808 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19811 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19810 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19811);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19814 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19813 = new_Send((Optr)PSend19814, SMB_position, 0);
    Assign PAssign19812 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19813);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19815 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19816 = new_Send((Optr)PSend19815, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19820 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19819 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19820, (Optr)&t_block_return);
    Block PBlock19818 = new_Block_with(empty_Array, empty_Array, PThreadedCode19819, 1, PSend19820);
    // ifFalse:. 
    Send PSend19817 = new_Send((Optr)PSend19816, SMB_ifFalse_, 1, (Optr)PBlock19818);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19821 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19823 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19825 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19826 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19827 = new_Send((Optr)PSend19826, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19831 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19832 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19833 = new_Send((Optr)PSend19832, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19834 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19830 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19832, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19834, (Optr)&t_block_return);
    Block PBlock19829 = new_Block_with(empty_Array, empty_Array, PThreadedCode19830, 3, PSend19831, PSend19833, PSend19834);
    // ifFalse:. 
    Send PSend19828 = new_Send((Optr)PSend19827, SMB_ifFalse_, 1, (Optr)PBlock19829);
    Array PThreadedCode19824 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19825, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19826, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19827, (Optr)&t_send_ifFalse_, (Optr)PSend19828, (Optr)PBlock19829, (Optr)&t_method_return);
    Block PBlock19822 = new_Block_with(PArray19823, empty_Array, PThreadedCode19824, 2, PSend19825, PSend19828);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19835 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19821, (Optr)PBlock19822);
    Array PThreadedCode19809 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19810, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19811, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19812, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19814, (Optr)&t_send0, (Optr)PSend19813, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19815, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19816, (Optr)&t_send_ifFalse_, (Optr)PSend19817, (Optr)PBlock19818, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19821, (Optr)&t_push_closure, (Optr)PBlock19822, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19835, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19807 = new_Block_with(PArray19808, empty_Array, PThreadedCode19809, 5, PAssign19810, PAssign19812, PSend19817, PSend19835, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19836 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19807);
    Array PThreadedCode19806 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19807, (Optr)&t_send1, (Optr)PSend19836, (Optr)&t_method_return);
    Method PMethod19803 = new_Method_with(PArray19804, PArray19805, empty_Array, PThreadedCode19806, 1, PSend19836);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19803, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19838 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19839 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19842 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19845 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19844 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19845);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19846 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19847 = new_Send((Optr)PSend19846, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19851 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19850 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19851, (Optr)&t_block_return);
    Block PBlock19849 = new_Block_with(empty_Array, empty_Array, PThreadedCode19850, 1, PSend19851);
    // ifFalse:. 
    Send PSend19848 = new_Send((Optr)PSend19847, SMB_ifFalse_, 1, (Optr)PBlock19849);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19852 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19854 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19856 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19857 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19858 = new_Send((Optr)PSend19857, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19862 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19863 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19861 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19863, (Optr)&t_block_return);
    Block PBlock19860 = new_Block_with(empty_Array, empty_Array, PThreadedCode19861, 2, PSend19862, PSend19863);
    // ifFalse:. 
    Send PSend19859 = new_Send((Optr)PSend19858, SMB_ifFalse_, 1, (Optr)PBlock19860);
    Array PThreadedCode19855 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19856, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19857, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19858, (Optr)&t_send_ifFalse_, (Optr)PSend19859, (Optr)PBlock19860, (Optr)&t_method_return);
    Block PBlock19853 = new_Block_with(PArray19854, empty_Array, PThreadedCode19855, 2, PSend19856, PSend19859);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19864 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19852, (Optr)PBlock19853);
    Array PThreadedCode19843 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19844, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19845, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19846, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19847, (Optr)&t_send_ifFalse_, (Optr)PSend19848, (Optr)PBlock19849, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19852, (Optr)&t_push_closure, (Optr)PBlock19853, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19864, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19841 = new_Block_with(PArray19842, empty_Array, PThreadedCode19843, 4, PAssign19844, PSend19848, PSend19864, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19865 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19841);
    Array PThreadedCode19840 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19841, (Optr)&t_send1, (Optr)PSend19865, (Optr)&t_method_return);
    Method PMethod19837 = new_Method_with(PArray19838, PArray19839, empty_Array, PThreadedCode19840, 1, PSend19865);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19837, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGSequenceExpression_layout() {
    layout_PEG_SequenceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SequenceExpression = new_Symbol(L"SequenceExpression");
    slot_PEG_SequenceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_SequenceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_SequenceExpression)->values[0] = slot_PEG_SequenceExpression_children; // children 
    PEG_SequenceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_SequenceExpression_Class_class);
    PEG_SequenceExpression_Class->layout = layout_PEG_SequenceExpression;
    PEG_SequenceExpression_Class->name = SMB_SequenceExpression;
    
}

void init_PEG_PEGSequenceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB__lt__and_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}