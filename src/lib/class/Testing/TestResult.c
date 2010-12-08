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
    Array PArray11819 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11820 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11824 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11826 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11828 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11829 = new_Send((Optr)PSend11828, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11827 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11828, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11829, (Optr)&t_method_return);
    Block PBlock11825 = new_Block_with(PArray11826, empty_Array, PThreadedCode11827, 1, PSend11829);
    Array PArray11831 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11833 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11832 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11833, (Optr)&t_method_return);
    Block PBlock11830 = new_Block_with(PArray11831, empty_Array, PThreadedCode11832, 1, PSend11833);
    // select:thenCollect:. 
    Send PSend11823 = new_Send((Optr)PSend11824, SMB_select_thenCollect_, 2, (Optr)PBlock11825, (Optr)PBlock11830);
    Assign PAssign11822 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11823);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11836 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11838 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11840 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11841 = new_Send((Optr)PSend11840, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11839 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11840, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11841, (Optr)&t_method_return);
    Block PBlock11837 = new_Block_with(PArray11838, empty_Array, PThreadedCode11839, 1, PSend11841);
    Array PArray11843 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11845 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11844 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11845, (Optr)&t_method_return);
    Block PBlock11842 = new_Block_with(PArray11843, empty_Array, PThreadedCode11844, 1, PSend11845);
    // select:thenCollect:. 
    Send PSend11835 = new_Send((Optr)PSend11836, SMB_select_thenCollect_, 2, (Optr)PBlock11837, (Optr)PBlock11842);
    Assign PAssign11834 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11835);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11848 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11850 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11852 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11853 = new_Send((Optr)PSend11852, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11851 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11852, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11853, (Optr)&t_method_return);
    Block PBlock11849 = new_Block_with(PArray11850, empty_Array, PThreadedCode11851, 1, PSend11853);
    Array PArray11855 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11857 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11856 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11857, (Optr)&t_method_return);
    Block PBlock11854 = new_Block_with(PArray11855, empty_Array, PThreadedCode11856, 1, PSend11857);
    // select:thenCollect:. 
    Send PSend11847 = new_Send((Optr)PSend11848, SMB_select_thenCollect_, 2, (Optr)PBlock11849, (Optr)PBlock11854);
    Assign PAssign11846 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11847);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11859 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11861 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11862 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11861);
    // asSet. 
    Send PSend11863 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11864 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11863);
    // asSet. 
    Send PSend11865 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11866 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11865);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11867 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11860 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11861, (Optr)&t_send2, (Optr)PSend11862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11863, (Optr)&t_send2, (Optr)PSend11864, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11865, (Optr)&t_send2, (Optr)PSend11866, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11867, (Optr)&t_method_return);
    Block PBlock11858 = new_Block_with(PArray11859, empty_Array, PThreadedCode11860, 4, PSend11862, PSend11864, PSend11866, PSend11867);
    // class. 
    Send PSend11868 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11869 = new_Send((Optr)PSend11868, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11870 = new_Send((Optr)PBlock11858, SMB_value_, 1, (Optr)PSend11869);
    Array PThreadedCode11821 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11822, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11824, (Optr)&t_push_closure, (Optr)PBlock11825, (Optr)&t_push_closure, (Optr)PBlock11830, (Optr)&t_send2, (Optr)PSend11823, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11834, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11836, (Optr)&t_push_closure, (Optr)PBlock11837, (Optr)&t_push_closure, (Optr)PBlock11842, (Optr)&t_send2, (Optr)PSend11835, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11846, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11848, (Optr)&t_push_closure, (Optr)PBlock11849, (Optr)&t_push_closure, (Optr)PBlock11854, (Optr)&t_send2, (Optr)PSend11847, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11858, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11868, (Optr)&t_send0, (Optr)PSend11869, (Optr)&t_send1, (Optr)PSend11870, (Optr)&t_method_return);
    Method PMethod11818 = new_Method_with(PArray11819, PArray11820, empty_Array, PThreadedCode11821, 4, PAssign11822, PAssign11834, PAssign11846, PSend11870);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11818, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11873 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11874 = new_Send((Optr)PSend11873, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11877 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11878 = new_Send((Optr)PSend11877, SMB_not, 0);
    Array PThreadedCode11876 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11877, (Optr)&t_send0, (Optr)PSend11878, (Optr)&t_block_return);
    Block PBlock11875 = new_Block_with(empty_Array, empty_Array, PThreadedCode11876, 1, PSend11878);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11879 = new_Send((Optr)PSend11874, SMB_and_, 1, (Optr)PBlock11875);
    Array PThreadedCode11872 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11873, (Optr)&t_send0, (Optr)PSend11874, (Optr)&t_push_closure, (Optr)PBlock11875, (Optr)&t_send1, (Optr)PSend11879, (Optr)&t_method_return);
    Method PMethod11871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11872, 1, PSend11879);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11871, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11881 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11883 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11885 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11887 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11888 = new_Send((Optr)PSend11887, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11891 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11892 = new_Send((Optr)PSend11891, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11890 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11891, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11892, (Optr)&t_block_return);
    Block PBlock11889 = new_Block_with(empty_Array, empty_Array, PThreadedCode11890, 1, PSend11892);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11893 = new_Send((Optr)PSend11888, SMB_and_, 1, (Optr)PBlock11889);
    Array PThreadedCode11886 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11887, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11888, (Optr)&t_push_closure, (Optr)PBlock11889, (Optr)&t_send1, (Optr)PSend11893, (Optr)&t_method_return);
    Block PBlock11884 = new_Block_with(PArray11885, empty_Array, PThreadedCode11886, 1, PSend11893);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11894 = new_Send((Optr)PSend11883, SMB_anySatisfy_, 1, (Optr)PBlock11884);
    Array PThreadedCode11882 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11883, (Optr)&t_push_closure, (Optr)PBlock11884, (Optr)&t_send1, (Optr)PSend11894, (Optr)&t_method_return);
    Method PMethod11880 = new_Method_with(PArray11881, empty_Array, empty_Array, PThreadedCode11882, 1, PSend11894);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11880, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11897 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11899 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11898 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11899);
    // new. 
    Send PSend11901 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11900 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11901);
    // new. 
    Send PSend11903 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11902 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11903);
    Array PThreadedCode11896 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11897, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11898, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11899, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11900, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11901, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11902, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11903, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11895 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11896, 5, PSuper11897, PAssign11898, PAssign11900, PAssign11902, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11895, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11905 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11906 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11910 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11912 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11914 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11913 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11914, (Optr)&t_method_return);
    Block PBlock11911 = new_Block_with(PArray11912, empty_Array, PThreadedCode11913, 1, PSend11914);
    // collect:. 
    Send PSend11909 = new_Send((Optr)PSend11910, SMB_collect_, 1, (Optr)PBlock11911);
    Assign PAssign11908 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11909);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11917 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11919 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11921 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11920 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11921, (Optr)&t_method_return);
    Block PBlock11918 = new_Block_with(PArray11919, empty_Array, PThreadedCode11920, 1, PSend11921);
    // collect:. 
    Send PSend11916 = new_Send((Optr)PSend11917, SMB_collect_, 1, (Optr)PBlock11918);
    Assign PAssign11915 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11916);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11924 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11926 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11928 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11927 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11928, (Optr)&t_method_return);
    Block PBlock11925 = new_Block_with(PArray11926, empty_Array, PThreadedCode11927, 1, PSend11928);
    // collect:. 
    Send PSend11923 = new_Send((Optr)PSend11924, SMB_collect_, 1, (Optr)PBlock11925);
    Assign PAssign11922 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11923);
    // passed. 
    Send PSend11931 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11933 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11935 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11934 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11935, (Optr)&t_method_return);
    Block PBlock11932 = new_Block_with(PArray11933, empty_Array, PThreadedCode11934, 1, PSend11935);
    // collect:. 
    Send PSend11930 = new_Send((Optr)PSend11931, SMB_collect_, 1, (Optr)PBlock11932);
    Assign PAssign11929 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11930);
    // failures. 
    Send PSend11938 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11940 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11942 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11941 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11942, (Optr)&t_method_return);
    Block PBlock11939 = new_Block_with(PArray11940, empty_Array, PThreadedCode11941, 1, PSend11942);
    // collect:. 
    Send PSend11937 = new_Send((Optr)PSend11938, SMB_collect_, 1, (Optr)PBlock11939);
    Assign PAssign11936 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11937);
    // errors. 
    Send PSend11945 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11947 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11949 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11948 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11949, (Optr)&t_method_return);
    Block PBlock11946 = new_Block_with(PArray11947, empty_Array, PThreadedCode11948, 1, PSend11949);
    // collect:. 
    Send PSend11944 = new_Send((Optr)PSend11945, SMB_collect_, 1, (Optr)PBlock11946);
    Assign PAssign11943 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11944);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11950 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11951 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11952 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11953 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11950, (Optr)PSend11951, (Optr)PSend11952);
    Array PThreadedCode11907 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11908, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11910, (Optr)&t_push_closure, (Optr)PBlock11911, (Optr)&t_send1, (Optr)PSend11909, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11915, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11917, (Optr)&t_push_closure, (Optr)PBlock11918, (Optr)&t_send1, (Optr)PSend11916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11922, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11924, (Optr)&t_push_closure, (Optr)PBlock11925, (Optr)&t_send1, (Optr)PSend11923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11929, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11931, (Optr)&t_push_closure, (Optr)PBlock11932, (Optr)&t_send1, (Optr)PSend11930, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11936, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11938, (Optr)&t_push_closure, (Optr)PBlock11939, (Optr)&t_send1, (Optr)PSend11937, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11943, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11945, (Optr)&t_push_closure, (Optr)PBlock11946, (Optr)&t_send1, (Optr)PSend11944, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11950, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11951, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11952, (Optr)&t_send3, (Optr)PSend11953, (Optr)&t_method_return);
    Method PMethod11904 = new_Method_with(PArray11905, PArray11906, empty_Array, PThreadedCode11907, 7, PAssign11908, PAssign11915, PAssign11922, PAssign11929, PAssign11936, PAssign11943, PSend11953);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11904, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11956 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11957 = new_Send((Optr)PSend11956, SMB_size, 0);
    Array PThreadedCode11955 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11956, (Optr)&t_send0, (Optr)PSend11957, (Optr)&t_method_return);
    Method PMethod11954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11955, 1, PSend11957);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11954, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11959 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11961 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11960 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11961, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11958 = new_Method_with(PArray11959, empty_Array, empty_Array, PThreadedCode11960, 2, PAssign11961, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11958, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11964 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11963 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11964, (Optr)&t_method_return);
    Method PMethod11962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11963, 1, PSend11964);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11962, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11967 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11968 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11969 = new_Send((Optr)PSend11967, SMB__append_, 1, (Optr)PSend11968);
    Array PThreadedCode11966 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11967, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11968, (Optr)&t_send1, (Optr)PSend11969, (Optr)&t_method_return);
    Method PMethod11965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11966, 1, PSend11969);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11965, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11971 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11972 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11976 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11979 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11981 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11982 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11983 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11980 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11981, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11982, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11983, (Optr)&t_method_return);
    Block PBlock11978 = new_Block_with(PArray11979, empty_Array, PThreadedCode11980, 3, PSend11981, PSend11982, PSend11983);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11984 = new_Send((Optr)PBlock11978, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11986 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11988 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11989 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11987 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11988, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11989, (Optr)&t_method_return);
    Block PBlock11985 = new_Block_with(PArray11986, empty_Array, PThreadedCode11987, 2, PSend11988, PSend11989);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11990 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11985);
    Array PThreadedCode11977 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11978, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11984, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11985, (Optr)&t_send1, (Optr)PSend11990, (Optr)&t_method_return);
    Block PBlock11975 = new_Block_with(PArray11976, empty_Array, PThreadedCode11977, 2, PSend11984, PSend11990);
    Assign PAssign11974 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11975);
    // printOn:. 
    Send PSend11991 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11992 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11993 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11992_Const = new_Constant((Optr)string_11992);
    // value:value:. 
    Send PSend11994 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11992_Const, (Optr)PSend11993);
    String string_11995 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11996 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11995_Const = new_Constant((Optr)string_11995);
    // value:value:. 
    Send PSend11997 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11995_Const, (Optr)PSend11996);
    Array PThreadedCode11973 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11974, (Optr)&t_push_closure, (Optr)PBlock11975, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11991, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11992, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11993, (Optr)&t_send2, (Optr)PSend11994, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11995, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11996, (Optr)&t_send2, (Optr)PSend11997, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11970 = new_Method_with(PArray11971, PArray11972, empty_Array, PThreadedCode11973, 5, PAssign11974, PSend11991, PSend11994, PSend11997, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11970, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11999 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray12000 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign12002 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend12007 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode12006 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12007, (Optr)&t_block_return);
    Block PBlock12005 = new_Block_with(empty_Array, empty_Array, PThreadedCode12006, 1, PSend12007);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12008 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend12009 = new_Send((Optr)PSend12008, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray12011 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12013 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign12014 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend12015 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode12012 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12013, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12014, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend12015, (Optr)&t_method_return);
    Block PBlock12010 = new_Block_with(PArray12011, empty_Array, PThreadedCode12012, 3, PSend12013, PAssign12014, PSend12015);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend12016 = new_Send((Optr)PBlock12005, SMB_on_do_, 2, (Optr)PSend12009, (Optr)PBlock12010);
    Array PThreadedCode12004 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock12005, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12008, (Optr)&t_send0, (Optr)PSend12009, (Optr)&t_push_closure, (Optr)PBlock12010, (Optr)&t_send2, (Optr)PSend12016, (Optr)&t_block_return);
    Block PBlock12003 = new_Block_with(empty_Array, empty_Array, PThreadedCode12004, 1, PSend12016);
    // class. 
    Send PSend12017 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend12018 = new_Send((Optr)PSend12017, SMB_error, 0);
    Array PArray12020 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend12022 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign12023 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend12024 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode12021 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12022, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12023, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend12024, (Optr)&t_method_return);
    Block PBlock12019 = new_Block_with(PArray12020, empty_Array, PThreadedCode12021, 3, PSend12022, PAssign12023, PSend12024);
    // on:do:. 
    Send PSend12025 = new_Send((Optr)PBlock12003, SMB_on_do_, 2, (Optr)PSend12018, (Optr)PBlock12019);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend12029 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12028 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12029, (Optr)&t_block_return);
    Block PBlock12027 = new_Block_with(empty_Array, empty_Array, PThreadedCode12028, 1, PSend12029);
    // ifTrue:. 
    Send PSend12026 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock12027);
    Array PThreadedCode12001 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign12002, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12003, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12017, (Optr)&t_send0, (Optr)PSend12018, (Optr)&t_push_closure, (Optr)PBlock12019, (Optr)&t_send2, (Optr)PSend12025, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend12026, (Optr)PBlock12027, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11998 = new_Method_with(PArray11999, PArray12000, empty_Array, PThreadedCode12001, 4, PAssign12002, PSend12025, PSend12026, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11998, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12032 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12033 = new_Send((Optr)PSend12032, SMB_size, 0);
    Array PThreadedCode12031 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12032, (Optr)&t_send0, (Optr)PSend12033, (Optr)&t_method_return);
    Method PMethod12030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12031, 1, PSend12033);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod12030, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12037 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign12036 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend12037);
    Array PThreadedCode12035 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12036, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12034 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12035, 2, PAssign12036, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod12034, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend12040 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray12042 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12044 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend12045 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend12046 = new_Send((Optr)PSend12044, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend12045);
    Array PThreadedCode12043 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12044, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend12045, (Optr)&t_send2, (Optr)PSend12046, (Optr)&t_method_return);
    Block PBlock12041 = new_Block_with(PArray12042, empty_Array, PThreadedCode12043, 1, PSend12046);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12047 = new_Send((Optr)PSend12040, SMB_do_, 1, (Optr)PBlock12041);
    Array PThreadedCode12039 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12040, (Optr)&t_push_closure, (Optr)PBlock12041, (Optr)&t_send1, (Optr)PSend12047, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12039, 2, PSend12047, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod12038, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray12049 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12051 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12053 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12055 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12056 = new_Send((Optr)PSend12055, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12059 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend12060 = new_Send((Optr)PSend12059, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode12058 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12059, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend12060, (Optr)&t_block_return);
    Block PBlock12057 = new_Block_with(empty_Array, empty_Array, PThreadedCode12058, 1, PSend12060);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend12061 = new_Send((Optr)PSend12056, SMB_and_, 1, (Optr)PBlock12057);
    Array PThreadedCode12054 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12055, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend12056, (Optr)&t_push_closure, (Optr)PBlock12057, (Optr)&t_send1, (Optr)PSend12061, (Optr)&t_method_return);
    Block PBlock12052 = new_Block_with(PArray12053, empty_Array, PThreadedCode12054, 1, PSend12061);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend12062 = new_Send((Optr)PSend12051, SMB_anySatisfy_, 1, (Optr)PBlock12052);
    Array PThreadedCode12050 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12051, (Optr)&t_push_closure, (Optr)PBlock12052, (Optr)&t_send1, (Optr)PSend12062, (Optr)&t_method_return);
    Method PMethod12048 = new_Method_with(PArray12049, empty_Array, empty_Array, PThreadedCode12050, 1, PSend12062);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod12048, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode12064 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod12063 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12064, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod12063, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12068 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign12067 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend12068);
    Array PThreadedCode12066 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12067, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend12068, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12066, 2, PAssign12067, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod12065, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12072 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12074 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12073 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12074, (Optr)&t_method_return);
    Block PBlock12071 = new_Block_with(PArray12072, empty_Array, PThreadedCode12073, 1, PSend12074);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12075 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock12071);
    Array PThreadedCode12070 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock12071, (Optr)&t_send1, (Optr)PSend12075, (Optr)&t_method_return);
    Method PMethod12069 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12070, 1, PSend12075);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod12069, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12077 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12079 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12080 = new_Send((Optr)PSend12079, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12078 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12079, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12080, (Optr)&t_method_return);
    Method PMethod12076 = new_Method_with(PArray12077, empty_Array, empty_Array, PThreadedCode12078, 1, PSend12080);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod12076, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend12083 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12085 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12087 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode12086 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12087, (Optr)&t_method_return);
    Block PBlock12084 = new_Block_with(PArray12085, empty_Array, PThreadedCode12086, 1, PSend12087);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend12088 = new_Send((Optr)PSend12083, SMB_collect_, 1, (Optr)PBlock12084);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend12089 = new_Send((Optr)PSend12088, SMB_asSet, 0);
    Array PThreadedCode12082 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12083, (Optr)&t_push_closure, (Optr)PBlock12084, (Optr)&t_send1, (Optr)PSend12088, (Optr)&t_send0, (Optr)PSend12089, (Optr)&t_method_return);
    Method PMethod12081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12082, 1, PSend12089);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod12081, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend12092 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12093 = new_Send((Optr)PSend12092, SMB_size, 0);
    Array PThreadedCode12091 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12092, (Optr)&t_send0, (Optr)PSend12093, (Optr)&t_method_return);
    Method PMethod12090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12091, 1, PSend12093);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod12090, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend12096 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12097 = new_Send((Optr)PSend12096, SMB_size, 0);
    Array PThreadedCode12095 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12096, (Optr)&t_send0, (Optr)PSend12097, (Optr)&t_method_return);
    Method PMethod12094 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12095, 1, PSend12097);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod12094, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12101 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend12103 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12104 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12103);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12105 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12102 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12103, (Optr)&t_send1, (Optr)PSend12104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12105, (Optr)&t_method_return);
    Block PBlock12100 = new_Block_with(PArray12101, empty_Array, PThreadedCode12102, 2, PSend12104, PSend12105);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend12106 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12107 = new_Send((Optr)PBlock12100, SMB_value_, 1, (Optr)PSend12106);
    Array PThreadedCode12099 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock12100, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12106, (Optr)&t_send1, (Optr)PSend12107, (Optr)&t_method_return);
    Method PMethod12098 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12099, 1, PSend12107);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod12098, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend12110 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode12109 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12110, (Optr)&t_method_return);
    Method PMethod12108 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12109, 1, PSend12110);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod12108, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12112 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend12114 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12115 = new_Send((Optr)PSend12114, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12113 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12114, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12115, (Optr)&t_method_return);
    Method PMethod12111 = new_Method_with(PArray12112, empty_Array, empty_Array, PThreadedCode12113, 1, PSend12115);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod12111, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend12118 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12119 = new_Send((Optr)PSend12118, SMB_size, 0);
    Array PThreadedCode12117 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12118, (Optr)&t_send0, (Optr)PSend12119, (Optr)&t_method_return);
    Method PMethod12116 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12117, 1, PSend12119);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod12116, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12123 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12125 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12126 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12125);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12127 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend12128 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12127);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12129 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12124 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12125, (Optr)&t_send1, (Optr)PSend12126, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12127, (Optr)&t_send1, (Optr)PSend12128, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12129, (Optr)&t_method_return);
    Block PBlock12122 = new_Block_with(PArray12123, empty_Array, PThreadedCode12124, 3, PSend12126, PSend12128, PSend12129);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12130 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12131 = new_Send((Optr)PBlock12122, SMB_value_, 1, (Optr)PSend12130);
    Array PThreadedCode12121 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12122, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend12130, (Optr)&t_send1, (Optr)PSend12131, (Optr)&t_method_return);
    Method PMethod12120 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12121, 1, PSend12131);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod12120, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend12134 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12135 = new_Send((Optr)PSend12134, SMB_size, 0);
    Array PThreadedCode12133 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12134, (Optr)&t_send0, (Optr)PSend12135, (Optr)&t_method_return);
    Method PMethod12132 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12133, 1, PSend12135);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod12132, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend12138 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12139 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend12138);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12141 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12143 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12144 = new_Send((Optr)PSend12143, SMB_not, 0);
    Array PThreadedCode12142 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12143, (Optr)&t_send0, (Optr)PSend12144, (Optr)&t_method_return);
    Block PBlock12140 = new_Block_with(PArray12141, empty_Array, PThreadedCode12142, 1, PSend12144);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12145 = new_Send((Optr)PSend12139, SMB_select_, 1, (Optr)PBlock12140);
    Array PThreadedCode12137 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend12138, (Optr)&t_send1, (Optr)PSend12139, (Optr)&t_push_closure, (Optr)PBlock12140, (Optr)&t_send1, (Optr)PSend12145, (Optr)&t_method_return);
    Method PMethod12136 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12137, 1, PSend12145);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod12136, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12149 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12151 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12150 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12151, (Optr)&t_method_return);
    Block PBlock12148 = new_Block_with(PArray12149, empty_Array, PThreadedCode12150, 1, PSend12151);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12152 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock12148);
    Array PThreadedCode12147 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock12148, (Optr)&t_send1, (Optr)PSend12152, (Optr)&t_method_return);
    Method PMethod12146 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12147, 1, PSend12152);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod12146, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend12155 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12156 = new_Send((Optr)PSend12155, SMB_size, 0);
    Array PThreadedCode12154 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12155, (Optr)&t_send0, (Optr)PSend12156, (Optr)&t_method_return);
    Method PMethod12153 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12154, 1, PSend12156);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod12153, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray12158 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12160 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12162 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12164 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12165 = new_Send((Optr)PSend12164, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12168 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend12169 = new_Send((Optr)PSend12168, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode12167 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12168, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend12169, (Optr)&t_block_return);
    Block PBlock12166 = new_Block_with(empty_Array, empty_Array, PThreadedCode12167, 1, PSend12169);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend12170 = new_Send((Optr)PSend12165, SMB_and_, 1, (Optr)PBlock12166);
    Array PThreadedCode12163 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12164, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend12165, (Optr)&t_push_closure, (Optr)PBlock12166, (Optr)&t_send1, (Optr)PSend12170, (Optr)&t_method_return);
    Block PBlock12161 = new_Block_with(PArray12162, empty_Array, PThreadedCode12163, 1, PSend12170);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend12171 = new_Send((Optr)PSend12160, SMB_anySatisfy_, 1, (Optr)PBlock12161);
    Array PThreadedCode12159 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12160, (Optr)&t_push_closure, (Optr)PBlock12161, (Optr)&t_send1, (Optr)PSend12171, (Optr)&t_method_return);
    Method PMethod12157 = new_Method_with(PArray12158, empty_Array, empty_Array, PThreadedCode12159, 1, PSend12171);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod12157, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12174 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12175 = new_Send((Optr)PSend12174, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12176 = new_Send((Optr)PSend12175, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12173 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12174, (Optr)&t_send0, (Optr)PSend12175, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12176, (Optr)&t_method_return);
    Method PMethod12172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12173, 1, PSend12176);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod12172, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12180 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12182 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12183 = new_Send((Optr)PSend12182, SMB_not, 0);
    Array PThreadedCode12181 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12182, (Optr)&t_send0, (Optr)PSend12183, (Optr)&t_method_return);
    Block PBlock12179 = new_Block_with(PArray12180, empty_Array, PThreadedCode12181, 1, PSend12183);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12184 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock12179);
    Array PThreadedCode12178 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock12179, (Optr)&t_send1, (Optr)PSend12184, (Optr)&t_method_return);
    Method PMethod12177 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12178, 1, PSend12184);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod12177, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12186 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12188 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12189 = new_Send((Optr)PSend12188, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12187 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12188, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12189, (Optr)&t_method_return);
    Method PMethod12185 = new_Method_with(PArray12186, empty_Array, empty_Array, PThreadedCode12187, 1, PSend12189);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod12185, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend12192 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12193 = new_Send((Optr)PSend12192, SMB_size, 0);
    Array PThreadedCode12191 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12192, (Optr)&t_send0, (Optr)PSend12193, (Optr)&t_method_return);
    Method PMethod12190 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12191, 1, PSend12193);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod12190, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12196 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend12197 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12198 = new_Send((Optr)PSend12196, SMB__plus_, 1, (Optr)PSend12197);
    // size. 
    Send PSend12199 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend12200 = new_Send((Optr)PSend12198, SMB__plus_, 1, (Optr)PSend12199);
    Array PThreadedCode12195 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend12196, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend12197, (Optr)&t_send1, (Optr)PSend12198, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend12199, (Optr)&t_send1, (Optr)PSend12200, (Optr)&t_method_return);
    Method PMethod12194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12195, 1, PSend12200);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod12194, Testing_TestResult_Class);
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
    Send PSend12203 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray12205 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend12207 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray12209 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12211 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend12212 = new_Send((Optr)PSend12211, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode12210 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12211, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend12212, (Optr)&t_method_return);
    Block PBlock12208 = new_Block_with(PArray12209, empty_Array, PThreadedCode12210, 1, PSend12212);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12213 = new_Send((Optr)PSend12207, SMB_do_, 1, (Optr)PBlock12208);
    Array PThreadedCode12206 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend12207, (Optr)&t_push_closure, (Optr)PBlock12208, (Optr)&t_send1, (Optr)PSend12213, (Optr)&t_method_return);
    Block PBlock12204 = new_Block_with(PArray12205, empty_Array, PThreadedCode12206, 1, PSend12213);
    // do:. 
    Send PSend12214 = new_Send((Optr)PSend12203, SMB_do_, 1, (Optr)PBlock12204);
    Array PThreadedCode12202 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12203, (Optr)&t_push_closure, (Optr)PBlock12204, (Optr)&t_send1, (Optr)PSend12214, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12202, 2, PSend12214, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod12201, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12218 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12220 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12219 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12220, (Optr)&t_method_return);
    Block PBlock12217 = new_Block_with(PArray12218, empty_Array, PThreadedCode12219, 1, PSend12220);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12221 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock12217);
    Array PThreadedCode12216 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock12217, (Optr)&t_send1, (Optr)PSend12221, (Optr)&t_method_return);
    Method PMethod12215 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12216, 1, PSend12221);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod12215, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12225 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12227 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend12228 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend12229 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12230 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12226 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend12227, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend12228, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend12229, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12230, (Optr)&t_method_return);
    Block PBlock12224 = new_Block_with(PArray12225, empty_Array, PThreadedCode12226, 4, PSend12227, PSend12228, PSend12229, PSend12230);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend12231 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12232 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend12231);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12233 = new_Send((Optr)PBlock12224, SMB_value_, 1, (Optr)PSend12232);
    Array PThreadedCode12223 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock12224, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12231, (Optr)&t_send1, (Optr)PSend12232, (Optr)&t_send1, (Optr)PSend12233, (Optr)&t_method_return);
    Method PMethod12222 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12223, 1, PSend12233);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod12222, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12236 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12237 = new_Send((Optr)PSend12236, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12238 = new_Send((Optr)PSend12237, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12235 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12236, (Optr)&t_send0, (Optr)PSend12237, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12238, (Optr)&t_method_return);
    Method PMethod12234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12235, 1, PSend12238);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod12234, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12240 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12242 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode12241 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12242, (Optr)&t_method_return);
    Method PMethod12239 = new_Method_with(PArray12240, empty_Array, empty_Array, PThreadedCode12241, 1, PSend12242);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod12239, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode12244 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod12243 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12244, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod12243, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode12246 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod12245 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12246, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod12245, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray12248 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray12249 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12252 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign12251 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend12252);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12254 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign12253 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend12254);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend12255 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend12256 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12257 = new_Send((Optr)PSend12256, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12258 = new_Send((Optr)PSend12257, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode12250 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12251, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12252, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12253, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend12255, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend12256, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend12257, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend12258, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12247 = new_Method_with(PArray12248, PArray12249, empty_Array, PThreadedCode12250, 5, PAssign12251, PAssign12253, PSend12255, PSend12258, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod12247, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12262 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend12264 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12265 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend12266 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend12265);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend12267 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend12268 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend12267);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend12269 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend12270 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend12269);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12271 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12263 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12265, (Optr)&t_send2, (Optr)PSend12266, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12267, (Optr)&t_send2, (Optr)PSend12268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12269, (Optr)&t_send2, (Optr)PSend12270, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12271, (Optr)&t_method_return);
    Block PBlock12261 = new_Block_with(PArray12262, empty_Array, PThreadedCode12263, 5, PSend12264, PSend12266, PSend12268, PSend12270, PSend12271);
    // new. 
    Send PSend12272 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12273 = new_Send((Optr)PBlock12261, SMB_value_, 1, (Optr)PSend12272);
    Array PThreadedCode12260 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12261, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend12272, (Optr)&t_send1, (Optr)PSend12273, (Optr)&t_method_return);
    Method PMethod12259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12260, 1, PSend12273);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod12259, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12275 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray12276 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12279 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12282 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign12281 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend12282);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend12285 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12286 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12285);
    Array PThreadedCode12284 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12285, (Optr)&t_send1, (Optr)PSend12286, (Optr)&t_block_return);
    Block PBlock12283 = new_Block_with(empty_Array, empty_Array, PThreadedCode12284, 1, PSend12286);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12287 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock12283);
    Array PThreadedCode12280 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12281, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12282, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock12283, (Optr)&t_send1, (Optr)PSend12287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock12278 = new_Block_with(PArray12279, empty_Array, PThreadedCode12280, 3, PAssign12281, PSend12287, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12288 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12278);
    Array PThreadedCode12277 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12278, (Optr)&t_send1, (Optr)PSend12288, (Optr)&t_method_return);
    Method PMethod12274 = new_Method_with(PArray12275, PArray12276, empty_Array, PThreadedCode12277, 1, PSend12288);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod12274, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12290 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend12292 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12293 = new_Send((Optr)PSend12292, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12291 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12292, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12293, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12289 = new_Method_with(PArray12290, empty_Array, empty_Array, PThreadedCode12291, 2, PSend12293, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod12289, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12295 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend12297 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12298 = new_Send((Optr)PSend12297, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12296 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12297, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12298, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12294 = new_Method_with(PArray12295, empty_Array, empty_Array, PThreadedCode12296, 2, PSend12298, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod12294, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode12300 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod12299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12300, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod12299, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray12302 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend12304 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode12303 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend12304, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12301 = new_Method_with(PArray12302, empty_Array, empty_Array, PThreadedCode12303, 2, PSend12304, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod12301, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12306 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray12307 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend12310 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign12309 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend12310);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend12311 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray12313 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12315 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode12317 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock12316 = new_Block_with(empty_Array, empty_Array, PThreadedCode12317, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend12318 = new_Send((Optr)PSend12315, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock12316);
    Array PThreadedCode12314 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend12315, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock12316, (Optr)&t_send2, (Optr)PSend12318, (Optr)&t_method_return);
    Block PBlock12312 = new_Block_with(PArray12313, empty_Array, PThreadedCode12314, 1, PSend12318);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12319 = new_Send((Optr)PSend12311, SMB_do_, 1, (Optr)PBlock12312);
    Array PThreadedCode12308 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12309, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend12310, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12311, (Optr)&t_push_closure, (Optr)PBlock12312, (Optr)&t_send1, (Optr)PSend12319, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12305 = new_Method_with(PArray12306, PArray12307, empty_Array, PThreadedCode12308, 3, PAssign12309, PSend12319, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod12305, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend12322 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode12321 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12322, (Optr)&t_method_return);
    Method PMethod12320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12321, 1, PSend12322);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod12320, HEADER(Testing_TestResult_Class));
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