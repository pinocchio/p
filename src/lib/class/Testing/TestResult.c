#include <lib/class/Testing/TestResult.h>


Optr layout_Testing_TestResult_Class_class;
Optr slot_Testing_TestResult_timeStamp;
Optr slot_Testing_TestResult_failures;
Optr slot_Testing_TestResult_errors;
Optr slot_Testing_TestResult_passed;
Optr layout_Testing_TestResult;


static void init_SMB_selectResultsForTestCase_() {
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11792 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11793 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11797 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11799 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11801 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11802 = new_Send((Optr)PSend11801, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11800 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11801, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11802, (Optr)&t_method_return);
    Block PBlock11798 = new_Block_with(PArray11799, empty_Array, PThreadedCode11800, 1, PSend11802);
    Array PArray11804 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11806 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11805 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11806, (Optr)&t_method_return);
    Block PBlock11803 = new_Block_with(PArray11804, empty_Array, PThreadedCode11805, 1, PSend11806);
    // select:thenCollect:. 
    Send PSend11796 = new_Send((Optr)PSend11797, SMB_select_thenCollect_, 2, (Optr)PBlock11798, (Optr)PBlock11803);
    Assign PAssign11795 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11796);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11809 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11811 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11813 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11814 = new_Send((Optr)PSend11813, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11812 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11813, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11814, (Optr)&t_method_return);
    Block PBlock11810 = new_Block_with(PArray11811, empty_Array, PThreadedCode11812, 1, PSend11814);
    Array PArray11816 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11818 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11817 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11818, (Optr)&t_method_return);
    Block PBlock11815 = new_Block_with(PArray11816, empty_Array, PThreadedCode11817, 1, PSend11818);
    // select:thenCollect:. 
    Send PSend11808 = new_Send((Optr)PSend11809, SMB_select_thenCollect_, 2, (Optr)PBlock11810, (Optr)PBlock11815);
    Assign PAssign11807 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11808);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11821 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11823 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11825 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11826 = new_Send((Optr)PSend11825, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11824 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11825, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11826, (Optr)&t_method_return);
    Block PBlock11822 = new_Block_with(PArray11823, empty_Array, PThreadedCode11824, 1, PSend11826);
    Array PArray11828 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11830 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11829 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11830, (Optr)&t_method_return);
    Block PBlock11827 = new_Block_with(PArray11828, empty_Array, PThreadedCode11829, 1, PSend11830);
    // select:thenCollect:. 
    Send PSend11820 = new_Send((Optr)PSend11821, SMB_select_thenCollect_, 2, (Optr)PBlock11822, (Optr)PBlock11827);
    Assign PAssign11819 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11820);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11832 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11834 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11835 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11834);
    // asSet. 
    Send PSend11836 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11837 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11836);
    // asSet. 
    Send PSend11838 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11839 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11838);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11840 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11833 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11834, (Optr)&t_send2, (Optr)PSend11835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11836, (Optr)&t_send2, (Optr)PSend11837, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11838, (Optr)&t_send2, (Optr)PSend11839, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11840, (Optr)&t_method_return);
    Block PBlock11831 = new_Block_with(PArray11832, empty_Array, PThreadedCode11833, 4, PSend11835, PSend11837, PSend11839, PSend11840);
    // class. 
    Send PSend11841 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11842 = new_Send((Optr)PSend11841, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11843 = new_Send((Optr)PBlock11831, SMB_value_, 1, (Optr)PSend11842);
    Array PThreadedCode11794 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11795, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11797, (Optr)&t_push_closure, (Optr)PBlock11798, (Optr)&t_push_closure, (Optr)PBlock11803, (Optr)&t_send2, (Optr)PSend11796, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11807, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11809, (Optr)&t_push_closure, (Optr)PBlock11810, (Optr)&t_push_closure, (Optr)PBlock11815, (Optr)&t_send2, (Optr)PSend11808, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11819, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11821, (Optr)&t_push_closure, (Optr)PBlock11822, (Optr)&t_push_closure, (Optr)PBlock11827, (Optr)&t_send2, (Optr)PSend11820, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11831, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11841, (Optr)&t_send0, (Optr)PSend11842, (Optr)&t_send1, (Optr)PSend11843, (Optr)&t_method_return);
    Method PMethod11791 = new_Method_with(PArray11792, PArray11793, empty_Array, PThreadedCode11794, 4, PAssign11795, PAssign11807, PAssign11819, PSend11843);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11791, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11846 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11847 = new_Send((Optr)PSend11846, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11850 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11851 = new_Send((Optr)PSend11850, SMB_not, 0);
    Array PThreadedCode11849 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11850, (Optr)&t_send0, (Optr)PSend11851, (Optr)&t_block_return);
    Block PBlock11848 = new_Block_with(empty_Array, empty_Array, PThreadedCode11849, 1, PSend11851);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11852 = new_Send((Optr)PSend11847, SMB_and_, 1, (Optr)PBlock11848);
    Array PThreadedCode11845 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11846, (Optr)&t_send0, (Optr)PSend11847, (Optr)&t_push_closure, (Optr)PBlock11848, (Optr)&t_send1, (Optr)PSend11852, (Optr)&t_method_return);
    Method PMethod11844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11845, 1, PSend11852);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11844, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11854 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11856 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11858 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11860 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11861 = new_Send((Optr)PSend11860, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11864 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11865 = new_Send((Optr)PSend11864, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11863 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11864, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11865, (Optr)&t_block_return);
    Block PBlock11862 = new_Block_with(empty_Array, empty_Array, PThreadedCode11863, 1, PSend11865);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11866 = new_Send((Optr)PSend11861, SMB_and_, 1, (Optr)PBlock11862);
    Array PThreadedCode11859 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11860, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11861, (Optr)&t_push_closure, (Optr)PBlock11862, (Optr)&t_send1, (Optr)PSend11866, (Optr)&t_method_return);
    Block PBlock11857 = new_Block_with(PArray11858, empty_Array, PThreadedCode11859, 1, PSend11866);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11867 = new_Send((Optr)PSend11856, SMB_anySatisfy_, 1, (Optr)PBlock11857);
    Array PThreadedCode11855 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11856, (Optr)&t_push_closure, (Optr)PBlock11857, (Optr)&t_send1, (Optr)PSend11867, (Optr)&t_method_return);
    Method PMethod11853 = new_Method_with(PArray11854, empty_Array, empty_Array, PThreadedCode11855, 1, PSend11867);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11853, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11870 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11872 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11871 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11872);
    // new. 
    Send PSend11874 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11873 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11874);
    // new. 
    Send PSend11876 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11875 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11876);
    Array PThreadedCode11869 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11870, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11871, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11872, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11873, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11874, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11875, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11876, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11869, 5, PSuper11870, PAssign11871, PAssign11873, PAssign11875, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11868, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11878 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11879 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11883 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11885 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11887 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11886 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11887, (Optr)&t_method_return);
    Block PBlock11884 = new_Block_with(PArray11885, empty_Array, PThreadedCode11886, 1, PSend11887);
    // collect:. 
    Send PSend11882 = new_Send((Optr)PSend11883, SMB_collect_, 1, (Optr)PBlock11884);
    Assign PAssign11881 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11882);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11890 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11892 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11894 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11893 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11894, (Optr)&t_method_return);
    Block PBlock11891 = new_Block_with(PArray11892, empty_Array, PThreadedCode11893, 1, PSend11894);
    // collect:. 
    Send PSend11889 = new_Send((Optr)PSend11890, SMB_collect_, 1, (Optr)PBlock11891);
    Assign PAssign11888 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11889);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11897 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11899 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11901 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11900 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11901, (Optr)&t_method_return);
    Block PBlock11898 = new_Block_with(PArray11899, empty_Array, PThreadedCode11900, 1, PSend11901);
    // collect:. 
    Send PSend11896 = new_Send((Optr)PSend11897, SMB_collect_, 1, (Optr)PBlock11898);
    Assign PAssign11895 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11896);
    // passed. 
    Send PSend11904 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11906 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11908 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11907 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11908, (Optr)&t_method_return);
    Block PBlock11905 = new_Block_with(PArray11906, empty_Array, PThreadedCode11907, 1, PSend11908);
    // collect:. 
    Send PSend11903 = new_Send((Optr)PSend11904, SMB_collect_, 1, (Optr)PBlock11905);
    Assign PAssign11902 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11903);
    // failures. 
    Send PSend11911 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11913 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11915 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11914 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11915, (Optr)&t_method_return);
    Block PBlock11912 = new_Block_with(PArray11913, empty_Array, PThreadedCode11914, 1, PSend11915);
    // collect:. 
    Send PSend11910 = new_Send((Optr)PSend11911, SMB_collect_, 1, (Optr)PBlock11912);
    Assign PAssign11909 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11910);
    // errors. 
    Send PSend11918 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11920 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11922 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11921 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11922, (Optr)&t_method_return);
    Block PBlock11919 = new_Block_with(PArray11920, empty_Array, PThreadedCode11921, 1, PSend11922);
    // collect:. 
    Send PSend11917 = new_Send((Optr)PSend11918, SMB_collect_, 1, (Optr)PBlock11919);
    Assign PAssign11916 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11917);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11923 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11924 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11925 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11926 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11923, (Optr)PSend11924, (Optr)PSend11925);
    Array PThreadedCode11880 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11881, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11883, (Optr)&t_push_closure, (Optr)PBlock11884, (Optr)&t_send1, (Optr)PSend11882, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11888, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11890, (Optr)&t_push_closure, (Optr)PBlock11891, (Optr)&t_send1, (Optr)PSend11889, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11895, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11897, (Optr)&t_push_closure, (Optr)PBlock11898, (Optr)&t_send1, (Optr)PSend11896, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11902, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11904, (Optr)&t_push_closure, (Optr)PBlock11905, (Optr)&t_send1, (Optr)PSend11903, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11909, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11911, (Optr)&t_push_closure, (Optr)PBlock11912, (Optr)&t_send1, (Optr)PSend11910, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11916, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11918, (Optr)&t_push_closure, (Optr)PBlock11919, (Optr)&t_send1, (Optr)PSend11917, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11923, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11924, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11925, (Optr)&t_send3, (Optr)PSend11926, (Optr)&t_method_return);
    Method PMethod11877 = new_Method_with(PArray11878, PArray11879, empty_Array, PThreadedCode11880, 7, PAssign11881, PAssign11888, PAssign11895, PAssign11902, PAssign11909, PAssign11916, PSend11926);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11877, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11929 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11930 = new_Send((Optr)PSend11929, SMB_size, 0);
    Array PThreadedCode11928 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11929, (Optr)&t_send0, (Optr)PSend11930, (Optr)&t_method_return);
    Method PMethod11927 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11928, 1, PSend11930);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11927, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11932 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11934 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11933 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11934, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11931 = new_Method_with(PArray11932, empty_Array, empty_Array, PThreadedCode11933, 2, PAssign11934, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11931, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11937 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11936 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11937, (Optr)&t_method_return);
    Method PMethod11935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11936, 1, PSend11937);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11935, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11940 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11941 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11942 = new_Send((Optr)PSend11940, SMB__append_, 1, (Optr)PSend11941);
    Array PThreadedCode11939 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11940, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11941, (Optr)&t_send1, (Optr)PSend11942, (Optr)&t_method_return);
    Method PMethod11938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11939, 1, PSend11942);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11938, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11944 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11945 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11949 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11952 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11954 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11955 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11956 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11953 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11954, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11956, (Optr)&t_method_return);
    Block PBlock11951 = new_Block_with(PArray11952, empty_Array, PThreadedCode11953, 3, PSend11954, PSend11955, PSend11956);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11957 = new_Send((Optr)PBlock11951, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11959 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11961 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11962 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11960 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11961, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11962, (Optr)&t_method_return);
    Block PBlock11958 = new_Block_with(PArray11959, empty_Array, PThreadedCode11960, 2, PSend11961, PSend11962);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11963 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11958);
    Array PThreadedCode11950 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11951, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11957, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11958, (Optr)&t_send1, (Optr)PSend11963, (Optr)&t_method_return);
    Block PBlock11948 = new_Block_with(PArray11949, empty_Array, PThreadedCode11950, 2, PSend11957, PSend11963);
    Assign PAssign11947 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11948);
    // printOn:. 
    Send PSend11964 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11965 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11966 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11965_Const = new_Constant((Optr)string_11965);
    // value:value:. 
    Send PSend11967 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11965_Const, (Optr)PSend11966);
    String string_11968 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11969 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11968_Const = new_Constant((Optr)string_11968);
    // value:value:. 
    Send PSend11970 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11968_Const, (Optr)PSend11969);
    Array PThreadedCode11946 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11947, (Optr)&t_push_closure, (Optr)PBlock11948, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11965, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11966, (Optr)&t_send2, (Optr)PSend11967, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11968, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11969, (Optr)&t_send2, (Optr)PSend11970, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11943 = new_Method_with(PArray11944, PArray11945, empty_Array, PThreadedCode11946, 5, PAssign11947, PSend11964, PSend11967, PSend11970, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11943, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11972 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray11973 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign11975 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend11980 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode11979 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11980, (Optr)&t_block_return);
    Block PBlock11978 = new_Block_with(empty_Array, empty_Array, PThreadedCode11979, 1, PSend11980);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11981 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11982 = new_Send((Optr)PSend11981, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray11984 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11986 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11987 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend11988 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11985 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11986, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11987, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11988, (Optr)&t_method_return);
    Block PBlock11983 = new_Block_with(PArray11984, empty_Array, PThreadedCode11985, 3, PSend11986, PAssign11987, PSend11988);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11989 = new_Send((Optr)PBlock11978, SMB_on_do_, 2, (Optr)PSend11982, (Optr)PBlock11983);
    Array PThreadedCode11977 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11978, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11981, (Optr)&t_send0, (Optr)PSend11982, (Optr)&t_push_closure, (Optr)PBlock11983, (Optr)&t_send2, (Optr)PSend11989, (Optr)&t_block_return);
    Block PBlock11976 = new_Block_with(empty_Array, empty_Array, PThreadedCode11977, 1, PSend11989);
    // class. 
    Send PSend11990 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11991 = new_Send((Optr)PSend11990, SMB_error, 0);
    Array PArray11993 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend11995 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11996 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend11997 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11994 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11995, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11996, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11997, (Optr)&t_method_return);
    Block PBlock11992 = new_Block_with(PArray11993, empty_Array, PThreadedCode11994, 3, PSend11995, PAssign11996, PSend11997);
    // on:do:. 
    Send PSend11998 = new_Send((Optr)PBlock11976, SMB_on_do_, 2, (Optr)PSend11991, (Optr)PBlock11992);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend12002 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12001 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12002, (Optr)&t_block_return);
    Block PBlock12000 = new_Block_with(empty_Array, empty_Array, PThreadedCode12001, 1, PSend12002);
    // ifTrue:. 
    Send PSend11999 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock12000);
    Array PThreadedCode11974 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign11975, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11976, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11990, (Optr)&t_send0, (Optr)PSend11991, (Optr)&t_push_closure, (Optr)PBlock11992, (Optr)&t_send2, (Optr)PSend11998, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend11999, (Optr)PBlock12000, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11971 = new_Method_with(PArray11972, PArray11973, empty_Array, PThreadedCode11974, 4, PAssign11975, PSend11998, PSend11999, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11971, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12005 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12006 = new_Send((Optr)PSend12005, SMB_size, 0);
    Array PThreadedCode12004 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12005, (Optr)&t_send0, (Optr)PSend12006, (Optr)&t_method_return);
    Method PMethod12003 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12004, 1, PSend12006);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod12003, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12010 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign12009 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend12010);
    Array PThreadedCode12008 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12009, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12010, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12007 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12008, 2, PAssign12009, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod12007, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend12013 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray12015 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12017 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend12018 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend12019 = new_Send((Optr)PSend12017, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend12018);
    Array PThreadedCode12016 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12017, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend12018, (Optr)&t_send2, (Optr)PSend12019, (Optr)&t_method_return);
    Block PBlock12014 = new_Block_with(PArray12015, empty_Array, PThreadedCode12016, 1, PSend12019);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12020 = new_Send((Optr)PSend12013, SMB_do_, 1, (Optr)PBlock12014);
    Array PThreadedCode12012 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12013, (Optr)&t_push_closure, (Optr)PBlock12014, (Optr)&t_send1, (Optr)PSend12020, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12012, 2, PSend12020, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod12011, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray12022 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12024 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12026 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12028 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12029 = new_Send((Optr)PSend12028, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12032 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend12033 = new_Send((Optr)PSend12032, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode12031 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12032, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend12033, (Optr)&t_block_return);
    Block PBlock12030 = new_Block_with(empty_Array, empty_Array, PThreadedCode12031, 1, PSend12033);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend12034 = new_Send((Optr)PSend12029, SMB_and_, 1, (Optr)PBlock12030);
    Array PThreadedCode12027 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12028, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend12029, (Optr)&t_push_closure, (Optr)PBlock12030, (Optr)&t_send1, (Optr)PSend12034, (Optr)&t_method_return);
    Block PBlock12025 = new_Block_with(PArray12026, empty_Array, PThreadedCode12027, 1, PSend12034);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend12035 = new_Send((Optr)PSend12024, SMB_anySatisfy_, 1, (Optr)PBlock12025);
    Array PThreadedCode12023 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12024, (Optr)&t_push_closure, (Optr)PBlock12025, (Optr)&t_send1, (Optr)PSend12035, (Optr)&t_method_return);
    Method PMethod12021 = new_Method_with(PArray12022, empty_Array, empty_Array, PThreadedCode12023, 1, PSend12035);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod12021, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode12037 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod12036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12037, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod12036, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12041 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign12040 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend12041);
    Array PThreadedCode12039 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12040, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend12041, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12039, 2, PAssign12040, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod12038, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12045 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12047 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12046 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12047, (Optr)&t_method_return);
    Block PBlock12044 = new_Block_with(PArray12045, empty_Array, PThreadedCode12046, 1, PSend12047);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12048 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock12044);
    Array PThreadedCode12043 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock12044, (Optr)&t_send1, (Optr)PSend12048, (Optr)&t_method_return);
    Method PMethod12042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12043, 1, PSend12048);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod12042, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12050 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12052 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12053 = new_Send((Optr)PSend12052, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12051 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12052, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12053, (Optr)&t_method_return);
    Method PMethod12049 = new_Method_with(PArray12050, empty_Array, empty_Array, PThreadedCode12051, 1, PSend12053);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod12049, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend12056 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12058 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12060 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode12059 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12060, (Optr)&t_method_return);
    Block PBlock12057 = new_Block_with(PArray12058, empty_Array, PThreadedCode12059, 1, PSend12060);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend12061 = new_Send((Optr)PSend12056, SMB_collect_, 1, (Optr)PBlock12057);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend12062 = new_Send((Optr)PSend12061, SMB_asSet, 0);
    Array PThreadedCode12055 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12056, (Optr)&t_push_closure, (Optr)PBlock12057, (Optr)&t_send1, (Optr)PSend12061, (Optr)&t_send0, (Optr)PSend12062, (Optr)&t_method_return);
    Method PMethod12054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12055, 1, PSend12062);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod12054, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend12065 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12066 = new_Send((Optr)PSend12065, SMB_size, 0);
    Array PThreadedCode12064 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12065, (Optr)&t_send0, (Optr)PSend12066, (Optr)&t_method_return);
    Method PMethod12063 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12064, 1, PSend12066);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod12063, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend12069 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12070 = new_Send((Optr)PSend12069, SMB_size, 0);
    Array PThreadedCode12068 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12069, (Optr)&t_send0, (Optr)PSend12070, (Optr)&t_method_return);
    Method PMethod12067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12068, 1, PSend12070);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod12067, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12074 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend12076 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12077 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12076);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12078 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12075 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12076, (Optr)&t_send1, (Optr)PSend12077, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12078, (Optr)&t_method_return);
    Block PBlock12073 = new_Block_with(PArray12074, empty_Array, PThreadedCode12075, 2, PSend12077, PSend12078);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend12079 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12080 = new_Send((Optr)PBlock12073, SMB_value_, 1, (Optr)PSend12079);
    Array PThreadedCode12072 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock12073, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12079, (Optr)&t_send1, (Optr)PSend12080, (Optr)&t_method_return);
    Method PMethod12071 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12072, 1, PSend12080);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod12071, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend12083 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode12082 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12083, (Optr)&t_method_return);
    Method PMethod12081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12082, 1, PSend12083);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod12081, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12085 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend12087 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12088 = new_Send((Optr)PSend12087, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12086 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12087, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12088, (Optr)&t_method_return);
    Method PMethod12084 = new_Method_with(PArray12085, empty_Array, empty_Array, PThreadedCode12086, 1, PSend12088);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod12084, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend12091 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12092 = new_Send((Optr)PSend12091, SMB_size, 0);
    Array PThreadedCode12090 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12091, (Optr)&t_send0, (Optr)PSend12092, (Optr)&t_method_return);
    Method PMethod12089 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12090, 1, PSend12092);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod12089, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12096 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12098 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12099 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12098);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12100 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend12101 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12100);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12102 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12097 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12098, (Optr)&t_send1, (Optr)PSend12099, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12100, (Optr)&t_send1, (Optr)PSend12101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12102, (Optr)&t_method_return);
    Block PBlock12095 = new_Block_with(PArray12096, empty_Array, PThreadedCode12097, 3, PSend12099, PSend12101, PSend12102);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12103 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12104 = new_Send((Optr)PBlock12095, SMB_value_, 1, (Optr)PSend12103);
    Array PThreadedCode12094 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12095, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend12103, (Optr)&t_send1, (Optr)PSend12104, (Optr)&t_method_return);
    Method PMethod12093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12094, 1, PSend12104);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod12093, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend12107 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12108 = new_Send((Optr)PSend12107, SMB_size, 0);
    Array PThreadedCode12106 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12107, (Optr)&t_send0, (Optr)PSend12108, (Optr)&t_method_return);
    Method PMethod12105 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12106, 1, PSend12108);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod12105, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend12111 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12112 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend12111);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12114 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12116 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12117 = new_Send((Optr)PSend12116, SMB_not, 0);
    Array PThreadedCode12115 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12116, (Optr)&t_send0, (Optr)PSend12117, (Optr)&t_method_return);
    Block PBlock12113 = new_Block_with(PArray12114, empty_Array, PThreadedCode12115, 1, PSend12117);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12118 = new_Send((Optr)PSend12112, SMB_select_, 1, (Optr)PBlock12113);
    Array PThreadedCode12110 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend12111, (Optr)&t_send1, (Optr)PSend12112, (Optr)&t_push_closure, (Optr)PBlock12113, (Optr)&t_send1, (Optr)PSend12118, (Optr)&t_method_return);
    Method PMethod12109 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12110, 1, PSend12118);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod12109, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12122 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12124 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12123 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12124, (Optr)&t_method_return);
    Block PBlock12121 = new_Block_with(PArray12122, empty_Array, PThreadedCode12123, 1, PSend12124);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12125 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock12121);
    Array PThreadedCode12120 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock12121, (Optr)&t_send1, (Optr)PSend12125, (Optr)&t_method_return);
    Method PMethod12119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12120, 1, PSend12125);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod12119, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend12128 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12129 = new_Send((Optr)PSend12128, SMB_size, 0);
    Array PThreadedCode12127 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12128, (Optr)&t_send0, (Optr)PSend12129, (Optr)&t_method_return);
    Method PMethod12126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12127, 1, PSend12129);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod12126, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray12131 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12133 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12135 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12137 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12138 = new_Send((Optr)PSend12137, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12141 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend12142 = new_Send((Optr)PSend12141, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode12140 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12141, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend12142, (Optr)&t_block_return);
    Block PBlock12139 = new_Block_with(empty_Array, empty_Array, PThreadedCode12140, 1, PSend12142);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend12143 = new_Send((Optr)PSend12138, SMB_and_, 1, (Optr)PBlock12139);
    Array PThreadedCode12136 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12137, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend12138, (Optr)&t_push_closure, (Optr)PBlock12139, (Optr)&t_send1, (Optr)PSend12143, (Optr)&t_method_return);
    Block PBlock12134 = new_Block_with(PArray12135, empty_Array, PThreadedCode12136, 1, PSend12143);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend12144 = new_Send((Optr)PSend12133, SMB_anySatisfy_, 1, (Optr)PBlock12134);
    Array PThreadedCode12132 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12133, (Optr)&t_push_closure, (Optr)PBlock12134, (Optr)&t_send1, (Optr)PSend12144, (Optr)&t_method_return);
    Method PMethod12130 = new_Method_with(PArray12131, empty_Array, empty_Array, PThreadedCode12132, 1, PSend12144);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod12130, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12147 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12148 = new_Send((Optr)PSend12147, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12149 = new_Send((Optr)PSend12148, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12146 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12147, (Optr)&t_send0, (Optr)PSend12148, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12149, (Optr)&t_method_return);
    Method PMethod12145 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12146, 1, PSend12149);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod12145, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12153 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12155 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12156 = new_Send((Optr)PSend12155, SMB_not, 0);
    Array PThreadedCode12154 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12155, (Optr)&t_send0, (Optr)PSend12156, (Optr)&t_method_return);
    Block PBlock12152 = new_Block_with(PArray12153, empty_Array, PThreadedCode12154, 1, PSend12156);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12157 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock12152);
    Array PThreadedCode12151 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock12152, (Optr)&t_send1, (Optr)PSend12157, (Optr)&t_method_return);
    Method PMethod12150 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12151, 1, PSend12157);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod12150, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12159 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12161 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12162 = new_Send((Optr)PSend12161, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12160 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12161, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12162, (Optr)&t_method_return);
    Method PMethod12158 = new_Method_with(PArray12159, empty_Array, empty_Array, PThreadedCode12160, 1, PSend12162);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod12158, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend12165 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12166 = new_Send((Optr)PSend12165, SMB_size, 0);
    Array PThreadedCode12164 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12165, (Optr)&t_send0, (Optr)PSend12166, (Optr)&t_method_return);
    Method PMethod12163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12164, 1, PSend12166);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod12163, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12169 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend12170 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12171 = new_Send((Optr)PSend12169, SMB__plus_, 1, (Optr)PSend12170);
    // size. 
    Send PSend12172 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend12173 = new_Send((Optr)PSend12171, SMB__plus_, 1, (Optr)PSend12172);
    Array PThreadedCode12168 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend12169, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend12170, (Optr)&t_send1, (Optr)PSend12171, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend12172, (Optr)&t_send1, (Optr)PSend12173, (Optr)&t_method_return);
    Method PMethod12167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12168, 1, PSend12173);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod12167, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCount, MC_SMB_runCount);
}


