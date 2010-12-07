#include <lib/class/Collection/SetTest.h>


Optr layout_Collection_SetTest_Class_class;
Optr slot_Collection_SetTest_s;
Optr layout_Collection_SetTest;


static void init_SMB_testAdd() {
    Symbol SMB_testAdd = new_Symbol(L"testAdd");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6702 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6704 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6705 = new_Send((Optr)PSend6704, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6706 = new_Send((Optr)PSend6705, SMB__equals_, 1, (Optr)int_0_Const);
    SmallInt int_333 = new_SmallInt(333);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6708 = new_Array_with(1, (Optr)VAR_index_1_0);
    Assign PAssign6710 = new_Assign((Optr)VAR_value_0_0, (Optr)VAR_index_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend6711 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)VAR_value_0_0);
    // size. 
    Send PSend6712 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6713 = new_Send((Optr)PSend6712, SMB_should, 0);
    // =. 
    Send PSend6714 = new_Send((Optr)PSend6713, SMB__equals_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend6715 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // should. 
    Send PSend6716 = new_Send((Optr)PSend6715, SMB_should, 0);
    // =. 
    Send PSend6717 = new_Send((Optr)PSend6716, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6709 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign6710, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6711, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6712, (Optr)&t_send0, (Optr)PSend6713, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6714, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6715, (Optr)&t_send0, (Optr)PSend6716, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6717, (Optr)&t_method_return);
    Block PBlock6707 = new_Block_with(PArray6708, empty_Array, PThreadedCode6709, 4, PAssign6710, PSend6711, PSend6714, PSend6717);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    Constant int_333_Const = new_Constant((Optr)int_333);
    // to:do:. 
    Send PSend6718 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_333_Const, (Optr)PBlock6707);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // add:. 
    Send PSend6719 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)int_200_Const);
    // size. 
    Send PSend6720 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6721 = new_Send((Optr)PSend6720, SMB_should, 0);
    // =. 
    Send PSend6722 = new_Send((Optr)PSend6721, SMB__equals_, 1, (Optr)int_333_Const);
    Array PArray6724 = new_Array_with(1, (Optr)VAR_index_1_0);
    Assign PAssign6726 = new_Assign((Optr)VAR_value_0_0, (Optr)VAR_index_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend6727 = new_Send((Optr)slot_Collection_SetTest_s, SMB_remove_, 1, (Optr)VAR_value_0_0);
    // size. 
    Send PSend6728 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6729 = new_Send((Optr)PSend6728, SMB_should, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6730 = new_Send((Optr)int_333_Const, SMB__minus_, 1, (Optr)VAR_index_1_0);
    // =. 
    Send PSend6731 = new_Send((Optr)PSend6729, SMB__equals_, 1, (Optr)PSend6730);
    // includes:. 
    Send PSend6732 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // should. 
    Send PSend6733 = new_Send((Optr)PSend6732, SMB_should, 0);
    // =. 
    Send PSend6734 = new_Send((Optr)PSend6733, SMB__equals_, 1, (Optr)false_Const);
    Array PThreadedCode6725 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign6726, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6727, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6728, (Optr)&t_send0, (Optr)PSend6729, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6730, (Optr)&t_send1, (Optr)PSend6731, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6732, (Optr)&t_send0, (Optr)PSend6733, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6734, (Optr)&t_method_return);
    Block PBlock6723 = new_Block_with(PArray6724, empty_Array, PThreadedCode6725, 4, PAssign6726, PSend6727, PSend6731, PSend6734);
    // to:do:. 
    Send PSend6735 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_333_Const, (Optr)PBlock6723);
    // size. 
    Send PSend6736 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6737 = new_Send((Optr)PSend6736, SMB_should, 0);
    // =. 
    Send PSend6738 = new_Send((Optr)PSend6737, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode6703 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6704, (Optr)&t_send0, (Optr)PSend6705, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6706, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_closure, (Optr)PBlock6707, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6718, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend6719, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6720, (Optr)&t_send0, (Optr)PSend6721, (Optr)&t_push1, (Optr)int_333, (Optr)&t_send1, (Optr)PSend6722, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_closure, (Optr)PBlock6723, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6735, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6736, (Optr)&t_send0, (Optr)PSend6737, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6701 = new_Method_with(empty_Array, PArray6702, empty_Array, PThreadedCode6703, 7, PSend6706, PSend6718, PSend6719, PSend6722, PSend6735, PSend6738, self);
    
    MethodClosure MC_SMB_testAdd = new_MethodClosure((Method)PMethod6701, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testAdd, MC_SMB_testAdd);
}


static void init_SMB_testIsEmpty() {
    Symbol SMB_testIsEmpty = new_Symbol(L"testIsEmpty");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend6741 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6742 = new_Send((Optr)PSend6741, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6743 = new_Send((Optr)PSend6742, SMB__equals_, 1, (Optr)true_Const);
    Symbol  SMB_val = new_Symbol(L"val");
    Symbol SMB_add_ = new_Symbol(L"add:");
    Constant SMB_val_Const = new_Constant((Optr)SMB_val);
    // add:. 
    Send PSend6744 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)SMB_val_Const);
    // isEmpty. 
    Send PSend6745 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    // should. 
    Send PSend6746 = new_Send((Optr)PSend6745, SMB_should, 0);
    // =. 
    Send PSend6747 = new_Send((Optr)PSend6746, SMB__equals_, 1, (Optr)false_Const);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend6748 = new_Send((Optr)slot_Collection_SetTest_s, SMB_remove_, 1, (Optr)SMB_val_Const);
    // isEmpty. 
    Send PSend6749 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    // should. 
    Send PSend6750 = new_Send((Optr)PSend6749, SMB_should, 0);
    // =. 
    Send PSend6751 = new_Send((Optr)PSend6750, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6740 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6741, (Optr)&t_send0, (Optr)PSend6742, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6743, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_val, (Optr)&t_send1, (Optr)PSend6744, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6745, (Optr)&t_send0, (Optr)PSend6746, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6747, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_val, (Optr)&t_send1, (Optr)PSend6748, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6749, (Optr)&t_send0, (Optr)PSend6750, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6740, 6, PSend6743, PSend6744, PSend6747, PSend6748, PSend6751, self);
    
    MethodClosure MC_SMB_testIsEmpty = new_MethodClosure((Method)PMethod6739, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testIsEmpty, MC_SMB_testIsEmpty);
}


