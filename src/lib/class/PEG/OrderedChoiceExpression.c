#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19626 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19626, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19625, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19630 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19629 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19630);
    Array PThreadedCode19628 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19629, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19630, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19628, 2, PAssign19629, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19627, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19634 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19633 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19634);
    Array PThreadedCode19632 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19633, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19634, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19632, 2, PAssign19633, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19631, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19636 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19639 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19641 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19643 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19645 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19646 = new_Send((Optr)PSend19645, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19650 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19649 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19650, (Optr)&t_block_return);
    Block PBlock19648 = new_Block_with(empty_Array, empty_Array, PThreadedCode19649, 1, PSend19650);
    // ifTrue:. 
    Send PSend19647 = new_Send((Optr)PSend19646, SMB_ifTrue_, 1, (Optr)PBlock19648);
    Array PThreadedCode19644 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19645, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19646, (Optr)&t_send_ifTrue_, (Optr)PSend19647, (Optr)PBlock19648, (Optr)&t_method_return);
    Block PBlock19642 = new_Block_with(PArray19643, empty_Array, PThreadedCode19644, 1, PSend19647);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19651 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19641, (Optr)PBlock19642);
    Array PThreadedCode19640 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19641, (Optr)&t_push_closure, (Optr)PBlock19642, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19651, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19638 = new_Block_with(PArray19639, empty_Array, PThreadedCode19640, 2, PSend19651, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19652 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19638);
    Array PThreadedCode19637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19638, (Optr)&t_send1, (Optr)PSend19652, (Optr)&t_method_return);
    Method PMethod19635 = new_Method_with(PArray19636, empty_Array, empty_Array, PThreadedCode19637, 1, PSend19652);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19635, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19654 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19657 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19659 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19661 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19663 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19664 = new_Send((Optr)PSend19663, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19668 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19667 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19668, (Optr)&t_block_return);
    Block PBlock19666 = new_Block_with(empty_Array, empty_Array, PThreadedCode19667, 1, PSend19668);
    // ifTrue:. 
    Send PSend19665 = new_Send((Optr)PSend19664, SMB_ifTrue_, 1, (Optr)PBlock19666);
    Array PThreadedCode19662 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19663, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19664, (Optr)&t_send_ifTrue_, (Optr)PSend19665, (Optr)PBlock19666, (Optr)&t_method_return);
    Block PBlock19660 = new_Block_with(PArray19661, empty_Array, PThreadedCode19662, 1, PSend19665);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19669 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19659, (Optr)PBlock19660);
    Array PThreadedCode19658 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19659, (Optr)&t_push_closure, (Optr)PBlock19660, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19669, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19656 = new_Block_with(PArray19657, empty_Array, PThreadedCode19658, 2, PSend19669, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19670 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19656);
    Array PThreadedCode19655 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19656, (Optr)&t_send1, (Optr)PSend19670, (Optr)&t_method_return);
    Method PMethod19653 = new_Method_with(PArray19654, empty_Array, empty_Array, PThreadedCode19655, 1, PSend19670);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19653, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19672 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19673 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19675 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19680 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19679 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19680);
    Assign PAssign19681 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19678 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19679, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19680, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19681, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19677 = new_Block_with(empty_Array, empty_Array, PThreadedCode19678, 2, PAssign19679, PAssign19681);
    // ifTrue:. 
    Send PSend19676 = new_Send((Optr)PSend19675, SMB_ifTrue_, 1, (Optr)PBlock19677);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19683 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19682 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19683);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19684 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19685 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19686 = new_Send((Optr)PSend19684, SMB__equals_, 1, (Optr)PSend19685);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19690 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19692 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19694 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19695 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19694);
    Array PThreadedCode19693 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19694, (Optr)&t_send1, (Optr)PSend19695, (Optr)&t_method_return);
    Block PBlock19691 = new_Block_with(PArray19692, empty_Array, PThreadedCode19693, 1, PSend19695);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19696 = new_Send((Optr)PSend19690, SMB_do_, 1, (Optr)PBlock19691);
    Array PThreadedCode19689 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19690, (Optr)&t_push_closure, (Optr)PBlock19691, (Optr)&t_send1, (Optr)PSend19696, (Optr)&t_block_return);
    Block PBlock19688 = new_Block_with(empty_Array, empty_Array, PThreadedCode19689, 1, PSend19696);
    // asChildParser. 
    Send PSend19699 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19700 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19699);
    Array PThreadedCode19698 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19699, (Optr)&t_send1, (Optr)PSend19700, (Optr)&t_block_return);
    Block PBlock19697 = new_Block_with(empty_Array, empty_Array, PThreadedCode19698, 1, PSend19700);
    // ifTrue:ifFalse:. 
    Send PSend19687 = new_Send((Optr)PSend19686, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19688, (Optr)PBlock19697);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19701 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19706 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19705 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19706);
    Array PThreadedCode19704 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19705, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19706, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19703 = new_Block_with(empty_Array, empty_Array, PThreadedCode19704, 1, PAssign19705);
    // ifFalse:. 
    Send PSend19702 = new_Send((Optr)PSend19701, SMB_ifFalse_, 1, (Optr)PBlock19703);
    Array PThreadedCode19674 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19675, (Optr)&t_send_ifTrue_, (Optr)PSend19676, (Optr)PBlock19677, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19682, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19683, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19684, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19685, (Optr)&t_send1, (Optr)PSend19686, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19687, (Optr)PBlock19688, (Optr)PBlock19697, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19701, (Optr)&t_send_ifFalse_, (Optr)PSend19702, (Optr)PBlock19703, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19671 = new_Method_with(PArray19672, PArray19673, empty_Array, PThreadedCode19674, 5, PSend19676, PAssign19682, PSend19687, PSend19702, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19671, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}

void init_PEG_PEGOrderedChoiceExpression_layout() {
    layout_PEG_OrderedChoiceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OrderedChoiceExpression = new_Symbol(L"OrderedChoiceExpression");
    slot_PEG_OrderedChoiceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_OrderedChoiceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OrderedChoiceExpression)->values[0] = slot_PEG_OrderedChoiceExpression_children; // children 
    PEG_OrderedChoiceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_OrderedChoiceExpression_Class_class);
    PEG_OrderedChoiceExpression_Class->layout = layout_PEG_OrderedChoiceExpression;
    PEG_OrderedChoiceExpression_Class->name = SMB_OrderedChoiceExpression;
    
}

void init_PEG_PEGOrderedChoiceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB__lt__equals_();
    
}