static void init_SMB_updateResultsInHistory() {
    Symbol SMB_updateResultsInHistory = new_Symbol(L"updateResultsInHistory");
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend12176 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray12178 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend12180 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray12182 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12184 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend12185 = new_Send((Optr)PSend12184, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode12183 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12184, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend12185, (Optr)&t_method_return);
    Block PBlock12181 = new_Block_with(PArray12182, empty_Array, PThreadedCode12183, 1, PSend12185);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12186 = new_Send((Optr)PSend12180, SMB_do_, 1, (Optr)PBlock12181);
    Array PThreadedCode12179 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend12180, (Optr)&t_push_closure, (Optr)PBlock12181, (Optr)&t_send1, (Optr)PSend12186, (Optr)&t_method_return);
    Block PBlock12177 = new_Block_with(PArray12178, empty_Array, PThreadedCode12179, 1, PSend12186);
    // do:. 
    Send PSend12187 = new_Send((Optr)PSend12176, SMB_do_, 1, (Optr)PBlock12177);
    Array PThreadedCode12175 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12176, (Optr)&t_push_closure, (Optr)PBlock12177, (Optr)&t_send1, (Optr)PSend12187, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12174 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12175, 2, PSend12187, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod12174, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12191 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12193 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12192 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12193, (Optr)&t_method_return);
    Block PBlock12190 = new_Block_with(PArray12191, empty_Array, PThreadedCode12192, 1, PSend12193);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12194 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock12190);
    Array PThreadedCode12189 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock12190, (Optr)&t_send1, (Optr)PSend12194, (Optr)&t_method_return);
    Method PMethod12188 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12189, 1, PSend12194);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod12188, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12198 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12200 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend12201 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend12202 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12203 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12199 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend12200, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend12201, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend12202, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12203, (Optr)&t_method_return);
    Block PBlock12197 = new_Block_with(PArray12198, empty_Array, PThreadedCode12199, 4, PSend12200, PSend12201, PSend12202, PSend12203);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend12204 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12205 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend12204);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12206 = new_Send((Optr)PBlock12197, SMB_value_, 1, (Optr)PSend12205);
    Array PThreadedCode12196 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock12197, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12204, (Optr)&t_send1, (Optr)PSend12205, (Optr)&t_send1, (Optr)PSend12206, (Optr)&t_method_return);
    Method PMethod12195 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12196, 1, PSend12206);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod12195, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12209 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12210 = new_Send((Optr)PSend12209, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12211 = new_Send((Optr)PSend12210, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12208 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12209, (Optr)&t_send0, (Optr)PSend12210, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12211, (Optr)&t_method_return);
    Method PMethod12207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12208, 1, PSend12211);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod12207, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12213 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12215 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode12214 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12215, (Optr)&t_method_return);
    Method PMethod12212 = new_Method_with(PArray12213, empty_Array, empty_Array, PThreadedCode12214, 1, PSend12215);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod12212, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode12217 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod12216 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12217, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod12216, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode12219 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod12218 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12219, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod12218, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray12221 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray12222 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12225 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign12224 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend12225);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12227 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign12226 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend12227);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend12228 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend12229 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12230 = new_Send((Optr)PSend12229, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12231 = new_Send((Optr)PSend12230, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode12223 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12224, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12225, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12226, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12227, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend12228, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend12229, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend12230, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend12231, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12220 = new_Method_with(PArray12221, PArray12222, empty_Array, PThreadedCode12223, 5, PAssign12224, PAssign12226, PSend12228, PSend12231, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod12220, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12235 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend12237 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12238 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend12239 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend12238);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend12240 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend12241 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend12240);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend12242 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend12243 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend12242);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12244 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12236 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12237, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12238, (Optr)&t_send2, (Optr)PSend12239, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12240, (Optr)&t_send2, (Optr)PSend12241, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12242, (Optr)&t_send2, (Optr)PSend12243, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12244, (Optr)&t_method_return);
    Block PBlock12234 = new_Block_with(PArray12235, empty_Array, PThreadedCode12236, 5, PSend12237, PSend12239, PSend12241, PSend12243, PSend12244);
    // new. 
    Send PSend12245 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12246 = new_Send((Optr)PBlock12234, SMB_value_, 1, (Optr)PSend12245);
    Array PThreadedCode12233 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12234, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend12245, (Optr)&t_send1, (Optr)PSend12246, (Optr)&t_method_return);
    Method PMethod12232 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12233, 1, PSend12246);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod12232, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12248 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray12249 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12252 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12255 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign12254 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend12255);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend12258 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12259 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12258);
    Array PThreadedCode12257 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12258, (Optr)&t_send1, (Optr)PSend12259, (Optr)&t_block_return);
    Block PBlock12256 = new_Block_with(empty_Array, empty_Array, PThreadedCode12257, 1, PSend12259);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12260 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock12256);
    Array PThreadedCode12253 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12254, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock12256, (Optr)&t_send1, (Optr)PSend12260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock12251 = new_Block_with(PArray12252, empty_Array, PThreadedCode12253, 3, PAssign12254, PSend12260, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12261 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12251);
    Array PThreadedCode12250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12251, (Optr)&t_send1, (Optr)PSend12261, (Optr)&t_method_return);
    Method PMethod12247 = new_Method_with(PArray12248, PArray12249, empty_Array, PThreadedCode12250, 1, PSend12261);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod12247, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12263 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend12265 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12266 = new_Send((Optr)PSend12265, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12264 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12265, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12266, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12262 = new_Method_with(PArray12263, empty_Array, empty_Array, PThreadedCode12264, 2, PSend12266, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod12262, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12268 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend12270 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12271 = new_Send((Optr)PSend12270, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12269 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12270, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12271, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12267 = new_Method_with(PArray12268, empty_Array, empty_Array, PThreadedCode12269, 2, PSend12271, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod12267, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode12273 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod12272 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12273, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod12272, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray12275 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend12277 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode12276 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend12277, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12274 = new_Method_with(PArray12275, empty_Array, empty_Array, PThreadedCode12276, 2, PSend12277, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod12274, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12279 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray12280 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend12283 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign12282 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend12283);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend12284 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray12286 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12288 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode12290 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock12289 = new_Block_with(empty_Array, empty_Array, PThreadedCode12290, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend12291 = new_Send((Optr)PSend12288, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock12289);
    Array PThreadedCode12287 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend12288, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock12289, (Optr)&t_send2, (Optr)PSend12291, (Optr)&t_method_return);
    Block PBlock12285 = new_Block_with(PArray12286, empty_Array, PThreadedCode12287, 1, PSend12291);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12292 = new_Send((Optr)PSend12284, SMB_do_, 1, (Optr)PBlock12285);
    Array PThreadedCode12281 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12282, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend12283, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12284, (Optr)&t_push_closure, (Optr)PBlock12285, (Optr)&t_send1, (Optr)PSend12292, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12278 = new_Method_with(PArray12279, PArray12280, empty_Array, PThreadedCode12281, 3, PAssign12282, PSend12292, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod12278, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend12295 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode12294 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12295, (Optr)&t_method_return);
    Method PMethod12293 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12294, 1, PSend12295);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod12293, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_error, MC_SMB_error);
}

void init_Testing_TestResult_layout() {
    layout_Testing_TestResult_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_TestResult_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_TestResult_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_TestResult_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_TestResult_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_TestResult_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TestResult = new_Symbol(L"TestResult");
    slot_Testing_TestResult_timeStamp = (Optr)new_Slot(0, L"timeStamp");
    slot_Testing_TestResult_failures = (Optr)new_Slot(1, L"failures");
    slot_Testing_TestResult_errors = (Optr)new_Slot(2, L"errors");
    slot_Testing_TestResult_passed = (Optr)new_Slot(3, L"passed");
    layout_Testing_TestResult = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Testing_TestResult)->values[0] = slot_Testing_TestResult_timeStamp; // timeStamp 
    ((Array)layout_Testing_TestResult)->values[1] = slot_Testing_TestResult_failures; // failures 
    ((Array)layout_Testing_TestResult)->values[2] = slot_Testing_TestResult_errors; // errors 
    ((Array)layout_Testing_TestResult)->values[3] = slot_Testing_TestResult_passed; // passed 
    Testing_TestResult_Class = (Class)new_Class(Object_Class, layout_Testing_TestResult_Class_class);
    Class_set_superclass(Testing_TestResult_Class, Object_Class);
    Testing_TestResult_Class->layout = layout_Testing_TestResult;
    HEADER(Testing_TestResult_Class)->layout = layout_Testing_TestResult_Class_class;
    Testing_TestResult_Class->name = SMB_TestResult;
    
}

