#include <lib/class/PEG/Stack.h>


Optr layout_PEG_Stack_Class_class;
Optr slot_PEG_Stack_array;
Optr slot_PEG_Stack_size;
Optr slot_PEG_Stack_position;
Optr slot_PEG_Stack_mark;
Optr layout_PEG_Stack;


static void init_SMB_grow_() {
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    Variable VAR_addition_0_0 = new_Variable_named(L"addition", 0);
    Array PArray19669 = new_Array_with(1, (Optr)VAR_addition_0_0);
    Variable VAR_newArray_0_1 = new_Variable_named(L"newArray", 0);
    Array PArray19670 = new_Array_with(1, (Optr)VAR_newArray_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend19675 = new_Send((Optr)slot_PEG_Stack_size, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19676 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_addition_0_0);
    // max:. 
    Send PSend19674 = new_Send((Optr)PSend19675, SMB_max_, 1, (Optr)PSend19676);
    // new:. 
    Send PSend19673 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19674);
    Assign PAssign19672 = new_Assign((Optr)VAR_newArray_0_1, (Optr)PSend19673);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend19677 = new_Send((Optr)VAR_newArray_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)slot_PEG_Stack_size, (Optr)slot_PEG_Stack_array, (Optr)int_1_Const);
    Assign PAssign19678 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)VAR_newArray_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19680 = new_Send((Optr)VAR_newArray_0_1, SMB_size, 0);
    Assign PAssign19679 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)PSend19680);
    Array PThreadedCode19671 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign19672, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend19675, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_addition_0_0, (Optr)&t_send1, (Optr)PSend19676, (Optr)&t_send1, (Optr)PSend19674, (Optr)&t_send1, (Optr)PSend19673, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend19677, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19678, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19679, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_send0, (Optr)PSend19680, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19668 = new_Method_with(PArray19669, PArray19670, empty_Array, PThreadedCode19671, 5, PAssign19672, PSend19677, PAssign19678, PAssign19679, self);
    
    MethodClosure MC_SMB_grow_ = new_MethodClosure((Method)PMethod19668, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_grow_, MC_SMB_grow_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend19683 = new_Send((Optr)slot_PEG_Stack_position, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_stackUnderflow = new_Symbol(L"stackUnderflow");
    // stackUnderflow. 
    Send PSend19687 = new_Send((Optr)self, SMB_stackUnderflow, 0);
    Array PThreadedCode19686 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19687, (Optr)&t_block_return);
    Block PBlock19685 = new_Block_with(empty_Array, empty_Array, PThreadedCode19686, 1, PSend19687);
    // ifFalse:. 
    Send PSend19684 = new_Send((Optr)PSend19683, SMB_ifFalse_, 1, (Optr)PBlock19685);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19688 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode19682 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19683, (Optr)&t_send_ifFalse_, (Optr)PSend19684, (Optr)PBlock19685, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend19688, (Optr)&t_method_return);
    Method PMethod19681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19682, 2, PSend19684, PSend19688);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod19681, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_poke_() {
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    Variable VAR_object_0_0 = new_Variable_named(L"object", 0);
    Array PArray19690 = new_Array_with(1, (Optr)VAR_object_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19692 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_object_0_0);
    Array PThreadedCode19691 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_object_0_0, (Optr)&t_send2, (Optr)PSend19692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19689 = new_Method_with(PArray19690, empty_Array, empty_Array, PThreadedCode19691, 2, PSend19692, self);
    
    MethodClosure MC_SMB_poke_ = new_MethodClosure((Method)PMethod19689, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_poke_, MC_SMB_poke_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19695 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19696 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19695);
    Array PThreadedCode19694 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19695, (Optr)&t_send1, (Optr)PSend19696, (Optr)&t_method_return);
    Method PMethod19693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19694, 1, PSend19696);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod19693, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_zap() {
    Symbol SMB_zap = new_Symbol(L"zap");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19700 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19699 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend19700);
    Array PThreadedCode19698 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19699, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19700, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19697 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19698, 2, PAssign19699, self);
    
    MethodClosure MC_SMB_zap = new_MethodClosure((Method)PMethod19697, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_zap, MC_SMB_zap);
}


