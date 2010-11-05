#include <lib/class/Collection/SetTest.h>


Optr layout_Collection_SetTest_Class_class;
Optr slot_Collection_SetTest_s;
Optr layout_Collection_SetTest;


static void init_SMB_testAdd() {
    Symbol SMB_testAdd = new_Symbol(L"testAdd");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6703 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6705 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6706 = new_Send((Optr)PSend6705, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6707 = new_Send((Optr)PSend6706, SMB__equals_, 1, (Optr)int_0_Const);
    SmallInt int_333 = new_SmallInt(333);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6709 = new_Array_with(1, (Optr)VAR_index_1_0);
    Assign PAssign6711 = new_Assign((Optr)VAR_value_0_0, (Optr)VAR_index_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend6712 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)VAR_value_0_0);
    // size. 
    Send PSend6713 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6714 = new_Send((Optr)PSend6713, SMB_should, 0);
    // =. 
    Send PSend6715 = new_Send((Optr)PSend6714, SMB__equals_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend6716 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // should. 
    Send PSend6717 = new_Send((Optr)PSend6716, SMB_should, 0);
    // =. 
    Send PSend6718 = new_Send((Optr)PSend6717, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6710 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign6711, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6712, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6713, (Optr)&t_send0, (Optr)PSend6714, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6715, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6716, (Optr)&t_send0, (Optr)PSend6717, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6718, (Optr)&t_method_return);
    Block PBlock6708 = new_Block_with(PArray6709, empty_Array, PThreadedCode6710, 4, PAssign6711, PSend6712, PSend6715, PSend6718);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    Constant int_333_Const = new_Constant((Optr)int_333);
    // to:do:. 
    Send PSend6719 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_333_Const, (Optr)PBlock6708);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // add:. 
    Send PSend6720 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)int_200_Const);
    // size. 
    Send PSend6721 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6722 = new_Send((Optr)PSend6721, SMB_should, 0);
    // =. 
    Send PSend6723 = new_Send((Optr)PSend6722, SMB__equals_, 1, (Optr)int_333_Const);
    Array PArray6725 = new_Array_with(1, (Optr)VAR_index_1_0);
    Assign PAssign6727 = new_Assign((Optr)VAR_value_0_0, (Optr)VAR_index_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend6728 = new_Send((Optr)slot_Collection_SetTest_s, SMB_remove_, 1, (Optr)VAR_value_0_0);
    // size. 
    Send PSend6729 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6730 = new_Send((Optr)PSend6729, SMB_should, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6731 = new_Send((Optr)int_333_Const, SMB__minus_, 1, (Optr)VAR_index_1_0);
    // =. 
    Send PSend6732 = new_Send((Optr)PSend6730, SMB__equals_, 1, (Optr)PSend6731);
    // includes:. 
    Send PSend6733 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // should. 
    Send PSend6734 = new_Send((Optr)PSend6733, SMB_should, 0);
    // =. 
    Send PSend6735 = new_Send((Optr)PSend6734, SMB__equals_, 1, (Optr)false_Const);
    Array PThreadedCode6726 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign6727, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6728, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6729, (Optr)&t_send0, (Optr)PSend6730, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6731, (Optr)&t_send1, (Optr)PSend6732, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6733, (Optr)&t_send0, (Optr)PSend6734, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6735, (Optr)&t_method_return);
    Block PBlock6724 = new_Block_with(PArray6725, empty_Array, PThreadedCode6726, 4, PAssign6727, PSend6728, PSend6732, PSend6735);
    // to:do:. 
    Send PSend6736 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_333_Const, (Optr)PBlock6724);
    // size. 
    Send PSend6737 = new_Send((Optr)slot_Collection_SetTest_s, SMB_size, 0);
    // should. 
    Send PSend6738 = new_Send((Optr)PSend6737, SMB_should, 0);
    // =. 
    Send PSend6739 = new_Send((Optr)PSend6738, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode6704 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6705, (Optr)&t_send0, (Optr)PSend6706, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6707, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_closure, (Optr)PBlock6708, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6719, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend6720, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6721, (Optr)&t_send0, (Optr)PSend6722, (Optr)&t_push1, (Optr)int_333, (Optr)&t_send1, (Optr)PSend6723, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_333, (Optr)&t_push_closure, (Optr)PBlock6724, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6736, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6737, (Optr)&t_send0, (Optr)PSend6738, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6739, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6702 = new_Method_with(empty_Array, PArray6703, empty_Array, PThreadedCode6704, 7, PSend6707, PSend6719, PSend6720, PSend6723, PSend6736, PSend6739, self);
    
    MethodClosure MC_SMB_testAdd = new_MethodClosure((Method)PMethod6702, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testAdd, MC_SMB_testAdd);
}


