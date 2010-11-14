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
    Array PArray11760 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11761 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11765 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11767 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11769 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11770 = new_Send((Optr)PSend11769, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11768 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11769, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11770, (Optr)&t_method_return);
    Block PBlock11766 = new_Block_with(PArray11767, empty_Array, PThreadedCode11768, 1, PSend11770);
    Array PArray11772 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11774 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11773 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11774, (Optr)&t_method_return);
    Block PBlock11771 = new_Block_with(PArray11772, empty_Array, PThreadedCode11773, 1, PSend11774);
    // select:thenCollect:. 
    Send PSend11764 = new_Send((Optr)PSend11765, SMB_select_thenCollect_, 2, (Optr)PBlock11766, (Optr)PBlock11771);
    Assign PAssign11763 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11764);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11777 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11779 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11781 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11782 = new_Send((Optr)PSend11781, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11780 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11781, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11782, (Optr)&t_method_return);
    Block PBlock11778 = new_Block_with(PArray11779, empty_Array, PThreadedCode11780, 1, PSend11782);
    Array PArray11784 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11786 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11785 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11786, (Optr)&t_method_return);
    Block PBlock11783 = new_Block_with(PArray11784, empty_Array, PThreadedCode11785, 1, PSend11786);
    // select:thenCollect:. 
    Send PSend11776 = new_Send((Optr)PSend11777, SMB_select_thenCollect_, 2, (Optr)PBlock11778, (Optr)PBlock11783);
    Assign PAssign11775 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11776);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11789 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11791 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11793 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11794 = new_Send((Optr)PSend11793, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11792 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11793, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11794, (Optr)&t_method_return);
    Block PBlock11790 = new_Block_with(PArray11791, empty_Array, PThreadedCode11792, 1, PSend11794);
    Array PArray11796 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11798 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11797 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11798, (Optr)&t_method_return);
    Block PBlock11795 = new_Block_with(PArray11796, empty_Array, PThreadedCode11797, 1, PSend11798);
    // select:thenCollect:. 
    Send PSend11788 = new_Send((Optr)PSend11789, SMB_select_thenCollect_, 2, (Optr)PBlock11790, (Optr)PBlock11795);
    Assign PAssign11787 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11788);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11800 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11802 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11803 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11802);
    // asSet. 
    Send PSend11804 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11805 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11804);
    // asSet. 
    Send PSend11806 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11807 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11806);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11808 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11801 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11802, (Optr)&t_send2, (Optr)PSend11803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11804, (Optr)&t_send2, (Optr)PSend11805, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11806, (Optr)&t_send2, (Optr)PSend11807, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11808, (Optr)&t_method_return);
    Block PBlock11799 = new_Block_with(PArray11800, empty_Array, PThreadedCode11801, 4, PSend11803, PSend11805, PSend11807, PSend11808);
    // class. 
    Send PSend11809 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11810 = new_Send((Optr)PSend11809, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11811 = new_Send((Optr)PBlock11799, SMB_value_, 1, (Optr)PSend11810);
    Array PThreadedCode11762 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11763, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11765, (Optr)&t_push_closure, (Optr)PBlock11766, (Optr)&t_push_closure, (Optr)PBlock11771, (Optr)&t_send2, (Optr)PSend11764, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11775, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11777, (Optr)&t_push_closure, (Optr)PBlock11778, (Optr)&t_push_closure, (Optr)PBlock11783, (Optr)&t_send2, (Optr)PSend11776, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11787, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11789, (Optr)&t_push_closure, (Optr)PBlock11790, (Optr)&t_push_closure, (Optr)PBlock11795, (Optr)&t_send2, (Optr)PSend11788, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11799, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11809, (Optr)&t_send0, (Optr)PSend11810, (Optr)&t_send1, (Optr)PSend11811, (Optr)&t_method_return);
    Method PMethod11759 = new_Method_with(PArray11760, PArray11761, empty_Array, PThreadedCode11762, 4, PAssign11763, PAssign11775, PAssign11787, PSend11811);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11759, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11814 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11815 = new_Send((Optr)PSend11814, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11818 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11819 = new_Send((Optr)PSend11818, SMB_not, 0);
    Array PThreadedCode11817 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11818, (Optr)&t_send0, (Optr)PSend11819, (Optr)&t_block_return);
    Block PBlock11816 = new_Block_with(empty_Array, empty_Array, PThreadedCode11817, 1, PSend11819);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11820 = new_Send((Optr)PSend11815, SMB_and_, 1, (Optr)PBlock11816);
    Array PThreadedCode11813 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11814, (Optr)&t_send0, (Optr)PSend11815, (Optr)&t_push_closure, (Optr)PBlock11816, (Optr)&t_send1, (Optr)PSend11820, (Optr)&t_method_return);
    Method PMethod11812 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11813, 1, PSend11820);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11812, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11822 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11824 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11826 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11828 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11829 = new_Send((Optr)PSend11828, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11832 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11833 = new_Send((Optr)PSend11832, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11831 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11832, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11833, (Optr)&t_block_return);
    Block PBlock11830 = new_Block_with(empty_Array, empty_Array, PThreadedCode11831, 1, PSend11833);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11834 = new_Send((Optr)PSend11829, SMB_and_, 1, (Optr)PBlock11830);
    Array PThreadedCode11827 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11828, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11829, (Optr)&t_push_closure, (Optr)PBlock11830, (Optr)&t_send1, (Optr)PSend11834, (Optr)&t_method_return);
    Block PBlock11825 = new_Block_with(PArray11826, empty_Array, PThreadedCode11827, 1, PSend11834);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11835 = new_Send((Optr)PSend11824, SMB_anySatisfy_, 1, (Optr)PBlock11825);
    Array PThreadedCode11823 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11824, (Optr)&t_push_closure, (Optr)PBlock11825, (Optr)&t_send1, (Optr)PSend11835, (Optr)&t_method_return);
    Method PMethod11821 = new_Method_with(PArray11822, empty_Array, empty_Array, PThreadedCode11823, 1, PSend11835);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11821, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11838 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11840 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11839 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11840);
    // new. 
    Send PSend11842 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11841 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11842);
    // new. 
    Send PSend11844 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11843 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11844);
    Array PThreadedCode11837 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11838, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11839, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11840, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11841, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11843, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11844, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11837, 5, PSuper11838, PAssign11839, PAssign11841, PAssign11843, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11836, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11846 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11847 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11851 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11853 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11855 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11854 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11855, (Optr)&t_method_return);
    Block PBlock11852 = new_Block_with(PArray11853, empty_Array, PThreadedCode11854, 1, PSend11855);
    // collect:. 
    Send PSend11850 = new_Send((Optr)PSend11851, SMB_collect_, 1, (Optr)PBlock11852);
    Assign PAssign11849 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11850);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11858 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11860 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11862 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11861 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11862, (Optr)&t_method_return);
    Block PBlock11859 = new_Block_with(PArray11860, empty_Array, PThreadedCode11861, 1, PSend11862);
    // collect:. 
    Send PSend11857 = new_Send((Optr)PSend11858, SMB_collect_, 1, (Optr)PBlock11859);
    Assign PAssign11856 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11857);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11865 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11867 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11869 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11868 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11869, (Optr)&t_method_return);
    Block PBlock11866 = new_Block_with(PArray11867, empty_Array, PThreadedCode11868, 1, PSend11869);
    // collect:. 
    Send PSend11864 = new_Send((Optr)PSend11865, SMB_collect_, 1, (Optr)PBlock11866);
    Assign PAssign11863 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11864);
    // passed. 
    Send PSend11872 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11874 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11876 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11875 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11876, (Optr)&t_method_return);
    Block PBlock11873 = new_Block_with(PArray11874, empty_Array, PThreadedCode11875, 1, PSend11876);
    // collect:. 
    Send PSend11871 = new_Send((Optr)PSend11872, SMB_collect_, 1, (Optr)PBlock11873);
    Assign PAssign11870 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11871);
    // failures. 
    Send PSend11879 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11881 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11883 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11882 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11883, (Optr)&t_method_return);
    Block PBlock11880 = new_Block_with(PArray11881, empty_Array, PThreadedCode11882, 1, PSend11883);
    // collect:. 
    Send PSend11878 = new_Send((Optr)PSend11879, SMB_collect_, 1, (Optr)PBlock11880);
    Assign PAssign11877 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11878);
    // errors. 
    Send PSend11886 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11888 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11890 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11889 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11890, (Optr)&t_method_return);
    Block PBlock11887 = new_Block_with(PArray11888, empty_Array, PThreadedCode11889, 1, PSend11890);
    // collect:. 
    Send PSend11885 = new_Send((Optr)PSend11886, SMB_collect_, 1, (Optr)PBlock11887);
    Assign PAssign11884 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11885);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11891 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11892 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11893 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11894 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11891, (Optr)PSend11892, (Optr)PSend11893);
    Array PThreadedCode11848 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11849, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11851, (Optr)&t_push_closure, (Optr)PBlock11852, (Optr)&t_send1, (Optr)PSend11850, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11856, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11858, (Optr)&t_push_closure, (Optr)PBlock11859, (Optr)&t_send1, (Optr)PSend11857, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11863, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11865, (Optr)&t_push_closure, (Optr)PBlock11866, (Optr)&t_send1, (Optr)PSend11864, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11870, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11872, (Optr)&t_push_closure, (Optr)PBlock11873, (Optr)&t_send1, (Optr)PSend11871, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11877, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11879, (Optr)&t_push_closure, (Optr)PBlock11880, (Optr)&t_send1, (Optr)PSend11878, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11884, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11886, (Optr)&t_push_closure, (Optr)PBlock11887, (Optr)&t_send1, (Optr)PSend11885, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11891, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11892, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11893, (Optr)&t_send3, (Optr)PSend11894, (Optr)&t_method_return);
    Method PMethod11845 = new_Method_with(PArray11846, PArray11847, empty_Array, PThreadedCode11848, 7, PAssign11849, PAssign11856, PAssign11863, PAssign11870, PAssign11877, PAssign11884, PSend11894);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11845, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11897 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11898 = new_Send((Optr)PSend11897, SMB_size, 0);
    Array PThreadedCode11896 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11897, (Optr)&t_send0, (Optr)PSend11898, (Optr)&t_method_return);
    Method PMethod11895 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11896, 1, PSend11898);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11895, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11900 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11902 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11901 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11902, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11899 = new_Method_with(PArray11900, empty_Array, empty_Array, PThreadedCode11901, 2, PAssign11902, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11899, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11905 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11904 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11905, (Optr)&t_method_return);
    Method PMethod11903 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11904, 1, PSend11905);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11903, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11908 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11909 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11910 = new_Send((Optr)PSend11908, SMB__append_, 1, (Optr)PSend11909);
    Array PThreadedCode11907 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11908, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11909, (Optr)&t_send1, (Optr)PSend11910, (Optr)&t_method_return);
    Method PMethod11906 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11907, 1, PSend11910);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11906, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11912 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11913 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11917 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11920 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11922 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11923 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11924 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11921 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11922, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11924, (Optr)&t_method_return);
    Block PBlock11919 = new_Block_with(PArray11920, empty_Array, PThreadedCode11921, 3, PSend11922, PSend11923, PSend11924);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11925 = new_Send((Optr)PBlock11919, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11927 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11929 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11930 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11928 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11929, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11930, (Optr)&t_method_return);
    Block PBlock11926 = new_Block_with(PArray11927, empty_Array, PThreadedCode11928, 2, PSend11929, PSend11930);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11931 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11926);
    Array PThreadedCode11918 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11919, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11925, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11926, (Optr)&t_send1, (Optr)PSend11931, (Optr)&t_method_return);
    Block PBlock11916 = new_Block_with(PArray11917, empty_Array, PThreadedCode11918, 2, PSend11925, PSend11931);
    Assign PAssign11915 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11916);
    // printOn:. 
    Send PSend11932 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11933 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11934 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11933_Const = new_Constant((Optr)string_11933);
    // value:value:. 
    Send PSend11935 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11933_Const, (Optr)PSend11934);
    String string_11936 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11937 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11936_Const = new_Constant((Optr)string_11936);
    // value:value:. 
    Send PSend11938 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11936_Const, (Optr)PSend11937);
    Array PThreadedCode11914 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11915, (Optr)&t_push_closure, (Optr)PBlock11916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11932, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11933, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11934, (Optr)&t_send2, (Optr)PSend11935, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11936, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11937, (Optr)&t_send2, (Optr)PSend11938, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11911 = new_Method_with(PArray11912, PArray11913, empty_Array, PThreadedCode11914, 5, PAssign11915, PSend11932, PSend11935, PSend11938, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11911, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11940 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray11941 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign11943 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend11948 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode11947 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11948, (Optr)&t_block_return);
    Block PBlock11946 = new_Block_with(empty_Array, empty_Array, PThreadedCode11947, 1, PSend11948);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11949 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11950 = new_Send((Optr)PSend11949, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray11952 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11954 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11955 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend11956 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11953 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11954, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11955, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11956, (Optr)&t_method_return);
    Block PBlock11951 = new_Block_with(PArray11952, empty_Array, PThreadedCode11953, 3, PSend11954, PAssign11955, PSend11956);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11957 = new_Send((Optr)PBlock11946, SMB_on_do_, 2, (Optr)PSend11950, (Optr)PBlock11951);
    Array PThreadedCode11945 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11946, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11949, (Optr)&t_send0, (Optr)PSend11950, (Optr)&t_push_closure, (Optr)PBlock11951, (Optr)&t_send2, (Optr)PSend11957, (Optr)&t_block_return);
    Block PBlock11944 = new_Block_with(empty_Array, empty_Array, PThreadedCode11945, 1, PSend11957);
    // class. 
    Send PSend11958 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11959 = new_Send((Optr)PSend11958, SMB_error, 0);
    Array PArray11961 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend11963 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11964 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend11965 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11962 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11963, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11964, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11965, (Optr)&t_method_return);
    Block PBlock11960 = new_Block_with(PArray11961, empty_Array, PThreadedCode11962, 3, PSend11963, PAssign11964, PSend11965);
    // on:do:. 
    Send PSend11966 = new_Send((Optr)PBlock11944, SMB_on_do_, 2, (Optr)PSend11959, (Optr)PBlock11960);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend11970 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11969 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11970, (Optr)&t_block_return);
    Block PBlock11968 = new_Block_with(empty_Array, empty_Array, PThreadedCode11969, 1, PSend11970);
    // ifTrue:. 
    Send PSend11967 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock11968);
    Array PThreadedCode11942 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign11943, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11944, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11958, (Optr)&t_send0, (Optr)PSend11959, (Optr)&t_push_closure, (Optr)PBlock11960, (Optr)&t_send2, (Optr)PSend11966, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend11967, (Optr)PBlock11968, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11939 = new_Method_with(PArray11940, PArray11941, empty_Array, PThreadedCode11942, 4, PAssign11943, PSend11966, PSend11967, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11939, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11973 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11974 = new_Send((Optr)PSend11973, SMB_size, 0);
    Array PThreadedCode11972 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11973, (Optr)&t_send0, (Optr)PSend11974, (Optr)&t_method_return);
    Method PMethod11971 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11972, 1, PSend11974);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod11971, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11978 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11977 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11978);
    Array PThreadedCode11976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11977, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11978, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11976, 2, PAssign11977, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod11975, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend11981 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray11983 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11985 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend11986 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend11987 = new_Send((Optr)PSend11985, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend11986);
    Array PThreadedCode11984 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11985, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend11986, (Optr)&t_send2, (Optr)PSend11987, (Optr)&t_method_return);
    Block PBlock11982 = new_Block_with(PArray11983, empty_Array, PThreadedCode11984, 1, PSend11987);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11988 = new_Send((Optr)PSend11981, SMB_do_, 1, (Optr)PBlock11982);
    Array PThreadedCode11980 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11981, (Optr)&t_push_closure, (Optr)PBlock11982, (Optr)&t_send1, (Optr)PSend11988, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11979 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11980, 2, PSend11988, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod11979, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11990 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11992 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11994 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11996 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11997 = new_Send((Optr)PSend11996, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12000 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend12001 = new_Send((Optr)PSend12000, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11999 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12000, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend12001, (Optr)&t_block_return);
    Block PBlock11998 = new_Block_with(empty_Array, empty_Array, PThreadedCode11999, 1, PSend12001);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend12002 = new_Send((Optr)PSend11997, SMB_and_, 1, (Optr)PBlock11998);
    Array PThreadedCode11995 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11996, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11997, (Optr)&t_push_closure, (Optr)PBlock11998, (Optr)&t_send1, (Optr)PSend12002, (Optr)&t_method_return);
    Block PBlock11993 = new_Block_with(PArray11994, empty_Array, PThreadedCode11995, 1, PSend12002);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend12003 = new_Send((Optr)PSend11992, SMB_anySatisfy_, 1, (Optr)PBlock11993);
    Array PThreadedCode11991 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11992, (Optr)&t_push_closure, (Optr)PBlock11993, (Optr)&t_send1, (Optr)PSend12003, (Optr)&t_method_return);
    Method PMethod11989 = new_Method_with(PArray11990, empty_Array, empty_Array, PThreadedCode11991, 1, PSend12003);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod11989, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode12005 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod12004 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12005, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod12004, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12009 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign12008 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend12009);
    Array PThreadedCode12007 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12008, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend12009, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12006 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12007, 2, PAssign12008, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod12006, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12013 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12015 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12014 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12015, (Optr)&t_method_return);
    Block PBlock12012 = new_Block_with(PArray12013, empty_Array, PThreadedCode12014, 1, PSend12015);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12016 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock12012);
    Array PThreadedCode12011 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock12012, (Optr)&t_send1, (Optr)PSend12016, (Optr)&t_method_return);
    Method PMethod12010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12011, 1, PSend12016);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod12010, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12018 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12020 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12021 = new_Send((Optr)PSend12020, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12019 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12020, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12021, (Optr)&t_method_return);
    Method PMethod12017 = new_Method_with(PArray12018, empty_Array, empty_Array, PThreadedCode12019, 1, PSend12021);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod12017, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend12024 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12026 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12028 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode12027 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12028, (Optr)&t_method_return);
    Block PBlock12025 = new_Block_with(PArray12026, empty_Array, PThreadedCode12027, 1, PSend12028);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend12029 = new_Send((Optr)PSend12024, SMB_collect_, 1, (Optr)PBlock12025);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend12030 = new_Send((Optr)PSend12029, SMB_asSet, 0);
    Array PThreadedCode12023 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12024, (Optr)&t_push_closure, (Optr)PBlock12025, (Optr)&t_send1, (Optr)PSend12029, (Optr)&t_send0, (Optr)PSend12030, (Optr)&t_method_return);
    Method PMethod12022 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12023, 1, PSend12030);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod12022, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend12033 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12034 = new_Send((Optr)PSend12033, SMB_size, 0);
    Array PThreadedCode12032 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12033, (Optr)&t_send0, (Optr)PSend12034, (Optr)&t_method_return);
    Method PMethod12031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12032, 1, PSend12034);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod12031, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend12037 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12038 = new_Send((Optr)PSend12037, SMB_size, 0);
    Array PThreadedCode12036 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12037, (Optr)&t_send0, (Optr)PSend12038, (Optr)&t_method_return);
    Method PMethod12035 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12036, 1, PSend12038);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod12035, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12042 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend12044 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12045 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12044);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12046 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12043 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12044, (Optr)&t_send1, (Optr)PSend12045, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12046, (Optr)&t_method_return);
    Block PBlock12041 = new_Block_with(PArray12042, empty_Array, PThreadedCode12043, 2, PSend12045, PSend12046);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend12047 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12048 = new_Send((Optr)PBlock12041, SMB_value_, 1, (Optr)PSend12047);
    Array PThreadedCode12040 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock12041, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12047, (Optr)&t_send1, (Optr)PSend12048, (Optr)&t_method_return);
    Method PMethod12039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12040, 1, PSend12048);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod12039, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend12051 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode12050 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12051, (Optr)&t_method_return);
    Method PMethod12049 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12050, 1, PSend12051);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod12049, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12053 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend12055 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12056 = new_Send((Optr)PSend12055, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12054 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12055, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12056, (Optr)&t_method_return);
    Method PMethod12052 = new_Method_with(PArray12053, empty_Array, empty_Array, PThreadedCode12054, 1, PSend12056);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod12052, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend12059 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12060 = new_Send((Optr)PSend12059, SMB_size, 0);
    Array PThreadedCode12058 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12059, (Optr)&t_send0, (Optr)PSend12060, (Optr)&t_method_return);
    Method PMethod12057 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12058, 1, PSend12060);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod12057, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12064 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12066 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12067 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12066);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12068 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend12069 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12068);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12070 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12065 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12066, (Optr)&t_send1, (Optr)PSend12067, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12068, (Optr)&t_send1, (Optr)PSend12069, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12070, (Optr)&t_method_return);
    Block PBlock12063 = new_Block_with(PArray12064, empty_Array, PThreadedCode12065, 3, PSend12067, PSend12069, PSend12070);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12071 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12072 = new_Send((Optr)PBlock12063, SMB_value_, 1, (Optr)PSend12071);
    Array PThreadedCode12062 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12063, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend12071, (Optr)&t_send1, (Optr)PSend12072, (Optr)&t_method_return);
    Method PMethod12061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12062, 1, PSend12072);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod12061, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend12075 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12076 = new_Send((Optr)PSend12075, SMB_size, 0);
    Array PThreadedCode12074 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12075, (Optr)&t_send0, (Optr)PSend12076, (Optr)&t_method_return);
    Method PMethod12073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12074, 1, PSend12076);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod12073, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend12079 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12080 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend12079);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12082 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12084 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12085 = new_Send((Optr)PSend12084, SMB_not, 0);
    Array PThreadedCode12083 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12084, (Optr)&t_send0, (Optr)PSend12085, (Optr)&t_method_return);
    Block PBlock12081 = new_Block_with(PArray12082, empty_Array, PThreadedCode12083, 1, PSend12085);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12086 = new_Send((Optr)PSend12080, SMB_select_, 1, (Optr)PBlock12081);
    Array PThreadedCode12078 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend12079, (Optr)&t_send1, (Optr)PSend12080, (Optr)&t_push_closure, (Optr)PBlock12081, (Optr)&t_send1, (Optr)PSend12086, (Optr)&t_method_return);
    Method PMethod12077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12078, 1, PSend12086);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod12077, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12090 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12092 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12091 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12092, (Optr)&t_method_return);
    Block PBlock12089 = new_Block_with(PArray12090, empty_Array, PThreadedCode12091, 1, PSend12092);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12093 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock12089);
    Array PThreadedCode12088 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock12089, (Optr)&t_send1, (Optr)PSend12093, (Optr)&t_method_return);
    Method PMethod12087 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12088, 1, PSend12093);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod12087, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend12096 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12097 = new_Send((Optr)PSend12096, SMB_size, 0);
    Array PThreadedCode12095 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12096, (Optr)&t_send0, (Optr)PSend12097, (Optr)&t_method_return);
    Method PMethod12094 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12095, 1, PSend12097);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod12094, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray12099 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12101 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12103 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12105 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12106 = new_Send((Optr)PSend12105, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12109 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend12110 = new_Send((Optr)PSend12109, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode12108 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12109, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend12110, (Optr)&t_block_return);
    Block PBlock12107 = new_Block_with(empty_Array, empty_Array, PThreadedCode12108, 1, PSend12110);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend12111 = new_Send((Optr)PSend12106, SMB_and_, 1, (Optr)PBlock12107);
    Array PThreadedCode12104 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12105, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend12106, (Optr)&t_push_closure, (Optr)PBlock12107, (Optr)&t_send1, (Optr)PSend12111, (Optr)&t_method_return);
    Block PBlock12102 = new_Block_with(PArray12103, empty_Array, PThreadedCode12104, 1, PSend12111);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend12112 = new_Send((Optr)PSend12101, SMB_anySatisfy_, 1, (Optr)PBlock12102);
    Array PThreadedCode12100 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12101, (Optr)&t_push_closure, (Optr)PBlock12102, (Optr)&t_send1, (Optr)PSend12112, (Optr)&t_method_return);
    Method PMethod12098 = new_Method_with(PArray12099, empty_Array, empty_Array, PThreadedCode12100, 1, PSend12112);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod12098, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12115 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12116 = new_Send((Optr)PSend12115, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12117 = new_Send((Optr)PSend12116, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12114 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12115, (Optr)&t_send0, (Optr)PSend12116, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12117, (Optr)&t_method_return);
    Method PMethod12113 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12114, 1, PSend12117);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod12113, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12121 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12123 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12124 = new_Send((Optr)PSend12123, SMB_not, 0);
    Array PThreadedCode12122 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12123, (Optr)&t_send0, (Optr)PSend12124, (Optr)&t_method_return);
    Block PBlock12120 = new_Block_with(PArray12121, empty_Array, PThreadedCode12122, 1, PSend12124);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12125 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock12120);
    Array PThreadedCode12119 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock12120, (Optr)&t_send1, (Optr)PSend12125, (Optr)&t_method_return);
    Method PMethod12118 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12119, 1, PSend12125);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod12118, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12127 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12129 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12130 = new_Send((Optr)PSend12129, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12128 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12129, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12130, (Optr)&t_method_return);
    Method PMethod12126 = new_Method_with(PArray12127, empty_Array, empty_Array, PThreadedCode12128, 1, PSend12130);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod12126, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend12133 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12134 = new_Send((Optr)PSend12133, SMB_size, 0);
    Array PThreadedCode12132 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12133, (Optr)&t_send0, (Optr)PSend12134, (Optr)&t_method_return);
    Method PMethod12131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12132, 1, PSend12134);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod12131, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12137 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend12138 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12139 = new_Send((Optr)PSend12137, SMB__plus_, 1, (Optr)PSend12138);
    // size. 
    Send PSend12140 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend12141 = new_Send((Optr)PSend12139, SMB__plus_, 1, (Optr)PSend12140);
    Array PThreadedCode12136 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend12137, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend12138, (Optr)&t_send1, (Optr)PSend12139, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend12140, (Optr)&t_send1, (Optr)PSend12141, (Optr)&t_method_return);
    Method PMethod12135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12136, 1, PSend12141);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod12135, Testing_TestResult_Class);
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
    Send PSend12144 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray12146 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend12148 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray12150 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12152 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend12153 = new_Send((Optr)PSend12152, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode12151 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12152, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend12153, (Optr)&t_method_return);
    Block PBlock12149 = new_Block_with(PArray12150, empty_Array, PThreadedCode12151, 1, PSend12153);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12154 = new_Send((Optr)PSend12148, SMB_do_, 1, (Optr)PBlock12149);
    Array PThreadedCode12147 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend12148, (Optr)&t_push_closure, (Optr)PBlock12149, (Optr)&t_send1, (Optr)PSend12154, (Optr)&t_method_return);
    Block PBlock12145 = new_Block_with(PArray12146, empty_Array, PThreadedCode12147, 1, PSend12154);
    // do:. 
    Send PSend12155 = new_Send((Optr)PSend12144, SMB_do_, 1, (Optr)PBlock12145);
    Array PThreadedCode12143 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12144, (Optr)&t_push_closure, (Optr)PBlock12145, (Optr)&t_send1, (Optr)PSend12155, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12143, 2, PSend12155, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod12142, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12159 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12161 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12160 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12161, (Optr)&t_method_return);
    Block PBlock12158 = new_Block_with(PArray12159, empty_Array, PThreadedCode12160, 1, PSend12161);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12162 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock12158);
    Array PThreadedCode12157 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock12158, (Optr)&t_send1, (Optr)PSend12162, (Optr)&t_method_return);
    Method PMethod12156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12157, 1, PSend12162);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod12156, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12166 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12168 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend12169 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend12170 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12171 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12167 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend12168, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend12169, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend12170, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12171, (Optr)&t_method_return);
    Block PBlock12165 = new_Block_with(PArray12166, empty_Array, PThreadedCode12167, 4, PSend12168, PSend12169, PSend12170, PSend12171);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend12172 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12173 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend12172);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12174 = new_Send((Optr)PBlock12165, SMB_value_, 1, (Optr)PSend12173);
    Array PThreadedCode12164 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock12165, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12172, (Optr)&t_send1, (Optr)PSend12173, (Optr)&t_send1, (Optr)PSend12174, (Optr)&t_method_return);
    Method PMethod12163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12164, 1, PSend12174);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod12163, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12177 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12178 = new_Send((Optr)PSend12177, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12179 = new_Send((Optr)PSend12178, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12176 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12177, (Optr)&t_send0, (Optr)PSend12178, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12179, (Optr)&t_method_return);
    Method PMethod12175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12176, 1, PSend12179);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod12175, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12181 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12183 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode12182 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12183, (Optr)&t_method_return);
    Method PMethod12180 = new_Method_with(PArray12181, empty_Array, empty_Array, PThreadedCode12182, 1, PSend12183);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod12180, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode12185 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod12184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12185, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod12184, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode12187 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod12186 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12187, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod12186, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray12189 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray12190 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12193 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign12192 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend12193);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12195 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign12194 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend12195);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend12196 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend12197 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12198 = new_Send((Optr)PSend12197, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12199 = new_Send((Optr)PSend12198, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode12191 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12192, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12193, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12194, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12195, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend12196, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend12197, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend12198, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend12199, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12188 = new_Method_with(PArray12189, PArray12190, empty_Array, PThreadedCode12191, 5, PAssign12192, PAssign12194, PSend12196, PSend12199, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod12188, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12203 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend12205 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12206 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend12207 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend12206);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend12208 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend12209 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend12208);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend12210 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend12211 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend12210);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12212 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12204 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12205, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12206, (Optr)&t_send2, (Optr)PSend12207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12208, (Optr)&t_send2, (Optr)PSend12209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12210, (Optr)&t_send2, (Optr)PSend12211, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12212, (Optr)&t_method_return);
    Block PBlock12202 = new_Block_with(PArray12203, empty_Array, PThreadedCode12204, 5, PSend12205, PSend12207, PSend12209, PSend12211, PSend12212);
    // new. 
    Send PSend12213 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12214 = new_Send((Optr)PBlock12202, SMB_value_, 1, (Optr)PSend12213);
    Array PThreadedCode12201 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12202, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend12213, (Optr)&t_send1, (Optr)PSend12214, (Optr)&t_method_return);
    Method PMethod12200 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12201, 1, PSend12214);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod12200, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12216 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray12217 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12220 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12223 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign12222 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend12223);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend12226 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12227 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12226);
    Array PThreadedCode12225 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12226, (Optr)&t_send1, (Optr)PSend12227, (Optr)&t_block_return);
    Block PBlock12224 = new_Block_with(empty_Array, empty_Array, PThreadedCode12225, 1, PSend12227);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12228 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock12224);
    Array PThreadedCode12221 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12222, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12223, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock12224, (Optr)&t_send1, (Optr)PSend12228, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock12219 = new_Block_with(PArray12220, empty_Array, PThreadedCode12221, 3, PAssign12222, PSend12228, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12229 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12219);
    Array PThreadedCode12218 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12219, (Optr)&t_send1, (Optr)PSend12229, (Optr)&t_method_return);
    Method PMethod12215 = new_Method_with(PArray12216, PArray12217, empty_Array, PThreadedCode12218, 1, PSend12229);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod12215, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12231 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend12233 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12234 = new_Send((Optr)PSend12233, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12232 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12233, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12234, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12230 = new_Method_with(PArray12231, empty_Array, empty_Array, PThreadedCode12232, 2, PSend12234, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod12230, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12236 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend12238 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12239 = new_Send((Optr)PSend12238, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12237 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12238, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12239, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12235 = new_Method_with(PArray12236, empty_Array, empty_Array, PThreadedCode12237, 2, PSend12239, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod12235, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode12241 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod12240 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12241, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod12240, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray12243 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend12245 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode12244 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend12245, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12242 = new_Method_with(PArray12243, empty_Array, empty_Array, PThreadedCode12244, 2, PSend12245, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod12242, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12247 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray12248 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend12251 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign12250 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend12251);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend12252 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray12254 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12256 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode12258 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock12257 = new_Block_with(empty_Array, empty_Array, PThreadedCode12258, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend12259 = new_Send((Optr)PSend12256, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock12257);
    Array PThreadedCode12255 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend12256, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock12257, (Optr)&t_send2, (Optr)PSend12259, (Optr)&t_method_return);
    Block PBlock12253 = new_Block_with(PArray12254, empty_Array, PThreadedCode12255, 1, PSend12259);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12260 = new_Send((Optr)PSend12252, SMB_do_, 1, (Optr)PBlock12253);
    Array PThreadedCode12249 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12250, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend12251, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12252, (Optr)&t_push_closure, (Optr)PBlock12253, (Optr)&t_send1, (Optr)PSend12260, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12246 = new_Method_with(PArray12247, PArray12248, empty_Array, PThreadedCode12249, 3, PAssign12250, PSend12260, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod12246, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend12263 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode12262 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12263, (Optr)&t_method_return);
    Method PMethod12261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12262, 1, PSend12263);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod12261, HEADER(Testing_TestResult_Class));
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