void init_Testing_TestResult_methods() {
    init_SMB_selectResultsForTestCase_();
    init_SMB_hasPassed();
    init_SMB_isPassedFor_selector_();
    init_SMB_initialize();
    init_SMB_diff_();
    init_SMB_errorCount();
    init_SMB_timeStamp_();
    init_SMB_errors();
    init_SMB_passed();
    init_SMB_fileOutOn_();
    init_SMB_runCase_();
    init_SMB_failureCount();
    init_SMB_resetFailures();
    init_SMB_dispatchResultsIntoHistory();
    init_SMB_isFailureFor_selector_();
    init_SMB_timeStamp();
    init_SMB_resetErrors();
    init_SMB_unexpectedErrors();
    init_SMB_isFailure_();
    init_SMB_classesTested();
    init_SMB_unexpectedErrorCount();
    init_SMB_passedCount();
    init_SMB_failures();
    init_SMB_correctCount();
    init_SMB_isPassed_();
    init_SMB_expectedPassCount();
    init_SMB_defects();
    init_SMB_expectedDefectCount();
    init_SMB_expectedDefects();
    init_SMB_expectedPasses();
    init_SMB_unexpectedFailureCount();
    init_SMB_isErrorFor_selector_();
    init_SMB_hasErrors();
    init_SMB_unexpectedPasses();
    init_SMB_isError_();
    init_SMB_unexpectedPassCount();
    init_SMB_runCount();
    init_SMB_updateResultsInHistory();
    init_SMB_unexpectedFailures();
    init_SMB_tests();
    init_SMB_hasFailures();
    init_class_SMB_historyAt_();
    init_class_SMB_resumableFailure();
    init_class_SMB_failure();
    init_class_SMB_updateTestHistoryFor_status_();
    init_class_SMB_newTestDictionary();
    init_class_SMB_historyFor_();
    init_class_SMB_signalFailureWith_();
    init_class_SMB_signalErrorWith_();
    init_class_SMB_exError();
    init_class_SMB_historyAt_put_();
    init_class_SMB_removeFromTestHistory_in_();
    init_class_SMB_error();
    
}