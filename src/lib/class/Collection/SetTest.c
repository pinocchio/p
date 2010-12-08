#include <lib/class/Collection/SetTest.h>


Optr layout_Collection_SetTest_Class_class;
Optr slot_Collection_SetTest_s;
Optr layout_Collection_SetTest;


static void init_SMB_testAdd() {
    Symbol SMB_testAdd = new_Symbol(L"testAdd");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6704 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6706 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6707 = new_Send((Optr)PSend6706, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6708 = new_Send((Optr)PSend6707, SMB__equals_, 1, (Optr)int_0_Const);
    SmallInt int_333 = new_SmallInt(333);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6710 = new_Array_with(1, (Optr)VAR_index_1_0);
    Assign PAssign6712 = new_Assign((Optr)VAR_value_0_0, (Optr)VAR_index_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend6713 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)VAR_value_0_0);
    // size. 
    Send PSend6714 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6715 = new_Send((Optr)PSend6714, SMB_should, 0);
    // =. 
    Send PSend6716 = new_Send((Optr)PSend6715, SMB__equals_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend6717 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // should. 
    Send PSend6718 = new_Send((Optr)PSend6717, SMB_should, 0);
    // =. 
    Send PSend6719 = new_Send((Optr)PSend6718, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6711 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign6712, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6713, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6714, (Optr)&t_send0, (Optr)PSend6715, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6716, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6717, (Optr)&t_send0, (Optr)PSend6718, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6719, (Optr)&t_method_return);
    Block PBlock6709 = new_Block_with(PArray6710, empty_Array, PThreadedCode6711, 4, PAssign6712, PSend6713, PSend6716, PSend6719);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    Constant int_333_Const = new_Constant((Optr)int_333);
    // to:do:. 
    Send PSend6720 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_333_Const, (Optr)PBlock6709);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // add:. 
    Send PSend6721 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)int_200_Const);
    // size. 
    Send PSend6722 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6723 = new_Send((Optr)PSend6722, SMB_should, 0);
    // =. 
    Send PSend6724 = new_Send((Optr)PSend6723, SMB__equals_, 1, (Optr)int_333_Const);
    Array PArray6726 = new_Array_with(1, (Optr)VAR_index_1_0);
    Assign PAssign6728 = new_Assign((Optr)VAR_value_0_0, (Optr)VAR_index_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend6729 = new_Send((Optr)slot_Collection_SetTest_s, SMB_remove_, 1, (Optr)VAR_value_0_0);
    // size. 
    Send PSend6730 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6731 = new_Send((Optr)PSend6730, SMB_should, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6732 = new_Send((Optr)int_333_Const, SMB__minus_, 1, (Optr)VAR_index_1_0);
    // =. 
    Send PSend6733 = new_Send((Optr)PSend6731, SMB__equals_, 1, (Optr)PSend6732);
    // includes:. 
    Send PSend6734 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // should. 
    Send PSend6735 = new_Send((Optr)PSend6734, SMB_should, 0);
    // =. 
    Send PSend6736 = new_Send((Optr)PSend6735, SMB__equals_, 1, (Optr)false_Const);
    Array PThreadedCode6727 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign6728, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6729, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6730, (Optr)&t_send0, (Optr)PSend6731, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6732, (Optr)&t_send1, (Optr)PSend6733, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6734, (Optr)&t_send0, (Optr)PSend6735, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6736, (Optr)&t_method_return);
    Block PBlock6725 = new_Block_with(PArray6726, empty_Array, PThreadedCode6727, 4, PAssign6728, PSend6729, PSend6733, PSend6736);
    // to:do:. 
    Send PSend6737 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_333_Const, (Optr)PBlock6725);
    // size. 
    Send PSend6738 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6739 = new_Send((Optr)PSend6738, SMB_should, 0);
    // =. 
    Send PSend6740 = new_Send((Optr)PSend6739, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode6705 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6706, (Optr)&t_send0, (Optr)PSend6707, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6708, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_closure, (Optr)PBlock6709, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6720, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend6721, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6722, (Optr)&t_send0, (Optr)PSend6723, (Optr)&t_push1, (Optr)int_333, (Optr)&t_send1, (Optr)PSend6724, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_closure, (Optr)PBlock6725, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6737, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6738, (Optr)&t_send0, (Optr)PSend6739, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6740, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6703 = new_Method_with(empty_Array, PArray6704, empty_Array, PThreadedCode6705, 7, PSend6708, PSend6720, PSend6721, PSend6724, PSend6737, PSend6740, self);
    
    MethodClosure MC_SMB_testAdd = new_MethodClosure((Method)PMethod6703, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testAdd, MC_SMB_testAdd);
}


