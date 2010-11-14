#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19642 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19642, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19641, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19646 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19645 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19646);
    Array PThreadedCode19644 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19645, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19646, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19643 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19644, 2, PAssign19645, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19643, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19650 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19649 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19650);
    Array PThreadedCode19648 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19649, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19647 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19648, 2, PAssign19649, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19647, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19652 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19653 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19656 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19655 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19656);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19657 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19658 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19659 = new_Send((Optr)PSend19657, SMB__equals_, 1, (Optr)PSend19658);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19663 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19665 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19667 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19668 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19667);
    Array PThreadedCode19666 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19667, (Optr)&t_send1, (Optr)PSend19668, (Optr)&t_method_return);
    Block PBlock19664 = new_Block_with(PArray19665, empty_Array, PThreadedCode19666, 1, PSend19668);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19669 = new_Send((Optr)PSend19663, SMB_do_, 1, (Optr)PBlock19664);
    Array PThreadedCode19662 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19663, (Optr)&t_push_closure, (Optr)PBlock19664, (Optr)&t_send1, (Optr)PSend19669, (Optr)&t_block_return);
    Block PBlock19661 = new_Block_with(empty_Array, empty_Array, PThreadedCode19662, 1, PSend19669);
    // asChildParser. 
    Send PSend19672 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19673 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19672);
    Array PThreadedCode19671 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19672, (Optr)&t_send1, (Optr)PSend19673, (Optr)&t_block_return);
    Block PBlock19670 = new_Block_with(empty_Array, empty_Array, PThreadedCode19671, 1, PSend19673);
    // ifTrue:ifFalse:. 
    Send PSend19660 = new_Send((Optr)PSend19659, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19661, (Optr)PBlock19670);
    Array PThreadedCode19654 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19655, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19656, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19657, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19658, (Optr)&t_send1, (Optr)PSend19659, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19660, (Optr)PBlock19661, (Optr)PBlock19670, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19651 = new_Method_with(PArray19652, PArray19653, empty_Array, PThreadedCode19654, 3, PAssign19655, PSend19660, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19651, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19675 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19676 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19679 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19682 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19681 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19682);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19685 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19684 = new_Send((Optr)PSend19685, SMB_position, 0);
    Assign PAssign19683 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19684);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19686 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19687 = new_Send((Optr)PSend19686, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19691 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19690 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19691, (Optr)&t_block_return);
    Block PBlock19689 = new_Block_with(empty_Array, empty_Array, PThreadedCode19690, 1, PSend19691);
    // ifFalse:. 
    Send PSend19688 = new_Send((Optr)PSend19687, SMB_ifFalse_, 1, (Optr)PBlock19689);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19692 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19694 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19696 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19697 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19698 = new_Send((Optr)PSend19697, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19702 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19703 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19704 = new_Send((Optr)PSend19703, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19705 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19701 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19703, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19704, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19705, (Optr)&t_block_return);
    Block PBlock19700 = new_Block_with(empty_Array, empty_Array, PThreadedCode19701, 3, PSend19702, PSend19704, PSend19705);
    // ifFalse:. 
    Send PSend19699 = new_Send((Optr)PSend19698, SMB_ifFalse_, 1, (Optr)PBlock19700);
    Array PThreadedCode19695 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19696, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19697, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19698, (Optr)&t_send_ifFalse_, (Optr)PSend19699, (Optr)PBlock19700, (Optr)&t_method_return);
    Block PBlock19693 = new_Block_with(PArray19694, empty_Array, PThreadedCode19695, 2, PSend19696, PSend19699);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19706 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19692, (Optr)PBlock19693);
    Array PThreadedCode19680 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19681, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19682, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19683, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19685, (Optr)&t_send0, (Optr)PSend19684, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19686, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19687, (Optr)&t_send_ifFalse_, (Optr)PSend19688, (Optr)PBlock19689, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19692, (Optr)&t_push_closure, (Optr)PBlock19693, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19706, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19678 = new_Block_with(PArray19679, empty_Array, PThreadedCode19680, 5, PAssign19681, PAssign19683, PSend19688, PSend19706, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19707 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19678);
    Array PThreadedCode19677 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19678, (Optr)&t_send1, (Optr)PSend19707, (Optr)&t_method_return);
    Method PMethod19674 = new_Method_with(PArray19675, PArray19676, empty_Array, PThreadedCode19677, 1, PSend19707);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19674, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19709 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19710 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19713 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19716 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19715 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19716);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19717 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19718 = new_Send((Optr)PSend19717, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19722 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19721 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19722, (Optr)&t_block_return);
    Block PBlock19720 = new_Block_with(empty_Array, empty_Array, PThreadedCode19721, 1, PSend19722);
    // ifFalse:. 
    Send PSend19719 = new_Send((Optr)PSend19718, SMB_ifFalse_, 1, (Optr)PBlock19720);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19723 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19725 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19727 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19728 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19729 = new_Send((Optr)PSend19728, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19733 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19734 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19732 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19734, (Optr)&t_block_return);
    Block PBlock19731 = new_Block_with(empty_Array, empty_Array, PThreadedCode19732, 2, PSend19733, PSend19734);
    // ifFalse:. 
    Send PSend19730 = new_Send((Optr)PSend19729, SMB_ifFalse_, 1, (Optr)PBlock19731);
    Array PThreadedCode19726 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19727, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19728, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19729, (Optr)&t_send_ifFalse_, (Optr)PSend19730, (Optr)PBlock19731, (Optr)&t_method_return);
    Block PBlock19724 = new_Block_with(PArray19725, empty_Array, PThreadedCode19726, 2, PSend19727, PSend19730);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19735 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19723, (Optr)PBlock19724);
    Array PThreadedCode19714 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19715, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19716, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19717, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19718, (Optr)&t_send_ifFalse_, (Optr)PSend19719, (Optr)PBlock19720, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19723, (Optr)&t_push_closure, (Optr)PBlock19724, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19735, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19712 = new_Block_with(PArray19713, empty_Array, PThreadedCode19714, 4, PAssign19715, PSend19719, PSend19735, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19736 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19712);
    Array PThreadedCode19711 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19712, (Optr)&t_send1, (Optr)PSend19736, (Optr)&t_method_return);
    Method PMethod19708 = new_Method_with(PArray19709, PArray19710, empty_Array, PThreadedCode19711, 1, PSend19736);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19708, PEG_SequenceExpression_Class);
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