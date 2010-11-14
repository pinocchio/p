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
    Send PSend11636 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11641 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11640 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11641);
    Array PThreadedCode11639 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11640, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11641, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11638 = new_Block_with(empty_Array, empty_Array, PThreadedCode11639, 1, PAssign11640);
    // ifTrue:. 
    Send PSend11637 = new_Send((Optr)PSend11636, SMB_ifTrue_, 1, (Optr)PBlock11638);
    Array PThreadedCode11635 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11636, (Optr)&t_send_ifTrue_, (Optr)PSend11637, (Optr)PBlock11638, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11635, 2, PSend11637, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11634, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11644 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11645 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11647 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11650 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11652 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11653 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11652);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11654 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11651 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11652, (Optr)&t_send1, (Optr)PSend11653, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11654, (Optr)&t_method_return);
    Block PBlock11649 = new_Block_with(PArray11650, empty_Array, PThreadedCode11651, 2, PSend11653, PSend11654);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11655 = new_Send((Optr)PBlock11649, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11648 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11649, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11655, (Optr)&t_method_return);
    Block PBlock11646 = new_Block_with(PArray11647, empty_Array, PThreadedCode11648, 1, PSend11655);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11656 = new_Send((Optr)PSend11644, SMB_inject_into_, 2, (Optr)PSend11645, (Optr)PBlock11646);
    Array PThreadedCode11643 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11644, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11645, (Optr)&t_push_closure, (Optr)PBlock11646, (Optr)&t_send2, (Optr)PSend11656, (Optr)&t_method_return);
    Method PMethod11642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11643, 1, PSend11656);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11642, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11658 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11660 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11661 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11663 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11665 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11664 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11665, (Optr)&t_method_return);
    Block PBlock11662 = new_Block_with(PArray11663, empty_Array, PThreadedCode11664, 1, PSend11665);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11666 = new_Send((Optr)PSend11661, SMB_do_, 1, (Optr)PBlock11662);
    Array PThreadedCode11659 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11660, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11661, (Optr)&t_push_closure, (Optr)PBlock11662, (Optr)&t_send1, (Optr)PSend11666, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11657 = new_Method_with(PArray11658, empty_Array, empty_Array, PThreadedCode11659, 3, PSend11660, PSend11666, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11657, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11668 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11671 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11674 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11673 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11674);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11675 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11677 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11679 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11683 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11684 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11683);
    Array PThreadedCode11682 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11683, (Optr)&t_send1, (Optr)PSend11684, (Optr)&t_block_return);
    Block PBlock11681 = new_Block_with(empty_Array, empty_Array, PThreadedCode11682, 1, PSend11684);
    // ifFalse:. 
    Send PSend11680 = new_Send((Optr)PSend11679, SMB_ifFalse_, 1, (Optr)PBlock11681);
    Array PThreadedCode11678 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11679, (Optr)&t_send_ifFalse_, (Optr)PSend11680, (Optr)PBlock11681, (Optr)&t_method_return);
    Block PBlock11676 = new_Block_with(PArray11677, empty_Array, PThreadedCode11678, 1, PSend11680);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11685 = new_Send((Optr)PSend11675, SMB_do_, 1, (Optr)PBlock11676);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11688 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11687 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11688, (Optr)&t_block_return);
    Block PBlock11686 = new_Block_with(empty_Array, empty_Array, PThreadedCode11687, 1, PSend11688);
    // resources. 
    Send PSend11691 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11693 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11695 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11694 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11695, (Optr)&t_method_return);
    Block PBlock11692 = new_Block_with(PArray11693, empty_Array, PThreadedCode11694, 1, PSend11695);
    // do:. 
    Send PSend11696 = new_Send((Optr)PSend11691, SMB_do_, 1, (Optr)PBlock11692);
    Array PThreadedCode11690 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11691, (Optr)&t_push_closure, (Optr)PBlock11692, (Optr)&t_send1, (Optr)PSend11696, (Optr)&t_block_return);
    Block PBlock11689 = new_Block_with(empty_Array, empty_Array, PThreadedCode11690, 1, PSend11696);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11697 = new_Send((Optr)PBlock11686, SMB_ensure_, 1, (Optr)PBlock11689);
    Array PThreadedCode11672 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11673, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11674, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11675, (Optr)&t_push_closure, (Optr)PBlock11676, (Optr)&t_send1, (Optr)PSend11685, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11686, (Optr)&t_push_closure, (Optr)PBlock11689, (Optr)&t_send1, (Optr)PSend11697, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11670 = new_Block_with(PArray11671, empty_Array, PThreadedCode11672, 4, PAssign11673, PSend11685, PSend11697, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11698 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11670);
    Array PThreadedCode11669 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11670, (Optr)&t_send1, (Optr)PSend11698, (Optr)&t_method_return);
    Method PMethod11667 = new_Method_with(empty_Array, PArray11668, empty_Array, PThreadedCode11669, 1, PSend11698);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11667, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11700 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11702 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11703 = new_Send((Optr)PSend11702, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11701 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11702, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11703, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11699 = new_Method_with(PArray11700, empty_Array, empty_Array, PThreadedCode11701, 2, PSend11703, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11699, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11705 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11707 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11706 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11707, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11704 = new_Method_with(PArray11705, empty_Array, empty_Array, PThreadedCode11706, 2, PAssign11707, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11704, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11709 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11712 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11714 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11713 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11714, (Optr)&t_method_return);
    Block PBlock11711 = new_Block_with(PArray11712, empty_Array, PThreadedCode11713, 1, PSend11714);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11715 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11711);
    Array PThreadedCode11710 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11711, (Optr)&t_send1, (Optr)PSend11715, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11708 = new_Method_with(PArray11709, empty_Array, empty_Array, PThreadedCode11710, 2, PSend11715, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11708, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11717 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11719 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11720 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11722 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11724 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11723 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11724, (Optr)&t_method_return);
    Block PBlock11721 = new_Block_with(PArray11722, empty_Array, PThreadedCode11723, 1, PSend11724);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11725 = new_Send((Optr)PSend11720, SMB_do_, 1, (Optr)PBlock11721);
    Array PThreadedCode11718 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11719, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11720, (Optr)&t_push_closure, (Optr)PBlock11721, (Optr)&t_send1, (Optr)PSend11725, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11716 = new_Method_with(PArray11717, empty_Array, empty_Array, PThreadedCode11718, 3, PSend11719, PSend11725, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11716, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11727 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11729 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11731 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11733 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11732 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11733, (Optr)&t_method_return);
    Block PBlock11730 = new_Block_with(PArray11731, empty_Array, PThreadedCode11732, 1, PSend11733);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11734 = new_Send((Optr)PSend11729, SMB_do_, 1, (Optr)PBlock11730);
    Array PThreadedCode11728 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11729, (Optr)&t_push_closure, (Optr)PBlock11730, (Optr)&t_send1, (Optr)PSend11734, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11726 = new_Method_with(PArray11727, empty_Array, empty_Array, PThreadedCode11728, 2, PSend11734, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11726, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11736 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11738 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11737 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11738, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11735 = new_Method_with(PArray11736, empty_Array, empty_Array, PThreadedCode11737, 2, PAssign11738, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11735, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11740 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11740, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11739, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11743 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11748 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11747 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11748);
    Array PThreadedCode11746 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11747, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11748, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11745 = new_Block_with(empty_Array, empty_Array, PThreadedCode11746, 1, PAssign11747);
    // ifTrue:. 
    Send PSend11744 = new_Send((Optr)PSend11743, SMB_ifTrue_, 1, (Optr)PBlock11745);
    Array PThreadedCode11742 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11743, (Optr)&t_send_ifTrue_, (Optr)PSend11744, (Optr)PBlock11745, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11741 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11742, 2, PSend11744, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11741, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11750 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11753 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11755 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11756 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11754 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11756, (Optr)&t_method_return);
    Block PBlock11752 = new_Block_with(PArray11753, empty_Array, PThreadedCode11754, 2, PSend11755, PSend11756);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11757 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11758 = new_Send((Optr)PBlock11752, SMB_value_, 1, (Optr)PSend11757);
    Array PThreadedCode11751 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11752, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11757, (Optr)&t_send1, (Optr)PSend11758, (Optr)&t_method_return);
    Method PMethod11749 = new_Method_with(PArray11750, empty_Array, empty_Array, PThreadedCode11751, 1, PSend11758);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11749, HEADER(Testing_TestSuite_Class));
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