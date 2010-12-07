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
    Array PArray11758 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11759 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11763 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11765 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11767 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11768 = new_Send((Optr)PSend11767, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11766 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11767, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11768, (Optr)&t_method_return);
    Block PBlock11764 = new_Block_with(PArray11765, empty_Array, PThreadedCode11766, 1, PSend11768);
    Array PArray11770 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11772 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11771 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11772, (Optr)&t_method_return);
    Block PBlock11769 = new_Block_with(PArray11770, empty_Array, PThreadedCode11771, 1, PSend11772);
    // select:thenCollect:. 
    Send PSend11762 = new_Send((Optr)PSend11763, SMB_select_thenCollect_, 2, (Optr)PBlock11764, (Optr)PBlock11769);
    Assign PAssign11761 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11762);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11775 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11777 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11779 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11780 = new_Send((Optr)PSend11779, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11778 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11779, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11780, (Optr)&t_method_return);
    Block PBlock11776 = new_Block_with(PArray11777, empty_Array, PThreadedCode11778, 1, PSend11780);
    Array PArray11782 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11784 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11783 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11784, (Optr)&t_method_return);
    Block PBlock11781 = new_Block_with(PArray11782, empty_Array, PThreadedCode11783, 1, PSend11784);
    // select:thenCollect:. 
    Send PSend11774 = new_Send((Optr)PSend11775, SMB_select_thenCollect_, 2, (Optr)PBlock11776, (Optr)PBlock11781);
    Assign PAssign11773 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11774);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11787 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11789 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11791 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11792 = new_Send((Optr)PSend11791, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11790 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11791, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11792, (Optr)&t_method_return);
    Block PBlock11788 = new_Block_with(PArray11789, empty_Array, PThreadedCode11790, 1, PSend11792);
    Array PArray11794 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11796 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11795 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11796, (Optr)&t_method_return);
    Block PBlock11793 = new_Block_with(PArray11794, empty_Array, PThreadedCode11795, 1, PSend11796);
    // select:thenCollect:. 
    Send PSend11786 = new_Send((Optr)PSend11787, SMB_select_thenCollect_, 2, (Optr)PBlock11788, (Optr)PBlock11793);
    Assign PAssign11785 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11786);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11798 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11800 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11801 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11800);
    // asSet. 
    Send PSend11802 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11803 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11802);
    // asSet. 
    Send PSend11804 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11805 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11804);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11806 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11799 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11800, (Optr)&t_send2, (Optr)PSend11801, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11802, (Optr)&t_send2, (Optr)PSend11803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11804, (Optr)&t_send2, (Optr)PSend11805, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11806, (Optr)&t_method_return);
    Block PBlock11797 = new_Block_with(PArray11798, empty_Array, PThreadedCode11799, 4, PSend11801, PSend11803, PSend11805, PSend11806);
    // class. 
    Send PSend11807 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11808 = new_Send((Optr)PSend11807, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11809 = new_Send((Optr)PBlock11797, SMB_value_, 1, (Optr)PSend11808);
    Array PThreadedCode11760 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11761, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11763, (Optr)&t_push_closure, (Optr)PBlock11764, (Optr)&t_push_closure, (Optr)PBlock11769, (Optr)&t_send2, (Optr)PSend11762, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11773, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11775, (Optr)&t_push_closure, (Optr)PBlock11776, (Optr)&t_push_closure, (Optr)PBlock11781, (Optr)&t_send2, (Optr)PSend11774, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11785, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11787, (Optr)&t_push_closure, (Optr)PBlock11788, (Optr)&t_push_closure, (Optr)PBlock11793, (Optr)&t_send2, (Optr)PSend11786, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11797, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11807, (Optr)&t_send0, (Optr)PSend11808, (Optr)&t_send1, (Optr)PSend11809, (Optr)&t_method_return);
    Method PMethod11757 = new_Method_with(PArray11758, PArray11759, empty_Array, PThreadedCode11760, 4, PAssign11761, PAssign11773, PAssign11785, PSend11809);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11757, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11812 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11813 = new_Send((Optr)PSend11812, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11816 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11817 = new_Send((Optr)PSend11816, SMB_not, 0);
    Array PThreadedCode11815 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11816, (Optr)&t_send0, (Optr)PSend11817, (Optr)&t_block_return);
    Block PBlock11814 = new_Block_with(empty_Array, empty_Array, PThreadedCode11815, 1, PSend11817);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11818 = new_Send((Optr)PSend11813, SMB_and_, 1, (Optr)PBlock11814);
    Array PThreadedCode11811 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11812, (Optr)&t_send0, (Optr)PSend11813, (Optr)&t_push_closure, (Optr)PBlock11814, (Optr)&t_send1, (Optr)PSend11818, (Optr)&t_method_return);
    Method PMethod11810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11811, 1, PSend11818);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11810, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11820 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11822 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11824 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11826 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11827 = new_Send((Optr)PSend11826, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11830 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11831 = new_Send((Optr)PSend11830, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11829 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11830, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11831, (Optr)&t_block_return);
    Block PBlock11828 = new_Block_with(empty_Array, empty_Array, PThreadedCode11829, 1, PSend11831);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11832 = new_Send((Optr)PSend11827, SMB_and_, 1, (Optr)PBlock11828);
    Array PThreadedCode11825 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11826, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11827, (Optr)&t_push_closure, (Optr)PBlock11828, (Optr)&t_send1, (Optr)PSend11832, (Optr)&t_method_return);
    Block PBlock11823 = new_Block_with(PArray11824, empty_Array, PThreadedCode11825, 1, PSend11832);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11833 = new_Send((Optr)PSend11822, SMB_anySatisfy_, 1, (Optr)PBlock11823);
    Array PThreadedCode11821 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11822, (Optr)&t_push_closure, (Optr)PBlock11823, (Optr)&t_send1, (Optr)PSend11833, (Optr)&t_method_return);
    Method PMethod11819 = new_Method_with(PArray11820, empty_Array, empty_Array, PThreadedCode11821, 1, PSend11833);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11819, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11836 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11838 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11837 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11838);
    // new. 
    Send PSend11840 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11839 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11840);
    // new. 
    Send PSend11842 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11841 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11842);
    Array PThreadedCode11835 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11836, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11837, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11838, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11839, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11840, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11841, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11835, 5, PSuper11836, PAssign11837, PAssign11839, PAssign11841, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11834, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11844 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11845 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11849 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11851 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11853 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11852 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11853, (Optr)&t_method_return);
    Block PBlock11850 = new_Block_with(PArray11851, empty_Array, PThreadedCode11852, 1, PSend11853);
    // collect:. 
    Send PSend11848 = new_Send((Optr)PSend11849, SMB_collect_, 1, (Optr)PBlock11850);
    Assign PAssign11847 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11848);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11856 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11858 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11860 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11859 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11860, (Optr)&t_method_return);
    Block PBlock11857 = new_Block_with(PArray11858, empty_Array, PThreadedCode11859, 1, PSend11860);
    // collect:. 
    Send PSend11855 = new_Send((Optr)PSend11856, SMB_collect_, 1, (Optr)PBlock11857);
    Assign PAssign11854 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11855);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11863 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11865 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11867 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11866 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11867, (Optr)&t_method_return);
    Block PBlock11864 = new_Block_with(PArray11865, empty_Array, PThreadedCode11866, 1, PSend11867);
    // collect:. 
    Send PSend11862 = new_Send((Optr)PSend11863, SMB_collect_, 1, (Optr)PBlock11864);
    Assign PAssign11861 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11862);
    // passed. 
    Send PSend11870 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11872 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11874 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11873 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11874, (Optr)&t_method_return);
    Block PBlock11871 = new_Block_with(PArray11872, empty_Array, PThreadedCode11873, 1, PSend11874);
    // collect:. 
    Send PSend11869 = new_Send((Optr)PSend11870, SMB_collect_, 1, (Optr)PBlock11871);
    Assign PAssign11868 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11869);
    // failures. 
    Send PSend11877 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11879 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11881 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11880 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11881, (Optr)&t_method_return);
    Block PBlock11878 = new_Block_with(PArray11879, empty_Array, PThreadedCode11880, 1, PSend11881);
    // collect:. 
    Send PSend11876 = new_Send((Optr)PSend11877, SMB_collect_, 1, (Optr)PBlock11878);
    Assign PAssign11875 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11876);
    // errors. 
    Send PSend11884 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11886 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11888 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11887 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11888, (Optr)&t_method_return);
    Block PBlock11885 = new_Block_with(PArray11886, empty_Array, PThreadedCode11887, 1, PSend11888);
    // collect:. 
    Send PSend11883 = new_Send((Optr)PSend11884, SMB_collect_, 1, (Optr)PBlock11885);
    Assign PAssign11882 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11883);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11889 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11890 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11891 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11892 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11889, (Optr)PSend11890, (Optr)PSend11891);
    Array PThreadedCode11846 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11847, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11849, (Optr)&t_push_closure, (Optr)PBlock11850, (Optr)&t_send1, (Optr)PSend11848, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11854, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11856, (Optr)&t_push_closure, (Optr)PBlock11857, (Optr)&t_send1, (Optr)PSend11855, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11861, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11863, (Optr)&t_push_closure, (Optr)PBlock11864, (Optr)&t_send1, (Optr)PSend11862, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11868, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11870, (Optr)&t_push_closure, (Optr)PBlock11871, (Optr)&t_send1, (Optr)PSend11869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11875, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11877, (Optr)&t_push_closure, (Optr)PBlock11878, (Optr)&t_send1, (Optr)PSend11876, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11882, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11884, (Optr)&t_push_closure, (Optr)PBlock11885, (Optr)&t_send1, (Optr)PSend11883, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11889, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11890, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11891, (Optr)&t_send3, (Optr)PSend11892, (Optr)&t_method_return);
    Method PMethod11843 = new_Method_with(PArray11844, PArray11845, empty_Array, PThreadedCode11846, 7, PAssign11847, PAssign11854, PAssign11861, PAssign11868, PAssign11875, PAssign11882, PSend11892);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11843, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11895 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11896 = new_Send((Optr)PSend11895, SMB_size, 0);
    Array PThreadedCode11894 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11895, (Optr)&t_send0, (Optr)PSend11896, (Optr)&t_method_return);
    Method PMethod11893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11894, 1, PSend11896);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11893, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11898 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11900 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11900, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11897 = new_Method_with(PArray11898, empty_Array, empty_Array, PThreadedCode11899, 2, PAssign11900, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11897, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11903 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11902 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11903, (Optr)&t_method_return);
    Method PMethod11901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11902, 1, PSend11903);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11901, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11906 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11907 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11908 = new_Send((Optr)PSend11906, SMB__append_, 1, (Optr)PSend11907);
    Array PThreadedCode11905 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11906, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11907, (Optr)&t_send1, (Optr)PSend11908, (Optr)&t_method_return);
    Method PMethod11904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11905, 1, PSend11908);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11904, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11910 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11911 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11915 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11918 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11920 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11921 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11922 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11919 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11920, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11921, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11922, (Optr)&t_method_return);
    Block PBlock11917 = new_Block_with(PArray11918, empty_Array, PThreadedCode11919, 3, PSend11920, PSend11921, PSend11922);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11923 = new_Send((Optr)PBlock11917, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11925 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11927 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11928 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11926 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11927, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11928, (Optr)&t_method_return);
    Block PBlock11924 = new_Block_with(PArray11925, empty_Array, PThreadedCode11926, 2, PSend11927, PSend11928);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11929 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11924);
    Array PThreadedCode11916 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11917, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11924, (Optr)&t_send1, (Optr)PSend11929, (Optr)&t_method_return);
    Block PBlock11914 = new_Block_with(PArray11915, empty_Array, PThreadedCode11916, 2, PSend11923, PSend11929);
    Assign PAssign11913 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11914);
    // printOn:. 
    Send PSend11930 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11931 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11932 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11931_Const = new_Constant((Optr)string_11931);
    // value:value:. 
    Send PSend11933 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11931_Const, (Optr)PSend11932);
    String string_11934 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11935 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11934_Const = new_Constant((Optr)string_11934);
    // value:value:. 
    Send PSend11936 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11934_Const, (Optr)PSend11935);
    Array PThreadedCode11912 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11913, (Optr)&t_push_closure, (Optr)PBlock11914, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11930, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11931, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11932, (Optr)&t_send2, (Optr)PSend11933, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11934, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11935, (Optr)&t_send2, (Optr)PSend11936, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11909 = new_Method_with(PArray11910, PArray11911, empty_Array, PThreadedCode11912, 5, PAssign11913, PSend11930, PSend11933, PSend11936, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11909, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11938 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray11939 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign11941 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend11946 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode11945 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11946, (Optr)&t_block_return);
    Block PBlock11944 = new_Block_with(empty_Array, empty_Array, PThreadedCode11945, 1, PSend11946);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11947 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11948 = new_Send((Optr)PSend11947, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray11950 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11952 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11953 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend11954 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11951 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11952, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11953, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11954, (Optr)&t_method_return);
    Block PBlock11949 = new_Block_with(PArray11950, empty_Array, PThreadedCode11951, 3, PSend11952, PAssign11953, PSend11954);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11955 = new_Send((Optr)PBlock11944, SMB_on_do_, 2, (Optr)PSend11948, (Optr)PBlock11949);
    Array PThreadedCode11943 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11944, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11947, (Optr)&t_send0, (Optr)PSend11948, (Optr)&t_push_closure, (Optr)PBlock11949, (Optr)&t_send2, (Optr)PSend11955, (Optr)&t_block_return);
    Block PBlock11942 = new_Block_with(empty_Array, empty_Array, PThreadedCode11943, 1, PSend11955);
    // class. 
    Send PSend11956 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11957 = new_Send((Optr)PSend11956, SMB_error, 0);
    Array PArray11959 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend11961 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11962 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend11963 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11960 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11961, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11962, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11963, (Optr)&t_method_return);
    Block PBlock11958 = new_Block_with(PArray11959, empty_Array, PThreadedCode11960, 3, PSend11961, PAssign11962, PSend11963);
    // on:do:. 
    Send PSend11964 = new_Send((Optr)PBlock11942, SMB_on_do_, 2, (Optr)PSend11957, (Optr)PBlock11958);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend11968 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11967 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11968, (Optr)&t_block_return);
    Block PBlock11966 = new_Block_with(empty_Array, empty_Array, PThreadedCode11967, 1, PSend11968);
    // ifTrue:. 
    Send PSend11965 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock11966);
    Array PThreadedCode11940 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign11941, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11942, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11956, (Optr)&t_send0, (Optr)PSend11957, (Optr)&t_push_closure, (Optr)PBlock11958, (Optr)&t_send2, (Optr)PSend11964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend11965, (Optr)PBlock11966, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11937 = new_Method_with(PArray11938, PArray11939, empty_Array, PThreadedCode11940, 4, PAssign11941, PSend11964, PSend11965, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11937, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11971 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11972 = new_Send((Optr)PSend11971, SMB_size, 0);
    Array PThreadedCode11970 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11971, (Optr)&t_send0, (Optr)PSend11972, (Optr)&t_method_return);
    Method PMethod11969 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11970, 1, PSend11972);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod11969, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11976 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11975 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11976);
    Array PThreadedCode11974 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11975, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11976, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11973 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11974, 2, PAssign11975, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod11973, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend11979 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray11981 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11983 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend11984 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend11985 = new_Send((Optr)PSend11983, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend11984);
    Array PThreadedCode11982 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11983, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend11984, (Optr)&t_send2, (Optr)PSend11985, (Optr)&t_method_return);
    Block PBlock11980 = new_Block_with(PArray11981, empty_Array, PThreadedCode11982, 1, PSend11985);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11986 = new_Send((Optr)PSend11979, SMB_do_, 1, (Optr)PBlock11980);
    Array PThreadedCode11978 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11979, (Optr)&t_push_closure, (Optr)PBlock11980, (Optr)&t_send1, (Optr)PSend11986, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11977 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11978, 2, PSend11986, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod11977, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11988 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11990 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11992 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11994 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11995 = new_Send((Optr)PSend11994, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11998 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11999 = new_Send((Optr)PSend11998, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11997 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11998, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11999, (Optr)&t_block_return);
    Block PBlock11996 = new_Block_with(empty_Array, empty_Array, PThreadedCode11997, 1, PSend11999);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend12000 = new_Send((Optr)PSend11995, SMB_and_, 1, (Optr)PBlock11996);
    Array PThreadedCode11993 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11994, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11995, (Optr)&t_push_closure, (Optr)PBlock11996, (Optr)&t_send1, (Optr)PSend12000, (Optr)&t_method_return);
    Block PBlock11991 = new_Block_with(PArray11992, empty_Array, PThreadedCode11993, 1, PSend12000);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend12001 = new_Send((Optr)PSend11990, SMB_anySatisfy_, 1, (Optr)PBlock11991);
    Array PThreadedCode11989 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11990, (Optr)&t_push_closure, (Optr)PBlock11991, (Optr)&t_send1, (Optr)PSend12001, (Optr)&t_method_return);
    Method PMethod11987 = new_Method_with(PArray11988, empty_Array, empty_Array, PThreadedCode11989, 1, PSend12001);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod11987, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode12003 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod12002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12003, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod12002, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12007 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign12006 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend12007);
    Array PThreadedCode12005 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12006, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend12007, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12004 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12005, 2, PAssign12006, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod12004, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12011 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12013 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12012 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12013, (Optr)&t_method_return);
    Block PBlock12010 = new_Block_with(PArray12011, empty_Array, PThreadedCode12012, 1, PSend12013);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12014 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock12010);
    Array PThreadedCode12009 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock12010, (Optr)&t_send1, (Optr)PSend12014, (Optr)&t_method_return);
    Method PMethod12008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12009, 1, PSend12014);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod12008, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12016 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12018 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12019 = new_Send((Optr)PSend12018, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12017 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12018, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12019, (Optr)&t_method_return);
    Method PMethod12015 = new_Method_with(PArray12016, empty_Array, empty_Array, PThreadedCode12017, 1, PSend12019);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod12015, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend12022 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12024 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12026 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode12025 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12026, (Optr)&t_method_return);
    Block PBlock12023 = new_Block_with(PArray12024, empty_Array, PThreadedCode12025, 1, PSend12026);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend12027 = new_Send((Optr)PSend12022, SMB_collect_, 1, (Optr)PBlock12023);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend12028 = new_Send((Optr)PSend12027, SMB_asSet, 0);
    Array PThreadedCode12021 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12022, (Optr)&t_push_closure, (Optr)PBlock12023, (Optr)&t_send1, (Optr)PSend12027, (Optr)&t_send0, (Optr)PSend12028, (Optr)&t_method_return);
    Method PMethod12020 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12021, 1, PSend12028);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod12020, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend12031 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12032 = new_Send((Optr)PSend12031, SMB_size, 0);
    Array PThreadedCode12030 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12031, (Optr)&t_send0, (Optr)PSend12032, (Optr)&t_method_return);
    Method PMethod12029 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12030, 1, PSend12032);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod12029, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend12035 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12036 = new_Send((Optr)PSend12035, SMB_size, 0);
    Array PThreadedCode12034 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12035, (Optr)&t_send0, (Optr)PSend12036, (Optr)&t_method_return);
    Method PMethod12033 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12034, 1, PSend12036);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod12033, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12040 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend12042 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12043 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12042);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12044 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12041 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12042, (Optr)&t_send1, (Optr)PSend12043, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12044, (Optr)&t_method_return);
    Block PBlock12039 = new_Block_with(PArray12040, empty_Array, PThreadedCode12041, 2, PSend12043, PSend12044);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend12045 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12046 = new_Send((Optr)PBlock12039, SMB_value_, 1, (Optr)PSend12045);
    Array PThreadedCode12038 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock12039, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12045, (Optr)&t_send1, (Optr)PSend12046, (Optr)&t_method_return);
    Method PMethod12037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12038, 1, PSend12046);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod12037, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend12049 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode12048 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12049, (Optr)&t_method_return);
    Method PMethod12047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12048, 1, PSend12049);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod12047, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12051 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend12053 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12054 = new_Send((Optr)PSend12053, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12052 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12053, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12054, (Optr)&t_method_return);
    Method PMethod12050 = new_Method_with(PArray12051, empty_Array, empty_Array, PThreadedCode12052, 1, PSend12054);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod12050, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend12057 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12058 = new_Send((Optr)PSend12057, SMB_size, 0);
    Array PThreadedCode12056 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12057, (Optr)&t_send0, (Optr)PSend12058, (Optr)&t_method_return);
    Method PMethod12055 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12056, 1, PSend12058);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod12055, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12062 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12064 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12065 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12064);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12066 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend12067 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend12066);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12068 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12063 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12064, (Optr)&t_send1, (Optr)PSend12065, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12066, (Optr)&t_send1, (Optr)PSend12067, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12068, (Optr)&t_method_return);
    Block PBlock12061 = new_Block_with(PArray12062, empty_Array, PThreadedCode12063, 3, PSend12065, PSend12067, PSend12068);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12069 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12070 = new_Send((Optr)PBlock12061, SMB_value_, 1, (Optr)PSend12069);
    Array PThreadedCode12060 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12061, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend12069, (Optr)&t_send1, (Optr)PSend12070, (Optr)&t_method_return);
    Method PMethod12059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12060, 1, PSend12070);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod12059, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend12073 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12074 = new_Send((Optr)PSend12073, SMB_size, 0);
    Array PThreadedCode12072 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12073, (Optr)&t_send0, (Optr)PSend12074, (Optr)&t_method_return);
    Method PMethod12071 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12072, 1, PSend12074);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod12071, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend12077 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12078 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend12077);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12080 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12082 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12083 = new_Send((Optr)PSend12082, SMB_not, 0);
    Array PThreadedCode12081 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12082, (Optr)&t_send0, (Optr)PSend12083, (Optr)&t_method_return);
    Block PBlock12079 = new_Block_with(PArray12080, empty_Array, PThreadedCode12081, 1, PSend12083);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12084 = new_Send((Optr)PSend12078, SMB_select_, 1, (Optr)PBlock12079);
    Array PThreadedCode12076 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend12077, (Optr)&t_send1, (Optr)PSend12078, (Optr)&t_push_closure, (Optr)PBlock12079, (Optr)&t_send1, (Optr)PSend12084, (Optr)&t_method_return);
    Method PMethod12075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12076, 1, PSend12084);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod12075, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12088 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12090 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12089 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12090, (Optr)&t_method_return);
    Block PBlock12087 = new_Block_with(PArray12088, empty_Array, PThreadedCode12089, 1, PSend12090);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12091 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock12087);
    Array PThreadedCode12086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock12087, (Optr)&t_send1, (Optr)PSend12091, (Optr)&t_method_return);
    Method PMethod12085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12086, 1, PSend12091);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod12085, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend12094 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12095 = new_Send((Optr)PSend12094, SMB_size, 0);
    Array PThreadedCode12093 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12094, (Optr)&t_send0, (Optr)PSend12095, (Optr)&t_method_return);
    Method PMethod12092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12093, 1, PSend12095);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod12092, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray12097 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12099 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray12101 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12103 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12104 = new_Send((Optr)PSend12103, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12107 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend12108 = new_Send((Optr)PSend12107, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode12106 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12107, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend12108, (Optr)&t_block_return);
    Block PBlock12105 = new_Block_with(empty_Array, empty_Array, PThreadedCode12106, 1, PSend12108);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend12109 = new_Send((Optr)PSend12104, SMB_and_, 1, (Optr)PBlock12105);
    Array PThreadedCode12102 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend12103, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend12104, (Optr)&t_push_closure, (Optr)PBlock12105, (Optr)&t_send1, (Optr)PSend12109, (Optr)&t_method_return);
    Block PBlock12100 = new_Block_with(PArray12101, empty_Array, PThreadedCode12102, 1, PSend12109);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend12110 = new_Send((Optr)PSend12099, SMB_anySatisfy_, 1, (Optr)PBlock12100);
    Array PThreadedCode12098 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12099, (Optr)&t_push_closure, (Optr)PBlock12100, (Optr)&t_send1, (Optr)PSend12110, (Optr)&t_method_return);
    Method PMethod12096 = new_Method_with(PArray12097, empty_Array, empty_Array, PThreadedCode12098, 1, PSend12110);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod12096, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12113 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12114 = new_Send((Optr)PSend12113, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12115 = new_Send((Optr)PSend12114, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12112 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12113, (Optr)&t_send0, (Optr)PSend12114, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12115, (Optr)&t_method_return);
    Method PMethod12111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12112, 1, PSend12115);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod12111, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12119 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12121 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12122 = new_Send((Optr)PSend12121, SMB_not, 0);
    Array PThreadedCode12120 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12121, (Optr)&t_send0, (Optr)PSend12122, (Optr)&t_method_return);
    Block PBlock12118 = new_Block_with(PArray12119, empty_Array, PThreadedCode12120, 1, PSend12122);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12123 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock12118);
    Array PThreadedCode12117 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock12118, (Optr)&t_send1, (Optr)PSend12123, (Optr)&t_method_return);
    Method PMethod12116 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12117, 1, PSend12123);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod12116, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray12125 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend12127 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend12128 = new_Send((Optr)PSend12127, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode12126 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12127, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend12128, (Optr)&t_method_return);
    Method PMethod12124 = new_Method_with(PArray12125, empty_Array, empty_Array, PThreadedCode12126, 1, PSend12128);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod12124, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend12131 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12132 = new_Send((Optr)PSend12131, SMB_size, 0);
    Array PThreadedCode12130 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12131, (Optr)&t_send0, (Optr)PSend12132, (Optr)&t_method_return);
    Method PMethod12129 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12130, 1, PSend12132);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod12129, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12135 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend12136 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12137 = new_Send((Optr)PSend12135, SMB__plus_, 1, (Optr)PSend12136);
    // size. 
    Send PSend12138 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend12139 = new_Send((Optr)PSend12137, SMB__plus_, 1, (Optr)PSend12138);
    Array PThreadedCode12134 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend12135, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend12136, (Optr)&t_send1, (Optr)PSend12137, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend12138, (Optr)&t_send1, (Optr)PSend12139, (Optr)&t_method_return);
    Method PMethod12133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12134, 1, PSend12139);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod12133, Testing_TestResult_Class);
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
    Send PSend12142 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray12144 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend12146 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray12148 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12150 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend12151 = new_Send((Optr)PSend12150, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode12149 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12150, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend12151, (Optr)&t_method_return);
    Block PBlock12147 = new_Block_with(PArray12148, empty_Array, PThreadedCode12149, 1, PSend12151);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12152 = new_Send((Optr)PSend12146, SMB_do_, 1, (Optr)PBlock12147);
    Array PThreadedCode12145 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend12146, (Optr)&t_push_closure, (Optr)PBlock12147, (Optr)&t_send1, (Optr)PSend12152, (Optr)&t_method_return);
    Block PBlock12143 = new_Block_with(PArray12144, empty_Array, PThreadedCode12145, 1, PSend12152);
    // do:. 
    Send PSend12153 = new_Send((Optr)PSend12142, SMB_do_, 1, (Optr)PBlock12143);
    Array PThreadedCode12141 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12142, (Optr)&t_push_closure, (Optr)PBlock12143, (Optr)&t_send1, (Optr)PSend12153, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12140 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12141, 2, PSend12153, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod12140, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12157 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend12159 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode12158 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend12159, (Optr)&t_method_return);
    Block PBlock12156 = new_Block_with(PArray12157, empty_Array, PThreadedCode12158, 1, PSend12159);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend12160 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock12156);
    Array PThreadedCode12155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock12156, (Optr)&t_send1, (Optr)PSend12160, (Optr)&t_method_return);
    Method PMethod12154 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12155, 1, PSend12160);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod12154, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12164 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12166 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend12167 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend12168 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12169 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12165 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend12166, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend12167, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend12168, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12169, (Optr)&t_method_return);
    Block PBlock12163 = new_Block_with(PArray12164, empty_Array, PThreadedCode12165, 4, PSend12166, PSend12167, PSend12168, PSend12169);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend12170 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12171 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend12170);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12172 = new_Send((Optr)PBlock12163, SMB_value_, 1, (Optr)PSend12171);
    Array PThreadedCode12162 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock12163, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12170, (Optr)&t_send1, (Optr)PSend12171, (Optr)&t_send1, (Optr)PSend12172, (Optr)&t_method_return);
    Method PMethod12161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12162, 1, PSend12172);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod12161, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend12175 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12176 = new_Send((Optr)PSend12175, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12177 = new_Send((Optr)PSend12176, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12174 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12175, (Optr)&t_send0, (Optr)PSend12176, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12177, (Optr)&t_method_return);
    Method PMethod12173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12174, 1, PSend12177);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod12173, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12179 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12181 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode12180 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12181, (Optr)&t_method_return);
    Method PMethod12178 = new_Method_with(PArray12179, empty_Array, empty_Array, PThreadedCode12180, 1, PSend12181);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod12178, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode12183 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod12182 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12183, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod12182, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode12185 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod12184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12185, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod12184, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray12187 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray12188 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12191 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign12190 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend12191);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12193 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign12192 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend12193);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend12194 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend12195 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12196 = new_Send((Optr)PSend12195, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12197 = new_Send((Optr)PSend12196, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode12189 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12190, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12191, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12192, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12193, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend12194, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend12195, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend12196, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend12197, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12186 = new_Method_with(PArray12187, PArray12188, empty_Array, PThreadedCode12189, 5, PAssign12190, PAssign12192, PSend12194, PSend12197, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod12186, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12201 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend12203 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12204 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend12205 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend12204);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend12206 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend12207 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend12206);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend12208 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend12209 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend12208);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12210 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12202 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12203, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12204, (Optr)&t_send2, (Optr)PSend12205, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12206, (Optr)&t_send2, (Optr)PSend12207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12208, (Optr)&t_send2, (Optr)PSend12209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12210, (Optr)&t_method_return);
    Block PBlock12200 = new_Block_with(PArray12201, empty_Array, PThreadedCode12202, 5, PSend12203, PSend12205, PSend12207, PSend12209, PSend12210);
    // new. 
    Send PSend12211 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12212 = new_Send((Optr)PBlock12200, SMB_value_, 1, (Optr)PSend12211);
    Array PThreadedCode12199 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12200, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend12211, (Optr)&t_send1, (Optr)PSend12212, (Optr)&t_method_return);
    Method PMethod12198 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12199, 1, PSend12212);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod12198, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12214 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray12215 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12218 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12221 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign12220 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend12221);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend12224 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12225 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12224);
    Array PThreadedCode12223 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12224, (Optr)&t_send1, (Optr)PSend12225, (Optr)&t_block_return);
    Block PBlock12222 = new_Block_with(empty_Array, empty_Array, PThreadedCode12223, 1, PSend12225);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12226 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock12222);
    Array PThreadedCode12219 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12220, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12221, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock12222, (Optr)&t_send1, (Optr)PSend12226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock12217 = new_Block_with(PArray12218, empty_Array, PThreadedCode12219, 3, PAssign12220, PSend12226, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12227 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12217);
    Array PThreadedCode12216 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12217, (Optr)&t_send1, (Optr)PSend12227, (Optr)&t_method_return);
    Method PMethod12213 = new_Method_with(PArray12214, PArray12215, empty_Array, PThreadedCode12216, 1, PSend12227);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod12213, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12229 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend12231 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12232 = new_Send((Optr)PSend12231, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12230 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12231, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12232, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12228 = new_Method_with(PArray12229, empty_Array, empty_Array, PThreadedCode12230, 2, PSend12232, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod12228, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12234 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend12236 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12237 = new_Send((Optr)PSend12236, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12235 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12236, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12237, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12233 = new_Method_with(PArray12234, empty_Array, empty_Array, PThreadedCode12235, 2, PSend12237, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod12233, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode12239 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod12238 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12239, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod12238, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray12241 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend12243 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode12242 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend12243, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12240 = new_Method_with(PArray12241, empty_Array, empty_Array, PThreadedCode12242, 2, PSend12243, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod12240, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12245 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray12246 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend12249 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign12248 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend12249);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend12250 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray12252 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12254 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode12256 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock12255 = new_Block_with(empty_Array, empty_Array, PThreadedCode12256, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend12257 = new_Send((Optr)PSend12254, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock12255);
    Array PThreadedCode12253 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend12254, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock12255, (Optr)&t_send2, (Optr)PSend12257, (Optr)&t_method_return);
    Block PBlock12251 = new_Block_with(PArray12252, empty_Array, PThreadedCode12253, 1, PSend12257);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12258 = new_Send((Optr)PSend12250, SMB_do_, 1, (Optr)PBlock12251);
    Array PThreadedCode12247 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12248, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend12249, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12250, (Optr)&t_push_closure, (Optr)PBlock12251, (Optr)&t_send1, (Optr)PSend12258, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12244 = new_Method_with(PArray12245, PArray12246, empty_Array, PThreadedCode12247, 3, PAssign12248, PSend12258, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod12244, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend12261 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode12260 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12261, (Optr)&t_method_return);
    Method PMethod12259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12260, 1, PSend12261);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod12259, HEADER(Testing_TestResult_Class));
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