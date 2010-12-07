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
    Send PSend11634 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11639 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11638 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11639);
    Array PThreadedCode11637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11638, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11639, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11636 = new_Block_with(empty_Array, empty_Array, PThreadedCode11637, 1, PAssign11638);
    // ifTrue:. 
    Send PSend11635 = new_Send((Optr)PSend11634, SMB_ifTrue_, 1, (Optr)PBlock11636);
    Array PThreadedCode11633 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11634, (Optr)&t_send_ifTrue_, (Optr)PSend11635, (Optr)PBlock11636, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11633, 2, PSend11635, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11632, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11642 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11643 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11645 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11648 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11650 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11651 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11650);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11652 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11649 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11650, (Optr)&t_send1, (Optr)PSend11651, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11652, (Optr)&t_method_return);
    Block PBlock11647 = new_Block_with(PArray11648, empty_Array, PThreadedCode11649, 2, PSend11651, PSend11652);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11653 = new_Send((Optr)PBlock11647, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11647, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11653, (Optr)&t_method_return);
    Block PBlock11644 = new_Block_with(PArray11645, empty_Array, PThreadedCode11646, 1, PSend11653);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11654 = new_Send((Optr)PSend11642, SMB_inject_into_, 2, (Optr)PSend11643, (Optr)PBlock11644);
    Array PThreadedCode11641 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11642, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11643, (Optr)&t_push_closure, (Optr)PBlock11644, (Optr)&t_send2, (Optr)PSend11654, (Optr)&t_method_return);
    Method PMethod11640 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11641, 1, PSend11654);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11640, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11656 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11658 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11659 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11661 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11663 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11662 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11663, (Optr)&t_method_return);
    Block PBlock11660 = new_Block_with(PArray11661, empty_Array, PThreadedCode11662, 1, PSend11663);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11664 = new_Send((Optr)PSend11659, SMB_do_, 1, (Optr)PBlock11660);
    Array PThreadedCode11657 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11658, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11659, (Optr)&t_push_closure, (Optr)PBlock11660, (Optr)&t_send1, (Optr)PSend11664, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11655 = new_Method_with(PArray11656, empty_Array, empty_Array, PThreadedCode11657, 3, PSend11658, PSend11664, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11655, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11666 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11669 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11672 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11671 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11672);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11673 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11675 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11677 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11681 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11682 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11681);
    Array PThreadedCode11680 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11681, (Optr)&t_send1, (Optr)PSend11682, (Optr)&t_block_return);
    Block PBlock11679 = new_Block_with(empty_Array, empty_Array, PThreadedCode11680, 1, PSend11682);
    // ifFalse:. 
    Send PSend11678 = new_Send((Optr)PSend11677, SMB_ifFalse_, 1, (Optr)PBlock11679);
    Array PThreadedCode11676 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11677, (Optr)&t_send_ifFalse_, (Optr)PSend11678, (Optr)PBlock11679, (Optr)&t_method_return);
    Block PBlock11674 = new_Block_with(PArray11675, empty_Array, PThreadedCode11676, 1, PSend11678);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11683 = new_Send((Optr)PSend11673, SMB_do_, 1, (Optr)PBlock11674);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11686 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11685 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11686, (Optr)&t_block_return);
    Block PBlock11684 = new_Block_with(empty_Array, empty_Array, PThreadedCode11685, 1, PSend11686);
    // resources. 
    Send PSend11689 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11691 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11693 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11692 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11693, (Optr)&t_method_return);
    Block PBlock11690 = new_Block_with(PArray11691, empty_Array, PThreadedCode11692, 1, PSend11693);
    // do:. 
    Send PSend11694 = new_Send((Optr)PSend11689, SMB_do_, 1, (Optr)PBlock11690);
    Array PThreadedCode11688 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11689, (Optr)&t_push_closure, (Optr)PBlock11690, (Optr)&t_send1, (Optr)PSend11694, (Optr)&t_block_return);
    Block PBlock11687 = new_Block_with(empty_Array, empty_Array, PThreadedCode11688, 1, PSend11694);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11695 = new_Send((Optr)PBlock11684, SMB_ensure_, 1, (Optr)PBlock11687);
    Array PThreadedCode11670 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11671, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11672, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11673, (Optr)&t_push_closure, (Optr)PBlock11674, (Optr)&t_send1, (Optr)PSend11683, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11684, (Optr)&t_push_closure, (Optr)PBlock11687, (Optr)&t_send1, (Optr)PSend11695, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11668 = new_Block_with(PArray11669, empty_Array, PThreadedCode11670, 4, PAssign11671, PSend11683, PSend11695, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11696 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11668);
    Array PThreadedCode11667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11668, (Optr)&t_send1, (Optr)PSend11696, (Optr)&t_method_return);
    Method PMethod11665 = new_Method_with(empty_Array, PArray11666, empty_Array, PThreadedCode11667, 1, PSend11696);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11665, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11698 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11700 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11701 = new_Send((Optr)PSend11700, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11699 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11700, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11701, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11697 = new_Method_with(PArray11698, empty_Array, empty_Array, PThreadedCode11699, 2, PSend11701, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11697, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11703 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11705 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11704 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11705, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11702 = new_Method_with(PArray11703, empty_Array, empty_Array, PThreadedCode11704, 2, PAssign11705, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11702, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11707 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11710 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11712 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11711 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11712, (Optr)&t_method_return);
    Block PBlock11709 = new_Block_with(PArray11710, empty_Array, PThreadedCode11711, 1, PSend11712);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11713 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11709);
    Array PThreadedCode11708 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11709, (Optr)&t_send1, (Optr)PSend11713, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11706 = new_Method_with(PArray11707, empty_Array, empty_Array, PThreadedCode11708, 2, PSend11713, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11706, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11715 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11717 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11718 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11720 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11722 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11722, (Optr)&t_method_return);
    Block PBlock11719 = new_Block_with(PArray11720, empty_Array, PThreadedCode11721, 1, PSend11722);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11723 = new_Send((Optr)PSend11718, SMB_do_, 1, (Optr)PBlock11719);
    Array PThreadedCode11716 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11717, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11718, (Optr)&t_push_closure, (Optr)PBlock11719, (Optr)&t_send1, (Optr)PSend11723, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11714 = new_Method_with(PArray11715, empty_Array, empty_Array, PThreadedCode11716, 3, PSend11717, PSend11723, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11714, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11725 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11727 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11729 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11731 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11730 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11731, (Optr)&t_method_return);
    Block PBlock11728 = new_Block_with(PArray11729, empty_Array, PThreadedCode11730, 1, PSend11731);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11732 = new_Send((Optr)PSend11727, SMB_do_, 1, (Optr)PBlock11728);
    Array PThreadedCode11726 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11727, (Optr)&t_push_closure, (Optr)PBlock11728, (Optr)&t_send1, (Optr)PSend11732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11724 = new_Method_with(PArray11725, empty_Array, empty_Array, PThreadedCode11726, 2, PSend11732, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11724, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11734 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11736 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11735 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11736, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11733 = new_Method_with(PArray11734, empty_Array, empty_Array, PThreadedCode11735, 2, PAssign11736, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11733, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11738 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11738, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11737, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11741 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11746 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11745 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11746);
    Array PThreadedCode11744 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11745, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11746, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11743 = new_Block_with(empty_Array, empty_Array, PThreadedCode11744, 1, PAssign11745);
    // ifTrue:. 
    Send PSend11742 = new_Send((Optr)PSend11741, SMB_ifTrue_, 1, (Optr)PBlock11743);
    Array PThreadedCode11740 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11741, (Optr)&t_send_ifTrue_, (Optr)PSend11742, (Optr)PBlock11743, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11740, 2, PSend11742, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11739, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11748 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11751 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11753 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11754 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11752 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11753, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11754, (Optr)&t_method_return);
    Block PBlock11750 = new_Block_with(PArray11751, empty_Array, PThreadedCode11752, 2, PSend11753, PSend11754);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11755 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11756 = new_Send((Optr)PBlock11750, SMB_value_, 1, (Optr)PSend11755);
    Array PThreadedCode11749 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11750, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11755, (Optr)&t_send1, (Optr)PSend11756, (Optr)&t_method_return);
    Method PMethod11747 = new_Method_with(PArray11748, empty_Array, empty_Array, PThreadedCode11749, 1, PSend11756);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11747, HEADER(Testing_TestSuite_Class));
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