static void init_SMB_testIsEmpty() {
    Symbol SMB_testIsEmpty = new_Symbol(L"testIsEmpty");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend6742 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6743 = new_Send((Optr)PSend6742, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6744 = new_Send((Optr)PSend6743, SMB__equals_, 1, (Optr)true_Const);
    Symbol  SMB_val = new_Symbol(L"val");
    Symbol SMB_add_ = new_Symbol(L"add:");
    Constant SMB_val_Const = new_Constant((Optr)SMB_val);
    // add:. 
    Send PSend6745 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)SMB_val_Const);
    // isEmpty. 
    Send PSend6746 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    // should. 
    Send PSend6747 = new_Send((Optr)PSend6746, SMB_should, 0);
    // =. 
    Send PSend6748 = new_Send((Optr)PSend6747, SMB__equals_, 1, (Optr)false_Const);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend6749 = new_Send((Optr)slot_Collection_SetTest_s, SMB_remove_, 1, (Optr)SMB_val_Const);
    // isEmpty. 
    Send PSend6750 = new_Send((Optr)slot_Collection_SetTest_s, SMB_isEmpty, 0);
    // should. 
    Send PSend6751 = new_Send((Optr)PSend6750, SMB_should, 0);
    // =. 
    Send PSend6752 = new_Send((Optr)PSend6751, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6741 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6742, (Optr)&t_send0, (Optr)PSend6743, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6744, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_val, (Optr)&t_send1, (Optr)PSend6745, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6746, (Optr)&t_send0, (Optr)PSend6747, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6748, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_val, (Optr)&t_send1, (Optr)PSend6749, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_send0, (Optr)PSend6750, (Optr)&t_send0, (Optr)PSend6751, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6752, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6740 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6741, 6, PSend6744, PSend6745, PSend6748, PSend6749, PSend6752, self);
    
    MethodClosure MC_SMB_testIsEmpty = new_MethodClosure((Method)PMethod6740, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testIsEmpty, MC_SMB_testIsEmpty);
}


