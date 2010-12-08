#include <lib/class/Testing/TestSuite.h>


Optr layout_Testing_TestSuite_Class_class;
Optr slot_Testing_TestSuite_tests;
Optr slot_Testing_TestSuite_resources;
Optr slot_Testing_TestSuite_name;
Optr layout_Testing_TestSuite;


static void init_SMB_resources() {
    Symbol SMB_resources = new_Symbol(L"resources");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11695 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11700 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11699 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11700);
    Array PThreadedCode11698 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11699, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11700, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11697 = new_Block_with(empty_Array, empty_Array, PThreadedCode11698, 1, PAssign11699);
    // ifTrue:. 
    Send PSend11696 = new_Send((Optr)PSend11695, SMB_ifTrue_, 1, (Optr)PBlock11697);
    Array PThreadedCode11694 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11695, (Optr)&t_send_ifTrue_, (Optr)PSend11696, (Optr)PBlock11697, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11694, 2, PSend11696, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11693, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11703 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11704 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11706 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11709 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11711 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11712 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11711);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11713 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11710 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11711, (Optr)&t_send1, (Optr)PSend11712, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11713, (Optr)&t_method_return);
    Block PBlock11708 = new_Block_with(PArray11709, empty_Array, PThreadedCode11710, 2, PSend11712, PSend11713);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11714 = new_Send((Optr)PBlock11708, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11707 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11708, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11714, (Optr)&t_method_return);
    Block PBlock11705 = new_Block_with(PArray11706, empty_Array, PThreadedCode11707, 1, PSend11714);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11715 = new_Send((Optr)PSend11703, SMB_inject_into_, 2, (Optr)PSend11704, (Optr)PBlock11705);
    Array PThreadedCode11702 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11703, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11704, (Optr)&t_push_closure, (Optr)PBlock11705, (Optr)&t_send2, (Optr)PSend11715, (Optr)&t_method_return);
    Method PMethod11701 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11702, 1, PSend11715);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11701, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11717 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11719 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11720 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11722 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11724 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11723 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11724, (Optr)&t_method_return);
    Block PBlock11721 = new_Block_with(PArray11722, empty_Array, PThreadedCode11723, 1, PSend11724);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11725 = new_Send((Optr)PSend11720, SMB_do_, 1, (Optr)PBlock11721);
    Array PThreadedCode11718 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11719, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11720, (Optr)&t_push_closure, (Optr)PBlock11721, (Optr)&t_send1, (Optr)PSend11725, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11716 = new_Method_with(PArray11717, empty_Array, empty_Array, PThreadedCode11718, 3, PSend11719, PSend11725, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11716, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11727 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11730 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11733 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11732 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11733);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11734 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11736 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11738 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11742 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11743 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11742);
    Array PThreadedCode11741 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11742, (Optr)&t_send1, (Optr)PSend11743, (Optr)&t_block_return);
    Block PBlock11740 = new_Block_with(empty_Array, empty_Array, PThreadedCode11741, 1, PSend11743);
    // ifFalse:. 
    Send PSend11739 = new_Send((Optr)PSend11738, SMB_ifFalse_, 1, (Optr)PBlock11740);
    Array PThreadedCode11737 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11738, (Optr)&t_send_ifFalse_, (Optr)PSend11739, (Optr)PBlock11740, (Optr)&t_method_return);
    Block PBlock11735 = new_Block_with(PArray11736, empty_Array, PThreadedCode11737, 1, PSend11739);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11744 = new_Send((Optr)PSend11734, SMB_do_, 1, (Optr)PBlock11735);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11747 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11746 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11747, (Optr)&t_block_return);
    Block PBlock11745 = new_Block_with(empty_Array, empty_Array, PThreadedCode11746, 1, PSend11747);
    // resources. 
    Send PSend11750 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11752 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11754 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11753 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11754, (Optr)&t_method_return);
    Block PBlock11751 = new_Block_with(PArray11752, empty_Array, PThreadedCode11753, 1, PSend11754);
    // do:. 
    Send PSend11755 = new_Send((Optr)PSend11750, SMB_do_, 1, (Optr)PBlock11751);
    Array PThreadedCode11749 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11750, (Optr)&t_push_closure, (Optr)PBlock11751, (Optr)&t_send1, (Optr)PSend11755, (Optr)&t_block_return);
    Block PBlock11748 = new_Block_with(empty_Array, empty_Array, PThreadedCode11749, 1, PSend11755);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11756 = new_Send((Optr)PBlock11745, SMB_ensure_, 1, (Optr)PBlock11748);
    Array PThreadedCode11731 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11732, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11733, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11734, (Optr)&t_push_closure, (Optr)PBlock11735, (Optr)&t_send1, (Optr)PSend11744, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11745, (Optr)&t_push_closure, (Optr)PBlock11748, (Optr)&t_send1, (Optr)PSend11756, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11729 = new_Block_with(PArray11730, empty_Array, PThreadedCode11731, 4, PAssign11732, PSend11744, PSend11756, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11757 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11729);
    Array PThreadedCode11728 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11729, (Optr)&t_send1, (Optr)PSend11757, (Optr)&t_method_return);
    Method PMethod11726 = new_Method_with(empty_Array, PArray11727, empty_Array, PThreadedCode11728, 1, PSend11757);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11726, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11759 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11761 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11762 = new_Send((Optr)PSend11761, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11760 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11761, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11762, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11758 = new_Method_with(PArray11759, empty_Array, empty_Array, PThreadedCode11760, 2, PSend11762, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11758, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11764 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11766 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11765 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11766, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11763 = new_Method_with(PArray11764, empty_Array, empty_Array, PThreadedCode11765, 2, PAssign11766, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11763, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11768 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11771 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11773 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11772 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11773, (Optr)&t_method_return);
    Block PBlock11770 = new_Block_with(PArray11771, empty_Array, PThreadedCode11772, 1, PSend11773);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11774 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11770);
    Array PThreadedCode11769 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11770, (Optr)&t_send1, (Optr)PSend11774, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11767 = new_Method_with(PArray11768, empty_Array, empty_Array, PThreadedCode11769, 2, PSend11774, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11767, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11776 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11778 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11779 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11781 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11783 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11782 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11783, (Optr)&t_method_return);
    Block PBlock11780 = new_Block_with(PArray11781, empty_Array, PThreadedCode11782, 1, PSend11783);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11784 = new_Send((Optr)PSend11779, SMB_do_, 1, (Optr)PBlock11780);
    Array PThreadedCode11777 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11778, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11779, (Optr)&t_push_closure, (Optr)PBlock11780, (Optr)&t_send1, (Optr)PSend11784, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11775 = new_Method_with(PArray11776, empty_Array, empty_Array, PThreadedCode11777, 3, PSend11778, PSend11784, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11775, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11786 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11788 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11790 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11792 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11791 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11792, (Optr)&t_method_return);
    Block PBlock11789 = new_Block_with(PArray11790, empty_Array, PThreadedCode11791, 1, PSend11792);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11793 = new_Send((Optr)PSend11788, SMB_do_, 1, (Optr)PBlock11789);
    Array PThreadedCode11787 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11788, (Optr)&t_push_closure, (Optr)PBlock11789, (Optr)&t_send1, (Optr)PSend11793, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11785 = new_Method_with(PArray11786, empty_Array, empty_Array, PThreadedCode11787, 2, PSend11793, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11785, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11795 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11797 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11796 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11797, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11794 = new_Method_with(PArray11795, empty_Array, empty_Array, PThreadedCode11796, 2, PAssign11797, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11794, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11799 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11799, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11798, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11802 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11807 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11806 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11807);
    Array PThreadedCode11805 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11806, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11807, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11804 = new_Block_with(empty_Array, empty_Array, PThreadedCode11805, 1, PAssign11806);
    // ifTrue:. 
    Send PSend11803 = new_Send((Optr)PSend11802, SMB_ifTrue_, 1, (Optr)PBlock11804);
    Array PThreadedCode11801 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11802, (Optr)&t_send_ifTrue_, (Optr)PSend11803, (Optr)PBlock11804, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11801, 2, PSend11803, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11800, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11809 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11812 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11814 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11815 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11813 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11815, (Optr)&t_method_return);
    Block PBlock11811 = new_Block_with(PArray11812, empty_Array, PThreadedCode11813, 2, PSend11814, PSend11815);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11816 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11817 = new_Send((Optr)PBlock11811, SMB_value_, 1, (Optr)PSend11816);
    Array PThreadedCode11810 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11811, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11816, (Optr)&t_send1, (Optr)PSend11817, (Optr)&t_method_return);
    Method PMethod11808 = new_Method_with(PArray11809, empty_Array, empty_Array, PThreadedCode11810, 1, PSend11817);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11808, HEADER(Testing_TestSuite_Class));
    store_method(HEADER(Testing_TestSuite_Class), SMB_named_, MC_SMB_named_);
}