static void init_SMB_mark_() {
    Symbol SMB_mark_ = new_Symbol(L"mark:");
    Variable VAR_m_0_0 = new_Variable_named(L"m", 0);
    Array PArray19702 = new_Array_with(1, (Optr)VAR_m_0_0);
    Assign PAssign19704 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)VAR_m_0_0);
    Array PThreadedCode19703 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19704, (Optr)&t_push_variable, (Optr)VAR_m_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19701 = new_Method_with(PArray19702, empty_Array, empty_Array, PThreadedCode19703, 2, PAssign19704, self);
    
    MethodClosure MC_SMB_mark_ = new_MethodClosure((Method)PMethod19701, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_mark_, MC_SMB_mark_);
}


static void init_SMB_asOrderedCollection() {
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    Variable VAR_collection_0_0 = new_Variable_named(L"collection", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19706 = new_Array_with(2, (Optr)VAR_collection_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19709 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign19708 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19709);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19711 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19710 = new_Assign((Optr)VAR_collection_0_0, (Optr)PSend19711);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19713 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19715 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19716 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19715);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19717 = new_Send((Optr)VAR_collection_0_0, SMB_add_, 1, (Optr)PSend19716);
    Array PThreadedCode19714 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19715, (Optr)&t_send1, (Optr)PSend19716, (Optr)&t_send1, (Optr)PSend19717, (Optr)&t_method_return);
    Block PBlock19712 = new_Block_with(PArray19713, empty_Array, PThreadedCode19714, 1, PSend19717);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19718 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock19712);
    Array PThreadedCode19707 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign19708, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19709, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19710, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19711, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock19712, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19718, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_method_return);
    Method PMethod19705 = new_Method_with(empty_Array, PArray19706, empty_Array, PThreadedCode19707, 4, PAssign19708, PAssign19710, PSend19718, VAR_collection_0_0);
    
    MethodClosure MC_SMB_asOrderedCollection = new_MethodClosure((Method)PMethod19705, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asOrderedCollection, MC_SMB_asOrderedCollection);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_128 = new_SmallInt(128);
    Constant int_128_Const = new_Constant((Optr)int_128);
    Assign PAssign19721 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)int_128_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19723 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_PEG_Stack_size);
    Assign PAssign19722 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)PSend19723);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign19724 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)int_0_Const);
    Array PThreadedCode19720 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign19721, (Optr)&t_push1, (Optr)int_128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19722, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_send1, (Optr)PSend19723, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19724, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19720, 4, PAssign19721, PAssign19722, PAssign19724, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19719, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray19726 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19728 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:. 
    Send PSend19729 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19728);
    Array PThreadedCode19727 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend19728, (Optr)&t_send1, (Optr)PSend19729, (Optr)&t_method_return);
    Method PMethod19725 = new_Method_with(PArray19726, empty_Array, empty_Array, PThreadedCode19727, 1, PSend19729);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod19725, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_pop() {
    Symbol SMB_pop = new_Symbol(L"pop");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray19731 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19734 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Assign PAssign19733 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19734);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19736 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19735 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend19736);
    Array PThreadedCode19732 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign19733, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend19734, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19735, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19736, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19730 = new_Method_with(empty_Array, PArray19731, empty_Array, PThreadedCode19732, 3, PAssign19733, PAssign19735, VAR_result_0_0);
    
    MethodClosure MC_SMB_pop = new_MethodClosure((Method)PMethod19730, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_pop, MC_SMB_pop);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray19738 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19740 = new_Send((Optr)self, SMB_push_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode19739 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend19740, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19737 = new_Method_with(PArray19738, empty_Array, empty_Array, PThreadedCode19739, 2, PSend19740, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod19737, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_push_() {
    Symbol SMB_push_ = new_Symbol(L"push:");
    Variable VAR_o_0_0 = new_Variable_named(L"o", 0);
    Array PArray19742 = new_Array_with(1, (Optr)VAR_o_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19745 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19744 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend19745);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend19746 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PAssign19744);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend19750 = new_Send((Optr)self, SMB_grow_, 1, (Optr)int_1_Const);
    Array PThreadedCode19749 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19750, (Optr)&t_block_return);
    Block PBlock19748 = new_Block_with(empty_Array, empty_Array, PThreadedCode19749, 1, PSend19750);
    // ifTrue:. 
    Send PSend19747 = new_Send((Optr)PSend19746, SMB_ifTrue_, 1, (Optr)PBlock19748);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19751 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_o_0_0);
    Array PThreadedCode19743 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push1, (Optr)PAssign19744, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19745, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend19746, (Optr)&t_send_ifTrue_, (Optr)PSend19747, (Optr)PBlock19748, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_o_0_0, (Optr)&t_send2, (Optr)PSend19751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19741 = new_Method_with(PArray19742, empty_Array, empty_Array, PThreadedCode19743, 3, PSend19747, PSend19751, self);
    
    MethodClosure MC_SMB_push_ = new_MethodClosure((Method)PMethod19741, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_push_, MC_SMB_push_);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend19754 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_2_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19755 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19754);
    Array PThreadedCode19753 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend19754, (Optr)&t_send1, (Optr)PSend19755, (Optr)&t_method_return);
    Method PMethod19752 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19753, 1, PSend19755);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod19752, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_zapTo_() {
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray19757 = new_Array_with(1, (Optr)VAR_index_0_0);
    Assign PAssign19759 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)VAR_index_0_0);
    Array PThreadedCode19758 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19759, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19756 = new_Method_with(PArray19757, empty_Array, empty_Array, PThreadedCode19758, 2, PAssign19759, self);
    
    MethodClosure MC_SMB_zapTo_ = new_MethodClosure((Method)PMethod19756, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_zapTo_, MC_SMB_zapTo_);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19762 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode19761 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend19762, (Optr)&t_method_return);
    Method PMethod19760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19761, 1, PSend19762);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod19760, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19764 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19767 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign19766 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19767);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19769 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19768 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend19769);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19771 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19773 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19774 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19773);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19775 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend19774);
    Array PThreadedCode19772 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19773, (Optr)&t_send1, (Optr)PSend19774, (Optr)&t_send2, (Optr)PSend19775, (Optr)&t_method_return);
    Block PBlock19770 = new_Block_with(PArray19771, empty_Array, PThreadedCode19772, 1, PSend19775);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19776 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock19770);
    Array PThreadedCode19765 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign19766, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19767, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19768, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19769, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock19770, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19776, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod19763 = new_Method_with(empty_Array, PArray19764, empty_Array, PThreadedCode19765, 4, PAssign19766, PAssign19768, PSend19776, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod19763, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19779 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode19778 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19779, (Optr)&t_method_return);
    Method PMethod19777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19778, 1, PSend19779);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod19777, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19781 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19784 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign19783 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19784);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19786 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19785 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend19786);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19788 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19790 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19791 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19790);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19792 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend19791);
    Array PThreadedCode19789 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19790, (Optr)&t_send1, (Optr)PSend19791, (Optr)&t_send2, (Optr)PSend19792, (Optr)&t_method_return);
    Block PBlock19787 = new_Block_with(PArray19788, empty_Array, PThreadedCode19789, 1, PSend19792);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19793 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock19787);
    Array PThreadedCode19782 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign19783, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19784, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19785, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19786, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock19787, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod19780 = new_Method_with(empty_Array, PArray19781, empty_Array, PThreadedCode19782, 4, PAssign19783, PAssign19785, PSend19793, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod19780, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19796 = new_Send((Optr)slot_PEG_Stack_position, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode19795 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19796, (Optr)&t_method_return);
    Method PMethod19794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19795, 1, PSend19796);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod19794, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19800 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19799 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)PSend19800);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19801 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode19798 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19799, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19800, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19801, (Optr)&t_method_return);
    Method PMethod19797 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19798, 2, PAssign19799, PSend19801);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod19797, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend19804 = new_Send((Optr)self, SMB_asString, 0);
    // asSymbol. 
    Send PSend19805 = new_Send((Optr)PSend19804, SMB_asSymbol, 0);
    Array PThreadedCode19803 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19804, (Optr)&t_send0, (Optr)PSend19805, (Optr)&t_method_return);
    Method PMethod19802 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19803, 1, PSend19805);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod19802, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray19807 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19809 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:put:. 
    Send PSend19810 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend19809, (Optr)VAR_value_0_1);
    Array PThreadedCode19808 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend19809, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend19810, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19806 = new_Method_with(PArray19807, empty_Array, empty_Array, PThreadedCode19808, 2, PSend19810, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod19806, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray19812 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray19813 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19817 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend19816 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19817);
    Assign PAssign19815 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend19816);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19818 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19820 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19822 = new_Send((Optr)VAR_i_1_0, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19823 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19824 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend19823);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19825 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)PSend19822, (Optr)PSend19824);
    Array PThreadedCode19821 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19822, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19823, (Optr)&t_send1, (Optr)PSend19824, (Optr)&t_send2, (Optr)PSend19825, (Optr)&t_method_return);
    Block PBlock19819 = new_Block_with(PArray19820, empty_Array, PThreadedCode19821, 1, PSend19825);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19826 = new_Send((Optr)PSend19818, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock19819);
    Array PThreadedCode19814 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign19815, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19817, (Optr)&t_send1, (Optr)PSend19816, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19818, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock19819, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19826, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod19811 = new_Method_with(PArray19812, PArray19813, empty_Array, PThreadedCode19814, 3, PAssign19815, PSend19826, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod19811, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray19828 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19830 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19832 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19834 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19835 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend19834);
    Array PThreadedCode19833 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19834, (Optr)&t_send1, (Optr)PSend19835, (Optr)&t_method_return);
    Block PBlock19831 = new_Block_with(PArray19832, empty_Array, PThreadedCode19833, 1, PSend19835);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19836 = new_Send((Optr)PSend19830, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock19831);
    Array PThreadedCode19829 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19830, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock19831, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19836, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19827 = new_Method_with(PArray19828, empty_Array, empty_Array, PThreadedCode19829, 2, PSend19836, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod19827, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray19838 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray19839 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign19841 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray19843 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend19846 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign19845 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend19846);
    Array PThreadedCode19844 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign19845, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend19846, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock19842 = new_Block_with(PArray19843, empty_Array, PThreadedCode19844, 1, PAssign19845);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19847 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock19842);
    Array PThreadedCode19840 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19841, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock19842, (Optr)&t_send1, (Optr)PSend19847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod19837 = new_Method_with(PArray19838, PArray19839, empty_Array, PThreadedCode19840, 3, PAssign19841, PSend19847, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod19837, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode19849 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_method_return);
    Method PMethod19848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19849, 1, slot_PEG_Stack_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod19848, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend19852 = new_Send((Optr)self, SMB_pop, 0);
    Array PThreadedCode19851 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19852, (Optr)&t_method_return);
    Method PMethod19850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19851, 1, PSend19852);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod19850, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_push_from_to_() {
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    Variable VAR_collection_0_0 = new_Variable_named(L"collection", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_end_0_2 = new_Variable_named(L"end", 0);
    Array PArray19854 = new_Array_with(3, (Optr)VAR_collection_0_0, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR_amount_0_3 = new_Variable_named(L"amount", 0);
    Array PArray19855 = new_Array_with(1, (Optr)VAR_amount_0_3);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19858 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)VAR_start_0_1);
    Assign PAssign19857 = new_Assign((Optr)VAR_amount_0_3, (Optr)PSend19858);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19859 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend19860 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PSend19859);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend19864 = new_Send((Optr)self, SMB_grow_, 1, (Optr)VAR_amount_0_3);
    Array PThreadedCode19863 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend19864, (Optr)&t_block_return);
    Block PBlock19862 = new_Block_with(empty_Array, empty_Array, PThreadedCode19863, 1, PSend19864);
    // ifTrue:. 
    Send PSend19861 = new_Send((Optr)PSend19860, SMB_ifTrue_, 1, (Optr)PBlock19862);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19866 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19868 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19869 = new_Send((Optr)VAR_start_0_1, SMB__plus_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19870 = new_Send((Optr)VAR_collection_0_0, SMB_at_, 1, (Optr)PSend19869);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19871 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend19868, (Optr)PSend19870);
    Array PThreadedCode19867 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19868, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19869, (Optr)&t_send1, (Optr)PSend19870, (Optr)&t_send2, (Optr)PSend19871, (Optr)&t_method_return);
    Block PBlock19865 = new_Block_with(PArray19866, empty_Array, PThreadedCode19867, 1, PSend19871);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19872 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_amount_0_3, (Optr)PBlock19865);
    // +. 
    Send PSend19874 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Assign PAssign19873 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend19874);
    Array PThreadedCode19856 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19857, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_send1, (Optr)PSend19858, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend19859, (Optr)&t_send1, (Optr)PSend19860, (Optr)&t_send_ifTrue_, (Optr)PSend19861, (Optr)PBlock19862, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_push_closure, (Optr)PBlock19865, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19872, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19873, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend19874, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19853 = new_Method_with(PArray19854, PArray19855, empty_Array, PThreadedCode19856, 5, PAssign19857, PSend19861, PSend19872, PAssign19873, self);
    
    MethodClosure MC_SMB_push_from_to_ = new_MethodClosure((Method)PMethod19853, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_push_from_to_, MC_SMB_push_from_to_);
}