static void init_SMB_testIncludes() {
    Symbol SMB_testIncludes = new_Symbol(L"testIncludes");
    Symbol  SMB_v = new_Symbol(L"v");
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant SMB_v_Const = new_Constant((Optr)SMB_v);
    // includes:. 
    Send PSend6754 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB_v_Const);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6755 = new_Send((Optr)PSend6754, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6756 = new_Send((Optr)PSend6755, SMB__equals_, 1, (Optr)false_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend6757 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)SMB_v_Const);
    // includes:. 
    Send PSend6758 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB_v_Const);
    // should. 
    Send PSend6759 = new_Send((Optr)PSend6758, SMB_should, 0);
    // =. 
    Send PSend6760 = new_Send((Optr)PSend6759, SMB__equals_, 1, (Optr)true_Const);
    String string_6761 = new_String(L"v");
    Constant string_6761_Const = new_Constant((Optr)string_6761);
    // includes:. 
    Send PSend6762 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)string_6761_Const);
    // should. 
    Send PSend6763 = new_Send((Optr)PSend6762, SMB_should, 0);
    // =. 
    Send PSend6764 = new_Send((Optr)PSend6763, SMB__equals_, 1, (Optr)true_Const);
    String string_6765 = new_String(L"_1_");
    Constant string_6765_Const = new_Constant((Optr)string_6765);
    // add:. 
    Send PSend6766 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)string_6765_Const);
    String string_6767 = new_String(L"_1_");
    Constant string_6767_Const = new_Constant((Optr)string_6767);
    // includes:. 
    Send PSend6768 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)string_6767_Const);
    // should. 
    Send PSend6769 = new_Send((Optr)PSend6768, SMB_should, 0);
    // =. 
    Send PSend6770 = new_Send((Optr)PSend6769, SMB__equals_, 1, (Optr)true_Const);
    Symbol  SMB___1__ = new_Symbol(L"_1_");
    Constant SMB___1___Const = new_Constant((Optr)SMB___1__);
    // includes:. 
    Send PSend6771 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB___1___Const);
    // should. 
    Send PSend6772 = new_Send((Optr)PSend6771, SMB_should, 0);
    // =. 
    Send PSend6773 = new_Send((Optr)PSend6772, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6753 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6754, (Optr)&t_send0, (Optr)PSend6755, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6756, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6757, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6758, (Optr)&t_send0, (Optr)PSend6759, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6760, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6761, (Optr)&t_send1, (Optr)PSend6762, (Optr)&t_send0, (Optr)PSend6763, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6764, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6765, (Optr)&t_send1, (Optr)PSend6766, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6767, (Optr)&t_send1, (Optr)PSend6768, (Optr)&t_send0, (Optr)PSend6769, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6770, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB___1__, (Optr)&t_send1, (Optr)PSend6771, (Optr)&t_send0, (Optr)PSend6772, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6773, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6752 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6753, 8, PSend6756, PSend6757, PSend6760, PSend6764, PSend6766, PSend6770, PSend6773, self);
    
    MethodClosure MC_SMB_testIncludes = new_MethodClosure((Method)PMethod6752, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testIncludes, MC_SMB_testIncludes);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend6777 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign6776 = new_Assign((Optr)slot_Collection_SetTest_s, (Optr)PSend6777);
    Array PThreadedCode6775 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6776, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend6777, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6775, 2, PAssign6776, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod6774, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_class_SMB_pClassMethods() {
    Symbol SMB_pClassMethods = new_Symbol(L"pClassMethods");
    Symbol  SMB_all = new_Symbol(L"all");
    Array PThreadedCode6779 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_all, (Optr)&t_method_return);
    Constant SMB_all_Const = new_Constant((Optr)SMB_all);
    Method PMethod6778 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6779, 1, SMB_all_Const);
    
    MethodClosure MC_SMB_pClassMethods = new_MethodClosure((Method)PMethod6778, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_pClassMethods, MC_SMB_pClassMethods);
}


static void init_class_SMB_shouldInheritSelectors() {
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    Array PThreadedCode6781 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod6780 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6781, 1, false_Const);
    
    MethodClosure MC_SMB_shouldInheritSelectors = new_MethodClosure((Method)PMethod6780, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_shouldInheritSelectors, MC_SMB_shouldInheritSelectors);
}


static void init_class_SMB_pMethods() {
    Symbol SMB_pMethods = new_Symbol(L"pMethods");
    Symbol  SMB_all = new_Symbol(L"all");
    Array PThreadedCode6783 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_all, (Optr)&t_method_return);
    Constant SMB_all_Const = new_Constant((Optr)SMB_all);
    Method PMethod6782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6783, 1, SMB_all_Const);
    
    MethodClosure MC_SMB_pMethods = new_MethodClosure((Method)PMethod6782, HEADER(Collection_SetTest_Class));
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