static void init_SMB_testIsEmpty() {
    Symbol SMB_testIsEmpty = new_Symbol(L"testIsEmpty");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend6743 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6744 = new_Send((Optr)PSend6743, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6745 = new_Send((Optr)PSend6744, SMB__equals_, 1, (Optr)true_Const);
    Symbol  SMB_val = new_Symbol(L"val");
    Symbol SMB_add_ = new_Symbol(L"add:");
    Constant SMB_val_Const = new_Constant((Optr)SMB_val);
    // add:. 
    Send PSend6746 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)SMB_val_Const);
    // isEmpty. 
    Send PSend6747 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    // should. 
    Send PSend6748 = new_Send((Optr)PSend6747, SMB_should, 0);
    // =. 
    Send PSend6749 = new_Send((Optr)PSend6748, SMB__equals_, 1, (Optr)false_Const);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend6750 = new_Send((Optr)slot_Collection_SetTest_s, SMB_remove_, 1, (Optr)SMB_val_Const);
    // isEmpty. 
    Send PSend6751 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    // should. 
    Send PSend6752 = new_Send((Optr)PSend6751, SMB_should, 0);
    // =. 
    Send PSend6753 = new_Send((Optr)PSend6752, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6742 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6743, (Optr)&t_send0, (Optr)PSend6744, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6745, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_val, (Optr)&t_send1, (Optr)PSend6746, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6747, (Optr)&t_send0, (Optr)PSend6748, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6749, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_val, (Optr)&t_send1, (Optr)PSend6750, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6751, (Optr)&t_send0, (Optr)PSend6752, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6753, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6741 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6742, 6, PSend6745, PSend6746, PSend6749, PSend6750, PSend6753, self);
    
    MethodClosure MC_SMB_testIsEmpty = new_MethodClosure((Method)PMethod6741, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testIsEmpty, MC_SMB_testIsEmpty);
}