static void init_SMB_testIncludes() {
    Symbol SMB_testIncludes = new_Symbol(L"testIncludes");
    Symbol  SMB_v = new_Symbol(L"v");
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant SMB_v_Const = new_Constant((Optr)SMB_v);
    // includes:. 
    Send PSend6755 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB_v_Const);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend6756 = new_Send((Optr)PSend6755, SMB_should, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6757 = new_Send((Optr)PSend6756, SMB__equals_, 1, (Optr)false_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend6758 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)SMB_v_Const);
    // includes:. 
    Send PSend6759 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB_v_Const);
    // should. 
    Send PSend6760 = new_Send((Optr)PSend6759, SMB_should, 0);
    // =. 
    Send PSend6761 = new_Send((Optr)PSend6760, SMB__equals_, 1, (Optr)true_Const);
    String string_6762 = new_String(L"v");
    Constant string_6762_Const = new_Constant((Optr)string_6762);
    // includes:. 
    Send PSend6763 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)string_6762_Const);
    // should. 
    Send PSend6764 = new_Send((Optr)PSend6763, SMB_should, 0);
    // =. 
    Send PSend6765 = new_Send((Optr)PSend6764, SMB__equals_, 1, (Optr)true_Const);
    String string_6766 = new_String(L"_1_");
    Constant string_6766_Const = new_Constant((Optr)string_6766);
    // add:. 
    Send PSend6767 = new_Send((Optr)slot_Collection_SetTest_s, SMB_add_, 1, (Optr)string_6766_Const);
    String string_6768 = new_String(L"_1_");
    Constant string_6768_Const = new_Constant((Optr)string_6768);
    // includes:. 
    Send PSend6769 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)string_6768_Const);
    // should. 
    Send PSend6770 = new_Send((Optr)PSend6769, SMB_should, 0);
    // =. 
    Send PSend6771 = new_Send((Optr)PSend6770, SMB__equals_, 1, (Optr)true_Const);
    Symbol  SMB___1__ = new_Symbol(L"_1_");
    Constant SMB___1___Const = new_Constant((Optr)SMB___1__);
    // includes:. 
    Send PSend6772 = new_Send((Optr)slot_Collection_SetTest_s, SMB_includes_, 1, (Optr)SMB___1___Const);
    // should. 
    Send PSend6773 = new_Send((Optr)PSend6772, SMB_should, 0);
    // =. 
    Send PSend6774 = new_Send((Optr)PSend6773, SMB__equals_, 1, (Optr)true_Const);
    Array PThreadedCode6754 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6755, (Optr)&t_send0, (Optr)PSend6756, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend6757, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6758, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB_v, (Optr)&t_send1, (Optr)PSend6759, (Optr)&t_send0, (Optr)PSend6760, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6761, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6762, (Optr)&t_send1, (Optr)PSend6763, (Optr)&t_send0, (Optr)PSend6764, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6765, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6766, (Optr)&t_send1, (Optr)PSend6767, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)string_6768, (Optr)&t_send1, (Optr)PSend6769, (Optr)&t_send0, (Optr)PSend6770, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6771, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_SetTest_s, (Optr)&t_push1, (Optr)SMB___1__, (Optr)&t_send1, (Optr)PSend6772, (Optr)&t_send0, (Optr)PSend6773, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6774, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6754, 8, PSend6757, PSend6758, PSend6761, PSend6765, PSend6767, PSend6771, PSend6774, self);
    
    MethodClosure MC_SMB_testIncludes = new_MethodClosure((Method)PMethod6753, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_testIncludes, MC_SMB_testIncludes);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend6778 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign6777 = new_Assign((Optr)slot_Collection_SetTest_s, (Optr)PSend6778);
    Array PThreadedCode6776 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6777, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend6778, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6776, 2, PAssign6777, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod6775, Collection_SetTest_Class);
    store_method(Collection_SetTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_class_SMB_pClassMethods() {
    Symbol SMB_pClassMethods = new_Symbol(L"pClassMethods");
    Symbol  SMB_all = new_Symbol(L"all");
    Array PThreadedCode6780 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_all, (Optr)&t_method_return);
    Constant SMB_all_Const = new_Constant((Optr)SMB_all);
    Method PMethod6779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6780, 1, SMB_all_Const);
    
    MethodClosure MC_SMB_pClassMethods = new_MethodClosure((Method)PMethod6779, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_pClassMethods, MC_SMB_pClassMethods);
}


static void init_class_SMB_shouldInheritSelectors() {
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    Array PThreadedCode6782 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod6781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6782, 1, false_Const);
    
    MethodClosure MC_SMB_shouldInheritSelectors = new_MethodClosure((Method)PMethod6781, HEADER(Collection_SetTest_Class));
    store_method(HEADER(Collection_SetTest_Class), SMB_shouldInheritSelectors, MC_SMB_shouldInheritSelectors);
}


static void init_class_SMB_pMethods() {
    Symbol SMB_pMethods = new_Symbol(L"pMethods");
    Symbol  SMB_all = new_Symbol(L"all");
    Array PThreadedCode6784 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_all, (Optr)&t_method_return);
    Constant SMB_all_Const = new_Constant((Optr)SMB_all);
    Method PMethod6783 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6784, 1, SMB_all_Const);
    
    MethodClosure MC_SMB_pMethods = new_MethodClosure((Method)PMethod6783, HEADER(Collection_SetTest_Class));
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