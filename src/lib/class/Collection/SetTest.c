#include <lib/class/Collection/SetTest.h>


Optr layout_Collection_SetTest_Class_class;
Optr slot_Collection_SetTest_s;
Optr layout_Collection_SetTest;


static void init_SMB_testAdd() {
    Symbol SMB_testAdd = new_Symbol(L"testAdd");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6715 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6717 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6718 = new_Send((Optr)PSend6717, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6719 = new_Send((Optr)PSend6718, SMB__equals_, 1, (Optr)int_0_Const);
    SmallInt int_333 = new_SmallInt(333);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6721 = new_Array_with(1, (Optr)VAR_index_1_0);
    Assign PAssign6723 = new_Assign((Optr)VAR_value_0_0, (Optr)VAR_index_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend6724 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)VAR_value_0_0);
    // size. 
    Send PSend6725 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6726 = new_Send((Optr)PSend6725, SMB_should, 0);
    // =. 
    Send PSend6727 = new_Send((Optr)PSend6726, SMB__equals_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend6728 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // should. 
    Send PSend6729 = new_Send((Optr)PSend6728, SMB_should, 0);
    // =. 
    Send PSend6730 = new_Send((Optr)PSend6729, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6722 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign6723, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6724, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6725, (Optr)&t_send0, (Optr)PSend6726, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6727, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6728, (Optr)&t_send0, (Optr)PSend6729, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6730, (Optr)&t_method_return);
    Block PBlock6720 = new_Block_with(PArray6721, empty_Array, PThreadedCode6722, 4, PAssign6723, PSend6724, PSend6727, PSend6730);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    Constant int_333_Const = new_Constant((Optr)int_333);
    // to:do:. 
    Send PSend6731 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_333_Const, (Optr)PBlock6720);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // add:. 
    Send PSend6732 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)int_200_Const);
    // size. 
    Send PSend6733 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6734 = new_Send((Optr)PSend6733, SMB_should, 0);
    // =. 
    Send PSend6735 = new_Send((Optr)PSend6734, SMB__equals_, 1, (Optr)int_333_Const);
    Array PArray6737 = new_Array_with(1, (Optr)VAR_index_1_0);
    Assign PAssign6739 = new_Assign((Optr)VAR_value_0_0, (Optr)VAR_index_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend6740 = new_Send((Optr)slot_Collection_SetTest_s, SMB_remove_, 1, (Optr)VAR_value_0_0);
    // size. 
    Send PSend6741 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6742 = new_Send((Optr)PSend6741, SMB_should, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6743 = new_Send((Optr)int_333_Const, SMB__minus_, 1, (Optr)VAR_index_1_0);
    // =. 
    Send PSend6744 = new_Send((Optr)PSend6742, SMB__equals_, 1, (Optr)PSend6743);
    // includes:. 
    Send PSend6745 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // should. 
    Send PSend6746 = new_Send((Optr)PSend6745, SMB_should, 0);
    // =. 
    Send PSend6747 = new_Send((Optr)PSend6746, SMB__equals_, 1, (Optr)false_Const);
    Array PThreadedCode6738 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign6739, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6740, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6741, (Optr)&t_send0, (Optr)PSend6742, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6743, (Optr)&t_send1, (Optr)PSend6744, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6745, (Optr)&t_send0, (Optr)PSend6746, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6747, (Optr)&t_method_return);
    Block PBlock6736 = new_Block_with(PArray6737, empty_Array, PThreadedCode6738, 4, PAssign6739, PSend6740, PSend6744, PSend6747);
    // to:do:. 
    Send PSend6748 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_333_Const, (Optr)PBlock6736);
    // size. 
    Send PSend6749 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6750 = new_Send((Optr)PSend6749, SMB_should, 0);
    // =. 
    Send PSend6751 = new_Send((Optr)PSend6750, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode6716 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6717, (Optr)&t_send0, (Optr)PSend6718, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6719, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_closure, (Optr)PBlock6720, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6731, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend6732, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6733, (Optr)&t_send0, (Optr)PSend6734, (Optr)&t_push1, (Optr)int_333, (Optr)&t_send1, (Optr)PSend6735, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_closure, (Optr)PBlock6736, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6748, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6749, (Optr)&t_send0, (Optr)PSend6750, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6714 = new_Method_with(empty_Array, PArray6715, empty_Array, PThreadedCode6716, 7, PSend6719, PSend6731, PSend6732, PSend6735, PSend6748, PSend6751, self);
    
    MethodClosure MC_SMB_testAdd = new_MethodClosure((Method)PMethod6714, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testAdd, MC_SMB_testAdd);
}


static void init_SMB_testIsEmpty() {
    Symbol SMB_testIsEmpty = new_Symbol(L"testIsEmpty");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend6754 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6755 = new_Send((Optr)PSend6754, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6756 = new_Send((Optr)PSend6755, SMB__equals_, 1, (Optr)true_Const);
    Symbol  SMB_val = new_Symbol(L"val");
    Symbol SMB_add_ = new_Symbol(L"add:");
    Constant SMB_val_Const = new_Constant((Optr)SMB_val);
    // add:. 
    Send PSend6757 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)SMB_val_Const);
    // isEmpty. 
    Send PSend6758 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    // should. 
    Send PSend6759 = new_Send((Optr)PSend6758, SMB_should, 0);
    // =. 
    Send PSend6760 = new_Send((Optr)PSend6759, SMB__equals_, 1, (Optr)false_Const);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend6761 = new_Send((Optr)slot_Collection_SetTest_s, SMB_remove_, 1, (Optr)SMB_val_Const);
    // isEmpty. 
    Send PSend6762 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    // should. 
    Send PSend6763 = new_Send((Optr)PSend6762, SMB_should, 0);
    // =. 
    Send PSend6764 = new_Send((Optr)PSend6763, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6753 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6754, (Optr)&t_send0, (Optr)PSend6755, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6756, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_val, (Optr)&t_send1, (Optr)PSend6757, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6758, (Optr)&t_send0, (Optr)PSend6759, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6760, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_val, (Optr)&t_send1, (Optr)PSend6761, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6762, (Optr)&t_send0, (Optr)PSend6763, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6764, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6752 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6753, 6, PSend6756, PSend6757, PSend6760, PSend6761, PSend6764, self);
    
    MethodClosure MC_SMB_testIsEmpty = new_MethodClosure((Method)PMethod6752, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testIsEmpty, MC_SMB_testIsEmpty);
}