void init_PEG_PEGStack_layout() {
    layout_PEG_Stack_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Stack_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Stack_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Stack_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Stack_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Stack_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Stack = new_Symbol(L"Stack");
    slot_PEG_Stack_array = (Optr)new_Slot(0, L"array");
    slot_PEG_Stack_size = (Optr)new_Slot(1, L"size");
    slot_PEG_Stack_position = (Optr)new_Slot(2, L"position");
    slot_PEG_Stack_mark = (Optr)new_Slot(3, L"mark");
    layout_PEG_Stack = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_PEG_Stack)->values[0] = slot_PEG_Stack_array; // array 
    ((Array)layout_PEG_Stack)->values[1] = slot_PEG_Stack_size; // size 
    ((Array)layout_PEG_Stack)->values[2] = slot_PEG_Stack_position; // position 
    ((Array)layout_PEG_Stack)->values[3] = slot_PEG_Stack_mark; // mark 
    PEG_Stack_Class = (Class)new_Class(Object_Class, layout_PEG_Stack_Class_class);
    PEG_Stack_Class->layout = layout_PEG_Stack;
    PEG_Stack_Class->name = SMB_Stack;
    
}

void init_PEG_PEGStack_methods() {
    init_SMB_grow_();
    init_SMB_last();
    init_SMB_poke_();
    init_SMB_first();
    init_SMB_zap();
    init_SMB_mark_();
    init_SMB_asOrderedCollection();
    init_SMB_initialize();
    init_SMB_at_();
    init_SMB_pop();
    init_SMB_add_();
    init_SMB_push_();
    init_SMB_second();
    init_SMB_zapTo_();
    init_SMB_peek();
    init_SMB_asString();
    init_SMB_size();
    init_SMB_asArray();
    init_SMB_isEmpty();
    init_SMB_removeFirst();
    init_SMB_asSymbol();
    init_SMB_at_put_();
    init_SMB_collect_();
    init_SMB_do_();
    init_SMB_inject_into_();
    init_SMB_position();
    init_SMB_removeLast();
    init_SMB_push_from_to_();
    
}