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
    Array PArray11560 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11561 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11565 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11567 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11569 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11570 = new_Send((Optr)PSend11569, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11568 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11569, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11570, (Optr)&t_method_return);
    Block PBlock11566 = new_Block_with(PArray11567, empty_Array, PThreadedCode11568, 1, PSend11570);
    Array PArray11572 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11574 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11573 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11574, (Optr)&t_method_return);
    Block PBlock11571 = new_Block_with(PArray11572, empty_Array, PThreadedCode11573, 1, PSend11574);
    // select:thenCollect:. 
    Send PSend11564 = new_Send((Optr)PSend11565, SMB_select_thenCollect_, 2, (Optr)PBlock11566, (Optr)PBlock11571);
    Assign PAssign11563 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11564);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11577 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11579 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11581 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11582 = new_Send((Optr)PSend11581, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11580 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11581, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11582, (Optr)&t_method_return);
    Block PBlock11578 = new_Block_with(PArray11579, empty_Array, PThreadedCode11580, 1, PSend11582);
    Array PArray11584 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11586 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11585 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11586, (Optr)&t_method_return);
    Block PBlock11583 = new_Block_with(PArray11584, empty_Array, PThreadedCode11585, 1, PSend11586);
    // select:thenCollect:. 
    Send PSend11576 = new_Send((Optr)PSend11577, SMB_select_thenCollect_, 2, (Optr)PBlock11578, (Optr)PBlock11583);
    Assign PAssign11575 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11576);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11589 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11591 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11593 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11594 = new_Send((Optr)PSend11593, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11592 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11593, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11594, (Optr)&t_method_return);
    Block PBlock11590 = new_Block_with(PArray11591, empty_Array, PThreadedCode11592, 1, PSend11594);
    Array PArray11596 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11598 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11597 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11598, (Optr)&t_method_return);
    Block PBlock11595 = new_Block_with(PArray11596, empty_Array, PThreadedCode11597, 1, PSend11598);
    // select:thenCollect:. 
    Send PSend11588 = new_Send((Optr)PSend11589, SMB_select_thenCollect_, 2, (Optr)PBlock11590, (Optr)PBlock11595);
    Assign PAssign11587 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11588);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11600 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11602 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11603 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11602);
    // asSet. 
    Send PSend11604 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11605 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11604);
    // asSet. 
    Send PSend11606 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11607 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11606);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11608 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11601 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11602, (Optr)&t_send2, (Optr)PSend11603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11604, (Optr)&t_send2, (Optr)PSend11605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11606, (Optr)&t_send2, (Optr)PSend11607, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11608, (Optr)&t_method_return);
    Block PBlock11599 = new_Block_with(PArray11600, empty_Array, PThreadedCode11601, 4, PSend11603, PSend11605, PSend11607, PSend11608);
    // class. 
    Send PSend11609 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11610 = new_Send((Optr)PSend11609, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11611 = new_Send((Optr)PBlock11599, SMB_value_, 1, (Optr)PSend11610);
    Array PThreadedCode11562 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11563, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11565, (Optr)&t_push_closure, (Optr)PBlock11566, (Optr)&t_push_closure, (Optr)PBlock11571, (Optr)&t_send2, (Optr)PSend11564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11575, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11577, (Optr)&t_push_closure, (Optr)PBlock11578, (Optr)&t_push_closure, (Optr)PBlock11583, (Optr)&t_send2, (Optr)PSend11576, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11587, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11589, (Optr)&t_push_closure, (Optr)PBlock11590, (Optr)&t_push_closure, (Optr)PBlock11595, (Optr)&t_send2, (Optr)PSend11588, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11599, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11609, (Optr)&t_send0, (Optr)PSend11610, (Optr)&t_send1, (Optr)PSend11611, (Optr)&t_method_return);
    Method PMethod11559 = new_Method_with(PArray11560, PArray11561, empty_Array, PThreadedCode11562, 4, PAssign11563, PAssign11575, PAssign11587, PSend11611);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11559, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11614 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11615 = new_Send((Optr)PSend11614, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11618 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11619 = new_Send((Optr)PSend11618, SMB_not, 0);
    Array PThreadedCode11617 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11618, (Optr)&t_send0, (Optr)PSend11619, (Optr)&t_block_return);
    Block PBlock11616 = new_Block_with(empty_Array, empty_Array, PThreadedCode11617, 1, PSend11619);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11620 = new_Send((Optr)PSend11615, SMB_and_, 1, (Optr)PBlock11616);
    Array PThreadedCode11613 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11614, (Optr)&t_send0, (Optr)PSend11615, (Optr)&t_push_closure, (Optr)PBlock11616, (Optr)&t_send1, (Optr)PSend11620, (Optr)&t_method_return);
    Method PMethod11612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11613, 1, PSend11620);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11612, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11622 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11624 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11626 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11628 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11629 = new_Send((Optr)PSend11628, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11632 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11633 = new_Send((Optr)PSend11632, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11631 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11632, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11633, (Optr)&t_block_return);
    Block PBlock11630 = new_Block_with(empty_Array, empty_Array, PThreadedCode11631, 1, PSend11633);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11634 = new_Send((Optr)PSend11629, SMB_and_, 1, (Optr)PBlock11630);
    Array PThreadedCode11627 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11628, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11629, (Optr)&t_push_closure, (Optr)PBlock11630, (Optr)&t_send1, (Optr)PSend11634, (Optr)&t_method_return);
    Block PBlock11625 = new_Block_with(PArray11626, empty_Array, PThreadedCode11627, 1, PSend11634);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11635 = new_Send((Optr)PSend11624, SMB_anySatisfy_, 1, (Optr)PBlock11625);
    Array PThreadedCode11623 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11624, (Optr)&t_push_closure, (Optr)PBlock11625, (Optr)&t_send1, (Optr)PSend11635, (Optr)&t_method_return);
    Method PMethod11621 = new_Method_with(PArray11622, empty_Array, empty_Array, PThreadedCode11623, 1, PSend11635);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11621, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11638 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11640 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11639 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11640);
    // new. 
    Send PSend11642 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11641 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11642);
    // new. 
    Send PSend11644 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11643 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11644);
    Array PThreadedCode11637 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11638, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11639, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11640, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11641, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11642, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11643, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11644, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11636 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11637, 5, PSuper11638, PAssign11639, PAssign11641, PAssign11643, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11636, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11646 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11647 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11651 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11653 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11655 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11654 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11655, (Optr)&t_method_return);
    Block PBlock11652 = new_Block_with(PArray11653, empty_Array, PThreadedCode11654, 1, PSend11655);
    // collect:. 
    Send PSend11650 = new_Send((Optr)PSend11651, SMB_collect_, 1, (Optr)PBlock11652);
    Assign PAssign11649 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11650);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11658 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11660 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11662 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11661 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11662, (Optr)&t_method_return);
    Block PBlock11659 = new_Block_with(PArray11660, empty_Array, PThreadedCode11661, 1, PSend11662);
    // collect:. 
    Send PSend11657 = new_Send((Optr)PSend11658, SMB_collect_, 1, (Optr)PBlock11659);
    Assign PAssign11656 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11657);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11665 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11667 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11669 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11668 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11669, (Optr)&t_method_return);
    Block PBlock11666 = new_Block_with(PArray11667, empty_Array, PThreadedCode11668, 1, PSend11669);
    // collect:. 
    Send PSend11664 = new_Send((Optr)PSend11665, SMB_collect_, 1, (Optr)PBlock11666);
    Assign PAssign11663 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11664);
    // passed. 
    Send PSend11672 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11674 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11676 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11675 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11676, (Optr)&t_method_return);
    Block PBlock11673 = new_Block_with(PArray11674, empty_Array, PThreadedCode11675, 1, PSend11676);
    // collect:. 
    Send PSend11671 = new_Send((Optr)PSend11672, SMB_collect_, 1, (Optr)PBlock11673);
    Assign PAssign11670 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11671);
    // failures. 
    Send PSend11679 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11681 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11683 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11682 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11683, (Optr)&t_method_return);
    Block PBlock11680 = new_Block_with(PArray11681, empty_Array, PThreadedCode11682, 1, PSend11683);
    // collect:. 
    Send PSend11678 = new_Send((Optr)PSend11679, SMB_collect_, 1, (Optr)PBlock11680);
    Assign PAssign11677 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11678);
    // errors. 
    Send PSend11686 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11688 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11690 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11689 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11690, (Optr)&t_method_return);
    Block PBlock11687 = new_Block_with(PArray11688, empty_Array, PThreadedCode11689, 1, PSend11690);
    // collect:. 
    Send PSend11685 = new_Send((Optr)PSend11686, SMB_collect_, 1, (Optr)PBlock11687);
    Assign PAssign11684 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11685);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11691 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11692 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11693 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11694 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11691, (Optr)PSend11692, (Optr)PSend11693);
    Array PThreadedCode11648 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11649, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11651, (Optr)&t_push_closure, (Optr)PBlock11652, (Optr)&t_send1, (Optr)PSend11650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11656, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11658, (Optr)&t_push_closure, (Optr)PBlock11659, (Optr)&t_send1, (Optr)PSend11657, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11663, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11665, (Optr)&t_push_closure, (Optr)PBlock11666, (Optr)&t_send1, (Optr)PSend11664, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11670, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11672, (Optr)&t_push_closure, (Optr)PBlock11673, (Optr)&t_send1, (Optr)PSend11671, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11677, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11679, (Optr)&t_push_closure, (Optr)PBlock11680, (Optr)&t_send1, (Optr)PSend11678, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11684, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11686, (Optr)&t_push_closure, (Optr)PBlock11687, (Optr)&t_send1, (Optr)PSend11685, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11691, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11692, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11693, (Optr)&t_send3, (Optr)PSend11694, (Optr)&t_method_return);
    Method PMethod11645 = new_Method_with(PArray11646, PArray11647, empty_Array, PThreadedCode11648, 7, PAssign11649, PAssign11656, PAssign11663, PAssign11670, PAssign11677, PAssign11684, PSend11694);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11645, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11697 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11698 = new_Send((Optr)PSend11697, SMB_size, 0);
    Array PThreadedCode11696 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11697, (Optr)&t_send0, (Optr)PSend11698, (Optr)&t_method_return);
    Method PMethod11695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11696, 1, PSend11698);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11695, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11700 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11702 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11701 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11702, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11699 = new_Method_with(PArray11700, empty_Array, empty_Array, PThreadedCode11701, 2, PAssign11702, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11699, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11705 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11704 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11705, (Optr)&t_method_return);
    Method PMethod11703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11704, 1, PSend11705);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11703, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11708 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11709 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11710 = new_Send((Optr)PSend11708, SMB__append_, 1, (Optr)PSend11709);
    Array PThreadedCode11707 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11708, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11709, (Optr)&t_send1, (Optr)PSend11710, (Optr)&t_method_return);
    Method PMethod11706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11707, 1, PSend11710);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11706, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11712 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11713 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11717 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11720 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11722 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11723 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11724 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11721 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11722, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11723, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11724, (Optr)&t_method_return);
    Block PBlock11719 = new_Block_with(PArray11720, empty_Array, PThreadedCode11721, 3, PSend11722, PSend11723, PSend11724);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11725 = new_Send((Optr)PBlock11719, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11727 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11729 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11730 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11728 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11729, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11730, (Optr)&t_method_return);
    Block PBlock11726 = new_Block_with(PArray11727, empty_Array, PThreadedCode11728, 2, PSend11729, PSend11730);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11731 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11726);
    Array PThreadedCode11718 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11719, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11725, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11726, (Optr)&t_send1, (Optr)PSend11731, (Optr)&t_method_return);
    Block PBlock11716 = new_Block_with(PArray11717, empty_Array, PThreadedCode11718, 2, PSend11725, PSend11731);
    Assign PAssign11715 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11716);
    // printOn:. 
    Send PSend11732 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11733 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11734 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11733_Const = new_Constant((Optr)string_11733);
    // value:value:. 
    Send PSend11735 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11733_Const, (Optr)PSend11734);
    String string_11736 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11737 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11736_Const = new_Constant((Optr)string_11736);
    // value:value:. 
    Send PSend11738 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11736_Const, (Optr)PSend11737);
    Array PThreadedCode11714 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11715, (Optr)&t_push_closure, (Optr)PBlock11716, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11732, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11733, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11734, (Optr)&t_send2, (Optr)PSend11735, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11736, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11737, (Optr)&t_send2, (Optr)PSend11738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11711 = new_Method_with(PArray11712, PArray11713, empty_Array, PThreadedCode11714, 5, PAssign11715, PSend11732, PSend11735, PSend11738, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11711, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11740 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray11741 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign11743 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend11748 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode11747 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11748, (Optr)&t_block_return);
    Block PBlock11746 = new_Block_with(empty_Array, empty_Array, PThreadedCode11747, 1, PSend11748);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11749 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11750 = new_Send((Optr)PSend11749, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray11752 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11754 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11755 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend11756 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11753 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11754, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11755, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11756, (Optr)&t_method_return);
    Block PBlock11751 = new_Block_with(PArray11752, empty_Array, PThreadedCode11753, 3, PSend11754, PAssign11755, PSend11756);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11757 = new_Send((Optr)PBlock11746, SMB_on_do_, 2, (Optr)PSend11750, (Optr)PBlock11751);
    Array PThreadedCode11745 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11746, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11749, (Optr)&t_send0, (Optr)PSend11750, (Optr)&t_push_closure, (Optr)PBlock11751, (Optr)&t_send2, (Optr)PSend11757, (Optr)&t_block_return);
    Block PBlock11744 = new_Block_with(empty_Array, empty_Array, PThreadedCode11745, 1, PSend11757);
    // class. 
    Send PSend11758 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11759 = new_Send((Optr)PSend11758, SMB_error, 0);
    Array PArray11761 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend11763 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11764 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend11765 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11762 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11763, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11764, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11765, (Optr)&t_method_return);
    Block PBlock11760 = new_Block_with(PArray11761, empty_Array, PThreadedCode11762, 3, PSend11763, PAssign11764, PSend11765);
    // on:do:. 
    Send PSend11766 = new_Send((Optr)PBlock11744, SMB_on_do_, 2, (Optr)PSend11759, (Optr)PBlock11760);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend11770 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11769 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11770, (Optr)&t_block_return);
    Block PBlock11768 = new_Block_with(empty_Array, empty_Array, PThreadedCode11769, 1, PSend11770);
    // ifTrue:. 
    Send PSend11767 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock11768);
    Array PThreadedCode11742 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign11743, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11744, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11758, (Optr)&t_send0, (Optr)PSend11759, (Optr)&t_push_closure, (Optr)PBlock11760, (Optr)&t_send2, (Optr)PSend11766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend11767, (Optr)PBlock11768, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11739 = new_Method_with(PArray11740, PArray11741, empty_Array, PThreadedCode11742, 4, PAssign11743, PSend11766, PSend11767, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11739, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11773 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11774 = new_Send((Optr)PSend11773, SMB_size, 0);
    Array PThreadedCode11772 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11773, (Optr)&t_send0, (Optr)PSend11774, (Optr)&t_method_return);
    Method PMethod11771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11772, 1, PSend11774);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod11771, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11778 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11777 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11778);
    Array PThreadedCode11776 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11777, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11778, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11776, 2, PAssign11777, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod11775, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend11781 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray11783 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11785 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend11786 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend11787 = new_Send((Optr)PSend11785, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend11786);
    Array PThreadedCode11784 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11785, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend11786, (Optr)&t_send2, (Optr)PSend11787, (Optr)&t_method_return);
    Block PBlock11782 = new_Block_with(PArray11783, empty_Array, PThreadedCode11784, 1, PSend11787);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11788 = new_Send((Optr)PSend11781, SMB_do_, 1, (Optr)PBlock11782);
    Array PThreadedCode11780 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11781, (Optr)&t_push_closure, (Optr)PBlock11782, (Optr)&t_send1, (Optr)PSend11788, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11780, 2, PSend11788, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod11779, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11790 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11792 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11794 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11796 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11797 = new_Send((Optr)PSend11796, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11800 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11801 = new_Send((Optr)PSend11800, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11799 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11800, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11801, (Optr)&t_block_return);
    Block PBlock11798 = new_Block_with(empty_Array, empty_Array, PThreadedCode11799, 1, PSend11801);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11802 = new_Send((Optr)PSend11797, SMB_and_, 1, (Optr)PBlock11798);
    Array PThreadedCode11795 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11796, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11797, (Optr)&t_push_closure, (Optr)PBlock11798, (Optr)&t_send1, (Optr)PSend11802, (Optr)&t_method_return);
    Block PBlock11793 = new_Block_with(PArray11794, empty_Array, PThreadedCode11795, 1, PSend11802);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11803 = new_Send((Optr)PSend11792, SMB_anySatisfy_, 1, (Optr)PBlock11793);
    Array PThreadedCode11791 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11792, (Optr)&t_push_closure, (Optr)PBlock11793, (Optr)&t_send1, (Optr)PSend11803, (Optr)&t_method_return);
    Method PMethod11789 = new_Method_with(PArray11790, empty_Array, empty_Array, PThreadedCode11791, 1, PSend11803);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod11789, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode11805 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod11804 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11805, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod11804, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11809 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11808 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11809);
    Array PThreadedCode11807 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11808, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11809, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11806 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11807, 2, PAssign11808, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod11806, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11813 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11815 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11814 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11815, (Optr)&t_method_return);
    Block PBlock11812 = new_Block_with(PArray11813, empty_Array, PThreadedCode11814, 1, PSend11815);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11816 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock11812);
    Array PThreadedCode11811 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock11812, (Optr)&t_send1, (Optr)PSend11816, (Optr)&t_method_return);
    Method PMethod11810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11811, 1, PSend11816);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod11810, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11818 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11820 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11821 = new_Send((Optr)PSend11820, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11819 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11820, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11821, (Optr)&t_method_return);
    Method PMethod11817 = new_Method_with(PArray11818, empty_Array, empty_Array, PThreadedCode11819, 1, PSend11821);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod11817, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11824 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11826 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11828 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode11827 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11828, (Optr)&t_method_return);
    Block PBlock11825 = new_Block_with(PArray11826, empty_Array, PThreadedCode11827, 1, PSend11828);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend11829 = new_Send((Optr)PSend11824, SMB_collect_, 1, (Optr)PBlock11825);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11830 = new_Send((Optr)PSend11829, SMB_asSet, 0);
    Array PThreadedCode11823 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11824, (Optr)&t_push_closure, (Optr)PBlock11825, (Optr)&t_send1, (Optr)PSend11829, (Optr)&t_send0, (Optr)PSend11830, (Optr)&t_method_return);
    Method PMethod11822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11823, 1, PSend11830);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod11822, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11833 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11834 = new_Send((Optr)PSend11833, SMB_size, 0);
    Array PThreadedCode11832 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11833, (Optr)&t_send0, (Optr)PSend11834, (Optr)&t_method_return);
    Method PMethod11831 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11832, 1, PSend11834);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod11831, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11837 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11838 = new_Send((Optr)PSend11837, SMB_size, 0);
    Array PThreadedCode11836 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11837, (Optr)&t_send0, (Optr)PSend11838, (Optr)&t_method_return);
    Method PMethod11835 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11836, 1, PSend11838);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod11835, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11842 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11844 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11845 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11844);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11846 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11843 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11844, (Optr)&t_send1, (Optr)PSend11845, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11846, (Optr)&t_method_return);
    Block PBlock11841 = new_Block_with(PArray11842, empty_Array, PThreadedCode11843, 2, PSend11845, PSend11846);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11847 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11848 = new_Send((Optr)PBlock11841, SMB_value_, 1, (Optr)PSend11847);
    Array PThreadedCode11840 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11841, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11847, (Optr)&t_send1, (Optr)PSend11848, (Optr)&t_method_return);
    Method PMethod11839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11840, 1, PSend11848);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod11839, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend11851 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode11850 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11851, (Optr)&t_method_return);
    Method PMethod11849 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11850, 1, PSend11851);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod11849, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11853 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11855 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11856 = new_Send((Optr)PSend11855, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11854 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11855, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11856, (Optr)&t_method_return);
    Method PMethod11852 = new_Method_with(PArray11853, empty_Array, empty_Array, PThreadedCode11854, 1, PSend11856);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod11852, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11859 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11860 = new_Send((Optr)PSend11859, SMB_size, 0);
    Array PThreadedCode11858 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11859, (Optr)&t_send0, (Optr)PSend11860, (Optr)&t_method_return);
    Method PMethod11857 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11858, 1, PSend11860);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod11857, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11864 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11866 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11867 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11866);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11868 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend11869 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11868);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11870 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11865 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11866, (Optr)&t_send1, (Optr)PSend11867, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11868, (Optr)&t_send1, (Optr)PSend11869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11870, (Optr)&t_method_return);
    Block PBlock11863 = new_Block_with(PArray11864, empty_Array, PThreadedCode11865, 3, PSend11867, PSend11869, PSend11870);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11871 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11872 = new_Send((Optr)PBlock11863, SMB_value_, 1, (Optr)PSend11871);
    Array PThreadedCode11862 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock11863, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11871, (Optr)&t_send1, (Optr)PSend11872, (Optr)&t_method_return);
    Method PMethod11861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11862, 1, PSend11872);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod11861, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11875 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11876 = new_Send((Optr)PSend11875, SMB_size, 0);
    Array PThreadedCode11874 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11875, (Optr)&t_send0, (Optr)PSend11876, (Optr)&t_method_return);
    Method PMethod11873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11874, 1, PSend11876);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod11873, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend11879 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11880 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend11879);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11882 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11884 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11885 = new_Send((Optr)PSend11884, SMB_not, 0);
    Array PThreadedCode11883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11884, (Optr)&t_send0, (Optr)PSend11885, (Optr)&t_method_return);
    Block PBlock11881 = new_Block_with(PArray11882, empty_Array, PThreadedCode11883, 1, PSend11885);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11886 = new_Send((Optr)PSend11880, SMB_select_, 1, (Optr)PBlock11881);
    Array PThreadedCode11878 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11879, (Optr)&t_send1, (Optr)PSend11880, (Optr)&t_push_closure, (Optr)PBlock11881, (Optr)&t_send1, (Optr)PSend11886, (Optr)&t_method_return);
    Method PMethod11877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11878, 1, PSend11886);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod11877, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11890 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11892 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11891 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11892, (Optr)&t_method_return);
    Block PBlock11889 = new_Block_with(PArray11890, empty_Array, PThreadedCode11891, 1, PSend11892);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11893 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11889);
    Array PThreadedCode11888 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11889, (Optr)&t_send1, (Optr)PSend11893, (Optr)&t_method_return);
    Method PMethod11887 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11888, 1, PSend11893);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod11887, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11896 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11897 = new_Send((Optr)PSend11896, SMB_size, 0);
    Array PThreadedCode11895 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11896, (Optr)&t_send0, (Optr)PSend11897, (Optr)&t_method_return);
    Method PMethod11894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11895, 1, PSend11897);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod11894, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11899 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11901 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11903 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11905 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11906 = new_Send((Optr)PSend11905, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11909 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11910 = new_Send((Optr)PSend11909, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11908 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11909, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11910, (Optr)&t_block_return);
    Block PBlock11907 = new_Block_with(empty_Array, empty_Array, PThreadedCode11908, 1, PSend11910);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11911 = new_Send((Optr)PSend11906, SMB_and_, 1, (Optr)PBlock11907);
    Array PThreadedCode11904 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11905, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11906, (Optr)&t_push_closure, (Optr)PBlock11907, (Optr)&t_send1, (Optr)PSend11911, (Optr)&t_method_return);
    Block PBlock11902 = new_Block_with(PArray11903, empty_Array, PThreadedCode11904, 1, PSend11911);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11912 = new_Send((Optr)PSend11901, SMB_anySatisfy_, 1, (Optr)PBlock11902);
    Array PThreadedCode11900 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11901, (Optr)&t_push_closure, (Optr)PBlock11902, (Optr)&t_send1, (Optr)PSend11912, (Optr)&t_method_return);
    Method PMethod11898 = new_Method_with(PArray11899, empty_Array, empty_Array, PThreadedCode11900, 1, PSend11912);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod11898, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11915 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11916 = new_Send((Optr)PSend11915, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11917 = new_Send((Optr)PSend11916, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11914 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11915, (Optr)&t_send0, (Optr)PSend11916, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11917, (Optr)&t_method_return);
    Method PMethod11913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11914, 1, PSend11917);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod11913, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11921 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11923 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11924 = new_Send((Optr)PSend11923, SMB_not, 0);
    Array PThreadedCode11922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11923, (Optr)&t_send0, (Optr)PSend11924, (Optr)&t_method_return);
    Block PBlock11920 = new_Block_with(PArray11921, empty_Array, PThreadedCode11922, 1, PSend11924);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11925 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11920);
    Array PThreadedCode11919 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11920, (Optr)&t_send1, (Optr)PSend11925, (Optr)&t_method_return);
    Method PMethod11918 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11919, 1, PSend11925);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod11918, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11927 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11929 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11930 = new_Send((Optr)PSend11929, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11928 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11929, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11930, (Optr)&t_method_return);
    Method PMethod11926 = new_Method_with(PArray11927, empty_Array, empty_Array, PThreadedCode11928, 1, PSend11930);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod11926, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11933 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11934 = new_Send((Optr)PSend11933, SMB_size, 0);
    Array PThreadedCode11932 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11933, (Optr)&t_send0, (Optr)PSend11934, (Optr)&t_method_return);
    Method PMethod11931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11932, 1, PSend11934);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod11931, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11937 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend11938 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11939 = new_Send((Optr)PSend11937, SMB__plus_, 1, (Optr)PSend11938);
    // size. 
    Send PSend11940 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend11941 = new_Send((Optr)PSend11939, SMB__plus_, 1, (Optr)PSend11940);
    Array PThreadedCode11936 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend11937, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11938, (Optr)&t_send1, (Optr)PSend11939, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend11940, (Optr)&t_send1, (Optr)PSend11941, (Optr)&t_method_return);
    Method PMethod11935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11936, 1, PSend11941);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod11935, Testing_TestResult_Class);
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
    Send PSend11944 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray11946 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend11948 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray11950 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11952 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend11953 = new_Send((Optr)PSend11952, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode11951 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11952, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend11953, (Optr)&t_method_return);
    Block PBlock11949 = new_Block_with(PArray11950, empty_Array, PThreadedCode11951, 1, PSend11953);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11954 = new_Send((Optr)PSend11948, SMB_do_, 1, (Optr)PBlock11949);
    Array PThreadedCode11947 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend11948, (Optr)&t_push_closure, (Optr)PBlock11949, (Optr)&t_send1, (Optr)PSend11954, (Optr)&t_method_return);
    Block PBlock11945 = new_Block_with(PArray11946, empty_Array, PThreadedCode11947, 1, PSend11954);
    // do:. 
    Send PSend11955 = new_Send((Optr)PSend11944, SMB_do_, 1, (Optr)PBlock11945);
    Array PThreadedCode11943 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend11944, (Optr)&t_push_closure, (Optr)PBlock11945, (Optr)&t_send1, (Optr)PSend11955, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11942 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11943, 2, PSend11955, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod11942, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11959 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11961 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11960 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11961, (Optr)&t_method_return);
    Block PBlock11958 = new_Block_with(PArray11959, empty_Array, PThreadedCode11960, 1, PSend11961);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11962 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock11958);
    Array PThreadedCode11957 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock11958, (Optr)&t_send1, (Optr)PSend11962, (Optr)&t_method_return);
    Method PMethod11956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11957, 1, PSend11962);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod11956, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11966 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11968 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend11969 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend11970 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11971 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11967 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend11968, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend11969, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend11970, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11971, (Optr)&t_method_return);
    Block PBlock11965 = new_Block_with(PArray11966, empty_Array, PThreadedCode11967, 4, PSend11968, PSend11969, PSend11970, PSend11971);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend11972 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend11973 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend11972);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11974 = new_Send((Optr)PBlock11965, SMB_value_, 1, (Optr)PSend11973);
    Array PThreadedCode11964 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11965, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11972, (Optr)&t_send1, (Optr)PSend11973, (Optr)&t_send1, (Optr)PSend11974, (Optr)&t_method_return);
    Method PMethod11963 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11964, 1, PSend11974);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11963, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11977 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11978 = new_Send((Optr)PSend11977, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11979 = new_Send((Optr)PSend11978, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11977, (Optr)&t_send0, (Optr)PSend11978, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11979, (Optr)&t_method_return);
    Method PMethod11975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11976, 1, PSend11979);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod11975, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11981 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend11983 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode11982 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend11983, (Optr)&t_method_return);
    Method PMethod11980 = new_Method_with(PArray11981, empty_Array, empty_Array, PThreadedCode11982, 1, PSend11983);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod11980, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode11985 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11984 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11985, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod11984, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode11987 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11986 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11987, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod11986, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray11989 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray11990 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11993 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign11992 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend11993);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11995 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign11994 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend11995);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend11996 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend11997 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11998 = new_Send((Optr)PSend11997, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11999 = new_Send((Optr)PSend11998, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode11991 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11992, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11993, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11994, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11995, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend11996, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend11997, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend11998, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend11999, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11988 = new_Method_with(PArray11989, PArray11990, empty_Array, PThreadedCode11991, 5, PAssign11992, PAssign11994, PSend11996, PSend11999, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod11988, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12003 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend12005 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12006 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend12007 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend12006);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend12008 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend12009 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend12008);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend12010 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend12011 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend12010);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12012 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12004 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12006, (Optr)&t_send2, (Optr)PSend12007, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12008, (Optr)&t_send2, (Optr)PSend12009, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12010, (Optr)&t_send2, (Optr)PSend12011, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12012, (Optr)&t_method_return);
    Block PBlock12002 = new_Block_with(PArray12003, empty_Array, PThreadedCode12004, 5, PSend12005, PSend12007, PSend12009, PSend12011, PSend12012);
    // new. 
    Send PSend12013 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12014 = new_Send((Optr)PBlock12002, SMB_value_, 1, (Optr)PSend12013);
    Array PThreadedCode12001 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12002, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend12013, (Optr)&t_send1, (Optr)PSend12014, (Optr)&t_method_return);
    Method PMethod12000 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12001, 1, PSend12014);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod12000, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12016 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray12017 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12020 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12023 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign12022 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend12023);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend12026 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12027 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12026);
    Array PThreadedCode12025 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12026, (Optr)&t_send1, (Optr)PSend12027, (Optr)&t_block_return);
    Block PBlock12024 = new_Block_with(empty_Array, empty_Array, PThreadedCode12025, 1, PSend12027);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12028 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock12024);
    Array PThreadedCode12021 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12022, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12023, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock12024, (Optr)&t_send1, (Optr)PSend12028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock12019 = new_Block_with(PArray12020, empty_Array, PThreadedCode12021, 3, PAssign12022, PSend12028, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12029 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12019);
    Array PThreadedCode12018 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12019, (Optr)&t_send1, (Optr)PSend12029, (Optr)&t_method_return);
    Method PMethod12015 = new_Method_with(PArray12016, PArray12017, empty_Array, PThreadedCode12018, 1, PSend12029);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod12015, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12031 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend12033 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12034 = new_Send((Optr)PSend12033, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12032 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12033, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12034, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12030 = new_Method_with(PArray12031, empty_Array, empty_Array, PThreadedCode12032, 2, PSend12034, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod12030, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12036 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend12038 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12039 = new_Send((Optr)PSend12038, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12037 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12038, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12039, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12035 = new_Method_with(PArray12036, empty_Array, empty_Array, PThreadedCode12037, 2, PSend12039, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod12035, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode12041 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod12040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12041, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod12040, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray12043 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend12045 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode12044 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend12045, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12042 = new_Method_with(PArray12043, empty_Array, empty_Array, PThreadedCode12044, 2, PSend12045, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod12042, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12047 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray12048 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend12051 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign12050 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend12051);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend12052 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray12054 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12056 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode12058 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock12057 = new_Block_with(empty_Array, empty_Array, PThreadedCode12058, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend12059 = new_Send((Optr)PSend12056, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock12057);
    Array PThreadedCode12055 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend12056, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock12057, (Optr)&t_send2, (Optr)PSend12059, (Optr)&t_method_return);
    Block PBlock12053 = new_Block_with(PArray12054, empty_Array, PThreadedCode12055, 1, PSend12059);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12060 = new_Send((Optr)PSend12052, SMB_do_, 1, (Optr)PBlock12053);
    Array PThreadedCode12049 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12050, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend12051, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12052, (Optr)&t_push_closure, (Optr)PBlock12053, (Optr)&t_send1, (Optr)PSend12060, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12046 = new_Method_with(PArray12047, PArray12048, empty_Array, PThreadedCode12049, 3, PAssign12050, PSend12060, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod12046, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend12063 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode12062 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12063, (Optr)&t_method_return);
    Method PMethod12061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12062, 1, PSend12063);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod12061, HEADER(Testing_TestResult_Class));
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