static void init_SMB_testIncludes() {
    Symbol SMB_testIncludes = new_Symbol(L"testIncludes");
    Symbol  SMB_v = new_Symbol(L"v");
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant SMB_v_Const = new_Constant((Optr)SMB_v);
    // includes:. 
    Send PSend6767 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB_v_Const);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6768 = new_Send((Optr)PSend6767, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6769 = new_Send((Optr)PSend6768, SMB__equals_, 1, (Optr)false_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend6770 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)SMB_v_Const);
    // includes:. 
    Send PSend6771 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB_v_Const);
    // should. 
    Send PSend6772 = new_Send((Optr)PSend6771, SMB_should, 0);
    // =. 
    Send PSend6773 = new_Send((Optr)PSend6772, SMB__equals_, 1, (Optr)true_Const);
    String string_6774 = new_String(L"v");
    Constant string_6774_Const = new_Constant((Optr)string_6774);
    // includes:. 
    Send PSend6775 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)string_6774_Const);
    // should. 
    Send PSend6776 = new_Send((Optr)PSend6775, SMB_should, 0);
    // =. 
    Send PSend6777 = new_Send((Optr)PSend6776, SMB__equals_, 1, (Optr)true_Const);
    String string_6778 = new_String(L"_1_");
    Constant string_6778_Const = new_Constant((Optr)string_6778);
    // add:. 
    Send PSend6779 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)string_6778_Const);
    String string_6780 = new_String(L"_1_");
    Constant string_6780_Const = new_Constant((Optr)string_6780);
    // includes:. 
    Send PSend6781 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)string_6780_Const);
    // should. 
    Send PSend6782 = new_Send((Optr)PSend6781, SMB_should, 0);
    // =. 
    Send PSend6783 = new_Send((Optr)PSend6782, SMB__equals_, 1, (Optr)true_Const);
    Symbol  SMB___1__ = new_Symbol(L"_1_");
    Constant SMB___1___Const = new_Constant((Optr)SMB___1__);
    // includes:. 
    Send PSend6784 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB___1___Const);
    // should. 
    Send PSend6785 = new_Send((Optr)PSend6784, SMB_should, 0);
    // =. 
    Send PSend6786 = new_Send((Optr)PSend6785, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6766 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6767, (Optr)&t_send0, (Optr)PSend6768, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6769, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6770, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6771, (Optr)&t_send0, (Optr)PSend6772, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6773, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6774, (Optr)&t_send1, (Optr)PSend6775, (Optr)&t_send0, (Optr)PSend6776, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6777, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6778, (Optr)&t_send1, (Optr)PSend6779, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6780, (Optr)&t_send1, (Optr)PSend6781, (Optr)&t_send0, (Optr)PSend6782, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6783, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB___1__, (Optr)&t_send1, (Optr)PSend6784, (Optr)&t_send0, (Optr)PSend6785, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6786, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6765 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6766, 8, PSend6769, PSend6770, PSend6773, PSend6777, PSend6779, PSend6783, PSend6786, self);
    
    MethodClosure MC_SMB_testIncludes = new_MethodClosure((Method)PMethod6765, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testIncludes, MC_SMB_testIncludes);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend6790 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign6789 = new_Assign((Optr)slot_Collection_SetTest_s, (Optr)PSend6790);
    Array PThreadedCode6788 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6789, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend6790, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6788, 2, PAssign6789, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod6787, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_class_SMB_pClassMethods() {
    Symbol SMB_pClassMethods = new_Symbol(L"pClassMethods");
    Symbol  SMB_all = new_Symbol(L"all");
    Array PThreadedCode6792 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_all, (Optr)&t_method_return);
    Constant SMB_all_Const = new_Constant((Optr)SMB_all);
    Method PMethod6791 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6792, 1, SMB_all_Const);
    
    MethodClosure MC_SMB_pClassMethods = new_MethodClosure((Method)PMethod6791, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_pClassMethods, MC_SMB_pClassMethods);
}


static void init_class_SMB_shouldInheritSelectors() {
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    Array PThreadedCode6794 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod6793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6794, 1, false_Const);
    
    MethodClosure MC_SMB_shouldInheritSelectors = new_MethodClosure((Method)PMethod6793, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_shouldInheritSelectors, MC_SMB_shouldInheritSelectors);
}


static void init_class_SMB_pMethods() {
    Symbol SMB_pMethods = new_Symbol(L"pMethods");
    Symbol  SMB_all = new_Symbol(L"all");
    Array PThreadedCode6796 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_all, (Optr)&t_method_return);
    Constant SMB_all_Const = new_Constant((Optr)SMB_all);
    Method PMethod6795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6796, 1, SMB_all_Const);
    
    MethodClosure MC_SMB_pMethods = new_MethodClosure((Method)PMethod6795, HEADER(Collection_SetTest_Class));
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