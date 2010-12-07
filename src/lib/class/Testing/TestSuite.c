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
    Send PSend11668 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11673 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11672 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11673);
    Array PThreadedCode11671 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11672, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11673, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11670 = new_Block_with(empty_Array, empty_Array, PThreadedCode11671, 1, PAssign11672);
    // ifTrue:. 
    Send PSend11669 = new_Send((Optr)PSend11668, SMB_ifTrue_, 1, (Optr)PBlock11670);
    Array PThreadedCode11667 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11668, (Optr)&t_send_ifTrue_, (Optr)PSend11669, (Optr)PBlock11670, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11666 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11667, 2, PSend11669, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11666, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11676 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11677 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11679 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11682 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11684 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11685 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11684);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11686 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11683 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11684, (Optr)&t_send1, (Optr)PSend11685, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11686, (Optr)&t_method_return);
    Block PBlock11681 = new_Block_with(PArray11682, empty_Array, PThreadedCode11683, 2, PSend11685, PSend11686);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11687 = new_Send((Optr)PBlock11681, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11680 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11681, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11687, (Optr)&t_method_return);
    Block PBlock11678 = new_Block_with(PArray11679, empty_Array, PThreadedCode11680, 1, PSend11687);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11688 = new_Send((Optr)PSend11676, SMB_inject_into_, 2, (Optr)PSend11677, (Optr)PBlock11678);
    Array PThreadedCode11675 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11676, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11677, (Optr)&t_push_closure, (Optr)PBlock11678, (Optr)&t_send2, (Optr)PSend11688, (Optr)&t_method_return);
    Method PMethod11674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11675, 1, PSend11688);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11674, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11690 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11692 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11693 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11695 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11697 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11696 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11697, (Optr)&t_method_return);
    Block PBlock11694 = new_Block_with(PArray11695, empty_Array, PThreadedCode11696, 1, PSend11697);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11698 = new_Send((Optr)PSend11693, SMB_do_, 1, (Optr)PBlock11694);
    Array PThreadedCode11691 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11692, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11693, (Optr)&t_push_closure, (Optr)PBlock11694, (Optr)&t_send1, (Optr)PSend11698, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11689 = new_Method_with(PArray11690, empty_Array, empty_Array, PThreadedCode11691, 3, PSend11692, PSend11698, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11689, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11700 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11703 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11706 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11705 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11706);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11707 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11709 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11711 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11715 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11716 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11715);
    Array PThreadedCode11714 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11715, (Optr)&t_send1, (Optr)PSend11716, (Optr)&t_block_return);
    Block PBlock11713 = new_Block_with(empty_Array, empty_Array, PThreadedCode11714, 1, PSend11716);
    // ifFalse:. 
    Send PSend11712 = new_Send((Optr)PSend11711, SMB_ifFalse_, 1, (Optr)PBlock11713);
    Array PThreadedCode11710 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11711, (Optr)&t_send_ifFalse_, (Optr)PSend11712, (Optr)PBlock11713, (Optr)&t_method_return);
    Block PBlock11708 = new_Block_with(PArray11709, empty_Array, PThreadedCode11710, 1, PSend11712);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11717 = new_Send((Optr)PSend11707, SMB_do_, 1, (Optr)PBlock11708);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11720 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11719 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11720, (Optr)&t_block_return);
    Block PBlock11718 = new_Block_with(empty_Array, empty_Array, PThreadedCode11719, 1, PSend11720);
    // resources. 
    Send PSend11723 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11725 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11727 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11726 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11727, (Optr)&t_method_return);
    Block PBlock11724 = new_Block_with(PArray11725, empty_Array, PThreadedCode11726, 1, PSend11727);
    // do:. 
    Send PSend11728 = new_Send((Optr)PSend11723, SMB_do_, 1, (Optr)PBlock11724);
    Array PThreadedCode11722 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11723, (Optr)&t_push_closure, (Optr)PBlock11724, (Optr)&t_send1, (Optr)PSend11728, (Optr)&t_block_return);
    Block PBlock11721 = new_Block_with(empty_Array, empty_Array, PThreadedCode11722, 1, PSend11728);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11729 = new_Send((Optr)PBlock11718, SMB_ensure_, 1, (Optr)PBlock11721);
    Array PThreadedCode11704 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11705, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11706, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11707, (Optr)&t_push_closure, (Optr)PBlock11708, (Optr)&t_send1, (Optr)PSend11717, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11718, (Optr)&t_push_closure, (Optr)PBlock11721, (Optr)&t_send1, (Optr)PSend11729, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11702 = new_Block_with(PArray11703, empty_Array, PThreadedCode11704, 4, PAssign11705, PSend11717, PSend11729, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11730 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11702);
    Array PThreadedCode11701 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11702, (Optr)&t_send1, (Optr)PSend11730, (Optr)&t_method_return);
    Method PMethod11699 = new_Method_with(empty_Array, PArray11700, empty_Array, PThreadedCode11701, 1, PSend11730);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11699, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11732 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11734 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11735 = new_Send((Optr)PSend11734, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11733 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11734, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11735, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11731 = new_Method_with(PArray11732, empty_Array, empty_Array, PThreadedCode11733, 2, PSend11735, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11731, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11737 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11739 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11738 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11739, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11736 = new_Method_with(PArray11737, empty_Array, empty_Array, PThreadedCode11738, 2, PAssign11739, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11736, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11741 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11744 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11746 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11745 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11746, (Optr)&t_method_return);
    Block PBlock11743 = new_Block_with(PArray11744, empty_Array, PThreadedCode11745, 1, PSend11746);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11747 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11743);
    Array PThreadedCode11742 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11743, (Optr)&t_send1, (Optr)PSend11747, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11740 = new_Method_with(PArray11741, empty_Array, empty_Array, PThreadedCode11742, 2, PSend11747, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11740, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11749 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11751 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11752 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11754 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11756 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11755 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11756, (Optr)&t_method_return);
    Block PBlock11753 = new_Block_with(PArray11754, empty_Array, PThreadedCode11755, 1, PSend11756);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11757 = new_Send((Optr)PSend11752, SMB_do_, 1, (Optr)PBlock11753);
    Array PThreadedCode11750 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11751, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11752, (Optr)&t_push_closure, (Optr)PBlock11753, (Optr)&t_send1, (Optr)PSend11757, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11748 = new_Method_with(PArray11749, empty_Array, empty_Array, PThreadedCode11750, 3, PSend11751, PSend11757, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11748, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11759 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11761 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11763 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11765 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11764 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11765, (Optr)&t_method_return);
    Block PBlock11762 = new_Block_with(PArray11763, empty_Array, PThreadedCode11764, 1, PSend11765);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11766 = new_Send((Optr)PSend11761, SMB_do_, 1, (Optr)PBlock11762);
    Array PThreadedCode11760 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11761, (Optr)&t_push_closure, (Optr)PBlock11762, (Optr)&t_send1, (Optr)PSend11766, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11758 = new_Method_with(PArray11759, empty_Array, empty_Array, PThreadedCode11760, 2, PSend11766, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11758, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11768 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11770 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11769 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11770, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11767 = new_Method_with(PArray11768, empty_Array, empty_Array, PThreadedCode11769, 2, PAssign11770, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11767, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11772 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11772, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11771, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11775 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11780 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11779 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11780);
    Array PThreadedCode11778 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11779, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11780, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11777 = new_Block_with(empty_Array, empty_Array, PThreadedCode11778, 1, PAssign11779);
    // ifTrue:. 
    Send PSend11776 = new_Send((Optr)PSend11775, SMB_ifTrue_, 1, (Optr)PBlock11777);
    Array PThreadedCode11774 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11775, (Optr)&t_send_ifTrue_, (Optr)PSend11776, (Optr)PBlock11777, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11773 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11774, 2, PSend11776, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11773, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11782 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11785 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11787 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11788 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11786 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11787, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11788, (Optr)&t_method_return);
    Block PBlock11784 = new_Block_with(PArray11785, empty_Array, PThreadedCode11786, 2, PSend11787, PSend11788);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11789 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11790 = new_Send((Optr)PBlock11784, SMB_value_, 1, (Optr)PSend11789);
    Array PThreadedCode11783 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11784, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11789, (Optr)&t_send1, (Optr)PSend11790, (Optr)&t_method_return);
    Method PMethod11781 = new_Method_with(PArray11782, empty_Array, empty_Array, PThreadedCode11783, 1, PSend11790);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11781, HEADER(Testing_TestSuite_Class));
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