void init_Testing_TestSuite_layout() {
    layout_Testing_TestSuite_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_TestSuite_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_TestSuite_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_TestSuite_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_TestSuite_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_TestSuite_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TestSuite = new_Symbol(L"TestSuite");
    slot_Testing_TestSuite_tests = (Optr)new_Slot(0, L"tests");
    slot_Testing_TestSuite_resources = (Optr)new_Slot(1, L"resources");
    slot_Testing_TestSuite_name = (Optr)new_Slot(2, L"name");
    layout_Testing_TestSuite = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Testing_TestSuite)->values[0] = slot_Testing_TestSuite_tests; // tests 
    ((Array)layout_Testing_TestSuite)->values[1] = slot_Testing_TestSuite_resources; // resources 
    ((Array)layout_Testing_TestSuite)->values[2] = slot_Testing_TestSuite_name; // name 
    Testing_TestSuite_Class = (Class)new_Class(Object_Class, layout_Testing_TestSuite_Class_class);
    Class_set_superclass(Testing_TestSuite_Class, Object_Class);
    Testing_TestSuite_Class->layout = layout_Testing_TestSuite;
    HEADER(Testing_TestSuite_Class)->layout = layout_Testing_TestSuite_Class_class;
    Testing_TestSuite_Class->name = SMB_TestSuite;
    
}

void init_Testing_TestSuite_methods() {
    init_SMB_resources();
    init_SMB_defaultResources();
    init_SMB_addDependentToHierachy_();
    init_SMB_run();
    init_SMB_addTest_();
    init_SMB_resources_();
    init_SMB_addTests_();
    init_SMB_removeDependentFromHierachy_();
    init_SMB_run_();
    init_SMB_name_();
    init_SMB_name();
    init_SMB_tests();
    init_class_SMB_named_();
    
}