static void init_SMB_testIncludes() {
    Symbol SMB_testIncludes = new_Symbol(L"testIncludes");
    Symbol  SMB_v = new_Symbol(L"v");
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant SMB_v_Const = new_Constant((Optr)SMB_v);
    // includes:. 
    Send PSend6756 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB_v_Const);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6757 = new_Send((Optr)PSend6756, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6758 = new_Send((Optr)PSend6757, SMB__equals_, 1, (Optr)false_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend6759 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)SMB_v_Const);
    // includes:. 
    Send PSend6760 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB_v_Const);
    // should. 
    Send PSend6761 = new_Send((Optr)PSend6760, SMB_should, 0);
    // =. 
    Send PSend6762 = new_Send((Optr)PSend6761, SMB__equals_, 1, (Optr)true_Const);
    String string_6763 = new_String(L"v");
    Constant string_6763_Const = new_Constant((Optr)string_6763);
    // includes:. 
    Send PSend6764 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)string_6763_Const);
    // should. 
    Send PSend6765 = new_Send((Optr)PSend6764, SMB_should, 0);
    // =. 
    Send PSend6766 = new_Send((Optr)PSend6765, SMB__equals_, 1, (Optr)true_Const);
    String string_6767 = new_String(L"_1_");
    Constant string_6767_Const = new_Constant((Optr)string_6767);
    // add:. 
    Send PSend6768 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)string_6767_Const);
    String string_6769 = new_String(L"_1_");
    Constant string_6769_Const = new_Constant((Optr)string_6769);
    // includes:. 
    Send PSend6770 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)string_6769_Const);
    // should. 
    Send PSend6771 = new_Send((Optr)PSend6770, SMB_should, 0);
    // =. 
    Send PSend6772 = new_Send((Optr)PSend6771, SMB__equals_, 1, (Optr)true_Const);
    Symbol  SMB___1__ = new_Symbol(L"_1_");
    Constant SMB___1___Const = new_Constant((Optr)SMB___1__);
    // includes:. 
    Send PSend6773 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB___1___Const);
    // should. 
    Send PSend6774 = new_Send((Optr)PSend6773, SMB_should, 0);
    // =. 
    Send PSend6775 = new_Send((Optr)PSend6774, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6755 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6756, (Optr)&t_send0, (Optr)PSend6757, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6758, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6759, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6760, (Optr)&t_send0, (Optr)PSend6761, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6762, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6763, (Optr)&t_send1, (Optr)PSend6764, (Optr)&t_send0, (Optr)PSend6765, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6766, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6767, (Optr)&t_send1, (Optr)PSend6768, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6769, (Optr)&t_send1, (Optr)PSend6770, (Optr)&t_send0, (Optr)PSend6771, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6772, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB___1__, (Optr)&t_send1, (Optr)PSend6773, (Optr)&t_send0, (Optr)PSend6774, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6754 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6755, 8, PSend6758, PSend6759, PSend6762, PSend6766, PSend6768, PSend6772, PSend6775, self);
    
    MethodClosure MC_SMB_testIncludes = new_MethodClosure((Method)PMethod6754, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testIncludes, MC_SMB_testIncludes);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend6779 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign6778 = new_Assign((Optr)slot_Collection_SetTest_s, (Optr)PSend6779);
    Array PThreadedCode6777 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6778, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend6779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6777, 2, PAssign6778, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod6776, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_class_SMB_pClassMethods() {
    Symbol SMB_pClassMethods = new_Symbol(L"pClassMethods");
    Symbol  SMB_all = new_Symbol(L"all");
    Array PThreadedCode6781 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_all, (Optr)&t_method_return);
    Constant SMB_all_Const = new_Constant((Optr)SMB_all);
    Method PMethod6780 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6781, 1, SMB_all_Const);
    
    MethodClosure MC_SMB_pClassMethods = new_MethodClosure((Method)PMethod6780, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_pClassMethods, MC_SMB_pClassMethods);
}


static void init_class_SMB_shouldInheritSelectors() {
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    Array PThreadedCode6783 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod6782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6783, 1, false_Const);
    
    MethodClosure MC_SMB_shouldInheritSelectors = new_MethodClosure((Method)PMethod6782, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_shouldInheritSelectors, MC_SMB_shouldInheritSelectors);
}


static void init_class_SMB_pMethods() {
    Symbol SMB_pMethods = new_Symbol(L"pMethods");
    Symbol  SMB_all = new_Symbol(L"all");
    Array PThreadedCode6785 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_all, (Optr)&t_method_return);
    Constant SMB_all_Const = new_Constant((Optr)SMB_all);
    Method PMethod6784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6785, 1, SMB_all_Const);
    
    MethodClosure MC_SMB_pMethods = new_MethodClosure((Method)PMethod6784, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_pMethods, MC_SMB_pMethods);
}

void init_Collection_PSetTest_layout() {
    layout_Collection_SetTest_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Collection_SetTest_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_SetTest_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_SetTest_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_SetTest_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_SetTest_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Collection_SetTest_Class_class)->values[5] = slot_SUnit_Kernel_TestCase_Class_class_history; // history 
    
    Symbol  SMB_SetTest = new_Symbol(L"SetTest");
    slot_Collection_SetTest_s = (Optr)new_Slot(1, L"s");
    layout_Collection_SetTest = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Collection_SetTest)->values[0] = slot_SUnit_Kernel_TestCase_testSelector; // testSelector 
    ((Array)layout_Collection_SetTest)->values[1] = slot_Collection_SetTest_s; // s 
    Collection_SetTest_Class = (Class)new_Class(SUnit_Kernel_TestCase_Class, layout_Collection_SetTest_Class_class);
    Collection_SetTest_Class->layout = layout_Collection_SetTest;
    Collection_SetTest_Class->name = SMB_SetTest;
    
}

void init_Collection_PSetTest_methods() {
    init_SMB_testAdd();
    init_SMB_testIsEmpty();
    init_SMB_testIncludes();
    init_SMB_setUp();
    init_class_SMB_pClassMethods();
    init_class_SMB_shouldInheritSelectors();
    init_class_SMB_pMethods();
    
}